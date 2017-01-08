// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.DiscreteTrackProvider.h>
#include <Fuse.Animations.ITrackProvider.h>
#include <Fuse.Animations.KeyframeTrack.h>
#include <Fuse.Animations.TrackProvider.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct DiscreteKeyframeTrack;}}}
namespace g{namespace Fuse{namespace Animations{struct Keyframe;}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimator;}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class DiscreteKeyframeTrack :1019
// {
struct DiscreteKeyframeTrack_type : uType
{
    ::g::Fuse::Animations::DiscreteTrackProvider interface0;
    ::g::Fuse::Animations::ITrackProvider interface1;
    ::g::Fuse::Animations::KeyframeTrack interface2;
    ::g::Fuse::Animations::TrackProvider interface3;
};

DiscreteKeyframeTrack_type* DiscreteKeyframeTrack_typeof();
void DiscreteKeyframeTrack__ctor__fn(DiscreteKeyframeTrack* __this);
void DiscreteKeyframeTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn(DiscreteKeyframeTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, uObject** value, double* strength, int* __retval);
void DiscreteKeyframeTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn(DiscreteKeyframeTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, uObject** value, double* strength, int* __retval);
void DiscreteKeyframeTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(DiscreteKeyframeTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* __retval);
void DiscreteKeyframeTrack__FuseAnimationsTrackProviderGetDuration_fn(DiscreteKeyframeTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval);
void DiscreteKeyframeTrack__Init_fn(DiscreteKeyframeTrack* __this);
void DiscreteKeyframeTrack__get_Interpolation_fn(DiscreteKeyframeTrack* __this, int* __retval);
void DiscreteKeyframeTrack__set_Interpolation_fn(DiscreteKeyframeTrack* __this, int* value);
void DiscreteKeyframeTrack__get_Keyframes_fn(DiscreteKeyframeTrack* __this, uObject** __retval);
void DiscreteKeyframeTrack__New1_fn(DiscreteKeyframeTrack** __retval);

struct DiscreteKeyframeTrack : uObject
{
    double _duration;
    uStrong< ::g::Uno::Collections::List*> _frames;
    bool _init;
    int _Interpolation;

    void ctor_();
    void Init();
    int Interpolation();
    void Interpolation(int value);
    uObject* Keyframes();
    static DiscreteKeyframeTrack* New1();
};
// }

}}} // ::g::Fuse::Animations
