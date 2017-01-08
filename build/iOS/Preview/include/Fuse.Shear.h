// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Transform.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct Shear;}}

namespace g{
namespace Fuse{

// public sealed class Shear :9698
// {
::g::Fuse::Transform_type* Shear_typeof();
void Shear__ctor_3_fn(Shear* __this);
void Shear__AppendTo_fn(Shear* __this, ::g::Fuse::FastMatrix* m, float* weight);
void Shear__get_Degrees_fn(Shear* __this, ::g::Uno::Float2* __retval);
void Shear__set_Degrees_fn(Shear* __this, ::g::Uno::Float2* value);
void Shear__get_DegreesX_fn(Shear* __this, float* __retval);
void Shear__set_DegreesX_fn(Shear* __this, float* value);
void Shear__get_DegreesY_fn(Shear* __this, float* __retval);
void Shear__set_DegreesY_fn(Shear* __this, float* value);
void Shear__get_IsFlat_fn(Shear* __this, bool* __retval);
void Shear__New2_fn(Shear** __retval);
void Shear__PrependTo_fn(Shear* __this, ::g::Fuse::FastMatrix* m);
void Shear__get_Vector_fn(Shear* __this, ::g::Uno::Float2* __retval);
void Shear__set_Vector_fn(Shear* __this, ::g::Uno::Float2* value);

struct Shear : ::g::Fuse::Transform
{
    ::g::Uno::Float2 _vector;

    void ctor_3();
    ::g::Uno::Float2 Degrees();
    void Degrees(::g::Uno::Float2 value);
    float DegreesX();
    void DegreesX(float value);
    float DegreesY();
    void DegreesY(float value);
    ::g::Uno::Float2 Vector();
    void Vector(::g::Uno::Float2 value);
    static Shear* New2();
};
// }

}} // ::g::Fuse
