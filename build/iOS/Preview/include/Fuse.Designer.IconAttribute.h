// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Designer/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Fuse{namespace Designer{struct IconAttribute;}}}

namespace g{
namespace Fuse{
namespace Designer{

// public sealed class IconAttribute :28
// {
uType* IconAttribute_typeof();
void IconAttribute__ctor_1_fn(IconAttribute* __this, uString* path);
void IconAttribute__New1_fn(uString* path, IconAttribute** __retval);

struct IconAttribute : ::g::Uno::Attribute
{
    uStrong<uString*> Path;

    void ctor_1(uString* path);
    static IconAttribute* New1(uString* path);
};
// }

}}} // ::g::Fuse::Designer
