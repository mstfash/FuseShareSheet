// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct LineJoinImpl;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal abstract class LineJoinImpl :131
// {
struct LineJoinImpl_type : uType
{
    void(*fp_Create)(::g::Fuse::Drawing::LineJoinImpl*, ::g::Uno::Float2*, ::g::Uno::Float2*, ::g::Uno::Float2*, ::g::Uno::Float2*, uObject*, uObject*);
};

LineJoinImpl_type* LineJoinImpl_typeof();
void LineJoinImpl__ctor__fn(LineJoinImpl* __this);
void LineJoinImpl__Create1_fn(int* lineJoin, LineJoinImpl** __retval);

struct LineJoinImpl : uObject
{
    void ctor_();
    void Create(::g::Uno::Float2 leftInner, ::g::Uno::Float2 leftOuter, ::g::Uno::Float2 rightInner, ::g::Uno::Float2 rightOuter, uObject* outer, uObject* inner);
    static LineJoinImpl* Create1(int lineJoin);
};

}}} // ::g::Fuse::Drawing

#include <Uno.Float2.h>

namespace g{
namespace Fuse{
namespace Drawing{

inline void LineJoinImpl::Create(::g::Uno::Float2 leftInner, ::g::Uno::Float2 leftOuter, ::g::Uno::Float2 rightInner, ::g::Uno::Float2 rightOuter, uObject* outer, uObject* inner) { (((LineJoinImpl_type*)__type)->fp_Create)(this, &leftInner, &leftOuter, &rightInner, &rightOuter, outer, inner); }
// }

}}} // ::g::Fuse::Drawing
