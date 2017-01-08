// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Designer/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Fuse{namespace Designer{struct DefaultInstanceAttribute;}}}

namespace g{
namespace Fuse{
namespace Designer{

// public sealed class DefaultInstanceAttribute :16
// {
uType* DefaultInstanceAttribute_typeof();
void DefaultInstanceAttribute__ctor_1_fn(DefaultInstanceAttribute* __this, uString* targetProperty, uString* type);
void DefaultInstanceAttribute__New1_fn(uString* targetProperty, uString* type, DefaultInstanceAttribute** __retval);

struct DefaultInstanceAttribute : ::g::Uno::Attribute
{
    uStrong<uString*> TargetProperty;
    uStrong<uString*> Type;

    void ctor_1(uString* targetProperty, uString* type);
    static DefaultInstanceAttribute* New1(uString* targetProperty, uString* type);
};
// }

}}} // ::g::Fuse::Designer
