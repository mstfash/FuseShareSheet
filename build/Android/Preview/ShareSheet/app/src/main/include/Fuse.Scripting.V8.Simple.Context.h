// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Simple.ContextImpl.h>
#include <include/V8Simple.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Context;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct ExternalFreer;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct MessageHandler;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Object;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct ScriptExceptionHandler;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct String;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Value;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal sealed extern class Context :944
// {
struct Context_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Context_type* Context_typeof();
void Context__ctor__fn(Context* __this, ::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler* scriptExceptionHandler, ::g::Fuse::Scripting::V8::Simple::MessageHandler* runtimeExceptionHandler, ::g::Fuse::Scripting::V8::Simple::ExternalFreer* externalFreer);
void Context__Dispose_fn(Context* __this);
void Context__Evaluate_fn(Context* __this, ::g::Fuse::Scripting::V8::Simple::String* fileName, ::g::Fuse::Scripting::V8::Simple::String* code, ::g::Fuse::Scripting::V8::Simple::Value** __retval);
void Context__GetVersion_fn(uString** __retval);
void Context__GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::V8::Simple::Object** __retval);
void Context__IdleNotificationDeadline_fn(Context* __this, double* deadline_in_seconds, bool* __retval);
void Context__New1_fn(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler* scriptExceptionHandler, ::g::Fuse::Scripting::V8::Simple::MessageHandler* runtimeExceptionHandler, ::g::Fuse::Scripting::V8::Simple::ExternalFreer* externalFreer, Context** __retval);
void Context__NewExternalArrayBuffer_fn(void** data, int* byteLength, ::g::Fuse::Scripting::V8::Simple::Object** __retval);
void Context__ProcessDebugMessages_fn();
void Context__SendDebugCommand_fn(::g::Fuse::Scripting::V8::Simple::String* command);
void Context__SetDebugMessageHandler_fn(::g::Fuse::Scripting::V8::Simple::MessageHandler* debugMessageHandler);
void Context__ThrowException_fn(::g::Fuse::Scripting::V8::Simple::Value* exception, ::g::Fuse::Scripting::V8::Simple::Value** __retval);

struct Context : uObject
{
    ::V8Simple::Context* _contextImpl;

    void ctor_(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler* scriptExceptionHandler, ::g::Fuse::Scripting::V8::Simple::MessageHandler* runtimeExceptionHandler, ::g::Fuse::Scripting::V8::Simple::ExternalFreer* externalFreer);
    void Dispose();
    ::g::Fuse::Scripting::V8::Simple::Value* Evaluate(::g::Fuse::Scripting::V8::Simple::String* fileName, ::g::Fuse::Scripting::V8::Simple::String* code);
    ::g::Fuse::Scripting::V8::Simple::Object* GlobalObject();
    bool IdleNotificationDeadline(double deadline_in_seconds);
    static uString* GetVersion();
    static Context* New1(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler* scriptExceptionHandler, ::g::Fuse::Scripting::V8::Simple::MessageHandler* runtimeExceptionHandler, ::g::Fuse::Scripting::V8::Simple::ExternalFreer* externalFreer);
    static ::g::Fuse::Scripting::V8::Simple::Object* NewExternalArrayBuffer(void* data, int byteLength);
    static void ProcessDebugMessages();
    static void SendDebugCommand(::g::Fuse::Scripting::V8::Simple::String* command);
    static void SetDebugMessageHandler(::g::Fuse::Scripting::V8::Simple::MessageHandler* debugMessageHandler);
    static ::g::Fuse::Scripting::V8::Simple::Value* ThrowException(::g::Fuse::Scripting::V8::Simple::Value* exception);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
