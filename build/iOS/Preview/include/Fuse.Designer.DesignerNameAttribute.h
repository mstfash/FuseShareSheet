// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Designer/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Fuse{namespace Designer{struct DesignerNameAttribute;}}}

namespace g{
namespace Fuse{
namespace Designer{

// public sealed class DesignerNameAttribute :89
// {
uType* DesignerNameAttribute_typeof();
void DesignerNameAttribute__ctor_1_fn(DesignerNameAttribute* __this, uString* name);
void DesignerNameAttribute__New1_fn(uString* name, DesignerNameAttribute** __retval);

struct DesignerNameAttribute : ::g::Uno::Attribute
{
    uStrong<uString*> Name;

    void ctor_1(uString* name);
    static DesignerNameAttribute* New1(uString* name);
};
// }

}}} // ::g::Fuse::Designer
