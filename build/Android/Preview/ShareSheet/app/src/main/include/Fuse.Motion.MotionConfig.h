// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct Easing;}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct BasicBoundedRegion2D;}}}}
namespace g{namespace Fuse{namespace Motion{struct DestinationMotion;}}}
namespace g{namespace Fuse{namespace Motion{struct MotionConfig;}}}

namespace g{
namespace Fuse{
namespace Motion{

// public class MotionConfig :15
// {
uType* MotionConfig_typeof();
void MotionConfig__ctor__fn(MotionConfig* __this);
void MotionConfig__AcquireSimulation_fn(MotionConfig* __this, uObject** __retval);
void MotionConfig__CreateImpl_fn(MotionConfig* __this);
void MotionConfig__get_Goto_fn(MotionConfig* __this, ::g::Fuse::Motion::DestinationMotion** __retval);
void MotionConfig__get_GotoDistance_fn(MotionConfig* __this, float* __retval);
void MotionConfig__set_GotoDistance_fn(MotionConfig* __this, float* value);
void MotionConfig__get_GotoDuration_fn(MotionConfig* __this, float* __retval);
void MotionConfig__set_GotoDuration_fn(MotionConfig* __this, float* value);
void MotionConfig__get_GotoDurationExp_fn(MotionConfig* __this, float* __retval);
void MotionConfig__set_GotoDurationExp_fn(MotionConfig* __this, float* value);
void MotionConfig__get_GotoEasing_fn(MotionConfig* __this, ::g::Fuse::Animations::Easing** __retval);
void MotionConfig__set_GotoEasing_fn(MotionConfig* __this, ::g::Fuse::Animations::Easing* value);
void MotionConfig__get_GotoType_fn(MotionConfig* __this, int* __retval);
void MotionConfig__set_GotoType_fn(MotionConfig* __this, int* value);
void MotionConfig__New1_fn(MotionConfig** __retval);
void MotionConfig__get_Overflow_fn(MotionConfig* __this, int* __retval);
void MotionConfig__set_Overflow_fn(MotionConfig* __this, int* value);
void MotionConfig__get_OverflowExtent_fn(MotionConfig* __this, ::g::Uno::Float2* __retval);
void MotionConfig__set_OverflowExtent_fn(MotionConfig* __this, ::g::Uno::Float2* value);
void MotionConfig__ReleaseSimulation_fn(MotionConfig* __this);
void MotionConfig__get_Snap_fn(MotionConfig* __this, ::g::Fuse::Motion::DestinationMotion** __retval);
void MotionConfig__get_SnapDistance_fn(MotionConfig* __this, float* __retval);
void MotionConfig__set_SnapDistance_fn(MotionConfig* __this, float* value);
void MotionConfig__get_SnapDuration_fn(MotionConfig* __this, float* __retval);
void MotionConfig__set_SnapDuration_fn(MotionConfig* __this, float* value);
void MotionConfig__get_SnapDurationExp_fn(MotionConfig* __this, float* __retval);
void MotionConfig__set_SnapDurationExp_fn(MotionConfig* __this, float* value);
void MotionConfig__get_SnapEasing_fn(MotionConfig* __this, ::g::Fuse::Animations::Easing** __retval);
void MotionConfig__set_SnapEasing_fn(MotionConfig* __this, ::g::Fuse::Animations::Easing* value);
void MotionConfig__get_SnapType_fn(MotionConfig* __this, int* __retval);
void MotionConfig__set_SnapType_fn(MotionConfig* __this, int* value);
void MotionConfig__get_Unit_fn(MotionConfig* __this, int* __retval);
void MotionConfig__set_Unit_fn(MotionConfig* __this, int* value);

struct MotionConfig : uObject
{
    uStrong< ::g::Fuse::Motion::DestinationMotion*> _goto;
    uStrong< ::g::Fuse::Motion::Simulation::BasicBoundedRegion2D*> _impl;
    int _overflow;
    ::g::Uno::Float2 _overflowExtent;
    uStrong< ::g::Fuse::Motion::DestinationMotion*> _snap;

    void ctor_();
    uObject* AcquireSimulation();
    void CreateImpl();
    ::g::Fuse::Motion::DestinationMotion* Goto();
    float GotoDistance();
    void GotoDistance(float value);
    float GotoDuration();
    void GotoDuration(float value);
    float GotoDurationExp();
    void GotoDurationExp(float value);
    ::g::Fuse::Animations::Easing* GotoEasing();
    void GotoEasing(::g::Fuse::Animations::Easing* value);
    int GotoType();
    void GotoType(int value);
    int Overflow();
    void Overflow(int value);
    ::g::Uno::Float2 OverflowExtent();
    void OverflowExtent(::g::Uno::Float2 value);
    void ReleaseSimulation();
    ::g::Fuse::Motion::DestinationMotion* Snap();
    float SnapDistance();
    void SnapDistance(float value);
    float SnapDuration();
    void SnapDuration(float value);
    float SnapDurationExp();
    void SnapDurationExp(float value);
    ::g::Fuse::Animations::Easing* SnapEasing();
    void SnapEasing(::g::Fuse::Animations::Easing* value);
    int SnapType();
    void SnapType(int value);
    int Unit();
    void Unit(int value);
    static MotionConfig* New1();
};
// }

}}} // ::g::Fuse::Motion
