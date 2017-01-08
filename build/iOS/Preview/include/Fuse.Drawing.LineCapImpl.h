// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct LineCapImpl;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal abstract class LineCapImpl :71
// {
struct LineCapImpl_type : uType
{
    void(*fp_Create)(::g::Fuse::Drawing::LineCapImpl*, ::g::Uno::Float2*, ::g::Uno::Float2*, uObject**);
};

LineCapImpl_type* LineCapImpl_typeof();
void LineCapImpl__ctor__fn(LineCapImpl* __this);
void LineCapImpl__Create1_fn(int* lineCap, LineCapImpl** __retval);

struct LineCapImpl : uObject
{
    void ctor_();
    uObject* Create(::g::Uno::Float2 from, ::g::Uno::Float2 to);
    static LineCapImpl* Create1(int lineCap);
};

}}} // ::g::Fuse::Drawing

#include <Uno.Float2.h>

namespace g{
namespace Fuse{
namespace Drawing{

inline uObject* LineCapImpl::Create(::g::Uno::Float2 from, ::g::Uno::Float2 to) { uObject* __retval; return (((LineCapImpl_type*)__type)->fp_Create)(this, &from, &to, &__retval), __retval; }
// }

}}} // ::g::Fuse::Drawing
