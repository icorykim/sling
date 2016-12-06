/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSTestGlobalObject.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDOMConstructor.h"
#include "JSDOMConvert.h"
#include "RuntimeEnabledFeatures.h"
#include "URL.h"
#include "WebCoreJSClientData.h"
#include <runtime/Error.h>
#include <runtime/FunctionPrototype.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsTestGlobalObjectInstanceFunctionRegularOperation(JSC::ExecState*);
#if ENABLE(TEST_FEATURE)
JSC::EncodedJSValue JSC_HOST_CALL jsTestGlobalObjectInstanceFunctionEnabledAtRuntimeOperation(JSC::ExecState*);
#endif

// Attributes

JSC::EncodedJSValue jsTestGlobalObjectRegularAttribute(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
bool setJSTestGlobalObjectRegularAttribute(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
JSC::EncodedJSValue jsTestGlobalObjectPublicAndPrivateAttribute(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
bool setJSTestGlobalObjectPublicAndPrivateAttribute(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
#if ENABLE(TEST_FEATURE)
JSC::EncodedJSValue jsTestGlobalObjectPublicAndPrivateConditionalAttribute(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
bool setJSTestGlobalObjectPublicAndPrivateConditionalAttribute(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
#endif
#if ENABLE(TEST_FEATURE)
JSC::EncodedJSValue jsTestGlobalObjectEnabledAtRuntimeAttribute(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
bool setJSTestGlobalObjectEnabledAtRuntimeAttribute(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);
#endif
JSC::EncodedJSValue jsTestGlobalObjectConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
bool setJSTestGlobalObjectConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);

typedef JSDOMConstructorNotConstructable<JSTestGlobalObject> JSTestGlobalObjectConstructor;

/* Hash table */

static const struct CompactHashIndex JSTestGlobalObjectTableIndex[16] = {
    { -1, -1 },
    { -1, -1 },
    { 2, -1 },
    { 0, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 3, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 1, -1 },
    { -1, -1 },
};


static const HashTableValue JSTestGlobalObjectTableValues[] =
{
    { "regularAttribute", CustomAccessor, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestGlobalObjectRegularAttribute), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSTestGlobalObjectRegularAttribute) } },
    { "publicAndPrivateAttribute", CustomAccessor, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestGlobalObjectPublicAndPrivateAttribute), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSTestGlobalObjectPublicAndPrivateAttribute) } },
#if ENABLE(TEST_FEATURE)
    { "publicAndPrivateConditionalAttribute", CustomAccessor, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestGlobalObjectPublicAndPrivateConditionalAttribute), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSTestGlobalObjectPublicAndPrivateConditionalAttribute) } },
#else
    { 0, 0, NoIntrinsic, { 0, 0 } },
#endif
    { "regularOperation", JSC::Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(jsTestGlobalObjectInstanceFunctionRegularOperation), (intptr_t) (1) } },
};

static const HashTable JSTestGlobalObjectTable = { 4, 15, true, JSTestGlobalObjectTableValues, JSTestGlobalObjectTableIndex };
template<> JSValue JSTestGlobalObjectConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    UNUSED_PARAM(vm);
    return globalObject.functionPrototype();
}

template<> void JSTestGlobalObjectConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->prototype, globalObject.getPrototypeDirect(), DontDelete | ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String(ASCIILiteral("TestGlobalObject"))), ReadOnly | DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontEnum);
}

template<> const ClassInfo JSTestGlobalObjectConstructor::s_info = { "TestGlobalObject", &Base::s_info, 0, CREATE_METHOD_TABLE(JSTestGlobalObjectConstructor) };

/* Hash table for prototype */

static const struct CompactHashIndex JSTestGlobalObjectPrototypeTableIndex[2] = {
    { -1, -1 },
    { 0, -1 },
};


static const HashTableValue JSTestGlobalObjectPrototypeTableValues[] =
{
    { "constructor", DontEnum, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestGlobalObjectConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSTestGlobalObjectConstructor) } },
};

static const HashTable JSTestGlobalObjectPrototypeTable = { 1, 1, true, JSTestGlobalObjectPrototypeTableValues, JSTestGlobalObjectPrototypeTableIndex };
const ClassInfo JSTestGlobalObjectPrototype::s_info = { "TestGlobalObjectPrototype", &Base::s_info, &JSTestGlobalObjectPrototypeTable, CREATE_METHOD_TABLE(JSTestGlobalObjectPrototype) };

const ClassInfo JSTestGlobalObject::s_info = { "TestGlobalObject", &Base::s_info, &JSTestGlobalObjectTable, CREATE_METHOD_TABLE(JSTestGlobalObject) };

JSTestGlobalObject::JSTestGlobalObject(Structure* structure, JSDOMGlobalObject& globalObject, Ref<TestGlobalObject>&& impl)
    : JSDOMWrapper<TestGlobalObject>(structure, globalObject, WTFMove(impl))
{
}

void JSTestGlobalObject::finishCreation(VM& vm, JSProxy* proxy)
{
    Base::finishCreation(vm, proxy);

#if ENABLE(TEST_FEATURE)
    if (RuntimeEnabledFeatures::sharedFeatures().testFeatureEnabled()) {
        auto* customGetterSetter = CustomGetterSetter::create(vm, jsTestGlobalObjectEnabledAtRuntimeAttribute, setJSTestGlobalObjectEnabledAtRuntimeAttribute);
        putDirectCustomAccessor(vm, vm.propertyNames->enabledAtRuntimeAttribute, customGetterSetter, attributesForStructure(CustomAccessor));
    }
#endif
    putDirectCustomAccessor(vm, static_cast<JSVMClientData*>(vm.clientData)->builtinNames().publicAndPrivateAttributePrivateName(), CustomGetterSetter::create(vm, jsTestGlobalObjectPublicAndPrivateAttribute, nullptr), attributesForStructure(DontDelete | ReadOnly));
#if ENABLE(TEST_FEATURE)
    putDirectCustomAccessor(vm, static_cast<JSVMClientData*>(vm.clientData)->builtinNames().publicAndPrivateConditionalAttributePrivateName(), CustomGetterSetter::create(vm, jsTestGlobalObjectPublicAndPrivateConditionalAttribute, nullptr), attributesForStructure(DontDelete | ReadOnly));
#endif
#if ENABLE(TEST_FEATURE)
    if (RuntimeEnabledFeatures::sharedFeatures().testFeatureEnabled())
        putDirectNativeFunction(vm, this, vm.propertyNames->enabledAtRuntimeOperation, 1, jsTestGlobalObjectInstanceFunctionEnabledAtRuntimeOperation, NoIntrinsic, attributesForStructure(JSC::Function));
#endif
}

void JSTestGlobalObject::destroy(JSC::JSCell* cell)
{
    JSTestGlobalObject* thisObject = static_cast<JSTestGlobalObject*>(cell);
    thisObject->JSTestGlobalObject::~JSTestGlobalObject();
}

EncodedJSValue jsTestGlobalObjectRegularAttribute(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(thisValue);
    JSValue decodedThisValue = JSValue::decode(thisValue);
    auto* castedThis = jsDynamicCast<JSTestGlobalObject*>(decodedThisValue);
    if (UNLIKELY(!castedThis)) {
        return throwGetterTypeError(*state, "TestGlobalObject", "regularAttribute");
    }
    auto& impl = castedThis->wrapped();
    JSValue result = jsStringWithCache(state, impl.regularAttribute());
    return JSValue::encode(result);
}


EncodedJSValue jsTestGlobalObjectPublicAndPrivateAttribute(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(thisValue);
    JSValue decodedThisValue = JSValue::decode(thisValue);
    auto* castedThis = jsDynamicCast<JSTestGlobalObject*>(decodedThisValue);
    if (UNLIKELY(!castedThis)) {
        return throwGetterTypeError(*state, "TestGlobalObject", "publicAndPrivateAttribute");
    }
    auto& impl = castedThis->wrapped();
    JSValue result = jsStringWithCache(state, impl.publicAndPrivateAttribute());
    return JSValue::encode(result);
}


#if ENABLE(TEST_FEATURE)
EncodedJSValue jsTestGlobalObjectPublicAndPrivateConditionalAttribute(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(thisValue);
    JSValue decodedThisValue = JSValue::decode(thisValue);
    auto* castedThis = jsDynamicCast<JSTestGlobalObject*>(decodedThisValue);
    if (UNLIKELY(!castedThis)) {
        return throwGetterTypeError(*state, "TestGlobalObject", "publicAndPrivateConditionalAttribute");
    }
    auto& impl = castedThis->wrapped();
    JSValue result = jsStringWithCache(state, impl.publicAndPrivateConditionalAttribute());
    return JSValue::encode(result);
}

#endif

#if ENABLE(TEST_FEATURE)
EncodedJSValue jsTestGlobalObjectEnabledAtRuntimeAttribute(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    UNUSED_PARAM(state);
    UNUSED_PARAM(thisValue);
    JSValue decodedThisValue = JSValue::decode(thisValue);
    auto* castedThis = jsDynamicCast<JSTestGlobalObject*>(decodedThisValue);
    if (UNLIKELY(!castedThis)) {
        return throwGetterTypeError(*state, "TestGlobalObject", "enabledAtRuntimeAttribute");
    }
    auto& impl = castedThis->wrapped();
    JSValue result = jsStringWithCache(state, impl.enabledAtRuntimeAttribute());
    return JSValue::encode(result);
}

#endif

EncodedJSValue jsTestGlobalObjectConstructor(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    JSTestGlobalObjectPrototype* domObject = jsDynamicCast<JSTestGlobalObjectPrototype*>(JSValue::decode(thisValue));
    if (UNLIKELY(!domObject))
        return throwVMTypeError(state);
    return JSValue::encode(JSTestGlobalObject::getConstructor(state->vm(), domObject->globalObject()));
}

bool setJSTestGlobalObjectConstructor(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    JSTestGlobalObjectPrototype* domObject = jsDynamicCast<JSTestGlobalObjectPrototype*>(JSValue::decode(thisValue));
    if (UNLIKELY(!domObject)) {
        throwVMTypeError(state);
        return false;
    }
    // Shadowing a built-in constructor
    return domObject->putDirect(state->vm(), state->propertyNames().constructor, value);
}

bool setJSTestGlobalObjectRegularAttribute(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(thisValue);
    JSTestGlobalObject* castedThis = jsDynamicCast<JSTestGlobalObject*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        return throwSetterTypeError(*state, "TestGlobalObject", "regularAttribute");
    }
    auto& impl = castedThis->wrapped();
    auto nativeValue = value.toWTFString(state);
    if (UNLIKELY(state->hadException()))
        return false;
    impl.setRegularAttribute(WTFMove(nativeValue));
    return true;
}


bool setJSTestGlobalObjectPublicAndPrivateAttribute(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(thisValue);
    JSTestGlobalObject* castedThis = jsDynamicCast<JSTestGlobalObject*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        return throwSetterTypeError(*state, "TestGlobalObject", "publicAndPrivateAttribute");
    }
    auto& impl = castedThis->wrapped();
    auto nativeValue = value.toWTFString(state);
    if (UNLIKELY(state->hadException()))
        return false;
    impl.setPublicAndPrivateAttribute(WTFMove(nativeValue));
    return true;
}


#if ENABLE(TEST_FEATURE)
bool setJSTestGlobalObjectPublicAndPrivateConditionalAttribute(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(thisValue);
    JSTestGlobalObject* castedThis = jsDynamicCast<JSTestGlobalObject*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        return throwSetterTypeError(*state, "TestGlobalObject", "publicAndPrivateConditionalAttribute");
    }
    auto& impl = castedThis->wrapped();
    auto nativeValue = value.toWTFString(state);
    if (UNLIKELY(state->hadException()))
        return false;
    impl.setPublicAndPrivateConditionalAttribute(WTFMove(nativeValue));
    return true;
}

#endif

#if ENABLE(TEST_FEATURE)
bool setJSTestGlobalObjectEnabledAtRuntimeAttribute(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(thisValue);
    JSTestGlobalObject* castedThis = jsDynamicCast<JSTestGlobalObject*>(JSValue::decode(thisValue));
    if (UNLIKELY(!castedThis)) {
        return throwSetterTypeError(*state, "TestGlobalObject", "enabledAtRuntimeAttribute");
    }
    auto& impl = castedThis->wrapped();
    auto nativeValue = value.toWTFString(state);
    if (UNLIKELY(state->hadException()))
        return false;
    impl.setEnabledAtRuntimeAttribute(WTFMove(nativeValue));
    return true;
}

#endif

JSValue JSTestGlobalObject::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTestGlobalObjectConstructor>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsTestGlobalObjectInstanceFunctionRegularOperation(ExecState* state)
{
    JSValue thisValue = state->thisValue();
    auto castedThis = jsDynamicCast<JSTestGlobalObject*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*state, "TestGlobalObject", "regularOperation");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSTestGlobalObject::info());
    auto& impl = castedThis->wrapped();
    if (UNLIKELY(state->argumentCount() < 1))
        return throwVMError(state, createNotEnoughArgumentsError(state));
    auto testParam = state->argument(0).toWTFString(state);
    if (UNLIKELY(state->hadException()))
        return JSValue::encode(jsUndefined());
    impl.regularOperation(WTFMove(testParam));
    return JSValue::encode(jsUndefined());
}

#if ENABLE(TEST_FEATURE)
static inline EncodedJSValue jsTestGlobalObjectInstanceFunctionEnabledAtRuntimeOperation1(ExecState* state)
{
    JSValue thisValue = state->thisValue();
    auto castedThis = jsDynamicCast<JSTestGlobalObject*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*state, "TestGlobalObject", "enabledAtRuntimeOperation");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSTestGlobalObject::info());
    auto& impl = castedThis->wrapped();
    if (UNLIKELY(state->argumentCount() < 1))
        return throwVMError(state, createNotEnoughArgumentsError(state));
    auto testParam = state->argument(0).toWTFString(state);
    if (UNLIKELY(state->hadException()))
        return JSValue::encode(jsUndefined());
    impl.enabledAtRuntimeOperation(WTFMove(testParam));
    return JSValue::encode(jsUndefined());
}

#endif

#if ENABLE(TEST_FEATURE)
static inline EncodedJSValue jsTestGlobalObjectInstanceFunctionEnabledAtRuntimeOperation2(ExecState* state)
{
    JSValue thisValue = state->thisValue();
    auto castedThis = jsDynamicCast<JSTestGlobalObject*>(thisValue);
    if (UNLIKELY(!castedThis))
        return throwThisTypeError(*state, "TestGlobalObject", "enabledAtRuntimeOperation");
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSTestGlobalObject::info());
    auto& impl = castedThis->wrapped();
    if (UNLIKELY(state->argumentCount() < 1))
        return throwVMError(state, createNotEnoughArgumentsError(state));
    auto testParam = convert<int32_t>(*state, state->argument(0), NormalConversion);
    if (UNLIKELY(state->hadException()))
        return JSValue::encode(jsUndefined());
    impl.enabledAtRuntimeOperation(WTFMove(testParam));
    return JSValue::encode(jsUndefined());
}

#endif

EncodedJSValue JSC_HOST_CALL jsTestGlobalObjectInstanceFunctionEnabledAtRuntimeOperation(ExecState* state)
{
    size_t argsCount = std::min<size_t>(1, state->argumentCount());
#if ENABLE(TEST_FEATURE)
    if (argsCount == 1)
        return jsTestGlobalObjectInstanceFunctionEnabledAtRuntimeOperation1(state);
#endif

#if ENABLE(TEST_FEATURE)
    if (argsCount == 1)
        return jsTestGlobalObjectInstanceFunctionEnabledAtRuntimeOperation2(state);
#endif

    if (UNLIKELY(argsCount < 1))
        return throwVMError(state, createNotEnoughArgumentsError(state));
    return throwVMTypeError(state);
}

bool JSTestGlobalObjectOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSTestGlobalObjectOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsTestGlobalObject = jsCast<JSTestGlobalObject*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsTestGlobalObject->wrapped(), jsTestGlobalObject);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7TestGlobalObject@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore16TestGlobalObjectE[]; }
#endif
#endif

JSC::JSValue toJSNewlyCreated(JSC::ExecState*, JSDOMGlobalObject* globalObject, Ref<TestGlobalObject>&& impl)
{

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl.ptr()));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7TestGlobalObject@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore16TestGlobalObjectE[2];
#if COMPILER(CLANG)
    // If this fails TestGlobalObject does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    static_assert(__is_polymorphic(TestGlobalObject), "TestGlobalObject is not polymorphic");
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // TestGlobalObject has subclasses. If TestGlobalObject has subclasses that get passed
    // to toJS() we currently require TestGlobalObject you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createWrapper<JSTestGlobalObject, TestGlobalObject>(globalObject, WTFMove(impl));
}

JSC::JSValue toJS(JSC::ExecState* state, JSDOMGlobalObject* globalObject, TestGlobalObject& impl)
{
    return wrap(state, globalObject, impl);
}

TestGlobalObject* JSTestGlobalObject::toWrapped(JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSTestGlobalObject*>(value))
        return &wrapper->wrapped();
    return nullptr;
}

}
