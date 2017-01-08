// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Quaternion;}}

namespace g{
namespace Uno{

// public static class Quaternion :5294
// {
uClassType* Quaternion_typeof();
void Quaternion__FromEulerAngle_fn(float* pitch, float* yaw, float* roll, ::g::Uno::Float4* __retval);
void Quaternion__FromEulerAngle1_fn(::g::Uno::Float3* v, ::g::Uno::Float4* __retval);

struct Quaternion : uObject
{
    static ::g::Uno::Float4 FromEulerAngle(float pitch, float yaw, float roll);
    static ::g::Uno::Float4 FromEulerAngle1(::g::Uno::Float3 v);
};
// }

}} // ::g::Uno
