// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Designer/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Fuse{namespace Designer{struct RequiredComponentAttribute;}}}

namespace g{
namespace Fuse{
namespace Designer{

// public sealed class RequiredComponentAttribute :107
// {
uType* RequiredComponentAttribute_typeof();
void RequiredComponentAttribute__ctor_1_fn(RequiredComponentAttribute* __this, uString* componentClass);
void RequiredComponentAttribute__New1_fn(uString* componentClass, RequiredComponentAttribute** __retval);

struct RequiredComponentAttribute : ::g::Uno::Attribute
{
    uStrong<uString*> ComponentClass;

    void ctor_1(uString* componentClass);
    static RequiredComponentAttribute* New1(uString* componentClass);
};
// }

}}} // ::g::Fuse::Designer
