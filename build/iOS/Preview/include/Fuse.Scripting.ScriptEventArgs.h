// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Scripting{struct ScriptEventArgs;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class ScriptEventArgs :774
// {
struct ScriptEventArgs_type : uType
{
    ::g::Fuse::Scripting::IScriptEvent interface0;
};

ScriptEventArgs_type* ScriptEventArgs_typeof();
void ScriptEventArgs__ctor_1_fn(ScriptEventArgs* __this);
void ScriptEventArgs__get_Empty_fn(ScriptEventArgs** __retval);
void ScriptEventArgs__New2_fn(ScriptEventArgs** __retval);
void ScriptEventArgs__Serialize_fn(ScriptEventArgs* __this, uObject* s);

struct ScriptEventArgs : ::g::Uno::EventArgs
{
    static uSStrong<ScriptEventArgs*> _empty_;
    static uSStrong<ScriptEventArgs*>& _empty() { return ScriptEventArgs_typeof()->Init(), _empty_; }

    void ctor_1();
    void Serialize(uObject* s);
    static ScriptEventArgs* New2();
    static ScriptEventArgs* Empty1();
};
// }

}}} // ::g::Fuse::Scripting
