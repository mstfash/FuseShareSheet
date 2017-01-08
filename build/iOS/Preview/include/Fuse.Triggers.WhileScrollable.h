// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/0.42.4/triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileScrollable;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileScrollable :573
// {
struct WhileScrollable_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Uno::UX::IPropertyListener interface5;
};

WhileScrollable_type* WhileScrollable_typeof();
void WhileScrollable__ctor_5_fn(WhileScrollable* __this);
void WhileScrollable__get_IsOn_fn(WhileScrollable* __this, bool* __retval);
void WhileScrollable__New2_fn(WhileScrollable** __retval);
void WhileScrollable__OnRooted_fn(WhileScrollable* __this);
void WhileScrollable__OnUnrooted_fn(WhileScrollable* __this);
void WhileScrollable__get_ScrollDirections_fn(WhileScrollable* __this, int* __retval);
void WhileScrollable__set_ScrollDirections_fn(WhileScrollable* __this, int* value);
void WhileScrollable__get_ScrollView_fn(WhileScrollable* __this, ::g::Fuse::Controls::ScrollView** __retval);
void WhileScrollable__set_ScrollView_fn(WhileScrollable* __this, ::g::Fuse::Controls::ScrollView* value);
void WhileScrollable__UnoUXIPropertyListenerOnPropertyChanged_fn(WhileScrollable* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);

struct WhileScrollable : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong< ::g::Fuse::Controls::ScrollView*> _scrollable;
    uStrong< ::g::Fuse::Controls::ScrollView*> _source;
    int _ScrollDirections;

    void ctor_5();
    bool IsOn();
    int ScrollDirections();
    void ScrollDirections(int value);
    ::g::Fuse::Controls::ScrollView* ScrollView();
    void ScrollView(::g::Fuse::Controls::ScrollView* value);
    static WhileScrollable* New2();
};
// }

}}} // ::g::Fuse::Triggers
