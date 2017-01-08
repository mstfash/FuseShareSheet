// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.LineJoinImpl.h>
namespace g{namespace Fuse{namespace Drawing{struct MiterJoin;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class MiterJoin :146
// {
::g::Fuse::Drawing::LineJoinImpl_type* MiterJoin_typeof();
void MiterJoin__ctor_1_fn(MiterJoin* __this);
void MiterJoin__Create_fn(MiterJoin* __this, ::g::Uno::Float2* leftInner, ::g::Uno::Float2* leftOuter, ::g::Uno::Float2* rightInner, ::g::Uno::Float2* rightOuter, uObject* outer, uObject* inner);
void MiterJoin__New1_fn(MiterJoin** __retval);

struct MiterJoin : ::g::Fuse::Drawing::LineJoinImpl
{
    void ctor_1();
    static MiterJoin* New1();
};
// }

}}} // ::g::Fuse::Drawing
