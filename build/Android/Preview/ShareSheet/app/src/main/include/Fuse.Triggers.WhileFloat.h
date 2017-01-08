// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.WhileValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileFloat;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileFloat :3236
// {
::g::Fuse::Triggers::WhileValue_type* WhileFloat_typeof();
void WhileFloat__ctor_6_fn(WhileFloat* __this);
void WhileFloat__get_GreaterThan_fn(WhileFloat* __this, float* __retval);
void WhileFloat__set_GreaterThan_fn(WhileFloat* __this, float* value);
void WhileFloat__get_GreaterThanEqual_fn(WhileFloat* __this, float* __retval);
void WhileFloat__set_GreaterThanEqual_fn(WhileFloat* __this, float* value);
void WhileFloat__get_IsOn_fn(WhileFloat* __this, bool* __retval);
void WhileFloat__get_LessThan_fn(WhileFloat* __this, float* __retval);
void WhileFloat__set_LessThan_fn(WhileFloat* __this, float* value);
void WhileFloat__get_LessThanEqual_fn(WhileFloat* __this, float* __retval);
void WhileFloat__set_LessThanEqual_fn(WhileFloat* __this, float* value);
void WhileFloat__New2_fn(WhileFloat** __retval);
void WhileFloat__get_Value1_fn(WhileFloat* __this, float* __retval);
void WhileFloat__set_Value1_fn(WhileFloat* __this, float* value);

struct WhileFloat : ::g::Fuse::Triggers::WhileValue
{
    ::g::Uno::Float2 _compare;
    int _high;
    int _low;

    void ctor_6();
    float GreaterThan();
    void GreaterThan(float value);
    float GreaterThanEqual();
    void GreaterThanEqual(float value);
    float LessThan();
    void LessThan(float value);
    float LessThanEqual();
    void LessThanEqual(float value);
    float Value1();
    void Value1(float value);
    static WhileFloat* New2();
};
// }

}}} // ::g::Fuse::Triggers
