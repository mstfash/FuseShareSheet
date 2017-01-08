// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileContainsText;}}}
namespace g{namespace Uno{namespace UX{struct ValueChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public class WhileContainsText :26
// {
::g::Fuse::Triggers::Trigger_type* WhileContainsText_typeof();
void WhileContainsText__ctor_5_fn(WhileContainsText* __this);
void WhileContainsText__New2_fn(WhileContainsText** __retval);
void WhileContainsText__OnRooted_fn(WhileContainsText* __this);
void WhileContainsText__OnUnrooted_fn(WhileContainsText* __this);
void WhileContainsText__OnValueChanged_fn(WhileContainsText* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
void WhileContainsText__get_Source_fn(WhileContainsText* __this, uObject** __retval);
void WhileContainsText__set_Source_fn(WhileContainsText* __this, uObject* value);

struct WhileContainsText : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong<uObject*> _source;
    uStrong<uObject*> _value;

    void ctor_5();
    void OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
    uObject* Source();
    void Source(uObject* value);
    static WhileContainsText* New2();
};
// }

}}} // ::g::Fuse::Triggers
