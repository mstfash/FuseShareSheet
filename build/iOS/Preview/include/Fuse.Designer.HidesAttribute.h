// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Designer/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Fuse{namespace Designer{struct HidesAttribute;}}}

namespace g{
namespace Fuse{
namespace Designer{

// public sealed class HidesAttribute :53
// {
uType* HidesAttribute_typeof();
void HidesAttribute__ctor_1_fn(HidesAttribute* __this, uString* targetProperty);
void HidesAttribute__New1_fn(uString* targetProperty, HidesAttribute** __retval);

struct HidesAttribute : ::g::Uno::Attribute
{
    uStrong<uString*> TargetProperty;

    void ctor_1(uString* targetProperty);
    static HidesAttribute* New1(uString* targetProperty);
};
// }

}}} // ::g::Fuse::Designer
