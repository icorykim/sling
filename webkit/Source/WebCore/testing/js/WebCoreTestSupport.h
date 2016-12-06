/*
 * Copyright (C) 2011, 2015 Google Inc. All rights reserved.
 * Copyright (C) 2016 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE AND ITS CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL APPLE OR ITS CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef WebCoreTestSupport_h
#define WebCoreTestSupport_h

typedef const struct OpaqueJSContext* JSContextRef;
typedef struct OpaqueJSValue* JSObjectRef;

#if PLATFORM(COCOA)
#define TEST_SUPPORT_EXPORT WTF_EXPORT_PRIVATE
#else
#define TEST_SUPPORT_EXPORT
#endif

namespace WTF {
class String;
}

namespace WebCore {
class Frame;
}

namespace WebCoreTestSupport {

void injectInternalsObject(JSContextRef) TEST_SUPPORT_EXPORT;
void resetInternalsObject(JSContextRef) TEST_SUPPORT_EXPORT;
void monitorWheelEvents(WebCore::Frame&) TEST_SUPPORT_EXPORT;
void setTestCallbackAndStartNotificationTimer(WebCore::Frame&, JSContextRef, JSObjectRef) TEST_SUPPORT_EXPORT;
void clearWheelEventTestTrigger(WebCore::Frame&) TEST_SUPPORT_EXPORT;

void setLogChannelToAccumulate(const WTF::String& name) TEST_SUPPORT_EXPORT;
void initializeLoggingChannelsIfNecessary() TEST_SUPPORT_EXPORT;
void setAllowsAnySSLCertificate(bool) TEST_SUPPORT_EXPORT;

} // namespace WebCore

#endif
