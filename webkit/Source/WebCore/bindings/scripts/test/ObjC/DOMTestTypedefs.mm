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

#import "DOMTestTypedefs.h"

#import "DOMNodeInternal.h"
#import "DOMSVGPointInternal.h"
#import "DOMTestTypedefsInternal.h"
#import "ExceptionHandlers.h"
#import "JSMainThreadExecState.h"
#import "SVGPoint.h"
#import "SerializedScriptValue.h"
#import "TestTypedefs.h"
#import "ThreadCheck.h"
#import "URL.h"
#import "WebCoreObjCExtras.h"
#import "WebScriptObjectPrivate.h"
#import <wtf/GetPtr.h>

#define IMPL reinterpret_cast<WebCore::TestTypedefs*>(_internal)

@implementation DOMTestTypedefs

- (void)dealloc
{
    if (WebCoreObjCScheduleDeallocateOnMainThread([DOMTestTypedefs class], self))
        return;

    if (_internal)
        IMPL->deref();
    [super dealloc];
}

- (unsigned long long)unsignedLongLongAttr
{
    WebCore::JSMainThreadNullState state;
    return IMPL->unsignedLongLongAttr();
}

- (void)setUnsignedLongLongAttr:(unsigned long long)newUnsignedLongLongAttr
{
    WebCore::JSMainThreadNullState state;
    IMPL->setUnsignedLongLongAttr(newUnsignedLongLongAttr);
}

- (NSString *)immutableSerializedScriptValue
{
    WebCore::JSMainThreadNullState state;
    return IMPL->immutableSerializedScriptValue()->toString();
}

- (void)setImmutableSerializedScriptValue:(NSString *)newImmutableSerializedScriptValue
{
    WebCore::JSMainThreadNullState state;
    ASSERT(newImmutableSerializedScriptValue);

    IMPL->setImmutableSerializedScriptValue(WebCore::SerializedScriptValue::create(WTF::String(newImmutableSerializedScriptValue)));
}

- (int)attrWithGetterException
{
    WebCore::JSMainThreadNullState state;
    WebCore::ExceptionCode ec = 0;
    int result = IMPL->attrWithGetterException(ec);
    WebCore::raiseOnDOMError(ec);
    return result;
}

- (void)setAttrWithGetterException:(int)newAttrWithGetterException
{
    WebCore::JSMainThreadNullState state;
    IMPL->setAttrWithGetterException(newAttrWithGetterException);
}

- (int)attrWithSetterException
{
    WebCore::JSMainThreadNullState state;
    return IMPL->attrWithSetterException();
}

- (void)setAttrWithSetterException:(int)newAttrWithSetterException
{
    WebCore::JSMainThreadNullState state;
    WebCore::ExceptionCode ec = 0;
    IMPL->setAttrWithSetterException(newAttrWithSetterException, ec);
    WebCore::raiseOnDOMError(ec);
}

- (NSString *)stringAttrWithGetterException
{
    WebCore::JSMainThreadNullState state;
    WebCore::ExceptionCode ec = 0;
    NSString *result = IMPL->stringAttrWithGetterException(ec);
    WebCore::raiseOnDOMError(ec);
    return result;
}

- (void)setStringAttrWithGetterException:(NSString *)newStringAttrWithGetterException
{
    WebCore::JSMainThreadNullState state;
    IMPL->setStringAttrWithGetterException(newStringAttrWithGetterException);
}

- (NSString *)stringAttrWithSetterException
{
    WebCore::JSMainThreadNullState state;
    return IMPL->stringAttrWithSetterException();
}

- (void)setStringAttrWithSetterException:(NSString *)newStringAttrWithSetterException
{
    WebCore::JSMainThreadNullState state;
    WebCore::ExceptionCode ec = 0;
    IMPL->setStringAttrWithSetterException(newStringAttrWithSetterException, ec);
    WebCore::raiseOnDOMError(ec);
}

- (void)setShadow:(float)width height:(float)height blur:(float)blur color:(NSString *)color alpha:(float)alpha
{
    WebCore::JSMainThreadNullState state;
    IMPL->setShadow(width, height, blur, color, alpha);
}

- (DOMSVGPoint *)immutablePointFunction
{
    WebCore::JSMainThreadNullState state;
    return kit(WTF::getPtr(IMPL->immutablePointFunction()));
}

- (void)methodWithException
{
    WebCore::JSMainThreadNullState state;
    WebCore::ExceptionCode ec = 0;
    IMPL->methodWithException(ec);
    WebCore::raiseOnDOMError(ec);
}

@end

WebCore::TestTypedefs* core(DOMTestTypedefs *wrapper)
{
    return wrapper ? reinterpret_cast<WebCore::TestTypedefs*>(wrapper->_internal) : 0;
}

DOMTestTypedefs *kit(WebCore::TestTypedefs* value)
{
    WebCoreThreadViolationCheckRoundOne();
    if (!value)
        return nil;
    if (DOMTestTypedefs *wrapper = getDOMWrapper(value))
        return [[wrapper retain] autorelease];
    DOMTestTypedefs *wrapper = [[DOMTestTypedefs alloc] _init];
    wrapper->_internal = reinterpret_cast<DOMObjectInternal*>(value);
    value->ref();
    addDOMWrapper(wrapper, value);
    return [wrapper autorelease];
}
