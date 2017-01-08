// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.ContinuousTrackProvider.h>
#include <Fuse.Animations.ITrackProvider.h>
#include <Fuse.Animations.KeyframeTrack.h>
#include <Fuse.Animations.TrackProvider.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct Keyframe;}}}
namespace g{namespace Fuse{namespace Animations{struct SplineTrack;}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimator;}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class SplineTrack :2918
// {
struct SplineTrack_type : uType
{
    ::g::Fuse::Animations::ContinuousTrackProvider interface0;
    ::g::Fuse::Animations::ITrackProvider interface1;
    ::g::Fuse::Animations::KeyframeTrack interface2;
    ::g::Fuse::Animations::TrackProvider interface3;
};

SplineTrack_type* SplineTrack_typeof();
void SplineTrack__ctor__fn(SplineTrack* __this);
void SplineTrack__get_Bias_fn(SplineTrack* __this, float* __retval);
void SplineTrack__set_Bias_fn(SplineTrack* __this, float* value);
void SplineTrack__get_Continuity_fn(SplineTrack* __this, float* __retval);
void SplineTrack__set_Continuity_fn(SplineTrack* __this, float* value);
void SplineTrack__CubicHermitePoint_fn(::g::Uno::Float4* p0, ::g::Uno::Float4* p1, ::g::Uno::Float4* m0, ::g::Uno::Float4* m1, float* t, ::g::Uno::Float4* __retval);
void SplineTrack__FuseAnimationsContinuousTrackProviderGetSeekProgress_fn(SplineTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, int* __retval);
void SplineTrack__FuseAnimationsContinuousTrackProviderGetSeekTime_fn(SplineTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, int* __retval);
void SplineTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(SplineTrack* __this, ::g::Fuse::Animations::TrackAnimator* tas, int* __retval);
void SplineTrack__FuseAnimationsTrackProviderGetDuration_fn(SplineTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval);
void SplineTrack__Init_fn(SplineTrack* __this);
void SplineTrack__get_Interpolation_fn(SplineTrack* __this, int* __retval);
void SplineTrack__set_Interpolation_fn(SplineTrack* __this, int* value);
void SplineTrack__get_Keyframes_fn(SplineTrack* __this, uObject** __retval);
void SplineTrack__LinearPoint_fn(::g::Uno::Float4* p0, ::g::Uno::Float4* p1, ::g::Uno::Float4* m0, ::g::Uno::Float4* m1, float* t, ::g::Uno::Float4* __retval);
void SplineTrack__New1_fn(SplineTrack** __retval);
void SplineTrack__get_Tension_fn(SplineTrack* __this, float* __retval);
void SplineTrack__set_Tension_fn(SplineTrack* __this, float* value);

struct SplineTrack : uObject
{
    float _bias;
    float _continuity;
    double _duration;
    uStrong< ::g::Uno::Collections::List*> _frames;
    bool _init;
    uStrong<uDelegate*> _pointInterpolater;
    int _style;
    float _tension;

    void ctor_();
    float Bias();
    void Bias(float value);
    float Continuity();
    void Continuity(float value);
    void Init();
    int Interpolation();
    void Interpolation(int value);
    uObject* Keyframes();
    float Tension();
    void Tension(float value);
    static ::g::Uno::Float4 CubicHermitePoint(::g::Uno::Float4 p0, ::g::Uno::Float4 p1, ::g::Uno::Float4 m0, ::g::Uno::Float4 m1, float t);
    static ::g::Uno::Float4 LinearPoint(::g::Uno::Float4 p0, ::g::Uno::Float4 p1, ::g::Uno::Float4 m0, ::g::Uno::Float4 m1, float t);
    static SplineTrack* New1();
};
// }

}}} // ::g::Fuse::Animations
