// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Designer/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Fuse{namespace Designer{struct PriorityAttribute;}}}

namespace g{
namespace Fuse{
namespace Designer{

// public sealed class PriorityAttribute :37
// {
uType* PriorityAttribute_typeof();
void PriorityAttribute__ctor_1_fn(PriorityAttribute* __this, int* Priority1);
void PriorityAttribute__New1_fn(int* Priority1, PriorityAttribute** __retval);

struct PriorityAttribute : ::g::Uno::Attribute
{
    int Priority;

    void ctor_1(int Priority1);
    static PriorityAttribute* New1(int Priority1);
};
// }

}}} // ::g::Fuse::Designer
