// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/0.42.4/triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{namespace Fuse{namespace Triggers{struct ScrollingAnimation;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public class ScrollingAnimation :409
// {
struct ScrollingAnimation_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Uno::UX::IPropertyListener interface5;
};

ScrollingAnimation_type* ScrollingAnimation_typeof();
void ScrollingAnimation__ctor_4_fn(ScrollingAnimation* __this);
void ScrollingAnimation__get_From_fn(ScrollingAnimation* __this, float* __retval);
void ScrollingAnimation__set_From_fn(ScrollingAnimation* __this, float* value);
void ScrollingAnimation__get_Inverse_fn(ScrollingAnimation* __this, bool* __retval);
void ScrollingAnimation__set_Inverse_fn(ScrollingAnimation* __this, bool* value);
void ScrollingAnimation__New2_fn(ScrollingAnimation** __retval);
void ScrollingAnimation__OnRooted_fn(ScrollingAnimation* __this);
void ScrollingAnimation__OnUnrooted_fn(ScrollingAnimation* __this);
void ScrollingAnimation__get_Range_fn(ScrollingAnimation* __this, int* __retval);
void ScrollingAnimation__set_Range_fn(ScrollingAnimation* __this, int* value);
void ScrollingAnimation__get_ScrollDirections_fn(ScrollingAnimation* __this, int* __retval);
void ScrollingAnimation__set_ScrollDirections_fn(ScrollingAnimation* __this, int* value);
void ScrollingAnimation__get_ScrollProgress_fn(ScrollingAnimation* __this, double* __retval);
void ScrollingAnimation__get_To_fn(ScrollingAnimation* __this, float* __retval);
void ScrollingAnimation__set_To_fn(ScrollingAnimation* __this, float* value);
void ScrollingAnimation__UnoUXIPropertyListenerOnPropertyChanged_fn(ScrollingAnimation* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);

struct ScrollingAnimation : ::g::Fuse::Triggers::Trigger
{
    float _from;
    bool _hasFrom;
    bool _hasScrollDirections;
    bool _hasTo;
    int _range;
    uStrong< ::g::Fuse::Controls::ScrollView*> _scrollable;
    int _scrollDirections;
    static ::g::Uno::UX::Selector _scrollPositionName_;
    static ::g::Uno::UX::Selector& _scrollPositionName() { return ScrollingAnimation_typeof()->Init(), _scrollPositionName_; }
    float _to;
    bool _Inverse;

    void ctor_4();
    float From();
    void From(float value);
    bool Inverse();
    void Inverse(bool value);
    int Range();
    void Range(int value);
    int ScrollDirections();
    void ScrollDirections(int value);
    double ScrollProgress();
    float To();
    void To(float value);
    static ScrollingAnimation* New2();
};
// }

}}} // ::g::Fuse::Triggers
