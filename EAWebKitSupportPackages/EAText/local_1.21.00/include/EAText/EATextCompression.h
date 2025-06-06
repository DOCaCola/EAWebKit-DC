///////////////////////////////////////////////////////////////////////////////
// EATextCompression.h
//
// Copyright (c) 2004 Electronic Arts. All Rights Reserved.
// By Paul Pedriana, Maxis
//
// This file defines an interface for SCSU and BOCU-1 Unicode compression.
// See below for details.
//
///////////////////////////////////////////////////////////////////////////////


#ifndef EATEXT_EATEXTCOMPRESSION_H
#define EATEXT_EATEXTCOMPRESSION_H


#include <EAText/EAText.h>
#include <stddef.h>


namespace EA
{
	namespace Text
	{

		/// CompressSCSU
		///
		/// Implements SCSU Unicode compression.
		/// Returns the required output capacity, which will be greater than
		/// the nTextOutputCapacity value if there wasn't enough space. 
		/// Any UCS-2 Unicode value is valid as input text, including 0.
		/// The input is not expected to be 0-terminated, nor is the output
		/// 0-terminated; the characters are simply compressed as-is.
		///  
		/// SCSU Unicode compression is defined by Unicode TR6:
		///     http://www.unicode.org/reports/tr6/
		/// A good overview of SCSU can be found at:
		///     http://users.adelphia.net/~dewell/compression.html
		///
		/// SCSU compression results in 8 bit text taking 8 bits and 16 bit 
		/// text taking 16 bits. With UTF8 encoding, you get 8 bit text taking
		/// 8 bits, but 16 bit text taking 24, 32, 40, or even 48 bits. 
		/// With UCS2 or UTF16 encoding, you have all characters unilaterally
		/// taking 16 bits each. So SCSU lets you have it both ways, with the 
		/// downside being that you have to decode the SCSU text in order to
		/// convert it to another encoding at runtime.
		///
		EATEXT_API uint32_t CompressSCSU(const Char* pTextInput, uint32_t nTextInputLength, 
											   Char* pTextOutput, uint32_t nTextOutputCapacity);

		/// DecompressSCSU
		///
		/// Implements SCSU Unicode decompression to match CompressSCSU.
		/// The compressed input text must be a complete valid block compressed
		/// by the CompressSCSU function or a functionally equivalent function.
		///
		EATEXT_API uint32_t DecompressSCSU(const Char* pTextInput, uint32_t nTextInputLength, 
												 Char* pTextOutput, uint32_t nTextOutputCapacity);



		/// CompressBOCU
		///
		/// Implements BOCU-1 Unicode compression.
		/// Returns the required output capacity, which will be greater than
		/// the nTextOutputCapacity value if there wasn't enough space. 
		/// Any UCS-2 Unicode value is valid as input text, including 0.
		/// The input is not expected to be 0-terminated, nor is the output
		/// 0-terminated; the characters are simply compressed as-is.
		///
		/// A key aspect of the BOCU algorithm is that compressed BOCU data 
		/// has the same sorting value as uncompressed BOCU data. That means
		/// that you can store sorted BOCU strings in compressed form and they
		/// will strcmp to each other equally to when they are decompressed.
		///  
		EATEXT_API uint32_t CompressBOCU(const Char* pTextInput, uint32_t nTextInputLength, 
											   Char* pTextOutput, uint32_t nTextOutputCapacity);

		/// DecompressBOCU
		///
		/// Implements BOCU Unicode decompression to match CompressBOCU.
		/// The compressed input text must be a complete valid block compressed
		/// by the CompressBOCU function or a functionally equivalent function.
		///
		///
		EATEXT_API uint32_t DecompressBOCU(const Char* pTextInput, uint32_t nTextInputLength, 
												 Char* pTextOutput, uint32_t nTextOutputCapacity);


	} // namespace Text

} // namespace EA


#endif // EATEXT_EATEXTUNICODE_H











