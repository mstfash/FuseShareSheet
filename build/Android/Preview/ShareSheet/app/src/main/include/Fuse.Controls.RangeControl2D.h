// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/rangecontrols/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct RangeControl2D;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class RangeControl2D :740
// {
struct RangeControl2D_type : ::g::Fuse::Controls::Control_type
{
    ::g::Fuse::Triggers::IValue interface13;
};

RangeControl2D_type* RangeControl2D_typeof();
void RangeControl2D__ctor_7_fn(RangeControl2D* __this);
void RangeControl2D__ClampToRange_fn(RangeControl2D* __this, ::g::Uno::Float2* v, ::g::Uno::Float2* __retval);
void RangeControl2D__get_Maximum_fn(RangeControl2D* __this, ::g::Uno::Float2* __retval);
void RangeControl2D__set_Maximum_fn(RangeControl2D* __this, ::g::Uno::Float2* value);
void RangeControl2D__get_Minimum_fn(RangeControl2D* __this, ::g::Uno::Float2* __retval);
void RangeControl2D__set_Minimum_fn(RangeControl2D* __this, ::g::Uno::Float2* value);
void RangeControl2D__New4_fn(RangeControl2D** __retval);
void RangeControl2D__OnRangeChanged_fn(RangeControl2D* __this);
void RangeControl2D__OnValueChanged_fn(RangeControl2D* __this, ::g::Uno::Float2* value, uObject* origin);
void RangeControl2D__get_RelativeUserStep_fn(RangeControl2D* __this, ::g::Uno::Float2* __retval);
void RangeControl2D__set_RelativeUserStep_fn(RangeControl2D* __this, ::g::Uno::Float2* value);
void RangeControl2D__get_RelativeValue_fn(RangeControl2D* __this, ::g::Uno::Float2* __retval);
void RangeControl2D__set_RelativeValue_fn(RangeControl2D* __this, ::g::Uno::Float2* value);
void RangeControl2D__SetValue_fn(RangeControl2D* __this, ::g::Uno::Float2* value, uObject* origin);
void RangeControl2D__SetValueX_fn(RangeControl2D* __this, float* value, uObject* origin);
void RangeControl2D__SetValueY_fn(RangeControl2D* __this, float* value, uObject* origin);
void RangeControl2D__get_UserStep_fn(RangeControl2D* __this, ::g::Uno::Float2* __retval);
void RangeControl2D__set_UserStep_fn(RangeControl2D* __this, ::g::Uno::Float2* value);
void RangeControl2D__get_Value_fn(RangeControl2D* __this, ::g::Uno::Float2* __retval);
void RangeControl2D__set_Value_fn(RangeControl2D* __this, ::g::Uno::Float2* value);
void RangeControl2D__add_ValueChanged_fn(RangeControl2D* __this, uDelegate* value);
void RangeControl2D__remove_ValueChanged_fn(RangeControl2D* __this, uDelegate* value);
void RangeControl2D__ValueFromRelative_fn(RangeControl2D* __this, ::g::Uno::Float2* relative, ::g::Uno::Float2* __retval);
void RangeControl2D__ValueToRelative_fn(RangeControl2D* __this, ::g::Uno::Float2* value, ::g::Uno::Float2* __retval);
void RangeControl2D__get_ValueX_fn(RangeControl2D* __this, float* __retval);
void RangeControl2D__set_ValueX_fn(RangeControl2D* __this, float* value);
void RangeControl2D__add_ValueXChanged_fn(RangeControl2D* __this, uDelegate* value);
void RangeControl2D__remove_ValueXChanged_fn(RangeControl2D* __this, uDelegate* value);
void RangeControl2D__get_ValueY_fn(RangeControl2D* __this, float* __retval);
void RangeControl2D__set_ValueY_fn(RangeControl2D* __this, float* value);
void RangeControl2D__add_ValueYChanged_fn(RangeControl2D* __this, uDelegate* value);
void RangeControl2D__remove_ValueYChanged_fn(RangeControl2D* __this, uDelegate* value);

struct RangeControl2D : ::g::Fuse::Controls::Panel
{
    ::g::Uno::Float2 _maximum;
    ::g::Uno::Float2 _minimum;
    ::g::Uno::Float2 _userStep;
    ::g::Uno::Float2 _value;
    static ::g::Uno::UX::Selector _valueName_;
    static ::g::Uno::UX::Selector& _valueName() { return RangeControl2D_typeof()->Init(), _valueName_; }
    static ::g::Uno::UX::Selector _valueXName_;
    static ::g::Uno::UX::Selector& _valueXName() { return RangeControl2D_typeof()->Init(), _valueXName_; }
    static ::g::Uno::UX::Selector _valueYName_;
    static ::g::Uno::UX::Selector& _valueYName() { return RangeControl2D_typeof()->Init(), _valueYName_; }
    uStrong<uDelegate*> ValueChanged1;
    uStrong<uDelegate*> ValueXChanged1;
    uStrong<uDelegate*> ValueYChanged1;

    void ctor_7();
    ::g::Uno::Float2 ClampToRange(::g::Uno::Float2 v);
    ::g::Uno::Float2 Maximum();
    void Maximum(::g::Uno::Float2 value);
    ::g::Uno::Float2 Minimum();
    void Minimum(::g::Uno::Float2 value);
    void OnRangeChanged();
    void OnValueChanged(::g::Uno::Float2 value, uObject* origin);
    ::g::Uno::Float2 RelativeUserStep();
    void RelativeUserStep(::g::Uno::Float2 value);
    ::g::Uno::Float2 RelativeValue();
    void RelativeValue(::g::Uno::Float2 value);
    void SetValue(::g::Uno::Float2 value, uObject* origin);
    void SetValueX(float value, uObject* origin);
    void SetValueY(float value, uObject* origin);
    ::g::Uno::Float2 UserStep();
    void UserStep(::g::Uno::Float2 value);
    ::g::Uno::Float2 Value();
    void Value(::g::Uno::Float2 value);
    void add_ValueChanged(uDelegate* value);
    void remove_ValueChanged(uDelegate* value);
    ::g::Uno::Float2 ValueFromRelative(::g::Uno::Float2 relative);
    ::g::Uno::Float2 ValueToRelative(::g::Uno::Float2 value);
    float ValueX();
    void ValueX(float value);
    void add_ValueXChanged(uDelegate* value);
    void remove_ValueXChanged(uDelegate* value);
    float ValueY();
    void ValueY(float value);
    void add_ValueYChanged(uDelegate* value);
    void remove_ValueYChanged(uDelegate* value);
    static RangeControl2D* New4();
};
// }

}}} // ::g::Fuse::Controls
