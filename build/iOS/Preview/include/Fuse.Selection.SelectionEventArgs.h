// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Selection/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Selection{struct SelectionEventArgs;}}}

namespace g{
namespace Fuse{
namespace Selection{

// public sealed class SelectionEventArgs :204
// {
struct SelectionEventArgs_type : uType
{
    ::g::Fuse::Scripting::IScriptEvent interface0;
};

SelectionEventArgs_type* SelectionEventArgs_typeof();
void SelectionEventArgs__ctor_1_fn(SelectionEventArgs* __this, uString* value);
void SelectionEventArgs__FuseScriptingIScriptEventSerialize_fn(SelectionEventArgs* __this, uObject* s);
void SelectionEventArgs__New2_fn(uString* value, SelectionEventArgs** __retval);
void SelectionEventArgs__get_Value_fn(SelectionEventArgs* __this, uString** __retval);
void SelectionEventArgs__set_Value_fn(SelectionEventArgs* __this, uString* value);

struct SelectionEventArgs : ::g::Uno::EventArgs
{
    uStrong<uString*> _Value;

    void ctor_1(uString* value);
    uString* Value();
    void Value(uString* value);
    static SelectionEventArgs* New2(uString* value);
};
// }

}}} // ::g::Fuse::Selection
