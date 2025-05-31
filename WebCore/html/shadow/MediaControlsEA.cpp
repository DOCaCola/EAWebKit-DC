/*
 * Copyright (C) 2007, 2008, 2009, 2010 Apple Inc. All rights reserved.
 * Copyright (C) 2011, 2012 Google Inc. All rights reserved.
 * Copyright (C) 2012 Zan Dobersek <zandobersek@gmail.com>
 * Copyright (C) 2012 Igalia S.L.
 * Copyright (C) 2014, 2015 Electronic Arts, Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#include "config.h"

#if ENABLE(VIDEO)
#include "MediaControlsEA.h"

#include "Chrome.h"
#include "EventNames.h"
#include "MouseEvent.h"

namespace WebCore {

class MediaControlsEAEventListener : public EventListener {
public:
    static PassRefPtr<MediaControlsEAEventListener> create(MediaControlsEA* mediaControls) { return adoptRef(new MediaControlsEAEventListener(mediaControls)); }
    static const MediaControlsEAEventListener* cast(const EventListener* listener)
    {
        return listener->type() == CPPEventListenerType
            ? static_cast<const MediaControlsEAEventListener*>(listener)
            : 0;
    }

    virtual bool operator==(const EventListener& other) const;

private:
    MediaControlsEAEventListener(MediaControlsEA* mediaControls)
        : EventListener(CPPEventListenerType)
        , m_mediaControls(mediaControls)
    {
    }

    virtual void handleEvent(ScriptExecutionContext*, Event*);

    MediaControlsEA* m_mediaControls;
};

MediaControlsEA::MediaControlsEA(Document& document)
	: MediaControls(document)
	, m_durationDisplay(nullptr)
	, m_enclosure(nullptr)
	, m_volumeSliderContainer(nullptr)
	, m_closedCaptionsTrackList(nullptr)
	, m_closedCaptionsContainer(nullptr)
	, m_eventListener(nullptr)
{
}

RefPtr<MediaControls> MediaControls::tryCreate(Document& document)
{
    return MediaControlsEA::tryCreateControls(document);
}

PassRefPtr<MediaControlsEA> MediaControlsEA::tryCreateControls(Document& document)
{
    if (!document.page())
        return nullptr;

    RefPtr<MediaControlsEA> controls = adoptRef(new MediaControlsEA(document));

    if (controls->initializeControls(document))
        return controls.release();

    return nullptr;
}

bool MediaControlsEA::initializeControls(Document& document)
{
    // Create an enclosing element for the panel so we can visually offset the controls correctly.
    auto enclosure = MediaControlPanelEnclosureElement::create(document);
    auto panel = MediaControlPanelElement::create(document);

    auto playButton = MediaControlPlayButtonElement::create(document);
    m_playButton = playButton.ptr();
    if (panel->appendChild(playButton).hasException())
        return false;

    auto timeline = MediaControlTimelineElement::create(document, this);
    m_timeline = timeline.ptr();
    if (panel->appendChild(timeline).hasException())
        return false;

    auto currentTimeDisplay = MediaControlCurrentTimeDisplayElement::create(document);
    m_currentTimeDisplay = currentTimeDisplay.ptr();
    m_currentTimeDisplay->hide();
    if (panel->appendChild(currentTimeDisplay).hasException())
        return false;

    auto durationDisplay = MediaControlTimeRemainingDisplayElement::create(document);
    m_durationDisplay = durationDisplay.ptr();
    if (panel->appendChild(durationDisplay).hasException())
        return false;

    if (document.page()->theme().supportsClosedCaptioning()) {
        auto closedCaptionsContainer = MediaControlClosedCaptionsContainerElement::create(document);

        auto closedCaptionsTrackList = MediaControlClosedCaptionsTrackListElement::create(document, this);
        m_closedCaptionsTrackList = closedCaptionsTrackList.ptr();
        if (closedCaptionsContainer->appendChild(closedCaptionsTrackList).hasException())
            return false;

        auto toggleClosedCaptionsButton = MediaControlToggleClosedCaptionsButtonElement::create(document, this);
        m_toggleClosedCaptionsButton = toggleClosedCaptionsButton.ptr();
        if (panel->appendChild(toggleClosedCaptionsButton).hasException())
            return false;

        m_closedCaptionsContainer = closedCaptionsContainer.ptr();
        if (appendChild(closedCaptionsContainer).hasException())
            return false;
    }

    auto fullscreenButton = MediaControlFullscreenButtonElement::create(document);
    m_fullScreenButton = fullscreenButton.ptr();
    if (panel->appendChild(fullscreenButton).hasException())
        return false;

    auto panelMuteButton = MediaControlPanelMuteButtonElement::create(document, this);
    m_panelMuteButton = panelMuteButton.ptr();
    if (panel->appendChild(panelMuteButton).hasException())
        return false;

	auto sliderContainer = MediaControlVolumeSliderContainerElement::create(document);
    m_volumeSliderContainer = sliderContainer.ptr();
    if (panel->appendChild(sliderContainer).hasException())
        return false;

    auto slider = MediaControlPanelVolumeSliderElement::create(document);
    m_volumeSlider = slider.ptr();
    m_volumeSlider->setClearMutedOnUserInteraction(true);
    if (panel->appendChild(slider).hasException())
        return false;

    m_panel = panel.ptr();
    if (enclosure->appendChild(panel).hasException())
        return false;

    m_enclosure = enclosure.ptr();
    if (appendChild(enclosure).hasException())
        return false;

    return true;
}

void MediaControlsEA::setMediaController(MediaControllerInterface* controller)
{
    if (m_mediaController == controller)
        return;

    MediaControls::setMediaController(controller);

    if (m_durationDisplay)
        m_durationDisplay->setMediaController(controller);
    if (m_enclosure)
        m_enclosure->setMediaController(controller);
    if (m_closedCaptionsContainer)
        m_closedCaptionsContainer->setMediaController(controller);
    if (m_closedCaptionsTrackList)
        m_closedCaptionsTrackList->setMediaController(controller);
}

void MediaControlsEA::reset()
{
    Page* page = document().page();
    if (!page)
        return;

    double duration = m_mediaController->duration();
    m_durationDisplay->setInnerText(page->theme().formatMediaControlsTime(duration));
    m_durationDisplay->setCurrentValue(duration);

    if (m_toggleClosedCaptionsButton) {
        if (m_mediaController->hasClosedCaptions())
            m_toggleClosedCaptionsButton->show();
        else
            m_toggleClosedCaptionsButton->hide();
    }

    MediaControls::reset();
}

void MediaControlsEA::playbackStarted()
{
    m_currentTimeDisplay->show();
    m_durationDisplay->hide();

    MediaControls::playbackStarted();
}

void MediaControlsEA::updateCurrentTimeDisplay()
{
    double now = m_mediaController->currentTime();
    double duration = m_mediaController->duration();

    Page* page = document().page();
    if (!page)
        return;

    // After seek, hide duration display and show current time.
    if (now > 0) {
        m_currentTimeDisplay->show();
        m_durationDisplay->hide();
    }

    // Allow the theme to format the time.
    m_currentTimeDisplay->setInnerText(page->theme().formatMediaControlsCurrentTime(now, duration));
    m_currentTimeDisplay->setCurrentValue(now);
}

void MediaControlsEA::changedMute()
{
    MediaControls::changedMute();

    if (m_mediaController->muted())
        m_volumeSlider->setVolume(0);
    else
        m_volumeSlider->setVolume(m_mediaController->volume());
}


void MediaControlsEA::makeTransparent()
{
    MediaControls::makeTransparent();

    if (m_volumeSliderContainer)
    {
        m_volumeSliderContainer->hide();
    }

    hideClosedCaptionTrackList();
}

void MediaControlsEA::showVolumeSlider()
{
    if (!m_mediaController->hasAudio())
        return;

    //EAWebKitTODO: the volume slider is a little awkward to use, so keep it hidden for the time being (the mute button still works)
    /*
    if (m_volumeSliderContainer)
        m_volumeSliderContainer->show();
    */
}

#if ENABLE(VIDEO_TRACK)
void MediaControlsEA::createTextTrackDisplay()
{
    if (m_textDisplayContainer)
        return;

    auto textDisplayContainer = MediaControlTextTrackContainerElement::create(document());
    m_textDisplayContainer = textDisplayContainer.ptr();

    if (m_mediaController)
        m_textDisplayContainer->setMediaController(m_mediaController);

    // Insert it before the first controller element so it always displays behind the controls.
    insertBefore(textDisplayContainer, m_enclosure);
}
#endif

void MediaControlsEA::toggleClosedCaptionTrackList()
{
    if (!m_mediaController->hasClosedCaptions())
        return;

    if (!m_closedCaptionsContainer || !m_closedCaptionsTrackList)
        return;

    if (m_closedCaptionsContainer->isShowing()) {
        hideClosedCaptionTrackList();
        return;
    }

    m_closedCaptionsTrackList->updateDisplay();
    showClosedCaptionTrackList();
}

void MediaControlsEA::showClosedCaptionTrackList()
{
    m_volumeSliderContainer->hide();

    if (!m_closedCaptionsContainer || m_closedCaptionsContainer->isShowing())
        return;

    m_closedCaptionsContainer->show();
    m_panel->setInlineStyleProperty(CSSPropertyPointerEvents, CSSValueNone);

    EventListener& listener = eventListener();

    // Check for clicks outside the media-control
    document().addEventListener(eventNames().clickEvent, listener, true);
    // Check for clicks inside the media-control box
    addEventListener(eventNames().clickEvent, listener, true);
}

void MediaControlsEA::hideClosedCaptionTrackList()
{
    if (!m_closedCaptionsContainer || !m_closedCaptionsContainer->isShowing())
        return;

    m_closedCaptionsContainer->hide();
    m_panel->removeInlineStyleProperty(CSSPropertyPointerEvents);

    EventListener& listener = eventListener();

    document().removeEventListener(eventNames().clickEvent, listener, true);
    removeEventListener(eventNames().clickEvent, listener, true);
}

void MediaControlsEA::handleClickEvent(Event *event)
{
    Node* currentTarget = event->currentTarget()->toNode();
    Node* target = event->target()->toNode();

    if ((currentTarget == &document() && !shadowHost()->contains(target))
        || (currentTarget == this && !m_closedCaptionsContainer->contains(target))) {
        hideClosedCaptionTrackList();
        event->stopImmediatePropagation();
        event->setDefaultHandled();
    }
}

MediaControlsEAEventListener& MediaControlsEA::eventListener()
{
    if (!m_eventListener)
        m_eventListener = MediaControlsEAEventListener::create(this);

    return *m_eventListener;
}

void MediaControlsEAEventListener::handleEvent(ScriptExecutionContext*, Event* event)
{
    if (event->type() == eventNames().clickEvent)
        m_mediaControls->handleClickEvent(event);

    return;
}

bool MediaControlsEAEventListener::operator==(const EventListener& listener) const
{
    if (const MediaControlsEAEventListener* mediaControlsEAEventListener = MediaControlsEAEventListener::cast(&listener))
        return m_mediaControls == mediaControlsEAEventListener->m_mediaControls;
    return false;
}

}
#endif
