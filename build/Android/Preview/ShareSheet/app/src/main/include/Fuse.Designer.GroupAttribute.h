// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Designer/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Fuse{namespace Designer{struct GroupAttribute;}}}

namespace g{
namespace Fuse{
namespace Designer{

// public sealed class GroupAttribute :46
// {
uType* GroupAttribute_typeof();
void GroupAttribute__ctor_1_fn(GroupAttribute* __this, uString* name, int* priority);
void GroupAttribute__New1_fn(uString* name, int* priority, GroupAttribute** __retval);

struct GroupAttribute : ::g::Uno::Attribute
{
    uStrong<uString*> Name;
    int Priority;

    void ctor_1(uString* name, int priority);
    static GroupAttribute* New1(uString* name, int priority);
};
// }

}}} // ::g::Fuse::Designer
