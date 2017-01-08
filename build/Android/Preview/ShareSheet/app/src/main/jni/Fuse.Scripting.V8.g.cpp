// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IThreadWorker.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Fuse.Scripting.V8.Array.h>
#include <Fuse.Scripting.V8.ArrayHandle.h>
#include <Fuse.Scripting.V8.Context.h>
#include <Fuse.Scripting.V8.Debugger.Connected.h>
#include <Fuse.Scripting.V8.Debugger.ConnectedMessageHandler.h>
#include <Fuse.Scripting.V8.Debugger.Connecting.h>
#include <Fuse.Scripting.V8.Debugger.h>
#include <Fuse.Scripting.V8.Debugger.State.h>
#include <Fuse.Scripting.V8.Function.h>
#include <Fuse.Scripting.V8.Handle.h>
#include <Fuse.Scripting.V8.Marshaller.CallbackWrapper.h>
#include <Fuse.Scripting.V8.Marshaller.h>
#include <Fuse.Scripting.V8.Object.h>
#include <Fuse.Scripting.V8.Simple.Array.h>
#include <Fuse.Scripting.V8.Simple.Bool.h>
#include <Fuse.Scripting.V8.Simple.Context.h>
#include <Fuse.Scripting.V8.Simple.DelegateCallback.h>
#include <Fuse.Scripting.V8.Simple.DelegateExternalFreer.h>
#include <Fuse.Scripting.V8.Simple.DelegateMessageHandler.h>
#include <Fuse.Scripting.V8.Simple.DelegateScriptExceptionHandler.h>
#include <Fuse.Scripting.V8.Simple.DllDirectory.h>
#include <Fuse.Scripting.V8.Simple.Double.h>
#include <Fuse.Scripting.V8.Simple.External.h>
#include <Fuse.Scripting.V8.Simple.ExternalFreer.h>
#include <Fuse.Scripting.V8.Simple.Function.h>
#include <Fuse.Scripting.V8.Simple.Int.h>
#include <Fuse.Scripting.V8.Simple.MessageHandler.h>
#include <Fuse.Scripting.V8.Simple.Object.h>
#include <Fuse.Scripting.V8.Simple.ScriptException.h>
#include <Fuse.Scripting.V8.Simple.ScriptExceptionHandler.h>
#include <Fuse.Scripting.V8.Simple.String.h>
#include <Fuse.Scripting.V8.Simple.Type.h>
#include <Fuse.Scripting.V8.Simple.UniqueValueVector.h>
#include <Fuse.Scripting.V8.Simple.Value.h>
#include <Fuse.Scripting.V8.Simple.ValueVector.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Func-2.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.StreamReader.h>
#include <Uno.IO.StreamWriter.h>
#include <Uno.IO.TextReader.h>
#include <Uno.IO.TextWriter.h>
#include <Uno.Net.EndPoint.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.Net.Sockets.AddressFamily.h>
#include <Uno.Net.Sockets.NetworkStream.h>
#include <Uno.Net.Sockets.ProtocolType.h>
#include <Uno.Net.Sockets.Socket.h>
#include <Uno.Net.Sockets.SocketShutdown.h>
#include <Uno.Net.Sockets.SocketType.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Type.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[31];
static uType* TYPES[35];

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class Array :8
// {
static void Array_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IArray_typeof(), offsetof(::g::Fuse::Scripting::Array_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Simple::Array_typeof(), offsetof(::g::Fuse::Scripting::V8::Array, _array), 0,
        ::g::Fuse::Scripting::V8::Context_typeof(), offsetof(::g::Fuse::Scripting::V8::Array, _context), uFieldFlagsWeak);
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
    type = (::g::Fuse::Scripting::Array_type*)uClassType::New("Fuse.Scripting.V8.Array", options);
    type->fp_build_ = Array_build;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Array*, ::g::Fuse::Scripting::Array*, bool*))Array__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Array__GetHashCode_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Array*, int*, uObject**))Array__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Array*, int*, uObject*))Array__set_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Scripting::Array*, int*))Array__get_Length_fn;
    type->interface0.fp_get_Length = (void(*)(uObject*, int*))Array__get_Length_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uObject**))Array__get_Item_fn;
    return type;
}

// public Array(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.Array array) :14
void Array__ctor_1_fn(Array* __this, ::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Array* array)
{
    __this->ctor_1(context, array);
}

// public override sealed bool Equals(Fuse.Scripting.Array a) :40
void Array__Equals2_fn(Array* __this, ::g::Fuse::Scripting::Array* a, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Array", "Equals(Fuse.Scripting.Array)");
    Array* that = uAs<Array*>(a, __this->__type);
    return *__retval = (that != NULL) && uPtr(__this->_array)->Equals2(uPtr(that)->_array), void();
}

// public override sealed int GetHashCode() :46
void Array__GetHashCode_fn(Array* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Array", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_array)), void();
}

// public override sealed object get_Item(int index) :22
void Array__get_Item_fn(Array* __this, int* index, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Array", "get_Item(int)");
    int index_ = *index;
    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::Wrap(__this->_context, uPtr(__this->_array)->Get(index_)), void();
}

// public override sealed void set_Item(int index, object value) :26
void Array__set_Item_fn(Array* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Scripting.V8.Array", "set_Item(int,object)");
    int index_ = *index;
    uPtr(__this->_array)->Set(index_, ::g::Fuse::Scripting::V8::Marshaller::Unwrap(__this->_context, value));
}

// public override sealed int get_Length() :34
void Array__get_Length_fn(Array* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Array", "get_Length()");
    return *__retval = uPtr(__this->_array)->Length(), void();
}

// public Array New(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.Array array) :14
void Array__New1_fn(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Array* array, Array** __retval)
{
    *__retval = Array::New1(context, array);
}

// public Array(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.Array array) [instance] :14
void Array::ctor_1(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Array* array)
{
    ctor_();
    _context = context;
    _array = array;
}

// public Array New(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.Array array) [static] :14
Array* Array::New1(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Array* array)
{
    Array* obj1 = (Array*)uNew(Array_typeof());
    obj1->ctor_1(context, array);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class ArrayHandle :758
// {
static void ArrayHandle_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(::g::Fuse::Scripting::V8::ArrayHandle, Array), 0);
}

uType* ArrayHandle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ArrayHandle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.V8.ArrayHandle", options);
    type->fp_build_ = ArrayHandle_build;
    return type;
}

// public ArrayHandle(byte[] array) :763
void ArrayHandle__ctor__fn(ArrayHandle* __this, uArray* array)
{
    __this->ctor_(array);
}

// public static byte[] CopyToArray(Uno.IntPtr ptr, int length) :790
void ArrayHandle__CopyToArray_fn(void** ptr, int* length, uArray** __retval)
{
    *__retval = ArrayHandle::CopyToArray(*ptr, *length);
}

// public Uno.IntPtr GetIntPtr() :778
void ArrayHandle__GetIntPtr_fn(ArrayHandle* __this, void** __retval)
{
    *__retval = __this->GetIntPtr();
}

// public ArrayHandle New(byte[] array) :763
void ArrayHandle__New1_fn(uArray* array, ArrayHandle** __retval)
{
    *__retval = ArrayHandle::New1(array);
}

// public ArrayHandle(byte[] array) [instance] :763
void ArrayHandle::ctor_(uArray* array)
{
    Array = array;
}

// public Uno.IntPtr GetIntPtr() [instance] :778
void* ArrayHandle::GetIntPtr()
{
    return Array->Ptr();
}

// public static byte[] CopyToArray(Uno.IntPtr ptr, int length) [static] :790
uArray* ArrayHandle::CopyToArray(void* ptr, int length)
{
    return uArray::New(::g::Uno::Byte_typeof()->Array(), length, ptr);
}

// public ArrayHandle New(byte[] array) [static] :763
ArrayHandle* ArrayHandle::New1(uArray* array)
{
    ArrayHandle* obj1 = (ArrayHandle*)uNew(ArrayHandle_typeof());
    obj1->ctor_(array);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// private sealed class Marshaller.CallbackWrapper :257
// {
static void Marshaller__CallbackWrapper_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Exception_typeof();
    ::TYPES[1] = uObject_typeof()->Array();
    type->SetFields(0,
        ::g::Fuse::Scripting::Callback_typeof(), offsetof(::g::Fuse::Scripting::V8::Marshaller__CallbackWrapper, _callback), 0,
        ::g::Fuse::Scripting::V8::Context_typeof(), offsetof(::g::Fuse::Scripting::V8::Marshaller__CallbackWrapper, _context), 0);
}

uType* Marshaller__CallbackWrapper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Marshaller__CallbackWrapper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.V8.Marshaller.CallbackWrapper", options);
    type->fp_build_ = Marshaller__CallbackWrapper_build;
    return type;
}

// public CallbackWrapper(Fuse.Scripting.V8.Context context, Fuse.Scripting.Callback callback) :262
void Marshaller__CallbackWrapper__ctor__fn(Marshaller__CallbackWrapper* __this, ::g::Fuse::Scripting::V8::Context* context, uDelegate* callback)
{
    __this->ctor_(context, callback);
}

// public Fuse.Scripting.V8.Simple.Value Call(Fuse.Scripting.V8.Simple.UniqueValueVector args) :268
void Marshaller__CallbackWrapper__Call_fn(Marshaller__CallbackWrapper* __this, ::g::Fuse::Scripting::V8::Simple::UniqueValueVector* args, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    *__retval = __this->Call(args);
}

// public CallbackWrapper New(Fuse.Scripting.V8.Context context, Fuse.Scripting.Callback callback) :262
void Marshaller__CallbackWrapper__New1_fn(::g::Fuse::Scripting::V8::Context* context, uDelegate* callback, Marshaller__CallbackWrapper** __retval)
{
    *__retval = Marshaller__CallbackWrapper::New1(context, callback);
}

// public CallbackWrapper(Fuse.Scripting.V8.Context context, Fuse.Scripting.Callback callback) [instance] :262
void Marshaller__CallbackWrapper::ctor_(::g::Fuse::Scripting::V8::Context* context, uDelegate* callback)
{
    _context = context;
    _callback = callback;
}

// public Fuse.Scripting.V8.Simple.Value Call(Fuse.Scripting.V8.Simple.UniqueValueVector args) [instance] :268
::g::Fuse::Scripting::V8::Simple::Value* Marshaller__CallbackWrapper::Call(::g::Fuse::Scripting::V8::Simple::UniqueValueVector* args)
{
    uStackFrame __("Fuse.Scripting.V8.Marshaller.CallbackWrapper", "Call(Fuse.Scripting.V8.Simple.UniqueValueVector)");

    try
    {
        return ::g::Fuse::Scripting::V8::Marshaller::Unwrap(_context, uPtr(_callback)->Invoke(1, (uArray*)::g::Fuse::Scripting::V8::Marshaller::WrapUniqueValueVector(_context, args)));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::Scripting::V8::Simple::Value* jsException = ::g::Fuse::Scripting::V8::Marshaller::Unwrap(_context, uPtr(uPtr(_context)->_errorFactory)->Call(uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, (uString*)uPtr(e)->Message(), (::g::Fuse::Scripting::External*)::g::Fuse::Scripting::External::New1(e))));
        return ::g::Fuse::Scripting::V8::Simple::Context::ThrowException(jsException);
    }
}

// public CallbackWrapper New(Fuse.Scripting.V8.Context context, Fuse.Scripting.Callback callback) [static] :262
Marshaller__CallbackWrapper* Marshaller__CallbackWrapper::New1(::g::Fuse::Scripting::V8::Context* context, uDelegate* callback)
{
    Marshaller__CallbackWrapper* obj1 = (Marshaller__CallbackWrapper*)uNew(Marshaller__CallbackWrapper_typeof());
    obj1->ctor_(context, callback);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// private sealed class Debugger.Connected :562
// {
static void Debugger__Connected_build(uType* type)
{
    ::STRINGS[0] = uString::Const("DEBUG_V8: Connection to a debugger agent established.");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno");
    ::STRINGS[2] = uString::Const("Debugger could not read enough");
    ::TYPES[0] = ::g::Uno::Exception_typeof();
    ::TYPES[2] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::V8::Debugger__State_typeof(), offsetof(Debugger__Connected_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Debugger_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Connected, _parent), 0,
        ::g::Uno::IO::TextReader_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Connected, _reader), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Connected, _reconnect), 0,
        ::g::Uno::Net::Sockets::Socket_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Connected, _socket), 0);
}

Debugger__Connected_type* Debugger__Connected_typeof()
{
    static uSStrong<Debugger__Connected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Debugger__Connected);
    options.TypeSize = sizeof(Debugger__Connected_type);
    type = (Debugger__Connected_type*)uClassType::New("Fuse.Scripting.V8.Debugger.Connected", options);
    type->fp_build_ = Debugger__Connected_build;
    type->interface0.fp_Run = (void(*)(uObject*, uObject**))Debugger__Connected__Run_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Debugger__Connected__Dispose_fn;
    return type;
}

// public Connected(Fuse.Scripting.V8.Debugger parent, Uno.Net.Sockets.Socket socket, Uno.IO.TextReader reader) :569
void Debugger__Connected__ctor__fn(Debugger__Connected* __this, ::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::Net::Sockets::Socket* socket, ::g::Uno::IO::TextReader* reader)
{
    __this->ctor_(parent, socket, reader);
}

// public void Dispose() :649
void Debugger__Connected__Dispose_fn(Debugger__Connected* __this)
{
    __this->Dispose();
}

// public Connected New(Fuse.Scripting.V8.Debugger parent, Uno.Net.Sockets.Socket socket, Uno.IO.TextReader reader) :569
void Debugger__Connected__New1_fn(::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::Net::Sockets::Socket* socket, ::g::Uno::IO::TextReader* reader, Debugger__Connected** __retval)
{
    *__retval = Debugger__Connected::New1(parent, socket, reader);
}

// private bool ReadExactly(char[] buffer, int start, int count) :577
void Debugger__Connected__ReadExactly_fn(Debugger__Connected* __this, uArray* buffer, int* start, int* count, bool* __retval)
{
    *__retval = __this->ReadExactly(buffer, *start, *count);
}

// public void Reconnect() :644
void Debugger__Connected__Reconnect_fn(Debugger__Connected* __this)
{
    __this->Reconnect();
}

// public Fuse.Scripting.V8.Debugger.State Run() :596
void Debugger__Connected__Run_fn(Debugger__Connected* __this, uObject** __retval)
{
    *__retval = __this->Run();
}

// public Connected(Fuse.Scripting.V8.Debugger parent, Uno.Net.Sockets.Socket socket, Uno.IO.TextReader reader) [instance] :569
void Debugger__Connected::ctor_(::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::Net::Sockets::Socket* socket, ::g::Uno::IO::TextReader* reader)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.Connected", ".ctor(Fuse.Scripting.V8.Debugger,Uno.Net.Sockets.Socket,Uno.IO.TextReader)");
    ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[0/*"DEBUG_V8: C...*/], 1, ::STRINGS[1/*"/Users/most...*/], 571);
    _parent = parent;
    _socket = socket;
    _reader = reader;
}

// public void Dispose() [instance] :649
void Debugger__Connected::Dispose()
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.Connected", "Dispose()");
    uPtr(_reader)->Dispose();

    try
    {
        uPtr(_socket)->Shutdown(2);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
    }

    uPtr(_socket)->Close();
}

// private bool ReadExactly(char[] buffer, int start, int count) [instance] :577
bool Debugger__Connected::ReadExactly(uArray* buffer, int start, int count)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.Connected", "ReadExactly(char[],int,int)");

    if (count == 0)
        return true;

    int read = 0;

    do
    {
        read = uPtr(_reader)->Read1(buffer, start, count);
        start = start + read;
        count = count - read;
    }
    while ((read > 0) && (count > 0));

    return count == 0;
}

// public void Reconnect() [instance] :644
void Debugger__Connected::Reconnect()
{
    _reconnect = true;
}

// public Fuse.Scripting.V8.Debugger.State Run() [instance] :596
uObject* Debugger__Connected::Run()
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.Connected", "Run()");

    if (_reconnect)
    {
        Dispose();
        ::g::Uno::Threading::Thread::Sleep(500);
        return ::g::Fuse::Scripting::V8::Debugger::Connect(_parent);
    }

    try
    {
        uString* line = uPtr(_reader)->ReadLine();
        int i = ::g::Uno::String::op_Equality(line, NULL) ? -1 : ::g::Uno::String::IndexOf1(uPtr(line), ::g::Fuse::Scripting::V8::Debugger::_contentLengthString(), 0);

        if (i >= 0)
        {
            int contentLength = ::g::Uno::Int::Parse(::g::Uno::String::Substring(uPtr(line), i + uPtr(::g::Fuse::Scripting::V8::Debugger::_contentLengthString())->Length()));

            if (contentLength > 0)
            {
                uPtr(_reader)->ReadLine();
                uArray* buffer = uArray::New(::TYPES[2/*char[]*/], contentLength);

                if (!ReadExactly(buffer, 0, contentLength))
                    U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"Debugger co...*/]));

                uString* message = uString::CharArray(buffer);
                ::g::Fuse::Scripting::V8::Simple::Context::SendDebugCommand(::g::Fuse::Scripting::V8::Simple::String::New5(message));
                ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(_parent)->_dispatcher), ::TYPES[3/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)::g::Fuse::Scripting::V8::Simple::Context__ProcessDebugMessages_fn));
            }
        }
        else
        {
            if (::g::Uno::String::IsNullOrEmpty(line))
                Reconnect();
            else
                ::g::Uno::Threading::Thread::Sleep(10);
        }
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        Reconnect();
    }

    return (uObject*)this;
}

// public Connected New(Fuse.Scripting.V8.Debugger parent, Uno.Net.Sockets.Socket socket, Uno.IO.TextReader reader) [static] :569
Debugger__Connected* Debugger__Connected::New1(::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::Net::Sockets::Socket* socket, ::g::Uno::IO::TextReader* reader)
{
    Debugger__Connected* obj1 = (Debugger__Connected*)uNew(Debugger__Connected_typeof());
    obj1->ctor_(parent, socket, reader);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// private sealed class Debugger.ConnectedMessageHandler :536
// {
static void Debugger__ConnectedMessageHandler_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Exception_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Debugger__Connected_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__ConnectedMessageHandler, _state), 0,
        ::g::Uno::IO::TextWriter_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__ConnectedMessageHandler, _writer), 0);
}

uType* Debugger__ConnectedMessageHandler_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Debugger__ConnectedMessageHandler);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.V8.Debugger.ConnectedMessageHandler", options);
    type->fp_build_ = Debugger__ConnectedMessageHandler_build;
    return type;
}

// public ConnectedMessageHandler(Fuse.Scripting.V8.Debugger.Connected state, Uno.IO.TextWriter writer) :541
void Debugger__ConnectedMessageHandler__ctor__fn(Debugger__ConnectedMessageHandler* __this, ::g::Fuse::Scripting::V8::Debugger__Connected* state, ::g::Uno::IO::TextWriter* writer)
{
    __this->ctor_(state, writer);
}

// public void MessageHandler(string message) :547
void Debugger__ConnectedMessageHandler__MessageHandler_fn(Debugger__ConnectedMessageHandler* __this, uString* message)
{
    __this->MessageHandler(message);
}

// public ConnectedMessageHandler New(Fuse.Scripting.V8.Debugger.Connected state, Uno.IO.TextWriter writer) :541
void Debugger__ConnectedMessageHandler__New1_fn(::g::Fuse::Scripting::V8::Debugger__Connected* state, ::g::Uno::IO::TextWriter* writer, Debugger__ConnectedMessageHandler** __retval)
{
    *__retval = Debugger__ConnectedMessageHandler::New1(state, writer);
}

// public ConnectedMessageHandler(Fuse.Scripting.V8.Debugger.Connected state, Uno.IO.TextWriter writer) [instance] :541
void Debugger__ConnectedMessageHandler::ctor_(::g::Fuse::Scripting::V8::Debugger__Connected* state, ::g::Uno::IO::TextWriter* writer)
{
    _state = state;
    _writer = writer;
}

// public void MessageHandler(string message) [instance] :547
void Debugger__ConnectedMessageHandler::MessageHandler(uString* message)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.ConnectedMessageHandler", "MessageHandler(string)");

    try
    {
        uPtr(_writer)->Write9(::g::Fuse::Scripting::V8::Debugger::AddHeader(message));
        uPtr(_writer)->Flush();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        uPtr(_state)->Reconnect();
    }
}

// public ConnectedMessageHandler New(Fuse.Scripting.V8.Debugger.Connected state, Uno.IO.TextWriter writer) [static] :541
Debugger__ConnectedMessageHandler* Debugger__ConnectedMessageHandler::New1(::g::Fuse::Scripting::V8::Debugger__Connected* state, ::g::Uno::IO::TextWriter* writer)
{
    Debugger__ConnectedMessageHandler* obj1 = (Debugger__ConnectedMessageHandler*)uNew(Debugger__ConnectedMessageHandler_typeof());
    obj1->ctor_(state, writer);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// private sealed class Debugger.Connecting :464
// {
static void Debugger__Connecting_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Exception_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::V8::Debugger__State_typeof(), offsetof(Debugger__Connecting_type, interface0));
    type->SetFields(0,
        ::g::Uno::Net::Sockets::Socket_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Connecting, _listenSocket), 0,
        ::g::Fuse::Scripting::V8::Debugger_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger__Connecting, _parent), 0);
}

Debugger__Connecting_type* Debugger__Connecting_typeof()
{
    static uSStrong<Debugger__Connecting_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Debugger__Connecting);
    options.TypeSize = sizeof(Debugger__Connecting_type);
    type = (Debugger__Connecting_type*)uClassType::New("Fuse.Scripting.V8.Debugger.Connecting", options);
    type->fp_build_ = Debugger__Connecting_build;
    type->interface0.fp_Run = (void(*)(uObject*, uObject**))Debugger__Connecting__Run_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Debugger__Connecting__Dispose_fn;
    return type;
}

// public Connecting(Fuse.Scripting.V8.Debugger parent) :469
void Debugger__Connecting__ctor__fn(Debugger__Connecting* __this, ::g::Fuse::Scripting::V8::Debugger* parent)
{
    __this->ctor_(parent);
}

// public void Dispose() :494
void Debugger__Connecting__Dispose_fn(Debugger__Connecting* __this)
{
    __this->Dispose();
}

// public Connecting New(Fuse.Scripting.V8.Debugger parent) :469
void Debugger__Connecting__New1_fn(::g::Fuse::Scripting::V8::Debugger* parent, Debugger__Connecting** __retval)
{
    *__retval = Debugger__Connecting::New1(parent);
}

// public Fuse.Scripting.V8.Debugger.State Run() :474
void Debugger__Connecting__Run_fn(Debugger__Connecting* __this, uObject** __retval)
{
    *__retval = __this->Run();
}

// public Connecting(Fuse.Scripting.V8.Debugger parent) [instance] :469
void Debugger__Connecting::ctor_(::g::Fuse::Scripting::V8::Debugger* parent)
{
    _parent = parent;
}

// public void Dispose() [instance] :494
void Debugger__Connecting::Dispose()
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.Connecting", "Dispose()");

    if (_listenSocket != NULL)
    {
        try
        {
            uPtr(_listenSocket)->Shutdown(2);
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
        }

        uPtr(_listenSocket)->Close();
        _listenSocket = NULL;
    }
}

// public Fuse.Scripting.V8.Debugger.State Run() [instance] :474
uObject* Debugger__Connecting::Run()
{
    uStackFrame __("Fuse.Scripting.V8.Debugger.Connecting", "Run()");

    try
    {
        _listenSocket = ::g::Uno::Net::Sockets::Socket::New1(2, 1, 6);
        ::g::Uno::Net::IPEndPoint* endPoint = ::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Any(), uPtr(_parent)->_port);
        uPtr(_listenSocket)->Bind(endPoint);
        uPtr(_listenSocket)->Listen(100);
        ::g::Uno::Net::Sockets::Socket* communicationSocket = uPtr(_listenSocket)->Accept();
        Dispose();
        return ::g::Fuse::Scripting::V8::Debugger::ToConnected(_parent, communicationSocket);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        Dispose();
        ::g::Uno::Threading::Thread::Sleep(500);
        return (uObject*)this;
    }
}

// public Connecting New(Fuse.Scripting.V8.Debugger parent) [static] :469
Debugger__Connecting* Debugger__Connecting::New1(::g::Fuse::Scripting::V8::Debugger* parent)
{
    Debugger__Connecting* obj1 = (Debugger__Connecting*)uNew(Debugger__Connecting_typeof());
    obj1->ctor_(parent);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// public sealed extern class Context :64
// {
// static Context() :74
static void Context__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::V8::Simple::DllDirectory::SetTargetSpecific();
}

static void Context_build(uType* type)
{
    ::STRINGS[3] = uString::Const("(Error Handler)");
    ::STRINGS[4] = uString::Const("(function(message, unoException) { var result = new Error(message); result.__unoException = unoException; return result; })");
    ::STRINGS[5] = uString::Const("toString");
    ::STRINGS[6] = uString::Const("__unoException");
    ::STRINGS[7] = uString::Const("");
    ::STRINGS[8] = uString::Const("[Uno code]\n"
        "");
    ::STRINGS[9] = uString::Const("\n"
        "[JavaScript code]\n"
        "");
    ::STRINGS[10] = uString::Const("\n"
        "");
    ::TYPES[5] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::ScriptException_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::IntPtr_typeof(), NULL);
    ::TYPES[8] = ::g::Fuse::Scripting::V8::Function_typeof();
    ::TYPES[9] = ::g::Fuse::Scripting::V8::Object_typeof();
    ::TYPES[10] = ::g::Uno::String_typeof();
    ::TYPES[1] = uObject_typeof()->Array();
    ::TYPES[11] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[0] = ::g::Uno::Exception_typeof();
    ::TYPES[12] = ::g::Fuse::Scripting::ScriptException_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Context_type, interface0));
    type->SetFields(14,
        ::g::Fuse::Scripting::V8::Simple::Context_typeof(), offsetof(::g::Fuse::Scripting::V8::Context, _context), 0,
        ::TYPES[8/*Fuse.Scripting.V8.Function*/], offsetof(::g::Fuse::Scripting::V8::Context, _errorFactory), 0,
        ::g::Fuse::Scripting::V8::Simple::ExternalFreer_typeof(), offsetof(::g::Fuse::Scripting::V8::Context, _externalFreer), 0,
        ::g::Fuse::Scripting::V8::Simple::MessageHandler_typeof(), offsetof(::g::Fuse::Scripting::V8::Context, _runtimeExceptionHandler), 0,
        ::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler_typeof(), offsetof(::g::Fuse::Scripting::V8::Context, _scriptExceptionHandler), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Context__New1_fn, 0, true, type, 1, ::g::Fuse::Scripting::IThreadWorker_typeof()));
}

::g::Fuse::Scripting::Context_type* Context_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Context_typeof();
    options.FieldCount = 19;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Context_type);
    type = (::g::Fuse::Scripting::Context_type*)uClassType::New("Fuse.Scripting.V8.Context", options);
    type->fp_build_ = Context_build;
    type->fp_cctor_ = Context__cctor_1_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Scripting::Context*))Context__Dispose_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Context*, uString*, uString*, uObject**))Context__Evaluate_fn;
    type->fp_get_GlobalObject = (void(*)(::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::Object**))Context__get_GlobalObject_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Context__Dispose_fn;
    return type;
}

// public Context(Fuse.Scripting.IThreadWorker worker) :79
void Context__ctor_1_fn(Context* __this, uObject* worker)
{
    __this->ctor_1(worker);
}

// public override sealed void Dispose() :173
void Context__Dispose_fn(Context* __this)
{
    uStackFrame __("Fuse.Scripting.V8.Context", "Dispose()");
    __this->_errorFactory = NULL;
    uPtr(__this->_context)->Dispose();
}

// public override sealed object Evaluate(string fileName, string code) :160
void Context__Evaluate_fn(Context* __this, uString* fileName, uString* code, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Context", "Evaluate(string,string)");
    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::Wrap(__this, uPtr(__this->_context)->Evaluate(::g::Fuse::Scripting::V8::Simple::String::New5(fileName), ::g::Fuse::Scripting::V8::Simple::String::New5(code))), void();
}

// public override sealed Fuse.Scripting.Object get_GlobalObject() :167
void Context__get_GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Context", "get_GlobalObject()");
    return *__retval = ::g::Fuse::Scripting::V8::Object::New2(__this, uPtr(__this->_context)->GlobalObject()), void();
}

// public Context New(Fuse.Scripting.IThreadWorker worker) :79
void Context__New1_fn(uObject* worker, Context** __retval)
{
    *__retval = Context::New1(worker);
}

// private static void OnRuntimeException(string message) :155
void Context__OnRuntimeException_fn(uString* message)
{
    Context::OnRuntimeException(message);
}

// private void OnScriptException(Fuse.Scripting.V8.Simple.ScriptException e) :96
void Context__OnScriptException_fn(Context* __this, ::g::Fuse::Scripting::V8::Simple::ScriptException* e)
{
    __this->OnScriptException(e);
}

// public Context(Fuse.Scripting.IThreadWorker worker) [instance] :79
void Context::ctor_1(uObject* worker)
{
    uStackFrame __("Fuse.Scripting.V8.Context", ".ctor(Fuse.Scripting.IThreadWorker)");
    ctor_(worker);
    _scriptExceptionHandler = ::g::Fuse::Scripting::V8::Simple::DelegateScriptExceptionHandler::New2(uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Scripting.V8.Simple.ScriptException>*/], (void*)Context__OnScriptException_fn, this));
    _runtimeExceptionHandler = ::g::Fuse::Scripting::V8::Simple::DelegateMessageHandler::New2(uDelegate::New(::TYPES[6/*Uno.Action<string>*/], (void*)Context__OnRuntimeException_fn));
    _externalFreer = ::g::Fuse::Scripting::V8::Simple::DelegateExternalFreer::New2(uDelegate::New(::TYPES[7/*Uno.Action<Uno.IntPtr>*/], (void*)::g::Fuse::Scripting::V8::Handle__Free_fn));
    _context = ::g::Fuse::Scripting::V8::Simple::Context::New1(_scriptExceptionHandler, _runtimeExceptionHandler, _externalFreer);
    _errorFactory = uAs< ::g::Fuse::Scripting::V8::Function*>(Evaluate(::STRINGS[3/*"(Error Hand...*/], ::STRINGS[4/*"(function(m...*/]), ::TYPES[8/*Fuse.Scripting.V8.Function*/]);
}

// private void OnScriptException(Fuse.Scripting.V8.Simple.ScriptException e) [instance] :96
void Context::OnScriptException(::g::Fuse::Scripting::V8::Simple::ScriptException* e)
{
    uStackFrame __("Fuse.Scripting.V8.Context", "OnScriptException(Fuse.Scripting.V8.Simple.ScriptException)");
    ::g::Fuse::Scripting::V8::Simple::Value* jsException = uPtr(e)->GetException();
    uString* exceptionName = NULL;
    ::g::Uno::Exception* unoException = NULL;
    ::g::Fuse::Scripting::V8::Object* jsExceptionObj = uAs< ::g::Fuse::Scripting::V8::Object*>(::g::Fuse::Scripting::V8::Marshaller::Wrap(this, jsException), ::TYPES[9/*Fuse.Scripting.V8.Object*/]);

    if (jsExceptionObj != NULL)
    {
        exceptionName = uAs<uString*>(uPtr(jsExceptionObj)->CallMethod(::STRINGS[5/*"toString"*/], uArray::New(::TYPES[1/*object[]*/], 0)), ::TYPES[10/*string*/]);
        ::g::Fuse::Scripting::External* ext = uAs< ::g::Fuse::Scripting::External*>(jsExceptionObj->Item(::STRINGS[6/*"__unoExcept...*/]), ::TYPES[11/*Fuse.Scripting.External*/]);
        unoException = (ext == NULL) ? uCast< ::g::Uno::Exception*>(NULL, ::TYPES[0/*Uno.Exception*/]) : uAs< ::g::Uno::Exception*>(uPtr(ext)->Object, ::TYPES[0/*Uno.Exception*/]);
    }

    if (unoException == NULL)
        U_THROW(::g::Fuse::Scripting::ScriptException::New4(::g::Uno::String::op_Equality(exceptionName, NULL) ? ::STRINGS[7/*""*/] : exceptionName, uPtr(uPtr(e)->GetErrorMessage())->GetValue(), uPtr(uPtr(e)->GetFileName())->GetValue(), uPtr(e)->GetLineNumber(), uPtr(uPtr(e)->GetSourceLine())->GetValue(), uPtr(uPtr(e)->GetStackTrace())->GetValue()));
    else
    {
        bool unoCode = false;
        uString* stackTrace = ::STRINGS[7/*""*/];
        ::g::Fuse::Scripting::ScriptException* sex = uAs< ::g::Fuse::Scripting::ScriptException*>(unoException, ::TYPES[12/*Fuse.Scripting.ScriptException*/]);

        if ((sex != NULL) && !::g::Uno::String::IsNullOrEmpty(uPtr(sex)->JSStackTrace()))
            stackTrace = uPtr(sex)->JSStackTrace();
        else if (!::g::Uno::String::IsNullOrEmpty(uPtr(unoException)->StackTrace()))
        {
            stackTrace = ::g::Uno::String::op_Addition2(::STRINGS[8/*"[Uno code]\n"*/], uPtr(unoException)->StackTrace());
            unoCode = true;
        }

        uString* etrace = uPtr(uPtr(e)->GetStackTrace())->GetValue();

        if (!::g::Uno::String::IsNullOrEmpty(etrace))
            stackTrace = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(stackTrace, unoCode ? ::STRINGS[9/*"\n[JavaScri...*/] : ::STRINGS[10/*"\n"*/]), etrace);

        U_THROW(::g::Fuse::Scripting::ScriptException::New4(uPtr(::g::Uno::Object::GetType(uPtr(unoException)))->ToString(), uPtr(unoException)->Message(), uPtr(e->GetFileName())->GetValue(), e->GetLineNumber(), uPtr(e->GetSourceLine())->GetValue(), stackTrace));
    }
}

// public Context New(Fuse.Scripting.IThreadWorker worker) [static] :79
Context* Context::New1(uObject* worker)
{
    Context* obj1 = (Context*)uNew(Context_typeof());
    obj1->ctor_1(worker);
    return obj1;
}

// private static void OnRuntimeException(string message) [static] :155
void Context::OnRuntimeException(uString* message)
{
    uStackFrame __("Fuse.Scripting.V8.Context", "OnRuntimeException(string)");
    Context_typeof()->Init();
    U_THROW(::g::Uno::Exception::New2(message));
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class Debugger :346
// {
// static Debugger() :346
static void Debugger__cctor__fn(uType* __type)
{
    Debugger::_contentLengthString_ = ::STRINGS[11/*"Content-Len...*/];
}

static void Debugger_build(uType* type)
{
    ::STRINGS[11] = uString::Const("Content-Length: ");
    ::STRINGS[12] = uString::Const("\r\n"
        "\r\n"
        "");
    ::STRINGS[13] = uString::Const("\"threads\":[{\"current\":true,\"id\":");
    ::STRINGS[14] = uString::Const("}]");
    ::STRINGS[15] = uString::Const("\"threads\":[{\"current\":true,\"id\":1}]");
    ::STRINGS[16] = uString::Const("DEBUG_V8: Waiting for a debugger agent to connect on port ");
    ::STRINGS[17] = uString::Const("...");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno");
    ::STRINGS[18] = uString::Const("Type: connect\r\n"
        "V8-Version: ");
    ::STRINGS[19] = uString::Const("\r\n"
        "Protocol-Version: 1\r\n"
        "Embedding-Host: ");
    ::STRINGS[20] = uString::Const("Fuse.Scripting.V8");
    ::STRINGS[21] = uString::Const(" ");
    ::STRINGS[22] = uString::Const("0.42.4");
    ::STRINGS[23] = uString::Const("\r\n"
        "Content-Length: 0\r\n"
        "\r\n"
        "");
    ::TYPES[13] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[14] = Debugger__State_typeof();
    ::TYPES[15] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Debugger_type, interface0));
    type->SetFields(0,
        ::TYPES[14/*Fuse.Scripting.V8.Debugger.State*/], offsetof(::g::Fuse::Scripting::V8::Debugger, _currentState), 0,
        ::g::Fuse::Scripting::V8::Simple::MessageHandler_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger, _debugMessageHandler), 0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger, _dispatcher), 0,
        ::TYPES[6/*Uno.Action<string>*/], offsetof(::g::Fuse::Scripting::V8::Debugger, _messageHandler), 0,
        ::TYPES[13/*Uno.Collections.List<string>*/], offsetof(::g::Fuse::Scripting::V8::Debugger, _offlineMessages), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger, _port), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger, _shutdown), 0,
        ::g::Uno::Threading::Thread_typeof(), offsetof(::g::Fuse::Scripting::V8::Debugger, _stateMachine), 0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Fuse::Scripting::V8::Debugger::_contentLengthString_, uFieldFlagsStatic);
}

Debugger_type* Debugger_typeof()
{
    static uSStrong<Debugger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Debugger);
    options.TypeSize = sizeof(Debugger_type);
    type = (Debugger_type*)uClassType::New("Fuse.Scripting.V8.Debugger", options);
    type->fp_build_ = Debugger_build;
    type->fp_cctor_ = Debugger__cctor__fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Debugger__Dispose_fn;
    return type;
}

// public Debugger(Uno.Threading.IDispatcher dispatcher, int port) :359
void Debugger__ctor__fn(Debugger* __this, uObject* dispatcher, int* port)
{
    __this->ctor_(dispatcher, *port);
}

// private static string AddHeader(string body) :428
void Debugger__AddHeader_fn(uString* body, uString** __retval)
{
    *__retval = Debugger::AddHeader(body);
}

// private static Fuse.Scripting.V8.Debugger.State Connect(Fuse.Scripting.V8.Debugger parent) :416
void Debugger__Connect_fn(Debugger* parent, uObject** __retval)
{
    *__retval = Debugger::Connect(parent);
}

// private void DisconnectedMessageHandler(string message) :423
void Debugger__DisconnectedMessageHandler_fn(Debugger* __this, uString* message)
{
    __this->DisconnectedMessageHandler(message);
}

// public void Dispose() :398
void Debugger__Dispose_fn(Debugger* __this)
{
    __this->Dispose();
}

// private void MessageHandler(string message) :385
void Debugger__MessageHandler_fn(Debugger* __this, uString* message)
{
    __this->MessageHandler(message);
}

// public Debugger New(Uno.Threading.IDispatcher dispatcher, int port) :359
void Debugger__New1_fn(uObject* dispatcher, int* port, Debugger** __retval)
{
    *__retval = Debugger::New1(dispatcher, *port);
}

// private void SetMessageHandler(Uno.Action<string> handler) :393
void Debugger__SetMessageHandler_fn(Debugger* __this, uDelegate* handler)
{
    __this->SetMessageHandler(handler);
}

// private void StateMachine() :376
void Debugger__StateMachine_fn(Debugger* __this)
{
    __this->StateMachine();
}

// private static Fuse.Scripting.V8.Debugger.State ToConnected(Fuse.Scripting.V8.Debugger parent, Uno.Net.Sockets.Socket communicationSocket) :509
void Debugger__ToConnected_fn(Debugger* parent, ::g::Uno::Net::Sockets::Socket* communicationSocket, uObject** __retval)
{
    *__retval = Debugger::ToConnected(parent, communicationSocket);
}

uSStrong<uString*> Debugger::_contentLengthString_;

// public Debugger(Uno.Threading.IDispatcher dispatcher, int port) [instance] :359
void Debugger::ctor_(uObject* dispatcher, int port)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", ".ctor(Uno.Threading.IDispatcher,int)");
    _dispatcher = dispatcher;
    _port = port;
    _offlineMessages = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[13/*Uno.Collections.List<string>*/]));
    SetMessageHandler(uDelegate::New(::TYPES[6/*Uno.Action<string>*/], (void*)Debugger__DisconnectedMessageHandler_fn, this));
    _debugMessageHandler = ::g::Fuse::Scripting::V8::Simple::DelegateMessageHandler::New2(uDelegate::New(::TYPES[6/*Uno.Action<string>*/], (void*)Debugger__MessageHandler_fn, this));
    ::g::Fuse::Scripting::V8::Simple::Context::SetDebugMessageHandler(_debugMessageHandler);
    _stateMachine = ::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Debugger__StateMachine_fn, this));
    _currentState = Debugger::Connect(this);
    uPtr(_stateMachine)->Start();
}

// private void DisconnectedMessageHandler(string message) [instance] :423
void Debugger::DisconnectedMessageHandler(uString* message)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "DisconnectedMessageHandler(string)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_offlineMessages), Debugger::AddHeader(message));
}

// public void Dispose() [instance] :398
void Debugger::Dispose()
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "Dispose()");
    ::g::Fuse::Scripting::V8::Simple::Context::SetDebugMessageHandler(NULL);
    _shutdown = true;

    if (!uPtr(_stateMachine)->Join1(500))
        Debugger__State::Dispose(uInterface(uPtr(_currentState), ::TYPES[14/*Fuse.Scripting.V8.Debugger.State*/]));
}

// private void MessageHandler(string message) [instance] :385
void Debugger::MessageHandler(uString* message)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "MessageHandler(string)");

    if (::g::Uno::Delegate::op_Inequality(_messageHandler, NULL))
        uPtr(_messageHandler)->InvokeVoid(message);
}

// private void SetMessageHandler(Uno.Action<string> handler) [instance] :393
void Debugger::SetMessageHandler(uDelegate* handler)
{
    _messageHandler = handler;
}

// private void StateMachine() [instance] :376
void Debugger::StateMachine()
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "StateMachine()");

    while (!_shutdown)
        _currentState = Debugger__State::Run(uInterface(uPtr(_currentState), ::TYPES[14/*Fuse.Scripting.V8.Debugger.State*/]));

    Debugger__State::Dispose(uInterface(uPtr(_currentState), ::TYPES[14/*Fuse.Scripting.V8.Debugger.State*/]));
}

// private static string AddHeader(string body) [static] :428
uString* Debugger::AddHeader(uString* body)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "AddHeader(string)");
    Debugger_typeof()->Init();
    uString* header = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(Debugger::_contentLengthString(), uBox<int>(::TYPES[17/*int*/], uPtr(::g::Uno::Text::Utf8::GetBytes(body))->Length())), ::STRINGS[12/*"\r\n\r\n"*/]);
    uString* replacedBody = body;

    for (int i = 2; i <= 8; ++i)
        replacedBody = ::g::Uno::String::Replace1(uPtr(replacedBody), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[13/*"\"threads\"...*/], uBox<int>(::TYPES[17/*int*/], i)), ::STRINGS[14/*"}]"*/]), ::STRINGS[15/*"\"threads\"...*/]);

    return ::g::Uno::String::op_Addition2(header, replacedBody);
}

// private static Fuse.Scripting.V8.Debugger.State Connect(Fuse.Scripting.V8.Debugger parent) [static] :416
uObject* Debugger::Connect(Debugger* parent)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "Connect(Fuse.Scripting.V8.Debugger)");
    Debugger_typeof()->Init();
    uPtr(parent)->SetMessageHandler(uDelegate::New(::TYPES[6/*Uno.Action<string>*/], (void*)Debugger__DisconnectedMessageHandler_fn, uPtr(parent)));
    ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[16/*"DEBUG_V8: W...*/], uBox<int>(::TYPES[17/*int*/], parent->_port)), ::STRINGS[17/*"..."*/]), 1, ::STRINGS[1/*"/Users/most...*/], 419);
    return (uObject*)Debugger__Connecting::New1(parent);
}

// public Debugger New(Uno.Threading.IDispatcher dispatcher, int port) [static] :359
Debugger* Debugger::New1(uObject* dispatcher, int port)
{
    Debugger* obj2 = (Debugger*)uNew(Debugger_typeof());
    obj2->ctor_(dispatcher, port);
    return obj2;
}

// private static Fuse.Scripting.V8.Debugger.State ToConnected(Fuse.Scripting.V8.Debugger parent, Uno.Net.Sockets.Socket communicationSocket) [static] :509
uObject* Debugger::ToConnected(Debugger* parent, ::g::Uno::Net::Sockets::Socket* communicationSocket)
{
    uStackFrame __("Fuse.Scripting.V8.Debugger", "ToConnected(Fuse.Scripting.V8.Debugger,Uno.Net.Sockets.Socket)");
    Debugger_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret3;
    ::g::Uno::Net::Sockets::NetworkStream* stream = ::g::Uno::Net::Sockets::NetworkStream::New1(communicationSocket);
    ::g::Uno::IO::StreamReader* reader = ::g::Uno::IO::StreamReader::New1(stream);
    ::g::Uno::IO::StreamWriter* writer = ::g::Uno::IO::StreamWriter::New1(stream);
    Debugger__Connected* state = Debugger__Connected::New1(parent, communicationSocket, reader);
    uPtr(parent)->SetMessageHandler(uDelegate::New(::TYPES[6/*Uno.Action<string>*/], (void*)Debugger__ConnectedMessageHandler__MessageHandler_fn, Debugger__ConnectedMessageHandler::New1(state, writer)));
    writer->Write9(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[18/*"Type: conne...*/], ::g::Fuse::Scripting::V8::Simple::Context::GetVersion()), ::STRINGS[19/*"\r\nProtoco...*/]), ::STRINGS[20/*"Fuse.Script...*/]), ::STRINGS[21/*" "*/]), ::STRINGS[22/*"0.42.4"*/]), ::STRINGS[23/*"\r\nContent...*/]));

    for (::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(parent->_offlineMessages), &ret3), ret3); enum1.MoveNext(::TYPES[15/*Uno.Collections.List<string>.Enumerator*/]); )
    {
        uString* message = enum1.Current(::TYPES[15/*Uno.Collections.List<string>.Enumerator*/]);
        uPtr(writer)->Write9(message);
    }

    parent->_offlineMessages = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[13/*Uno.Collections.List<string>*/]));
    writer->Flush();
    return (uObject*)state;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class Function :671
// {
static void Function_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Context_typeof(), offsetof(::g::Fuse::Scripting::V8::Function, _context), uFieldFlagsWeak,
        ::g::Fuse::Scripting::V8::Simple::Function_typeof(), offsetof(::g::Fuse::Scripting::V8::Function, _function), 0);
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
    type = (::g::Fuse::Scripting::Function_type*)uClassType::New("Fuse.Scripting.V8.Function", options);
    type->fp_build_ = Function_build;
    type->fp_Call = (void(*)(::g::Fuse::Scripting::Function*, uArray*, uObject**))Function__Call_fn;
    type->fp_Construct = (void(*)(::g::Fuse::Scripting::Function*, uArray*, ::g::Fuse::Scripting::Object**))Function__Construct_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Function*, ::g::Fuse::Scripting::Function*, bool*))Function__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Function__GetHashCode_fn;
    return type;
}

// internal Function(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.Function function) :677
void Function__ctor_1_fn(Function* __this, ::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Function* function)
{
    __this->ctor_1(context, function);
}

// public override sealed object Call(object[] args) :683
void Function__Call_fn(Function* __this, uArray* args, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Function", "Call(object[])");
    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::Wrap(__this->_context, uPtr(__this->_function)->Call(::g::Fuse::Scripting::V8::Marshaller::UnwrapArray(__this->_context, args))), void();
}

// public override sealed Fuse.Scripting.Object Construct(object[] args) :688
void Function__Construct_fn(Function* __this, uArray* args, ::g::Fuse::Scripting::Object** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Function", "Construct(object[])");
    return *__retval = ::g::Fuse::Scripting::V8::Object::New2(__this->_context, uPtr(__this->_function)->Construct(::g::Fuse::Scripting::V8::Marshaller::UnwrapArray(__this->_context, args))), void();
}

// public override sealed bool Equals(Fuse.Scripting.Function f) :693
void Function__Equals2_fn(Function* __this, ::g::Fuse::Scripting::Function* f, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Function", "Equals(Fuse.Scripting.Function)");
    Function* that = uAs<Function*>(f, __this->__type);
    return *__retval = (that != NULL) && uPtr(__this->_function)->Equals2(uPtr(that)->_function), void();
}

// public override sealed int GetHashCode() :699
void Function__GetHashCode_fn(Function* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Function", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_function)), void();
}

// internal Function New(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.Function function) :677
void Function__New1_fn(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Function* function, Function** __retval)
{
    *__retval = Function::New1(context, function);
}

// internal Function(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.Function function) [instance] :677
void Function::ctor_1(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Function* function)
{
    ctor_();
    _context = context;
    _function = function;
}

// internal Function New(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.Function function) [static] :677
Function* Function::New1(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Function* function)
{
    Function* obj1 = (Function*)uNew(Function_typeof());
    obj1->ctor_1(context, function);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal static extern class Handle :714
// {
static void Handle_build(uType* type)
{
}

uClassType* Handle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Handle", options);
    type->fp_build_ = Handle_build;
    return type;
}

// public static Uno.IntPtr Create(object o) :716
void Handle__Create_fn(uObject* o, void** __retval)
{
    *__retval = Handle::Create(o);
}

// public static void Free(Uno.IntPtr handle) :731
void Handle__Free_fn(void** handle)
{
    Handle::Free(*handle);
}

// public static object Target(Uno.IntPtr handle) :745
void Handle__Target_fn(void** handle, uObject** __retval)
{
    *__retval = Handle::Target(*handle);
}

// public static Uno.IntPtr Create(object o) [static] :716
void* Handle::Create(uObject* o)
{
    uRetain(o);
    return (void*)o;
}

// public static void Free(Uno.IntPtr handle) [static] :731
void Handle::Free(void* handle)
{
    uRelease((uObject*)handle);
}

// public static object Target(Uno.IntPtr handle) [static] :745
uObject* Handle::Target(void* handle)
{
    return (uObject*) handle;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal static extern class Marshaller :184
// {
static void Marshaller_build(uType* type)
{
    ::STRINGS[24] = uString::Const("__unoHandle");
    ::STRINGS[25] = uString::Const("byteLength");
    ::STRINGS[26] = uString::Const("V8: Unable to get data from ArrayBuffer");
    ::STRINGS[27] = uString::Const("Context.NewArrayBuffer failed");
    ::STRINGS[28] = uString::Const("Unhandled type in V8 marshaller: ");
    ::STRINGS[29] = uString::Const(":");
    ::STRINGS[30] = uString::Const("V8 marshaller: The impossible happened.");
    ::TYPES[11] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[16] = ::g::Fuse::Scripting::V8::ArrayHandle_typeof();
    ::TYPES[17] = ::g::Uno::Int_typeof();
    ::TYPES[18] = ::g::Uno::Double_typeof();
    ::TYPES[19] = ::g::Uno::Float_typeof();
    ::TYPES[10] = ::g::Uno::String_typeof();
    ::TYPES[20] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[21] = ::g::Uno::Bool_typeof();
    ::TYPES[22] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[9] = ::g::Fuse::Scripting::V8::Object_typeof();
    ::TYPES[23] = ::g::Fuse::Scripting::V8::Array_typeof();
    ::TYPES[8] = ::g::Fuse::Scripting::V8::Function_typeof();
    ::TYPES[24] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[25] = ::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Scripting::V8::Simple::UniqueValueVector_typeof(), ::g::Fuse::Scripting::V8::Simple::Value_typeof(), NULL);
    ::TYPES[26] = ::g::Fuse::Scripting::V8::Simple::Int_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::V8::Simple::Double_typeof();
    ::TYPES[28] = ::g::Fuse::Scripting::V8::Simple::String_typeof();
    ::TYPES[29] = ::g::Fuse::Scripting::V8::Simple::Bool_typeof();
    ::TYPES[30] = ::g::Fuse::Scripting::V8::Simple::Object_typeof();
    ::TYPES[31] = ::g::Fuse::Scripting::V8::Simple::Array_typeof();
    ::TYPES[32] = ::g::Fuse::Scripting::V8::Simple::Function_typeof();
    ::TYPES[33] = ::g::Fuse::Scripting::V8::Simple::External_typeof();
    ::TYPES[1] = uObject_typeof()->Array();
}

uClassType* Marshaller_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Marshaller", options);
    type->fp_build_ = Marshaller_build;
    return type;
}

// internal static byte[] GetArrayBufferData(Fuse.Scripting.V8.Object o) :226
void Marshaller__GetArrayBufferData_fn(::g::Fuse::Scripting::V8::Object* o, uArray** __retval)
{
    *__retval = Marshaller::GetArrayBufferData(o);
}

// private static Fuse.Scripting.V8.Simple.Value NewArrayBuffer(Fuse.Scripting.V8.Context context, byte[] data) :284
void Marshaller__NewArrayBuffer_fn(::g::Fuse::Scripting::V8::Context* context, uArray* data, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    *__retval = Marshaller::NewArrayBuffer(context, data);
}

// private static int ToInt(object o) :250
void Marshaller__ToInt_fn(uObject* o, int* __retval)
{
    *__retval = Marshaller::ToInt(o);
}

// internal static Fuse.Scripting.V8.Simple.Value Unwrap(Fuse.Scripting.V8.Context context, object obj) :208
void Marshaller__Unwrap_fn(::g::Fuse::Scripting::V8::Context* context, uObject* obj, ::g::Fuse::Scripting::V8::Simple::Value** __retval)
{
    *__retval = Marshaller::Unwrap(context, obj);
}

// internal static Fuse.Scripting.V8.Simple.ValueVector UnwrapArray(Fuse.Scripting.V8.Context context, object[] objs) :297
void Marshaller__UnwrapArray_fn(::g::Fuse::Scripting::V8::Context* context, uArray* objs, ::g::Fuse::Scripting::V8::Simple::ValueVector** __retval)
{
    *__retval = Marshaller::UnwrapArray(context, objs);
}

// internal static object Wrap(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.Value obj) :186
void Marshaller__Wrap_fn(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Value* obj, uObject** __retval)
{
    *__retval = Marshaller::Wrap(context, obj);
}

// private static object[] WrapUniqueValueVector(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.UniqueValueVector vec) :318
void Marshaller__WrapUniqueValueVector_fn(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::UniqueValueVector* vec, uArray** __retval)
{
    *__retval = Marshaller::WrapUniqueValueVector(context, vec);
}

// internal static byte[] GetArrayBufferData(Fuse.Scripting.V8.Object o) [static] :226
uArray* Marshaller::GetArrayBufferData(::g::Fuse::Scripting::V8::Object* o)
{
    uStackFrame __("Fuse.Scripting.V8.Marshaller", "GetArrayBufferData(Fuse.Scripting.V8.Object)");
    void* ptr = uPtr(uPtr(o)->_object)->GetArrayBufferData();

    if (::g::Uno::IntPtr::op_Equality(ptr, ::g::Uno::IntPtr::Zero_))
        return NULL;

    if (o->ContainsKey(::STRINGS[24/*"__unoHandle"*/]))
    {
        ::g::Fuse::Scripting::External* ext = uAs< ::g::Fuse::Scripting::External*>(uPtr(o)->Item(::STRINGS[24/*"__unoHandle"*/]), ::TYPES[11/*Fuse.Scripting.External*/]);
        ::g::Fuse::Scripting::V8::ArrayHandle* handle = (ext == NULL) ? uCast< ::g::Fuse::Scripting::V8::ArrayHandle*>(NULL, ::TYPES[16/*Fuse.Scripting.V8.ArrayHandle*/]) : uAs< ::g::Fuse::Scripting::V8::ArrayHandle*>(uPtr(ext)->Object, ::TYPES[16/*Fuse.Scripting.V8.ArrayHandle*/]);

        if (handle != NULL)
            return uPtr(handle)->Array;
    }

    if (o->ContainsKey(::STRINGS[25/*"byteLength"*/]))
    {
        int len = Marshaller::ToInt(uPtr(o)->Item(::STRINGS[25/*"byteLength"*/]));
        return ::g::Fuse::Scripting::V8::ArrayHandle::CopyToArray(ptr, len);
    }

    U_THROW(::g::Uno::Exception::New2(::STRINGS[26/*"V8: Unable ...*/]));
}

// private static Fuse.Scripting.V8.Simple.Value NewArrayBuffer(Fuse.Scripting.V8.Context context, byte[] data) [static] :284
::g::Fuse::Scripting::V8::Simple::Value* Marshaller::NewArrayBuffer(::g::Fuse::Scripting::V8::Context* context, uArray* data)
{
    uStackFrame __("Fuse.Scripting.V8.Marshaller", "NewArrayBuffer(Fuse.Scripting.V8.Context,byte[])");
    ::g::Fuse::Scripting::V8::ArrayHandle* handle = ::g::Fuse::Scripting::V8::ArrayHandle::New1(data);
    ::g::Fuse::Scripting::V8::Object* obj = ::g::Fuse::Scripting::V8::Object::New1(context, ::g::Fuse::Scripting::V8::Simple::Context::NewExternalArrayBuffer(handle->GetIntPtr(), uPtr(data)->Length()));

    if (obj == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[27/*"Context.New...*/]));

    uPtr(obj)->Item(::STRINGS[24/*"__unoHandle"*/], ::g::Fuse::Scripting::External::New1(handle));
    return obj->_object;
}

// private static int ToInt(object o) [static] :250
int Marshaller::ToInt(uObject* o)
{
    uStackFrame __("Fuse.Scripting.V8.Marshaller", "ToInt(object)");

    if (uIs(o, ::TYPES[17/*int*/]))
        return uUnbox<int>(::TYPES[17/*int*/], o);

    if (uIs(o, ::TYPES[18/*double*/]))
        return (int)uUnbox<double>(::TYPES[18/*double*/], o);

    return 0;
}

// internal static Fuse.Scripting.V8.Simple.Value Unwrap(Fuse.Scripting.V8.Context context, object obj) [static] :208
::g::Fuse::Scripting::V8::Simple::Value* Marshaller::Unwrap(::g::Fuse::Scripting::V8::Context* context, uObject* obj)
{
    uStackFrame __("Fuse.Scripting.V8.Marshaller", "Unwrap(Fuse.Scripting.V8.Context,object)");

    if (obj == NULL)
        return NULL;

    if (uIs(obj, ::TYPES[17/*int*/]))
        return ::g::Fuse::Scripting::V8::Simple::Int::New5(uUnbox<int>(::TYPES[17/*int*/], obj));

    if (uIs(obj, ::TYPES[18/*double*/]))
        return ::g::Fuse::Scripting::V8::Simple::Double::New4(uUnbox<double>(::TYPES[18/*double*/], obj));

    if (uIs(obj, ::TYPES[19/*float*/]))
        return ::g::Fuse::Scripting::V8::Simple::Double::New4((double)uUnbox<float>(::TYPES[19/*float*/], obj));

    if (uIs(obj, ::TYPES[10/*string*/]))
        return ::g::Fuse::Scripting::V8::Simple::String::New5(uCast<uString*>(obj, ::TYPES[10/*string*/]));

    if (uIs(obj, ::TYPES[20/*Uno.UX.Selector*/]))
        return ::g::Fuse::Scripting::V8::Simple::String::New5(::g::Uno::UX::Selector__op_Implicit1(uUnbox< ::g::Uno::UX::Selector>(::TYPES[20/*Uno.UX.Selector*/], obj)));

    if (uIs(obj, ::TYPES[21/*bool*/]))
        return ::g::Fuse::Scripting::V8::Simple::Bool::New4(uUnbox<bool>(::TYPES[21/*bool*/], obj));

    if (uIs(obj, ::TYPES[22/*byte[]*/]))
        return Marshaller::NewArrayBuffer(context, uCast<uArray*>(obj, ::TYPES[22/*byte[]*/]));

    if (uIs(obj, ::TYPES[9/*Fuse.Scripting.V8.Object*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::V8::Object*>(obj, ::TYPES[9/*Fuse.Scripting.V8.Object*/]))->_object;

    if (uIs(obj, ::TYPES[23/*Fuse.Scripting.V8.Array*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::V8::Array*>(obj, ::TYPES[23/*Fuse.Scripting.V8.Array*/]))->_array;

    if (uIs(obj, ::TYPES[8/*Fuse.Scripting.V8.Function*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::V8::Function*>(obj, ::TYPES[8/*Fuse.Scripting.V8.Function*/]))->_function;

    if (uIs(obj, ::TYPES[24/*Fuse.Scripting.Callback*/]))
        return ::g::Fuse::Scripting::V8::Simple::DelegateCallback::New5(uDelegate::New(::TYPES[25/*Uno.Func<Fuse.Scripting.V8.Simple.UniqueValueVector, Fuse.Scripting.V8.Simple.Value>*/], (void*)Marshaller__CallbackWrapper__Call_fn, Marshaller__CallbackWrapper::New1(context, uCast<uDelegate*>(obj, ::TYPES[24/*Fuse.Scripting.Callback*/]))));

    if (uIs(obj, ::TYPES[11/*Fuse.Scripting.External*/]))
        return ::g::Fuse::Scripting::V8::Simple::External::New5(::g::Fuse::Scripting::V8::Handle::Create(uPtr(uCast< ::g::Fuse::Scripting::External*>(obj, ::TYPES[11/*Fuse.Scripting.External*/]))->Object));

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[28/*"Unhandled t...*/], ::g::Uno::Object::GetType(uPtr(obj))), ::STRINGS[29/*":"*/]), obj)));
}

// internal static Fuse.Scripting.V8.Simple.ValueVector UnwrapArray(Fuse.Scripting.V8.Context context, object[] objs) [static] :297
::g::Fuse::Scripting::V8::Simple::ValueVector* Marshaller::UnwrapArray(::g::Fuse::Scripting::V8::Context* context, uArray* objs)
{
    uStackFrame __("Fuse.Scripting.V8.Marshaller", "UnwrapArray(Fuse.Scripting.V8.Context,object[])");
    uArray* array1;
    int index2;
    int length3;
    ::g::Fuse::Scripting::V8::Simple::ValueVector* unwrappedObjs = ::g::Fuse::Scripting::V8::Simple::ValueVector::New1();

    for (array1 = objs, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        uObject* obj = uPtr(array1)->Strong<uObject*>(index2);
        uPtr(unwrappedObjs)->Add(Marshaller::Unwrap(context, obj));
    }

    return unwrappedObjs;
}

// internal static object Wrap(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.Value obj) [static] :186
uObject* Marshaller::Wrap(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Value* obj)
{
    uStackFrame __("Fuse.Scripting.V8.Marshaller", "Wrap(Fuse.Scripting.V8.Context,Fuse.Scripting.V8.Simple.Value)");

    if (obj == NULL)
        return NULL;

    switch (uPtr(obj)->GetValueType())
    {
        case 0:
            return uBox<int>(::TYPES[17/*int*/], uPtr(uCast< ::g::Fuse::Scripting::V8::Simple::Int*>(obj, ::TYPES[26/*Fuse.Scripting.V8.Simple.Int*/]))->GetValue());
        case 1:
            return uBox(::TYPES[18/*double*/], uPtr(uCast< ::g::Fuse::Scripting::V8::Simple::Double*>(obj, ::TYPES[27/*Fuse.Scripting.V8.Simple.Double*/]))->GetValue());
        case 2:
            return uPtr(uCast< ::g::Fuse::Scripting::V8::Simple::String*>(obj, ::TYPES[28/*Fuse.Scripting.V8.Simple.String*/]))->GetValue();
        case 3:
            return uBox(::TYPES[21/*bool*/], uPtr(uCast< ::g::Fuse::Scripting::V8::Simple::Bool*>(obj, ::TYPES[29/*Fuse.Scripting.V8.Simple.Bool*/]))->GetValue());
        case 4:
        {
            ::g::Fuse::Scripting::V8::Object* res = ::g::Fuse::Scripting::V8::Object::New2(context, uCast< ::g::Fuse::Scripting::V8::Simple::Object*>(obj, ::TYPES[30/*Fuse.Scripting.V8.Simple.Object*/]));
            uArray* buf = Marshaller::GetArrayBufferData(res);

            if (buf != NULL)
                return buf;

            return res;
        }
        case 5:
            return ::g::Fuse::Scripting::V8::Array::New1(context, uCast< ::g::Fuse::Scripting::V8::Simple::Array*>(obj, ::TYPES[31/*Fuse.Scripting.V8.Simple.Array*/]));
        case 6:
            return ::g::Fuse::Scripting::V8::Function::New1(context, uCast< ::g::Fuse::Scripting::V8::Simple::Function*>(obj, ::TYPES[32/*Fuse.Scripting.V8.Simple.Function*/]));
        case 8:
            return ::g::Fuse::Scripting::External::New1(::g::Fuse::Scripting::V8::Handle::Target(uPtr(uCast< ::g::Fuse::Scripting::V8::Simple::External*>(obj, ::TYPES[33/*Fuse.Scripting.V8.Simple.External*/]))->GetValue()));
        case 7:
        default:
            U_THROW(::g::Uno::Exception::New2(::STRINGS[30/*"V8 marshall...*/]));
    }
}

// private static object[] WrapUniqueValueVector(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.UniqueValueVector vec) [static] :318
uArray* Marshaller::WrapUniqueValueVector(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::UniqueValueVector* vec)
{
    uStackFrame __("Fuse.Scripting.V8.Marshaller", "WrapUniqueValueVector(Fuse.Scripting.V8.Context,Fuse.Scripting.V8.Simple.UniqueValueVector)");
    int len = uPtr(vec)->Length();
    uArray* wrappedVec = uArray::New(::TYPES[1/*object[]*/], len);

    for (int i = 0; i < len; ++i)
        uPtr(wrappedVec)->Strong<uObject*>(i) = Marshaller::Wrap(context, uPtr(vec)->Get(i));

    return wrappedVec;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed extern class Object :848
// {
static void Object_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Scripting::V8::Function_typeof();
    ::TYPES[34] = ::g::Uno::String_typeof()->Array();
    ::TYPES[28] = ::g::Fuse::Scripting::V8::Simple::String_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObject_typeof(), offsetof(::g::Fuse::Scripting::Object_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::V8::Context_typeof(), offsetof(::g::Fuse::Scripting::V8::Object, _context), uFieldFlagsWeak,
        ::g::Fuse::Scripting::V8::Simple::Object_typeof(), offsetof(::g::Fuse::Scripting::V8::Object, _object), 0);
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
    type = (::g::Fuse::Scripting::Object_type*)uClassType::New("Fuse.Scripting.V8.Object", options);
    type->fp_build_ = Object_build;
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

// public Object(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.Object obj) :854
void Object__ctor_1_fn(Object* __this, ::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Object* obj)
{
    __this->ctor_1(context, obj);
}

// public override sealed object CallMethod(string name, object[] args) :897
void Object__CallMethod_fn(Object* __this, uString* name, uArray* args, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "CallMethod(string,object[])");
    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::Wrap(__this->_context, uPtr(__this->_object)->CallMethod(::g::Fuse::Scripting::V8::Simple::String::New5(name), ::g::Fuse::Scripting::V8::Marshaller::UnwrapArray(__this->_context, args))), void();
}

// public override sealed bool ContainsKey(string key) :906
void Object__ContainsKey_fn(Object* __this, uString* key, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "ContainsKey(string)");
    return *__retval = uPtr(__this->_object)->ContainsKey(::g::Fuse::Scripting::V8::Simple::String::New5(key)), void();
}

// public override sealed bool Equals(Fuse.Scripting.Object o) :911
void Object__Equals2_fn(Object* __this, ::g::Fuse::Scripting::Object* o, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "Equals(Fuse.Scripting.Object)");
    Object* that = uAs<Object*>(o, __this->__type);
    return *__retval = (that != NULL) && uPtr(__this->_object)->Equals2(uPtr(that)->_object), void();
}

// public override sealed int GetHashCode() :917
void Object__GetHashCode_fn(Object* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_object)), void();
}

// public override sealed bool InstanceOf(Fuse.Scripting.Function type) :892
void Object__InstanceOf_fn(Object* __this, ::g::Fuse::Scripting::Function* type, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "InstanceOf(Fuse.Scripting.Function)");
    return *__retval = uPtr(__this->_object)->InstanceOf(uPtr(uCast< ::g::Fuse::Scripting::V8::Function*>(type, ::TYPES[8/*Fuse.Scripting.V8.Function*/]))->_function), void();
}

// public override sealed object get_Item(string key) :867
void Object__get_Item_fn(Object* __this, uString* key, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "get_Item(string)");
    return *__retval = ::g::Fuse::Scripting::V8::Marshaller::Wrap(__this->_context, uPtr(__this->_object)->Get(::g::Fuse::Scripting::V8::Simple::String::New5(key))), void();
}

// public override sealed void set_Item(string key, object value) :871
void Object__set_Item_fn(Object* __this, uString* key, uObject* value)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "set_Item(string,object)");
    uPtr(__this->_object)->Set(::g::Fuse::Scripting::V8::Simple::String::New5(key), ::g::Fuse::Scripting::V8::Marshaller::Unwrap(__this->_context, value));
}

// public override sealed string[] get_Keys() :879
void Object__get_Keys_fn(Object* __this, uArray** __retval)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "get_Keys()");
    ::g::Fuse::Scripting::V8::Simple::UniqueValueVector* keys = uPtr(__this->_object)->Keys();
    int len = uPtr(keys)->Length();
    uArray* result = uArray::New(::TYPES[34/*string[]*/], len);

    for (int i = 0; i < len; ++i)
        uPtr(result)->Strong<uString*>(i) = uPtr(uAs< ::g::Fuse::Scripting::V8::Simple::String*>(uPtr(keys)->Get(i), ::TYPES[28/*Fuse.Scripting.V8.Simple.String*/]))->GetValue();

    return *__retval = result, void();
}

// public static Fuse.Scripting.V8.Object New(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.Object obj) :860
void Object__New1_fn(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Object* obj, Object** __retval)
{
    *__retval = Object::New1(context, obj);
}

// public Object New(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.Object obj) :854
void Object__New2_fn(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Object* obj, Object** __retval)
{
    *__retval = Object::New2(context, obj);
}

// public Object(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.Object obj) [instance] :854
void Object::ctor_1(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Object* obj)
{
    ctor_();
    _context = context;
    _object = obj;
}

// public static Fuse.Scripting.V8.Object New(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.Object obj) [static] :860
Object* Object::New1(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Object* obj)
{
    uStackFrame __("Fuse.Scripting.V8.Object", "New(Fuse.Scripting.V8.Context,Fuse.Scripting.V8.Simple.Object)");
    return (obj == NULL) ? uCast<Object*>(NULL, Object_typeof()) : (Object*)Object::New2(context, obj);
}

// public Object New(Fuse.Scripting.V8.Context context, Fuse.Scripting.V8.Simple.Object obj) [static] :854
Object* Object::New2(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Object* obj)
{
    Object* obj1 = (Object*)uNew(Object_typeof());
    obj1->ctor_1(context, obj);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno
// --------------------------------------------------------------------------------------------

// private abstract interface Debugger.State :410
// {
uInterfaceType* Debugger__State_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.V8.Debugger.State", 0, 0);
    return type;
}
// }

}}}} // ::g::Fuse::Scripting::V8
