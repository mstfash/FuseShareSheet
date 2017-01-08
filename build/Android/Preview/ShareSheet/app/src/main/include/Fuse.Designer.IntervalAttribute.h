// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Designer/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Fuse{namespace Designer{struct IntervalAttribute;}}}

namespace g{
namespace Fuse{
namespace Designer{

// public sealed class IntervalAttribute :125
// {
uType* IntervalAttribute_typeof();
void IntervalAttribute__ctor_1_fn(IntervalAttribute* __this, float* interval);
void IntervalAttribute__New1_fn(float* interval, IntervalAttribute** __retval);

struct IntervalAttribute : ::g::Uno::Attribute
{
    float Interval;

    void ctor_1(float interval);
    static IntervalAttribute* New1(float interval);
};
// }

}}} // ::g::Fuse::Designer
