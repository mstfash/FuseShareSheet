// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/rangecontrols/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{struct RangeControl;}}}
namespace g{namespace Fuse{namespace Gestures{struct LinearRangeBehavior;}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGestureHelper;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class LinearRangeBehavior :394
// {
::g::Fuse::Node_type* LinearRangeBehavior_typeof();
void LinearRangeBehavior__ctor_3_fn(LinearRangeBehavior* __this);
void LinearRangeBehavior__FindRangeControl_fn(LinearRangeBehavior* __this, ::g::Fuse::Controls::RangeControl** __retval);
void LinearRangeBehavior__get_Gesture_fn(LinearRangeBehavior* __this, ::g::Fuse::Gestures::SwipeGestureHelper** __retval);
void LinearRangeBehavior__New2_fn(LinearRangeBehavior** __retval);
void LinearRangeBehavior__OnLostCapture_fn(LinearRangeBehavior* __this);
void LinearRangeBehavior__OnPointerMoved_fn(LinearRangeBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* c);
void LinearRangeBehavior__OnPointerPressed_fn(LinearRangeBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* c);
void LinearRangeBehavior__OnPointerReleased_fn(LinearRangeBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* c);
void LinearRangeBehavior__OnRooted_fn(LinearRangeBehavior* __this);
void LinearRangeBehavior__OnUnrooted_fn(LinearRangeBehavior* __this);
void LinearRangeBehavior__get_Orientation_fn(LinearRangeBehavior* __this, int* __retval);
void LinearRangeBehavior__set_Orientation_fn(LinearRangeBehavior* __this, int* value);
void LinearRangeBehavior__PositionToValue_fn(LinearRangeBehavior* __this, ::g::Uno::Float2* pos, double* __retval);
void LinearRangeBehavior__UpdateValue_fn(LinearRangeBehavior* __this, ::g::Uno::Float2* pos);

struct LinearRangeBehavior : ::g::Fuse::Behavior
{
    int _down;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> _horizontalGesture_;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*>& _horizontalGesture() { return LinearRangeBehavior_typeof()->Init(), _horizontalGesture_; }
    double _initialValue;
    int _orientation;
    ::g::Uno::Float2 _startCoord;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> _verticalGesture_;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*>& _verticalGesture() { return LinearRangeBehavior_typeof()->Init(), _verticalGesture_; }
    uStrong< ::g::Fuse::Controls::RangeControl*> Control;

    void ctor_3();
    ::g::Fuse::Controls::RangeControl* FindRangeControl();
    ::g::Fuse::Gestures::SwipeGestureHelper* Gesture();
    void OnLostCapture();
    void OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* c);
    void OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* c);
    void OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* c);
    int Orientation();
    void Orientation(int value);
    double PositionToValue(::g::Uno::Float2 pos);
    void UpdateValue(::g::Uno::Float2 pos);
    static LinearRangeBehavior* New2();
};
// }

}}} // ::g::Fuse::Gestures
