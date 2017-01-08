// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Simple.ScriptExceptionImpl.h>
#include <include/V8Simple.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct ScriptException;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct String;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Value;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal sealed extern class ScriptException :1068
// {
uType* ScriptException_typeof();
void ScriptException__ctor__fn(ScriptException* __this, ::V8Simple::ScriptException** impl);
void ScriptException__GetErrorMessage_fn(ScriptException* __this, ::g::Fuse::Scripting::V8::Simple::String** __retval);
void ScriptException__GetException_fn(ScriptException* __this, ::g::Fuse::Scripting::V8::Simple::Value** __retval);
void ScriptException__GetFileName_fn(ScriptException* __this, ::g::Fuse::Scripting::V8::Simple::String** __retval);
void ScriptException__GetLineNumber_fn(ScriptException* __this, int* __retval);
void ScriptException__GetSourceLine_fn(ScriptException* __this, ::g::Fuse::Scripting::V8::Simple::String** __retval);
void ScriptException__GetStackTrace_fn(ScriptException* __this, ::g::Fuse::Scripting::V8::Simple::String** __retval);
void ScriptException__New1_fn(::V8Simple::ScriptException** impl, ScriptException** __retval);

struct ScriptException : uObject
{
    ::V8Simple::ScriptException* _scriptExceptionImpl;

    void ctor_(::V8Simple::ScriptException* impl);
    ::g::Fuse::Scripting::V8::Simple::String* GetErrorMessage();
    ::g::Fuse::Scripting::V8::Simple::Value* GetException();
    ::g::Fuse::Scripting::V8::Simple::String* GetFileName();
    int GetLineNumber();
    ::g::Fuse::Scripting::V8::Simple::String* GetSourceLine();
    ::g::Fuse::Scripting::V8::Simple::String* GetStackTrace();
    static ScriptException* New1(::V8Simple::ScriptException* impl);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
