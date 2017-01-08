// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Animations{struct Easing;}}}
namespace g{namespace Fuse{namespace Animations{struct EasingFunctions;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public static class EasingFunctions :1724
// {
uClassType* EasingFunctions_typeof();
void EasingFunctions__BackIn_fn(float* k, float* __retval);
void EasingFunctions__BackInOut_fn(float* k, float* __retval);
void EasingFunctions__BackOut_fn(float* k, float* __retval);
void EasingFunctions__BounceIn_fn(float* k, float* __retval);
void EasingFunctions__BounceInOut_fn(float* k, float* __retval);
void EasingFunctions__BounceOut_fn(float* k, float* __retval);
void EasingFunctions__CircularIn_fn(float* k, float* __retval);
void EasingFunctions__CircularInOut_fn(float* k, float* __retval);
void EasingFunctions__CircularOut_fn(float* k, float* __retval);
void EasingFunctions__CubicIn_fn(float* k, float* __retval);
void EasingFunctions__CubicInOut_fn(float* k, float* __retval);
void EasingFunctions__CubicOut_fn(float* k, float* __retval);
void EasingFunctions__ElasticIn_fn(float* k, float* __retval);
void EasingFunctions__ElasticInOut_fn(float* k, float* __retval);
void EasingFunctions__ElasticOut_fn(float* k, float* __retval);
void EasingFunctions__ExponentialIn_fn(float* k, float* __retval);
void EasingFunctions__ExponentialInOut_fn(float* k, float* __retval);
void EasingFunctions__ExponentialOut_fn(float* k, float* __retval);
void EasingFunctions__FromEasing_fn(::g::Fuse::Animations::Easing* e, uDelegate** __retval);
void EasingFunctions__Linear_fn(float* k, float* __retval);
void EasingFunctions__QuadraticIn_fn(float* k, float* __retval);
void EasingFunctions__QuadraticInOut_fn(float* k, float* __retval);
void EasingFunctions__QuadraticOut_fn(float* k, float* __retval);
void EasingFunctions__QuarticIn_fn(float* k, float* __retval);
void EasingFunctions__QuarticInOut_fn(float* k, float* __retval);
void EasingFunctions__QuarticOut_fn(float* k, float* __retval);
void EasingFunctions__QuinticIn_fn(float* k, float* __retval);
void EasingFunctions__QuinticInOut_fn(float* k, float* __retval);
void EasingFunctions__QuinticOut_fn(float* k, float* __retval);
void EasingFunctions__SinusoidalIn_fn(float* k, float* __retval);
void EasingFunctions__SinusoidalInOut_fn(float* k, float* __retval);
void EasingFunctions__SinusoidalOut_fn(float* k, float* __retval);

struct EasingFunctions : uObject
{
    static float BackIn(float k);
    static float BackInOut(float k);
    static float BackOut(float k);
    static float BounceIn(float k);
    static float BounceInOut(float k);
    static float BounceOut(float k);
    static float CircularIn(float k);
    static float CircularInOut(float k);
    static float CircularOut(float k);
    static float CubicIn(float k);
    static float CubicInOut(float k);
    static float CubicOut(float k);
    static float ElasticIn(float k);
    static float ElasticInOut(float k);
    static float ElasticOut(float k);
    static float ExponentialIn(float k);
    static float ExponentialInOut(float k);
    static float ExponentialOut(float k);
    static uDelegate* FromEasing(::g::Fuse::Animations::Easing* e);
    static float Linear(float k);
    static float QuadraticIn(float k);
    static float QuadraticInOut(float k);
    static float QuadraticOut(float k);
    static float QuarticIn(float k);
    static float QuarticInOut(float k);
    static float QuarticOut(float k);
    static float QuinticIn(float k);
    static float QuinticInOut(float k);
    static float QuinticOut(float k);
    static float SinusoidalIn(float k);
    static float SinusoidalInOut(float k);
    static float SinusoidalOut(float k);
};
// }

}}} // ::g::Fuse::Animations
