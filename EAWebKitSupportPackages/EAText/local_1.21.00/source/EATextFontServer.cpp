///////////////////////////////////////////////////////////////////////////////
// EATextFontServer.cpp
//
// Copyright (c) 2004 Electronic Arts. All Rights Reserved.
// By Paul Pedriana, Maxis
//
///////////////////////////////////////////////////////////////////////////////


#include <EAText/EATextFontServer.h>
#include <EAText/EATextOutlineFont.h>
#include <EAText/EATextBmpFont.h>
#include <EAText/EATextPolygonFont.h>
#include <EAText/EATextScript.h>
#include <EAText/internal/EATextStream.h>
#include <EAStdC/EAString.h>
#include <EAStdC/EATextUtil.h>
#include <coreallocator/icoreallocatormacros.h>
#include <EAIO/EAStream.h>
#include <EAIO/PathString.h>
#include <EAIO/EAFileBase.h>
#include <EAIO/EAFileDirectory.h>
#include <EAIO/EAFileStream.h>
#include <EAIO/EAStreamMemory.h>
#include <EAIO/FnEncode.h>
#include <EASTL/fixed_string.h>
#include <EASTL/algorithm.h>
#include EA_ASSERT_HEADER
#include <stddef.h>
#include <string.h>
#include <math.h>
#if defined(EA_PLATFORM_WINDOWS)
	EA_DISABLE_ALL_VC_WARNINGS();
	#include <Windows.h>
	EA_RESTORE_ALL_VC_WARNINGS();
#endif

EA_DISABLE_VC_WARNING(4464) // relative include path contains '..' (compiling source file W : \dev\packages\EAText\dev\test\source\TestFreeType.cpp)
#include <ft2build.h>
#include FT_FREETYPE_H  // #include <freetype/freetype.h>
#include FT_SIZES_H     // #include <freetype/ftsizes.h>
EA_RESTORE_VC_WARNING()


namespace EA
{
namespace Text
{

extern volatile FT_Library gFTLibrary;

#if EATEXT_EMBEDDED_BACKUP_FONT_ENABLED
	// Here we #include an embedded TrueType font which is located inside 
	// a .inl file and which is declared as a C char array like this:
	//   const unsigned char pTrueTypeFont[] = { 0x23, 0xa2, ... }; 
	#include "internal/EmbeddedFont.inl"
#endif


// To consider: Provide a means to read secondary font directories and user-local 
// font directories. Unix-like systems provide multiple locations for fonts.
EATEXT_API uint32_t GetSystemFontDirectory(FilePathChar* pFontDirectory, uint32_t nFontDirectoryCapacity)
{
	#if EA_WINAPI_FAMILY_PARTITION(EA_WINAPI_PARTITION_DESKTOP)
		FilePathChar        pFontDirectoryTemp[_MAX_PATH];
		UINT                nStrlen = GetWindowsDirectoryW(reinterpret_cast<LPWSTR>(pFontDirectoryTemp), (UINT)EAArrayCount(pFontDirectoryTemp)); // GetWindowsDirectoryW: If the function fails, the return value is zero. To get extended error information, call GetLastError. 
		const FilePathChar* pFonts = EATEXT_FILE_PATH_CHAR("Fonts\\");

		if(nStrlen > 0) // If the Windows directory could be read...
		{
			// Build the path
			if((pFontDirectoryTemp[nStrlen - 1] != '\\') && (pFontDirectoryTemp[nStrlen - 1] != '/'))
			{
				pFontDirectoryTemp[nStrlen++] = '\\';
				pFontDirectoryTemp[nStrlen]   = '\0';
			}

			nStrlen = (UINT)EA::StdC::Strlcat(pFontDirectoryTemp, pFonts, EAArrayCount(pFontDirectoryTemp));
			EA::StdC::Strlcpy(pFontDirectory, pFontDirectoryTemp, nFontDirectoryCapacity);
		}
		else if(pFontDirectory)
			pFontDirectory[0] = 0;

		return (uint32_t)nStrlen; // Return value is the required strlen or 0 for error.

	#elif defined(EA_PLATFORM_APPLE)
		// http://support.apple.com/kb/HT2435
		int requiredStrlen = EA::StdC::Strlcpy(pFontDirectory, "/Library/Fonts/", nFontDirectoryCapacity); // or /System/Library/Fonts/
		return (uint32_t)requiredStrlen; // Return value is the required strlen or 0 for error.

	#elif defined(EA_PLATFORM_ANDROID)
		int requiredStrlen = EA::StdC::Strlcpy(pFontDirectory, "/system/fonts/", nFontDirectoryCapacity);
		return (uint32_t)requiredStrlen; // Return value is the required strlen or 0 for error.

	#elif defined(EA_PLATFORM_LINUX)
		// https://wiki.archlinux.org/index.php/Font_Configuration
		// https://wiki.ubuntu.com/Fonts
		// There are various locations in GNU/Linux in which fonts can be kept. These locations are defined in /etc/fonts/fonts.conf; 
		// standard ones include /usr/share/fonts, /usr/local/share/fonts, and /home/<username>/.fonts (where <username> is your user name). 
		// Example fonts.conf xml (the actual conf file will have a bit more): <fontconfig><dir>/usr/share/fonts</dir><dir>/usr/local/share/fonts</dir></fontconfig>
		int requiredStrlen = EA::StdC::Strlcpy(pFontDirectory, "/usr/share/fonts/", nFontDirectoryCapacity); // or maybe /usr/share/fonts/truetype/
		return (uint32_t)requiredStrlen; // Return value is the required strlen or 0 for error.

	#else
		// To consider: Pick a directory to use for the given platform.
		EA_UNUSED(nFontDirectoryCapacity);
		if(pFontDirectory)
			pFontDirectory[0] = 0;
		return 0;
	#endif
}


EATEXT_API FontType GetFontTypeFromFilePath(const FilePathChar* pFontFilePath)
{
	const FilePathChar* const pExtension = EA::IO::Path::GetFileExtension(pFontFilePath);

	if(EA::StdC::Stricmp(pExtension, EATEXT_FILE_PATH_CHAR(".bmpFont")) == 0)
		return kFontTypeBitmap;

	if(EA::StdC::Stricmp(pExtension, EATEXT_FILE_PATH_CHAR(".polygonFont")) == 0)
		return kFontTypePolygon;

	// We could conceivably check for specific types such as .tt?, .otf.
	return kFontTypeOutline;
}




#ifdef EATEXT_FONT_SERVER_ENABLED

///////////////////////////////////////////////////////////////////////////////
// FontServer
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// FontServer::FaceSource
//
FontServer::FaceSource::FaceSource(Allocator::ICoreAllocator* pCoreAllocator)
  : mpStream(NULL),
	mFontType(kFontTypeUnknown),
	mFontDescription(),
	mnFaceIndex(0),
	mFontList(EA::Allocator::EASTLICoreAllocator(EATEXT_ALLOC_PREFIX "FontServer/FaceMap/FaceSource/FontList", pCoreAllocator ? pCoreAllocator : EA::Text::GetAllocator())),
	mpFaceData(NULL)
{
}


///////////////////////////////////////////////////////////////////////////////
// FontServer::FaceSource
//
FontServer::FaceSource::FaceSource(const FaceSource& fs)
  : mFontList(const_cast<FontList&>(fs.mFontList).get_overflow_allocator())
{
	mpStream = NULL;
	mpFaceData = NULL;

	operator=(fs);
}


///////////////////////////////////////////////////////////////////////////////
// FontServer::~FaceSource
//
FontServer::FaceSource::~FaceSource()
{
	for(FontList::iterator itF = mFontList.begin(); itF != mFontList.end(); ++itF)
	{
		Font* const pFont = *itF;
		pFont->Release();
	}

	if(mpStream)
		mpStream->Release();

	if(mpFaceData)
		mpFaceData->Release();
}


///////////////////////////////////////////////////////////////////////////////
// FontServer::operator=
//
FontServer::FaceSource& FontServer::FaceSource::operator=(const FaceSource& fs)
{
	if(&fs != this)
	{
		mFontType        = fs.mFontType;
		mFontDescription = fs.mFontDescription;
		mnFaceIndex      = fs.mnFaceIndex;
		mFontList        = fs.mFontList;

		for(FontList::iterator itF = mFontList.begin(); itF != mFontList.end(); ++itF)
		{
			Font* const pFont = *itF;
			pFont->AddRef();
		}

		if(fs.mpStream)
			fs.mpStream->AddRef();
		if(mpStream)
			mpStream->Release();
		mpStream = fs.mpStream;

		if(fs.mpFaceData)
			fs.mpFaceData->AddRef();
		if(mpFaceData)
			mpFaceData->Release();
		mpFaceData = fs.mpFaceData;
	}

	return *this;
}


///////////////////////////////////////////////////////////////////////////////
// FontServer::Face
//
FontServer::Face::Face(Allocator::ICoreAllocator* pCoreAllocator)
  : mFaceSourceList(EA::Allocator::EASTLICoreAllocator(EATEXT_ALLOC_PREFIX "FontServer/FaceMap", pCoreAllocator ? pCoreAllocator : EA::Text::GetAllocator()))
{
	memset(mFamily, 0, sizeof(mFamily));
}


///////////////////////////////////////////////////////////////////////////////
// FontServer
//
FontServer::FontServer(Allocator::ICoreAllocator* pCoreAllocator)
	: mbInitialized(false),
	  mpCoreAllocator(pCoreAllocator ? pCoreAllocator : EA::Text::GetAllocator()),
	  mTextStyleDefault(),
	  mFaceMap(EA::Allocator::EASTLICoreAllocator(EATEXT_ALLOC_PREFIX "FontServer/FaceMap", mpCoreAllocator)),
	  mBestFitFontMap(EA::Allocator::EASTLICoreAllocator(EATEXT_ALLOC_PREFIX "FontServer/BestFitFontMap", mpCoreAllocator)),
	  mpGlyphCacheDefault(),
	  mFaceArray(EA::Allocator::EASTLICoreAllocator(EATEXT_ALLOC_PREFIX "FontServer/FaceArray", mpCoreAllocator)),
	  mEffectDataList(EA::Allocator::EASTLICoreAllocator(EATEXT_ALLOC_PREFIX "FontServer/EffectDataList", mpCoreAllocator)),
	  mDPI(EATEXT_DPI),
	  mIgoredFontCharSet()
	#if EATEXT_FAMILY_SUBSTITUTION_ENABLED
	, mFamilySubstitutionMap(EA::Allocator::EASTLICoreAllocator(EATEXT_ALLOC_PREFIX "FontServer/FamilySubstitutionMap", mpCoreAllocator))
	#endif
	#if EATEXT_THREAD_SAFETY_ENABLED
	, mMutex()
	#endif
{
	mOptions[kOptionOpenTypeFeatures]            = EATEXT_OPENTYPE_ENABLED ? 1 : -1; // If OpenType support is enabled, then we enable this by default.
	mOptions[kOptionDPI]                         = -1;
	mOptions[kOptionEnableHinting]               = -1;
	mOptions[kOptionUseAutoHinting]              = -1;
	mOptions[kOptionSubPixelAA]                  = -1;
	mOptions[kOptionEnableDirectGlyphCacheUse]   = -1;
	mOptions[kOptionSystemMemoryCopy]            = -1;
	mOptions[kOptionSmartFallback]               =  0;
	mOptions[kOptionRequireFontFamilyMatch]      =  kMatchOptionNone;
	mOptions[kOptionRequireFontStyleMatch]       =  kMatchOptionNone;
	mOptions[kOptionPreferNewFontsOnMatch]       =  0;

	// These are Chars that we pretend are present in all fonts, as they are not really characters but
	// rather instructions. Thus it's pointless to use font matching for these characters, as it would
	// make for in efficient layout.
	const Char gIgnoredFontCharArray[] = 
	{
		kCharNUL, kCharBS, kCharHT, kCharLF, kCharVT, kCharFF, kCharCR, kCharESC, kCharNEL, kCharNBSP,
		kCharCGJ, kCharZWSP, kCharZWNJ, kCharZWJ, kCharLRM, kCharRLM, kCharLSEP, kCharPSEP, kCharLRE,
		kCharRLE, kCharPDF, kCharLRO, kCharRLO, kCharWJoin, kCharISS, kCharASS, kCharIAFS, kCharAAFS,
		kCharNADS, kCharNODS, kCharOBJ, kCharREPL, kCharZWNBSP, kCharBOM, kCharBOM_R, kCharInvalid, kCharSHY,
	};

	for(eastl_size_t i = 0; i < EAArrayCount(gIgnoredFontCharArray); i++)
		mIgoredFontCharSet.insert(gIgnoredFontCharArray[i]);
}


///////////////////////////////////////////////////////////////////////////////
// ~FontServer
//
FontServer::~FontServer()
{
	// Assert that Shutdown was called.
	EA_ASSERT_MESSAGE(!mbInitialized, "FontServer::~FontServer: Shutdown needs to be called.");

	FontServer::Shutdown(); // Preface call with FontServer:: because we are in a destructor and virtual functions don't work in destructors and the compiler would issue a warning.
}


///////////////////////////////////////////////////////////////////////////////
// SetAllocator
//
void FontServer::SetAllocator(Allocator::ICoreAllocator* pCoreAllocator)
{
	mpCoreAllocator = pCoreAllocator;
	mFaceMap.get_overflow_allocator().set_allocator(pCoreAllocator);
	mFaceArray.get_overflow_allocator().set_allocator(pCoreAllocator);
	mEffectDataList.get_allocator().set_allocator(pCoreAllocator);
	#if EATEXT_FAMILY_SUBSTITUTION_ENABLED
		mFamilySubstitutionMap.get_overflow_allocator().set_allocator(pCoreAllocator);
	#endif
}


///////////////////////////////////////////////////////////////////////////////
// Init
//
bool FontServer::Init()
{
	#if EATEXT_THREAD_SAFETY_ENABLED
		EA::Thread::AutoFutex autoMutex(mMutex);
	#endif

	EA_ASSERT_MESSAGE(mpCoreAllocator, "FontServer::mpCoreAllocator is NULL. You need to call EA::Text::SetAllocator on startup, and FontServer will pick up the value during its construction. If you call EA::Text::SetAllocator after the Font Server is constructed, then you will need to call FontServer::SetAllocator with the same value before using the Font Server.");

	if(!mbInitialized)
	{
		mbInitialized = true;

		#if EATEXT_EMBEDDED_BACKUP_FONT_ENABLED
			EA::IO::EATextMemoryStream* const pMemoryStream = CORE_NEW(mpCoreAllocator, EATEXT_ALLOC_PREFIX "MemoryStream", 0)
																 EA::IO::EATextMemoryStream((void*)pTrueTypeFont, sizeof(pTrueTypeFont), true, false, mpCoreAllocator);
			if(pMemoryStream)
			{
				pMemoryStream->AddRef();
#if EAIO_VERSION_N >= 30000
				pMemoryStream->SetReleaseAllocator(mpCoreAllocator);
#else
				pMemoryStream->mpCoreAllocator = mpCoreAllocator;
#endif
				AddFace(pMemoryStream, kFontTypeOutline);
				pMemoryStream->Release();
			}
		#endif
	}

	return true;
}


///////////////////////////////////////////////////////////////////////////////
// Shutdown
//
bool FontServer::Shutdown()
{
	#if EATEXT_THREAD_SAFETY_ENABLED
		EA::Thread::AutoFutex autoMutex(mMutex);
	#endif

	mBestFitFontMap.clear();
	mFaceMap.clear(); // This clear will take care of releasing any allocated font resources.
	mEffectDataList.clear(); 

	mbInitialized = false;

	return true;
}


///////////////////////////////////////////////////////////////////////////////
// SetOption
//
void FontServer::SetOption(int32_t option, int32_t value)
{
	EA_ASSERT((option != kOptionDPI) || (value > 0));  // kOptionDPI value must be > 0

	if(option < kOptionCount)
		mOptions[option] = value;
}


///////////////////////////////////////////////////////////////////////////////
// SetOption
//
int32_t FontServer::GetOption(int32_t option) const
{
	if(option < kOptionCount)
		return mOptions[option];

	return 0;
}


///////////////////////////////////////////////////////////////////////////////
// SetDefaultGlyphCache
//
void FontServer::SetDefaultGlyphCache(GlyphCache* pGlyphCache)
{
	mpGlyphCacheDefault = pGlyphCache;
}


///////////////////////////////////////////////////////////////////////////////
// GetDefaultGlyphCache
//
GlyphCache* FontServer::GetDefaultGlyphCache()
{
	return mpGlyphCacheDefault;
}


///////////////////////////////////////////////////////////////////////////////
// GetFont
//
Font* FontServer::GetFont(const TextStyle* pTextStyle, FontSelection& fontSelection, 
							uint32_t maxCount, Char c, Script script, bool bManaged)
{
	const uint32_t kFontArraySize = 32;
	Font*          pFontArray[kFontArraySize];
	uint32_t       nFontArrayCapacity = (maxCount < kFontArraySize ? maxCount : kFontArraySize);

	// The GetFont call will AddRef the fonts written to pFontArray.
	Font* const pPrimaryFont = GetFont(pTextStyle, pFontArray, nFontArrayCapacity, c, script, bManaged);

	// Transfer the fonts into the FontSelection.
	for(uint32_t i = 0; (i < nFontArrayCapacity) && pFontArray[i]; i++)
	{
		fontSelection.insert(pFontArray[i]); // This will AddRef the Font for the caller.
		pFontArray[i]->Release();            // Matches AddRef from the GetFont above. Since the font is AddRefd for fontSelection, this Release will not destroy the Font.
	}

	return pPrimaryFont;
}


///////////////////////////////////////////////////////////////////////////////
// GetFont
//
// The CSS standard specifies an algorithm for scoring font descriptions.
// As of this writing, this standard is documented at http://www.w3.org/TR/REC-CSS2/fonts.html#algorithm
// for CSS2 and http://www.w3.org/TR/2002/WD-css3-fonts-20020802/ for CSS3.
//
// To do: Have the last N lookups be cached, allowing the lookup to be 
//        immediate if the textStyle matches the cached one. 
//
Font* FontServer::GetFont(const TextStyle* pTextStyle, Font* pFontArray[], uint32_t nFontArrayCapacity, 
							Char c, Script script, bool bManaged)
{
	#if EATEXT_THREAD_SAFETY_ENABLED
		EA::Thread::AutoFutex autoMutex(mMutex);
	#endif

	Font*           pPrimaryFont = NULL;    // This is the first font returned and is the "best match" of the fonts matching the requested style.
	Char            familyNameArray[kFamilyNameArrayCapacity][kFamilyNameCapacity];
	uint32_t        nFamilyNameCount = 0;
	const uint32_t  kFaceSourceCount = 32;
	int             nScoreArray[kFaceSourceCount];
	FaceSource*     pFaceSourceArray[kFaceSourceCount];
	uint32_t        nFaceSourceArraySize = 0;
	uint32_t        nMaxFaceSourceArraySize = kFaceSourceCount;
	bool            bSmartFallbackEnabled = (mOptions[kOptionSmartFallback] > 0);
	auto			TextStylesOutsideControlMatch = [](FontDescription fd1, FontDescription fd2) -> bool
	{
		return		(fd1.mfWeight == fd2.mfWeight) && (fd1.mStyle == fd2.mStyle);
	};

	auto			TextStylesMatch = [TextStylesOutsideControlMatch](FontDescription fd1, FontDescription fd2) -> bool
	{
		return		(fabs (fd1.mfSize   -  fd2.mfSize) < 0.05f) // If there is a font match...
					&&	  (fd1.mSmooth  == fd2.mSmooth)
					&&	  (fd1.mEffect  == fd2.mEffect)
					&&	  TextStylesOutsideControlMatch(fd1, fd2);
	};

	if(nFontArrayCapacity > kFaceSourceCount)
		nFontArrayCapacity = kFaceSourceCount;

	if(!pTextStyle)
		pTextStyle = &mTextStyleDefault;

	if(nFontArrayCapacity)
		memset(pFontArray, 0, sizeof(Font*) * nFontArrayCapacity);

	mFaceArray.clear();

	// Do checks for user errors.
	EA_ASSERT_MESSAGE(!mFaceMap.empty(), "The FontServer has no fonts to serve.");
	EA_ASSERT_MESSAGE(pTextStyle->mfSize > 0.f, "The style specification requires a size > 0.");


	// Copy the input style specification and make it lower-case while doing so.
	for(uint32_t i = 0; (i < kFamilyNameArrayCapacity) && pTextStyle->mFamilyNameArray[i][0]; i++)
	{
		EA::StdC::Strcpy(familyNameArray[i], pTextStyle->mFamilyNameArray[i]);
		EA::StdC::Strlwr(familyNameArray[i]);
		++nFamilyNameCount;
	}

	// There are some characters that we ignore for the purpose of font lookups (e.g. zero-width non-breaking space).
	// We want to pretend that every Font works for such characters, even if those characters aren't represented in
	// the font. This situation comes about because text is a string of characters and it uses the same number space
	// to encode regular characters (e.g. 'a') but also to encode instructions (e.g. start a new line, reverse display direction).
	bool bIgnoreChar;

	if(c == kCharInvalid)   // We are commonly called with c == kCharInvalid, so do a quick check here in order to avoid the hash table lookup two lines below.
		bIgnoreChar = true;
	else
		bIgnoreChar = (mIgoredFontCharSet.find(c) != mIgoredFontCharSet.end());


	#if EATEXT_FAMILY_SUBSTITUTION_ENABLED
		// Test for font substitutions. These are font names that are to be checked if the original name doesn't exist.
		// What we do here is possibly modify familyNameArray entries to use substituted values.
		// If you are using family substitution, it may be a good idea that the user set up the 
		// CSS generic family names (e.g. "serif") as substitution values. See enum Family.
		if(!mFamilySubstitutionMap.empty())
		{
			for(int n = (int)nFamilyNameCount - 1; n >= 0; --n)
			{
				Char* const pFamily = familyNameArray[n];

				FamilySubstitutionMap::iterator it = mFamilySubstitutionMap.find_as(pFamily);
				if(it != mFamilySubstitutionMap.end())
				{
					const FontServerString& sFamilySubstitution = (*it).second;

					EA_ASSERT(sFamilySubstitution.length() < kFamilyNameCapacity);
					EA::StdC::Strncpy(pFamily, sFamilySubstitution.c_str(), kFamilyNameCapacity);
					pFamily[kFamilyNameCapacity - 1] = 0;
				}
			}
		}
	#endif // EATEXT_FAMILY_SUBSTITUTION_ENABLED


	// Find the FaceMap entries that match familyNameArray.
	FaceMap::iterator itFNA;
	uint32_t j;
	for(j = 0; j < nFamilyNameCount; j++)
	{
		mFaceArray.clear();

		itFNA = mFaceMap.find_as(familyNameArray[j]);

		if(itFNA != mFaceMap.end())
		{
			Face& face = (*itFNA).second;
			mFaceArray.push_back(&face);
		}

		// At this point, hopefully we have some candidate FaceArray entries to work with.
		// We work with these entities now and no longer need the input family name information.
		// We go through each entry and search for matches to the input TextStyle information.
		TryFaceArray:
		for(uint32_t i = 0, iEnd = (uint32_t)mFaceArray.size(); (i < iEnd) && (nFaceSourceArraySize < nMaxFaceSourceArraySize); i++)
		{
			Face* const pFace                = mFaceArray[i];
			FaceSource* pFaceSourceBestMatch = NULL;
			int         nScoreBestMatch      = -1; // Higher scores are better.
			int         nCharSupported       = -1; // -1 means not tried, 0 means tried and failed, 1 means tried and succeeded.

			for(FaceSourceList::iterator it = pFace->mFaceSourceList.begin(); (it != pFace->mFaceSourceList.end()) && (nCharSupported != 0); ++it)
			{
				FaceSource& faceSource = *it;

				if((nCharSupported == -1) && !faceSource.mFontList.empty()) // If we don't know if the char/script is supported but we can find out because we have a Font.
				{
					Font* const pFont = faceSource.mFontList.front();
					nCharSupported    = ((bIgnoreChar || pFont->IsCharSupported(c, script)) ? 1 : 0);
				}

				// If the char/script is known to be unsupported, we might as well give up on this FaceSource.
				if(nCharSupported != 0) // If the char is supported by this face...
				{
					const int nScore = GetFontDescriptionScore(faceSource.mFontDescription, *pTextStyle);

					if(nScore > nScoreBestMatch)
					{
						pFaceSourceBestMatch = &faceSource;
						nScoreBestMatch      = nScore;
					}
				}
			}

			if(pFaceSourceBestMatch)
			{
				if(nCharSupported == -1) // If we have no idea if the char/script is supported (because this face has no fonts open)...
				{
					// We can open a font and check the char/script or we can just assume the face supports the char/script.
					// In the case of Eastern chars/scripts we would need to check and in the case of English chars/scripts we probably don't need to.
					if((c == kCharInvalid) && (script == kScriptUnknown))
						nCharSupported = 1;
					else
					{
						// We go ahead and make an instance of the font. We will be wasting some memory if the 
						// font doesn't turn out to support the char/script requirements. On the other hand, 
						// the code wouldn't get to here unless the user specifically asked to consider a 
						// font of this given family in the user's style specification.
						Font* const pFont = CreateNewFont(pFaceSourceBestMatch, *pTextStyle, true); // This AddRefs pFont for us.

						if(pFont)
						{
							nCharSupported = ((bIgnoreChar || pFont->IsCharSupported(c, script)) ? 1 : 0);
							pFont->Release(); // Match the AddRef from CreateNewFont above. But the font will stay alive because CreateNewFont will have AddRef'd the font for future use.
						}
					}
				}

				if(nCharSupported == 1) // If the char/script is known to be supported...
				{
					// 2/19/09 Change by Chris Sidhall to implement duplication testing. 
					// The list is usually pretty small so a full search is usually OK here.
					bool duplicate = false;

					for(uint32_t k = 0; k < nFaceSourceArraySize; k++)
					{
						if(pFaceSourceArray[k] == pFaceSourceBestMatch)    
						{
							duplicate = true;        
							break;
						}
					}

					if(!duplicate)
					{
						pFaceSourceArray[nFaceSourceArraySize] = pFaceSourceBestMatch;
						nScoreArray[nFaceSourceArraySize]      = nScoreBestMatch;
						++nFaceSourceArraySize;
					}
				}
			}
		}

		if (nFaceSourceArraySize)
		{
			break;
		}
	}

	// Safety fallback. Just use the first font source that is usable or if not then just use the first font source there is.
	if(!nFaceSourceArraySize) // If no match was found...
	{
		const bool bRequireFontFamilyMatch = ((mOptions[kOptionRequireFontFamilyMatch] & kMatchOptionFail) != 0);

		// smart fallback and require font family match should not both be enabled
		if (bSmartFallbackEnabled && !bRequireFontFamilyMatch)
		{
			// What we do now is check all typefaces for support of the given char/script.
			bSmartFallbackEnabled   = false; // Set this to false in order to prevent infinite recursion.
			nMaxFaceSourceArraySize = 1;     // Stop at the first match, no need to collect extra fonts and pick the best. To consider: Provide an advanced configurable option to in fact look for the best fallback match.
			mFaceArray.clear();

			for(FaceMap::iterator itFM = mFaceMap.begin(); itFM != mFaceMap.end(); ++itFM)
			{
				Face& face = (*itFM).second;
				mFaceArray.push_back(&face); // To consider: Might it be slightly more optimal if we only push_back faces that weren't checked already?
			}

			goto TryFaceArray; // We go back above and try matching faces again, but this time our selection includes our entire face set and not just the ones the user passed in.
		}
		else
		{
			// If we require a font family match, try to get that font, most likely we failed to get a font at this point
			// because it is missing a glyph for the character not because it doesn't exist at all.
			if (bRequireFontFamilyMatch)
			{
				for (uint32_t i = 0; i < nFamilyNameCount; i++)
				{
					FaceMap::iterator itFM = mFaceMap.find_as(familyNameArray[i]);
					if (itFM != mFaceMap.end())
					{
						FaceSourceList& faceSourceList = (*itFM).second.mFaceSourceList;

						EA_ASSERT(!faceSourceList.empty()); // We don't allow Faces without sources (i.e. with an empty mFaceSourceList).
						if (!faceSourceList.empty())
						{
							FaceSource& faceSource = *faceSourceList.begin();
							pFaceSourceArray[nFaceSourceArraySize] = &faceSource;
							nScoreArray[nFaceSourceArraySize] = 0;
							nFaceSourceArraySize++; // Note that nFaceSourceArraySize is known to be zero here.
							break;
						}
					}
				}

				if (!nFaceSourceArraySize)
				{
					if (mOptions[kOptionRequireFontFamilyMatch] & kMatchOptionAssert)
					{
						EA_FAIL_MESSAGE("FontServer::GetFont: Failed to find a matching font by name.");
					}

					return nullptr;
				}
			}
			else
			{
				// Here we simply pick the first typeface we have. 
				// In general it is a bad thing to be executing this code, as it almost always
				// is going to result in some font that is different from what was intended and 
				// may not support the required characters or may even be fixed at a given size.
				// Problem: If our typeface list includes fonts of alternative types such as 
				// polygonal fonts, then the returned font could be completely unusable.
				for (FaceMap::iterator itFM(mFaceMap.begin()); itFM != mFaceMap.end(); ++itFM)
				{
					FaceSourceList& faceSourceList = (*itFM).second.mFaceSourceList;

					EA_ASSERT(!faceSourceList.empty()); // We don't allow Faces without sources (i.e. with an empty mFaceSourceList).
					if (!faceSourceList.empty())
					{
						FaceSource& faceSource = *faceSourceList.begin();
						pFaceSourceArray[nFaceSourceArraySize] = &faceSource;
						nScoreArray[nFaceSourceArraySize] = 0;
						nFaceSourceArraySize++; // Note that nFaceSourceArraySize is known to be zero here.
						break;
					}
				}
			}
		}
	}


	// If there are more than one face sources, make the highest scoring one be listed first.
	for(uint32_t faceIndex = 1; faceIndex < nFaceSourceArraySize; faceIndex++)
	{
		if(nScoreArray[faceIndex] > nScoreArray[0])
		{
			eastl::swap(pFaceSourceArray[faceIndex], pFaceSourceArray[0]);
			eastl::swap(nScoreArray[faceIndex],      nScoreArray[0]);
		}
	}


	// We (probably) have a FaceSource to work with. Now let's search for an existing 
	// Font or create one if there isn't an existing match.
	FontDescription fontDescriptionCurrent;

	for(uint32_t k = 0; k < nFaceSourceArraySize; k++)
	{
		Font* pFontCurrent = NULL;

		// We only check our list of pre-made fonts if the user requests a managed font.
		if(bManaged) 
		{
			for(FontList::iterator it = pFaceSourceArray[k]->mFontList.begin(); it != pFaceSourceArray[k]->mFontList.end(); ++it)
			{
				pFontCurrent = *it;

				EA_ASSERT(pFontCurrent);
				pFontCurrent->GetFontDescription(fontDescriptionCurrent);

				// We have a problem here. We probably need to have a more detailed match
				// check than that done here. Currently we check only a few properties, 
				// whereas there are other important characteristics of a font.
				if(TextStylesMatch(fontDescriptionCurrent, *pTextStyle))
				{
					pFontCurrent->AddRef(); // AddRef it once for the user. The ref count on the font will now be at least 2 (once for our container, and once for the user here).
					break;
				}
				else
					pFontCurrent = NULL;
			}

			// This is unfortunate, the user may have asked for a font which we don't have so we may have created the closest font possible.
			// But, since the user is asking for a font (say, 400 weight) but we created an approximation (200 weight) the next time
			// they request the same (missing font) we won't even match our approximate font since the metrics for the approximate font will 
			// will match the actual approximate font rather than what font description it is trying to approximate.
			// To avoid a user from recreating an approximate font when they request the same missing font again, we
			// look to see if we already created an approximation for them.
			if(pFontCurrent == NULL)
			{
				FaceSource* faceSource = pFaceSourceArray[k];
				const BestFitFontList& bestFitFontList = mBestFitFontMap[faceSource];
				BestFitFont bestFitFont;

				for(BestFitFontList::const_iterator it = bestFitFontList.begin(); it != bestFitFontList.end(); ++it)
				{
					bestFitFont = *it;
					const TextStyle& textStyle = bestFitFont.mTextStyle;

					if(TextStylesMatch(textStyle, *pTextStyle))
					{
						pFontCurrent = bestFitFont.mFont;
						pFontCurrent->AddRef(); // AddRef it once for the user. The ref count on the font will now be at least 2 (once for our container, and once for the user here).
						break;
					}
					else
						pFontCurrent = NULL;
				}
			}
		}


		if(!pFontCurrent) // If no textstyle matched or (bManaged == false), we create the font ourselves to match the size (and style).
		{
			if(!pPrimaryFont || (k < nFontArrayCapacity))
			{
				pFontCurrent = CreateNewFont(pFaceSourceArray[k], *pTextStyle, bManaged);
				EA_ASSERT(pFontCurrent);
				// Pass on the AddRef that CreateNewFont did to the caller. The ref count on the font will now be at least 2 (once for our container, and once for the user here).

				// Did we try to match to a font but the approximation we gave doesn't meet style requirements which we can't control
				// such as weight and style (italics/obliqueness) which are instead handled from the font itself
				FontDescription newFontFd;
				pFontCurrent->GetFontDescription(newFontFd);
				if(bManaged && !TextStylesOutsideControlMatch(newFontFd, *pTextStyle))
				{
					if(mOptions[kOptionRequireFontStyleMatch] & kMatchOptionAssert)
					{
						EA_FAIL_MESSAGE("FontServer::GetFont: Failed to find a matching font with the same text style. The weight or styling (italic/oblique) are likely off.");
					}

					BestFitFontList& fontList = mBestFitFontMap[pFaceSourceArray[k]]; // This will create the list if it does not exist
					if (fontList.size() == 0)
					{
						EA::Allocator::EASTLICoreAllocator fontListAllocator(EATEXT_ALLOC_PREFIX "FontServer/BestFitFontList", mpCoreAllocator);
						fontList.set_overflow_allocator(fontListAllocator);
					}

					BestFitFont& bestFitFont = fontList.push_back();
					bestFitFont.mFont = pFontCurrent;
					bestFitFont.mTextStyle = *pTextStyle;
				}
			}
		}

		if(pFontCurrent)
		{
			if(!pPrimaryFont)
				pPrimaryFont = pFontCurrent;

			if(k < nFontArrayCapacity)
				pFontArray[k] = pFontCurrent;
			else if(pFontCurrent != pPrimaryFont) // If we won't be returning this font to the user...
				pFontCurrent->Release(); // Matches the AddRef above for the user. Since we won't be returning this font to the user, we let go of the reference.
		}
	} // for()


	// The only way we should not have at least some kind of font to offer is if we simply have no fonts.
	EA_ASSERT(pPrimaryFont || mFaceMap.empty());

	if(pPrimaryFont && (mOptions[kOptionRequireFontFamilyMatch] > 0)) // If we should handle font name matching failures...
	{
		// If using the EAAssert package and assertions are enabled, or if using the EATrace package and assertions are enabled...
		#if ((defined(EAASSERT_EAASSERT_H) && defined(EA_ASSERT_ENABLED)) || (defined(EATRACE_EATRACE_H) && EA_TRACE_ENABLED))
			bool shouldDoMatch = true;
		#else
			bool shouldDoMatch = ((mOptions[kOptionRequireFontFamilyMatch] & kMatchOptionFail) != 0);
		#endif

		if(shouldDoMatch)
		{
			FontDescription fontDescription;
			bool            bFamilyNameMatch = false;

			// We test only the name of the primary font, as that one at least must match.
			pPrimaryFont->GetFontDescription(fontDescription);

			for(uint32_t i = 0; i < nFamilyNameCount; i++) // For each of the family name options in the list the user gave us...
			{
				if(EA::StdC::Stricmp(fontDescription.mFamily, familyNameArray[i]) == 0)
				{
					bFamilyNameMatch = true;
					break;
				}
			}

			if(!bFamilyNameMatch) // If the above check found that pPrimaryFont's name doesn't match any of the 1 or more names requested by the user...
			{
				if(mOptions[kOptionRequireFontFamilyMatch] & kMatchOptionAssert)
				{
					EA_FAIL_MESSAGE("FontServer::GetFont: Failed to find a matching font by name.");
				}

				if(mOptions[kOptionRequireFontFamilyMatch] & kMatchOptionFail)
				{
					// Release all the fonts and return NULL.
					if(pFontArray)
					{
						for(uint32_t f = 0; pFontArray[f] && (f < nFontArrayCapacity); f++)
							pFontArray[f]->Release();
					}

					pPrimaryFont->Release();
					pPrimaryFont = NULL;
				}
			}
		}
	}

	return pPrimaryFont; // This font will be AddRefd for the caller. Any *other* fonts in the pFontArray argument will also be AddRef'd. 
}


///////////////////////////////////////////////////////////////////////////////
// GetFontDescriptionScore
//
int FontServer::GetFontDescriptionScore(const FontDescription& fd, const TextStyle& ssCSS)
{
	// This is an internal function, so we assume the mutex is locked.
	#if EATEXT_THREAD_SAFETY_ENABLED
		EA_ASSERT(mMutex.GetLockCount() > 0);
	#endif

	int nScore = 1000; // We start with a perfect score and subtract as we find mismatches.

	// We subtract a lot of points if there is no matching family name.
	// We subtract a few points if the name matches but it isn't the first in user-requested list.
	bool bFamilyNameMatch = false;
	int  nFamilyNameMatch = 0;

	for(int i = 0; !bFamilyNameMatch && (i < (int)kFamilyNameCapacity) && ssCSS.mFamilyNameArray[i][0]; i++)
	{
		if(EA::StdC::Stricmp(fd.mFamily, ssCSS.mFamilyNameArray[i]) == 0)
		{
			bFamilyNameMatch = true;
			nFamilyNameMatch = i;
			break;
		}
	}

	if(bFamilyNameMatch)
		nScore -= (2 * nFamilyNameMatch);
	else
		nScore -= 100;

	// A FontDescription whose mfSize matches the ssCSS mfSize loses no points.
	// A FontDescription whose mfSize mismatches the ssCSS mfSize loses a lot of points.
	// A zero value for mfSize in the fontDescription means the font source can 
	// supply any sized font. Such fonts lose only a few points. 
	if(fd.mfSize == 0)
		nScore -= 10;
	else
	{
		const float fDifference = fabsf(ssCSS.mfSize - fd.mfSize);
		nScore -= (int)(20 * fDifference);
	}

	// Compare style.
	if(fd.mStyle != ssCSS.mStyle)
	{
		if((fd.mStyle == kStyleItalic    || fd.mStyle == kStyleOblique) && 
		   (ssCSS.mStyle == kStyleItalic || ssCSS.mStyle == kStyleOblique))
			nScore -= 20; // Oblique and italic appear similar to most people.
		else
			nScore -= 1000;
	}

	// Compare weight
	nScore -= (int)(fabs(fd.mfWeight - ssCSS.mfWeight) / 4);

	// Compare stretch
	if(fd.mfStretch != ssCSS.mfStretch)
		nScore -= (int)(20 + (20 * fabs(fd.mfStretch - ssCSS.mfStretch))); // Not being a perfect match subtracts a fixed amount. Then extra is added depending on the distance.

	// Compare pitch
	// It turns out that things work better if we ignore the pitch calculation if the 
	// family name matches. This is because in practice fixed vs. variable pitch is 
	// implied by the family name of the font, and it's not a style property of a font 
	// like weight or style is.
	if(!bFamilyNameMatch)
	{
		if(fd.mPitch != ssCSS.mPitch)
			nScore -= 150;
	}

	// Compare variant
	if(fd.mVariant != ssCSS.mVariant)
		nScore -= 50;

	// Compare smoothing
	if(fd.mSmooth != ssCSS.mSmooth)
	{
		// Possibly we want to do something to make it so that if the user wants 
		// a differently smoothed version of a font from the same face, we can 
		// deal with that. Perhaps we can return 0 if we know that there is a
		// matching face available which can do the desired kind of smoothing.
		//
		// To consider: Add a configuration setting which makes it so that a 
		// request for a different smoothing of an existing font always returns
		// simply the existing font with its existing smoothing. This is useful 
		// for saving memory and preventing mistakes. Actually, having a small
		// score penalty here has virtually the same effect but lets you override
		// it if desired.
		nScore -= 5;
	}

	// Other aspects of the ssCSS are not part of a FontDescription but rather are 
	// about layout, decoration, or rendering characteristics.

	return nScore;
}


///////////////////////////////////////////////////////////////////////////////
// AddFaceSource
//
// Returns true if the faceSource was added (i.e. wasn't already present).
//
bool FontServer::AddFaceSource(FaceSource& faceSource, FontDescription* pFontDescription)
{
	#if EATEXT_THREAD_SAFETY_ENABLED
		EA::Thread::AutoFutex autoMutex(mMutex);
	#endif

	bool bReturnValue = false;

	eastl::fixed_string<Char, 48, true, EA::Allocator::EASTLICoreAllocator> sFamily(faceSource.mFontDescription.mFamily);

	EA_ASSERT_FORMATTED(sFamily.length() < kFamilyNameCapacity, ("FontServer: Family name (%ls) is too long; max supported length is %d.", faceSource.mFontDescription.mFamily, (int)kFamilyNameCapacity - 1));
	if(sFamily.length() < kFamilyNameCapacity) // If the name is not too long...
	{
		sFamily.make_lower();
		FaceMap::iterator it = mFaceMap.find_as(sFamily.c_str());

		if(it == mFaceMap.end()) // If this family doesn't already have an entry... create one.
		{
			Face face(mpCoreAllocator);
			EA::StdC::Strlcpy(face.mFamily, sFamily.c_str(), kFamilyNameCapacity);  // It's not a critical problem if there wasn't enough capacity for the full string.
			const FaceMap::value_type entry(FontServerString(face.mFamily, mFaceMap.get_overflow_allocator()), face);
			mFaceMap.insert(entry);
			it = mFaceMap.find(entry.first);
		}

		// If the face isn't already in the list, add it.
		bool        bFaceAlreadyPresent = false;
		Face* const pFace = &(*it).second;

		for(FaceSourceList::const_iterator itFs = pFace->mFaceSourceList.begin(); !bFaceAlreadyPresent && (itFs != pFace->mFaceSourceList.end()); ++itFs)
		{
			const FaceSource& fs = *itFs;

			if(faceSource.mFontDescription == fs.mFontDescription)
			{
				bFaceAlreadyPresent = true;

				if (mOptions[kOptionPreferNewFontsOnMatch] > 0)
				{
					// Drop our current face source and replace it with the added one
					pFace->mFaceSourceList.erase(itFs);
					pFace->mFaceSourceList.push_back(faceSource);
				}

				if (pFontDescription)
					*pFontDescription = fs.mFontDescription;
			}
		}

		if(!bFaceAlreadyPresent)
		{
			bReturnValue = true;

			pFace->mFaceSourceList.push_back(faceSource);
			if(pFontDescription)
				*pFontDescription = faceSource.mFontDescription;
		}
	}
	// Else pFontDescription remains unchanged.

	return bReturnValue;
}


///////////////////////////////////////////////////////////////////////////////
// AddFont
//
bool FontServer::AddFont(Font* pFont, FontDescription* pFontDescription)
{
	#if EATEXT_THREAD_SAFETY_ENABLED
		EA::Thread::AutoFutex autoMutex(mMutex);
	#endif

	FontDescription fd;

	if(pFont && pFont->GetFontDescription(fd))  // We assume that a 'true' return value from GetFontDescription means that the font is OK.
	{
		FaceSource faceSource(mpCoreAllocator);

		faceSource.mpStream         = pFont->GetStream();
		faceSource.mFontType        = pFont->GetFontType();
		faceSource.mFontDescription = fd;
		faceSource.mnFaceIndex      = 0;

		if(faceSource.mpStream)
			faceSource.mpStream->AddRef(); // AddRef it for FaceSource, which will release it in its dtor.

		pFont->AddRef(); // AddRef it for our usage of it. We will Release it when we are eventually done with it.
		faceSource.mFontList.push_back(pFont);

		return AddFaceSource(faceSource, pFontDescription);
	}

	return false;
}


///////////////////////////////////////////////////////////////////////////////
// EnumerateFonts
//
uint32_t FontServer::EnumerateFonts(FontDescription* pFontDescriptionArray, uint32_t nCount)
{
	#if EATEXT_THREAD_SAFETY_ENABLED
		EA::Thread::AutoFutex autoMutex(mMutex);
	#endif

	uint32_t nDescriptionCount = 0;
	uint32_t nCountWritten = 0;

	for(FaceMap::const_iterator itFM = mFaceMap.begin(); itFM != mFaceMap.end(); ++itFM)
	{
		const FaceMap::value_type& fmPair = *itFM; // Create an alias so it is easier to read.
		const Face& face = fmPair.second;

		for(FaceSourceList::const_iterator itFS = face.mFaceSourceList.begin(); itFS != face.mFaceSourceList.end(); ++itFS)
		{
			const FaceSource& faceSource = *itFS;

			if(nCountWritten < nCount)
				pFontDescriptionArray[nCountWritten++] = faceSource.mFontDescription;
			nDescriptionCount++;
		}
	}

	return nDescriptionCount;
}


///////////////////////////////////////////////////////////////////////////////
// FreeUnusedFonts
//
uint32_t FontServer::FreeUnusedFonts()
{
	#if EATEXT_THREAD_SAFETY_ENABLED
		EA::Thread::AutoFutex autoMutex(mMutex);
	#endif

	uint32_t count = 0;

	for(FaceMap::iterator it = mFaceMap.begin(); it != mFaceMap.end(); ++it) // For each face family we manage (e.g. Arial)...
	{
		Face& face = (*it).second;

		for(FaceSourceList::iterator itFSL = face.mFaceSourceList.begin(), itFSLEnd = face.mFaceSourceList.end(); // For each specific face we manage (e.g. Arial Bold)...
			itFSL != itFSLEnd;
			++itFSL)
		{
			FaceSource& faceSource = *itFSL;

			for(FontList::iterator itFL = faceSource.mFontList.begin(), itFLEnd = faceSource.mFontList.end(); // For each existing Font we are managing for the given face (e.g. Font of Arial 12)...
				itFL != itFLEnd; )
			{
				Font* pFont = *itFL;
				int   refCount = pFont->AddRef();

				EA_ASSERT(refCount>= 1); // There should always be a value of at least one (our AddRef on it).

				if(refCount == 2) // If the previous RefCount was 1 and thus if we were the only one using it...
				{
					if(mpGlyphCacheDefault)
						mpGlyphCacheDefault->RemoveTextureInfo(pFont);

					// Determine if we have given a font that is an approximate for this FaceSource already

					BestFitFontList& bestFitFontList = mBestFitFontMap[&faceSource];
					for(BestFitFontList::iterator itBFF = bestFitFontList.begin(), itBFFEnd = bestFitFontList.end(); itBFF != itBFFEnd; ++itBFF)
					{
						BestFitFont bestFitFont = *itBFF;
						if(bestFitFont.mFont == pFont)
						{
							bestFitFontList.erase(itBFF);
							break;
						}
					}

					pFont->Release();   // Matches above AddRef.
					pFont->Release();   // Matches original AddRef for the mFontList container.

					itFL = faceSource.mFontList.erase(itFL);
					count++;
				}
				else // Else there were more than two, meaning there are additional uses of it outside of our own.
				{
					pFont->Release();   // Matches above AddRef.
					++itFL;
				}
			}
		}
	}

	return count;
}


///////////////////////////////////////////////////////////////////////////////
// AddFace
//
uint32_t FontServer::AddFace(IO::IStream* pStream, FontType fontType, FontDescription* pFontDescription)
{
	#if EATEXT_THREAD_SAFETY_ENABLED
		EA::Thread::AutoFutex autoMutex(mMutex);
	#endif

	uint32_t nFaceSourceCount = 0; // This is the number of successfully added faces for the Font. Usually this value is 0 (on error) or 1.

	EA_ASSERT(pStream);
	pStream->AddRef(); // AddRef for this function.

	FaceSource faceSource(mpCoreAllocator);
	faceSource.mpStream = pStream;
	faceSource.mpStream->AddRef(); // AddRef it for FaceSource, which will release it in its dtor.
	faceSource.mFontType = fontType;
	faceSource.mnFaceIndex = 0;

	if(fontType == kFontTypeOutline)
	{
		// In the case of outline (e.g. .ttf) fonts, we have the possibility that multiple
		// font images are stored inside a particular font file. .ttc files are .ttf files
		// that specifically hold collections of TrueType fonts.
		int nFaceSourceCountMax = 32;

		for(int faceIndex = 0; faceIndex < nFaceSourceCountMax; faceIndex++)
		{
			faceSource.mnFaceIndex = (uint8_t)faceIndex;

			// What we do here is create a dummy Font whose purpose is to tell us about
			// the font information. We won't keep this font around, but instead we'll 
			// create specific instances (e.g. per-size) of it later as-needed.
			OutlineFont font;

			font.AddRef(); // AddRef it for its place on the stack here.
			font.SetAllocator(mpCoreAllocator);

			if(mOptions[kOptionOpenTypeFeatures] != -1)
				font.SetOption(Font::kOptionOpenTypeFeatures, mOptions[kOptionOpenTypeFeatures]);
			if(mOptions[kOptionDPI] != -1)
				font.SetOption(Font::kOptionDPI, mOptions[kOptionDPI]);
			if(mOptions[kOptionEnableHinting] != -1)
				font.SetOption(Font::kOptionEnableHinting, mOptions[kOptionEnableHinting]);
			if(mOptions[kOptionUseAutoHinting] != -1)
				font.SetOption(Font::kOptionUseAutoHinting, mOptions[kOptionUseAutoHinting]);
			if(mOptions[kOptionSubPixelAA] != -1)
				font.SetOption(Font::kOptionSubPixelAA, mOptions[kOptionSubPixelAA]);

			// We are using the faceSource variable as a basis for possibly 
			// multiple (but usually just one) FaceSource objects. These FaceSource
			// objects will have identical information except for their mpFaceData.
			// So we vary the mpFaceData for each faceIndex.
			EA_ASSERT(faceSource.mpFaceData == NULL);
			faceSource.mpFaceData = OutlineFont::CreateFaceData(mpCoreAllocator, pStream, NULL, 0, faceIndex);

			if(faceSource.mpFaceData)
			{
				font.SetFaceData(faceSource.mpFaceData);

				if(font.Open(pStream, faceIndex))
				{
					if(font.GetFontDescription(faceSource.mFontDescription))
					{
						if(AddFaceSource(faceSource, pFontDescription))
							nFaceSourceCount++;

						// The first time we read a font, we adjust the source count number. 
						// This is not just an optimization. A bug in Font Fusion related to 
						// this forces us to come up with some kind of thing like this. We continue
						// to do so with FreeType until we verify it is no longer needed
						if(faceIndex == 0)
						{
							EA_ASSERT(gFTLibrary && faceSource.mpFaceData && faceSource.mpFaceData->mpFTFace);
							nFaceSourceCountMax = (int)faceSource.mpFaceData->mpFTFace->num_faces;
						}
					}
					else
						nFaceSourceCountMax = 0; // Discontinue the loop.
				}
				else
					nFaceSourceCountMax = 0; // Discontinue the loop.

				faceSource.mpFaceData->Release();
				faceSource.mpFaceData = NULL;
			}
			else
				nFaceSourceCountMax = 0; // Discontinue the loop.
		}
	}
	else if(fontType == kFontTypeBitmap)
	{
		// There can only ever be a single font represented by a .bmpFont file. There can't be multiple faces like with outline fonts.
		// We create temporary dummy font here for the purposes of reading the .bmpFont info and
		// giving us a FontDescription. We'll use that FontDescription later for picking fonts
		// based on a user specification.
		BmpFont font;
		font.AddRef(); // AddRef it for its place on the stack here.
		font.SetAllocator(mpCoreAllocator);

		if(mOptions[kOptionEnableDirectGlyphCacheUse] != -1)
			font.SetOption(Font::kOptionEnableDirectGlyphCacheUse, mOptions[kOptionEnableDirectGlyphCacheUse]);
		if(mOptions[kOptionSystemMemoryCopy] != -1)
			font.SetOption(Font::kOptionSystemMemoryCopy, mOptions[kOptionSystemMemoryCopy]);

		if(font.Open(&pStream, 1)) // Open it with just the .bmpFont stream.
		{
			if(font.GetFontDescription(faceSource.mFontDescription))
			{
				if(AddFaceSource(faceSource, pFontDescription))
					nFaceSourceCount++;
			}
		}
	}
	else if(fontType == kFontTypePolygon)
	{
		// There can only ever be a single font represented by a .polygonFont file. There can't be multiple faces like with outline fonts.
		// We create temporary dummy font here for the purposes of reading the .polygonFont info and
		// giving us a FontDescription. We'll use that FontDescription later for picking fonts
		// based on a user specification.
		PolygonFont font;
		font.AddRef(); // AddRef it for its place on the stack here.
		font.SetAllocator(mpCoreAllocator);

		if(font.Open(pStream)) // Open it with just the .bmpFont stream.
		{
			if(font.GetFontDescription(faceSource.mFontDescription))
			{
				if(AddFaceSource(faceSource, pFontDescription))
					nFaceSourceCount++;
			}
		}
	}

	pStream->Release(); // Match the AddRef above for this function.

	return nFaceSourceCount;
}


///////////////////////////////////////////////////////////////////////////////
// AddFace
//
uint32_t FontServer::AddFace(const FilePathChar* pFacePath, FontType fontType, FontDescription* pFontDescription)
{
	#ifdef EA_DEBUG
		const FilePathChar* const pExtension = EA::IO::Path::GetFileExtension(pFacePath); 
		EA_UNUSED(pExtension);

		// To consider: Add some asserts here.
	#endif

	// Thread safey not required here, as we aren't accessing member data.
	uint32_t nFaceSourceCount = 0;

	if(fontType == kFontTypeUnknown)
		fontType = GetFontTypeFromFilePath(pFacePath);

	if(fontType != kFontTypeUnknown)
	{
		EA::IO::EATextFileStream* const pFileStream = CORE_NEW(mpCoreAllocator, EATEXT_ALLOC_PREFIX "FileStream", 0) EA::IO::EATextFileStream(pFacePath);

		if(pFileStream)
		{
			pFileStream->AddRef();
#if EAIO_VERSION_N >= 30000
			pFileStream->SetReleaseAllocator(mpCoreAllocator);
#else
			pFileStream->mpCoreAllocator = mpCoreAllocator;
#endif

			if(pFileStream->Open(IO::kAccessFlagRead))
				nFaceSourceCount = AddFace(pFileStream, fontType, pFontDescription);

			pFileStream->Release();
		}
	}

	return nFaceSourceCount;
}


///////////////////////////////////////////////////////////////////////////////
// CreateNewFont
//
Font* FontServer::CreateNewFont(int fontType)
{
	Font* pFont = NULL;

	switch (fontType)
	{
		case kFontTypeOutline:
			pFont = CORE_NEW(mpCoreAllocator, EATEXT_ALLOC_PREFIX "OutlineFont", 0) OutlineFont(mpCoreAllocator); // This is like saying: pFont = new OutlineFont(mpCoreAllocator);
			break;

		case kFontTypeBitmap:
			pFont = CORE_NEW(mpCoreAllocator, EATEXT_ALLOC_PREFIX "BmpFont", 0) BmpFont(mpCoreAllocator);
			break;

		case kFontTypePolygon:
			pFont = CORE_NEW(mpCoreAllocator, EATEXT_ALLOC_PREFIX "PolygonFont", 0) PolygonFont(mpCoreAllocator);
			break;
	}

	if(pFont)
		pFont->AddRef();

	return pFont;
}


///////////////////////////////////////////////////////////////////////////////
// CreateNewFont
//
// This function AddRefs the returned Font for the caller, regardless of the value of bManaged. 
// This function AddRefs the Font internally for internal listkeeping.
//
Font* FontServer::CreateNewFont(FaceSource* pFaceSource, const TextStyle& ssCSS, bool bManaged)
{
	// This is an internal function, so we assume the mutex is locked.
	#if EATEXT_THREAD_SAFETY_ENABLED
		EA_ASSERT(mMutex.GetLockCount() > 0);
	#endif

	bool  bResult = false;
	Font* pFont   = NULL;

	if(pFaceSource->mFontType == kFontTypeOutline)
	{
		OutlineFont* const pOutlineFont = (OutlineFont*)CreateNewFont(kFontTypeOutline);

		if(pOutlineFont)
		{
			EA_ASSERT((mpCoreAllocator != NULL) && (pFaceSource->mpFaceData != NULL));
			pOutlineFont->SetFaceData(pFaceSource->mpFaceData);

			if(mOptions[kOptionOpenTypeFeatures] != -1)
				pOutlineFont->SetOption(Font::kOptionOpenTypeFeatures, mOptions[kOptionOpenTypeFeatures]);
			if(mOptions[kOptionDPI] != -1)
				pOutlineFont->SetOption(Font::kOptionDPI, mOptions[kOptionDPI]);
			if(mOptions[kOptionEnableHinting] != -1)
				pOutlineFont->SetOption(Font::kOptionEnableHinting, mOptions[kOptionEnableHinting]);
			if(mOptions[kOptionUseAutoHinting] != -1)
				pOutlineFont->SetOption(Font::kOptionUseAutoHinting, mOptions[kOptionUseAutoHinting]);
			if(mOptions[kOptionSubPixelAA] != -1)
				pOutlineFont->SetOption(Font::kOptionSubPixelAA, mOptions[kOptionSubPixelAA]);

			bResult = pOutlineFont->Open(pFaceSource->mpStream, pFaceSource->mnFaceIndex);

			if(bResult)
			{
				EA_ASSERT(ssCSS.mfSize > 0);
				pOutlineFont->SetTransform(ssCSS.mfSize, 0.f, 0.f);
				pOutlineFont->SetSmoothing(ssCSS.mSmooth);

				if(ssCSS.mEffect != kEffectNone)
					pOutlineFont->SetEffect(ssCSS.mEffect, ssCSS.mfEffectX, ssCSS.mfEffectY, ssCSS.mEffectBaseColor, ssCSS.mEffectColor, ssCSS.mHighLightColor);
			}

			pFont = pOutlineFont;
		}
	}
	else if(pFaceSource->mFontType == kFontTypeBitmap)
	{
		BmpFont* const pBmpFont = (BmpFont*)CreateNewFont(kFontTypeBitmap);

		if(pBmpFont)
		{
			if(mOptions[kOptionEnableDirectGlyphCacheUse] != -1)
				pBmpFont->SetOption(Font::kOptionEnableDirectGlyphCacheUse, mOptions[kOptionEnableDirectGlyphCacheUse]);
			if(mOptions[kOptionSystemMemoryCopy] != -1)
				pBmpFont->SetOption(Font::kOptionSystemMemoryCopy, mOptions[kOptionSystemMemoryCopy]);

			// We set pBmpFont to use the global GlyphCache, but unilaterally doing this is not
			// how we would like our system to work. The user should have higher level control
			// over the association (or lack thereof) of glyph caches with BmpFonts. 
			GlyphCache* const pGlyphCache = pBmpFont->GetGlyphCache();
			if(!pGlyphCache)
				pBmpFont->SetGlyphCache(mpGlyphCacheDefault);

			bResult = pBmpFont->Open(&pFaceSource->mpStream, 1);

			// Without understand the given application's storage system, we don't know how to 
			// read named streams except when they are native system disk file paths. The user
			// can override this class to provide extended behaviour. 

			if(bResult)
			{
				EATextPathString sDirectory;
				BmpTextureInfo*  pBmpTextureInfo = pBmpFont->GetBitmapTextureInfo(0);
				const uint32_t   streamType = pFaceSource->mpStream->GetType();

				if(pBmpTextureInfo && (streamType == EA::IO::FileStream::kTypeFileStream) && // If the name of the BmpFont's (first) texture is just a file name and not a path (as is typically the case)...
				   (EA::IO::Path::GetFileName(pBmpTextureInfo->mTextureFilePath.c_str()) == pBmpTextureInfo->mTextureFilePath.c_str()))
				{
					// We assume that the Bmp textures are in the same directory as the main Bmp font file.
					EA::IO::FileStream* const pFileStream = static_cast<EA::IO::FileStream*>(pFaceSource->mpStream);
					sDirectory.resize(IO::kMaxDirectoryLength);
					pFileStream->GetPath(&sDirectory[0], IO::kMaxDirectoryLength);
					sDirectory.resize((eastl_size_t)(EA::IO::Path::GetFileName(sDirectory.c_str()) - sDirectory.c_str()));
				}

				// Here we load the BmpFont textures. At this time we only know how to read
				// the textures from file streams (i.e. disk files). However, the user can 
				// override this function to provide a different interpretation of the font source name.
				const uint32_t count = pBmpFont->GetTextureCount();

				for(uint32_t i = 0; i < count; i++)
				{
					pBmpTextureInfo = pBmpFont->GetBitmapTextureInfo(i);

					EA_ASSERT(pBmpTextureInfo);
					if(pBmpTextureInfo)
					{
						pBmpTextureInfo->mTextureFilePath.insert(0, sDirectory);

						EA::IO::EATextFileStream* const pTextureStream = CORE_NEW(mpCoreAllocator, EATEXT_ALLOC_PREFIX "BmpFont", 0) EA::IO::EATextFileStream(pBmpTextureInfo->mTextureFilePath.c_str());

						if(pTextureStream)
						{
							pTextureStream->AddRef(); // AddRef it for this function.
#if EAIO_VERSION_N >= 30000
							pTextureStream->SetReleaseAllocator(mpCoreAllocator);
#else
							pTextureStream->mpCoreAllocator = mpCoreAllocator;
#endif

							if(pTextureStream->Open(IO::kAccessFlagRead))
								pBmpFont->ReadBmpTexture(pTextureStream, i);

							pTextureStream->Release(); // Release it for this function.
						}
					}
				}
			}

			pFont = pBmpFont;
		}
	}
	else if(pFaceSource->mFontType == kFontTypePolygon)
	{
		PolygonFont* const pPolygonFont = (PolygonFont*)CreateNewFont(kFontTypePolygon);

		if(pPolygonFont)
		{
			bResult = pPolygonFont->Open(pFaceSource->mpStream);

			if(bResult)
				pFont = pPolygonFont; 
		}
	}

	if(bResult)
	{
		pFont->AddRef(); // AddRef it for the caller.

		if(bManaged)
		{
			pFont->AddRef(); // AddRef it for our usage of it. We will Release it when it is removed from pFaceSource->mFontList.
			pFaceSource->mFontList.push_back(pFont);
		}
	}

	if(pFont)
		pFont->Release(); // Matches the AddRef above for this function.

	return pFont;
}


///////////////////////////////////////////////////////////////////////////////
// AddDirectory
//
uint32_t FontServer::AddDirectory(const FilePathChar* pFaceDirectory, const FilePathChar* pFilterList)
{
	#if EATEXT_THREAD_SAFETY_ENABLED
		EA::Thread::AutoFutex autoMutex(mMutex);
	#endif

	uint32_t       nCount(0);
	const uint32_t kPathCapacity = 512; // This is usually a good enough size for the platforms we will encounter.
	FilePathChar   pLocalDirectory[kPathCapacity];
	uint32_t       nDirectoryLength;

	if(pFaceDirectory)
		nDirectoryLength = (uint32_t)EA::StdC::Strlen(pFaceDirectory);
	else
	{
		pFaceDirectory   = pLocalDirectory;
		nDirectoryLength = GetSystemFontDirectory(pLocalDirectory, kPathCapacity);
	}

	if((nDirectoryLength > 0) && (nDirectoryLength < (kPathCapacity - 1)))
	{
		// Read all font files from the directory. We assume for now that the user has 
		// specified a filter specification that won't generate file duplications.
		using namespace EA::IO;

		DirectoryIterator            directoryIterator;
		DirectoryIterator::EntryList entryList(DirectoryIterator::EntryList::allocator_type(EASTL_NAME_VAL(EATEXT_ALLOC_PREFIX "FontServer")));
		FilePathChar                 pFilter[kPathCapacity] = { 0 };
		const FilePathChar           pFilterAll[] = { '*', '.', 't', 't', '?', ',', '*', '.', 'o', 't', 'f', ',', '*', '.', 'b', 'm', 'p', 'F', 'o', 'n', 't', ',', '*', '.', 'f', 'f', 's', '\0' }; // "*.tt?,*.otf,*.bmpFont,*.ffs" (ffs fonts are "Font Fusion Stroke" fonts).
		FilePathChar                 pPath[kPathCapacity];

		if(!pFilterList)
			pFilterList = pFilterAll;

		entryList.get_allocator().set_allocator(mpCoreAllocator);

		while(EA::StdC::SplitTokenDelimited(pFilterList, (uint32_t)-1, ',', pFilter, sizeof(pFilter) / sizeof(pFilter[0]), &pFilterList))
		{
			#if defined(EA_WCHAR_UNIQUE) && EA_WCHAR_UNIQUE
				EA::IO::Path::PathStringW path, filter;
				EA::IO::ConvertPath(path, pFaceDirectory);
				EA::IO::ConvertPath(filter, pFilter);
				directoryIterator.ReadRecursive(path.c_str(), entryList, filter.c_str(), EA::IO::kDirectoryEntryFile, true, false);
			#else
				directoryIterator.ReadRecursive(pFaceDirectory, entryList, pFilter, EA::IO::kDirectoryEntryFile, true, false);
			#endif
		}

		if(!entryList.empty())
		{
			EA::StdC::Strlcpy(pPath, pFaceDirectory, kPathCapacity);

			if(!IsFilePathSeparator(pPath[nDirectoryLength - 1]))
				pPath[nDirectoryLength++] = kFilePathSeparator16; // This leaves pPath unterminated, but that's OK.

			for(DirectoryIterator::EntryList::iterator it = entryList.begin(); it != entryList.end(); ++it)
			{
				const DirectoryIterator::Entry& entry = *it;

				EA_ASSERT(entry.msName.length());
				EA_ASSERT((nDirectoryLength + entry.msName.length()) < kPathCapacity);
				EA::StdC::Strlcpy(pPath + nDirectoryLength, entry.msName.c_str(), kPathCapacity - nDirectoryLength);
				pPath[kPathCapacity - 1] = 0;

				const uint32_t nAddedCount = AddFace(pPath);
				// EA_ASSERT(nAddedCount != 0); // We don't assert here because it's possible the user called this function twice on the same font, in which case it's up to the user to assert that this is a bad thing, not us.
				nCount += nAddedCount;
			}
		}
	}

	return nCount;
}


///////////////////////////////////////////////////////////////////////////////
// RemoveFace
//
uint32_t FontServer::RemoveFace(const Char* pFamilyName)
{
	#if EATEXT_THREAD_SAFETY_ENABLED
		EA::Thread::AutoFutex autoMutex(mMutex);
	#endif

	uint32_t count = 0;

	for(FaceMap::iterator it = mFaceMap.begin(); it != mFaceMap.end(); ) // For each face family we manage (e.g. Arial)...
	{
		const Face& face = (*it).second;

		if(EA::StdC::Stricmp(face.mFamily, pFamilyName) == 0) // If this face matches the user-specified face by name...
		{
			// Here we iterate each Font associated with the given Face and clear if from the GlyphCache.
			// Usually there are at most about five Fonts to deal with, and rarely are there more than ten or so.

			if(mpGlyphCacheDefault)
			{
				for(FaceSourceList::const_iterator itFSL = face.mFaceSourceList.begin(), itFSLEnd = face.mFaceSourceList.end();// For each specific face we manage (e.g. Arial Bold)...
					itFSL != itFSLEnd;
					++itFSL)
				{
					const FaceSource& faceSource = *itFSL;

					for(FontList::const_iterator itFL = faceSource.mFontList.begin(), itFLEnd = faceSource.mFontList.end(); // For each existing Font we are managing for the given face (e.g. Font of Arial 12)...
						itFL != itFLEnd;
						++itFL)
					{
						const Font* pFont = *itFL;
					
						mpGlyphCacheDefault->RemoveTextureInfo(pFont);
					}
				}
			}

			it = mFaceMap.erase(it);
			count++;
		}
		else
			++it;
	}

	return count;
}


///////////////////////////////////////////////////////////////////////////////
// AddEffect
//
void FontServer::AddEffect(uint32_t effectId, const EIWord* pInstructionList, uint32_t instructionCount)
{
	EA_ASSERT(instructionCount <= kEffectInstructionListCapacity);

	RemoveEffect(effectId);

	mEffectDataList.push_back();
	EffectData& effectData = mEffectDataList.back();
	effectData.mEffectId = effectId;
	memcpy(effectData.mEffectInstructions, pInstructionList, instructionCount * sizeof(uint32_t));
	effectData.mEffectInstructionCount = instructionCount;
}


///////////////////////////////////////////////////////////////////////////////
// RemoveEffect
//
void FontServer::RemoveEffect(uint32_t effectId)
{
	for(EffectDataList::iterator it = mEffectDataList.begin(); it != mEffectDataList.end(); ++it)
	{
		const uint32_t id = it->mEffectId;

		if(effectId == id)
		{
			mEffectDataList.erase(it);
			break;
		}
	}
}


///////////////////////////////////////////////////////////////////////////////
// GetEffect
//
bool FontServer::GetEffect(uint32_t effectId, const EIWord*& pInstructionList, uint32_t& instructionCount) const
{
	for(EffectDataList::const_iterator it = mEffectDataList.begin(), itEnd = mEffectDataList.end(); it != itEnd; ++it)
	{
		const EffectData& effectData = *it;

		if(effectData.mEffectId == effectId)
		{
			pInstructionList = effectData.mEffectInstructions;
			instructionCount = effectData.mEffectInstructionCount;
			return true;
		}
	}

	pInstructionList = NULL;
	instructionCount = 0;
	return false;
}


///////////////////////////////////////////////////////////////////////////////
// AddSubstitution
//
#if EATEXT_FAMILY_SUBSTITUTION_ENABLED

	bool FontServer::AddSubstitution(const Char* pFamily, const Char* pFamilySubstitution)
	{
		#if EATEXT_THREAD_SAFETY_ENABLED
			EA::Thread::AutoFutex autoMutex(mMutex);
		#endif

		FontServerString sFamilyLowerCase(pFamily, mFamilySubstitutionMap.get_overflow_allocator());
		sFamilyLowerCase.make_lower();

		EA_ASSERT(sFamilyLowerCase.length() <= kMaxFamilyNameSize);
		if(sFamilyLowerCase.length() <= kMaxFamilyNameSize)
		{
			FontServerString sSubstitutionLowerCase(pFamilySubstitution, mFamilySubstitutionMap.get_overflow_allocator());
			sSubstitutionLowerCase.make_lower();

			EA_ASSERT(sSubstitutionLowerCase.length() <= kMaxFamilyNameSize);
			if(sSubstitutionLowerCase.length() <= kMaxFamilyNameSize)
			{
				const FamilySubstitutionMap::const_iterator it = mFamilySubstitutionMap.find(sFamilyLowerCase);

				if(it == mFamilySubstitutionMap.end())
				{
					const FamilySubstitutionMap::value_type entry(sFamilyLowerCase, sSubstitutionLowerCase);
					mFamilySubstitutionMap.insert(entry);
				}
			}
		}

		return false;
	}

#endif // EATEXT_FAMILY_SUBSTITUTION_ENABLED




#endif // EATEXT_FONT_SERVER_ENABLED




} // namespace Text

} // namespace EA











