/*
 * Copyright (C) 2007, 2008, 2009, 2010 Apple Inc. All rights reserved.
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
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

#pragma once

#if ENABLE(VIDEO)

#include "HTMLMediaElement.h"
#include <memory>

namespace WebCore {

class HTMLImageLoader;
class RenderVideo;

class HTMLVideoElement final : public HTMLMediaElement {
public:
    static Ref<HTMLVideoElement> create(const QualifiedName&, Document&, bool createdByParser);

    WEBCORE_EXPORT unsigned videoWidth() const;
    WEBCORE_EXPORT unsigned videoHeight() const;

    void webkitEnterFullscreen(ExceptionCode&);
    void webkitExitFullscreen();
    bool webkitSupportsFullscreen();
    bool webkitDisplayingFullscreen();

    void ancestorWillEnterFullscreen() override;
    
    // FIXME: Maintain "FullScreen" capitalization scheme for backwards compatibility.
    // https://bugs.webkit.org/show_bug.cgi?id=36081
    void webkitEnterFullScreen(ExceptionCode& ec) { webkitEnterFullscreen(ec); }
    void webkitExitFullScreen() { webkitExitFullscreen(); }

#if ENABLE(WIRELESS_PLAYBACK_TARGET)
    bool webkitWirelessVideoPlaybackDisabled() const;
    void setWebkitWirelessVideoPlaybackDisabled(bool);
#endif

#if ENABLE(MEDIA_STATISTICS)
    unsigned webkitDecodedFrameCount() const;
    unsigned webkitDroppedFrameCount() const;
#endif

    // Used by canvas to gain raw pixel access
    void paintCurrentFrameInContext(GraphicsContext&, const FloatRect&);

    NativeImagePtr nativeImageForCurrentTime();

    // Used by WebGL to do GPU-GPU textures copy if possible.
    // See more details at MediaPlayer::copyVideoTextureToPlatformTexture() defined in Source/WebCore/platform/graphics/MediaPlayer.h.
    bool copyVideoTextureToPlatformTexture(GraphicsContext3D*, Platform3DObject texture, GC3Denum target, GC3Dint level, GC3Denum internalFormat, GC3Denum format, GC3Denum type, bool premultiplyAlpha, bool flipY);

    bool shouldDisplayPosterImage() const { return displayMode() == Poster || displayMode() == PosterWaitingForVideo; }

    URL posterImageURL() const;
    RenderPtr<RenderElement> createElementRenderer(RenderStyle&&, const RenderTreePosition&) override;

#if ENABLE(VIDEO_PRESENTATION_MODE)
    enum class VideoPresentationMode { Fullscreen, PictureInPicture, Inline };
    bool webkitSupportsPresentationMode(VideoPresentationMode) const;
    void webkitSetPresentationMode(VideoPresentationMode);
    VideoPresentationMode webkitPresentationMode() const;
    void setFullscreenMode(VideoFullscreenMode);
    void fullscreenModeChanged(VideoFullscreenMode) override;
#endif

#if PLATFORM(MAC) && ENABLE(VIDEO_PRESENTATION_MODE)
    void exitToFullscreenModeWithoutAnimationIfPossible(HTMLMediaElementEnums::VideoFullscreenMode fromMode, HTMLMediaElementEnums::VideoFullscreenMode toMode);
#endif

    RenderVideo* renderer() const;

private:
    HTMLVideoElement(const QualifiedName&, Document&, bool createdByParser);

    void scheduleResizeEvent() override;
    void scheduleResizeEventIfSizeChanged() override;
    bool rendererIsNeeded(const RenderStyle&) override;
    void didAttachRenderers() override;
    void parseAttribute(const QualifiedName&, const AtomicString&) override;
    bool isPresentationAttribute(const QualifiedName&) const override;
    void collectStyleForPresentationAttribute(const QualifiedName&, const AtomicString&, MutableStyleProperties&) override;
    bool isVideo() const override { return true; }
    bool hasVideo() const override { return player() && player()->hasVideo(); }
    bool supportsFullscreen(HTMLMediaElementEnums::VideoFullscreenMode) const override;
    bool isURLAttribute(const Attribute&) const override;
    const AtomicString& imageSourceURL() const override;

    bool hasAvailableVideoFrame() const;
    void updateDisplayState() override;
    void didMoveToNewDocument(Document* oldDocument) override;
    void setDisplayMode(DisplayMode) override;

    PlatformMediaSession::MediaType presentationType() const override { return PlatformMediaSession::Video; }

    std::unique_ptr<HTMLImageLoader> m_imageLoader;

    AtomicString m_defaultPosterURL;

    unsigned m_lastReportedVideoWidth { 0 };
    unsigned m_lastReportedVideoHeight { 0 };
};

} // namespace WebCore

SPECIALIZE_TYPE_TRAITS_BEGIN(WebCore::HTMLVideoElement)
    static bool isType(const WebCore::HTMLMediaElement& element) { return element.hasTagName(WebCore::HTMLNames::videoTag); }
    static bool isType(const WebCore::Element& element) { return is<WebCore::HTMLMediaElement>(element) && isType(downcast<WebCore::HTMLMediaElement>(element)); }
    static bool isType(const WebCore::Node& node) { return is<WebCore::HTMLMediaElement>(node) && isType(downcast<WebCore::HTMLMediaElement>(node)); }
SPECIALIZE_TYPE_TRAITS_END()

#endif // ENABLE(VIDEO)
