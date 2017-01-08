// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IThreadWorker.h>
#include <Fuse.Scripting.JavaScriptCore.Array.h>
#include <Fuse.Scripting.JavaScriptCore.Context.CallbackWrapper.h>
#include <Fuse.Scripting.JavaScriptCore.Context.h>
#include <Fuse.Scripting.JavaScriptCore.Function.h>
#include <Fuse.Scripting.JavaScriptCore.JSClassRef.h>
#include <Fuse.Scripting.JavaScriptCore.JSClassRef.RawCallback.h>
#include <Fuse.Scripting.JavaScriptCore.JSContextRef.h>
#include <Fuse.Scripting.JavaScriptCore.JSObjectRef.h>
#include <Fuse.Scripting.JavaScriptCore.JSPropertyNameArray.h>
#include <Fuse.Scripting.JavaScriptCore.JSStringRef.h>
#include <Fuse.Scripting.JavaScriptCore.JSType.h>
#include <Fuse.Scripting.JavaScriptCore.JSTypedArray.h>
#include <Fuse.Scripting.JavaScriptCore.JSValueRef.h>
#include <Fuse.Scripting.JavaScriptCore.Object.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptException.h>
#include <JavaScriptCore/JSBase.h>
#include <JavaScriptCore/JSContextRef.h>
#include <JavaScriptCore/JSObjectRef.h>
#include <JavaScriptCore/JSStringRef.h>
#include <JavaScriptCore/JSValueRef.h>
#include <JSTypedArrayInclude.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[24];
static uType* TYPES[21];

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.JavaScriptCore/0.42.4/$.uno
// --------------------------------------------------------------------------------------------------------

// internal sealed extern class Array :9
// {
// ~Array() :21
static void Array__Finalize_fn(Array* __this)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Array", "Finalize()");
    ::JSObjectRef ind2;
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Unprotect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind2 = __this->_value, ind2)), uPtr(__this->_context)->_context);
}

static void Array_build(uType* type)
{
    ::STRINGS[0] = uString::Const("length");
    type->SetInterfaces(
        ::g::Fuse::Scripting::IArray_typeof(), offsetof(::g::Fuse::Scripting::Array_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScriptCore::Context_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Array, _context), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Array, _value), 0);
}

::g::Fuse::Scripting::Array_type* Array_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Array_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Array_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Array_type);
    type = (::g::Fuse::Scripting::Array_type*)uClassType::New("Fuse.Scripting.JavaScriptCore.Array", options);
    type->fp_build_ = Array_build;
    type->fp_Finalize = (void(*)(uObject*))Array__Finalize_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Array*, ::g::Fuse::Scripting::Array*, bool*))Array__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Array__GetHashCode_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Array*, int*, uObject**))Array__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Array*, int*, uObject*))Array__set_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Scripting::Array*, int*))Array__get_Length_fn;
    type->interface0.fp_get_Length = (void(*)(uObject*, int*))Array__get_Length_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uObject**))Array__get_Item_fn;
    return type;
}

// internal Array(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef array) :14
void Array__ctor_1_fn(Array* __this, ::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* array)
{
    __this->ctor_1(context, *array);
}

// public override sealed bool Equals(Fuse.Scripting.Array a) :57
void Array__Equals2_fn(Array* __this, ::g::Fuse::Scripting::Array* a, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Array", "Equals(Fuse.Scripting.Array)");
    ::JSObjectRef ind6;
    Array* jsa = uCast<Array*>(a, __this->__type);
    return *__retval = ::g::Uno::Object::Equals(uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), (ind6 = __this->_value, ind6), U_ALLOCA(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof()->ObjectSize)), uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), uPtr(jsa)->_value)), void();
}

// public override sealed int GetHashCode() :63
void Array__GetHashCode_fn(Array* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Array", "GetHashCode()");
    ::JSObjectRef ind7;
    return *__retval = ::g::Uno::Object::GetHashCode(uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), (ind7 = __this->_value, ind7), U_ALLOCA(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof()->ObjectSize))), void();
}

// public override sealed object get_Item(int index) :28
void Array__get_Item_fn(Array* __this, int* index, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Array", "get_Item(int)");
    ::JSObjectRef ind3;
    int index_ = *index;
    return *__retval = uPtr(__this->_context)->Wrap1(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetPropertyAtIndex1((ind3 = __this->_value, ind3), uPtr(__this->_context)->_context, index_, uPtr(__this->_context)->_onError)), void();
}

// public override sealed void set_Item(int index, object value) :35
void Array__set_Item_fn(Array* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Array", "set_Item(int,object)");
    ::JSObjectRef ind4;
    int index_ = *index;
    ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::SetPropertyAtIndex1((ind4 = __this->_value, ind4), uPtr(__this->_context)->_context, index_, uPtr(__this->_context)->Unwrap1(value), uPtr(__this->_context)->_onError);
}

// public override sealed int get_Length() :46
void Array__get_Length_fn(Array* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Array", "get_Length()");
    ::JSObjectRef ind5;
    return *__retval = (int)::g::Fuse::Scripting::JavaScriptCore::JSValueRef::ToNumber(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1((ind5 = __this->_value, ind5), uPtr(__this->_context)->_context, ::STRINGS[0/*"length"*/], uPtr(__this->_context)->_onError), uPtr(__this->_context)->_context, uPtr(__this->_context)->_onError), void();
}

// internal Array New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef array) :14
void Array__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* array, Array** __retval)
{
    *__retval = Array::New1(context, *array);
}

// internal Array(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef array) [instance] :14
void Array::ctor_1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef array)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Array", ".ctor(Fuse.Scripting.JavaScriptCore.Context,Fuse.Scripting.JavaScriptCore.JSObjectRef)");
    ::JSObjectRef ind1;
    ctor_();
    _context = context;
    _value = array;
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Protect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind1 = _value, ind1)), uPtr(_context)->_context);
}

// internal Array New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef array) [static] :14
Array* Array::New1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef array)
{
    Array* obj8 = (Array*)uNew(Array_typeof());
    obj8->ctor_1(context, array);
    return obj8;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.JavaScriptCore/0.42.4/$.uno
// --------------------------------------------------------------------------------------------------------

// private sealed extern class Context.CallbackWrapper :357
// {
static void Context__CallbackWrapper_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Scripting::Error_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Callback_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Context__CallbackWrapper, _callback), 0,
        ::g::Fuse::Scripting::JavaScriptCore::Context_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Context__CallbackWrapper, _context), 0);
}

uType* Context__CallbackWrapper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Context__CallbackWrapper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScriptCore.Context.CallbackWrapper", options);
    type->fp_build_ = Context__CallbackWrapper_build;
    return type;
}

// public CallbackWrapper(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.Callback callback) :362
void Context__CallbackWrapper__ctor__fn(Context__CallbackWrapper* __this, ::g::Fuse::Scripting::JavaScriptCore::Context* context, uDelegate* callback)
{
    __this->ctor_(context, callback);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef Call(Fuse.Scripting.JavaScriptCore.JSValueRef[] args, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :368
void Context__CallbackWrapper__Call_fn(Context__CallbackWrapper* __this, uArray* args, ::JSValueRef* exception, ::JSValueRef* __retval)
{
    *__retval = __this->Call(args, exception);
}

// public CallbackWrapper New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.Callback callback) :362
void Context__CallbackWrapper__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Context* context, uDelegate* callback, Context__CallbackWrapper** __retval)
{
    *__retval = Context__CallbackWrapper::New1(context, callback);
}

// public CallbackWrapper(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.Callback callback) [instance] :362
void Context__CallbackWrapper::ctor_(::g::Fuse::Scripting::JavaScriptCore::Context* context, uDelegate* callback)
{
    _context = context;
    _callback = callback;
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef Call(Fuse.Scripting.JavaScriptCore.JSValueRef[] args, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) [instance] :368
::JSValueRef Context__CallbackWrapper::Call(uArray* args, ::JSValueRef* exception)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context.CallbackWrapper", "Call(Fuse.Scripting.JavaScriptCore.JSValueRef[],Fuse.Scripting.JavaScriptCore.JSValueRef&)");
    *exception = NULL;

    try
    {
        return uPtr(_context)->Unwrap1(uPtr(_callback)->Invoke(1, (uArray*)uPtr(_context)->Wrap2(args)));
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[0/*Fuse.Scripting.Error*/]))
        {
            ::g::Fuse::Scripting::Error* e = (::g::Fuse::Scripting::Error*)__t.Exception;
            *exception = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeString1(uPtr(_context)->_context, uPtr(e)->Message());
        }
        else throw __t;
    }

    return NULL;
}

// public CallbackWrapper New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.Callback callback) [static] :362
Context__CallbackWrapper* Context__CallbackWrapper::New1(::g::Fuse::Scripting::JavaScriptCore::Context* context, uDelegate* callback)
{
    Context__CallbackWrapper* obj1 = (Context__CallbackWrapper*)uNew(Context__CallbackWrapper_typeof());
    obj1->ctor_(context, callback);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.JavaScriptCore/0.42.4/$.uno
// --------------------------------------------------------------------------------------------------------

// public sealed extern class Context :81
// {
// ~Context() :140
static void Context__Finalize_fn(Context* __this)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "Finalize()");
    __this->Dispose();
}

static void Context_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Function");
    ::STRINGS[2] = uString::Const("Array");
    ::STRINGS[3] = uString::Const("ArrayBuffer");
    ::STRINGS[4] = uString::Const("Uint8Array");
    ::STRINGS[5] = uString::Const("Context.Evaluate.fileName");
    ::STRINGS[6] = uString::Const("Context.Evaluate.code");
    ::STRINGS[7] = uString::Const("name");
    ::STRINGS[8] = uString::Const("message");
    ::STRINGS[9] = uString::Const("fileName");
    ::STRINGS[10] = uString::Const("sourceURL");
    ::STRINGS[11] = uString::Const("line");
    ::STRINGS[12] = uString::Const("lineNumber");
    ::STRINGS[13] = uString::Const("stack");
    ::STRINGS[14] = uString::Const("Unknown");
    ::STRINGS[15] = uString::Const("Fatal exception during Fuse.Scripting.JavaScriptCore startup: ");
    ::STRINGS[16] = uString::Const("Unhandled type in JavaScriptCore wrapper: ");
    ::STRINGS[17] = uString::Const("__unoHandle");
    ::STRINGS[18] = uString::Const("Internal error in JavaScriptCore wrapper");
    ::STRINGS[19] = uString::Const("Unhandled JSType in JavaScriptCore wrapper");
    ::STRINGS[20] = uString::Const("byteLength");
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Scripting::JavaScriptCore::Object_typeof();
    ::TYPES[3] = ::g::Uno::String_typeof();
    ::TYPES[4] = ::g::Uno::Double_typeof();
    ::TYPES[5] = ::g::Uno::Int_typeof();
    ::TYPES[6] = ::g::Uno::Float_typeof();
    ::TYPES[7] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[10] = ::g::Fuse::Scripting::JavaScriptCore::Array_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::JavaScriptCore::Function_typeof();
    ::TYPES[12] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[13] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[14] = ::g::Fuse::Scripting::JavaScriptCore::JSClassRef__RawCallback_typeof();
    ::TYPES[15] = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof()->Array();
    ::TYPES[16] = uObject_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Context_type, interface0));
    type->SetFields(14,
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Context, _arrayBufferType), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Context, _arrayType), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Context, _byteArrayType), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSContextRef_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Context, _context), 0,
        ::TYPES[8/*bool*/], offsetof(::g::Fuse::Scripting::JavaScriptCore::Context, _disposed), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Context, _functionType), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Context, _global), 0,
        ::TYPES[1/*Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef>*/], offsetof(::g::Fuse::Scripting::JavaScriptCore::Context, _onError), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSClassRef_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Context, _unoCallbackClass), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSClassRef_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Context, _unoFinalizerClass), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Context__New1_fn, 0, true, type, 1, ::g::Fuse::Scripting::IThreadWorker_typeof()));
}

::g::Fuse::Scripting::Context_type* Context_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Context_typeof();
    options.FieldCount = 24;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Context_type);
    type = (::g::Fuse::Scripting::Context_type*)uClassType::New("Fuse.Scripting.JavaScriptCore.Context", options);
    type->fp_build_ = Context_build;
    type->fp_Finalize = (void(*)(uObject*))Context__Finalize_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Scripting::Context*))Context__Dispose_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Context*, uString*, uString*, uObject**))Context__Evaluate_fn;
    type->fp_get_GlobalObject = (void(*)(::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::Object**))Context__get_GlobalObject_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Context__Dispose_fn;
    return type;
}

// public Context(Fuse.Scripting.IThreadWorker worker) :94
void Context__ctor_1_fn(Context* __this, uObject* worker)
{
    __this->ctor_1(worker);
}

// public override sealed void Dispose() :121
void Context__Dispose_fn(Context* __this)
{
    ::JSObjectRef ind6;
    ::JSObjectRef ind7;
    ::JSObjectRef ind8;
    ::JSObjectRef ind9;
    ::JSClassRef ind10;
    ::JSClassRef ind11;
    ::JSContextRef ind12;

    if (!__this->_disposed)
    {
        __this->_disposed = true;
        __this->_onError = NULL;
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Unprotect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind6 = __this->_functionType, ind6)), __this->_context);
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Unprotect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind7 = __this->_arrayType, ind7)), __this->_context);
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Unprotect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind8 = __this->_arrayBufferType, ind8)), __this->_context);
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Unprotect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind9 = __this->_byteArrayType, ind9)), __this->_context);
        ::g::Fuse::Scripting::JavaScriptCore::JSClassRef::Dispose((ind10 = __this->_unoFinalizerClass, ind10));
        ::g::Fuse::Scripting::JavaScriptCore::JSClassRef::Dispose((ind11 = __this->_unoCallbackClass, ind11));
        ::g::Fuse::Scripting::JavaScriptCore::JSContextRef::Dispose((ind12 = __this->_context, ind12));
    }
}

// public override sealed object Evaluate(string fileName, string code) :145
void Context__Evaluate_fn(Context* __this, uString* fileName, uString* code, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "Evaluate(string,string)");
    ::JSContextRef ind13;

    if (::g::Uno::String::op_Equality(fileName, NULL))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[5/*"Context.Eva...*/]));

    if (::g::Uno::String::op_Equality(code, NULL))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[6/*"Context.Eva...*/]));

    return *__retval = __this->Wrap1(::g::Fuse::Scripting::JavaScriptCore::JSContextRef::EvaluateScript1((ind13 = __this->_context, ind13), code, NULL, fileName, 0, __this->_onError)), void();
}

// public override sealed Fuse.Scripting.Object get_GlobalObject() :159
void Context__get_GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval)
{
    return *__retval = __this->_global, void();
}

// public Context New(Fuse.Scripting.IThreadWorker worker) :94
void Context__New1_fn(uObject* worker, Context** __retval)
{
    *__retval = Context::New1(worker);
}

// private void OnError(Fuse.Scripting.JavaScriptCore.JSValueRef exception) :177
void Context__OnError_fn(Context* __this, ::JSValueRef* exception)
{
    __this->OnError(*exception);
}

// private void OnSetupError(Fuse.Scripting.JavaScriptCore.JSValueRef exception) :170
void Context__OnSetupError_fn(Context* __this, ::JSValueRef* exception)
{
    __this->OnSetupError(*exception);
}

// private static void OnSetupErrorError(Fuse.Scripting.JavaScriptCore.JSValueRef exception) :165
void Context__OnSetupErrorError_fn(::JSValueRef* exception)
{
    Context::OnSetupErrorError(*exception);
}

// internal Fuse.Scripting.JavaScriptCore.JSValueRef Unwrap(object obj) :245
void Context__Unwrap1_fn(Context* __this, uObject* obj, ::JSValueRef* __retval)
{
    *__retval = __this->Unwrap1(obj);
}

// internal Fuse.Scripting.JavaScriptCore.JSValueRef[] Unwrap(object[] obj) :271
void Context__Unwrap2_fn(Context* __this, uArray* obj, uArray** __retval)
{
    *__retval = __this->Unwrap2(obj);
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef UnwrapArrayBuffer(byte[] data) :283
void Context__UnwrapArrayBuffer_fn(Context* __this, uArray* data, ::JSValueRef* __retval)
{
    *__retval = __this->UnwrapArrayBuffer(data);
}

// internal object Wrap(Fuse.Scripting.JavaScriptCore.JSValueRef value) :210
void Context__Wrap1_fn(Context* __this, ::JSValueRef* value, uObject** __retval)
{
    *__retval = __this->Wrap1(*value);
}

// internal object[] Wrap(Fuse.Scripting.JavaScriptCore.JSValueRef[] values) :235
void Context__Wrap2_fn(Context* __this, uArray* values, uArray** __retval)
{
    *__retval = __this->Wrap2(values);
}

// private byte[] WrapArrayBuffer(Fuse.Scripting.JavaScriptCore.JSObjectRef value) :314
void Context__WrapArrayBuffer_fn(Context* __this, ::JSObjectRef* value, uArray** __retval)
{
    *__retval = __this->WrapArrayBuffer(*value);
}

// public Context(Fuse.Scripting.IThreadWorker worker) [instance] :94
void Context::ctor_1(uObject* worker)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", ".ctor(Fuse.Scripting.IThreadWorker)");
    ::JSContextRef ind1;
    ::JSObjectRef ind2;
    ::JSObjectRef ind3;
    ::JSObjectRef ind4;
    ::JSObjectRef ind5;
    ctor_(worker);
    _context = ::g::Fuse::Scripting::JavaScriptCore::JSContextRef::Create();
    _onError = uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef>*/], (void*)Context__OnError_fn, this);
    ::JSObjectRef global = ::g::Fuse::Scripting::JavaScriptCore::JSContextRef::GlobalObject((ind1 = _context, ind1));
    _global = ::g::Fuse::Scripting::JavaScriptCore::Object::New1(this, global);
    uDelegate* onSetupError = uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef>*/], (void*)Context__OnSetupError_fn, this);
    _functionType = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::GetJSObjectRef(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1(global, _context, ::STRINGS[1/*"Function"*/], onSetupError), _context);
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Protect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind2 = _functionType, ind2)), _context);
    _arrayType = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::GetJSObjectRef(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1(global, _context, ::STRINGS[2/*"Array"*/], onSetupError), _context);
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Protect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind3 = _arrayType, ind3)), _context);
    _arrayBufferType = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::GetJSObjectRef(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1(global, _context, ::STRINGS[3/*"ArrayBuffer"*/], onSetupError), _context);
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Protect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind4 = _arrayBufferType, ind4)), _context);
    _byteArrayType = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::GetJSObjectRef(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1(global, _context, ::STRINGS[4/*"Uint8Array"*/], onSetupError), _context);
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Protect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind5 = _byteArrayType, ind5)), _context);
    _unoFinalizerClass = ::g::Fuse::Scripting::JavaScriptCore::JSClassRef::CreateUnoFinalizer();
    _unoCallbackClass = ::g::Fuse::Scripting::JavaScriptCore::JSClassRef::CreateUnoCallback();
}

// private void OnError(Fuse.Scripting.JavaScriptCore.JSValueRef exception) [instance] :177
void Context::OnError(::JSValueRef exception)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "OnError(Fuse.Scripting.JavaScriptCore.JSValueRef)");
    uString* ind21;
    uString* ind22;
    uString* ind23;
    uString* ind24;
    uString* ind25;
    uString* name = NULL;
    uString* message = NULL;
    uString* file = NULL;
    int lineNumber = -1;
    uString* stack = NULL;
    uObject* wrapped = Wrap1(exception);

    if (uIs(wrapped, ::TYPES[2/*Fuse.Scripting.JavaScriptCore.Object*/]))
    {
        ::g::Fuse::Scripting::JavaScriptCore::Object* o = uCast< ::g::Fuse::Scripting::JavaScriptCore::Object*>(wrapped, ::TYPES[2/*Fuse.Scripting.JavaScriptCore.Object*/]);
        name = (ind21 = uAs<uString*>(uPtr(o)->Item(::STRINGS[7/*"name"*/]), ::TYPES[3/*string*/]), (ind21 != NULL) ? ind21 : name);
        message = (ind22 = uAs<uString*>(o->Item(::STRINGS[8/*"message"*/]), ::TYPES[3/*string*/]), (ind22 != NULL) ? ind22 : message);
        file = (ind23 = (ind24 = uAs<uString*>(o->Item(::STRINGS[9/*"fileName"*/]), ::TYPES[3/*string*/]), (ind24 != NULL) ? ind24 : uAs<uString*>(o->Item(::STRINGS[10/*"sourceURL"*/]), ::TYPES[3/*string*/])), (ind23 != NULL) ? ind23 : file);
        uObject* l1 = o->Item(::STRINGS[11/*"line"*/]);
        uObject* l2 = o->Item(::STRINGS[12/*"lineNumber"*/]);
        lineNumber = uIs(l1, ::TYPES[4/*double*/]) ? (int)uUnbox<double>(::TYPES[4/*double*/], l1) : uIs(l2, ::TYPES[4/*double*/]) ? (int)uUnbox<double>(::TYPES[4/*double*/], l2) : uIs(l1, ::TYPES[5/*int*/]) ? uUnbox<int>(::TYPES[5/*int*/], l1) : uIs(l2, ::TYPES[5/*int*/]) ? uUnbox<int>(::TYPES[5/*int*/], l2) : lineNumber;
        stack = (ind25 = uAs<uString*>(o->Item(::STRINGS[13/*"stack"*/]), ::TYPES[3/*string*/]), (ind25 != NULL) ? ind25 : stack);
    }
    else
        message = (wrapped != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(wrapped)) : message;

    U_THROW(::g::Fuse::Scripting::ScriptException::New4(name, message, file, lineNumber, NULL, stack));
}

// private void OnSetupError(Fuse.Scripting.JavaScriptCore.JSValueRef exception) [instance] :170
void Context::OnSetupError(::JSValueRef exception)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "OnSetupError(Fuse.Scripting.JavaScriptCore.JSValueRef)");
    uString* str = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::ToString1(exception, _context, uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef>*/], (void*)Context__OnSetupErrorError_fn));
    str = ::g::Uno::String::op_Equality(str, NULL) ? ::STRINGS[14/*"Unknown"*/] : str;
    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[15/*"Fatal excep...*/], str)));
}

// internal Fuse.Scripting.JavaScriptCore.JSValueRef Unwrap(object obj) [instance] :245
::JSValueRef Context::Unwrap1(uObject* obj)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "Unwrap(object)");
    ::JSObjectRef ind14;
    ::JSObjectRef ind15;
    ::JSObjectRef ind16;
    ::JSObjectRef ind17;

    if (obj == NULL)
        return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeNull(_context);

    if (uIs(obj, ::TYPES[5/*int*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeNumber(_context, (double)uUnbox<int>(::TYPES[5/*int*/], obj));

    if (uIs(obj, ::TYPES[4/*double*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeNumber(_context, uUnbox<double>(::TYPES[4/*double*/], obj));

    if (uIs(obj, ::TYPES[6/*float*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeNumber(_context, (double)uUnbox<float>(::TYPES[6/*float*/], obj));

    if (uIs(obj, ::TYPES[3/*string*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeString1(_context, uCast<uString*>(obj, ::TYPES[3/*string*/]));

    if (uIs(obj, ::TYPES[7/*Uno.UX.Selector*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeString1(_context, ::g::Uno::UX::Selector__op_Implicit1(uUnbox< ::g::Uno::UX::Selector>(::TYPES[7/*Uno.UX.Selector*/], obj)));

    if (uIs(obj, ::TYPES[8/*bool*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeBoolean(_context, uUnbox<bool>(::TYPES[8/*bool*/], obj));

    if (uIs(obj, ::TYPES[9/*byte[]*/]))
        return UnwrapArrayBuffer(uCast<uArray*>(obj, ::TYPES[9/*byte[]*/]));

    if (uIs(obj, ::TYPES[2/*Fuse.Scripting.JavaScriptCore.Object*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind14 = uPtr(uCast< ::g::Fuse::Scripting::JavaScriptCore::Object*>(obj, ::TYPES[2/*Fuse.Scripting.JavaScriptCore.Object*/]))->_value, ind14));

    if (uIs(obj, ::TYPES[10/*Fuse.Scripting.JavaScriptCore.Array*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind15 = uPtr(uCast< ::g::Fuse::Scripting::JavaScriptCore::Array*>(obj, ::TYPES[10/*Fuse.Scripting.JavaScriptCore.Array*/]))->_value, ind15));

    if (uIs(obj, ::TYPES[11/*Fuse.Scripting.JavaScriptCore.Function*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind16 = uPtr(uCast< ::g::Fuse::Scripting::JavaScriptCore::Function*>(obj, ::TYPES[11/*Fuse.Scripting.JavaScriptCore.Function*/]))->_value, ind16));

    if (uIs(obj, ::TYPES[12/*Fuse.Scripting.External*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::Make(_context, _unoFinalizerClass, obj));

    if (uIs(obj, ::TYPES[13/*Fuse.Scripting.Callback*/]))
    {
        ::JSObjectRef result = ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::Make(_context, _unoCallbackClass, uDelegate::New(::TYPES[14/*Fuse.Scripting.JavaScriptCore.JSClassRef.RawCallback*/], (void*)Context__CallbackWrapper__Call_fn, Context__CallbackWrapper::New1(this, uCast<uDelegate*>(obj, ::TYPES[13/*Fuse.Scripting.Callback*/]))));
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::SetPrototype(result, _context, ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind17 = _functionType, ind17)));
        return ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef(result);
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[16/*"Unhandled t...*/], obj)));
}

// internal Fuse.Scripting.JavaScriptCore.JSValueRef[] Unwrap(object[] obj) [instance] :271
uArray* Context::Unwrap2(uArray* obj)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "Unwrap(object[])");
    uArray* result = uArray::New(::TYPES[15/*Fuse.Scripting.JavaScriptCore.JSValueRef[]*/], uPtr(obj)->Length());

    for (int i = 0; i < obj->Length(); ++i)
        uPtr(result)->Item< ::JSValueRef>(i) = Unwrap1(uPtr(obj)->Strong<uObject*>(i));

    return result;
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef UnwrapArrayBuffer(byte[] data) [instance] :283
::JSValueRef Context::UnwrapArrayBuffer(uArray* data)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "UnwrapArrayBuffer(byte[])");
    ::JSObjectRef ind18;
    ::JSObjectRef ind19;
    ::JSObjectRef arrayBuffer = ::g::Fuse::Scripting::JavaScriptCore::JSTypedArray::TryMakeArrayBufferWithBytes(_context, data, _onError);

    if (::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::op_Inequality(arrayBuffer, NULL))
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::SetProperty1(arrayBuffer, _context, ::STRINGS[17/*"__unoHandle"*/], Unwrap1(::g::Fuse::Scripting::External::New1(data)), _onError);
    else
    {
        int len = uPtr(data)->Length();
        arrayBuffer = ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::CallAsConstructor((ind18 = _arrayBufferType, ind18), _context, uArray::Init< ::JSValueRef>(::TYPES[15/*Fuse.Scripting.JavaScriptCore.JSValueRef[]*/], 1, ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeNumber(_context, (double)len)), _onError);
        ::JSObjectRef byteArray = ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::CallAsConstructor((ind19 = _byteArrayType, ind19), _context, uArray::Init< ::JSValueRef>(::TYPES[15/*Fuse.Scripting.JavaScriptCore.JSValueRef[]*/], 1, ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef(arrayBuffer)), _onError);

        for (int i = 0; i < len; ++i)
            ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::SetPropertyAtIndex1(byteArray, _context, i, ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeNumber(_context, (double)uPtr(data)->Item<uint8_t>(i)), _onError);
    }

    return ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef(arrayBuffer);
}

// internal object Wrap(Fuse.Scripting.JavaScriptCore.JSValueRef value) [instance] :210
uObject* Context::Wrap1(::JSValueRef value)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "Wrap(Fuse.Scripting.JavaScriptCore.JSValueRef)");

    switch (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::GetType1(value, _context))
    {
        case 0:
            return NULL;
        case 1:
            return NULL;
        case 2:
            return uBox(::TYPES[8/*bool*/], ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::ToBoolean(value, _context));
        case 3:
            return uBox(::TYPES[4/*double*/], ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::ToNumber(value, _context, _onError));
        case 4:
            return ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::ToString1(value, _context, _onError);
        case 5:
        {
            ::JSObjectRef obj = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::GetJSObjectRef(value, _context);
            uObject* priv = ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetPrivate(obj);

            if ((priv != NULL) && uIs(priv, ::TYPES[12/*Fuse.Scripting.External*/]))
                return priv;

            if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::IsInstanceOfConstructor(value, _context, _functionType, _onError))
                return ::g::Fuse::Scripting::JavaScriptCore::Function::New1(this, obj);

            if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::IsInstanceOfConstructor(value, _context, _arrayType, _onError))
                return ::g::Fuse::Scripting::JavaScriptCore::Array::New1(this, obj);

            if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::IsInstanceOfConstructor(value, _context, _arrayBufferType, _onError))
                return WrapArrayBuffer(obj);

            return ::g::Fuse::Scripting::JavaScriptCore::Object::New1(this, obj);
        }
        case 6:
            U_THROW(::g::Uno::Exception::New2(::STRINGS[18/*"Internal er...*/]));
        default:
            U_THROW(::g::Uno::Exception::New2(::STRINGS[19/*"Unhandled J...*/]));
    }
}

// internal object[] Wrap(Fuse.Scripting.JavaScriptCore.JSValueRef[] values) [instance] :235
uArray* Context::Wrap2(uArray* values)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "Wrap(Fuse.Scripting.JavaScriptCore.JSValueRef[])");
    uArray* result = uArray::New(::TYPES[16/*object[]*/], uPtr(values)->Length());

    for (int i = 0; i < values->Length(); ++i)
        uPtr(result)->Strong<uObject*>(i) = Wrap1(uPtr(values)->Item< ::JSValueRef>(i));

    return result;
}

// private byte[] WrapArrayBuffer(Fuse.Scripting.JavaScriptCore.JSObjectRef value) [instance] :314
uArray* Context::WrapArrayBuffer(::JSObjectRef value)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "WrapArrayBuffer(Fuse.Scripting.JavaScriptCore.JSObjectRef)");
    ::JSObjectRef ind20;

    if (::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::HasProperty1(value, _context, ::STRINGS[17/*"__unoHandle"*/]))
    {
        ::g::Fuse::Scripting::External* unoHandle = uAs< ::g::Fuse::Scripting::External*>(Wrap1(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1(value, _context, ::STRINGS[17/*"__unoHandle"*/], _onError)), ::TYPES[12/*Fuse.Scripting.External*/]);

        if (unoHandle != NULL)
        {
            uArray* result = uAs<uArray*>(uPtr(unoHandle)->Object, ::TYPES[9/*byte[]*/]);

            if (result != NULL)
                return result;
        }
    }

    uArray* res = ::g::Fuse::Scripting::JavaScriptCore::JSTypedArray::TryCopyArrayBufferBytes(_context, value, _onError);

    if (res != NULL)
        return res;

    ::JSObjectRef byteArray = ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::CallAsConstructor((ind20 = _byteArrayType, ind20), _context, uArray::Init< ::JSValueRef>(::TYPES[15/*Fuse.Scripting.JavaScriptCore.JSValueRef[]*/], 1, ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef(value)), _onError);
    int len = (int)::g::Fuse::Scripting::JavaScriptCore::JSValueRef::ToNumber(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1(value, _context, ::STRINGS[20/*"byteLength"*/], _onError), _context, _onError);
    res = uArray::New(::TYPES[9/*byte[]*/], len);

    for (int i = 0; i < len; ++i)
        uPtr(res)->Item<uint8_t>(i) = (uint8_t)::g::Fuse::Scripting::JavaScriptCore::JSValueRef::ToNumber(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetPropertyAtIndex1(byteArray, _context, i, _onError), _context, _onError);

    return res;
}

// public Context New(Fuse.Scripting.IThreadWorker worker) [static] :94
Context* Context::New1(uObject* worker)
{
    Context* obj26 = (Context*)uNew(Context_typeof());
    obj26->ctor_1(worker);
    return obj26;
}

// private static void OnSetupErrorError(Fuse.Scripting.JavaScriptCore.JSValueRef exception) [static] :165
void Context::OnSetupErrorError(::JSValueRef exception)
{
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.JavaScriptCore/0.42.4/$.uno
// --------------------------------------------------------------------------------------------------------

// internal sealed extern class Function :393
// {
// ~Function() :405
static void Function__Finalize_fn(Function* __this)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Function", "Finalize()");
    ::JSObjectRef ind2;
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Unprotect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind2 = __this->_value, ind2)), uPtr(__this->_context)->_context);
}

static void Function_build(uType* type)
{
    ::TYPES[17] = ::g::Fuse::Scripting::Object_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScriptCore::Context_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Function, _context), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Function, _value), 0);
}

::g::Fuse::Scripting::Function_type* Function_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Function_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Function_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Function);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Function_type);
    type = (::g::Fuse::Scripting::Function_type*)uClassType::New("Fuse.Scripting.JavaScriptCore.Function", options);
    type->fp_build_ = Function_build;
    type->fp_Finalize = (void(*)(uObject*))Function__Finalize_fn;
    type->fp_Call = (void(*)(::g::Fuse::Scripting::Function*, uArray*, uObject**))Function__Call_fn;
    type->fp_Construct = (void(*)(::g::Fuse::Scripting::Function*, uArray*, ::g::Fuse::Scripting::Object**))Function__Construct_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Function*, ::g::Fuse::Scripting::Function*, bool*))Function__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Function__GetHashCode_fn;
    return type;
}

// internal Function(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef function) :398
void Function__ctor_1_fn(Function* __this, ::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* function)
{
    __this->ctor_1(context, *function);
}

// public override sealed object Call(object[] args) :410
void Function__Call_fn(Function* __this, uArray* args, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Function", "Call(object[])");
    ::JSObjectRef ind3;
    return *__retval = uPtr(__this->_context)->Wrap1(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::CallAsFunction((ind3 = __this->_value, ind3), uPtr(__this->_context)->_context, NULL, uPtr(__this->_context)->Unwrap2(args), uPtr(__this->_context)->_onError)), void();
}

// public override sealed Fuse.Scripting.Object Construct(object[] args) :420
void Function__Construct_fn(Function* __this, uArray* args, ::g::Fuse::Scripting::Object** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Function", "Construct(object[])");
    ::JSObjectRef ind4;
    return *__retval = uCast< ::g::Fuse::Scripting::Object*>(uPtr(__this->_context)->Wrap1(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::CallAsConstructor((ind4 = __this->_value, ind4), uPtr(__this->_context)->_context, uPtr(__this->_context)->Unwrap2(args), uPtr(__this->_context)->_onError))), ::TYPES[17/*Fuse.Scripting.Object*/]), void();
}

// public override sealed bool Equals(Fuse.Scripting.Function f) :429
void Function__Equals2_fn(Function* __this, ::g::Fuse::Scripting::Function* f, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Function", "Equals(Fuse.Scripting.Function)");
    ::JSObjectRef ind5;
    return *__retval = uIs(f, __this->__type) && ::g::Uno::Object::Equals(uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), (ind5 = __this->_value, ind5), U_ALLOCA(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof()->ObjectSize)), uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), uPtr(uCast<Function*>(f, __this->__type))->_value)), void();
}

// public override sealed int GetHashCode() :434
void Function__GetHashCode_fn(Function* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Function", "GetHashCode()");
    ::JSObjectRef ind6;
    return *__retval = ::g::Uno::Object::GetHashCode(uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), (ind6 = __this->_value, ind6), U_ALLOCA(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof()->ObjectSize))), void();
}

// internal Function New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef function) :398
void Function__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* function, Function** __retval)
{
    *__retval = Function::New1(context, *function);
}

// internal Function(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef function) [instance] :398
void Function::ctor_1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef function)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Function", ".ctor(Fuse.Scripting.JavaScriptCore.Context,Fuse.Scripting.JavaScriptCore.JSObjectRef)");
    ::JSObjectRef ind1;
    ctor_();
    _context = context;
    _value = function;
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Protect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind1 = _value, ind1)), uPtr(_context)->_context);
}

// internal Function New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef function) [static] :398
Function* Function::New1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef function)
{
    Function* obj7 = (Function*)uNew(Function_typeof());
    obj7->ctor_1(context, function);
    return obj7;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.JavaScriptCore/0.42.4/$.uno
// --------------------------------------------------------------------------------------------------------

// internal extern struct JSClassRef :851
// {
// public void Dispose() [adapter] :925
static void JSClassRef__Dispose_ex(uObject* __this)
{
    JSClassRef__Dispose_fn((::JSClassRef*)((uint8_t*)__this + sizeof(uObject)));
}

static void JSClassRef_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(JSClassRef_type, interface0));
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::JSClassRef, _dummy), 0);
}

JSClassRef_type* JSClassRef_typeof()
{
    static uSStrong<JSClassRef_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ValueSize = sizeof(::JSClassRef);
    options.TypeSize = sizeof(JSClassRef_type);
    type = (JSClassRef_type*)uStructType::New("Fuse.Scripting.JavaScriptCore.JSClassRef", options);
    type->fp_build_ = JSClassRef_build;
    type->interface0.fp_Dispose = JSClassRef__Dispose_ex;
    return type;
}

// public static Fuse.Scripting.JavaScriptCore.JSClassRef CreateUnoCallback() :869
void JSClassRef__CreateUnoCallback_fn(::JSClassRef* __retval)
{
    *__retval = JSClassRef::CreateUnoCallback();
}

// public static Fuse.Scripting.JavaScriptCore.JSClassRef CreateUnoFinalizer() :855
void JSClassRef__CreateUnoFinalizer_fn(::JSClassRef* __retval)
{
    *__retval = JSClassRef::CreateUnoFinalizer();
}

// public void Dispose() :925
void JSClassRef__Dispose_fn(::JSClassRef* __this)
{
    JSClassRef::Dispose(*__this);
}

// public void Dispose() [instance] :925
void JSClassRef::Dispose(::JSClassRef __this)
{
    ::JSClassRelease(*&__this);
}

// public static Fuse.Scripting.JavaScriptCore.JSClassRef CreateUnoCallback() [static] :869
::JSClassRef JSClassRef::CreateUnoCallback()
{
    ::JSClassDefinition classDef = kJSClassDefinitionEmpty;
    			classDef.finalize = (::JSObjectFinalizeCallback) [] (::JSObjectRef obj) -> void
    			{
    				uObject* unoObj = (uObject*)JSObjectGetPrivate(obj);
    				::uRelease(unoObj);
    			};
    
    			classDef.callAsFunction = (::JSObjectCallAsFunctionCallback) [] (
    				::JSContextRef ctx,
    				::JSObjectRef function,
    				::JSObjectRef thisObject,
    				size_t argumentCount,
    				const ::JSValueRef arguments[],
    				::JSValueRef* exception) -> ::JSValueRef
    			{
    				uDelegate* unoDelegate = (uDelegate*)JSObjectGetPrivate(function);
    				uArray* unoArguments = uArray::New(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof()->Array(), (int)argumentCount);
    				for (int i = 0; i < argumentCount; ++i)
    				{
    					unoArguments->Item< ::JSValueRef>(i) = arguments[i];
    				}
    
    				return uUnbox< ::JSValueRef>(unoDelegate->Invoke(2, unoArguments, exception));
    			};
    
    			classDef.callAsConstructor = (::JSObjectCallAsConstructorCallback) [] (
    				::JSContextRef ctx,
    				::JSObjectRef constructor,
    				size_t argumentCount,
    				const ::JSValueRef arguments[],
    				::JSValueRef* exception) -> ::JSObjectRef
    			{
    				uDelegate* unoDelegate = (uDelegate*)JSObjectGetPrivate(constructor);
    				uArray* unoArguments = uArray::New(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof()->Array(), (int)argumentCount);
    				for (int i = 0; i < argumentCount; ++i)
    				{
    					unoArguments->Item< ::JSValueRef>(i) = arguments[i];
    				}
    
    				::JSValueRef result = uUnbox< ::JSValueRef>(unoDelegate->Invoke(2, unoArguments, exception));
    				if (!::JSValueIsObject(ctx, result))
    				{
    					const char* errorStr
    						= "Scripting.Callback called as a constructor returned a non-object.";
    					::uString* unoErrorStr = ::uString::Ansi(errorStr);
    					*exception = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::MakeString1(ctx, unoErrorStr);
    					return NULL;
    				}
    				return (::JSObjectRef)result;
    			};
    
    			return ::JSClassCreate(&classDef);
}

// public static Fuse.Scripting.JavaScriptCore.JSClassRef CreateUnoFinalizer() [static] :855
::JSClassRef JSClassRef::CreateUnoFinalizer()
{
    ::JSClassDefinition classDef = kJSClassDefinitionEmpty;
    			classDef.finalize = (::JSObjectFinalizeCallback)
    			[] (::JSObjectRef obj) -> void
    			{
    				uObject* unoObj = (uObject*)JSObjectGetPrivate(obj);
    				::uRelease(unoObj);
    			};
    			return ::JSClassCreate(&classDef);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.JavaScriptCore/0.42.4/$.uno
// --------------------------------------------------------------------------------------------------------

// internal extern struct JSContextRef :790
// {
// public void Dispose() [adapter] :799
static void JSContextRef__Dispose_ex(uObject* __this)
{
    JSContextRef__Dispose_fn((::JSContextRef*)((uint8_t*)__this + sizeof(uObject)));
}

static void JSContextRef_build(uType* type)
{
    ::TYPES[18] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::TYPES[18/*Uno.IDisposable*/], offsetof(JSContextRef_type, interface0));
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::JSContextRef, _dummy), 0);
}

JSContextRef_type* JSContextRef_typeof()
{
    static uSStrong<JSContextRef_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ValueSize = sizeof(::JSContextRef);
    options.TypeSize = sizeof(JSContextRef_type);
    type = (JSContextRef_type*)uStructType::New("Fuse.Scripting.JavaScriptCore.JSContextRef", options);
    type->fp_build_ = JSContextRef_build;
    type->interface0.fp_Dispose = JSContextRef__Dispose_ex;
    return type;
}

// public static Fuse.Scripting.JavaScriptCore.JSContextRef Create() :794
void JSContextRef__Create_fn(::JSContextRef* __retval)
{
    *__retval = JSContextRef::Create();
}

// public void Dispose() :799
void JSContextRef__Dispose_fn(::JSContextRef* __this)
{
    JSContextRef::Dispose(*__this);
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef EvaluateScript(Fuse.Scripting.JavaScriptCore.JSStringRef script, Fuse.Scripting.JavaScriptCore.JSObjectRef thisObject, Fuse.Scripting.JavaScriptCore.JSStringRef sourceURL, int startingLineNumber, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :812
void JSContextRef__EvaluateScript_fn(::JSContextRef* __this, ::JSStringRef* script, ::JSObjectRef* thisObject, ::JSStringRef* sourceURL, int* startingLineNumber, ::JSValueRef* exception, ::JSValueRef* __retval)
{
    *__retval = JSContextRef::EvaluateScript(*__this, *script, *thisObject, *sourceURL, *startingLineNumber, exception);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef EvaluateScript(string script, Fuse.Scripting.JavaScriptCore.JSObjectRef thisObject, string sourceURL, int startingLineNumber, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :822
void JSContextRef__EvaluateScript1_fn(::JSContextRef* __this, uString* script, ::JSObjectRef* thisObject, uString* sourceURL, int* startingLineNumber, uDelegate* onException, ::JSValueRef* __retval)
{
    *__retval = JSContextRef::EvaluateScript1(*__this, script, *thisObject, sourceURL, *startingLineNumber, onException);
}

// public Fuse.Scripting.JavaScriptCore.JSObjectRef get_GlobalObject() :806
void JSContextRef__get_GlobalObject_fn(::JSContextRef* __this, ::JSObjectRef* __retval)
{
    *__retval = JSContextRef::GlobalObject(*__this);
}

// public void Dispose() [instance] :799
void JSContextRef::Dispose(::JSContextRef __this)
{
    ::JSGlobalContextRelease((::JSGlobalContextRef)*&__this);
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef EvaluateScript(Fuse.Scripting.JavaScriptCore.JSStringRef script, Fuse.Scripting.JavaScriptCore.JSObjectRef thisObject, Fuse.Scripting.JavaScriptCore.JSStringRef sourceURL, int startingLineNumber, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) [instance] :812
::JSValueRef JSContextRef::EvaluateScript(::JSContextRef __this, ::JSStringRef script, ::JSObjectRef thisObject, ::JSStringRef sourceURL, int startingLineNumber, ::JSValueRef* exception)
{
    return ::JSEvaluateScript(*&__this, script, thisObject, sourceURL, startingLineNumber, exception);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef EvaluateScript(string script, Fuse.Scripting.JavaScriptCore.JSObjectRef thisObject, string sourceURL, int startingLineNumber, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :822
::JSValueRef JSContextRef::EvaluateScript1(::JSContextRef __this, uString* script, ::JSObjectRef thisObject, uString* sourceURL, int startingLineNumber, uDelegate* onException)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSContextRef", "EvaluateScript(string,Fuse.Scripting.JavaScriptCore.JSObjectRef,string,int,Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef>)");
    ::JSStringRef scriptRef = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::Create(script);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[19/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], scriptRef), ::TYPES[18/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::JSStringRef sourceRef = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::Create(sourceURL);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[19/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], sourceRef), ::TYPES[18/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            ::JSValueRef exception = NULL;
            ::JSValueRef result = JSContextRef::EvaluateScript(__this, scriptRef, thisObject, sourceRef, startingLineNumber, &exception);

            if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::op_Inequality(exception, NULL))
                uPtr(onException)->InvokeVoid(uCRef(exception));

            return result;
        }
    }

    return NULL;
}

// public Fuse.Scripting.JavaScriptCore.JSObjectRef get_GlobalObject() [instance] :806
::JSObjectRef JSContextRef::GlobalObject(::JSContextRef __this)
{
    return ::JSContextGetGlobalObject(*&__this);
}

// public static Fuse.Scripting.JavaScriptCore.JSContextRef Create() [static] :794
::JSContextRef JSContextRef::Create()
{
    return (::JSContextRef)::JSGlobalContextCreate(NULL);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.JavaScriptCore/0.42.4/$.uno
// --------------------------------------------------------------------------------------------------------

// internal extern struct JSObjectRef :610
// {
static void JSObjectRef_build(uType* type)
{
    ::TYPES[18] = ::g::Uno::IDisposable_typeof();
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef, _dummy), 0);
}

uStructType* JSObjectRef_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(::JSObjectRef);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.JavaScriptCore.JSObjectRef", options);
    type->fp_build_ = JSObjectRef_build;
    return type;
}

// public Fuse.Scripting.JavaScriptCore.JSObjectRef CallAsConstructor(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSValueRef[] arguments, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :740
void JSObjectRef__CallAsConstructor_fn(::JSObjectRef* __this, ::JSContextRef* ctx, uArray* arguments, uDelegate* onException, ::JSObjectRef* __retval)
{
    *__retval = JSObjectRef::CallAsConstructor(*__this, *ctx, arguments, onException);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef CallAsFunction(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSObjectRef thisObject, Fuse.Scripting.JavaScriptCore.JSValueRef[] arguments, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :721
void JSObjectRef__CallAsFunction_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSObjectRef* thisObject, uArray* arguments, uDelegate* onException, ::JSValueRef* __retval)
{
    *__retval = JSObjectRef::CallAsFunction(*__this, *ctx, *thisObject, arguments, onException);
}

// public Fuse.Scripting.JavaScriptCore.JSPropertyNameArray CopyPropertyNames(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :710
void JSObjectRef__CopyPropertyNames_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSPropertyNameArrayRef* __retval)
{
    *__retval = JSObjectRef::CopyPropertyNames(*__this, *ctx);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef GetJSValueRef() :690
void JSObjectRef__GetJSValueRef_fn(::JSObjectRef* __this, ::JSValueRef* __retval)
{
    *__retval = JSObjectRef::GetJSValueRef(*__this);
}

// public object GetPrivate() :695
void JSObjectRef__GetPrivate_fn(::JSObjectRef* __this, uObject** __retval)
{
    *__retval = JSObjectRef::GetPrivate(*__this);
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef GetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef propertyName, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :617
void JSObjectRef__GetProperty_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSStringRef* propertyName, ::JSValueRef* exception, ::JSValueRef* __retval)
{
    *__retval = JSObjectRef::GetProperty(*__this, *ctx, *propertyName, exception);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef GetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string propertyName, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :622
void JSObjectRef__GetProperty1_fn(::JSObjectRef* __this, ::JSContextRef* ctx, uString* propertyName, uDelegate* onException, ::JSValueRef* __retval)
{
    *__retval = JSObjectRef::GetProperty1(*__this, *ctx, propertyName, onException);
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef GetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :650
void JSObjectRef__GetPropertyAtIndex_fn(::JSObjectRef* __this, ::JSContextRef* ctx, int* index, ::JSValueRef* exception, ::JSValueRef* __retval)
{
    *__retval = JSObjectRef::GetPropertyAtIndex(*__this, *ctx, *index, exception);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef GetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :655
void JSObjectRef__GetPropertyAtIndex1_fn(::JSObjectRef* __this, ::JSContextRef* ctx, int* index, uDelegate* onException, ::JSValueRef* __retval)
{
    *__retval = JSObjectRef::GetPropertyAtIndex1(*__this, *ctx, *index, onException);
}

// public bool HasProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef propertyName) :677
void JSObjectRef__HasProperty_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSStringRef* propertyName, bool* __retval)
{
    *__retval = JSObjectRef::HasProperty(*__this, *ctx, *propertyName);
}

// public bool HasProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string propertyName) :682
void JSObjectRef__HasProperty1_fn(::JSObjectRef* __this, ::JSContextRef* ctx, uString* propertyName, bool* __retval)
{
    *__retval = JSObjectRef::HasProperty1(*__this, *ctx, propertyName);
}

// public static Fuse.Scripting.JavaScriptCore.JSObjectRef Make(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, [Fuse.Scripting.JavaScriptCore.JSClassRef classRef], [object data]) :715
void JSObjectRef__Make_fn(::JSContextRef* ctx, ::JSClassRef* classRef, uObject* data, ::JSObjectRef* __retval)
{
    *__retval = JSObjectRef::Make(*ctx, *classRef, data);
}

// public static operator ==(Fuse.Scripting.JavaScriptCore.JSObjectRef o1, Fuse.Scripting.JavaScriptCore.JSObjectRef o2) :614
void JSObjectRef__op_Equality_fn(::JSObjectRef* o1, ::JSObjectRef* o2, bool* __retval)
{
    *__retval = JSObjectRef::op_Equality(*o1, *o2);
}

// public static operator !=(Fuse.Scripting.JavaScriptCore.JSObjectRef o1, Fuse.Scripting.JavaScriptCore.JSObjectRef o2) :615
void JSObjectRef__op_Inequality_fn(::JSObjectRef* o1, ::JSObjectRef* o2, bool* __retval)
{
    *__retval = JSObjectRef::op_Inequality(*o1, *o2);
}

// public bool SetPrivate(object data) :700
void JSObjectRef__SetPrivate_fn(::JSObjectRef* __this, uObject* data, bool* __retval)
{
    *__retval = JSObjectRef::SetPrivate(*__this, data);
}

// private void SetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef propertyName, Fuse.Scripting.JavaScriptCore.JSValueRef value, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :634
void JSObjectRef__SetProperty_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSStringRef* propertyName, ::JSValueRef* value, ::JSValueRef* exception)
{
    JSObjectRef::SetProperty(*__this, *ctx, *propertyName, *value, exception);
}

// public void SetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string propertyName, Fuse.Scripting.JavaScriptCore.JSValueRef value, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :639
void JSObjectRef__SetProperty1_fn(::JSObjectRef* __this, ::JSContextRef* ctx, uString* propertyName, ::JSValueRef* value, uDelegate* onException)
{
    JSObjectRef::SetProperty1(*__this, *ctx, propertyName, *value, onException);
}

// private void SetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Fuse.Scripting.JavaScriptCore.JSValueRef value, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :664
void JSObjectRef__SetPropertyAtIndex_fn(::JSObjectRef* __this, ::JSContextRef* ctx, int* index, ::JSValueRef* value, ::JSValueRef* exception)
{
    JSObjectRef::SetPropertyAtIndex(*__this, *ctx, *index, *value, exception);
}

// public void SetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Fuse.Scripting.JavaScriptCore.JSValueRef value, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :669
void JSObjectRef__SetPropertyAtIndex1_fn(::JSObjectRef* __this, ::JSContextRef* ctx, int* index, ::JSValueRef* value, uDelegate* onException)
{
    JSObjectRef::SetPropertyAtIndex1(*__this, *ctx, *index, *value, onException);
}

// public void SetPrototype(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSValueRef value) :705
void JSObjectRef__SetPrototype_fn(::JSObjectRef* __this, ::JSContextRef* ctx, ::JSValueRef* value)
{
    JSObjectRef::SetPrototype(*__this, *ctx, *value);
}

// public Fuse.Scripting.JavaScriptCore.JSObjectRef CallAsConstructor(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSValueRef[] arguments, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :740
::JSObjectRef JSObjectRef::CallAsConstructor(::JSObjectRef __this, ::JSContextRef ctx, uArray* arguments, uDelegate* onException)
{
    ::JSValueRef exception = NULL;
    			::JSObjectRef result = ::JSObjectCallAsConstructor(
    				ctx,
    				*&__this,
    				(size_t)arguments->Length(),
    				(::JSValueRef*)arguments->Ptr(),
    				&exception);
    			if (exception != NULL)
    				onException->InvokeVoid(uCRef(exception));
    			return result;
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef CallAsFunction(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSObjectRef thisObject, Fuse.Scripting.JavaScriptCore.JSValueRef[] arguments, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :721
::JSValueRef JSObjectRef::CallAsFunction(::JSObjectRef __this, ::JSContextRef ctx, ::JSObjectRef thisObject, uArray* arguments, uDelegate* onException)
{
    ::JSValueRef exception = NULL;
    			::JSValueRef result = JSObjectCallAsFunction(
    				ctx,
    				*&__this,
    				thisObject,
    				(size_t)arguments->Length(),
    				(::JSValueRef*)arguments->Ptr(),
    				&exception);
    			if (exception != NULL)
    				onException->InvokeVoid(uCRef(exception));
    			return result;
}

// public Fuse.Scripting.JavaScriptCore.JSPropertyNameArray CopyPropertyNames(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [instance] :710
::JSPropertyNameArrayRef JSObjectRef::CopyPropertyNames(::JSObjectRef __this, ::JSContextRef ctx)
{
    return ::JSObjectCopyPropertyNames(ctx, *&__this);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef GetJSValueRef() [instance] :690
::JSValueRef JSObjectRef::GetJSValueRef(::JSObjectRef __this)
{
    return (::JSValueRef)*&__this;
}

// public object GetPrivate() [instance] :695
uObject* JSObjectRef::GetPrivate(::JSObjectRef __this)
{
    return (uObject*)::JSObjectGetPrivate(*&__this);
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef GetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef propertyName, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) [instance] :617
::JSValueRef JSObjectRef::GetProperty(::JSObjectRef __this, ::JSContextRef ctx, ::JSStringRef propertyName, ::JSValueRef* exception)
{
    return ::JSObjectGetProperty(ctx, *&__this, propertyName, exception);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef GetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string propertyName, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :622
::JSValueRef JSObjectRef::GetProperty1(::JSObjectRef __this, ::JSContextRef ctx, uString* propertyName, uDelegate* onException)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSObjectRef", "GetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef,string,Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef>)");
    ::JSStringRef strRef = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::Create(propertyName);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[19/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[18/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::JSValueRef exception = NULL;
        ::JSValueRef result = JSObjectRef::GetProperty(__this, ctx, strRef, &exception);

        if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::op_Inequality(exception, NULL))
            uPtr(onException)->InvokeVoid(uCRef(exception));

        return result;
    }
}

// private Fuse.Scripting.JavaScriptCore.JSValueRef GetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) [instance] :650
::JSValueRef JSObjectRef::GetPropertyAtIndex(::JSObjectRef __this, ::JSContextRef ctx, int index, ::JSValueRef* exception)
{
    return ::JSObjectGetPropertyAtIndex(ctx, *&__this, (unsigned)index, exception);
}

// public Fuse.Scripting.JavaScriptCore.JSValueRef GetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :655
::JSValueRef JSObjectRef::GetPropertyAtIndex1(::JSObjectRef __this, ::JSContextRef ctx, int index, uDelegate* onException)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSObjectRef", "GetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef,int,Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef>)");
    ::JSValueRef exception = NULL;
    ::JSValueRef result = JSObjectRef::GetPropertyAtIndex(__this, ctx, index, &exception);

    if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::op_Inequality(exception, NULL))
        uPtr(onException)->InvokeVoid(uCRef(exception));

    return result;
}

// public bool HasProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef propertyName) [instance] :677
bool JSObjectRef::HasProperty(::JSObjectRef __this, ::JSContextRef ctx, ::JSStringRef propertyName)
{
    return ::JSObjectHasProperty(ctx, *&__this, propertyName);
}

// public bool HasProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string propertyName) [instance] :682
bool JSObjectRef::HasProperty1(::JSObjectRef __this, ::JSContextRef ctx, uString* propertyName)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSObjectRef", "HasProperty(Fuse.Scripting.JavaScriptCore.JSContextRef,string)");
    ::JSStringRef strRef = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::Create(propertyName);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[19/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[18/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return JSObjectRef::HasProperty(__this, ctx, strRef);
    }
}

// public bool SetPrivate(object data) [instance] :700
bool JSObjectRef::SetPrivate(::JSObjectRef __this, uObject* data)
{
    return ::JSObjectSetPrivate(*&__this, data);
}

// private void SetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef propertyName, Fuse.Scripting.JavaScriptCore.JSValueRef value, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) [instance] :634
void JSObjectRef::SetProperty(::JSObjectRef __this, ::JSContextRef ctx, ::JSStringRef propertyName, ::JSValueRef value, ::JSValueRef* exception)
{
    ::JSObjectSetProperty(ctx, *&__this, propertyName, value, ::kJSPropertyAttributeNone, exception);
}

// public void SetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string propertyName, Fuse.Scripting.JavaScriptCore.JSValueRef value, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :639
void JSObjectRef::SetProperty1(::JSObjectRef __this, ::JSContextRef ctx, uString* propertyName, ::JSValueRef value, uDelegate* onException)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSObjectRef", "SetProperty(Fuse.Scripting.JavaScriptCore.JSContextRef,string,Fuse.Scripting.JavaScriptCore.JSValueRef,Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef>)");
    ::JSStringRef strRef = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::Create(propertyName);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[19/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[18/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::JSValueRef exception = NULL;
        JSObjectRef::SetProperty(__this, ctx, strRef, value, &exception);

        if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::op_Inequality(exception, NULL))
            uPtr(onException)->InvokeVoid(uCRef(exception));
    }
}

// private void SetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Fuse.Scripting.JavaScriptCore.JSValueRef value, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) [instance] :664
void JSObjectRef::SetPropertyAtIndex(::JSObjectRef __this, ::JSContextRef ctx, int index, ::JSValueRef value, ::JSValueRef* exception)
{
    ::JSObjectSetPropertyAtIndex(ctx, *&__this, (unsigned)index, value, exception);
}

// public void SetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, int index, Fuse.Scripting.JavaScriptCore.JSValueRef value, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :669
void JSObjectRef::SetPropertyAtIndex1(::JSObjectRef __this, ::JSContextRef ctx, int index, ::JSValueRef value, uDelegate* onException)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSObjectRef", "SetPropertyAtIndex(Fuse.Scripting.JavaScriptCore.JSContextRef,int,Fuse.Scripting.JavaScriptCore.JSValueRef,Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef>)");
    ::JSValueRef exception = NULL;
    JSObjectRef::SetPropertyAtIndex(__this, ctx, index, value, &exception);

    if (::g::Fuse::Scripting::JavaScriptCore::JSValueRef::op_Inequality(exception, NULL))
        uPtr(onException)->InvokeVoid(uCRef(exception));
}

// public void SetPrototype(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSValueRef value) [instance] :705
void JSObjectRef::SetPrototype(::JSObjectRef __this, ::JSContextRef ctx, ::JSValueRef value)
{
    ::JSObjectSetPrototype(ctx, *&__this, value);
}

// public static Fuse.Scripting.JavaScriptCore.JSObjectRef Make(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, [Fuse.Scripting.JavaScriptCore.JSClassRef classRef], [object data]) [static] :715
::JSObjectRef JSObjectRef::Make(::JSContextRef ctx, ::JSClassRef classRef, uObject* data)
{
    ::uRetain(data);
    			return ::JSObjectMake(ctx, classRef, data);
}

// public static operator ==(Fuse.Scripting.JavaScriptCore.JSObjectRef o1, Fuse.Scripting.JavaScriptCore.JSObjectRef o2) [static] :614
bool JSObjectRef::op_Equality(::JSObjectRef o1, ::JSObjectRef o2)
{
    return o1 == o2;
}

// public static operator !=(Fuse.Scripting.JavaScriptCore.JSObjectRef o1, Fuse.Scripting.JavaScriptCore.JSObjectRef o2) [static] :615
bool JSObjectRef::op_Inequality(::JSObjectRef o1, ::JSObjectRef o2)
{
    return o1 != o2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.JavaScriptCore/0.42.4/$.uno
// --------------------------------------------------------------------------------------------------------

// internal extern struct JSPropertyNameArray :762
// {
// public void Dispose() [adapter] :779
static void JSPropertyNameArray__Dispose_ex(uObject* __this)
{
    JSPropertyNameArray__Dispose_fn((::JSPropertyNameArrayRef*)((uint8_t*)__this + sizeof(uObject)));
}

static void JSPropertyNameArray_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(JSPropertyNameArray_type, interface0));
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::JSPropertyNameArray, _dummy), 0);
}

JSPropertyNameArray_type* JSPropertyNameArray_typeof()
{
    static uSStrong<JSPropertyNameArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ValueSize = sizeof(::JSPropertyNameArrayRef);
    options.TypeSize = sizeof(JSPropertyNameArray_type);
    type = (JSPropertyNameArray_type*)uStructType::New("Fuse.Scripting.JavaScriptCore.JSPropertyNameArray", options);
    type->fp_build_ = JSPropertyNameArray_build;
    type->interface0.fp_Dispose = JSPropertyNameArray__Dispose_ex;
    return type;
}

// public void Dispose() :779
void JSPropertyNameArray__Dispose_fn(::JSPropertyNameArrayRef* __this)
{
    JSPropertyNameArray::Dispose(*__this);
}

// public int GetCount() :766
void JSPropertyNameArray__GetCount_fn(::JSPropertyNameArrayRef* __this, int* __retval)
{
    *__retval = JSPropertyNameArray::GetCount(*__this);
}

// public Fuse.Scripting.JavaScriptCore.JSStringRef get_Item(int index) :773
void JSPropertyNameArray__get_Item_fn(::JSPropertyNameArrayRef* __this, int* index, ::JSStringRef* __retval)
{
    *__retval = JSPropertyNameArray::Item(*__this, *index);
}

// public void Dispose() [instance] :779
void JSPropertyNameArray::Dispose(::JSPropertyNameArrayRef __this)
{
    ::JSPropertyNameArrayRelease(*&__this);
}

// public int GetCount() [instance] :766
int JSPropertyNameArray::GetCount(::JSPropertyNameArrayRef __this)
{
    return (int)::JSPropertyNameArrayGetCount(*&__this);
}

// public Fuse.Scripting.JavaScriptCore.JSStringRef get_Item(int index) [instance] :773
::JSStringRef JSPropertyNameArray::Item(::JSPropertyNameArrayRef __this, int index)
{
    return ::JSPropertyNameArrayGetNameAtIndex(*&__this, (size_t)index);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.JavaScriptCore/0.42.4/$.uno
// --------------------------------------------------------------------------------------------------------

// internal extern struct JSStringRef :583
// {
// public void Dispose() [adapter] :592
static void JSStringRef__Dispose_ex(uObject* __this)
{
    JSStringRef__Dispose_fn((::JSStringRef*)((uint8_t*)__this + sizeof(uObject)));
}

static void JSStringRef_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(JSStringRef_type, interface0));
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::JSStringRef, _dummy), 0);
}

JSStringRef_type* JSStringRef_typeof()
{
    static uSStrong<JSStringRef_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ValueSize = sizeof(::JSStringRef);
    options.TypeSize = sizeof(JSStringRef_type);
    type = (JSStringRef_type*)uStructType::New("Fuse.Scripting.JavaScriptCore.JSStringRef", options);
    type->fp_build_ = JSStringRef_build;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))JSStringRef__ToString_fn;
    type->interface0.fp_Dispose = JSStringRef__Dispose_ex;
    return type;
}

// public static Fuse.Scripting.JavaScriptCore.JSStringRef Create(string str) :587
void JSStringRef__Create_fn(uString* str, ::JSStringRef* __retval)
{
    *__retval = JSStringRef::Create(str);
}

// public void Dispose() :592
void JSStringRef__Dispose_fn(::JSStringRef* __this)
{
    JSStringRef::Dispose(*__this);
}

// public override sealed string ToString() :597
void JSStringRef__ToString_fn(::JSStringRef* __this, uType* __type, uString** __retval)
{
    size_t len = ::JSStringGetLength(*__this);
    			uString* result = ::uString::New((int)len);
    			::memcpy((void*)result->Ptr(), ::JSStringGetCharactersPtr(*__this), sizeof(uChar) * len);
    			return *__retval = result, void();
}

// public void Dispose() [instance] :592
void JSStringRef::Dispose(::JSStringRef __this)
{
    ::JSStringRelease(*&__this);
}

// public static Fuse.Scripting.JavaScriptCore.JSStringRef Create(string str) [static] :587
::JSStringRef JSStringRef::Create(uString* str)
{
    return ::JSStringCreateWithCharacters((const JSChar*)str->Ptr(), str->Length());
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.JavaScriptCore/0.42.4/$.uno
// --------------------------------------------------------------------------------------------------------

// internal extern enum JSType :568
uEnumType* JSType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Scripting.JavaScriptCore.JSType", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "Undefined", 0LL,
        "Null", 1LL,
        "Boolean", 2LL,
        "Number", 3LL,
        "String", 4LL,
        "Object", 5LL,
        "FlipTheTable", 6LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.JavaScriptCore/0.42.4/$.uno
// --------------------------------------------------------------------------------------------------------

// internal static extern class JSTypedArray :933
// {
static void JSTypedArray_build(uType* type)
{
}

uClassType* JSTypedArray_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.JavaScriptCore.JSTypedArray", options);
    type->fp_build_ = JSTypedArray_build;
    return type;
}

// public static byte[] TryCopyArrayBufferBytes(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSObjectRef obj, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :962
void JSTypedArray__TryCopyArrayBufferBytes_fn(::JSContextRef* ctx, ::JSObjectRef* obj, uDelegate* onException, uArray** __retval)
{
    *__retval = JSTypedArray::TryCopyArrayBufferBytes(*ctx, *obj, onException);
}

// public static Fuse.Scripting.JavaScriptCore.JSObjectRef TryMakeArrayBufferWithBytes(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, byte[] bytes, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :935
void JSTypedArray__TryMakeArrayBufferWithBytes_fn(::JSContextRef* ctx, uArray* bytes, uDelegate* onException, ::JSObjectRef* __retval)
{
    *__retval = JSTypedArray::TryMakeArrayBufferWithBytes(*ctx, bytes, onException);
}

// public static byte[] TryCopyArrayBufferBytes(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSObjectRef obj, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [static] :962
uArray* JSTypedArray::TryCopyArrayBufferBytes(::JSContextRef ctx, ::JSObjectRef obj, uDelegate* onException)
{
    #ifdef JAVASCRIPTCORE_ARRAYBUFFER_SUPPORT
    			if (&::JSObjectGetArrayBufferBytesPtr != NULL &&
    				&::JSObjectGetArrayBufferByteLength != NULL)
    			{
    				::JSValueRef exception = NULL;
    				size_t length = ::JSObjectGetArrayBufferByteLength(ctx, obj, &exception);
    				if (exception != NULL)
    					onException->InvokeVoid(uCRef(exception));
    				void* bytesPtr = ::JSObjectGetArrayBufferBytesPtr(ctx, obj, &exception);
    				if (exception != NULL)
    					onException->InvokeVoid(uCRef(exception));
    
    				uArray* result = ::uArray::New(::g::Uno::Byte_typeof()->Array(), (int)length, bytesPtr);
    				return result;
    			}
    			#endif
    			return NULL;
}

// public static Fuse.Scripting.JavaScriptCore.JSObjectRef TryMakeArrayBufferWithBytes(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, byte[] bytes, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [static] :935
::JSObjectRef JSTypedArray::TryMakeArrayBufferWithBytes(::JSContextRef ctx, uArray* bytes, uDelegate* onException)
{
    // Check for sufficient base SDK version
    			#ifdef JAVASCRIPTCORE_ARRAYBUFFER_SUPPORT
    			// Check for runtime availability (running on earlier iOS versions)
    			if (&::JSObjectMakeArrayBufferWithBytesNoCopy != NULL)
    			{
    				::JSValueRef exception = NULL;
    				::uRetain(bytes);
    				::JSObjectRef result = ::JSObjectMakeArrayBufferWithBytesNoCopy(
    					ctx,
    					bytes->Ptr(),
    					bytes->Length(),
    					(::JSTypedArrayBytesDeallocator)[] (void* bytes, void* deallocatorContext) -> void
    					{
    						::uRelease((uArray*)deallocatorContext);
    					},
    					bytes, // deallocatorContext
    					&exception);
    				if (exception != NULL)
    					onException->InvokeVoid(uCRef(exception));
    				return result;
    			}
    			#endif
    			return NULL;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.JavaScriptCore/0.42.4/$.uno
// --------------------------------------------------------------------------------------------------------

// internal extern struct JSValueRef :453
// {
static void JSValueRef_build(uType* type)
{
    ::STRINGS[21] = uString::Const("(&this).IsObject(ctx)");
    ::STRINGS[22] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.JavaScriptCore/0.42.4/$.uno");
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[18] = ::g::Uno::IDisposable_typeof();
    ::TYPES[19] = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef_typeof();
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::JSValueRef, _dummy), 0);
}

uStructType* JSValueRef_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(::JSValueRef);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.JavaScriptCore.JSValueRef", options);
    type->fp_build_ = JSValueRef_build;
    return type;
}

// public Fuse.Scripting.JavaScriptCore.JSObjectRef GetJSObjectRef(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :472
void JSValueRef__GetJSObjectRef_fn(::JSValueRef* __this, ::JSContextRef* ctx, ::JSObjectRef* __retval)
{
    *__retval = JSValueRef::GetJSObjectRef(*__this, *ctx);
}

// public Fuse.Scripting.JavaScriptCore.JSType GetType(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :480
void JSValueRef__GetType1_fn(::JSValueRef* __this, ::JSContextRef* ctx, int* __retval)
{
    *__retval = JSValueRef::GetType1(*__this, *ctx);
}

// public bool IsInstanceOfConstructor(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSObjectRef constructor, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :516
void JSValueRef__IsInstanceOfConstructor_fn(::JSValueRef* __this, ::JSContextRef* ctx, ::JSObjectRef* constructor, uDelegate* onException, bool* __retval)
{
    *__retval = JSValueRef::IsInstanceOfConstructor(*__this, *ctx, *constructor, onException);
}

// public bool IsObject(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :511
void JSValueRef__IsObject_fn(::JSValueRef* __this, ::JSContextRef* ctx, bool* __retval)
{
    *__retval = JSValueRef::IsObject(*__this, *ctx);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeBoolean(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, bool boolean) :548
void JSValueRef__MakeBoolean_fn(::JSContextRef* ctx, bool* boolean, ::JSValueRef* __retval)
{
    *__retval = JSValueRef::MakeBoolean(*ctx, *boolean);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeNull(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :538
void JSValueRef__MakeNull_fn(::JSContextRef* ctx, ::JSValueRef* __retval)
{
    *__retval = JSValueRef::MakeNull(*ctx);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeNumber(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, double number) :543
void JSValueRef__MakeNumber_fn(::JSContextRef* ctx, double* number, ::JSValueRef* __retval)
{
    *__retval = JSValueRef::MakeNumber(*ctx, *number);
}

// private static Fuse.Scripting.JavaScriptCore.JSValueRef MakeString(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef str) :525
void JSValueRef__MakeString_fn(::JSContextRef* ctx, ::JSStringRef* str, ::JSValueRef* __retval)
{
    *__retval = JSValueRef::MakeString(*ctx, *str);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeString(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string str) :530
void JSValueRef__MakeString1_fn(::JSContextRef* ctx, uString* str, ::JSValueRef* __retval)
{
    *__retval = JSValueRef::MakeString1(*ctx, str);
}

// public static operator ==(Fuse.Scripting.JavaScriptCore.JSValueRef v1, Fuse.Scripting.JavaScriptCore.JSValueRef v2) :457
void JSValueRef__op_Equality_fn(::JSValueRef* v1, ::JSValueRef* v2, bool* __retval)
{
    *__retval = JSValueRef::op_Equality(*v1, *v2);
}

// public static operator !=(Fuse.Scripting.JavaScriptCore.JSValueRef v1, Fuse.Scripting.JavaScriptCore.JSValueRef v2) :458
void JSValueRef__op_Inequality_fn(::JSValueRef* v1, ::JSValueRef* v2, bool* __retval)
{
    *__retval = JSValueRef::op_Inequality(*v1, *v2);
}

// public void Protect(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :461
void JSValueRef__Protect_fn(::JSValueRef* __this, ::JSContextRef* ctx)
{
    JSValueRef::Protect(*__this, *ctx);
}

// public bool ToBoolean(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :553
void JSValueRef__ToBoolean_fn(::JSValueRef* __this, ::JSContextRef* ctx, bool* __retval)
{
    *__retval = JSValueRef::ToBoolean(*__this, *ctx);
}

// public double ToNumber(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :558
void JSValueRef__ToNumber_fn(::JSValueRef* __this, ::JSContextRef* ctx, uDelegate* onException, double* __retval)
{
    *__retval = JSValueRef::ToNumber(*__this, *ctx, onException);
}

// public string ToString(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) :500
void JSValueRef__ToString1_fn(::JSValueRef* __this, ::JSContextRef* ctx, uDelegate* onException, uString** __retval)
{
    *__retval = JSValueRef::ToString1(*__this, *ctx, onException);
}

// private Fuse.Scripting.JavaScriptCore.JSStringRef ToStringCopy(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :495
void JSValueRef__ToStringCopy_fn(::JSValueRef* __this, ::JSContextRef* ctx, ::JSValueRef* exception, ::JSStringRef* __retval)
{
    *__retval = JSValueRef::ToStringCopy(*__this, *ctx, exception);
}

// public void Unprotect(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) :467
void JSValueRef__Unprotect_fn(::JSValueRef* __this, ::JSContextRef* ctx)
{
    JSValueRef::Unprotect(*__this, *ctx);
}

// public Fuse.Scripting.JavaScriptCore.JSObjectRef GetJSObjectRef(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [instance] :472
::JSObjectRef JSValueRef::GetJSObjectRef(::JSValueRef __this, ::JSContextRef ctx)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValueRef", "GetJSObjectRef(Fuse.Scripting.JavaScriptCore.JSContextRef)");
    ::g::Uno::Diagnostics::Debug::Assert(JSValueRef::IsObject(__this, ctx), ::STRINGS[21/*"(&this).IsO...*/], ::STRINGS[22/*"/Users/most...*/], 474, uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, uBox(::g::Fuse::Scripting::JavaScriptCore::JSContextRef_typeof(), ctx)));
    return (::JSObjectRef)*&__this;
}

// public Fuse.Scripting.JavaScriptCore.JSType GetType(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [instance] :480
int JSValueRef::GetType1(::JSValueRef __this, ::JSContextRef ctx)
{
    ::JSType type = ::JSValueGetType(ctx, *&__this);
    			switch (type)
    			{
    				case ::kJSTypeUndefined: return 0;
    				case ::kJSTypeNull: return 1;
    				case ::kJSTypeBoolean: return 2;
    				case ::kJSTypeNumber: return 3;
    				case ::kJSTypeString: return 4;
    				case ::kJSTypeObject: return 5;
    				default: return 6;
    			}
}

// public bool IsInstanceOfConstructor(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSObjectRef constructor, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :516
bool JSValueRef::IsInstanceOfConstructor(::JSValueRef __this, ::JSContextRef ctx, ::JSObjectRef constructor, uDelegate* onException)
{
    ::JSValueRef exception = NULL;
    			bool result = ::JSValueIsInstanceOfConstructor(ctx, *&__this, constructor, &exception);
    			if (exception != NULL)
    				onException->InvokeVoid(uCRef(exception));
    			return result;
}

// public bool IsObject(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [instance] :511
bool JSValueRef::IsObject(::JSValueRef __this, ::JSContextRef ctx)
{
    return ::JSValueIsObject(ctx, *&__this);
}

// public void Protect(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [instance] :461
void JSValueRef::Protect(::JSValueRef __this, ::JSContextRef ctx)
{
    ::JSValueProtect(ctx, *&__this);
}

// public bool ToBoolean(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [instance] :553
bool JSValueRef::ToBoolean(::JSValueRef __this, ::JSContextRef ctx)
{
    return ::JSValueToBoolean(ctx, *&__this);
}

// public double ToNumber(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :558
double JSValueRef::ToNumber(::JSValueRef __this, ::JSContextRef ctx, uDelegate* onException)
{
    ::JSValueRef exception = NULL;
    			double result = ::JSValueToNumber(ctx, *&__this, &exception);
    			if (exception != NULL)
    				onException->InvokeVoid(uCRef(exception));
    			return result;
}

// public string ToString(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef> onException) [instance] :500
uString* JSValueRef::ToString1(::JSValueRef __this, ::JSContextRef ctx, uDelegate* onException)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValueRef", "ToString(Fuse.Scripting.JavaScriptCore.JSContextRef,Uno.Action<Fuse.Scripting.JavaScriptCore.JSValueRef>)");
    ::JSValueRef exception = NULL;
    ::JSStringRef strRef = JSValueRef::ToStringCopy(__this, ctx, &exception);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[19/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[18/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (JSValueRef::op_Inequality(exception, NULL))
            uPtr(onException)->InvokeVoid(uCRef(exception));

        return ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::ToString(strRef, ::TYPES[19/*Fuse.Scripting.JavaScriptCore.JSStringRef*/]);
    }
}

// private Fuse.Scripting.JavaScriptCore.JSStringRef ToStringCopy(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) [instance] :495
::JSStringRef JSValueRef::ToStringCopy(::JSValueRef __this, ::JSContextRef ctx, ::JSValueRef* exception)
{
    return ::JSValueToStringCopy(ctx, *&__this, exception);
}

// public void Unprotect(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [instance] :467
void JSValueRef::Unprotect(::JSValueRef __this, ::JSContextRef ctx)
{
    ::JSValueUnprotect(ctx, *&__this);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeBoolean(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, bool boolean) [static] :548
::JSValueRef JSValueRef::MakeBoolean(::JSContextRef ctx, bool boolean)
{
    return ::JSValueMakeBoolean(ctx, boolean);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeNull(Fuse.Scripting.JavaScriptCore.JSContextRef ctx) [static] :538
::JSValueRef JSValueRef::MakeNull(::JSContextRef ctx)
{
    return ::JSValueMakeNull(ctx);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeNumber(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, double number) [static] :543
::JSValueRef JSValueRef::MakeNumber(::JSContextRef ctx, double number)
{
    return ::JSValueMakeNumber(ctx, number);
}

// private static Fuse.Scripting.JavaScriptCore.JSValueRef MakeString(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, Fuse.Scripting.JavaScriptCore.JSStringRef str) [static] :525
::JSValueRef JSValueRef::MakeString(::JSContextRef ctx, ::JSStringRef str)
{
    return ::JSValueMakeString(ctx, str);
}

// public static Fuse.Scripting.JavaScriptCore.JSValueRef MakeString(Fuse.Scripting.JavaScriptCore.JSContextRef ctx, string str) [static] :530
::JSValueRef JSValueRef::MakeString1(::JSContextRef ctx, uString* str)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.JSValueRef", "MakeString(Fuse.Scripting.JavaScriptCore.JSContextRef,string)");
    ::JSStringRef strRef = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::Create(str);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::TYPES[19/*Fuse.Scripting.JavaScriptCore.JSStringRef*/], strRef), ::TYPES[18/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return JSValueRef::MakeString(ctx, strRef);
    }
}

// public static operator ==(Fuse.Scripting.JavaScriptCore.JSValueRef v1, Fuse.Scripting.JavaScriptCore.JSValueRef v2) [static] :457
bool JSValueRef::op_Equality(::JSValueRef v1, ::JSValueRef v2)
{
    return v1 == v2;
}

// public static operator !=(Fuse.Scripting.JavaScriptCore.JSValueRef v1, Fuse.Scripting.JavaScriptCore.JSValueRef v2) [static] :458
bool JSValueRef::op_Inequality(::JSValueRef v1, ::JSValueRef v2)
{
    return v1 != v2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.JavaScriptCore/0.42.4/$.uno
// --------------------------------------------------------------------------------------------------------

// internal sealed extern class Object :995
// {
// ~Object() :1007
static void Object__Finalize_fn(Object* __this)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "Finalize()");
    ::JSObjectRef ind2;
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Unprotect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind2 = __this->_value, ind2)), uPtr(__this->_context)->_context);
}

static void Object_build(uType* type)
{
    ::STRINGS[23] = uString::Const("Object.CallMethod.name");
    ::TYPES[11] = ::g::Fuse::Scripting::JavaScriptCore::Function_typeof();
    ::TYPES[20] = ::g::Uno::String_typeof()->Array();
    ::TYPES[19] = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef_typeof();
    ::TYPES[18] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObject_typeof(), offsetof(::g::Fuse::Scripting::Object_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScriptCore::Context_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Object, _context), 0,
        ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Object, _value), 0);
}

::g::Fuse::Scripting::Object_type* Object_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Object_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Object_type);
    type = (::g::Fuse::Scripting::Object_type*)uClassType::New("Fuse.Scripting.JavaScriptCore.Object", options);
    type->fp_build_ = Object_build;
    type->fp_Finalize = (void(*)(uObject*))Object__Finalize_fn;
    type->fp_CallMethod = (void(*)(::g::Fuse::Scripting::Object*, uString*, uArray*, uObject**))Object__CallMethod_fn;
    type->fp_ContainsKey = (void(*)(::g::Fuse::Scripting::Object*, uString*, bool*))Object__ContainsKey_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Object*, bool*))Object__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Object__GetHashCode_fn;
    type->fp_InstanceOf = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Function*, bool*))Object__InstanceOf_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject**))Object__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject*))Object__set_Item_fn;
    type->fp_get_Keys = (void(*)(::g::Fuse::Scripting::Object*, uArray**))Object__get_Keys_fn;
    type->interface0.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))Object__ContainsKey_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, uString*, uObject**))Object__get_Item_fn;
    return type;
}

// internal Object(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef value) :1000
void Object__ctor_1_fn(Object* __this, ::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* value)
{
    __this->ctor_1(context, *value);
}

// public override sealed object CallMethod(string name, object[] args) :1057
void Object__CallMethod_fn(Object* __this, uString* name, uArray* args, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "CallMethod(string,object[])");
    ::JSObjectRef ind7;

    if (::g::Uno::String::op_Equality(name, NULL))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[23/*"Object.Call...*/]));

    ::JSObjectRef f = ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::GetJSObjectRef(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1((ind7 = __this->_value, ind7), uPtr(__this->_context)->_context, name, uPtr(__this->_context)->_onError), uPtr(__this->_context)->_context);
    return *__retval = uPtr(__this->_context)->Wrap1(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::CallAsFunction(f, uPtr(__this->_context)->_context, __this->_value, uPtr(__this->_context)->Unwrap2(args), uPtr(__this->_context)->_onError)), void();
}

// public override sealed bool ContainsKey(string key) :1072
void Object__ContainsKey_fn(Object* __this, uString* key, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "ContainsKey(string)");
    ::JSObjectRef ind8;
    return *__retval = ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::HasProperty1((ind8 = __this->_value, ind8), uPtr(__this->_context)->_context, key), void();
}

// public override sealed bool Equals(Fuse.Scripting.Object o) :1077
void Object__Equals2_fn(Object* __this, ::g::Fuse::Scripting::Object* o, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "Equals(Fuse.Scripting.Object)");
    ::JSObjectRef ind9;
    return *__retval = uIs(o, __this->__type) && ::g::Uno::Object::Equals(uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), (ind9 = __this->_value, ind9), U_ALLOCA(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof()->ObjectSize)), uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), uPtr(uCast<Object*>(o, __this->__type))->_value)), void();
}

// public override sealed int GetHashCode() :1082
void Object__GetHashCode_fn(Object* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "GetHashCode()");
    ::JSObjectRef ind10;
    return *__retval = ::g::Uno::Object::GetHashCode(uBox(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof(), (ind10 = __this->_value, ind10), U_ALLOCA(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof()->ObjectSize))), void();
}

// public override sealed bool InstanceOf(Fuse.Scripting.Function type) :1048
void Object__InstanceOf_fn(Object* __this, ::g::Fuse::Scripting::Function* type, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "InstanceOf(Fuse.Scripting.Function)");
    ::JSObjectRef ind6;
    return *__retval = uIs(type, ::TYPES[11/*Fuse.Scripting.JavaScriptCore.Function*/]) && ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::IsInstanceOfConstructor(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind6 = __this->_value, ind6)), uPtr(__this->_context)->_context, uPtr(uCast< ::g::Fuse::Scripting::JavaScriptCore::Function*>(type, ::TYPES[11/*Fuse.Scripting.JavaScriptCore.Function*/]))->_value, uPtr(__this->_context)->_onError), void();
}

// public override sealed object get_Item(string key) :1014
void Object__get_Item_fn(Object* __this, uString* key, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "get_Item(string)");
    ::JSObjectRef ind3;
    return *__retval = uPtr(__this->_context)->Wrap1(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetProperty1((ind3 = __this->_value, ind3), uPtr(__this->_context)->_context, key, uPtr(__this->_context)->_onError)), void();
}

// public override sealed void set_Item(string key, object value) :1021
void Object__set_Item_fn(Object* __this, uString* key, uObject* value)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "set_Item(string,object)");
    ::JSObjectRef ind4;
    ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::SetProperty1((ind4 = __this->_value, ind4), uPtr(__this->_context)->_context, key, uPtr(__this->_context)->Unwrap1(value), uPtr(__this->_context)->_onError);
}

// public override sealed string[] get_Keys() :1033
void Object__get_Keys_fn(Object* __this, uArray** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "get_Keys()");
    ::JSObjectRef ind5;
    ::JSPropertyNameArrayRef arr = ::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::CopyPropertyNames((ind5 = __this->_value, ind5), uPtr(__this->_context)->_context);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uBox(::g::Fuse::Scripting::JavaScriptCore::JSPropertyNameArray_typeof(), arr), ::TYPES[18/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        int count = ::g::Fuse::Scripting::JavaScriptCore::JSPropertyNameArray::GetCount(arr);
        uArray* result = uArray::New(::TYPES[20/*string[]*/], count);

        for (int i = 0; i < count; ++i)
            uPtr(result)->Strong<uString*>(i) = ::g::Fuse::Scripting::JavaScriptCore::JSStringRef::ToString(::g::Fuse::Scripting::JavaScriptCore::JSPropertyNameArray::Item(arr, i), ::TYPES[19/*Fuse.Scripting.JavaScriptCore.JSStringRef*/]);

        return *__retval = result, void();
    }
}

// internal Object New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef value) :1000
void Object__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* value, Object** __retval)
{
    *__retval = Object::New1(context, *value);
}

// internal Object(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef value) [instance] :1000
void Object::ctor_1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef value)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", ".ctor(Fuse.Scripting.JavaScriptCore.Context,Fuse.Scripting.JavaScriptCore.JSObjectRef)");
    ::JSObjectRef ind1;
    ctor_();
    _context = context;
    _value = value;
    ::g::Fuse::Scripting::JavaScriptCore::JSValueRef::Protect(::g::Fuse::Scripting::JavaScriptCore::JSObjectRef::GetJSValueRef((ind1 = _value, ind1)), uPtr(_context)->_context);
}

// internal Object New(Fuse.Scripting.JavaScriptCore.Context context, Fuse.Scripting.JavaScriptCore.JSObjectRef value) [static] :1000
Object* Object::New1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef value)
{
    Object* obj11 = (Object*)uNew(Object_typeof());
    obj11->ctor_1(context, value);
    return obj11;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.JavaScriptCore/0.42.4/$.uno
// --------------------------------------------------------------------------------------------------------

// public delegate Fuse.Scripting.JavaScriptCore.JSValueRef JSClassRef.RawCallback(Fuse.Scripting.JavaScriptCore.JSValueRef[] args, Fuse.Scripting.JavaScriptCore.JSValueRef& exception) :867
uDelegateType* JSClassRef__RawCallback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.JavaScriptCore.JSClassRef.RawCallback", 2, 0);
    type->SetSignature(::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof(),
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof()->Array(),
        ::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof()->ByRef());
    return type;
}

}}}} // ::g::Fuse::Scripting::JavaScriptCore
