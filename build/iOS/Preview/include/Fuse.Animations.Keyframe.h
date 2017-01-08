// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct Keyframe;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Keyframe :1310
// {
uType* Keyframe_typeof();
void Keyframe__ctor__fn(Keyframe* __this);
void Keyframe__CompleteFrames_fn(uObject* frames, float* tension, float* bias, float* continuity, double* __retval);
void Keyframe__get_DegreesX_fn(Keyframe* __this, float* __retval);
void Keyframe__set_DegreesX_fn(Keyframe* __this, float* value);
void Keyframe__get_DegreesXY_fn(Keyframe* __this, ::g::Uno::Float2* __retval);
void Keyframe__set_DegreesXY_fn(Keyframe* __this, ::g::Uno::Float2* value);
void Keyframe__get_DegreesY_fn(Keyframe* __this, float* __retval);
void Keyframe__set_DegreesY_fn(Keyframe* __this, float* value);
void Keyframe__get_DegreesZ_fn(Keyframe* __this, float* __retval);
void Keyframe__set_DegreesZ_fn(Keyframe* __this, float* value);
void Keyframe__KochanekBartelTangent_fn(::g::Uno::Float4* pa, ::g::Uno::Float4* pb, ::g::Uno::Float4* pc, ::g::Uno::Float4* pd, float* t, float* b, float* c, ::g::Uno::Float4* tangentIn, ::g::Uno::Float4* tangentOut);
void Keyframe__New1_fn(Keyframe** __retval);
void Keyframe__get_ObjectValue_fn(Keyframe* __this, uObject** __retval);
void Keyframe__set_ObjectValue_fn(Keyframe* __this, uObject* value);
void Keyframe__get_TangentIn_fn(Keyframe* __this, ::g::Uno::Float4* __retval);
void Keyframe__set_TangentIn_fn(Keyframe* __this, ::g::Uno::Float4* value);
void Keyframe__get_TangentOut_fn(Keyframe* __this, ::g::Uno::Float4* __retval);
void Keyframe__set_TangentOut_fn(Keyframe* __this, ::g::Uno::Float4* value);
void Keyframe__get_Time_fn(Keyframe* __this, double* __retval);
void Keyframe__set_Time_fn(Keyframe* __this, double* value);
void Keyframe__get_TimeDelta_fn(Keyframe* __this, double* __retval);
void Keyframe__set_TimeDelta_fn(Keyframe* __this, double* value);
void Keyframe__get_Value_fn(Keyframe* __this, ::g::Uno::Float4* __retval);
void Keyframe__set_Value_fn(Keyframe* __this, ::g::Uno::Float4* value);
void Keyframe__get_X_fn(Keyframe* __this, float* __retval);
void Keyframe__set_X_fn(Keyframe* __this, float* value);
void Keyframe__get_XY_fn(Keyframe* __this, ::g::Uno::Float2* __retval);
void Keyframe__set_XY_fn(Keyframe* __this, ::g::Uno::Float2* value);
void Keyframe__get_XYZ_fn(Keyframe* __this, ::g::Uno::Float3* __retval);
void Keyframe__set_XYZ_fn(Keyframe* __this, ::g::Uno::Float3* value);
void Keyframe__get_Y_fn(Keyframe* __this, float* __retval);
void Keyframe__set_Y_fn(Keyframe* __this, float* value);
void Keyframe__get_Z_fn(Keyframe* __this, float* __retval);
void Keyframe__set_Z_fn(Keyframe* __this, float* value);

struct Keyframe : uObject
{
    bool _hasTangentIn;
    bool _hasTangentOut;
    bool _hasTime;
    bool _hasTimeDelta;
    uStrong<uObject*> _objectValue;
    ::g::Uno::Float4 _tangentIn;
    ::g::Uno::Float4 _tangentOut;
    double _time;
    double _timeDelta;
    ::g::Uno::Float4 _value;

    void ctor_();
    float DegreesX();
    void DegreesX(float value);
    ::g::Uno::Float2 DegreesXY();
    void DegreesXY(::g::Uno::Float2 value);
    float DegreesY();
    void DegreesY(float value);
    float DegreesZ();
    void DegreesZ(float value);
    uObject* ObjectValue();
    void ObjectValue(uObject* value);
    ::g::Uno::Float4 TangentIn();
    void TangentIn(::g::Uno::Float4 value);
    ::g::Uno::Float4 TangentOut();
    void TangentOut(::g::Uno::Float4 value);
    double Time();
    void Time(double value);
    double TimeDelta();
    void TimeDelta(double value);
    ::g::Uno::Float4 Value();
    void Value(::g::Uno::Float4 value);
    float X();
    void X(float value);
    ::g::Uno::Float2 XY();
    void XY(::g::Uno::Float2 value);
    ::g::Uno::Float3 XYZ();
    void XYZ(::g::Uno::Float3 value);
    float Y();
    void Y(float value);
    float Z();
    void Z(float value);
    static double CompleteFrames(uObject* frames, float tension, float bias, float continuity);
    static void KochanekBartelTangent(::g::Uno::Float4 pa, ::g::Uno::Float4 pb, ::g::Uno::Float4 pc, ::g::Uno::Float4 pd, float t, float b, float c, ::g::Uno::Float4* tangentIn, ::g::Uno::Float4* tangentOut);
    static Keyframe* New1();
};
// }

}}} // ::g::Fuse::Animations
