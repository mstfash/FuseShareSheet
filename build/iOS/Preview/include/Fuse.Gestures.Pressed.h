// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Gestures{struct Pressed;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class Pressed :515
// {
::g::Fuse::Triggers::Trigger_type* Pressed_typeof();
void Pressed__ctor_4_fn(Pressed* __this);
void Pressed__New2_fn(Pressed** __retval);
void Pressed__OnPressed_fn(Pressed* __this, uObject* s, uObject* a);
void Pressed__OnRooted_fn(Pressed* __this);
void Pressed__OnUnrooted_fn(Pressed* __this);

struct Pressed : ::g::Fuse::Triggers::Trigger
{
    void ctor_4();
    void OnPressed(uObject* s, uObject* a);
    static Pressed* New2();
};
// }

}}} // ::g::Fuse::Gestures
