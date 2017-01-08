// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Selection/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Selection.SelectionEvent.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Selection{struct Deselected;}}}

namespace g{
namespace Fuse{
namespace Selection{

// public sealed class Deselected :283
// {
::g::Fuse::Selection::SelectionEvent_type* Deselected_typeof();
void Deselected__ctor_6_fn(Deselected* __this);
void Deselected__IsTriggered_fn(Deselected* __this, bool* on, bool* __retval);
void Deselected__New2_fn(Deselected** __retval);

struct Deselected : ::g::Fuse::Selection::SelectionEvent
{
    void ctor_6();
    static Deselected* New2();
};
// }

}}} // ::g::Fuse::Selection
