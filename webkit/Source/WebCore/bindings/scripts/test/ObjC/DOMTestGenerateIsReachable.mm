/*
 * This file is part of the WebKit open source project.
 * This file has been generated by generate-bindings.pl. DO NOT MODIFY!
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

#import "config.h"
#import "DOMInternal.h"

#import "DOMTestGenerateIsReachable.h"

#import "DOMNodeInternal.h"
#import "DOMTestGenerateIsReachableInternal.h"
#import "ExceptionHandlers.h"
#import "JSMainThreadExecState.h"
#import "TestGenerateIsReachable.h"
#import "ThreadCheck.h"
#import "WebCoreObjCExtras.h"
#import "WebScriptObjectPrivate.h"
#import <wtf/GetPtr.h>

#define IMPL reinterpret_cast<WebCore::TestGenerateIsReachable*>(_internal)

@implementation DOMTestGenerateIsReachable

- (void)dealloc
{
    if (WebCoreObjCScheduleDeallocateOnMainThread([DOMTestGenerateIsReachable class], self))
        return;

    if (_internal)
        IMPL->deref();
    [super dealloc];
}

@end

WebCore::TestGenerateIsReachable* core(DOMTestGenerateIsReachable *wrapper)
{
    return wrapper ? reinterpret_cast<WebCore::TestGenerateIsReachable*>(wrapper->_internal) : 0;
}

DOMTestGenerateIsReachable *kit(WebCore::TestGenerateIsReachable* value)
{
    WebCoreThreadViolationCheckRoundOne();
    if (!value)
        return nil;
    if (DOMTestGenerateIsReachable *wrapper = getDOMWrapper(value))
        return [[wrapper retain] autorelease];
    DOMTestGenerateIsReachable *wrapper = [[DOMTestGenerateIsReachable alloc] _init];
    wrapper->_internal = reinterpret_cast<DOMObjectInternal*>(value);
    value->ref();
    addDOMWrapper(wrapper, value);
    return [wrapper autorelease];
}
