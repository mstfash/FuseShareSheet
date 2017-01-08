// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Simple.ScriptExceptionHandler.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct DelegateScriptExceptionHandler;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct ScriptException;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal sealed extern class DelegateScriptExceptionHandler :1184
// {
::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler_type* DelegateScriptExceptionHandler_typeof();
void DelegateScriptExceptionHandler__ctor_1_fn(DelegateScriptExceptionHandler* __this, uDelegate* handler);
void DelegateScriptExceptionHandler__Handle_fn(DelegateScriptExceptionHandler* __this, ::g::Fuse::Scripting::V8::Simple::ScriptException* e);
void DelegateScriptExceptionHandler__New2_fn(uDelegate* handler, DelegateScriptExceptionHandler** __retval);

struct DelegateScriptExceptionHandler : ::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler
{
    uStrong<uDelegate*> _handler;

    void ctor_1(uDelegate* handler);
    static DelegateScriptExceptionHandler* New2(uDelegate* handler);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
