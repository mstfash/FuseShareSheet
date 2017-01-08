// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Rotation.h>
namespace g{namespace Fuse{namespace Animations{struct Rotate;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Rotate :3732
// {
::g::Fuse::Animations::TransformAnimator_type* Rotate_typeof();
void Rotate__ctor_4_fn(Rotate* __this);
void Rotate__get_Degrees_fn(Rotate* __this, float* __retval);
void Rotate__set_Degrees_fn(Rotate* __this, float* value);
void Rotate__get_DegreesX_fn(Rotate* __this, float* __retval);
void Rotate__set_DegreesX_fn(Rotate* __this, float* value);
void Rotate__get_DegreesY_fn(Rotate* __this, float* __retval);
void Rotate__set_DegreesY_fn(Rotate* __this, float* value);
void Rotate__get_DegreesZ_fn(Rotate* __this, float* __retval);
void Rotate__set_DegreesZ_fn(Rotate* __this, float* value);
void Rotate__New2_fn(Rotate** __retval);
void Rotate__Update_fn(Rotate* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Rotation* t, ::g::Uno::Float4* value);

struct Rotate : ::g::Fuse::Animations::TransformAnimator
{
    void ctor_4();
    float Degrees();
    void Degrees(float value);
    float DegreesX();
    void DegreesX(float value);
    float DegreesY();
    void DegreesY(float value);
    float DegreesZ();
    void DegreesZ(float value);
    static Rotate* New2();
};
// }

}}} // ::g::Fuse::Animations
