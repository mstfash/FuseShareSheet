// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.Animator.h>
namespace g{namespace Fuse{namespace Animations{struct OpenAnimator;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public abstract class OpenAnimator :1955
// {
::g::Fuse::Animations::Animator_type* OpenAnimator_typeof();
void OpenAnimator__ctor_2_fn(OpenAnimator* __this);
void OpenAnimator__get_AnimatorVariant_fn(OpenAnimator* __this, int* __retval);
void OpenAnimator__get_Duration_fn(OpenAnimator* __this, double* __retval);
void OpenAnimator__set_Duration_fn(OpenAnimator* __this, double* value);
void OpenAnimator__GetDelay_fn(OpenAnimator* __this, int* dir, double* totalDuration, double* __retval);
void OpenAnimator__GetDurationWithDelay_fn(OpenAnimator* __this, int* dir, double* __retval);
void OpenAnimator__get_HasDuration_fn(OpenAnimator* __this, bool* __retval);
void OpenAnimator__ResetDuration_fn(OpenAnimator* __this);

struct OpenAnimator : ::g::Fuse::Animations::Animator
{
    double _duration;
    bool _hasDuration;

    void ctor_2();
    double Duration();
    void Duration(double value);
    double GetDelay(int dir, double totalDuration);
    bool HasDuration();
    void ResetDuration();
};
// }

}}} // ::g::Fuse::Animations
