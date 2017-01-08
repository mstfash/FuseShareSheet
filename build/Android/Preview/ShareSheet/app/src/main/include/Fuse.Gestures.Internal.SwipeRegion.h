// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct SwipeRegion;}}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Gestures{
namespace Internal{

// internal sealed class SwipeRegion :677
// {
uType* SwipeRegion_typeof();
void SwipeRegion__ctor_1_fn(SwipeRegion* __this);
void SwipeRegion__ActivateStrength_fn(SwipeRegion* __this, ::g::Uno::Float2* diff, float* __retval);
void SwipeRegion__DoRevertActive_fn(SwipeRegion* __this);
void SwipeRegion__DoSwiped_fn(SwipeRegion* __this);
void SwipeRegion__InteractProgress_fn(SwipeRegion* __this, ::g::Uno::Float2* diff, double* startProgress, bool* __retval);
void SwipeRegion__get_IsActive_fn(SwipeRegion* __this, bool* __retval);
void SwipeRegion__set_IsActive_fn(SwipeRegion* __this, bool* value);
void SwipeRegion__get_IsEnabled_fn(SwipeRegion* __this, bool* __retval);
void SwipeRegion__set_IsEnabled_fn(SwipeRegion* __this, bool* value);
void SwipeRegion__IsPointInside_fn(SwipeRegion* __this, ::g::Fuse::Elements::Element* prime, ::g::Uno::Float2* coord, bool* __retval);
void SwipeRegion__get_IsSelectable_fn(SwipeRegion* __this, bool* __retval);
void SwipeRegion__get_IsStatic_fn(SwipeRegion* __this, bool* __retval);
void SwipeRegion__New2_fn(SwipeRegion** __retval);
void SwipeRegion__get_Progress_fn(SwipeRegion* __this, double* __retval);
void SwipeRegion__ScalarValue_fn(SwipeRegion* __this, ::g::Uno::Float2* x, float* __retval);
void SwipeRegion__SetProgress_fn(SwipeRegion* __this, double* value, bool* interacting, bool* __retval);
void SwipeRegion__get_StableProgress_fn(SwipeRegion* __this, double* __retval);
void SwipeRegion__add_Swiped_fn(SwipeRegion* __this, uDelegate* value);
void SwipeRegion__remove_Swiped_fn(SwipeRegion* __this, uDelegate* value);

struct SwipeRegion : ::g::Uno::UX::PropertyObject
{
    bool _isActive;
    static ::g::Uno::UX::Selector _isActiveName_;
    static ::g::Uno::UX::Selector& _isActiveName() { return SwipeRegion_typeof()->Init(), _isActiveName_; }
    bool _isEnabled;
    double _progress;
    static ::g::Uno::UX::Selector _progressName_;
    static ::g::Uno::UX::Selector& _progressName() { return SwipeRegion_typeof()->Init(), _progressName_; }
    double _stableProgress;
    bool _wasActive;
    float ActivationThreshold;
    int Area;
    ::g::Uno::Float4 AreaVector;
    float AreaVectorDistance;
    bool AutoTrigger;
    bool Continuous;
    float DeactivationThreshold;
    ::g::Uno::Float2 Direction;
    bool IsInterruptible;
    double Length;
    uStrong< ::g::Fuse::Elements::Element*> LengthElement;
    uStrong<uObject*> PointBody1D;
    int Priority;
    float Range;
    bool RevertActive;
    double TimeMultiplier;
    bool TriggerSwipe;
    uStrong<uDelegate*> Swiped1;

    void ctor_1();
    float ActivateStrength(::g::Uno::Float2 diff);
    void DoRevertActive();
    void DoSwiped();
    bool InteractProgress(::g::Uno::Float2 diff, double startProgress);
    bool IsActive();
    void IsActive(bool value);
    bool IsEnabled();
    void IsEnabled(bool value);
    bool IsPointInside(::g::Fuse::Elements::Element* prime, ::g::Uno::Float2 coord);
    bool IsSelectable();
    bool IsStatic();
    double Progress();
    float ScalarValue(::g::Uno::Float2 x);
    bool SetProgress(double value, bool interacting);
    double StableProgress();
    void add_Swiped(uDelegate* value);
    void remove_Swiped(uDelegate* value);
    static SwipeRegion* New2();
};
// }

}}}} // ::g::Fuse::Gestures::Internal
