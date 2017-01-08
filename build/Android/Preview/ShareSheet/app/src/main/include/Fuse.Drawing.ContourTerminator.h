// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Paths/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.PathGeometry.h>
namespace g{namespace Fuse{namespace Drawing{struct ContourTerminator;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal abstract class ContourTerminator :1049
// {
::g::Fuse::Drawing::PathGeometry_type* ContourTerminator_typeof();
void ContourTerminator__ctor_1_fn(ContourTerminator* __this);
void ContourTerminator__ctor_2_fn(ContourTerminator* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* position);
void ContourTerminator__ContourTerminatorCtor_fn(ContourTerminator* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* position);
void ContourTerminator__get_EndsContour_fn(ContourTerminator* __this, bool* __retval);
void ContourTerminator__EvaluateLast_fn(ContourTerminator* __this, uObject** __retval);
void ContourTerminator__FindStartOfLastContour_fn(ContourTerminator* __this, ::g::Uno::Float2* __retval);

struct ContourTerminator : ::g::Fuse::Drawing::PathGeometry
{
    void ctor_1();
    void ctor_2(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 position);
    void ContourTerminatorCtor(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 position);
};
// }

}}} // ::g::Fuse::Drawing
