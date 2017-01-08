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
namespace g{namespace Fuse{namespace Triggers{struct RangeAnimation;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class RangeAnimation :1202
// {
::g::Fuse::Triggers::Trigger_type* RangeAnimation_typeof();
void RangeAnimation__ctor_4_fn(RangeAnimation* __this);
void RangeAnimation__get_Maximum_fn(RangeAnimation* __this, float* __retval);
void RangeAnimation__set_Maximum_fn(RangeAnimation* __this, float* value);
void RangeAnimation__get_Minimum_fn(RangeAnimation* __this, float* __retval);
void RangeAnimation__set_Minimum_fn(RangeAnimation* __this, float* value);
void RangeAnimation__New2_fn(RangeAnimation** __retval);
void RangeAnimation__OnRooted_fn(RangeAnimation* __this);
void RangeAnimation__Update_fn(RangeAnimation* __this);
void RangeAnimation__get_Value_fn(RangeAnimation* __this, float* __retval);
void RangeAnimation__set_Value_fn(RangeAnimation* __this, float* value);

struct RangeAnimation : ::g::Fuse::Triggers::Trigger
{
    float _maximum;
    float _minimum;
    double _prevValue;
    double _value;

    void ctor_4();
    float Maximum();
    void Maximum(float value);
    float Minimum();
    void Minimum(float value);
    void Update();
    float Value();
    void Value(float value);
    static RangeAnimation* New2();
};
// }

}}} // ::g::Fuse::Triggers
