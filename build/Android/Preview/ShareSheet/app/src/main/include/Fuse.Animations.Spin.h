// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.OpenAnimator.h>
namespace g{namespace Fuse{namespace Animations{struct AnimatorState;}}}
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{namespace Animations{struct Spin;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Spin :2808
// {
::g::Fuse::Animations::Animator_type* Spin_typeof();
void Spin__ctor_3_fn(Spin* __this);
void Spin__CreateState_fn(Spin* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval);
void Spin__get_Frequency_fn(Spin* __this, double* __retval);
void Spin__set_Frequency_fn(Spin* __this, double* value);
void Spin__New2_fn(Spin** __retval);
void Spin__get_Target_fn(Spin* __this, ::g::Fuse::Visual** __retval);
void Spin__set_Target_fn(Spin* __this, ::g::Fuse::Visual* value);

struct Spin : ::g::Fuse::Animations::OpenAnimator
{
    double _hertz;
    uStrong< ::g::Fuse::Visual*> _Target;

    void ctor_3();
    double Frequency();
    void Frequency(double value);
    ::g::Fuse::Visual* Target();
    void Target(::g::Fuse::Visual* value);
    static Spin* New2();
};
// }

}}} // ::g::Fuse::Animations
