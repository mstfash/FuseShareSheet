// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Designer/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Fuse{namespace Designer{struct DefaultComponentAttribute;}}}

namespace g{
namespace Fuse{
namespace Designer{

// public sealed class DefaultComponentAttribute :101
// {
uType* DefaultComponentAttribute_typeof();
void DefaultComponentAttribute__ctor_1_fn(DefaultComponentAttribute* __this, uString* componentClass);
void DefaultComponentAttribute__New1_fn(uString* componentClass, DefaultComponentAttribute** __retval);

struct DefaultComponentAttribute : ::g::Uno::Attribute
{
    uStrong<uString*> ComponentClass;

    void ctor_1(uString* componentClass);
    static DefaultComponentAttribute* New1(uString* componentClass);
};
// }

}}} // ::g::Fuse::Designer
