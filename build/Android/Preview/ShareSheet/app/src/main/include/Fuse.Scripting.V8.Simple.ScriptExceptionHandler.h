// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct ScriptException;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct ScriptExceptionHandler;}}}}}
namespace V8Simple { class ScriptExceptionHandlerProxy; }

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal extern class ScriptExceptionHandler :1163
// {
struct ScriptExceptionHandler_type : uType
{
    void(*fp_Handle)(::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler*, ::g::Fuse::Scripting::V8::Simple::ScriptException*);
};

ScriptExceptionHandler_type* ScriptExceptionHandler_typeof();
void ScriptExceptionHandler__ctor__fn(ScriptExceptionHandler* __this);
void ScriptExceptionHandler__Handle_fn(ScriptExceptionHandler* __this, ::g::Fuse::Scripting::V8::Simple::ScriptException* e);
void ScriptExceptionHandler__New1_fn(ScriptExceptionHandler** __retval);

struct ScriptExceptionHandler : uObject
{
    ::V8Simple::ScriptExceptionHandlerProxy* _impl;

    void ctor_();
    void Handle(::g::Fuse::Scripting::V8::Simple::ScriptException* e) { (((ScriptExceptionHandler_type*)__type)->fp_Handle)(this, e); }
    static void Handle(ScriptExceptionHandler* __this, ::g::Fuse::Scripting::V8::Simple::ScriptException* e) { ScriptExceptionHandler__Handle_fn(__this, e); }
    static ScriptExceptionHandler* New1();
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
