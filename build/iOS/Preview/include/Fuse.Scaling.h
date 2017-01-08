// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITransformRelative.h>
#include <Fuse.RelativeTransform-1.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float3.h>
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct Scaling;}}

namespace g{
namespace Fuse{

// public sealed class Scaling :9067
// {
::g::Fuse::RelativeTransform_type* Scaling_typeof();
void Scaling__ctor_4_fn(Scaling* __this);
void Scaling__AppendTo_fn(Scaling* __this, ::g::Fuse::FastMatrix* m, float* weight);
void Scaling__get_EffectiveVector_fn(Scaling* __this, ::g::Uno::Float3* __retval);
void Scaling__get_Factor_fn(Scaling* __this, float* __retval);
void Scaling__set_Factor_fn(Scaling* __this, float* value);
void Scaling__get_IsFlat_fn(Scaling* __this, bool* __retval);
void Scaling__IsIdentity_fn(Scaling* __this, ::g::Uno::Float3* v, bool* __retval);
void Scaling__New2_fn(Scaling** __retval);
void Scaling__PrependTo_fn(Scaling* __this, ::g::Fuse::FastMatrix* m);
void Scaling__get_Vector_fn(Scaling* __this, ::g::Uno::Float3* __retval);
void Scaling__set_Vector_fn(Scaling* __this, ::g::Uno::Float3* value);
void Scaling__get_X_fn(Scaling* __this, float* __retval);
void Scaling__set_X_fn(Scaling* __this, float* value);
void Scaling__get_Y_fn(Scaling* __this, float* __retval);
void Scaling__set_Y_fn(Scaling* __this, float* value);
void Scaling__get_Z_fn(Scaling* __this, float* __retval);
void Scaling__set_Z_fn(Scaling* __this, float* value);

struct Scaling : ::g::Fuse::RelativeTransform
{
    ::g::Uno::Float3 _vector;

    void ctor_4();
    ::g::Uno::Float3 EffectiveVector();
    float Factor();
    void Factor(float value);
    bool IsIdentity(::g::Uno::Float3 v);
    ::g::Uno::Float3 Vector();
    void Vector(::g::Uno::Float3 value);
    float X();
    void X(float value);
    float Y();
    void Y(float value);
    float Z();
    void Z(float value);
    static Scaling* New2();
};
// }

}} // ::g::Fuse
