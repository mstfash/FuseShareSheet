// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Shear.h>
namespace g{namespace Fuse{namespace Animations{struct Skew;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Skew :3839
// {
::g::Fuse::Animations::TransformAnimator_type* Skew_typeof();
void Skew__ctor_4_fn(Skew* __this);
void Skew__get_DegreesX_fn(Skew* __this, float* __retval);
void Skew__set_DegreesX_fn(Skew* __this, float* value);
void Skew__get_DegreesXY_fn(Skew* __this, ::g::Uno::Float2* __retval);
void Skew__set_DegreesXY_fn(Skew* __this, ::g::Uno::Float2* value);
void Skew__get_DegreesY_fn(Skew* __this, float* __retval);
void Skew__set_DegreesY_fn(Skew* __this, float* value);
void Skew__New2_fn(Skew** __retval);
void Skew__Update_fn(Skew* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Shear* t, ::g::Uno::Float4* value);
void Skew__get_XY_fn(Skew* __this, ::g::Uno::Float2* __retval);
void Skew__set_XY_fn(Skew* __this, ::g::Uno::Float2* value);

struct Skew : ::g::Fuse::Animations::TransformAnimator
{
    void ctor_4();
    float DegreesX();
    void DegreesX(float value);
    ::g::Uno::Float2 DegreesXY();
    void DegreesXY(::g::Uno::Float2 value);
    float DegreesY();
    void DegreesY(float value);
    ::g::Uno::Float2 XY();
    void XY(::g::Uno::Float2 value);
    static Skew* New2();
};
// }

}}} // ::g::Fuse::Animations
