// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.V8.Simple.Array.h>
#include <Fuse.Scripting.V8.Simple.ArrayImpl.h>
#include <Fuse.Scripting.V8.Simple.Bool.h>
#include <Fuse.Scripting.V8.Simple.BoolImpl.h>
#include <Fuse.Scripting.V8.Simple.Callback.h>
#include <Fuse.Scripting.V8.Simple.CallbackImpl.h>
#include <Fuse.Scripting.V8.Simple.Context.h>
#include <Fuse.Scripting.V8.Simple.ContextImpl.h>
#include <Fuse.Scripting.V8.Simple.DelegateCallback.h>
#include <Fuse.Scripting.V8.Simple.DelegateExternalFreer.h>
#include <Fuse.Scripting.V8.Simple.DelegateMessageHandler.h>
#include <Fuse.Scripting.V8.Simple.DelegateScriptExceptionHandler.h>
#include <Fuse.Scripting.V8.Simple.DllDirectory.h>
#include <Fuse.Scripting.V8.Simple.Double.h>
#include <Fuse.Scripting.V8.Simple.DoubleImpl.h>
#include <Fuse.Scripting.V8.Simple.External.h>
#include <Fuse.Scripting.V8.Simple.ExternalFreer.h>
#include <Fuse.Scripting.V8.Simple.ExternalFreerImpl.h>
#include <Fuse.Scripting.V8.Simple.ExternalImpl.h>
#include <Fuse.Scripting.V8.Simple.Function.h>
#include <Fuse.Scripting.V8.Simple.FunctionImpl.h>
#include <Fuse.Scripting.V8.Simple.Int.h>
#include <Fuse.Scripting.V8.Simple.IntImpl.h>
#include <Fuse.Scripting.V8.Simple.MessageHandler.h>
#include <Fuse.Scripting.V8.Simple.MessageHandlerImpl.h>
#include <Fuse.Scripting.V8.Simple.Object.h>
#include <Fuse.Scripting.V8.Simple.ObjectImpl.h>
#include <Fuse.Scripting.V8.Simple.ScriptException.h>
#include <Fuse.Scripting.V8.Simple.ScriptExceptionHandler.h>
#include <Fuse.Scripting.V8.Simple.ScriptExceptionHandlerImpl.h>
#include <Fuse.Scripting.V8.Simple.ScriptExceptionImpl.h>
#include <Fuse.Scripting.V8.Simple.String.h>
#include <Fuse.Scripting.V8.Simple.StringExtensions.h>
#include <Fuse.Scripting.V8.Simple.StringImpl.h>
#include <Fuse.Scripting.V8.Simple.Type.h>
#include <Fuse.Scripting.V8.Simple.UniqueValueVector.h>
#include <Fuse.Scripting.V8.Simple.UniqueValueVectorImpl.h>
#include <Fuse.Scripting.V8.Simple.Value.h>
#include <Fuse.Scripting.V8.Simple.ValueExtensions.h>
#include <Fuse.Scripting.V8.Simple.ValueImpl.h>
#include <Fuse.Scripting.V8.Simple.ValueVector.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Func-2.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.String.h>
#include <V8Proxy.h>
#include <vector>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class Array :1487
// {
static void Array_build(uType* type)
{
    type->SetFields(1);
}

::g::Fuse::Scripting::V8::Simple::Value_type* Array_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::V8::Simple::Value_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::Value_type);
    type = (::g::Fuse::Scripting::V8::Simple::Value_type*)uClassType::New("Fuse.Scripting.V8.Simple.Array", options);
    type->fp_build_ = Array_build;
    type->fp_GetValueType = (void(*)(::g::Fuse::Scripting::V8::Simple::Value*, int*))Array__GetValueType_fn;
    return type;
}

// internal extern Array(Fuse.Scripting.V8.Simple.ValueImpl impl) :1496
void Array__ctor_2_fn(Array* __this, ::V8Simple::Value** impl)
{
    __this->ctor_2(*impl);
}

// protected extern Fuse.Scripting.V8.Simple.ArrayImpl get__arrayImpl() :1491
void Array__get__arrayImpl_fn(Array* __this, ::V8Simple::Array** __retval)
{
    *__retval = __this->_arrayImpl();
}

// public bool Equals(Fuse.Scripting.V8.Simple.Array array) :1528
void Array__Equals2_fn(Array* __this, Array* array, bool* __retval)
{
    *__retval = __this->Equals2(array);
}

// public Fuse.Scripting.V8.Simple.Value Get(int index) :1507
void Array__Get_fn(Array* __this, int* index, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    *__retval = __this->Get(*index);
}

// public override sealed Fuse.Scripting.V8.Simple.Type GetValueType() :1500
void Array__GetValueType_fn(Array* __this, int* __retval)
{
    return *__retval = (int)__this->_arrayImpl()->GetValueType(), void();
}

// public int Length() :1521
void Array__Length_fn(Array* __this, int* __retval)
{
    *__retval = __this->Length();
}

// internal extern Array New(Fuse.Scripting.V8.Simple.ValueImpl impl) :1496
void Array__New4_fn(::V8Simple::Value** impl, Array** __retval)
{
    *__retval = Array::New4(*impl);
}

// public void Set(int index, Fuse.Scripting.V8.Simple.Value value) :1514
void Array__Set_fn(Array* __this, int* index, ::g::Fuse::Scripting::V8::Simple::Value* value)
{
    __this->Set(*index, value);
}

// internal extern Array(Fuse.Scripting.V8.Simple.ValueImpl impl) [instance] :1496
void Array::ctor_2(::V8Simple::Value* impl)
{
    ctor_1(impl);
}

// protected extern Fuse.Scripting.V8.Simple.ArrayImpl get__arrayImpl() [instance] :1491
::V8Simple::Array* Array::_arrayImpl()
{
    return (::V8Simple::Array*)_valueImpl;
}

// public bool Equals(Fuse.Scripting.V8.Simple.Array array) [instance] :1528
bool Array::Equals2(Array* array)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Array", "Equals(Fuse.Scripting.V8.Simple.Array)");
    return ::g::Fuse::Scripting::V8::Simple::ValueImpl::op_Equality(_valueImpl, ::g::Fuse::Scripting::V8::Simple::ValueExtensions::GetValueImpl(array));
}

// public Fuse.Scripting.V8.Simple.Value Get(int index) [instance] :1507
::g::Fuse::Scripting::V8::Simple::Value* Array::Get(int index)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Array", "Get(int)");
    return ::g::Fuse::Scripting::V8::Simple::Value::New2(_arrayImpl()->Get(index));
}

// public int Length() [instance] :1521
int Array::Length()
{
    return _arrayImpl()->Length();
}

// public void Set(int index, Fuse.Scripting.V8.Simple.Value value) [instance] :1514
void Array::Set(int index, ::g::Fuse::Scripting::V8::Simple::Value* value)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Array", "Set(int,Fuse.Scripting.V8.Simple.Value)");
    _arrayImpl()->Set(index, ::g::Fuse::Scripting::V8::Simple::ValueExtensions::GetValueImpl(value));
}

// internal extern Array New(Fuse.Scripting.V8.Simple.ValueImpl impl) [static] :1496
Array* Array::New4(::V8Simple::Value* impl)
{
    Array* obj1 = (Array*)uNew(Array_typeof());
    obj1->ctor_2(impl);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal extern struct ArrayImpl :1538
// {
static void ArrayImpl_build(uType* type)
{
}

uStructType* ArrayImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::Array*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.ArrayImpl", options);
    type->fp_build_ = ArrayImpl_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class Bool :1821
// {
static void Bool_build(uType* type)
{
    type->SetFields(1);
}

::g::Fuse::Scripting::V8::Simple::Value_type* Bool_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::V8::Simple::Value_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Bool);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::Value_type);
    type = (::g::Fuse::Scripting::V8::Simple::Value_type*)uClassType::New("Fuse.Scripting.V8.Simple.Bool", options);
    type->fp_build_ = Bool_build;
    type->fp_GetValueType = (void(*)(::g::Fuse::Scripting::V8::Simple::Value*, int*))Bool__GetValueType_fn;
    return type;
}

// public extern Bool(bool value) :1844
void Bool__ctor_2_fn(Bool* __this, bool* value)
{
    __this->ctor_2(*value);
}

// internal extern Bool(Fuse.Scripting.V8.Simple.ValueImpl impl) :1830
void Bool__ctor_3_fn(Bool* __this, ::V8Simple::Value** impl)
{
    __this->ctor_3(*impl);
}

// protected extern Fuse.Scripting.V8.Simple.BoolImpl get__boolImpl() :1825
void Bool__get__boolImpl_fn(Bool* __this, ::V8Simple::Bool** __retval)
{
    *__retval = __this->_boolImpl();
}

// public bool GetValue() :1848
void Bool__GetValue_fn(Bool* __this, bool* __retval)
{
    *__retval = __this->GetValue();
}

// public override sealed Fuse.Scripting.V8.Simple.Type GetValueType() :1834
void Bool__GetValueType_fn(Bool* __this, int* __retval)
{
    return *__retval = (int)__this->_boolImpl()->GetValueType(), void();
}

// public extern Bool New(bool value) :1844
void Bool__New4_fn(bool* value, Bool** __retval)
{
    *__retval = Bool::New4(*value);
}

// internal extern Bool New(Fuse.Scripting.V8.Simple.ValueImpl impl) :1830
void Bool__New5_fn(::V8Simple::Value** impl, Bool** __retval)
{
    *__retval = Bool::New5(*impl);
}

// public extern Bool(bool value) [instance] :1844
void Bool::ctor_2(bool value)
{
    ctor_1(::V8Simple::Bool::New(value));
}

// internal extern Bool(Fuse.Scripting.V8.Simple.ValueImpl impl) [instance] :1830
void Bool::ctor_3(::V8Simple::Value* impl)
{
    ctor_1(impl);
}

// protected extern Fuse.Scripting.V8.Simple.BoolImpl get__boolImpl() [instance] :1825
::V8Simple::Bool* Bool::_boolImpl()
{
    return (::V8Simple::Bool*)_valueImpl;
}

// public bool GetValue() [instance] :1848
bool Bool::GetValue()
{
    return _boolImpl()->GetValue();
}

// public extern Bool New(bool value) [static] :1844
Bool* Bool::New4(bool value)
{
    Bool* obj2 = (Bool*)uNew(Bool_typeof());
    obj2->ctor_2(value);
    return obj2;
}

// internal extern Bool New(Fuse.Scripting.V8.Simple.ValueImpl impl) [static] :1830
Bool* Bool::New5(::V8Simple::Value* impl)
{
    Bool* obj1 = (Bool*)uNew(Bool_typeof());
    obj1->ctor_3(impl);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal extern struct BoolImpl :1858
// {
static void BoolImpl_build(uType* type)
{
}

uStructType* BoolImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::Bool*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.BoolImpl", options);
    type->fp_build_ = BoolImpl_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal extern class Callback :1583
// {
static void Callback_build(uType* type)
{
    type->SetFields(1);
}

Callback_type* Callback_typeof()
{
    static uSStrong<Callback_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::V8::Simple::Value_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Callback);
    options.TypeSize = sizeof(Callback_type);
    type = (Callback_type*)uClassType::New("Fuse.Scripting.V8.Simple.Callback", options);
    type->fp_build_ = Callback_build;
    type->fp_ctor_ = (void*)Callback__New4_fn;
    type->fp_Call = Callback__Call_fn;
    type->fp_GetValueType = (void(*)(::g::Fuse::Scripting::V8::Simple::Value*, int*))Callback__GetValueType_fn;
    type->fp_Release = Callback__Release_fn;
    type->fp_Retain = Callback__Retain_fn;
    return type;
}

// internal extern Callback() :1592
void Callback__ctor_2_fn(Callback* __this)
{
    __this->ctor_2();
}

// protected extern Fuse.Scripting.V8.Simple.CallbackImpl get__callbackImpl() :1587
void Callback__get__callbackImpl_fn(Callback* __this, ::V8Simple::CallbackProxy** __retval)
{
    *__retval = __this->_callbackImpl();
}

// public virtual Fuse.Scripting.V8.Simple.Value Call(Fuse.Scripting.V8.Simple.UniqueValueVector args) :1603
void Callback__Call_fn(Callback* __this, ::g::Fuse::Scripting::V8::Simple::UniqueValueVector* args, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    return *__retval = NULL, void();
}

// public override sealed Fuse.Scripting.V8.Simple.Type GetValueType() :1596
void Callback__GetValueType_fn(Callback* __this, int* __retval)
{
    return *__retval = (int)__this->_callbackImpl()->GetValueType(), void();
}

// internal extern Callback New() :1592
void Callback__New4_fn(Callback** __retval)
{
    *__retval = Callback::New4();
}

// public virtual void Release() :1608
void Callback__Release_fn(Callback* __this)
{
}

// public virtual void Retain() :1607
void Callback__Retain_fn(Callback* __this)
{
}

// internal extern Callback() [instance] :1592
void Callback::ctor_2()
{
    ctor_1(new ::V8Simple::CallbackProxy(this));
}

// protected extern Fuse.Scripting.V8.Simple.CallbackImpl get__callbackImpl() [instance] :1587
::V8Simple::CallbackProxy* Callback::_callbackImpl()
{
    return (::V8Simple::CallbackProxy*)_valueImpl;
}

// internal extern Callback New() [static] :1592
Callback* Callback::New4()
{
    Callback* obj1 = (Callback*)uNew(Callback_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal extern struct CallbackImpl :1612
// {
static void CallbackImpl_build(uType* type)
{
}

uStructType* CallbackImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::CallbackProxy*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.CallbackImpl", options);
    type->fp_build_ = CallbackImpl_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class Context :944
// {
// extern ~Context() :947
static void Context__Finalize_fn(Context* __this)
{
    __this->Dispose();
}

static void Context_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Scripting::V8::Simple::Object_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Context_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Simple::ContextImpl_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::Context, _contextImpl), 0);
}

Context_type* Context_typeof()
{
    static uSStrong<Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(Context_type);
    type = (Context_type*)uClassType::New("Fuse.Scripting.V8.Simple.Context", options);
    type->fp_build_ = Context_build;
    type->fp_Finalize = (void(*)(uObject*))Context__Finalize_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Context__Dispose_fn;
    return type;
}

// public Context(Fuse.Scripting.V8.Simple.ScriptExceptionHandler scriptExceptionHandler, Fuse.Scripting.V8.Simple.MessageHandler runtimeExceptionHandler, Fuse.Scripting.V8.Simple.ExternalFreer externalFreer) :964
void Context__ctor__fn(Context* __this, ::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler* scriptExceptionHandler, ::g::Fuse::Scripting::V8::Simple::MessageHandler* runtimeExceptionHandler, ::g::Fuse::Scripting::V8::Simple::ExternalFreer* externalFreer)
{
    __this->ctor_(scriptExceptionHandler, runtimeExceptionHandler, externalFreer);
}

// public void Dispose() :952
void Context__Dispose_fn(Context* __this)
{
    __this->Dispose();
}

// public Fuse.Scripting.V8.Simple.Value Evaluate(Fuse.Scripting.V8.Simple.String fileName, Fuse.Scripting.V8.Simple.String code) :981
void Context__Evaluate_fn(Context* __this, ::g::Fuse::Scripting::V8::Simple::String* fileName, ::g::Fuse::Scripting::V8::Simple::String* code, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    *__retval = __this->Evaluate(fileName, code);
}

// public static string GetVersion() :1044
void Context__GetVersion_fn(uString** __retval)
{
    *__retval = Context::GetVersion();
}

// public Fuse.Scripting.V8.Simple.Object GlobalObject() :989
void Context__GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::V8::Simple::Object** __retval)
{
    *__retval = __this->GlobalObject();
}

// public bool IdleNotificationDeadline(double deadline_in_seconds) :1008
void Context__IdleNotificationDeadline_fn(Context* __this, double* deadline_in_seconds, bool* __retval)
{
    *__retval = __this->IdleNotificationDeadline(*deadline_in_seconds);
}

// public Context New(Fuse.Scripting.V8.Simple.ScriptExceptionHandler scriptExceptionHandler, Fuse.Scripting.V8.Simple.MessageHandler runtimeExceptionHandler, Fuse.Scripting.V8.Simple.ExternalFreer externalFreer) :964
void Context__New1_fn(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler* scriptExceptionHandler, ::g::Fuse::Scripting::V8::Simple::MessageHandler* runtimeExceptionHandler, ::g::Fuse::Scripting::V8::Simple::ExternalFreer* externalFreer, Context** __retval)
{
    *__retval = Context::New1(scriptExceptionHandler, runtimeExceptionHandler, externalFreer);
}

// public static Fuse.Scripting.V8.Simple.Object NewExternalArrayBuffer(Uno.IntPtr data, int byteLength) :997
void Context__NewExternalArrayBuffer_fn(void** data, int* byteLength, ::g::Fuse::Scripting::V8::Simple::Object** __retval)
{
    *__retval = Context::NewExternalArrayBuffer(*data, *byteLength);
}

// public static void ProcessDebugMessages() :1030
void Context__ProcessDebugMessages_fn()
{
    Context::ProcessDebugMessages();
}

// public static void SendDebugCommand(Fuse.Scripting.V8.Simple.String command) :1023
void Context__SendDebugCommand_fn(::g::Fuse::Scripting::V8::Simple::String* command)
{
    Context::SendDebugCommand(command);
}

// public static void SetDebugMessageHandler(Fuse.Scripting.V8.Simple.MessageHandler debugMessageHandler) :1016
void Context__SetDebugMessageHandler_fn(::g::Fuse::Scripting::V8::Simple::MessageHandler* debugMessageHandler)
{
    Context::SetDebugMessageHandler(debugMessageHandler);
}

// public static Fuse.Scripting.V8.Simple.Value ThrowException(Fuse.Scripting.V8.Simple.Value exception) :1037
void Context__ThrowException_fn(::g::Fuse::Scripting::V8::Simple::Value* exception, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    *__retval = Context::ThrowException(exception);
}

// public Context(Fuse.Scripting.V8.Simple.ScriptExceptionHandler scriptExceptionHandler, Fuse.Scripting.V8.Simple.MessageHandler runtimeExceptionHandler, Fuse.Scripting.V8.Simple.ExternalFreer externalFreer) [instance] :964
void Context::ctor_(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler* scriptExceptionHandler, ::g::Fuse::Scripting::V8::Simple::MessageHandler* runtimeExceptionHandler, ::g::Fuse::Scripting::V8::Simple::ExternalFreer* externalFreer)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Context", ".ctor(Fuse.Scripting.V8.Simple.ScriptExceptionHandler,Fuse.Scripting.V8.Simple.MessageHandler,Fuse.Scripting.V8.Simple.ExternalFreer)");
    _contextImpl = ::V8Simple::Context::New((scriptExceptionHandler == NULL) ? NULL : uPtr(scriptExceptionHandler)->_impl, (runtimeExceptionHandler == NULL) ? NULL : uPtr(runtimeExceptionHandler)->_impl, (externalFreer == NULL) ? NULL : uPtr(externalFreer)->_impl);
}

// public void Dispose() [instance] :952
void Context::Dispose()
{
    if (::g::Fuse::Scripting::V8::Simple::ContextImpl::op_Inequality(_contextImpl, uDefault< ::V8Simple::Context*>()))
    {
        _contextImpl->Delete();
        _contextImpl = uDefault< ::V8Simple::Context*>();
    }
}

// public Fuse.Scripting.V8.Simple.Value Evaluate(Fuse.Scripting.V8.Simple.String fileName, Fuse.Scripting.V8.Simple.String code) [instance] :981
::g::Fuse::Scripting::V8::Simple::Value* Context::Evaluate(::g::Fuse::Scripting::V8::Simple::String* fileName, ::g::Fuse::Scripting::V8::Simple::String* code)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Context", "Evaluate(Fuse.Scripting.V8.Simple.String,Fuse.Scripting.V8.Simple.String)");
    return ::g::Fuse::Scripting::V8::Simple::Value::New2(_contextImpl->Evaluate(::g::Fuse::Scripting::V8::Simple::StringExtensions::GetStringImpl(fileName), ::g::Fuse::Scripting::V8::Simple::StringExtensions::GetStringImpl(code)));
}

// public Fuse.Scripting.V8.Simple.Object GlobalObject() [instance] :989
::g::Fuse::Scripting::V8::Simple::Object* Context::GlobalObject()
{
    return ::g::Fuse::Scripting::V8::Simple::Object::New4(_contextImpl->GlobalObject());
}

// public bool IdleNotificationDeadline(double deadline_in_seconds) [instance] :1008
bool Context::IdleNotificationDeadline(double deadline_in_seconds)
{
    return _contextImpl->IdleNotificationDeadline(deadline_in_seconds);
}

// public static string GetVersion() [static] :1044
uString* Context::GetVersion()
{
    return uString::Utf8(::V8Simple::Context::GetVersion());
}

// public Context New(Fuse.Scripting.V8.Simple.ScriptExceptionHandler scriptExceptionHandler, Fuse.Scripting.V8.Simple.MessageHandler runtimeExceptionHandler, Fuse.Scripting.V8.Simple.ExternalFreer externalFreer) [static] :964
Context* Context::New1(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler* scriptExceptionHandler, ::g::Fuse::Scripting::V8::Simple::MessageHandler* runtimeExceptionHandler, ::g::Fuse::Scripting::V8::Simple::ExternalFreer* externalFreer)
{
    Context* obj1 = (Context*)uNew(Context_typeof());
    obj1->ctor_(scriptExceptionHandler, runtimeExceptionHandler, externalFreer);
    return obj1;
}

// public static Fuse.Scripting.V8.Simple.Object NewExternalArrayBuffer(Uno.IntPtr data, int byteLength) [static] :997
::g::Fuse::Scripting::V8::Simple::Object* Context::NewExternalArrayBuffer(void* data, int byteLength)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Context", "NewExternalArrayBuffer(Uno.IntPtr,int)");
    ::V8Simple::Object* result = ::V8Simple::Context::NewExternalArrayBuffer(data, byteLength);
    return ::g::Fuse::Scripting::V8::Simple::ObjectImpl::op_Equality(result, NULL) ? uCast< ::g::Fuse::Scripting::V8::Simple::Object*>(NULL, ::TYPES[0/*Fuse.Scripting.V8.Simple.Object*/]) : (::g::Fuse::Scripting::V8::Simple::Object*)::g::Fuse::Scripting::V8::Simple::Object::New4(result);
}

// public static void ProcessDebugMessages() [static] :1030
void Context::ProcessDebugMessages()
{
    ::V8Simple::Context::ProcessDebugMessages();
}

// public static void SendDebugCommand(Fuse.Scripting.V8.Simple.String command) [static] :1023
void Context::SendDebugCommand(::g::Fuse::Scripting::V8::Simple::String* command)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Context", "SendDebugCommand(Fuse.Scripting.V8.Simple.String)");
    ::V8Simple::Context::SendDebugCommand(::g::Fuse::Scripting::V8::Simple::StringExtensions::GetStringImpl(command));
}

// public static void SetDebugMessageHandler(Fuse.Scripting.V8.Simple.MessageHandler debugMessageHandler) [static] :1016
void Context::SetDebugMessageHandler(::g::Fuse::Scripting::V8::Simple::MessageHandler* debugMessageHandler)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Context", "SetDebugMessageHandler(Fuse.Scripting.V8.Simple.MessageHandler)");
    ::V8Simple::Context::SetDebugMessageHandler((debugMessageHandler == NULL) ? NULL : uPtr(debugMessageHandler)->_impl);
}

// public static Fuse.Scripting.V8.Simple.Value ThrowException(Fuse.Scripting.V8.Simple.Value exception) [static] :1037
::g::Fuse::Scripting::V8::Simple::Value* Context::ThrowException(::g::Fuse::Scripting::V8::Simple::Value* exception)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Context", "ThrowException(Fuse.Scripting.V8.Simple.Value)");
    return ::g::Fuse::Scripting::V8::Simple::Value::New2(::V8Simple::Context::ThrowException(uPtr(exception)->_valueImpl));
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal extern struct ContextImpl :1054
// {
static void ContextImpl_build(uType* type)
{
}

uStructType* ContextImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::Context*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.ContextImpl", options);
    type->fp_build_ = ContextImpl_build;
    return type;
}

// public static operator ==(Fuse.Scripting.V8.Simple.ContextImpl x, Fuse.Scripting.V8.Simple.ContextImpl y) :1056
void ContextImpl__op_Equality_fn(::V8Simple::Context** x, ::V8Simple::Context** y, bool* __retval)
{
    *__retval = ContextImpl::op_Equality(*x, *y);
}

// public static operator !=(Fuse.Scripting.V8.Simple.ContextImpl x, Fuse.Scripting.V8.Simple.ContextImpl y) :1060
void ContextImpl__op_Inequality_fn(::V8Simple::Context** x, ::V8Simple::Context** y, bool* __retval)
{
    *__retval = ContextImpl::op_Inequality(*x, *y);
}

// public static operator ==(Fuse.Scripting.V8.Simple.ContextImpl x, Fuse.Scripting.V8.Simple.ContextImpl y) [static] :1056
bool ContextImpl::op_Equality(::V8Simple::Context* x, ::V8Simple::Context* y)
{
    return x == y;
}

// public static operator !=(Fuse.Scripting.V8.Simple.ContextImpl x, Fuse.Scripting.V8.Simple.ContextImpl y) [static] :1060
bool ContextImpl::op_Inequality(::V8Simple::Context* x, ::V8Simple::Context* y)
{
    return x != y;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class DelegateCallback :1651
// {
static void DelegateCallback_build(uType* type)
{
    type->SetFields(1,
        ::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::UniqueValueVector_typeof(), ::g::Fuse::Scripting::V8::Simple::Value_typeof(), NULL), offsetof(::g::Fuse::Scripting::V8::Simple::DelegateCallback, _callHandler), 0);
}

::g::Fuse::Scripting::V8::Simple::Callback_type* DelegateCallback_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::Callback_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::V8::Simple::Callback_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DelegateCallback);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::Callback_type);
    type = (::g::Fuse::Scripting::V8::Simple::Callback_type*)uClassType::New("Fuse.Scripting.V8.Simple.DelegateCallback", options);
    type->fp_build_ = DelegateCallback_build;
    type->fp_Call = (void(*)(::g::Fuse::Scripting::V8::Simple::Callback*, ::g::Fuse::Scripting::V8::Simple::UniqueValueVector*, ::g::Fuse::Scripting::V8::Simple::Value**))DelegateCallback__Call_fn;
    type->fp_Release = (void(*)(::g::Fuse::Scripting::V8::Simple::Callback*))DelegateCallback__Release_fn;
    type->fp_Retain = (void(*)(::g::Fuse::Scripting::V8::Simple::Callback*))DelegateCallback__Retain_fn;
    return type;
}

// public DelegateCallback(Uno.Func<Fuse.Scripting.V8.Simple.UniqueValueVector, Fuse.Scripting.V8.Simple.Value> callHandler) :1656
void DelegateCallback__ctor_3_fn(DelegateCallback* __this, uDelegate* callHandler)
{
    __this->ctor_3(callHandler);
}

// public override sealed Fuse.Scripting.V8.Simple.Value Call(Fuse.Scripting.V8.Simple.UniqueValueVector args) :1661
void DelegateCallback__Call_fn(DelegateCallback* __this, ::g::Fuse::Scripting::V8::Simple::UniqueValueVector* args, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.DelegateCallback", "Call(Fuse.Scripting.V8.Simple.UniqueValueVector)");
    return *__retval = (::g::Fuse::Scripting::V8::Simple::Value*)uPtr(__this->_callHandler)->Invoke(1, args), void();
}

// public DelegateCallback New(Uno.Func<Fuse.Scripting.V8.Simple.UniqueValueVector, Fuse.Scripting.V8.Simple.Value> callHandler) :1656
void DelegateCallback__New5_fn(uDelegate* callHandler, DelegateCallback** __retval)
{
    *__retval = DelegateCallback::New5(callHandler);
}

// public override sealed void Release() :1674
void DelegateCallback__Release_fn(DelegateCallback* __this)
{
}

// public override sealed void Retain() :1666
void DelegateCallback__Retain_fn(DelegateCallback* __this)
{
}

// public DelegateCallback(Uno.Func<Fuse.Scripting.V8.Simple.UniqueValueVector, Fuse.Scripting.V8.Simple.Value> callHandler) [instance] :1656
void DelegateCallback::ctor_3(uDelegate* callHandler)
{
    ctor_2();
    _callHandler = callHandler;
}

// public DelegateCallback New(Uno.Func<Fuse.Scripting.V8.Simple.UniqueValueVector, Fuse.Scripting.V8.Simple.Value> callHandler) [static] :1656
DelegateCallback* DelegateCallback::New5(uDelegate* callHandler)
{
    DelegateCallback* obj1 = (DelegateCallback*)uNew(DelegateCallback_typeof());
    obj1->ctor_3(callHandler);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class DelegateExternalFreer :1222
// {
static void DelegateExternalFreer_build(uType* type)
{
    type->SetFields(1,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::IntPtr_typeof(), NULL), offsetof(::g::Fuse::Scripting::V8::Simple::DelegateExternalFreer, _free), 0);
}

::g::Fuse::Scripting::V8::Simple::ExternalFreer_type* DelegateExternalFreer_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::ExternalFreer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::V8::Simple::ExternalFreer_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DelegateExternalFreer);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::ExternalFreer_type);
    type = (::g::Fuse::Scripting::V8::Simple::ExternalFreer_type*)uClassType::New("Fuse.Scripting.V8.Simple.DelegateExternalFreer", options);
    type->fp_build_ = DelegateExternalFreer_build;
    type->fp_Free = (void(*)(::g::Fuse::Scripting::V8::Simple::ExternalFreer*, void**))DelegateExternalFreer__Free_fn;
    return type;
}

// public DelegateExternalFreer(Uno.Action<Uno.IntPtr> free) :1225
void DelegateExternalFreer__ctor_1_fn(DelegateExternalFreer* __this, uDelegate* free)
{
    __this->ctor_1(free);
}

// public override sealed void Free(Uno.IntPtr ptr) :1231
void DelegateExternalFreer__Free_fn(DelegateExternalFreer* __this, void** ptr)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.DelegateExternalFreer", "Free(Uno.IntPtr)");
    void* ptr_ = *ptr;
    uPtr(__this->_free)->InvokeVoid(uCRef(ptr_));
}

// public DelegateExternalFreer New(Uno.Action<Uno.IntPtr> free) :1225
void DelegateExternalFreer__New2_fn(uDelegate* free, DelegateExternalFreer** __retval)
{
    *__retval = DelegateExternalFreer::New2(free);
}

// public DelegateExternalFreer(Uno.Action<Uno.IntPtr> free) [instance] :1225
void DelegateExternalFreer::ctor_1(uDelegate* free)
{
    ctor_();
    _free = free;
}

// public DelegateExternalFreer New(Uno.Action<Uno.IntPtr> free) [static] :1225
DelegateExternalFreer* DelegateExternalFreer::New2(uDelegate* free)
{
    DelegateExternalFreer* obj1 = (DelegateExternalFreer*)uNew(DelegateExternalFreer_typeof());
    obj1->ctor_1(free);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class DelegateMessageHandler :1146
// {
static void DelegateMessageHandler_build(uType* type)
{
    type->SetFields(1,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Fuse::Scripting::V8::Simple::DelegateMessageHandler, _handler), 0);
}

::g::Fuse::Scripting::V8::Simple::MessageHandler_type* DelegateMessageHandler_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::MessageHandler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::V8::Simple::MessageHandler_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DelegateMessageHandler);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::MessageHandler_type);
    type = (::g::Fuse::Scripting::V8::Simple::MessageHandler_type*)uClassType::New("Fuse.Scripting.V8.Simple.DelegateMessageHandler", options);
    type->fp_build_ = DelegateMessageHandler_build;
    type->fp_Handle = (void(*)(::g::Fuse::Scripting::V8::Simple::MessageHandler*, ::g::Fuse::Scripting::V8::Simple::String*))DelegateMessageHandler__Handle_fn;
    return type;
}

// public DelegateMessageHandler(Uno.Action<string> handler) :1149
void DelegateMessageHandler__ctor_1_fn(DelegateMessageHandler* __this, uDelegate* handler)
{
    __this->ctor_1(handler);
}

// public override sealed void Handle(Fuse.Scripting.V8.Simple.String message) :1155
void DelegateMessageHandler__Handle_fn(DelegateMessageHandler* __this, ::g::Fuse::Scripting::V8::Simple::String* message)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.DelegateMessageHandler", "Handle(Fuse.Scripting.V8.Simple.String)");
    uPtr(__this->_handler)->InvokeVoid(uPtr(message)->GetValue());
}

// public DelegateMessageHandler New(Uno.Action<string> handler) :1149
void DelegateMessageHandler__New2_fn(uDelegate* handler, DelegateMessageHandler** __retval)
{
    *__retval = DelegateMessageHandler::New2(handler);
}

// public DelegateMessageHandler(Uno.Action<string> handler) [instance] :1149
void DelegateMessageHandler::ctor_1(uDelegate* handler)
{
    ctor_();
    _handler = handler;
}

// public DelegateMessageHandler New(Uno.Action<string> handler) [static] :1149
DelegateMessageHandler* DelegateMessageHandler::New2(uDelegate* handler)
{
    DelegateMessageHandler* obj1 = (DelegateMessageHandler*)uNew(DelegateMessageHandler_typeof());
    obj1->ctor_1(handler);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class DelegateScriptExceptionHandler :1184
// {
static void DelegateScriptExceptionHandler_build(uType* type)
{
    type->SetFields(1,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::ScriptException_typeof(), NULL), offsetof(::g::Fuse::Scripting::V8::Simple::DelegateScriptExceptionHandler, _handler), 0);
}

::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler_type* DelegateScriptExceptionHandler_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DelegateScriptExceptionHandler);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler_type);
    type = (::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler_type*)uClassType::New("Fuse.Scripting.V8.Simple.DelegateScriptExceptionHandler", options);
    type->fp_build_ = DelegateScriptExceptionHandler_build;
    type->fp_Handle = (void(*)(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler*, ::g::Fuse::Scripting::V8::Simple::ScriptException*))DelegateScriptExceptionHandler__Handle_fn;
    return type;
}

// public DelegateScriptExceptionHandler(Uno.Action<Fuse.Scripting.V8.Simple.ScriptException> handler) :1187
void DelegateScriptExceptionHandler__ctor_1_fn(DelegateScriptExceptionHandler* __this, uDelegate* handler)
{
    __this->ctor_1(handler);
}

// public override sealed void Handle(Fuse.Scripting.V8.Simple.ScriptException e) :1193
void DelegateScriptExceptionHandler__Handle_fn(DelegateScriptExceptionHandler* __this, ::g::Fuse::Scripting::V8::Simple::ScriptException* e)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.DelegateScriptExceptionHandler", "Handle(Fuse.Scripting.V8.Simple.ScriptException)");
    uPtr(__this->_handler)->InvokeVoid(e);
}

// public DelegateScriptExceptionHandler New(Uno.Action<Fuse.Scripting.V8.Simple.ScriptException> handler) :1187
void DelegateScriptExceptionHandler__New2_fn(uDelegate* handler, DelegateScriptExceptionHandler** __retval)
{
    *__retval = DelegateScriptExceptionHandler::New2(handler);
}

// public DelegateScriptExceptionHandler(Uno.Action<Fuse.Scripting.V8.Simple.ScriptException> handler) [instance] :1187
void DelegateScriptExceptionHandler::ctor_1(uDelegate* handler)
{
    ctor_();
    _handler = handler;
}

// public DelegateScriptExceptionHandler New(Uno.Action<Fuse.Scripting.V8.Simple.ScriptException> handler) [static] :1187
DelegateScriptExceptionHandler* DelegateScriptExceptionHandler::New2(uDelegate* handler)
{
    DelegateScriptExceptionHandler* obj1 = (DelegateScriptExceptionHandler*)uNew(DelegateScriptExceptionHandler_typeof());
    obj1->ctor_1(handler);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal static extern class DllDirectory :935
// {
static void DllDirectory_build(uType* type)
{
}

uClassType* DllDirectory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Simple.DllDirectory", options);
    type->fp_build_ = DllDirectory_build;
    return type;
}

// public static void SetTargetSpecific() :937
void DllDirectory__SetTargetSpecific_fn()
{
    DllDirectory::SetTargetSpecific();
}

// public static void SetTargetSpecific() [static] :937
void DllDirectory::SetTargetSpecific()
{
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class Double :1726
// {
static void Double_build(uType* type)
{
    type->SetFields(1);
}

::g::Fuse::Scripting::V8::Simple::Value_type* Double_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::V8::Simple::Value_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Double);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::Value_type);
    type = (::g::Fuse::Scripting::V8::Simple::Value_type*)uClassType::New("Fuse.Scripting.V8.Simple.Double", options);
    type->fp_build_ = Double_build;
    type->fp_GetValueType = (void(*)(::g::Fuse::Scripting::V8::Simple::Value*, int*))Double__GetValueType_fn;
    return type;
}

// public extern Double(double value) :1749
void Double__ctor_2_fn(Double* __this, double* value)
{
    __this->ctor_2(*value);
}

// internal extern Double(Fuse.Scripting.V8.Simple.ValueImpl impl) :1735
void Double__ctor_3_fn(Double* __this, ::V8Simple::Value** impl)
{
    __this->ctor_3(*impl);
}

// protected extern Fuse.Scripting.V8.Simple.DoubleImpl get__doubleImpl() :1730
void Double__get__doubleImpl_fn(Double* __this, ::V8Simple::Double** __retval)
{
    *__retval = __this->_doubleImpl();
}

// public double GetValue() :1753
void Double__GetValue_fn(Double* __this, double* __retval)
{
    *__retval = __this->GetValue();
}

// public override sealed Fuse.Scripting.V8.Simple.Type GetValueType() :1739
void Double__GetValueType_fn(Double* __this, int* __retval)
{
    return *__retval = (int)__this->_doubleImpl()->GetValueType(), void();
}

// public extern Double New(double value) :1749
void Double__New4_fn(double* value, Double** __retval)
{
    *__retval = Double::New4(*value);
}

// internal extern Double New(Fuse.Scripting.V8.Simple.ValueImpl impl) :1735
void Double__New5_fn(::V8Simple::Value** impl, Double** __retval)
{
    *__retval = Double::New5(*impl);
}

// public extern Double(double value) [instance] :1749
void Double::ctor_2(double value)
{
    ctor_1(::V8Simple::Double::New(value));
}

// internal extern Double(Fuse.Scripting.V8.Simple.ValueImpl impl) [instance] :1735
void Double::ctor_3(::V8Simple::Value* impl)
{
    ctor_1(impl);
}

// protected extern Fuse.Scripting.V8.Simple.DoubleImpl get__doubleImpl() [instance] :1730
::V8Simple::Double* Double::_doubleImpl()
{
    return (::V8Simple::Double*)_valueImpl;
}

// public double GetValue() [instance] :1753
double Double::GetValue()
{
    return _doubleImpl()->GetValue();
}

// public extern Double New(double value) [static] :1749
Double* Double::New4(double value)
{
    Double* obj2 = (Double*)uNew(Double_typeof());
    obj2->ctor_2(value);
    return obj2;
}

// internal extern Double New(Fuse.Scripting.V8.Simple.ValueImpl impl) [static] :1735
Double* Double::New5(::V8Simple::Value* impl)
{
    Double* obj1 = (Double*)uNew(Double_typeof());
    obj1->ctor_3(impl);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal extern struct DoubleImpl :1763
// {
static void DoubleImpl_build(uType* type)
{
}

uStructType* DoubleImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::Double*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.DoubleImpl", options);
    type->fp_build_ = DoubleImpl_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class External :1542
// {
static void External_build(uType* type)
{
    type->SetFields(1);
}

::g::Fuse::Scripting::V8::Simple::Value_type* External_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::V8::Simple::Value_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(External);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::Value_type);
    type = (::g::Fuse::Scripting::V8::Simple::Value_type*)uClassType::New("Fuse.Scripting.V8.Simple.External", options);
    type->fp_build_ = External_build;
    type->fp_GetValueType = (void(*)(::g::Fuse::Scripting::V8::Simple::Value*, int*))External__GetValueType_fn;
    return type;
}

// internal extern External(Fuse.Scripting.V8.Simple.ValueImpl impl) :1551
void External__ctor_2_fn(External* __this, ::V8Simple::Value** impl)
{
    __this->ctor_2(*impl);
}

// public extern External(Uno.IntPtr value) :1565
void External__ctor_3_fn(External* __this, void** value)
{
    __this->ctor_3(*value);
}

// protected extern Fuse.Scripting.V8.Simple.ExternalImpl get__externalImpl() :1546
void External__get__externalImpl_fn(External* __this, ::V8Simple::External** __retval)
{
    *__retval = __this->_externalImpl();
}

// public Uno.IntPtr GetValue() :1569
void External__GetValue_fn(External* __this, void** __retval)
{
    *__retval = __this->GetValue();
}

// public override sealed Fuse.Scripting.V8.Simple.Type GetValueType() :1555
void External__GetValueType_fn(External* __this, int* __retval)
{
    return *__retval = (int)__this->_externalImpl()->GetValueType(), void();
}

// internal extern External New(Fuse.Scripting.V8.Simple.ValueImpl impl) :1551
void External__New4_fn(::V8Simple::Value** impl, External** __retval)
{
    *__retval = External::New4(*impl);
}

// public extern External New(Uno.IntPtr value) :1565
void External__New5_fn(void** value, External** __retval)
{
    *__retval = External::New5(*value);
}

// internal extern External(Fuse.Scripting.V8.Simple.ValueImpl impl) [instance] :1551
void External::ctor_2(::V8Simple::Value* impl)
{
    ctor_1(impl);
}

// public extern External(Uno.IntPtr value) [instance] :1565
void External::ctor_3(void* value)
{
    ctor_1(::V8Simple::External::New(value));
}

// protected extern Fuse.Scripting.V8.Simple.ExternalImpl get__externalImpl() [instance] :1546
::V8Simple::External* External::_externalImpl()
{
    return (::V8Simple::External*)_valueImpl;
}

// public Uno.IntPtr GetValue() [instance] :1569
void* External::GetValue()
{
    return _externalImpl()->GetValue();
}

// internal extern External New(Fuse.Scripting.V8.Simple.ValueImpl impl) [static] :1551
External* External::New4(::V8Simple::Value* impl)
{
    External* obj1 = (External*)uNew(External_typeof());
    obj1->ctor_2(impl);
    return obj1;
}

// public extern External New(Uno.IntPtr value) [static] :1565
External* External::New5(void* value)
{
    External* obj2 = (External*)uNew(External_typeof());
    obj2->ctor_3(value);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal extern class ExternalFreer :1201
// {
// extern ~ExternalFreer() :1211
static void ExternalFreer__Finalize_fn(ExternalFreer* __this)
{
    delete __this->_impl;
}

static void ExternalFreer_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Simple::ExternalFreerImpl_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::ExternalFreer, _impl), 0);
}

ExternalFreer_type* ExternalFreer_typeof()
{
    static uSStrong<ExternalFreer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ExternalFreer);
    options.TypeSize = sizeof(ExternalFreer_type);
    type = (ExternalFreer_type*)uClassType::New("Fuse.Scripting.V8.Simple.ExternalFreer", options);
    type->fp_build_ = ExternalFreer_build;
    type->fp_ctor_ = (void*)ExternalFreer__New1_fn;
    type->fp_Finalize = (void(*)(uObject*))ExternalFreer__Finalize_fn;
    type->fp_Free = ExternalFreer__Free_fn;
    return type;
}

// public ExternalFreer() :1204
void ExternalFreer__ctor__fn(ExternalFreer* __this)
{
    __this->ctor_();
}

// public virtual void Free(Uno.IntPtr ptr) :1216
void ExternalFreer__Free_fn(ExternalFreer* __this, void** ptr)
{
}

// public ExternalFreer New() :1204
void ExternalFreer__New1_fn(ExternalFreer** __retval)
{
    *__retval = ExternalFreer::New1();
}

// public ExternalFreer() [instance] :1204
void ExternalFreer::ctor_()
{
    _impl = new ::V8Simple::ExternalFreerProxy(this);
}

// public ExternalFreer New() [static] :1204
ExternalFreer* ExternalFreer::New1()
{
    ExternalFreer* obj1 = (ExternalFreer*)uNew(ExternalFreer_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal extern struct ExternalFreerImpl :1220
// {
static void ExternalFreerImpl_build(uType* type)
{
}

uStructType* ExternalFreerImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::ExternalFreerProxy*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.ExternalFreerImpl", options);
    type->fp_build_ = ExternalFreerImpl_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal extern struct ExternalImpl :1579
// {
static void ExternalImpl_build(uType* type)
{
}

uStructType* ExternalImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::External*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.ExternalImpl", options);
    type->fp_build_ = ExternalImpl_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class Function :1424
// {
static void Function_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Scripting::V8::Simple::ValueImpl_typeof()->Array();
    type->SetFields(1);
}

::g::Fuse::Scripting::V8::Simple::Value_type* Function_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::V8::Simple::Value_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Function);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::Value_type);
    type = (::g::Fuse::Scripting::V8::Simple::Value_type*)uClassType::New("Fuse.Scripting.V8.Simple.Function", options);
    type->fp_build_ = Function_build;
    type->fp_GetValueType = (void(*)(::g::Fuse::Scripting::V8::Simple::Value*, int*))Function__GetValueType_fn;
    return type;
}

// internal extern Function(Fuse.Scripting.V8.Simple.ValueImpl impl) :1433
void Function__ctor_2_fn(Function* __this, ::V8Simple::Value** impl)
{
    __this->ctor_2(*impl);
}

// internal extern Fuse.Scripting.V8.Simple.FunctionImpl get__functionImpl() :1428
void Function__get__functionImpl_fn(Function* __this, ::V8Simple::Function** __retval)
{
    *__retval = __this->_functionImpl();
}

// public Fuse.Scripting.V8.Simple.Value Call(Fuse.Scripting.V8.Simple.ValueVector args) :1444
void Function__Call_fn(Function* __this, ::g::Fuse::Scripting::V8::Simple::ValueVector* args, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    *__retval = __this->Call(args);
}

// public Fuse.Scripting.V8.Simple.Object Construct(Fuse.Scripting.V8.Simple.ValueVector args) :1459
void Function__Construct_fn(Function* __this, ::g::Fuse::Scripting::V8::Simple::ValueVector* args, ::g::Fuse::Scripting::V8::Simple::Object** __retval)
{
    *__retval = __this->Construct(args);
}

// public bool Equals(Fuse.Scripting.V8.Simple.Function f) :1473
void Function__Equals2_fn(Function* __this, Function* f, bool* __retval)
{
    *__retval = __this->Equals2(f);
}

// public override sealed Fuse.Scripting.V8.Simple.Type GetValueType() :1437
void Function__GetValueType_fn(Function* __this, int* __retval)
{
    return *__retval = (int)__this->_functionImpl()->GetValueType(), void();
}

// internal extern Function New(Fuse.Scripting.V8.Simple.ValueImpl impl) :1433
void Function__New4_fn(::V8Simple::Value** impl, Function** __retval)
{
    *__retval = Function::New4(*impl);
}

// internal extern Function(Fuse.Scripting.V8.Simple.ValueImpl impl) [instance] :1433
void Function::ctor_2(::V8Simple::Value* impl)
{
    ctor_1(impl);
}

// internal extern Fuse.Scripting.V8.Simple.FunctionImpl get__functionImpl() [instance] :1428
::V8Simple::Function* Function::_functionImpl()
{
    return (::V8Simple::Function*)_valueImpl;
}

// public Fuse.Scripting.V8.Simple.Value Call(Fuse.Scripting.V8.Simple.ValueVector args) [instance] :1444
::g::Fuse::Scripting::V8::Simple::Value* Function::Call(::g::Fuse::Scripting::V8::Simple::ValueVector* args)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Function", "Call(Fuse.Scripting.V8.Simple.ValueVector)");
    int len = uPtr(args)->Count();
    uArray* vargs = uArray::New(::TYPES[1/*Fuse.Scripting.V8.Simple.ValueImpl[]*/], len);

    for (int i = 0; i < len; ++i)
    {
        ::g::Fuse::Scripting::V8::Simple::Value* arg = uPtr(args)->Item(i);
        uPtr(vargs)->Item< ::V8Simple::Value*>(i) = ::g::Fuse::Scripting::V8::Simple::ValueExtensions::GetValueImpl(arg);
    }

    return ::g::Fuse::Scripting::V8::Simple::Value::New2(_functionImpl()->Call((::V8Simple::Value**)vargs->Ptr(), len));
}

// public Fuse.Scripting.V8.Simple.Object Construct(Fuse.Scripting.V8.Simple.ValueVector args) [instance] :1459
::g::Fuse::Scripting::V8::Simple::Object* Function::Construct(::g::Fuse::Scripting::V8::Simple::ValueVector* args)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Function", "Construct(Fuse.Scripting.V8.Simple.ValueVector)");
    int len = uPtr(args)->Count();
    uArray* vargs = uArray::New(::TYPES[1/*Fuse.Scripting.V8.Simple.ValueImpl[]*/], len);

    for (int i = 0; i < len; ++i)
    {
        ::g::Fuse::Scripting::V8::Simple::Value* arg = uPtr(args)->Item(i);
        uPtr(vargs)->Item< ::V8Simple::Value*>(i) = ::g::Fuse::Scripting::V8::Simple::ValueExtensions::GetValueImpl(arg);
    }

    return ::g::Fuse::Scripting::V8::Simple::Object::New5(_functionImpl()->Construct((::V8Simple::Value**)vargs->Ptr(), len));
}

// public bool Equals(Fuse.Scripting.V8.Simple.Function f) [instance] :1473
bool Function::Equals2(Function* f)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Function", "Equals(Fuse.Scripting.V8.Simple.Function)");
    return ::g::Fuse::Scripting::V8::Simple::ValueImpl::op_Equality(_valueImpl, ::g::Fuse::Scripting::V8::Simple::ValueExtensions::GetValueImpl(f));
}

// internal extern Function New(Fuse.Scripting.V8.Simple.ValueImpl impl) [static] :1433
Function* Function::New4(::V8Simple::Value* impl)
{
    Function* obj1 = (Function*)uNew(Function_typeof());
    obj1->ctor_2(impl);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal extern struct FunctionImpl :1483
// {
static void FunctionImpl_build(uType* type)
{
}

uStructType* FunctionImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::Function*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.FunctionImpl", options);
    type->fp_build_ = FunctionImpl_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class Int :1685
// {
static void Int_build(uType* type)
{
    type->SetFields(1);
}

::g::Fuse::Scripting::V8::Simple::Value_type* Int_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::V8::Simple::Value_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Int);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::Value_type);
    type = (::g::Fuse::Scripting::V8::Simple::Value_type*)uClassType::New("Fuse.Scripting.V8.Simple.Int", options);
    type->fp_build_ = Int_build;
    type->fp_GetValueType = (void(*)(::g::Fuse::Scripting::V8::Simple::Value*, int*))Int__GetValueType_fn;
    return type;
}

// internal extern Int(Fuse.Scripting.V8.Simple.ValueImpl impl) :1694
void Int__ctor_2_fn(Int* __this, ::V8Simple::Value** impl)
{
    __this->ctor_2(*impl);
}

// public extern Int(int value) :1708
void Int__ctor_3_fn(Int* __this, int* value)
{
    __this->ctor_3(*value);
}

// protected extern Fuse.Scripting.V8.Simple.IntImpl get__intImpl() :1689
void Int__get__intImpl_fn(Int* __this, ::V8Simple::Int** __retval)
{
    *__retval = __this->_intImpl();
}

// public int GetValue() :1712
void Int__GetValue_fn(Int* __this, int* __retval)
{
    *__retval = __this->GetValue();
}

// public override sealed Fuse.Scripting.V8.Simple.Type GetValueType() :1698
void Int__GetValueType_fn(Int* __this, int* __retval)
{
    return *__retval = (int)__this->_intImpl()->GetValueType(), void();
}

// internal extern Int New(Fuse.Scripting.V8.Simple.ValueImpl impl) :1694
void Int__New4_fn(::V8Simple::Value** impl, Int** __retval)
{
    *__retval = Int::New4(*impl);
}

// public extern Int New(int value) :1708
void Int__New5_fn(int* value, Int** __retval)
{
    *__retval = Int::New5(*value);
}

// internal extern Int(Fuse.Scripting.V8.Simple.ValueImpl impl) [instance] :1694
void Int::ctor_2(::V8Simple::Value* impl)
{
    ctor_1(impl);
}

// public extern Int(int value) [instance] :1708
void Int::ctor_3(int value)
{
    ctor_1(::V8Simple::Int::New(value));
}

// protected extern Fuse.Scripting.V8.Simple.IntImpl get__intImpl() [instance] :1689
::V8Simple::Int* Int::_intImpl()
{
    return (::V8Simple::Int*)_valueImpl;
}

// public int GetValue() [instance] :1712
int Int::GetValue()
{
    return _intImpl()->GetValue();
}

// internal extern Int New(Fuse.Scripting.V8.Simple.ValueImpl impl) [static] :1694
Int* Int::New4(::V8Simple::Value* impl)
{
    Int* obj1 = (Int*)uNew(Int_typeof());
    obj1->ctor_2(impl);
    return obj1;
}

// public extern Int New(int value) [static] :1708
Int* Int::New5(int value)
{
    Int* obj2 = (Int*)uNew(Int_typeof());
    obj2->ctor_3(value);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal extern struct IntImpl :1722
// {
static void IntImpl_build(uType* type)
{
}

uStructType* IntImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::Int*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.IntImpl", options);
    type->fp_build_ = IntImpl_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal extern class MessageHandler :1128
// {
// extern ~MessageHandler() :1135
static void MessageHandler__Finalize_fn(MessageHandler* __this)
{
    delete __this->_impl;
}

static void MessageHandler_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Simple::MessageHandlerImpl_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::MessageHandler, _impl), 0);
}

MessageHandler_type* MessageHandler_typeof()
{
    static uSStrong<MessageHandler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(MessageHandler);
    options.TypeSize = sizeof(MessageHandler_type);
    type = (MessageHandler_type*)uClassType::New("Fuse.Scripting.V8.Simple.MessageHandler", options);
    type->fp_build_ = MessageHandler_build;
    type->fp_ctor_ = (void*)MessageHandler__New1_fn;
    type->fp_Finalize = (void(*)(uObject*))MessageHandler__Finalize_fn;
    type->fp_Handle = MessageHandler__Handle_fn;
    return type;
}

// public extern MessageHandler() :1131
void MessageHandler__ctor__fn(MessageHandler* __this)
{
    __this->ctor_();
}

// public virtual void Handle(Fuse.Scripting.V8.Simple.String message) :1140
void MessageHandler__Handle_fn(MessageHandler* __this, ::g::Fuse::Scripting::V8::Simple::String* message)
{
}

// public extern MessageHandler New() :1131
void MessageHandler__New1_fn(MessageHandler** __retval)
{
    *__retval = MessageHandler::New1();
}

// public extern MessageHandler() [instance] :1131
void MessageHandler::ctor_()
{
    _impl = new ::V8Simple::MessageHandlerProxy(this);
}

// public extern MessageHandler New() [static] :1131
MessageHandler* MessageHandler::New1()
{
    MessageHandler* obj1 = (MessageHandler*)uNew(MessageHandler_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal extern struct MessageHandlerImpl :1144
// {
static void MessageHandlerImpl_build(uType* type)
{
}

uStructType* MessageHandlerImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::MessageHandlerProxy*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.MessageHandlerImpl", options);
    type->fp_build_ = MessageHandlerImpl_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class Object :1318
// {
static void Object_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Scripting::V8::Simple::ValueImpl_typeof()->Array();
    type->SetFields(1);
}

::g::Fuse::Scripting::V8::Simple::Value_type* Object_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::V8::Simple::Value_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::Value_type);
    type = (::g::Fuse::Scripting::V8::Simple::Value_type*)uClassType::New("Fuse.Scripting.V8.Simple.Object", options);
    type->fp_build_ = Object_build;
    type->fp_GetValueType = (void(*)(::g::Fuse::Scripting::V8::Simple::Value*, int*))Object__GetValueType_fn;
    return type;
}

// internal extern Object(Fuse.Scripting.V8.Simple.ObjectImpl impl) :1331
void Object__ctor_2_fn(Object* __this, ::V8Simple::Object** impl)
{
    __this->ctor_2(*impl);
}

// internal extern Object(Fuse.Scripting.V8.Simple.ValueImpl impl) :1327
void Object__ctor_3_fn(Object* __this, ::V8Simple::Value** impl)
{
    __this->ctor_3(*impl);
}

// protected extern Fuse.Scripting.V8.Simple.ObjectImpl get__objectImpl() :1322
void Object__get__objectImpl_fn(Object* __this, ::V8Simple::Object** __retval)
{
    *__retval = __this->_objectImpl();
}

// public Fuse.Scripting.V8.Simple.Value CallMethod(Fuse.Scripting.V8.Simple.String name, Fuse.Scripting.V8.Simple.ValueVector args) :1371
void Object__CallMethod_fn(Object* __this, ::g::Fuse::Scripting::V8::Simple::String* name, ::g::Fuse::Scripting::V8::Simple::ValueVector* args, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    *__retval = __this->CallMethod(name, args);
}

// public bool ContainsKey(Fuse.Scripting.V8.Simple.String key) :1393
void Object__ContainsKey_fn(Object* __this, ::g::Fuse::Scripting::V8::Simple::String* key, bool* __retval)
{
    *__retval = __this->ContainsKey(key);
}

// public bool Equals(Fuse.Scripting.V8.Simple.Object arg) :1400
void Object__Equals2_fn(Object* __this, Object* arg, bool* __retval)
{
    *__retval = __this->Equals2(arg);
}

// public Fuse.Scripting.V8.Simple.Value Get(Fuse.Scripting.V8.Simple.String key) :1342
void Object__Get_fn(Object* __this, ::g::Fuse::Scripting::V8::Simple::String* key, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    *__retval = __this->Get(key);
}

// public Uno.IntPtr GetArrayBufferData() :1386
void Object__GetArrayBufferData_fn(Object* __this, void** __retval)
{
    *__retval = __this->GetArrayBufferData();
}

// public override sealed Fuse.Scripting.V8.Simple.Type GetValueType() :1335
void Object__GetValueType_fn(Object* __this, int* __retval)
{
    return *__retval = (int)__this->_objectImpl()->GetValueType(), void();
}

// public bool InstanceOf(Fuse.Scripting.V8.Simple.Function type) :1364
void Object__InstanceOf_fn(Object* __this, ::g::Fuse::Scripting::V8::Simple::Function* type, bool* __retval)
{
    *__retval = __this->InstanceOf(type);
}

// public Fuse.Scripting.V8.Simple.UniqueValueVector Keys() :1357
void Object__Keys_fn(Object* __this, ::g::Fuse::Scripting::V8::Simple::UniqueValueVector** __retval)
{
    *__retval = __this->Keys();
}

// internal extern Object New(Fuse.Scripting.V8.Simple.ObjectImpl impl) :1331
void Object__New4_fn(::V8Simple::Object** impl, Object** __retval)
{
    *__retval = Object::New4(*impl);
}

// internal extern Object New(Fuse.Scripting.V8.Simple.ValueImpl impl) :1327
void Object__New5_fn(::V8Simple::Value** impl, Object** __retval)
{
    *__retval = Object::New5(*impl);
}

// public void Set(Fuse.Scripting.V8.Simple.String key, Fuse.Scripting.V8.Simple.Value value) :1350
void Object__Set_fn(Object* __this, ::g::Fuse::Scripting::V8::Simple::String* key, ::g::Fuse::Scripting::V8::Simple::Value* value)
{
    __this->Set(key, value);
}

// internal extern Object(Fuse.Scripting.V8.Simple.ObjectImpl impl) [instance] :1331
void Object::ctor_2(::V8Simple::Object* impl)
{
    ctor_1((::V8Simple::Value*)impl);
}

// internal extern Object(Fuse.Scripting.V8.Simple.ValueImpl impl) [instance] :1327
void Object::ctor_3(::V8Simple::Value* impl)
{
    ctor_1(impl);
}

// protected extern Fuse.Scripting.V8.Simple.ObjectImpl get__objectImpl() [instance] :1322
::V8Simple::Object* Object::_objectImpl()
{
    return (::V8Simple::Object*)_valueImpl;
}

// public Fuse.Scripting.V8.Simple.Value CallMethod(Fuse.Scripting.V8.Simple.String name, Fuse.Scripting.V8.Simple.ValueVector args) [instance] :1371
::g::Fuse::Scripting::V8::Simple::Value* Object::CallMethod(::g::Fuse::Scripting::V8::Simple::String* name, ::g::Fuse::Scripting::V8::Simple::ValueVector* args)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Object", "CallMethod(Fuse.Scripting.V8.Simple.String,Fuse.Scripting.V8.Simple.ValueVector)");
    int len = uPtr(args)->Count();
    uArray* vargs = uArray::New(::TYPES[1/*Fuse.Scripting.V8.Simple.ValueImpl[]*/], len);

    for (int i = 0; i < len; ++i)
    {
        ::g::Fuse::Scripting::V8::Simple::Value* arg = uPtr(args)->Item(i);
        uPtr(vargs)->Item< ::V8Simple::Value*>(i) = ::g::Fuse::Scripting::V8::Simple::ValueExtensions::GetValueImpl(arg);
    }

    return ::g::Fuse::Scripting::V8::Simple::Value::New2(_objectImpl()->CallMethod(::g::Fuse::Scripting::V8::Simple::StringExtensions::GetStringImpl(name), (::V8Simple::Value**)vargs->Ptr(), len));
}

// public bool ContainsKey(Fuse.Scripting.V8.Simple.String key) [instance] :1393
bool Object::ContainsKey(::g::Fuse::Scripting::V8::Simple::String* key)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Object", "ContainsKey(Fuse.Scripting.V8.Simple.String)");
    return _objectImpl()->ContainsKey(::g::Fuse::Scripting::V8::Simple::StringExtensions::GetStringImpl(key));
}

// public bool Equals(Fuse.Scripting.V8.Simple.Object arg) [instance] :1400
bool Object::Equals2(Object* arg)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Object", "Equals(Fuse.Scripting.V8.Simple.Object)");
    return ::g::Fuse::Scripting::V8::Simple::ValueImpl::op_Equality(_valueImpl, ::g::Fuse::Scripting::V8::Simple::ValueExtensions::GetValueImpl(arg));
}

// public Fuse.Scripting.V8.Simple.Value Get(Fuse.Scripting.V8.Simple.String key) [instance] :1342
::g::Fuse::Scripting::V8::Simple::Value* Object::Get(::g::Fuse::Scripting::V8::Simple::String* key)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Object", "Get(Fuse.Scripting.V8.Simple.String)");
    ::g::Fuse::Scripting::V8::Simple::Value* result = ::g::Fuse::Scripting::V8::Simple::Value::New2(_objectImpl()->Get(::g::Fuse::Scripting::V8::Simple::StringExtensions::GetStringImpl(key)));
    return result;
}

// public Uno.IntPtr GetArrayBufferData() [instance] :1386
void* Object::GetArrayBufferData()
{
    return _objectImpl()->GetArrayBufferData();
}

// public bool InstanceOf(Fuse.Scripting.V8.Simple.Function type) [instance] :1364
bool Object::InstanceOf(::g::Fuse::Scripting::V8::Simple::Function* type)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Object", "InstanceOf(Fuse.Scripting.V8.Simple.Function)");
    return _objectImpl()->InstanceOf(uPtr(type)->_functionImpl());
}

// public Fuse.Scripting.V8.Simple.UniqueValueVector Keys() [instance] :1357
::g::Fuse::Scripting::V8::Simple::UniqueValueVector* Object::Keys()
{
    return ::g::Fuse::Scripting::V8::Simple::UniqueValueVector::New1(_objectImpl()->Keys(), true);
}

// public void Set(Fuse.Scripting.V8.Simple.String key, Fuse.Scripting.V8.Simple.Value value) [instance] :1350
void Object::Set(::g::Fuse::Scripting::V8::Simple::String* key, ::g::Fuse::Scripting::V8::Simple::Value* value)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Object", "Set(Fuse.Scripting.V8.Simple.String,Fuse.Scripting.V8.Simple.Value)");
    _objectImpl()->Set(::g::Fuse::Scripting::V8::Simple::StringExtensions::GetStringImpl(key), ::g::Fuse::Scripting::V8::Simple::ValueExtensions::GetValueImpl(value));
}

// internal extern Object New(Fuse.Scripting.V8.Simple.ObjectImpl impl) [static] :1331
Object* Object::New4(::V8Simple::Object* impl)
{
    Object* obj2 = (Object*)uNew(Object_typeof());
    obj2->ctor_2(impl);
    return obj2;
}

// internal extern Object New(Fuse.Scripting.V8.Simple.ValueImpl impl) [static] :1327
Object* Object::New5(::V8Simple::Value* impl)
{
    Object* obj1 = (Object*)uNew(Object_typeof());
    obj1->ctor_3(impl);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal extern struct ObjectImpl :1410
// {
static void ObjectImpl_build(uType* type)
{
}

uStructType* ObjectImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::Object*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.ObjectImpl", options);
    type->fp_build_ = ObjectImpl_build;
    return type;
}

// public static operator ==(Fuse.Scripting.V8.Simple.ObjectImpl x, Fuse.Scripting.V8.Simple.ObjectImpl y) :1412
void ObjectImpl__op_Equality_fn(::V8Simple::Object** x, ::V8Simple::Object** y, bool* __retval)
{
    *__retval = ObjectImpl::op_Equality(*x, *y);
}

// public static operator !=(Fuse.Scripting.V8.Simple.ObjectImpl x, Fuse.Scripting.V8.Simple.ObjectImpl y) :1416
void ObjectImpl__op_Inequality_fn(::V8Simple::Object** x, ::V8Simple::Object** y, bool* __retval)
{
    *__retval = ObjectImpl::op_Inequality(*x, *y);
}

// public static operator ==(Fuse.Scripting.V8.Simple.ObjectImpl x, Fuse.Scripting.V8.Simple.ObjectImpl y) [static] :1412
bool ObjectImpl::op_Equality(::V8Simple::Object* x, ::V8Simple::Object* y)
{
    return x == y;
}

// public static operator !=(Fuse.Scripting.V8.Simple.ObjectImpl x, Fuse.Scripting.V8.Simple.ObjectImpl y) [static] :1416
bool ObjectImpl::op_Inequality(::V8Simple::Object* x, ::V8Simple::Object* y)
{
    return x != y;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class ScriptException :1068
// {
// extern ~ScriptException() :1075
static void ScriptException__Finalize_fn(ScriptException* __this)
{
    __this->_scriptExceptionImpl->Delete();
}

static void ScriptException_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Simple::ScriptExceptionImpl_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::ScriptException, _scriptExceptionImpl), 0);
}

uType* ScriptException_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ScriptException);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.V8.Simple.ScriptException", options);
    type->fp_build_ = ScriptException_build;
    type->fp_Finalize = (void(*)(uObject*))ScriptException__Finalize_fn;
    return type;
}

// private extern ScriptException(Fuse.Scripting.V8.Simple.ScriptExceptionImpl impl) :1071
void ScriptException__ctor__fn(ScriptException* __this, ::V8Simple::ScriptException** impl)
{
    __this->ctor_(*impl);
}

// public Fuse.Scripting.V8.Simple.String GetErrorMessage() :1086
void ScriptException__GetErrorMessage_fn(ScriptException* __this, ::g::Fuse::Scripting::V8::Simple::String** __retval)
{
    *__retval = __this->GetErrorMessage();
}

// public Fuse.Scripting.V8.Simple.Value GetException() :1079
void ScriptException__GetException_fn(ScriptException* __this, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    *__retval = __this->GetException();
}

// public Fuse.Scripting.V8.Simple.String GetFileName() :1093
void ScriptException__GetFileName_fn(ScriptException* __this, ::g::Fuse::Scripting::V8::Simple::String** __retval)
{
    *__retval = __this->GetFileName();
}

// public int GetLineNumber() :1100
void ScriptException__GetLineNumber_fn(ScriptException* __this, int* __retval)
{
    *__retval = __this->GetLineNumber();
}

// public Fuse.Scripting.V8.Simple.String GetSourceLine() :1114
void ScriptException__GetSourceLine_fn(ScriptException* __this, ::g::Fuse::Scripting::V8::Simple::String** __retval)
{
    *__retval = __this->GetSourceLine();
}

// public Fuse.Scripting.V8.Simple.String GetStackTrace() :1107
void ScriptException__GetStackTrace_fn(ScriptException* __this, ::g::Fuse::Scripting::V8::Simple::String** __retval)
{
    *__retval = __this->GetStackTrace();
}

// private extern ScriptException New(Fuse.Scripting.V8.Simple.ScriptExceptionImpl impl) :1071
void ScriptException__New1_fn(::V8Simple::ScriptException** impl, ScriptException** __retval)
{
    *__retval = ScriptException::New1(*impl);
}

// private extern ScriptException(Fuse.Scripting.V8.Simple.ScriptExceptionImpl impl) [instance] :1071
void ScriptException::ctor_(::V8Simple::ScriptException* impl)
{
    _scriptExceptionImpl = impl;
}

// public Fuse.Scripting.V8.Simple.String GetErrorMessage() [instance] :1086
::g::Fuse::Scripting::V8::Simple::String* ScriptException::GetErrorMessage()
{
    return ::g::Fuse::Scripting::V8::Simple::String::New4(_scriptExceptionImpl->GetErrorMessage());
}

// public Fuse.Scripting.V8.Simple.Value GetException() [instance] :1079
::g::Fuse::Scripting::V8::Simple::Value* ScriptException::GetException()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ScriptException", "GetException()");
    return ::g::Fuse::Scripting::V8::Simple::Value::New2(_scriptExceptionImpl->GetException());
}

// public Fuse.Scripting.V8.Simple.String GetFileName() [instance] :1093
::g::Fuse::Scripting::V8::Simple::String* ScriptException::GetFileName()
{
    return ::g::Fuse::Scripting::V8::Simple::String::New4(_scriptExceptionImpl->GetFileName());
}

// public int GetLineNumber() [instance] :1100
int ScriptException::GetLineNumber()
{
    return _scriptExceptionImpl->GetLineNumber();
}

// public Fuse.Scripting.V8.Simple.String GetSourceLine() [instance] :1114
::g::Fuse::Scripting::V8::Simple::String* ScriptException::GetSourceLine()
{
    return ::g::Fuse::Scripting::V8::Simple::String::New4(_scriptExceptionImpl->GetSourceLine());
}

// public Fuse.Scripting.V8.Simple.String GetStackTrace() [instance] :1107
::g::Fuse::Scripting::V8::Simple::String* ScriptException::GetStackTrace()
{
    return ::g::Fuse::Scripting::V8::Simple::String::New4(_scriptExceptionImpl->GetStackTrace());
}

// private extern ScriptException New(Fuse.Scripting.V8.Simple.ScriptExceptionImpl impl) [static] :1071
ScriptException* ScriptException::New1(::V8Simple::ScriptException* impl)
{
    ScriptException* obj1 = (ScriptException*)uNew(ScriptException_typeof());
    obj1->ctor_(impl);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal extern class ScriptExceptionHandler :1163
// {
// extern ~ScriptExceptionHandler() :1173
static void ScriptExceptionHandler__Finalize_fn(ScriptExceptionHandler* __this)
{
    delete __this->_impl;
}

static void ScriptExceptionHandler_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandlerImpl_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler, _impl), 0);
}

ScriptExceptionHandler_type* ScriptExceptionHandler_typeof()
{
    static uSStrong<ScriptExceptionHandler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ScriptExceptionHandler);
    options.TypeSize = sizeof(ScriptExceptionHandler_type);
    type = (ScriptExceptionHandler_type*)uClassType::New("Fuse.Scripting.V8.Simple.ScriptExceptionHandler", options);
    type->fp_build_ = ScriptExceptionHandler_build;
    type->fp_ctor_ = (void*)ScriptExceptionHandler__New1_fn;
    type->fp_Finalize = (void(*)(uObject*))ScriptExceptionHandler__Finalize_fn;
    type->fp_Handle = ScriptExceptionHandler__Handle_fn;
    return type;
}

// public ScriptExceptionHandler() :1166
void ScriptExceptionHandler__ctor__fn(ScriptExceptionHandler* __this)
{
    __this->ctor_();
}

// public virtual void Handle(Fuse.Scripting.V8.Simple.ScriptException e) :1178
void ScriptExceptionHandler__Handle_fn(ScriptExceptionHandler* __this, ::g::Fuse::Scripting::V8::Simple::ScriptException* e)
{
}

// public ScriptExceptionHandler New() :1166
void ScriptExceptionHandler__New1_fn(ScriptExceptionHandler** __retval)
{
    *__retval = ScriptExceptionHandler::New1();
}

// public ScriptExceptionHandler() [instance] :1166
void ScriptExceptionHandler::ctor_()
{
    _impl = new ::V8Simple::ScriptExceptionHandlerProxy(this);
}

// public ScriptExceptionHandler New() [static] :1166
ScriptExceptionHandler* ScriptExceptionHandler::New1()
{
    ScriptExceptionHandler* obj1 = (ScriptExceptionHandler*)uNew(ScriptExceptionHandler_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal extern struct ScriptExceptionHandlerImpl :1182
// {
static void ScriptExceptionHandlerImpl_build(uType* type)
{
}

uStructType* ScriptExceptionHandlerImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::ScriptExceptionHandlerProxy*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.ScriptExceptionHandlerImpl", options);
    type->fp_build_ = ScriptExceptionHandlerImpl_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal extern struct ScriptExceptionImpl :1124
// {
static void ScriptExceptionImpl_build(uType* type)
{
}

uStructType* ScriptExceptionImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::ScriptException*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.ScriptExceptionImpl", options);
    type->fp_build_ = ScriptExceptionImpl_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class String :1767
// {
static void String_build(uType* type)
{
    type->SetFields(1);
}

::g::Fuse::Scripting::V8::Simple::Value_type* String_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::V8::Simple::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::V8::Simple::Value_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(String);
    options.TypeSize = sizeof(::g::Fuse::Scripting::V8::Simple::Value_type);
    type = (::g::Fuse::Scripting::V8::Simple::Value_type*)uClassType::New("Fuse.Scripting.V8.Simple.String", options);
    type->fp_build_ = String_build;
    type->fp_GetValueType = (void(*)(::g::Fuse::Scripting::V8::Simple::Value*, int*))String__GetValueType_fn;
    return type;
}

// internal extern String(Fuse.Scripting.V8.Simple.ValueImpl impl) :1776
void String__ctor_2_fn(String* __this, ::V8Simple::Value** impl)
{
    __this->ctor_2(*impl);
}

// internal extern Fuse.Scripting.V8.Simple.StringImpl get__stringImpl() :1771
void String__get__stringImpl_fn(String* __this, ::V8Simple::String** __retval)
{
    *__retval = __this->_stringImpl();
}

// public string GetValue() :1797
void String__GetValue_fn(String* __this, uString** __retval)
{
    *__retval = __this->GetValue();
}

// public override sealed Fuse.Scripting.V8.Simple.Type GetValueType() :1780
void String__GetValueType_fn(String* __this, int* __retval)
{
    return *__retval = (int)__this->_stringImpl()->GetValueType(), void();
}

// internal extern String New(Fuse.Scripting.V8.Simple.ValueImpl impl) :1776
void String__New4_fn(::V8Simple::Value** impl, String** __retval)
{
    *__retval = String::New4(*impl);
}

// public static Fuse.Scripting.V8.Simple.String New(string value) :1787
void String__New5_fn(uString* value, String** __retval)
{
    *__retval = String::New5(value);
}

// internal extern String(Fuse.Scripting.V8.Simple.ValueImpl impl) [instance] :1776
void String::ctor_2(::V8Simple::Value* impl)
{
    ctor_1(impl);
}

// internal extern Fuse.Scripting.V8.Simple.StringImpl get__stringImpl() [instance] :1771
::V8Simple::String* String::_stringImpl()
{
    return (::V8Simple::String*)_valueImpl;
}

// public string GetValue() [instance] :1797
uString* String::GetValue()
{
    uString* result = uString::New(_stringImpl()->GetBufferLength());
    _stringImpl()->GetBuffer((uint16_t*)result->Ptr());
    return result;
}

// internal extern String New(Fuse.Scripting.V8.Simple.ValueImpl impl) [static] :1776
String* String::New4(::V8Simple::Value* impl)
{
    String* obj1 = (String*)uNew(String_typeof());
    obj1->ctor_2(impl);
    return obj1;
}

// public static Fuse.Scripting.V8.Simple.String New(string value) [static] :1787
String* String::New5(uString* value)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.String", "New(string)");

    if (::g::Uno::String::op_Equality(value, NULL))
        return NULL;

    ::V8Simple::Value* valueImpl = ::V8Simple::String::New((const uint16_t*)value->Ptr(), value->Length());
    return String::New4(valueImpl);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal static extern class StringExtensions :1811
// {
static void StringExtensions_build(uType* type)
{
}

uClassType* StringExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Simple.StringExtensions", options);
    type->fp_build_ = StringExtensions_build;
    return type;
}

// public static Fuse.Scripting.V8.Simple.StringImpl GetStringImpl(Fuse.Scripting.V8.Simple.String str) :1813
void StringExtensions__GetStringImpl_fn(::g::Fuse::Scripting::V8::Simple::String* str, ::V8Simple::String** __retval)
{
    *__retval = StringExtensions::GetStringImpl(str);
}

// public static Fuse.Scripting.V8.Simple.StringImpl GetStringImpl(Fuse.Scripting.V8.Simple.String str) [static] :1813
::V8Simple::String* StringExtensions::GetStringImpl(::g::Fuse::Scripting::V8::Simple::String* str)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.StringExtensions", "GetStringImpl(Fuse.Scripting.V8.Simple.String)");
    return (str == NULL) ? NULL : uPtr(str)->_stringImpl();
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal extern struct StringImpl :1809
// {
static void StringImpl_build(uType* type)
{
}

uStructType* StringImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::String*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.StringImpl", options);
    type->fp_build_ = StringImpl_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// public extern enum Type :1238
uEnumType* Type_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Scripting.V8.Simple.Type", ::g::Uno::Int_typeof(), 9);
    type->SetLiterals(
        "Int", 0LL,
        "Double", 1LL,
        "String", 2LL,
        "Bool", 3LL,
        "Object", 4LL,
        "Array", 5LL,
        "Function", 6LL,
        "Callback", 7LL,
        "External", 8LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class UniqueValueVector :1616
// {
// extern ~UniqueValueVector() :1625
static void UniqueValueVector__Finalize_fn(UniqueValueVector* __this)
{
    if (__this->_owned)
        __this->_impl->Delete();
}

static void UniqueValueVector_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Simple::UniqueValueVectorImpl_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::UniqueValueVector, _impl), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::UniqueValueVector, _owned), 0);
}

uType* UniqueValueVector_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(UniqueValueVector);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.V8.Simple.UniqueValueVector", options);
    type->fp_build_ = UniqueValueVector_build;
    type->fp_Finalize = (void(*)(uObject*))UniqueValueVector__Finalize_fn;
    return type;
}

// internal extern UniqueValueVector(Fuse.Scripting.V8.Simple.UniqueValueVectorImpl impl, [bool owned]) :1620
void UniqueValueVector__ctor__fn(UniqueValueVector* __this, ::V8Simple::UniqueValueVector** impl, bool* owned)
{
    __this->ctor_(*impl, *owned);
}

// public Fuse.Scripting.V8.Simple.Value Get(int i) :1639
void UniqueValueVector__Get_fn(UniqueValueVector* __this, int* i, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    *__retval = __this->Get(*i);
}

// public int Length() :1632
void UniqueValueVector__Length_fn(UniqueValueVector* __this, int* __retval)
{
    *__retval = __this->Length();
}

// internal extern UniqueValueVector New(Fuse.Scripting.V8.Simple.UniqueValueVectorImpl impl, [bool owned]) :1620
void UniqueValueVector__New1_fn(::V8Simple::UniqueValueVector** impl, bool* owned, UniqueValueVector** __retval)
{
    *__retval = UniqueValueVector::New1(*impl, *owned);
}

// internal extern UniqueValueVector(Fuse.Scripting.V8.Simple.UniqueValueVectorImpl impl, [bool owned]) [instance] :1620
void UniqueValueVector::ctor_(::V8Simple::UniqueValueVector* impl, bool owned)
{
    _impl = impl;
    _owned = owned;
}

// public Fuse.Scripting.V8.Simple.Value Get(int i) [instance] :1639
::g::Fuse::Scripting::V8::Simple::Value* UniqueValueVector::Get(int i)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.UniqueValueVector", "Get(int)");
    return ::g::Fuse::Scripting::V8::Simple::Value::New2(_impl->Get(i));
}

// public int Length() [instance] :1632
int UniqueValueVector::Length()
{
    return _impl->Length();
}

// internal extern UniqueValueVector New(Fuse.Scripting.V8.Simple.UniqueValueVectorImpl impl, [bool owned]) [static] :1620
UniqueValueVector* UniqueValueVector::New1(::V8Simple::UniqueValueVector* impl, bool owned)
{
    UniqueValueVector* obj1 = (UniqueValueVector*)uNew(UniqueValueVector_typeof());
    obj1->ctor_(impl, owned);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal extern struct UniqueValueVectorImpl :1649
// {
static void UniqueValueVectorImpl_build(uType* type)
{
}

uStructType* UniqueValueVectorImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::UniqueValueVector*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.UniqueValueVectorImpl", options);
    type->fp_build_ = UniqueValueVectorImpl_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal extern class Value :1252
// {
// extern ~Value() :1282
static void Value__Finalize_fn(Value* __this)
{
    __this->_valueImpl->Delete();
}

static void Value_build(uType* type)
{
    ::STRINGS[0] = uString::Const("V8Simple: Unhandled type on Uno side: ");
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Simple::ValueImpl_typeof(), offsetof(::g::Fuse::Scripting::V8::Simple::Value, _valueImpl), 0);
}

Value_type* Value_typeof()
{
    static uSStrong<Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Value);
    options.TypeSize = sizeof(Value_type);
    type = (Value_type*)uClassType::New("Fuse.Scripting.V8.Simple.Value", options);
    type->fp_build_ = Value_build;
    type->fp_ctor_ = (void*)Value__New1_fn;
    type->fp_Finalize = (void(*)(uObject*))Value__Finalize_fn;
    type->fp_GetValueType = Value__GetValueType_fn;
    return type;
}

// protected extern Value() :1255
void Value__ctor__fn(Value* __this)
{
    __this->ctor_();
}

// protected extern Value(Fuse.Scripting.V8.Simple.ValueImpl impl) :1258
void Value__ctor_1_fn(Value* __this, ::V8Simple::Value** impl)
{
    __this->ctor_1(*impl);
}

// public virtual Fuse.Scripting.V8.Simple.Type GetValueType() :1286
void Value__GetValueType_fn(Value* __this, int* __retval)
{
    return *__retval = (int)__this->_valueImpl->GetValueType(), void();
}

// protected extern Value New() :1255
void Value__New1_fn(Value** __retval)
{
    *__retval = Value::New1();
}

// internal static extern Fuse.Scripting.V8.Simple.Value New(Fuse.Scripting.V8.Simple.ValueImpl impl) :1262
void Value__New2_fn(::V8Simple::Value** impl, Value** __retval)
{
    *__retval = Value::New2(*impl);
}

// protected extern Value New(Fuse.Scripting.V8.Simple.ValueImpl impl) :1258
void Value__New3_fn(::V8Simple::Value** impl, Value** __retval)
{
    *__retval = Value::New3(*impl);
}

// protected extern Value() [instance] :1255
void Value::ctor_()
{
}

// protected extern Value(Fuse.Scripting.V8.Simple.ValueImpl impl) [instance] :1258
void Value::ctor_1(::V8Simple::Value* impl)
{
    _valueImpl = impl;
}

// protected extern Value New() [static] :1255
Value* Value::New1()
{
    Value* obj1 = (Value*)uNew(Value_typeof());
    obj1->ctor_();
    return obj1;
}

// internal static extern Fuse.Scripting.V8.Simple.Value New(Fuse.Scripting.V8.Simple.ValueImpl impl) [static] :1262
Value* Value::New2(::V8Simple::Value* impl)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.Value", "New(Fuse.Scripting.V8.Simple.ValueImpl)");

    if (::g::Fuse::Scripting::V8::Simple::ValueImpl::op_Equality(impl, NULL))
        return NULL;

    int type = (int)impl->GetValueType();

    switch (type)
    {
        case 0:
            return ::g::Fuse::Scripting::V8::Simple::Int::New4(impl);
        case 1:
            return ::g::Fuse::Scripting::V8::Simple::Double::New5(impl);
        case 2:
            return ::g::Fuse::Scripting::V8::Simple::String::New4(impl);
        case 3:
            return ::g::Fuse::Scripting::V8::Simple::Bool::New5(impl);
        case 4:
            return ::g::Fuse::Scripting::V8::Simple::Object::New5(impl);
        case 5:
            return ::g::Fuse::Scripting::V8::Simple::Array::New4(impl);
        case 6:
            return ::g::Fuse::Scripting::V8::Simple::Function::New4(impl);
        case 8:
            return ::g::Fuse::Scripting::V8::Simple::External::New4(impl);
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"V8Simple: U...*/], uBox<int>(::g::Fuse::Scripting::V8::Simple::Type_typeof(), type))));
}

// protected extern Value New(Fuse.Scripting.V8.Simple.ValueImpl impl) [static] :1258
Value* Value::New3(::V8Simple::Value* impl)
{
    Value* obj2 = (Value*)uNew(Value_typeof());
    obj2->ctor_1(impl);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal static extern class ValueExtensions :1308
// {
static void ValueExtensions_build(uType* type)
{
}

uClassType* ValueExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Simple.ValueExtensions", options);
    type->fp_build_ = ValueExtensions_build;
    return type;
}

// public static Fuse.Scripting.V8.Simple.ValueImpl GetValueImpl(Fuse.Scripting.V8.Simple.Value val) :1310
void ValueExtensions__GetValueImpl_fn(::g::Fuse::Scripting::V8::Simple::Value* val, ::V8Simple::Value** __retval)
{
    *__retval = ValueExtensions::GetValueImpl(val);
}

// public static Fuse.Scripting.V8.Simple.ValueImpl GetValueImpl(Fuse.Scripting.V8.Simple.Value val) [static] :1310
::V8Simple::Value* ValueExtensions::GetValueImpl(::g::Fuse::Scripting::V8::Simple::Value* val)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueExtensions", "GetValueImpl(Fuse.Scripting.V8.Simple.Value)");
    return (val == NULL) ? NULL : uPtr(val)->_valueImpl;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal extern struct ValueImpl :1296
// {
static void ValueImpl_build(uType* type)
{
}

uStructType* ValueImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::V8Simple::Value*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.ValueImpl", options);
    type->fp_build_ = ValueImpl_build;
    return type;
}

// public static operator ==(Fuse.Scripting.V8.Simple.ValueImpl x, Fuse.Scripting.V8.Simple.ValueImpl y) :1298
void ValueImpl__op_Equality_fn(::V8Simple::Value** x, ::V8Simple::Value** y, bool* __retval)
{
    *__retval = ValueImpl::op_Equality(*x, *y);
}

// public static operator !=(Fuse.Scripting.V8.Simple.ValueImpl x, Fuse.Scripting.V8.Simple.ValueImpl y) :1302
void ValueImpl__op_Inequality_fn(::V8Simple::Value** x, ::V8Simple::Value** y, bool* __retval)
{
    *__retval = ValueImpl::op_Inequality(*x, *y);
}

// public static operator ==(Fuse.Scripting.V8.Simple.ValueImpl x, Fuse.Scripting.V8.Simple.ValueImpl y) [static] :1298
bool ValueImpl::op_Equality(::V8Simple::Value* x, ::V8Simple::Value* y)
{
    return x == y;
}

// public static operator !=(Fuse.Scripting.V8.Simple.ValueImpl x, Fuse.Scripting.V8.Simple.ValueImpl y) [static] :1302
bool ValueImpl::op_Inequality(::V8Simple::Value* x, ::V8Simple::Value* y)
{
    return x != y;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class ValueVector :1861
// {
static void ValueVector_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::Value_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::Value_typeof(), NULL), offsetof(ValueVector_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::Value_typeof(), NULL), offsetof(ValueVector_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::Value_typeof(), NULL), offsetof(ValueVector_type, interface2));
    type->SetFields(0,
        ::TYPES[2/*Uno.Collections.List<Fuse.Scripting.V8.Simple.Value>*/], offsetof(::g::Fuse::Scripting::V8::Simple::ValueVector, _list), 0);
}

ValueVector_type* ValueVector_typeof()
{
    static uSStrong<ValueVector_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ValueVector);
    options.TypeSize = sizeof(ValueVector_type);
    type = (ValueVector_type*)uClassType::New("Fuse.Scripting.V8.Simple.ValueVector", options);
    type->fp_build_ = ValueVector_build;
    type->fp_ctor_ = (void*)ValueVector__New1_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))ValueVector__Insert_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))ValueVector__RemoveAt_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))ValueVector__get_Item_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))ValueVector__Clear_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))ValueVector__Add_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))ValueVector__Remove_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))ValueVector__Contains_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))ValueVector__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))ValueVector__GetEnumerator_fn;
    return type;
}

// public ValueVector() :1864
void ValueVector__ctor__fn(ValueVector* __this)
{
    __this->ctor_();
}

// public void Add(Fuse.Scripting.V8.Simple.Value item) :1878
void ValueVector__Add_fn(ValueVector* __this, ::g::Fuse::Scripting::V8::Simple::Value* item)
{
    __this->Add(item);
}

// public void Clear() :1871
void ValueVector__Clear_fn(ValueVector* __this)
{
    __this->Clear();
}

// public bool Contains(Fuse.Scripting.V8.Simple.Value item) :1892
void ValueVector__Contains_fn(ValueVector* __this, ::g::Fuse::Scripting::V8::Simple::Value* item, bool* __retval)
{
    *__retval = __this->Contains(item);
}

// public int get_Count() :1901
void ValueVector__get_Count_fn(ValueVector* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.IEnumerator<Fuse.Scripting.V8.Simple.Value> GetEnumerator() :1909
void ValueVector__GetEnumerator_fn(ValueVector* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public void Insert(int index, Fuse.Scripting.V8.Simple.Value item) :1916
void ValueVector__Insert_fn(ValueVector* __this, int* index, ::g::Fuse::Scripting::V8::Simple::Value* item)
{
    __this->Insert(*index, item);
}

// public Fuse.Scripting.V8.Simple.Value get_Item(int index) :1932
void ValueVector__get_Item_fn(ValueVector* __this, int* index, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    *__retval = __this->Item(*index);
}

// public ValueVector New() :1864
void ValueVector__New1_fn(ValueVector** __retval)
{
    *__retval = ValueVector::New1();
}

// public bool Remove(Fuse.Scripting.V8.Simple.Value item) :1885
void ValueVector__Remove_fn(ValueVector* __this, ::g::Fuse::Scripting::V8::Simple::Value* item, bool* __retval)
{
    *__retval = __this->Remove(item);
}

// public void RemoveAt(int index) :1923
void ValueVector__RemoveAt_fn(ValueVector* __this, int* index)
{
    __this->RemoveAt(*index);
}

// public ValueVector() [instance] :1864
void ValueVector::ctor_()
{
    _list = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[2/*Uno.Collections.List<Fuse.Scripting.V8.Simple.Value>*/]));
}

// public void Add(Fuse.Scripting.V8.Simple.Value item) [instance] :1878
void ValueVector::Add(::g::Fuse::Scripting::V8::Simple::Value* item)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueVector", "Add(Fuse.Scripting.V8.Simple.Value)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_list), item);
}

// public void Clear() [instance] :1871
void ValueVector::Clear()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueVector", "Clear()");
    uPtr(_list)->Clear();
}

// public bool Contains(Fuse.Scripting.V8.Simple.Value item) [instance] :1892
bool ValueVector::Contains(::g::Fuse::Scripting::V8::Simple::Value* item)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueVector", "Contains(Fuse.Scripting.V8.Simple.Value)");
    bool ret2;
    return (::g::Uno::Collections::List__Contains_fn(uPtr(_list), item, &ret2), ret2);
}

// public int get_Count() [instance] :1901
int ValueVector::Count()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueVector", "get_Count()");
    return uPtr(_list)->Count();
}

// public Uno.Collections.IEnumerator<Fuse.Scripting.V8.Simple.Value> GetEnumerator() [instance] :1909
uObject* ValueVector::GetEnumerator()
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueVector", "GetEnumerator()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Scripting::V8::Simple::Value*> > ret3;
    return uBox(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::Value_typeof(), NULL), (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_list), &ret3), ret3));
}

// public void Insert(int index, Fuse.Scripting.V8.Simple.Value item) [instance] :1916
void ValueVector::Insert(int index, ::g::Fuse::Scripting::V8::Simple::Value* item)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueVector", "Insert(int,Fuse.Scripting.V8.Simple.Value)");
    ::g::Uno::Collections::List__Insert_fn(uPtr(_list), uCRef<int>(index), item);
}

// public Fuse.Scripting.V8.Simple.Value get_Item(int index) [instance] :1932
::g::Fuse::Scripting::V8::Simple::Value* ValueVector::Item(int index)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueVector", "get_Item(int)");
    ::g::Fuse::Scripting::V8::Simple::Value* ret5;
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(_list), uCRef<int>(index), &ret5), ret5);
}

// public bool Remove(Fuse.Scripting.V8.Simple.Value item) [instance] :1885
bool ValueVector::Remove(::g::Fuse::Scripting::V8::Simple::Value* item)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueVector", "Remove(Fuse.Scripting.V8.Simple.Value)");
    bool ret4;
    return (::g::Uno::Collections::List__Remove_fn(uPtr(_list), item, &ret4), ret4);
}

// public void RemoveAt(int index) [instance] :1923
void ValueVector::RemoveAt(int index)
{
    uStackFrame __("Fuse.Scripting.V8.Simple.ValueVector", "RemoveAt(int)");
    uPtr(_list)->RemoveAt(index);
}

// public ValueVector New() [static] :1864
ValueVector* ValueVector::New1()
{
    ValueVector* obj1 = (ValueVector*)uNew(ValueVector_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
