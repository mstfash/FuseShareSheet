// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Physics/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Physics{struct BodyAttr;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Physics{

// public static class BodyAttr :176
// {
uClassType* BodyAttr_typeof();
void BodyAttr__GetFriction_fn(::g::Fuse::Visual* n, float* __retval);
void BodyAttr__SetFriction_fn(::g::Fuse::Visual* n, float* friction);

struct BodyAttr : uObject
{
    static float GetFriction(::g::Fuse::Visual* n);
    static void SetFriction(::g::Fuse::Visual* n, float friction);
};
// }

}}} // ::g::Fuse::Physics
