// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Gestures.TransformGesture.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Elements{struct InteractiveTransform;}}}
namespace g{namespace Fuse{namespace Gestures{struct RotateGesture;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class RotateGesture :730
// {
::g::Fuse::Gestures::TransformGesture_type* RotateGesture_typeof();
void RotateGesture__ctor_4_fn(RotateGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target);
void RotateGesture__New2_fn(::g::Fuse::Elements::InteractiveTransform* target, RotateGesture** __retval);
void RotateGesture__OnEnded_fn(RotateGesture* __this);
void RotateGesture__OnRooted_fn(RotateGesture* __this);
void RotateGesture__OnRotated_fn(RotateGesture* __this, float* angle);
void RotateGesture__OnStarted_fn(RotateGesture* __this);
void RotateGesture__OnUnrooted_fn(RotateGesture* __this);
void RotateGesture__OnUpdate_fn(RotateGesture* __this);
void RotateGesture__get_Step_fn(RotateGesture* __this, float* __retval);
void RotateGesture__set_Step_fn(RotateGesture* __this, float* value);
void RotateGesture__get_StepDegrees_fn(RotateGesture* __this, float* __retval);
void RotateGesture__set_StepDegrees_fn(RotateGesture* __this, float* value);

struct RotateGesture : ::g::Fuse::Gestures::TransformGesture
{
    float _startRotation;
    float _Step;

    void ctor_4(::g::Fuse::Elements::InteractiveTransform* target);
    void OnRotated(float angle);
    float Step();
    void Step(float value);
    float StepDegrees();
    void StepDegrees(float value);
    static RotateGesture* New2(::g::Fuse::Elements::InteractiveTransform* target);
};
// }

}}} // ::g::Fuse::Gestures
