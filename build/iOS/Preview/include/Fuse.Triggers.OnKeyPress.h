// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Input{struct KeyEventArgs;}}}
namespace g{namespace Fuse{namespace Triggers{struct OnKeyPress;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public class OnKeyPress :842
// {
::g::Fuse::Triggers::Trigger_type* OnKeyPress_typeof();
void OnKeyPress__ctor_4_fn(OnKeyPress* __this);
void OnKeyPress__add_Handler_fn(OnKeyPress* __this, uDelegate* value);
void OnKeyPress__remove_Handler_fn(OnKeyPress* __this, uDelegate* value);
void OnKeyPress__get_Key_fn(OnKeyPress* __this, int* __retval);
void OnKeyPress__set_Key_fn(OnKeyPress* __this, int* value);
void OnKeyPress__New2_fn(OnKeyPress** __retval);
void OnKeyPress__OnKeyPressed_fn(OnKeyPress* __this, uObject* sender, ::g::Fuse::Input::KeyEventArgs* args);
void OnKeyPress__OnRooted_fn(OnKeyPress* __this);
void OnKeyPress__OnUnrooted_fn(OnKeyPress* __this);

struct OnKeyPress : ::g::Fuse::Triggers::Trigger
{
    int _Key;
    uStrong<uDelegate*> Handler1;

    void ctor_4();
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    int Key();
    void Key(int value);
    void OnKeyPressed(uObject* sender, ::g::Fuse::Input::KeyEventArgs* args);
    static OnKeyPress* New2();
};
// }

}}} // ::g::Fuse::Triggers
