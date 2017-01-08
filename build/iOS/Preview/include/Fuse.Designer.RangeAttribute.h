// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Designer/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Fuse{namespace Designer{struct RangeAttribute;}}}

namespace g{
namespace Fuse{
namespace Designer{

// public sealed class RangeAttribute :116
// {
uType* RangeAttribute_typeof();
void RangeAttribute__ctor_1_fn(RangeAttribute* __this, float* min, float* max);
void RangeAttribute__ctor_2_fn(RangeAttribute* __this, float* min, float* max, float* exponent);
void RangeAttribute__New1_fn(float* min, float* max, RangeAttribute** __retval);
void RangeAttribute__New2_fn(float* min, float* max, float* exponent, RangeAttribute** __retval);

struct RangeAttribute : ::g::Uno::Attribute
{
    float Exponent;
    float Max;
    float Min;

    void ctor_1(float min, float max);
    void ctor_2(float min, float max, float exponent);
    static RangeAttribute* New1(float min, float max);
    static RangeAttribute* New2(float min, float max, float exponent);
};
// }

}}} // ::g::Fuse::Designer
