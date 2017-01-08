// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Controls.RangeControl.h>
#include <Fuse.Controls.RangeControl2D.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.ScrollPositionChangedArgs.h>
#include <Fuse.Controls.ScrollPositionChangedHandler.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.InteractiveTransform.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.Gestures.CircularRangeBehavior.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedArgs.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.Clicker.h>
#include <Fuse.Gestures.ClickerEventHandler.h>
#include <Fuse.Gestures.ClickerTrigger.h>
#include <Fuse.Gestures.DegreeSpan.h>
#include <Fuse.Gestures.double2.h>
#include <Fuse.Gestures.DoubleClicked.h>
#include <Fuse.Gestures.DoubleTapped.h>
#include <Fuse.Gestures.DoubleTappedArgs.h>
#include <Fuse.Gestures.DoubleTappedHandler.h>
#include <Fuse.Gestures.Edge.h>
#include <Fuse.Gestures.EdgeSwipeAnimation.h>
#include <Fuse.Gestures.Internal.EdgeSwiper.h>
#include <Fuse.Gestures.Internal.Swiper.h>
#include <Fuse.Gestures.Internal.SwipeRegion.h>
#include <Fuse.Gestures.Internal.SwipeRegionArea.h>
#include <Fuse.Gestures.Internal.TwoFinger.h>
#include <Fuse.Gestures.Internal.TwoFingerEventHandler.h>
#include <Fuse.Gestures.Internal.TwoFingerRotateHandler.h>
#include <Fuse.Gestures.Internal.TwoFingerTranslateHandler.h>
#include <Fuse.Gestures.Internal.TwoFingerZoomHandler.h>
#include <Fuse.Gestures.ISizeConstraint.h>
#include <Fuse.Gestures.KeepFocusInView.h>
#include <Fuse.Gestures.KeepInView.h>
#include <Fuse.Gestures.KeepInViewCommon.h>
#include <Fuse.Gestures.LinearRangeBehavior.h>
#include <Fuse.Gestures.LongPressed.h>
#include <Fuse.Gestures.LongPressedArgs.h>
#include <Fuse.Gestures.LongPressedHandler.h>
#include <Fuse.Gestures.PanGesture.h>
#include <Fuse.Gestures.Pressed.h>
#include <Fuse.Gestures.Released.h>
#include <Fuse.Gestures.RotateGesture.h>
#include <Fuse.Gestures.ScrollableGoto.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Gestures.Scroller.MoveUserFlags.h>
#include <Fuse.Gestures.ScrollTo.h>
#include <Fuse.Gestures.SetSwipeActive.h>
#include <Fuse.Gestures.Swiped.h>
#include <Fuse.Gestures.SwipedHow.h>
#include <Fuse.Gestures.SwipeDirection.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Gestures.SwipeGestureHelper.h>
#include <Fuse.Gestures.SwipeType.h>
#include <Fuse.Gestures.SwipingAnimation.h>
#include <Fuse.Gestures.Tapped.h>
#include <Fuse.Gestures.TappedArgs.h>
#include <Fuse.Gestures.TappedHandler.h>
#include <Fuse.Gestures.ToggleSwipeActive.h>
#include <Fuse.Gestures.TransformGesture.h>
#include <Fuse.Gestures.WhileClickerTrigger.h>
#include <Fuse.Gestures.WhileHovering.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Gestures.WhileSwipeActive.h>
#include <Fuse.Gestures.ZoomGesture.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEnteredArgs.h>
#include <Fuse.Input.PointerEnteredHandler.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerLeftArgs.h>
#include <Fuse.Input.PointerLeftHandler.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.Input.PointerWheelMovedHandler.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Motion.MotionConfig.h>
#include <Fuse.Motion.Simulation.BasicBoundedRegion2D.h>
#include <Fuse.Motion.Simulation.BoundedRegion2D.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.PointerVelocity-1.h>
#include <Fuse.Motion.Simulation.SampleFlags.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Fuse.Node.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.RequestBringIntoViewArgs.h>
#include <Fuse.RequestBringIntoViewHandler.h>
#include <Fuse.Time.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
#include <Uno.Vector.h>
static uString* STRINGS[16];
static uType* TYPES[41];

namespace g{
namespace Fuse{
namespace Gestures{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/rangecontrols/$.uno
// -----------------------------------------------------------------------------------------------------------------

// public sealed class CircularRangeBehavior :78
// {
// static CircularRangeBehavior() :78
static void CircularRangeBehavior__cctor_1_fn(uType* __type)
{
    CircularRangeBehavior::_valueName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    CircularRangeBehavior::_degreesValueName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"DegreesValue"*/]);
}

static void CircularRangeBehavior_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("DegreesValue");
    ::STRINGS[2] = uString::Const("RangeControl or BinaryRangeControl");
    ::STRINGS[3] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/rangecontrols/$.uno");
    ::STRINGS[4] = uString::Const("OnRooted");
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[2] = ::g::Fuse::Controls::RangeControl_typeof();
    ::TYPES[3] = ::g::Fuse::Controls::RangeControl2D_typeof();
    ::TYPES[4] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[5] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[6] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[7] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::TYPES[3/*Fuse.Controls.RangeControl2D*/], offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _binaryRangeControl), 0,
        ::TYPES[1/*Fuse.Elements.Element*/], offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _control), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _down), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _endAngle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _hard), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _initialAngle), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _initialRadius), 0,
        ::g::Fuse::Gestures::double2_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _initialValue), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _maximumRadius), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _minimumRadius), 0,
        ::TYPES[2/*Fuse.Controls.RangeControl*/], offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _rangeControl), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _startAngle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::CircularRangeBehavior, _wrap), 0,
        ::TYPES[10/*Uno.UX.ValueChangedHandler<float>*/], offsetof(::g::Fuse::Gestures::CircularRangeBehavior, DegreesValueChanged1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Gestures::CircularRangeBehavior::_degreesValueName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Gestures::CircularRangeBehavior::_valueName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(16,
        new uFunction("get_DegreesValue", NULL, (void*)CircularRangeBehavior__get_DegreesValue_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesValue", NULL, (void*)CircularRangeBehavior__set_DegreesValue_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("add_DegreesValueChanged", NULL, (void*)CircularRangeBehavior__add_DegreesValueChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[10/*Uno.UX.ValueChangedHandler<float>*/]),
        new uFunction("remove_DegreesValueChanged", NULL, (void*)CircularRangeBehavior__remove_DegreesValueChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[10/*Uno.UX.ValueChangedHandler<float>*/]),
        new uFunction("get_EndAngleDegrees", NULL, (void*)CircularRangeBehavior__get_EndAngleDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_EndAngleDegrees", NULL, (void*)CircularRangeBehavior__set_EndAngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_IsWrapping", NULL, (void*)CircularRangeBehavior__get_IsWrapping_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsWrapping", NULL, (void*)CircularRangeBehavior__set_IsWrapping_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_MaximumRadius", NULL, (void*)CircularRangeBehavior__get_MaximumRadius_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_MaximumRadius", NULL, (void*)CircularRangeBehavior__set_MaximumRadius_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_MinimumRadius", NULL, (void*)CircularRangeBehavior__get_MinimumRadius_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_MinimumRadius", NULL, (void*)CircularRangeBehavior__set_MinimumRadius_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)CircularRangeBehavior__New2_fn, 0, true, type, 0),
        new uFunction("SetDegreesValue", NULL, (void*)CircularRangeBehavior__SetDegreesValue_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_StartAngleDegrees", NULL, (void*)CircularRangeBehavior__get_StartAngleDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_StartAngleDegrees", NULL, (void*)CircularRangeBehavior__set_StartAngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Node_type* CircularRangeBehavior_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 29;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(CircularRangeBehavior);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Gestures.CircularRangeBehavior", options);
    type->fp_build_ = CircularRangeBehavior_build;
    type->fp_ctor_ = (void*)CircularRangeBehavior__New2_fn;
    type->fp_cctor_ = CircularRangeBehavior__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))CircularRangeBehavior__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))CircularRangeBehavior__OnUnrooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated CircularRangeBehavior() :78
void CircularRangeBehavior__ctor_3_fn(CircularRangeBehavior* __this)
{
    __this->ctor_3();
}

// private double Angle(Fuse.Input.PointerEventArgs args) :218
void CircularRangeBehavior__Angle_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, double* __retval)
{
    *__retval = __this->Angle(args);
}

// private float2 get_AngleRange() :259
void CircularRangeBehavior__get_AngleRange_fn(CircularRangeBehavior* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->AngleRange();
}

// private Fuse.Gestures.double2 get_ControlRelativeValue() :306
void CircularRangeBehavior__get_ControlRelativeValue_fn(CircularRangeBehavior* __this, ::g::Fuse::Gestures::double2* __retval)
{
    *__retval = __this->ControlRelativeValue();
}

// private void set_ControlRelativeValue(Fuse.Gestures.double2 value) :313
void CircularRangeBehavior__set_ControlRelativeValue_fn(CircularRangeBehavior* __this, ::g::Fuse::Gestures::double2* value)
{
    __this->ControlRelativeValue(*value);
}

// private double get_CurrentRadius() :297
void CircularRangeBehavior__get_CurrentRadius_fn(CircularRangeBehavior* __this, double* __retval)
{
    *__retval = __this->CurrentRadius();
}

// public float get_DegreesValue() :326
void CircularRangeBehavior__get_DegreesValue_fn(CircularRangeBehavior* __this, float* __retval)
{
    *__retval = __this->DegreesValue();
}

// public void set_DegreesValue(float value) :331
void CircularRangeBehavior__set_DegreesValue_fn(CircularRangeBehavior* __this, float* value)
{
    __this->DegreesValue(*value);
}

// public generated void add_DegreesValueChanged(Uno.UX.ValueChangedHandler<float> value) :346
void CircularRangeBehavior__add_DegreesValueChanged_fn(CircularRangeBehavior* __this, uDelegate* value)
{
    __this->add_DegreesValueChanged(value);
}

// public generated void remove_DegreesValueChanged(Uno.UX.ValueChangedHandler<float> value) :346
void CircularRangeBehavior__remove_DegreesValueChanged_fn(CircularRangeBehavior* __this, uDelegate* value)
{
    __this->remove_DegreesValueChanged(value);
}

// public float get_EndAngleDegrees() :99
void CircularRangeBehavior__get_EndAngleDegrees_fn(CircularRangeBehavior* __this, float* __retval)
{
    *__retval = __this->EndAngleDegrees();
}

// public void set_EndAngleDegrees(float value) :100
void CircularRangeBehavior__set_EndAngleDegrees_fn(CircularRangeBehavior* __this, float* value)
{
    __this->EndAngleDegrees(*value);
}

// private void EndInteraction() :172
void CircularRangeBehavior__EndInteraction_fn(CircularRangeBehavior* __this)
{
    __this->EndInteraction();
}

// public bool get_IsWrapping() :123
void CircularRangeBehavior__get_IsWrapping_fn(CircularRangeBehavior* __this, bool* __retval)
{
    *__retval = __this->IsWrapping();
}

// public void set_IsWrapping(bool value) :124
void CircularRangeBehavior__set_IsWrapping_fn(CircularRangeBehavior* __this, bool* value)
{
    __this->IsWrapping(*value);
}

// private float2 LocalVector(Fuse.Input.PointerEventArgs args) :206
void CircularRangeBehavior__LocalVector_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LocalVector(args);
}

// public float get_MaximumRadius() :115
void CircularRangeBehavior__get_MaximumRadius_fn(CircularRangeBehavior* __this, float* __retval)
{
    *__retval = __this->MaximumRadius();
}

// public void set_MaximumRadius(float value) :116
void CircularRangeBehavior__set_MaximumRadius_fn(CircularRangeBehavior* __this, float* value)
{
    __this->MaximumRadius(*value);
}

// public float get_MinimumRadius() :107
void CircularRangeBehavior__get_MinimumRadius_fn(CircularRangeBehavior* __this, float* __retval)
{
    *__retval = __this->MinimumRadius();
}

// public void set_MinimumRadius(float value) :108
void CircularRangeBehavior__set_MinimumRadius_fn(CircularRangeBehavior* __this, float* value)
{
    __this->MinimumRadius(*value);
}

// public generated CircularRangeBehavior New() :78
void CircularRangeBehavior__New2_fn(CircularRangeBehavior** __retval)
{
    *__retval = CircularRangeBehavior::New2();
}

// private void OnLostCapture() :163
void CircularRangeBehavior__OnLostCapture_fn(CircularRangeBehavior* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object s, Fuse.Input.PointerMovedArgs args) :227
void CircularRangeBehavior__OnPointerMoved_fn(CircularRangeBehavior* __this, uObject* s, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(s, args);
}

// private void OnPointerPressed(object s, Fuse.Input.PointerPressedArgs args) :185
void CircularRangeBehavior__OnPointerPressed_fn(CircularRangeBehavior* __this, uObject* s, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(s, args);
}

// private void OnPointerReleased(object s, Fuse.Input.PointerReleasedArgs args) :248
void CircularRangeBehavior__OnPointerReleased_fn(CircularRangeBehavior* __this, uObject* s, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(s, args);
}

// protected override sealed void OnRooted() :127
void CircularRangeBehavior__OnRooted_fn(CircularRangeBehavior* __this)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_control = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[1/*Fuse.Elements.Element*/]);
    __this->_rangeControl = uAs< ::g::Fuse::Controls::RangeControl*>(__this->Parent(), ::TYPES[2/*Fuse.Controls.RangeControl*/]);
    __this->_binaryRangeControl = uAs< ::g::Fuse::Controls::RangeControl2D*>(__this->Parent(), ::TYPES[3/*Fuse.Controls.RangeControl2D*/]);

    if ((__this->_rangeControl == NULL) && (__this->_binaryRangeControl == NULL))
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[2/*"RangeContro...*/], __this->Parent(), __this, ::STRINGS[3/*"/Users/most...*/], 137, ::STRINGS[4/*"OnRooted"*/]);
    else
    {
        ::g::Fuse::Input::Pointer::AddHandlers(__this->_control, uDelegate::New(::TYPES[4/*Fuse.Input.PointerPressedHandler*/], (void*)CircularRangeBehavior__OnPointerPressed_fn, __this), uDelegate::New(::TYPES[5/*Fuse.Input.PointerMovedHandler*/], (void*)CircularRangeBehavior__OnPointerMoved_fn, __this), uDelegate::New(::TYPES[6/*Fuse.Input.PointerReleasedHandler*/], (void*)CircularRangeBehavior__OnPointerReleased_fn, __this), NULL, NULL, NULL);

        if (__this->_rangeControl != NULL)
            uPtr(__this->_rangeControl)->add_ValueChanged(uDelegate::New(::TYPES[7/*Uno.UX.ValueChangedHandler<double>*/], (void*)CircularRangeBehavior__OnValueChanged_fn, __this));
        else
            uPtr(__this->_binaryRangeControl)->add_ValueChanged(uDelegate::New(::TYPES[8/*Uno.UX.ValueChangedHandler<float2>*/], (void*)CircularRangeBehavior__OnValueChanged_fn, __this));
    }
}

// protected override sealed void OnUnrooted() :149
void CircularRangeBehavior__OnUnrooted_fn(CircularRangeBehavior* __this)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnUnrooted()");

    if (__this->_control != NULL)
        ::g::Fuse::Input::Pointer::RemoveHandlers(__this->_control, uDelegate::New(::TYPES[4/*Fuse.Input.PointerPressedHandler*/], (void*)CircularRangeBehavior__OnPointerPressed_fn, __this), uDelegate::New(::TYPES[5/*Fuse.Input.PointerMovedHandler*/], (void*)CircularRangeBehavior__OnPointerMoved_fn, __this), uDelegate::New(::TYPES[6/*Fuse.Input.PointerReleasedHandler*/], (void*)CircularRangeBehavior__OnPointerReleased_fn, __this), NULL, NULL, NULL);

    if (__this->_rangeControl != NULL)
        uPtr(__this->_rangeControl)->remove_ValueChanged(uDelegate::New(::TYPES[7/*Uno.UX.ValueChangedHandler<double>*/], (void*)CircularRangeBehavior__OnValueChanged_fn, __this));

    if (__this->_binaryRangeControl != NULL)
        uPtr(__this->_binaryRangeControl)->remove_ValueChanged(uDelegate::New(::TYPES[8/*Uno.UX.ValueChangedHandler<float2>*/], (void*)CircularRangeBehavior__OnValueChanged_fn, __this));

    __this->_control = NULL;
    __this->_rangeControl = NULL;
    __this->_binaryRangeControl = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void OnValueChanged(object s, object args) :347
void CircularRangeBehavior__OnValueChanged_fn(CircularRangeBehavior* __this, uObject* s, uObject* args)
{
    __this->OnValueChanged(s, args);
}

// private double Radius(Fuse.Input.PointerEventArgs args) :213
void CircularRangeBehavior__Radius_fn(CircularRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, double* __retval)
{
    *__retval = __this->Radius(args);
}

// public void SetDegreesValue(float value, Uno.UX.IPropertyListener origin) :337
void CircularRangeBehavior__SetDegreesValue_fn(CircularRangeBehavior* __this, float* value, uObject* origin)
{
    __this->SetDegreesValue(*value, origin);
}

// public float get_StartAngleDegrees() :91
void CircularRangeBehavior__get_StartAngleDegrees_fn(CircularRangeBehavior* __this, float* __retval)
{
    *__retval = __this->StartAngleDegrees();
}

// public void set_StartAngleDegrees(float value) :92
void CircularRangeBehavior__set_StartAngleDegrees_fn(CircularRangeBehavior* __this, float* value)
{
    __this->StartAngleDegrees(*value);
}

// private void UpdateValue(double angle, double radius) :275
void CircularRangeBehavior__UpdateValue_fn(CircularRangeBehavior* __this, double* angle, double* radius)
{
    __this->UpdateValue(*angle, *radius);
}

::g::Uno::UX::Selector CircularRangeBehavior::_degreesValueName_;
::g::Uno::UX::Selector CircularRangeBehavior::_valueName_;

// public generated CircularRangeBehavior() [instance] :78
void CircularRangeBehavior::ctor_3()
{
    _startAngle = 0.0f;
    _endAngle = 6.28318548f;
    _minimumRadius = 0.0f;
    _maximumRadius = 1.0f;
    _down = -1;
    ctor_2();
}

// private double Angle(Fuse.Input.PointerEventArgs args) [instance] :218
double CircularRangeBehavior::Angle(::g::Fuse::Input::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "Angle(Fuse.Input.PointerEventArgs)");
    ::g::Uno::Float2 o = LocalVector(args);
    float a = ::g::Uno::Math::Atan22(o.Y, o.X);

    if (a < 0.0f)
        a = a + 6.28318548f;

    return (double)a;
}

// private float2 get_AngleRange() [instance] :259
::g::Uno::Float2 CircularRangeBehavior::AngleRange()
{
    float s = _startAngle;
    float e = _endAngle;
    bool low = s < e;
    s = ::g::Uno::Math::Mod1(s, 6.28318548f);
    e = ::g::Uno::Math::Mod1(e, 6.28318548f);

    if (low && (s > (e - 1e-05f)))
        s = s - 6.28318548f;
    else if (!low && (s < (e + 1e-05f)))
        s = s + 6.28318548f;

    return ::g::Uno::Float2__New2(s, e);
}

// private Fuse.Gestures.double2 get_ControlRelativeValue() [instance] :306
::g::Fuse::Gestures::double2 CircularRangeBehavior::ControlRelativeValue()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_ControlRelativeValue()");

    if (_rangeControl != NULL)
        return ::g::Fuse::Gestures::double2__New1(uPtr(_rangeControl)->RelativeValue(), 0.0);
    else
        return ::g::Fuse::Gestures::double2__New2(uPtr(_binaryRangeControl)->RelativeValue());
}

// private void set_ControlRelativeValue(Fuse.Gestures.double2 value) [instance] :313
void CircularRangeBehavior::ControlRelativeValue(::g::Fuse::Gestures::double2 value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "set_ControlRelativeValue(Fuse.Gestures.double2)");

    if (_rangeControl != NULL)
        uPtr(_rangeControl)->RelativeValue(value.X);
    else
        uPtr(_binaryRangeControl)->RelativeValue(value.AsFloat2());
}

// private double get_CurrentRadius() [instance] :297
double CircularRangeBehavior::CurrentRadius()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_CurrentRadius()");
    return (((ControlRelativeValue().Y * (double)(MaximumRadius() - MinimumRadius())) + (double)MinimumRadius()) * (double)uPtr(_control)->ActualSize().X) / 2.0;
}

// public float get_DegreesValue() [instance] :326
float CircularRangeBehavior::DegreesValue()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "get_DegreesValue()");
    ::g::Uno::Float2 range = AngleRange();
    return (float)::g::Uno::Math::RadiansToDegrees((ControlRelativeValue().X * (double)(range.Y - range.X)) + (double)range.X);
}

// public void set_DegreesValue(float value) [instance] :331
void CircularRangeBehavior::DegreesValue(float value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "set_DegreesValue(float)");
    UpdateValue((double)(((value / 360.0f) * 3.14159274f) * 2.0f), CurrentRadius());
}

// public generated void add_DegreesValueChanged(Uno.UX.ValueChangedHandler<float> value) [instance] :346
void CircularRangeBehavior::add_DegreesValueChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "add_DegreesValueChanged(Uno.UX.ValueChangedHandler<float>)");
    DegreesValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(DegreesValueChanged1, value), ::TYPES[10/*Uno.UX.ValueChangedHandler<float>*/]);
}

// public generated void remove_DegreesValueChanged(Uno.UX.ValueChangedHandler<float> value) [instance] :346
void CircularRangeBehavior::remove_DegreesValueChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "remove_DegreesValueChanged(Uno.UX.ValueChangedHandler<float>)");
    DegreesValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(DegreesValueChanged1, value), ::TYPES[10/*Uno.UX.ValueChangedHandler<float>*/]);
}

// public float get_EndAngleDegrees() [instance] :99
float CircularRangeBehavior::EndAngleDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(_endAngle);
}

// public void set_EndAngleDegrees(float value) [instance] :100
void CircularRangeBehavior::EndAngleDegrees(float value)
{
    _endAngle = ::g::Uno::Math::DegreesToRadians1(value);
}

// private void EndInteraction() [instance] :172
void CircularRangeBehavior::EndInteraction()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "EndInteraction()");
    _down = -1;
    _hard = false;
    uPtr(_control)->EndInteraction(this);
    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);
}

// public bool get_IsWrapping() [instance] :123
bool CircularRangeBehavior::IsWrapping()
{
    return _wrap;
}

// public void set_IsWrapping(bool value) [instance] :124
void CircularRangeBehavior::IsWrapping(bool value)
{
    _wrap = value;
}

// private float2 LocalVector(Fuse.Input.PointerEventArgs args) [instance] :206
::g::Uno::Float2 CircularRangeBehavior::LocalVector(::g::Fuse::Input::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "LocalVector(Fuse.Input.PointerEventArgs)");
    ::g::Uno::Float2 l = uPtr(_control)->WindowToLocal(uPtr(args)->WindowPoint());
    ::g::Uno::Float2 o = ::g::Uno::Float2__op_Subtraction2(l, ::g::Uno::Float2__op_Division1(uPtr(_control)->ActualSize(), 2.0f));
    return o;
}

// public float get_MaximumRadius() [instance] :115
float CircularRangeBehavior::MaximumRadius()
{
    return _maximumRadius;
}

// public void set_MaximumRadius(float value) [instance] :116
void CircularRangeBehavior::MaximumRadius(float value)
{
    _maximumRadius = value;
}

// public float get_MinimumRadius() [instance] :107
float CircularRangeBehavior::MinimumRadius()
{
    return _minimumRadius;
}

// public void set_MinimumRadius(float value) [instance] :108
void CircularRangeBehavior::MinimumRadius(float value)
{
    _minimumRadius = value;
}

// private void OnLostCapture() [instance] :163
void CircularRangeBehavior::OnLostCapture()
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnLostCapture()");

    if (_rangeControl != NULL)
        uPtr(_rangeControl)->Value(_initialValue.X);
    else
        uPtr(_binaryRangeControl)->Value(_initialValue.AsFloat2());

    EndInteraction();
}

// private void OnPointerMoved(object s, Fuse.Input.PointerMovedArgs args) [instance] :227
void CircularRangeBehavior::OnPointerMoved(uObject* s, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnPointerMoved(object,Fuse.Input.PointerMovedArgs)");

    if (_down != uPtr(args)->PointIndex())
        return;

    double radius = Radius(args);
    double angle = Angle(args);

    if (!_hard && ((::g::Uno::Math::Abs(angle - _initialAngle) > 0.0872664600610733) || (::g::Uno::Math::Abs(radius - _initialRadius) > 5.0)))
    {
        if (!uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)CircularRangeBehavior__OnLostCapture_fn, this), NULL))
            OnLostCapture();
        else
            _hard = true;
    }

    if (_hard)
        UpdateValue(angle, radius);
}

// private void OnPointerPressed(object s, Fuse.Input.PointerPressedArgs args) [instance] :185
void CircularRangeBehavior::OnPointerPressed(uObject* s, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnPointerPressed(object,Fuse.Input.PointerPressedArgs)");

    if (_down != -1)
        return;

    if (uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)CircularRangeBehavior__OnLostCapture_fn, this), NULL))
    {
        ::g::Fuse::Input::Focus::GiveTo(_control);
        uPtr(_control)->BeginInteraction(this, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)CircularRangeBehavior__OnLostCapture_fn, this));
        _down = uPtr(args)->PointIndex();

        if (_rangeControl != NULL)
            _initialValue = ::g::Fuse::Gestures::double2__New1(uPtr(_rangeControl)->Value(), 0.0);
        else
            _initialValue = ::g::Fuse::Gestures::double2__New2(uPtr(_binaryRangeControl)->Value());

        _initialAngle = Angle(args);
        _initialRadius = Radius(args);
    }
}

// private void OnPointerReleased(object s, Fuse.Input.PointerReleasedArgs args) [instance] :248
void CircularRangeBehavior::OnPointerReleased(uObject* s, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnPointerReleased(object,Fuse.Input.PointerReleasedArgs)");

    if (_down != uPtr(args)->PointIndex())
        return;

    UpdateValue(Angle(args), Radius(args));
    EndInteraction();
}

// private void OnValueChanged(object s, object args) [instance] :347
void CircularRangeBehavior::OnValueChanged(uObject* s, uObject* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "OnValueChanged(object,object)");
    ::g::Uno::UX::ValueChangedArgs* ret2;
    OnPropertyChanged(CircularRangeBehavior::_valueName());
    OnPropertyChanged(CircularRangeBehavior::_degreesValueName());

    if (::g::Uno::Delegate::op_Inequality(DegreesValueChanged1, NULL))
        uPtr(DegreesValueChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[9/*Uno.UX.ValueChangedArgs<float>*/], uCRef(DegreesValue()), &ret2), ret2));
}

// private double Radius(Fuse.Input.PointerEventArgs args) [instance] :213
double CircularRangeBehavior::Radius(::g::Fuse::Input::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "Radius(Fuse.Input.PointerEventArgs)");
    return (double)::g::Uno::Vector::Length(LocalVector(args));
}

// public void SetDegreesValue(float value, Uno.UX.IPropertyListener origin) [instance] :337
void CircularRangeBehavior::SetDegreesValue(float value, uObject* origin)
{
    DegreesValue(value);
}

// public float get_StartAngleDegrees() [instance] :91
float CircularRangeBehavior::StartAngleDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(_startAngle);
}

// public void set_StartAngleDegrees(float value) [instance] :92
void CircularRangeBehavior::StartAngleDegrees(float value)
{
    _startAngle = ::g::Uno::Math::DegreesToRadians1(value);
}

// private void UpdateValue(double angle, double radius) [instance] :275
void CircularRangeBehavior::UpdateValue(double angle, double radius)
{
    uStackFrame __("Fuse.Gestures.CircularRangeBehavior", "UpdateValue(double,double)");
    ::g::Uno::Float2 step = (_rangeControl != NULL) ? ::g::Uno::Float2__New2((float)uPtr(_rangeControl)->RelativeUserStep(), 0.0f) : uPtr(_binaryRangeControl)->RelativeUserStep();
    ::g::Uno::Float2 range = AngleRange();
    double rel = ::g::Uno::Math::Mod(angle - (double)range.X, 6.2831854820251465) / (double)(range.Y - range.X);

    if (step.X > 1e-05f)
        rel = ::g::Uno::Math::Round(rel / (double)step.X) * (double)step.X;

    if (IsWrapping() && (rel > 0.99998998641967773))
        rel = 0.0;

    double relRad = radius / (double)(uPtr(_control)->ActualSize().X / 2.0f);
    double xRad = (relRad - (double)MinimumRadius()) / (double)(MaximumRadius() - MinimumRadius());

    if (step.Y > 1e-05f)
        xRad = ::g::Uno::Math::Round(xRad / (double)step.Y) * (double)step.Y;

    ControlRelativeValue(::g::Fuse::Gestures::double2__New1(rel, xRad));
}

// public generated CircularRangeBehavior New() [static] :78
CircularRangeBehavior* CircularRangeBehavior::New2()
{
    CircularRangeBehavior* obj1 = (CircularRangeBehavior*)uNew(CircularRangeBehavior_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class Clicked :32
// {
static void Clicked_build(uType* type)
{
    ::TYPES[11] = ::g::Fuse::Visual_typeof()->MakeMethod(3/*FirstChild<Fuse.Gestures.Clicked>*/, type, NULL);
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[13] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[14] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(29,
        ::TYPES[14/*Fuse.Gestures.ClickedHandler*/], offsetof(::g::Fuse::Gestures::Clicked, Handler1), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("AddHandler", NULL, (void*)Clicked__AddHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::TYPES[14/*Fuse.Gestures.ClickedHandler*/]),
        new uFunction("add_Handler", NULL, (void*)Clicked__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[14/*Fuse.Gestures.ClickedHandler*/]),
        new uFunction("remove_Handler", NULL, (void*)Clicked__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[14/*Fuse.Gestures.ClickedHandler*/]),
        new uFunction(".ctor", NULL, (void*)Clicked__New2_fn, 0, true, type, 0),
        new uFunction("RemoveHandler", NULL, (void*)Clicked__RemoveHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::TYPES[14/*Fuse.Gestures.ClickedHandler*/]));
}

::g::Fuse::Triggers::Trigger_type* Clicked_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Clicked);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Clicked", options);
    type->fp_build_ = Clicked_build;
    type->fp_ctor_ = (void*)Clicked__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Clicked__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Clicked__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Clicked() :32
void Clicked__ctor_5_fn(Clicked* __this)
{
    __this->ctor_5();
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Gestures.ClickedHandler handler) :35
void Clicked__AddHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Clicked::AddHandler(visual, handler);
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) :57
void Clicked__add_Handler_fn(Clicked* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) :57
void Clicked__remove_Handler_fn(Clicked* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated Clicked New() :32
void Clicked__New2_fn(Clicked** __retval)
{
    *__retval = Clicked::New2();
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) :71
void Clicked__OnClicked_fn(Clicked* __this, ::g::Fuse::Input::PointerEventArgs* args, int* clickCount)
{
    __this->OnClicked(args, *clickCount);
}

// protected override sealed void OnRooted() :59
void Clicked__OnRooted_fn(Clicked* __this)
{
    uStackFrame __("Fuse.Gestures.Clicked", "OnRooted()");
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this);
    uPtr(__this->Clicker)->add_ClickedEvent(uDelegate::New(::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/], (void*)Clicked__OnClicked_fn, __this));
}

// protected override sealed void OnUnrooted() :65
void Clicked__OnUnrooted_fn(Clicked* __this)
{
    uStackFrame __("Fuse.Gestures.Clicked", "OnUnrooted()");
    uPtr(__this->Clicker)->remove_ClickedEvent(uDelegate::New(::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/], (void*)Clicked__OnClicked_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this);
}

// public static void RemoveHandler(Fuse.Visual visual, Fuse.Gestures.ClickedHandler handler) :48
void Clicked__RemoveHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Clicked::RemoveHandler(visual, handler);
}

// public generated Clicked() [instance] :32
void Clicked::ctor_5()
{
    ctor_4();
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) [instance] :57
void Clicked::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicked", "add_Handler(Fuse.Gestures.ClickedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[14/*Fuse.Gestures.ClickedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) [instance] :57
void Clicked::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicked", "remove_Handler(Fuse.Gestures.ClickedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[14/*Fuse.Gestures.ClickedHandler*/]);
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) [instance] :71
void Clicked::OnClicked(::g::Fuse::Input::PointerEventArgs* args, int clickCount)
{
    uStackFrame __("Fuse.Gestures.Clicked", "OnClicked(Fuse.Input.PointerEventArgs,int)");

    if (!IsRootingCompleted())
        return;

    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::ClickedArgs*)::g::Fuse::Gestures::ClickedArgs::New3(args, Parent()));
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Gestures.ClickedHandler handler) [static] :35
void Clicked::AddHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Gestures.Clicked", "AddHandler(Fuse.Visual,Fuse.Gestures.ClickedHandler)");
    Clicked* c = (Clicked*)uPtr(visual)->FirstChild(::TYPES[11/*Fuse.Visual.FirstChild<Fuse.Gestures.Clicked>*/]);

    if (c == NULL)
    {
        c = Clicked::New2();
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(visual)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), c);
    }

    uPtr(c)->add_Handler(handler);
}

// public generated Clicked New() [static] :32
Clicked* Clicked::New2()
{
    Clicked* obj1 = (Clicked*)uNew(Clicked_typeof());
    obj1->ctor_5();
    return obj1;
}

// public static void RemoveHandler(Fuse.Visual visual, Fuse.Gestures.ClickedHandler handler) [static] :48
void Clicked::RemoveHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Gestures.Clicked", "RemoveHandler(Fuse.Visual,Fuse.Gestures.ClickedHandler)");
    Clicked* c = (Clicked*)uPtr(visual)->FirstChild(::TYPES[11/*Fuse.Visual.FirstChild<Fuse.Gestures.Clicked>*/]);

    if (c != NULL)
        uPtr(c)->remove_Handler(handler);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class ClickedArgs :9
// {
static void ClickedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ClickedArgs__New3_fn, 0, true, type, 2, ::g::Fuse::Input::PointerEventArgs_typeof(), ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* ClickedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::CustomPointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ClickedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Gestures.ClickedArgs", options);
    type->fp_build_ = ClickedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public ClickedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :11
void ClickedArgs__ctor_4_fn(ClickedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    __this->ctor_4(args, visual);
}

// public ClickedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :11
void ClickedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual, ClickedArgs** __retval)
{
    *__retval = ClickedArgs::New3(args, visual);
}

// public ClickedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [instance] :11
void ClickedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Gestures.ClickedArgs", ".ctor(Fuse.Input.PointerEventArgs,Fuse.Visual)");
    ctor_3(args, visual);
}

// public ClickedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [static] :11
ClickedArgs* ClickedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    ClickedArgs* obj1 = (ClickedArgs*)uNew(ClickedArgs_typeof());
    obj1->ctor_4(args, visual);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public delegate void ClickedHandler(object sender, Fuse.Gestures.ClickedArgs args) :14
uDelegateType* ClickedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.ClickedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::ClickedArgs_typeof());
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/internal/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class Clicker :47
// {
// static Clicker() :47
static void Clicker__cctor__fn(uType* __type)
{
    Clicker::_clickerProperty_ = ::g::Fuse::Properties::CreateHandle();
}

static void Clicker_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[4] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[6] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[5] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[13] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _attachCount), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _clickCount), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _down), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _hasUpdate), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _hovering), 0,
        ::g::Fuse::Input::PointerEventArgs_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _lastArgs), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _lastUpTime), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _longPressTimeout), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maxDoubleInterval), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maxTapDistanceMoved), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maxTapTimeHeld), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maybeTap), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _pressedPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _startCoord), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _startTime), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _tapCount), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _visual), 0,
        ::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/], offsetof(::g::Fuse::Gestures::Clicker, ClickedEvent1), 0,
        ::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/], offsetof(::g::Fuse::Gestures::Clicker, LongPressedEvent1), 0,
        ::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/], offsetof(::g::Fuse::Gestures::Clicker, PressingEvent1), 0,
        ::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/], offsetof(::g::Fuse::Gestures::Clicker, TappedEvent1), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Gestures::Clicker::_clickerProperty_, uFieldFlagsStatic);
}

uType* Clicker_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 22;
    options.ObjectSize = sizeof(Clicker);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.Clicker", options);
    type->fp_build_ = Clicker_build;
    type->fp_cctor_ = Clicker__cctor__fn;
    return type;
}

// private Clicker(Fuse.Visual visual) :62
void Clicker__ctor__fn(Clicker* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_(visual);
}

// public static Fuse.Gestures.Clicker AttachClicker(Fuse.Visual elm) :68
void Clicker__AttachClicker_fn(::g::Fuse::Visual* elm, Clicker** __retval)
{
    *__retval = Clicker::AttachClicker(elm);
}

// public generated void add_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) :50
void Clicker__add_ClickedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_ClickedEvent(value);
}

// public generated void remove_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) :50
void Clicker__remove_ClickedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_ClickedEvent(value);
}

// public void Detach() :84
void Clicker__Detach_fn(Clicker* __this)
{
    __this->Detach();
}

// private void DoneCapture() :242
void Clicker__DoneCapture_fn(Clicker* __this)
{
    __this->DoneCapture();
}

// public generated void add_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) :51
void Clicker__add_LongPressedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_LongPressedEvent(value);
}

// public generated void remove_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) :51
void Clicker__remove_LongPressedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_LongPressedEvent(value);
}

// private bool NeedCapture() :184
void Clicker__NeedCapture_fn(Clicker* __this, bool* __retval)
{
    *__retval = __this->NeedCapture();
}

// private Clicker New(Fuse.Visual visual) :62
void Clicker__New1_fn(::g::Fuse::Visual* visual, Clicker** __retval)
{
    *__retval = Clicker::New1(visual);
}

// private void OnLostCapture() :261
void Clicker__OnLostCapture_fn(Clicker* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :156
void Clicker__OnPointerMoved_fn(Clicker* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :125
void Clicker__OnPointerPressed_fn(Clicker* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :192
void Clicker__OnPointerReleased_fn(Clicker* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnRooted() :94
void Clicker__OnRooted_fn(Clicker* __this)
{
    __this->OnRooted();
}

// private void OnUnrooted() :101
void Clicker__OnUnrooted_fn(Clicker* __this)
{
    __this->OnUnrooted();
}

// internal float2 get_PressedPosition() :112
void Clicker__get_PressedPosition_fn(Clicker* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PressedPosition();
}

// public generated void add_PressingEvent(Fuse.Gestures.ClickerEventHandler value) :52
void Clicker__add_PressingEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_PressingEvent(value);
}

// public generated void remove_PressingEvent(Fuse.Gestures.ClickerEventHandler value) :52
void Clicker__remove_PressingEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_PressingEvent(value);
}

// private void ReleaseUpdate() :252
void Clicker__ReleaseUpdate_fn(Clicker* __this)
{
    __this->ReleaseUpdate();
}

// public generated void add_TappedEvent(Fuse.Gestures.ClickerEventHandler value) :49
void Clicker__add_TappedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_TappedEvent(value);
}

// public generated void remove_TappedEvent(Fuse.Gestures.ClickerEventHandler value) :49
void Clicker__remove_TappedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_TappedEvent(value);
}

// private void Update() :231
void Clicker__Update_fn(Clicker* __this)
{
    __this->Update();
}

uSStrong< ::g::Fuse::PropertyHandle*> Clicker::_clickerProperty_;

// private Clicker(Fuse.Visual visual) [instance] :62
void Clicker::ctor_(::g::Fuse::Visual* visual)
{
    _maxTapDistanceMoved = 25.0f;
    _maxTapTimeHeld = 0.3f;
    _maxDoubleInterval = 0.3f;
    _longPressTimeout = 0.5f;
    _attachCount = 1;
    _down = -1;
    _visual = visual;
}

// public generated void add_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :50
void Clicker::add_ClickedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "add_ClickedEvent(Fuse.Gestures.ClickerEventHandler)");
    ClickedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ClickedEvent1, value), ::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :50
void Clicker::remove_ClickedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "remove_ClickedEvent(Fuse.Gestures.ClickerEventHandler)");
    ClickedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ClickedEvent1, value), ::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public void Detach() [instance] :84
void Clicker::Detach()
{
    uStackFrame __("Fuse.Gestures.Clicker", "Detach()");
    _attachCount--;

    if (_attachCount == 0)
    {
        OnUnrooted();
        uPtr(uPtr(_visual)->Properties())->Clear(Clicker::_clickerProperty());
    }
}

// private void DoneCapture() [instance] :242
void Clicker::DoneCapture()
{
    uStackFrame __("Fuse.Gestures.Clicker", "DoneCapture()");
    _down = -1;
    ReleaseUpdate();

    if (_hovering && ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
        uPtr(PressingEvent1)->Invoke(2, (::g::Fuse::Input::PointerEventArgs*)_lastArgs, uCRef<int>(0));

    _hovering = false;
}

// public generated void add_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :51
void Clicker::add_LongPressedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "add_LongPressedEvent(Fuse.Gestures.ClickerEventHandler)");
    LongPressedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LongPressedEvent1, value), ::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :51
void Clicker::remove_LongPressedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "remove_LongPressedEvent(Fuse.Gestures.ClickerEventHandler)");
    LongPressedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LongPressedEvent1, value), ::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/]);
}

// private bool NeedCapture() [instance] :184
bool Clicker::NeedCapture()
{
    return (((_maybeTap && ::g::Uno::Delegate::op_Inequality(TappedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(ClickedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL);
}

// private void OnLostCapture() [instance] :261
void Clicker::OnLostCapture()
{
    uStackFrame __("Fuse.Gestures.Clicker", "OnLostCapture()");
    DoneCapture();
    _tapCount = 0;
    _clickCount = 0;
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :156
void Clicker::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Clicker", "OnPointerMoved(object,Fuse.Input.PointerMovedArgs)");

    if (_down != uPtr(args)->PointIndex())
        return;

    float distance = ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(uPtr(args)->WindowPoint(), _startCoord));
    double deltaTime = args->Timestamp() - _startTime;

    if ((distance > _maxTapDistanceMoved) || (deltaTime > (double)_maxTapTimeHeld))
        _maybeTap = false;

    if (!NeedCapture())
    {
        uPtr(args)->ReleaseSoftCapture(this);
        DoneCapture();
    }

    bool hoverNow = uPtr(_visual)->GetHitWindowPoint(args->WindowPoint()) != NULL;

    if (hoverNow != _hovering)
    {
        if (::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
            uPtr(PressingEvent1)->Invoke(2, args, uCRef<int>(hoverNow ? 1 : 0));

        _hovering = hoverNow;
    }

    _lastArgs = args;
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :125
void Clicker::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Clicker", "OnPointerPressed(object,Fuse.Input.PointerPressedArgs)");

    if ((_down != -1) || !uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Clicker__OnLostCapture_fn, this), NULL))
        return;

    double delta = uPtr(args)->Timestamp() - _lastUpTime;

    if (delta > (double)_maxDoubleInterval)
    {
        _tapCount = 0;
        _clickCount = 0;
    }

    _down = args->PointIndex();
    _pressedPosition = uPtr(_visual)->WindowToLocal(args->WindowPoint());
    _startCoord = args->WindowPoint();
    _startTime = args->Timestamp();
    _maybeTap = true;

    if (::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL))
    {
        _hasUpdate = true;
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Clicker__Update_fn, this), 0);
    }

    if (::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
        uPtr(PressingEvent1)->Invoke(2, args, uCRef<int>(1));

    _lastArgs = args;
    _hovering = true;
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :192
void Clicker::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Clicker", "OnPointerReleased(object,Fuse.Input.PointerReleasedArgs)");

    if (_down != uPtr(args)->PointIndex())
        return;

    uPtr(args)->ReleaseSoftCapture(this);
    double deltaTime = args->Timestamp() - _startTime;

    if (_maybeTap && (deltaTime <= (double)_maxTapTimeHeld))
    {
        _tapCount++;

        if (::g::Uno::Delegate::op_Inequality(TappedEvent1, NULL))
            uPtr(TappedEvent1)->Invoke(2, args, uCRef<int>(_tapCount));
    }
    else
        _tapCount = 0;

    bool hoverNow = uPtr(_visual)->GetHitWindowPoint(args->WindowPoint()) != NULL;

    if (hoverNow)
    {
        _clickCount++;

        if (::g::Uno::Delegate::op_Inequality(ClickedEvent1, NULL))
            uPtr(ClickedEvent1)->Invoke(2, args, uCRef<int>(_clickCount));
    }
    else
        _clickCount = 0;

    if (_hovering && ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
        uPtr(PressingEvent1)->Invoke(2, args, uCRef<int>(0));

    _hovering = false;
    DoneCapture();
    _lastUpTime = args->Timestamp();
    _lastArgs = args;
}

// private void OnRooted() [instance] :94
void Clicker::OnRooted()
{
    uStackFrame __("Fuse.Gestures.Clicker", "OnRooted()");
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _visual, uDelegate::New(::TYPES[4/*Fuse.Input.PointerPressedHandler*/], (void*)Clicker__OnPointerPressed_fn, this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _visual, uDelegate::New(::TYPES[6/*Fuse.Input.PointerReleasedHandler*/], (void*)Clicker__OnPointerReleased_fn, this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _visual, uDelegate::New(::TYPES[5/*Fuse.Input.PointerMovedHandler*/], (void*)Clicker__OnPointerMoved_fn, this));
}

// private void OnUnrooted() [instance] :101
void Clicker::OnUnrooted()
{
    uStackFrame __("Fuse.Gestures.Clicker", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _visual, uDelegate::New(::TYPES[4/*Fuse.Input.PointerPressedHandler*/], (void*)Clicker__OnPointerPressed_fn, this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _visual, uDelegate::New(::TYPES[6/*Fuse.Input.PointerReleasedHandler*/], (void*)Clicker__OnPointerReleased_fn, this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _visual, uDelegate::New(::TYPES[5/*Fuse.Input.PointerMovedHandler*/], (void*)Clicker__OnPointerMoved_fn, this));
    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);
}

// internal float2 get_PressedPosition() [instance] :112
::g::Uno::Float2 Clicker::PressedPosition()
{
    return _pressedPosition;
}

// public generated void add_PressingEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :52
void Clicker::add_PressingEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "add_PressingEvent(Fuse.Gestures.ClickerEventHandler)");
    PressingEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PressingEvent1, value), ::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_PressingEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :52
void Clicker::remove_PressingEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "remove_PressingEvent(Fuse.Gestures.ClickerEventHandler)");
    PressingEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PressingEvent1, value), ::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/]);
}

// private void ReleaseUpdate() [instance] :252
void Clicker::ReleaseUpdate()
{
    uStackFrame __("Fuse.Gestures.Clicker", "ReleaseUpdate()");

    if (_hasUpdate)
    {
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Clicker__Update_fn, this), 0);
        _hasUpdate = false;
    }
}

// public generated void add_TappedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :49
void Clicker::add_TappedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "add_TappedEvent(Fuse.Gestures.ClickerEventHandler)");
    TappedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TappedEvent1, value), ::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_TappedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :49
void Clicker::remove_TappedEvent(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Clicker", "remove_TappedEvent(Fuse.Gestures.ClickerEventHandler)");
    TappedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TappedEvent1, value), ::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/]);
}

// private void Update() [instance] :231
void Clicker::Update()
{
    uStackFrame __("Fuse.Gestures.Clicker", "Update()");
    double elapsed = ::g::Fuse::Time::FrameTime() - _startTime;

    if (::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL) && (elapsed > (double)_longPressTimeout))
    {
        uPtr(LongPressedEvent1)->Invoke(2, (::g::Fuse::Input::PointerEventArgs*)_lastArgs, uCRef<int>(0));
        ::g::Fuse::Input::Pointer::ReleaseSoftCapture(_down, this);
        DoneCapture();
    }
}

// public static Fuse.Gestures.Clicker AttachClicker(Fuse.Visual elm) [static] :68
Clicker* Clicker::AttachClicker(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Gestures.Clicker", "AttachClicker(Fuse.Visual)");
    Clicker_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(Clicker::_clickerProperty(), &v))
    {
        Clicker* c = uAs<Clicker*>(v, Clicker_typeof());
        uPtr(c)->_attachCount++;
        return c;
    }

    Clicker* nc = Clicker::New1(elm);
    uPtr(uPtr(elm)->Properties())->Set(Clicker::_clickerProperty(), nc);
    nc->OnRooted();
    return nc;
}

// private Clicker New(Fuse.Visual visual) [static] :62
Clicker* Clicker::New1(::g::Fuse::Visual* visual)
{
    Clicker* obj1 = (Clicker*)uNew(Clicker_typeof());
    obj1->ctor_(visual);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/internal/$.uno
// -------------------------------------------------------------------------------------------------

// internal delegate void ClickerEventHandler(Fuse.Input.PointerEventArgs args, int count) :11
uDelegateType* ClickerEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.ClickerEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Fuse::Input::PointerEventArgs_typeof(),
        ::g::Uno::Int_typeof());
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/internal/$.uno
// -------------------------------------------------------------------------------------------------

// public abstract class ClickerTrigger :13
// {
static void ClickerTrigger_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(::g::Fuse::Gestures::ClickerTrigger, Clicker), 0);
}

::g::Fuse::Triggers::Trigger_type* ClickerTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(ClickerTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.ClickerTrigger", options);
    type->fp_build_ = ClickerTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))ClickerTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))ClickerTrigger__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated ClickerTrigger() :13
void ClickerTrigger__ctor_4_fn(ClickerTrigger* __this)
{
    __this->ctor_4();
}

// protected override void OnRooted() :16
void ClickerTrigger__OnRooted_fn(ClickerTrigger* __this)
{
    uStackFrame __("Fuse.Gestures.ClickerTrigger", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->Clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->Parent());
}

// protected override void OnUnrooted() :22
void ClickerTrigger__OnUnrooted_fn(ClickerTrigger* __this)
{
    uStackFrame __("Fuse.Gestures.ClickerTrigger", "OnUnrooted()");
    uPtr(__this->Clicker)->Detach();
    __this->Clicker = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// protected generated ClickerTrigger() [instance] :13
void ClickerTrigger::ctor_4()
{
    ctor_3();
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/internal/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class DegreeSpan :584
// {
static void DegreeSpan_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::DegreeSpan, _a), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::DegreeSpan, _b), 0);
}

uType* DegreeSpan_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DegreeSpan);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.DegreeSpan", options);
    type->fp_build_ = DegreeSpan_build;
    return type;
}

// public DegreeSpan(float a, float b) :589
void DegreeSpan__ctor__fn(DegreeSpan* __this, float* a, float* b)
{
    __this->ctor_(*a, *b);
}

// public bool IsWithinBounds(float x) :595
void DegreeSpan__IsWithinBounds_fn(DegreeSpan* __this, float* x, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*x);
}

// public DegreeSpan New(float a, float b) :589
void DegreeSpan__New1_fn(float* a, float* b, DegreeSpan** __retval)
{
    *__retval = DegreeSpan::New1(*a, *b);
}

// public DegreeSpan(float a, float b) [instance] :589
void DegreeSpan::ctor_(float a, float b)
{
    _a = a;
    _b = b;
}

// public bool IsWithinBounds(float x) [instance] :595
bool DegreeSpan::IsWithinBounds(float x)
{
    float angle1 = _a;
    float angle2 = _b;
    float rAngle = ::g::Uno::Math::Mod1(::g::Uno::Math::Mod1(angle2 - angle1, 360.0f) + 360.0f, 360.0f);

    if (rAngle >= 180.0f)
    {
        float a = angle1;
        angle1 = angle2;
        angle2 = a;
    }

    if (angle1 <= angle2)
        return (x >= angle1) && (x <= angle2);
    else
        return (x >= angle2) || (x <= angle2);
}

// public DegreeSpan New(float a, float b) [static] :589
DegreeSpan* DegreeSpan::New1(float a, float b)
{
    DegreeSpan* obj1 = (DegreeSpan*)uNew(DegreeSpan_typeof());
    obj1->ctor_(a, b);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/rangecontrols/$.uno
// -----------------------------------------------------------------------------------------------------------------

// internal struct double2 :13
// {
static void double2_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::double2, X), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::double2, Y), 0);
}

uStructType* double2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(double2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Gestures.double2", options);
    type->fp_build_ = double2_build;
    return type;
}

// public double2(double x, double y) :18
void double2__ctor__fn(double2* __this, double* x, double* y)
{
    __this->ctor_(*x, *y);
}

// public double2(float2 v) :24
void double2__ctor_1_fn(double2* __this, ::g::Uno::Float2* v)
{
    __this->ctor_1(*v);
}

// public float2 get_AsFloat2() :32
void double2__get_AsFloat2_fn(double2* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->AsFloat2();
}

// public double2 New(double x, double y) :18
void double2__New1_fn(double* x, double* y, double2* __retval)
{
    *__retval = double2__New1(*x, *y);
}

// public double2 New(float2 v) :24
void double2__New2_fn(::g::Uno::Float2* v, double2* __retval)
{
    *__retval = double2__New2(*v);
}

// public double2(double x, double y) [instance] :18
void double2::ctor_(double x, double y)
{
    X = x;
    Y = y;
}

// public double2(float2 v) [instance] :24
void double2::ctor_1(::g::Uno::Float2 v)
{
    X = (double)v.X;
    Y = (double)v.Y;
}

// public float2 get_AsFloat2() [instance] :32
::g::Uno::Float2 double2::AsFloat2()
{
    return ::g::Uno::Float2__New2((float)X, (float)Y);
}

// public double2 New(double x, double y) [static] :18
double2 double2__New1(double x, double y)
{
    double2 obj1;
    obj1.ctor_(x, y);
    return obj1;
}

// public double2 New(float2 v) [static] :24
double2 double2__New2(::g::Uno::Float2 v)
{
    double2 obj2;
    obj2.ctor_1(v);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class DoubleClicked :96
// {
static void DoubleClicked_build(uType* type)
{
    ::TYPES[13] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[14] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(29,
        ::TYPES[14/*Fuse.Gestures.ClickedHandler*/], offsetof(::g::Fuse::Gestures::DoubleClicked, Handler1), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("add_Handler", NULL, (void*)DoubleClicked__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[14/*Fuse.Gestures.ClickedHandler*/]),
        new uFunction("remove_Handler", NULL, (void*)DoubleClicked__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[14/*Fuse.Gestures.ClickedHandler*/]),
        new uFunction(".ctor", NULL, (void*)DoubleClicked__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* DoubleClicked_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(DoubleClicked);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.DoubleClicked", options);
    type->fp_build_ = DoubleClicked_build;
    type->fp_ctor_ = (void*)DoubleClicked__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))DoubleClicked__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))DoubleClicked__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated DoubleClicked() :96
void DoubleClicked__ctor_5_fn(DoubleClicked* __this)
{
    __this->ctor_5();
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) :100
void DoubleClicked__add_Handler_fn(DoubleClicked* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) :100
void DoubleClicked__remove_Handler_fn(DoubleClicked* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated DoubleClicked New() :96
void DoubleClicked__New2_fn(DoubleClicked** __retval)
{
    *__retval = DoubleClicked::New2();
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) :114
void DoubleClicked__OnClicked_fn(DoubleClicked* __this, ::g::Fuse::Input::PointerEventArgs* args, int* clickCount)
{
    __this->OnClicked(args, *clickCount);
}

// protected override sealed void OnRooted() :102
void DoubleClicked__OnRooted_fn(DoubleClicked* __this)
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", "OnRooted()");
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this);
    uPtr(__this->Clicker)->add_ClickedEvent(uDelegate::New(::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/], (void*)DoubleClicked__OnClicked_fn, __this));
}

// protected override sealed void OnUnrooted() :108
void DoubleClicked__OnUnrooted_fn(DoubleClicked* __this)
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", "OnUnrooted()");
    uPtr(__this->Clicker)->remove_ClickedEvent(uDelegate::New(::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/], (void*)DoubleClicked__OnClicked_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this);
}

// public generated DoubleClicked() [instance] :96
void DoubleClicked::ctor_5()
{
    ctor_4();
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) [instance] :100
void DoubleClicked::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", "add_Handler(Fuse.Gestures.ClickedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[14/*Fuse.Gestures.ClickedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) [instance] :100
void DoubleClicked::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", "remove_Handler(Fuse.Gestures.ClickedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[14/*Fuse.Gestures.ClickedHandler*/]);
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) [instance] :114
void DoubleClicked::OnClicked(::g::Fuse::Input::PointerEventArgs* args, int clickCount)
{
    uStackFrame __("Fuse.Gestures.DoubleClicked", "OnClicked(Fuse.Input.PointerEventArgs,int)");

    if (clickCount != 2)
        return;

    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::ClickedArgs*)::g::Fuse::Gestures::ClickedArgs::New3(args, Parent()));
}

// public generated DoubleClicked New() [static] :96
DoubleClicked* DoubleClicked::New2()
{
    DoubleClicked* obj1 = (DoubleClicked*)uNew(DoubleClicked_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class DoubleTapped :1475
// {
static void DoubleTapped_build(uType* type)
{
    ::TYPES[13] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[15] = ::g::Fuse::Gestures::DoubleTappedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(29,
        ::TYPES[15/*Fuse.Gestures.DoubleTappedHandler*/], offsetof(::g::Fuse::Gestures::DoubleTapped, Handler1), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("add_Handler", NULL, (void*)DoubleTapped__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[15/*Fuse.Gestures.DoubleTappedHandler*/]),
        new uFunction("remove_Handler", NULL, (void*)DoubleTapped__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[15/*Fuse.Gestures.DoubleTappedHandler*/]),
        new uFunction(".ctor", NULL, (void*)DoubleTapped__New2_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)DoubleTapped__New3_fn, 0, true, type, 1, ::TYPES[15/*Fuse.Gestures.DoubleTappedHandler*/]));
}

::g::Fuse::Triggers::Trigger_type* DoubleTapped_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(DoubleTapped);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.DoubleTapped", options);
    type->fp_build_ = DoubleTapped_build;
    type->fp_ctor_ = (void*)DoubleTapped__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))DoubleTapped__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))DoubleTapped__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public DoubleTapped() :1481
void DoubleTapped__ctor_5_fn(DoubleTapped* __this)
{
    __this->ctor_5();
}

// public DoubleTapped(Fuse.Gestures.DoubleTappedHandler handler) :1483
void DoubleTapped__ctor_6_fn(DoubleTapped* __this, uDelegate* handler)
{
    __this->ctor_6(handler);
}

// public generated void add_Handler(Fuse.Gestures.DoubleTappedHandler value) :1479
void DoubleTapped__add_Handler_fn(DoubleTapped* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.DoubleTappedHandler value) :1479
void DoubleTapped__remove_Handler_fn(DoubleTapped* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public DoubleTapped New() :1481
void DoubleTapped__New2_fn(DoubleTapped** __retval)
{
    *__retval = DoubleTapped::New2();
}

// public DoubleTapped New(Fuse.Gestures.DoubleTappedHandler handler) :1483
void DoubleTapped__New3_fn(uDelegate* handler, DoubleTapped** __retval)
{
    *__retval = DoubleTapped::New3(handler);
}

// protected override sealed void OnRooted() :1488
void DoubleTapped__OnRooted_fn(DoubleTapped* __this)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", "OnRooted()");
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this);
    uPtr(__this->Clicker)->add_TappedEvent(uDelegate::New(::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/], (void*)DoubleTapped__OnTapped_fn, __this));
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) :1500
void DoubleTapped__OnTapped_fn(DoubleTapped* __this, ::g::Fuse::Input::PointerEventArgs* args, int* tapCount)
{
    __this->OnTapped(args, *tapCount);
}

// protected override sealed void OnUnrooted() :1494
void DoubleTapped__OnUnrooted_fn(DoubleTapped* __this)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", "OnUnrooted()");
    uPtr(__this->Clicker)->remove_TappedEvent(uDelegate::New(::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/], (void*)DoubleTapped__OnTapped_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this);
}

// public DoubleTapped() [instance] :1481
void DoubleTapped::ctor_5()
{
    ctor_4();
}

// public DoubleTapped(Fuse.Gestures.DoubleTappedHandler handler) [instance] :1483
void DoubleTapped::ctor_6(uDelegate* handler)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", ".ctor(Fuse.Gestures.DoubleTappedHandler)");
    ctor_4();
    add_Handler(handler);
}

// public generated void add_Handler(Fuse.Gestures.DoubleTappedHandler value) [instance] :1479
void DoubleTapped::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", "add_Handler(Fuse.Gestures.DoubleTappedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[15/*Fuse.Gestures.DoubleTappedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.DoubleTappedHandler value) [instance] :1479
void DoubleTapped::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", "remove_Handler(Fuse.Gestures.DoubleTappedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[15/*Fuse.Gestures.DoubleTappedHandler*/]);
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) [instance] :1500
void DoubleTapped::OnTapped(::g::Fuse::Input::PointerEventArgs* args, int tapCount)
{
    uStackFrame __("Fuse.Gestures.DoubleTapped", "OnTapped(Fuse.Input.PointerEventArgs,int)");

    if (tapCount != 2)
        return;

    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::DoubleTappedArgs*)::g::Fuse::Gestures::DoubleTappedArgs::New3(args, Parent()));
}

// public DoubleTapped New() [static] :1481
DoubleTapped* DoubleTapped::New2()
{
    DoubleTapped* obj1 = (DoubleTapped*)uNew(DoubleTapped_typeof());
    obj1->ctor_5();
    return obj1;
}

// public DoubleTapped New(Fuse.Gestures.DoubleTappedHandler handler) [static] :1483
DoubleTapped* DoubleTapped::New3(uDelegate* handler)
{
    DoubleTapped* obj2 = (DoubleTapped*)uNew(DoubleTapped_typeof());
    obj2->ctor_6(handler);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class DoubleTappedArgs :1451
// {
static void DoubleTappedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DoubleTappedArgs__New3_fn, 0, true, type, 2, ::g::Fuse::Input::PointerEventArgs_typeof(), ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* DoubleTappedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::CustomPointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DoubleTappedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Gestures.DoubleTappedArgs", options);
    type->fp_build_ = DoubleTappedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public DoubleTappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :1453
void DoubleTappedArgs__ctor_4_fn(DoubleTappedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    __this->ctor_4(args, visual);
}

// public DoubleTappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :1453
void DoubleTappedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual, DoubleTappedArgs** __retval)
{
    *__retval = DoubleTappedArgs::New3(args, visual);
}

// public DoubleTappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [instance] :1453
void DoubleTappedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Gestures.DoubleTappedArgs", ".ctor(Fuse.Input.PointerEventArgs,Fuse.Visual)");
    ctor_3(args, visual);
}

// public DoubleTappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [static] :1453
DoubleTappedArgs* DoubleTappedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    DoubleTappedArgs* obj1 = (DoubleTappedArgs*)uNew(DoubleTappedArgs_typeof());
    obj1->ctor_4(args, visual);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public delegate void DoubleTappedHandler(object sender, Fuse.Gestures.DoubleTappedArgs args) :1459
uDelegateType* DoubleTappedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.DoubleTappedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::DoubleTappedArgs_typeof());
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public enum Edge :1632
uEnumType* Edge_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Edge", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class EdgeSwipeAnimation :1644
// {
static void EdgeSwipeAnimation_build(uType* type)
{
    ::STRINGS[5] = uString::Const("EdgeSwipeAnimation must be attached to an Element");
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[16] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Double_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof(), offsetof(::g::Fuse::Gestures::EdgeSwipeAnimation, _swiper), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("Disable", NULL, (void*)EdgeSwipeAnimation__Disable_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Edge", NULL, (void*)EdgeSwipeAnimation__get_Edge_fn, 0, false, ::g::Fuse::Gestures::Edge_typeof(), 0),
        new uFunction("set_Edge", NULL, (void*)EdgeSwipeAnimation__set_Edge_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::Edge_typeof()),
        new uFunction("get_EdgeThreshold", NULL, (void*)EdgeSwipeAnimation__get_EdgeThreshold_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_EdgeThreshold", NULL, (void*)EdgeSwipeAnimation__set_EdgeThreshold_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Enable", NULL, (void*)EdgeSwipeAnimation__Enable_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_IsEnabled", NULL, (void*)EdgeSwipeAnimation__get_IsEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsEnabled", NULL, (void*)EdgeSwipeAnimation__set_IsEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)EdgeSwipeAnimation__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)EdgeSwipeAnimation__get_Target_fn, 0, false, ::TYPES[1/*Fuse.Elements.Element*/], 0),
        new uFunction("set_Target", NULL, (void*)EdgeSwipeAnimation__set_Target_fn, 0, false, uVoid_typeof(), 1, ::TYPES[1/*Fuse.Elements.Element*/]));
}

::g::Fuse::Triggers::Trigger_type* EdgeSwipeAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(EdgeSwipeAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.EdgeSwipeAnimation", options);
    type->fp_build_ = EdgeSwipeAnimation_build;
    type->fp_ctor_ = (void*)EdgeSwipeAnimation__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))EdgeSwipeAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))EdgeSwipeAnimation__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated EdgeSwipeAnimation() :1644
void EdgeSwipeAnimation__ctor_4_fn(EdgeSwipeAnimation* __this)
{
    __this->ctor_4();
}

// public void Disable() :1698
void EdgeSwipeAnimation__Disable_fn(EdgeSwipeAnimation* __this)
{
    __this->Disable();
}

// public Fuse.Gestures.Edge get_Edge() :1651
void EdgeSwipeAnimation__get_Edge_fn(EdgeSwipeAnimation* __this, int* __retval)
{
    *__retval = __this->Edge();
}

// public void set_Edge(Fuse.Gestures.Edge value) :1652
void EdgeSwipeAnimation__set_Edge_fn(EdgeSwipeAnimation* __this, int* value)
{
    __this->Edge(*value);
}

// public float get_EdgeThreshold() :1658
void EdgeSwipeAnimation__get_EdgeThreshold_fn(EdgeSwipeAnimation* __this, float* __retval)
{
    *__retval = __this->EdgeThreshold();
}

// public void set_EdgeThreshold(float value) :1659
void EdgeSwipeAnimation__set_EdgeThreshold_fn(EdgeSwipeAnimation* __this, float* value)
{
    __this->EdgeThreshold(*value);
}

// public void Enable() :1693
void EdgeSwipeAnimation__Enable_fn(EdgeSwipeAnimation* __this)
{
    __this->Enable();
}

// public bool get_IsEnabled() :1705
void EdgeSwipeAnimation__get_IsEnabled_fn(EdgeSwipeAnimation* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public void set_IsEnabled(bool value) :1706
void EdgeSwipeAnimation__set_IsEnabled_fn(EdgeSwipeAnimation* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public generated EdgeSwipeAnimation New() :1644
void EdgeSwipeAnimation__New2_fn(EdgeSwipeAnimation** __retval)
{
    *__retval = EdgeSwipeAnimation::New2();
}

// private void OnProgressChanged(object s, double progress) :1688
void EdgeSwipeAnimation__OnProgressChanged1_fn(EdgeSwipeAnimation* __this, uObject* s, double* progress)
{
    __this->OnProgressChanged1(s, *progress);
}

// protected override sealed void OnRooted() :1669
void EdgeSwipeAnimation__OnRooted_fn(EdgeSwipeAnimation* __this)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::Elements::Element* element = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[1/*Fuse.Elements.Element*/]);

    if (element == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[5/*"EdgeSwipeAn...*/]));

    uPtr(__this->_swiper)->Rooted(element);
    uPtr(__this->_swiper)->Seek(0.0);
    uPtr(__this->_swiper)->add_ProgressChanged(uDelegate::New(::TYPES[16/*Uno.Action<object, double>*/], (void*)EdgeSwipeAnimation__OnProgressChanged1_fn, __this));
}

// protected override sealed void OnUnrooted() :1681
void EdgeSwipeAnimation__OnUnrooted_fn(EdgeSwipeAnimation* __this)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "OnUnrooted()");
    uPtr(__this->_swiper)->Unrooted();
    uPtr(__this->_swiper)->remove_ProgressChanged(uDelegate::New(::TYPES[16/*Uno.Action<object, double>*/], (void*)EdgeSwipeAnimation__OnProgressChanged1_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Elements.Element get_Target() :1665
void EdgeSwipeAnimation__get_Target_fn(EdgeSwipeAnimation* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Target();
}

// public void set_Target(Fuse.Elements.Element value) :1666
void EdgeSwipeAnimation__set_Target_fn(EdgeSwipeAnimation* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Target(value);
}

// public generated EdgeSwipeAnimation() [instance] :1644
void EdgeSwipeAnimation::ctor_4()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", ".ctor()");
    _swiper = ::g::Fuse::Gestures::Internal::EdgeSwiper::New1();
    ctor_3();
}

// public void Disable() [instance] :1698
void EdgeSwipeAnimation::Disable()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "Disable()");
    uPtr(_swiper)->Disable();
}

// public Fuse.Gestures.Edge get_Edge() [instance] :1651
int EdgeSwipeAnimation::Edge()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "get_Edge()");
    return uPtr(_swiper)->Edge();
}

// public void set_Edge(Fuse.Gestures.Edge value) [instance] :1652
void EdgeSwipeAnimation::Edge(int value)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "set_Edge(Fuse.Gestures.Edge)");
    uPtr(_swiper)->Edge(value);
}

// public float get_EdgeThreshold() [instance] :1658
float EdgeSwipeAnimation::EdgeThreshold()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "get_EdgeThreshold()");
    return uPtr(_swiper)->EdgeThreshold();
}

// public void set_EdgeThreshold(float value) [instance] :1659
void EdgeSwipeAnimation::EdgeThreshold(float value)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "set_EdgeThreshold(float)");
    uPtr(_swiper)->EdgeThreshold(value);
}

// public void Enable() [instance] :1693
void EdgeSwipeAnimation::Enable()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "Enable()");
    uPtr(_swiper)->Enable();
}

// public bool get_IsEnabled() [instance] :1705
bool EdgeSwipeAnimation::IsEnabled()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "get_IsEnabled()");
    return uPtr(_swiper)->IsEnabled();
}

// public void set_IsEnabled(bool value) [instance] :1706
void EdgeSwipeAnimation::IsEnabled(bool value)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "set_IsEnabled(bool)");

    if (value)
        Enable();
    else
        Disable();
}

// private void OnProgressChanged(object s, double progress) [instance] :1688
void EdgeSwipeAnimation::OnProgressChanged1(uObject* s, double progress)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "OnProgressChanged(object,double)");
    Seek(progress, 0);
}

// public Fuse.Elements.Element get_Target() [instance] :1665
::g::Fuse::Elements::Element* EdgeSwipeAnimation::Target()
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "get_Target()");
    return uPtr(_swiper)->Target();
}

// public void set_Target(Fuse.Elements.Element value) [instance] :1666
void EdgeSwipeAnimation::Target(::g::Fuse::Elements::Element* value)
{
    uStackFrame __("Fuse.Gestures.EdgeSwipeAnimation", "set_Target(Fuse.Elements.Element)");
    uPtr(_swiper)->Target(value);
}

// public generated EdgeSwipeAnimation New() [static] :1644
EdgeSwipeAnimation* EdgeSwipeAnimation::New2()
{
    EdgeSwipeAnimation* obj1 = (EdgeSwipeAnimation*)uNew(EdgeSwipeAnimation_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public abstract interface ISizeConstraint :1527
// {
uInterfaceType* ISizeConstraint_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Gestures.ISizeConstraint", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_ContentSize", NULL, NULL, offsetof(ISizeConstraint, fp_get_ContentSize), false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_TrimSize", NULL, NULL, offsetof(ISizeConstraint, fp_get_TrimSize), false, ::g::Uno::Float2_typeof(), 0));
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class KeepFocusInView :235
// {
static void KeepFocusInView_build(uType* type)
{
    ::TYPES[17] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[18] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(16);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)KeepFocusInView__New3_fn, 0, true, type, 0));
}

::g::Fuse::Node_type* KeepFocusInView_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::KeepInViewCommon_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(KeepFocusInView);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Gestures.KeepFocusInView", options);
    type->fp_build_ = KeepFocusInView_build;
    type->fp_ctor_ = (void*)KeepFocusInView__New3_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))KeepFocusInView__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))KeepFocusInView__OnUnrooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated KeepFocusInView() :235
void KeepFocusInView__ctor_4_fn(KeepFocusInView* __this)
{
    __this->ctor_4();
}

// public generated KeepFocusInView New() :235
void KeepFocusInView__New3_fn(KeepFocusInView** __retval)
{
    *__retval = KeepFocusInView::New3();
}

// private void OnGotFocus(object s, Fuse.Input.FocusGainedArgs fga) :251
void KeepFocusInView__OnGotFocus_fn(KeepFocusInView* __this, uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga)
{
    __this->OnGotFocus(s, fga);
}

// private void OnLostFocus(object s, object a) :256
void KeepFocusInView__OnLostFocus_fn(KeepFocusInView* __this, uObject* s, uObject* a)
{
    __this->OnLostFocus(s, a);
}

// protected override sealed void OnRooted() :237
void KeepFocusInView__OnRooted_fn(KeepFocusInView* __this)
{
    uStackFrame __("Fuse.Gestures.KeepFocusInView", "OnRooted()");
    ::g::Fuse::Gestures::KeepInViewCommon__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[17/*Fuse.Input.FocusGainedHandler*/], (void*)KeepFocusInView__OnGotFocus_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[18/*Fuse.Input.FocusLostHandler*/], (void*)KeepFocusInView__OnLostFocus_fn, __this));
}

// protected override sealed void OnUnrooted() :244
void KeepFocusInView__OnUnrooted_fn(KeepFocusInView* __this)
{
    uStackFrame __("Fuse.Gestures.KeepFocusInView", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[17/*Fuse.Input.FocusGainedHandler*/], (void*)KeepFocusInView__OnGotFocus_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[18/*Fuse.Input.FocusLostHandler*/], (void*)KeepFocusInView__OnLostFocus_fn, __this));
    ::g::Fuse::Gestures::KeepInViewCommon__OnUnrooted_fn(__this);
}

// public generated KeepFocusInView() [instance] :235
void KeepFocusInView::ctor_4()
{
    ctor_3();
}

// private void OnGotFocus(object s, Fuse.Input.FocusGainedArgs fga) [instance] :251
void KeepFocusInView::OnGotFocus(uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga)
{
    uStackFrame __("Fuse.Gestures.KeepFocusInView", "OnGotFocus(object,Fuse.Input.FocusGainedArgs)");
    Target(::g::Fuse::Input::Focus::FocusedVisual());
}

// private void OnLostFocus(object s, object a) [instance] :256
void KeepFocusInView::OnLostFocus(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.KeepFocusInView", "OnLostFocus(object,object)");
    Target(NULL);
}

// public generated KeepFocusInView New() [static] :235
KeepFocusInView* KeepFocusInView::New3()
{
    KeepFocusInView* obj1 = (KeepFocusInView*)uNew(KeepFocusInView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class KeepInView :228
// {
static void KeepInView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(16);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)KeepInView__New3_fn, 0, true, type, 0));
}

::g::Fuse::Node_type* KeepInView_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::KeepInViewCommon_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(KeepInView);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Gestures.KeepInView", options);
    type->fp_build_ = KeepInView_build;
    type->fp_ctor_ = (void*)KeepInView__New3_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated KeepInView() :228
void KeepInView__ctor_4_fn(KeepInView* __this)
{
    __this->ctor_4();
}

// public generated KeepInView New() :228
void KeepInView__New3_fn(KeepInView** __retval)
{
    *__retval = KeepInView::New3();
}

// public generated KeepInView() [instance] :228
void KeepInView::ctor_4()
{
    ctor_3();
}

// public generated KeepInView New() [static] :228
KeepInView* KeepInView::New3()
{
    KeepInView* obj1 = (KeepInView*)uNew(KeepInView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public class KeepInViewCommon :137
// {
static void KeepInViewCommon_build(uType* type)
{
    ::TYPES[19] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::KeepInViewCommon, _attached), 0,
        ::TYPES[1/*Fuse.Elements.Element*/], offsetof(::g::Fuse::Gestures::KeepInViewCommon, _rootElement), 0,
        ::TYPES[1/*Fuse.Elements.Element*/], offsetof(::g::Fuse::Gestures::KeepInViewCommon, _target), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Target", NULL, (void*)KeepInViewCommon__get_Target_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)KeepInViewCommon__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
}

::g::Fuse::Node_type* KeepInViewCommon_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(KeepInViewCommon);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Gestures.KeepInViewCommon", options);
    type->fp_build_ = KeepInViewCommon_build;
    type->fp_ctor_ = (void*)KeepInViewCommon__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))KeepInViewCommon__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))KeepInViewCommon__OnUnrooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal KeepInViewCommon() :139
void KeepInViewCommon__ctor_3_fn(KeepInViewCommon* __this)
{
    __this->ctor_3();
}

// private void AttachElement() :208
void KeepInViewCommon__AttachElement_fn(KeepInViewCommon* __this)
{
    __this->AttachElement();
}

// internal KeepInViewCommon New() :139
void KeepInViewCommon__New2_fn(KeepInViewCommon** __retval)
{
    *__retval = KeepInViewCommon::New2();
}

// protected override void OnRooted() :176
void KeepInViewCommon__OnRooted_fn(KeepInViewCommon* __this)
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_rootElement = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[1/*Fuse.Elements.Element*/]);

    if (__this->_rootElement != NULL)
    {
        uPtr(__this->_rootElement)->add_Placed(uDelegate::New(::TYPES[19/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, __this));
        __this->AttachElement();
    }
}

// protected override void OnUnrooted() :188
void KeepInViewCommon__OnUnrooted_fn(KeepInViewCommon* __this)
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "OnUnrooted()");

    if (__this->_rootElement != NULL)
    {
        uPtr(__this->_rootElement)->remove_Placed(uDelegate::New(::TYPES[19/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, __this));
        __this->ReleaseElement();
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void ReleaseElement() :199
void KeepInViewCommon__ReleaseElement_fn(KeepInViewCommon* __this)
{
    __this->ReleaseElement();
}

// public Fuse.Node get_Target() :145
void KeepInViewCommon__get_Target_fn(KeepInViewCommon* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public void set_Target(Fuse.Node value) :146
void KeepInViewCommon__set_Target_fn(KeepInViewCommon* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// private void Update(object s, object a) :218
void KeepInViewCommon__Update_fn(KeepInViewCommon* __this, uObject* s, uObject* a)
{
    __this->Update(s, a);
}

// internal KeepInViewCommon() [instance] :139
void KeepInViewCommon::ctor_3()
{
    ctor_2();
}

// private void AttachElement() [instance] :208
void KeepInViewCommon::AttachElement()
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "AttachElement()");

    if (_target == NULL)
        return;

    uPtr(_target)->add_Placed(uDelegate::New(::TYPES[19/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, this));
    _attached = true;
    Update(NULL, NULL);
}

// private void ReleaseElement() [instance] :199
void KeepInViewCommon::ReleaseElement()
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "ReleaseElement()");

    if (!_attached)
        return;

    uPtr(_target)->remove_Placed(uDelegate::New(::TYPES[19/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, this));
    _attached = false;
}

// public Fuse.Node get_Target() [instance] :145
::g::Fuse::Node* KeepInViewCommon::Target()
{
    return _target;
}

// public void set_Target(Fuse.Node value) [instance] :146
void KeepInViewCommon::Target(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "set_Target(Fuse.Node)");
    ::g::Fuse::Elements::Element* prev = _target;
    ReleaseElement();
    ::g::Fuse::Node* v = value;

    while (v != NULL)
    {
        _target = uAs< ::g::Fuse::Elements::Element*>(v, ::TYPES[1/*Fuse.Elements.Element*/]);

        if (_target != NULL)
            break;

        v = uPtr(v)->Parent();
    }

    if (v == NULL)
    {
        if (prev != NULL)
            uPtr(prev)->OnBringIntoView(NULL);

        _target = NULL;
    }
    else
        AttachElement();
}

// private void Update(object s, object a) [instance] :218
void KeepInViewCommon::Update(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.KeepInViewCommon", "Update(object,object)");

    if (_target != NULL)
        uPtr(_target)->BringIntoView();
}

// internal KeepInViewCommon New() [static] :139
KeepInViewCommon* KeepInViewCommon::New2()
{
    KeepInViewCommon* obj1 = (KeepInViewCommon*)uNew(KeepInViewCommon_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/rangecontrols/$.uno
// -----------------------------------------------------------------------------------------------------------------

// public sealed class LinearRangeBehavior :394
// {
// static LinearRangeBehavior() :394
static void LinearRangeBehavior__cctor_1_fn(uType* __type)
{
    LinearRangeBehavior::_horizontalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[20/*Fuse.Gestures.DegreeSpan[]*/], 2, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(45.0f, 135.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, -135.0f)));
    LinearRangeBehavior::_verticalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[20/*Fuse.Gestures.DegreeSpan[]*/], 3, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, 45.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-135.0f, -180.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(135.0f, 180.0f)));
}

static void LinearRangeBehavior_build(uType* type)
{
    ::STRINGS[6] = uString::Const("RangeControl");
    ::STRINGS[3] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/rangecontrols/$.uno");
    ::STRINGS[4] = uString::Const("OnRooted");
    ::TYPES[20] = ::g::Fuse::Gestures::DegreeSpan_typeof()->Array();
    ::TYPES[2] = ::g::Fuse::Controls::RangeControl_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[4] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[5] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[6] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::LinearRangeBehavior, _down), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::LinearRangeBehavior, _initialValue), 0,
        ::g::Fuse::Layouts::Orientation_typeof(), offsetof(::g::Fuse::Gestures::LinearRangeBehavior, _orientation), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::LinearRangeBehavior, _startCoord), 0,
        ::TYPES[2/*Fuse.Controls.RangeControl*/], offsetof(::g::Fuse::Gestures::LinearRangeBehavior, Control), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::LinearRangeBehavior::_horizontalGesture_, uFieldFlagsStatic,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::LinearRangeBehavior::_verticalGesture_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)LinearRangeBehavior__New2_fn, 0, true, type, 0),
        new uFunction("get_Orientation", NULL, (void*)LinearRangeBehavior__get_Orientation_fn, 0, false, ::g::Fuse::Layouts::Orientation_typeof(), 0),
        new uFunction("set_Orientation", NULL, (void*)LinearRangeBehavior__set_Orientation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Orientation_typeof()));
}

::g::Fuse::Node_type* LinearRangeBehavior_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 20;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(LinearRangeBehavior);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Gestures.LinearRangeBehavior", options);
    type->fp_build_ = LinearRangeBehavior_build;
    type->fp_ctor_ = (void*)LinearRangeBehavior__New2_fn;
    type->fp_cctor_ = LinearRangeBehavior__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))LinearRangeBehavior__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))LinearRangeBehavior__OnUnrooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated LinearRangeBehavior() :394
void LinearRangeBehavior__ctor_3_fn(LinearRangeBehavior* __this)
{
    __this->ctor_3();
}

// private Fuse.Controls.RangeControl FindRangeControl() :396
void LinearRangeBehavior__FindRangeControl_fn(LinearRangeBehavior* __this, ::g::Fuse::Controls::RangeControl** __retval)
{
    *__retval = __this->FindRangeControl();
}

// private Fuse.Gestures.SwipeGestureHelper get_Gesture() :443
void LinearRangeBehavior__get_Gesture_fn(LinearRangeBehavior* __this, ::g::Fuse::Gestures::SwipeGestureHelper** __retval)
{
    *__retval = __this->Gesture();
}

// public generated LinearRangeBehavior New() :394
void LinearRangeBehavior__New2_fn(LinearRangeBehavior** __retval)
{
    *__retval = LinearRangeBehavior::New2();
}

// private void OnLostCapture() :446
void LinearRangeBehavior__OnLostCapture_fn(LinearRangeBehavior* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs c) :473
void LinearRangeBehavior__OnPointerMoved_fn(LinearRangeBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* c)
{
    __this->OnPointerMoved(sender, c);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs c) :457
void LinearRangeBehavior__OnPointerPressed_fn(LinearRangeBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* c)
{
    __this->OnPointerPressed(sender, c);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs c) :489
void LinearRangeBehavior__OnPointerReleased_fn(LinearRangeBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* c)
{
    __this->OnPointerReleased(sender, c);
}

// protected override sealed void OnRooted() :412
void LinearRangeBehavior__OnRooted_fn(LinearRangeBehavior* __this)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->Control = __this->FindRangeControl();

    if (__this->Control == NULL)
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[6/*"RangeControl"*/], __this->Parent(), __this, ::STRINGS[3/*"/Users/most...*/], 418, ::STRINGS[4/*"OnRooted"*/]);

    ::g::Fuse::Input::Pointer::AddHandlers(__this->Control, uDelegate::New(::TYPES[4/*Fuse.Input.PointerPressedHandler*/], (void*)LinearRangeBehavior__OnPointerPressed_fn, __this), uDelegate::New(::TYPES[5/*Fuse.Input.PointerMovedHandler*/], (void*)LinearRangeBehavior__OnPointerMoved_fn, __this), uDelegate::New(::TYPES[6/*Fuse.Input.PointerReleasedHandler*/], (void*)LinearRangeBehavior__OnPointerReleased_fn, __this), NULL, NULL, NULL);
}

// protected override sealed void OnUnrooted() :423
void LinearRangeBehavior__OnUnrooted_fn(LinearRangeBehavior* __this)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "OnUnrooted()");

    if (__this->Control != NULL)
        ::g::Fuse::Input::Pointer::RemoveHandlers(__this->Control, uDelegate::New(::TYPES[4/*Fuse.Input.PointerPressedHandler*/], (void*)LinearRangeBehavior__OnPointerPressed_fn, __this), uDelegate::New(::TYPES[5/*Fuse.Input.PointerMovedHandler*/], (void*)LinearRangeBehavior__OnPointerMoved_fn, __this), uDelegate::New(::TYPES[6/*Fuse.Input.PointerReleasedHandler*/], (void*)LinearRangeBehavior__OnPointerReleased_fn, __this), NULL, NULL, NULL);

    __this->Control = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public Fuse.Layouts.Orientation get_Orientation() :408
void LinearRangeBehavior__get_Orientation_fn(LinearRangeBehavior* __this, int* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value) :409
void LinearRangeBehavior__set_Orientation_fn(LinearRangeBehavior* __this, int* value)
{
    __this->Orientation(*value);
}

// private double PositionToValue(float2 pos) :513
void LinearRangeBehavior__PositionToValue_fn(LinearRangeBehavior* __this, ::g::Uno::Float2* pos, double* __retval)
{
    *__retval = __this->PositionToValue(*pos);
}

// private void UpdateValue(float2 pos) :508
void LinearRangeBehavior__UpdateValue_fn(LinearRangeBehavior* __this, ::g::Uno::Float2* pos)
{
    __this->UpdateValue(*pos);
}

uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> LinearRangeBehavior::_horizontalGesture_;
uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> LinearRangeBehavior::_verticalGesture_;

// public generated LinearRangeBehavior() [instance] :394
void LinearRangeBehavior::ctor_3()
{
    _startCoord = ::g::Uno::Float2__New1(0.0f);
    _initialValue = 0.0;
    _down = -1;
    ctor_2();
}

// private Fuse.Controls.RangeControl FindRangeControl() [instance] :396
::g::Fuse::Controls::RangeControl* LinearRangeBehavior::FindRangeControl()
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "FindRangeControl()");
    ::g::Fuse::Visual* p = Parent();

    while ((p != NULL) && !uIs(p, ::TYPES[2/*Fuse.Controls.RangeControl*/]))
        p = uPtr(p)->Parent();

    return uAs< ::g::Fuse::Controls::RangeControl*>(p, ::TYPES[2/*Fuse.Controls.RangeControl*/]);
}

// private Fuse.Gestures.SwipeGestureHelper get_Gesture() [instance] :443
::g::Fuse::Gestures::SwipeGestureHelper* LinearRangeBehavior::Gesture()
{
    return (Orientation() == 0) ? (::g::Fuse::Gestures::SwipeGestureHelper*)LinearRangeBehavior::_horizontalGesture() : (::g::Fuse::Gestures::SwipeGestureHelper*)LinearRangeBehavior::_verticalGesture();
}

// private void OnLostCapture() [instance] :446
void LinearRangeBehavior::OnLostCapture()
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "OnLostCapture()");
    _down = -1;
    uPtr(Control)->Value(_initialValue);
    uPtr(Control)->EndInteraction(this);
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs c) [instance] :473
void LinearRangeBehavior::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* c)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "OnPointerMoved(object,Fuse.Input.PointerMovedArgs)");

    if (_down != uPtr(c)->PointIndex())
        return;

    if (uPtr(c)->IsSoftCapturedTo(this))
    {
        if (uPtr(Gesture())->IsWithinBounds(::g::Uno::Float2__op_Subtraction2(uPtr(c)->WindowPoint(), _startCoord)))
            uPtr(c)->TryHardCapture(this, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)LinearRangeBehavior__OnLostCapture_fn, this), NULL);
    }
    else if (uPtr(c)->IsHardCapturedTo(this))
        UpdateValue(uPtr(Control)->WindowToLocal(uPtr(c)->WindowPoint()));
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs c) [instance] :457
void LinearRangeBehavior::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* c)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "OnPointerPressed(object,Fuse.Input.PointerPressedArgs)");

    if (_down == -1)
    {
        if (uPtr(c)->TrySoftCapture(this, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)LinearRangeBehavior__OnLostCapture_fn, this), NULL))
        {
            ::g::Fuse::Input::Focus::GiveTo(Control);
            uPtr(Control)->BeginInteraction(this, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)LinearRangeBehavior__OnLostCapture_fn, this));
            _startCoord = uPtr(c)->WindowPoint();
            _down = c->PointIndex();
            _initialValue = uPtr(Control)->Value();
        }
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs c) [instance] :489
void LinearRangeBehavior::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* c)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "OnPointerReleased(object,Fuse.Input.PointerReleasedArgs)");

    if (_down != uPtr(c)->PointIndex())
        return;

    if (uPtr(c)->IsHardCapturedTo(this))
    {
        UpdateValue(uPtr(Control)->WindowToLocal(uPtr(c)->WindowPoint()));
        c->ReleaseHardCapture(this);
    }

    if (uPtr(c)->IsSoftCapturedTo(this))
    {
        UpdateValue(uPtr(Control)->WindowToLocal(uPtr(c)->WindowPoint()));
        c->ReleaseSoftCapture(this);
    }

    uPtr(Control)->EndInteraction(this);
    _down = -1;
}

// public Fuse.Layouts.Orientation get_Orientation() [instance] :408
int LinearRangeBehavior::Orientation()
{
    return _orientation;
}

// public void set_Orientation(Fuse.Layouts.Orientation value) [instance] :409
void LinearRangeBehavior::Orientation(int value)
{
    _orientation = value;
}

// private double PositionToValue(float2 pos) [instance] :513
double LinearRangeBehavior::PositionToValue(::g::Uno::Float2 pos)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "PositionToValue(float2)");

    if (Orientation() == 1)
        return (double)(pos.Y / uPtr(Control)->ActualSize().Y);

    return (double)(pos.X / uPtr(Control)->ActualSize().X);
}

// private void UpdateValue(float2 pos) [instance] :508
void LinearRangeBehavior::UpdateValue(::g::Uno::Float2 pos)
{
    uStackFrame __("Fuse.Gestures.LinearRangeBehavior", "UpdateValue(float2)");
    uPtr(Control)->RelativeValue(PositionToValue(pos));
}

// public generated LinearRangeBehavior New() [static] :394
LinearRangeBehavior* LinearRangeBehavior::New2()
{
    LinearRangeBehavior* obj1 = (LinearRangeBehavior*)uNew(LinearRangeBehavior_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class LongPressed :286
// {
static void LongPressed_build(uType* type)
{
    ::TYPES[13] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[21] = ::g::Fuse::Gestures::LongPressedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(29,
        ::TYPES[21/*Fuse.Gestures.LongPressedHandler*/], offsetof(::g::Fuse::Gestures::LongPressed, Handler1), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("add_Handler", NULL, (void*)LongPressed__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[21/*Fuse.Gestures.LongPressedHandler*/]),
        new uFunction("remove_Handler", NULL, (void*)LongPressed__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[21/*Fuse.Gestures.LongPressedHandler*/]),
        new uFunction(".ctor", NULL, (void*)LongPressed__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* LongPressed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(LongPressed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.LongPressed", options);
    type->fp_build_ = LongPressed_build;
    type->fp_ctor_ = (void*)LongPressed__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))LongPressed__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))LongPressed__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated LongPressed() :286
void LongPressed__ctor_5_fn(LongPressed* __this)
{
    __this->ctor_5();
}

// public generated void add_Handler(Fuse.Gestures.LongPressedHandler value) :291
void LongPressed__add_Handler_fn(LongPressed* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.LongPressedHandler value) :291
void LongPressed__remove_Handler_fn(LongPressed* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated LongPressed New() :286
void LongPressed__New2_fn(LongPressed** __retval)
{
    *__retval = LongPressed::New2();
}

// private void OnLongPressed(Fuse.Input.PointerEventArgs args, int count) :305
void LongPressed__OnLongPressed_fn(LongPressed* __this, ::g::Fuse::Input::PointerEventArgs* args, int* count)
{
    __this->OnLongPressed(args, *count);
}

// protected override sealed void OnRooted() :293
void LongPressed__OnRooted_fn(LongPressed* __this)
{
    uStackFrame __("Fuse.Gestures.LongPressed", "OnRooted()");
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this);
    uPtr(__this->Clicker)->add_LongPressedEvent(uDelegate::New(::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/], (void*)LongPressed__OnLongPressed_fn, __this));
}

// protected override sealed void OnUnrooted() :299
void LongPressed__OnUnrooted_fn(LongPressed* __this)
{
    uStackFrame __("Fuse.Gestures.LongPressed", "OnUnrooted()");
    uPtr(__this->Clicker)->remove_LongPressedEvent(uDelegate::New(::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/], (void*)LongPressed__OnLongPressed_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this);
}

// public generated LongPressed() [instance] :286
void LongPressed::ctor_5()
{
    ctor_4();
}

// public generated void add_Handler(Fuse.Gestures.LongPressedHandler value) [instance] :291
void LongPressed::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.LongPressed", "add_Handler(Fuse.Gestures.LongPressedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[21/*Fuse.Gestures.LongPressedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.LongPressedHandler value) [instance] :291
void LongPressed::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.LongPressed", "remove_Handler(Fuse.Gestures.LongPressedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[21/*Fuse.Gestures.LongPressedHandler*/]);
}

// private void OnLongPressed(Fuse.Input.PointerEventArgs args, int count) [instance] :305
void LongPressed::OnLongPressed(::g::Fuse::Input::PointerEventArgs* args, int count)
{
    uStackFrame __("Fuse.Gestures.LongPressed", "OnLongPressed(Fuse.Input.PointerEventArgs,int)");
    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::LongPressedArgs*)::g::Fuse::Gestures::LongPressedArgs::New3(args, Parent()));
}

// public generated LongPressed New() [static] :286
LongPressed* LongPressed::New2()
{
    LongPressed* obj1 = (LongPressed*)uNew(LongPressed_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class LongPressedArgs :272
// {
static void LongPressedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LongPressedArgs__New3_fn, 0, true, type, 2, ::g::Fuse::Input::PointerEventArgs_typeof(), ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* LongPressedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::CustomPointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LongPressedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Gestures.LongPressedArgs", options);
    type->fp_build_ = LongPressedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public LongPressedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :274
void LongPressedArgs__ctor_4_fn(LongPressedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    __this->ctor_4(args, visual);
}

// public LongPressedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :274
void LongPressedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual, LongPressedArgs** __retval)
{
    *__retval = LongPressedArgs::New3(args, visual);
}

// public LongPressedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [instance] :274
void LongPressedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Gestures.LongPressedArgs", ".ctor(Fuse.Input.PointerEventArgs,Fuse.Visual)");
    ctor_3(args, visual);
}

// public LongPressedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [static] :274
LongPressedArgs* LongPressedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    LongPressedArgs* obj1 = (LongPressedArgs*)uNew(LongPressedArgs_typeof());
    obj1->ctor_4(args, visual);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public delegate void LongPressedHandler(object sender, Fuse.Gestures.LongPressedArgs args) :280
uDelegateType* LongPressedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.LongPressedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::LongPressedArgs_typeof());
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/0.42.4/$.uno
// ---------------------------------------------------------------------------------------------------

// private enum Scroller.MoveUserFlags :497
uEnumType* Scroller__MoveUserFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Scroller.MoveUserFlags", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Started", 1LL,
        "Release", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class PanGesture :336
// {
static void PanGesture_build(uType* type)
{
    ::TYPES[22] = ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof();
    ::TYPES[23] = ::g::Fuse::Gestures::Internal::TwoFingerTranslateHandler_typeof();
    ::TYPES[24] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[25] = ::g::Fuse::Gestures::ISizeConstraint_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface3));
    type->SetFields(17,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::PanGesture, _constrainElement), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Gestures::PanGesture, _invTransform), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::PanGesture, _screenPrevTranslation), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::PanGesture, _screenStartTranslation), 0,
        ::TYPES[25/*Fuse.Gestures.ISizeConstraint*/], offsetof(::g::Fuse::Gestures::PanGesture, _sizeConstraint), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Gestures::PanGesture, _startTransform), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::PanGesture, _startTranslation), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_ConstrainElement", NULL, (void*)PanGesture__get_ConstrainElement_fn, 0, false, ::g::Fuse::Elements::Element_typeof(), 0),
        new uFunction("set_ConstrainElement", NULL, (void*)PanGesture__set_ConstrainElement_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("get_Constraint", NULL, (void*)PanGesture__get_Constraint_fn, 0, false, ::TYPES[25/*Fuse.Gestures.ISizeConstraint*/], 0),
        new uFunction("set_Constraint", NULL, (void*)PanGesture__set_Constraint_fn, 0, false, uVoid_typeof(), 1, ::TYPES[25/*Fuse.Gestures.ISizeConstraint*/]),
        new uFunction(".ctor", NULL, (void*)PanGesture__New2_fn, 0, true, type, 1, ::g::Fuse::Elements::InteractiveTransform_typeof()));
}

::g::Fuse::Gestures::TransformGesture_type* PanGesture_typeof()
{
    static uSStrong< ::g::Fuse::Gestures::TransformGesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::TransformGesture_typeof();
    options.FieldCount = 24;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(PanGesture);
    options.TypeSize = sizeof(::g::Fuse::Gestures::TransformGesture_type);
    type = (::g::Fuse::Gestures::TransformGesture_type*)uClassType::New("Fuse.Gestures.PanGesture", options);
    type->fp_build_ = PanGesture_build;
    type->fp_OnEnded = (void(*)(::g::Fuse::Gestures::TransformGesture*))PanGesture__OnEnded_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PanGesture__OnRooted_fn;
    type->fp_OnStarted = (void(*)(::g::Fuse::Gestures::TransformGesture*))PanGesture__OnStarted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PanGesture__OnUnrooted_fn;
    type->fp_OnUpdate = (void(*)(::g::Fuse::Gestures::TransformGesture*))PanGesture__OnUpdate_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public PanGesture(Fuse.Elements.InteractiveTransform target) :339
void PanGesture__ctor_4_fn(PanGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target)
{
    __this->ctor_4(target);
}

// public Fuse.Elements.Element get_ConstrainElement() :466
void PanGesture__get_ConstrainElement_fn(PanGesture* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->ConstrainElement();
}

// public void set_ConstrainElement(Fuse.Elements.Element value) :467
void PanGesture__set_ConstrainElement_fn(PanGesture* __this, ::g::Fuse::Elements::Element* value)
{
    __this->ConstrainElement(value);
}

// public Fuse.Gestures.ISizeConstraint get_Constraint() :491
void PanGesture__get_Constraint_fn(PanGesture* __this, uObject** __retval)
{
    *__retval = __this->Constraint();
}

// public void set_Constraint(Fuse.Gestures.ISizeConstraint value) :492
void PanGesture__set_Constraint_fn(PanGesture* __this, uObject* value)
{
    __this->Constraint(value);
}

// public PanGesture New(Fuse.Elements.InteractiveTransform target) :339
void PanGesture__New2_fn(::g::Fuse::Elements::InteractiveTransform* target, PanGesture** __retval)
{
    *__retval = PanGesture::New2(target);
}

// protected override sealed void OnEnded() :375
void PanGesture__OnEnded_fn(PanGesture* __this)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnEnded()");
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(__this->Region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New1(0.0f));
    __this->CheckNeedUpdate();
}

// protected override sealed void OnRooted() :343
void PanGesture__OnRooted_fn(PanGesture* __this)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnRooted()");
    ::g::Fuse::Gestures::TransformGesture__OnRooted_fn(__this);
    uPtr(__this->Impl)->add_Translated(uDelegate::New(::TYPES[23/*Fuse.Gestures.Internal.TwoFingerTranslateHandler*/], (void*)PanGesture__OnTranslated_fn, __this));
}

// protected override sealed void OnStarted() :360
void PanGesture__OnStarted_fn(PanGesture* __this)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnStarted()");
    ::g::Uno::Float4 ind1;
    __this->_startTranslation = uPtr(__this->Target())->Translation();
    __this->_startTransform = ::g::Fuse::FastMatrix::Identity();
    uPtr(__this->Target())->AppendRotationScale(__this->_startTransform);
    __this->_invTransform = ::g::Uno::Matrix::Invert2(uPtr(__this->_startTransform)->Matrix());
    __this->_screenStartTranslation = (__this->_screenPrevTranslation = (ind1 = ::g::Uno::Vector::Transform1(__this->_startTranslation, uPtr(__this->_startTransform)->Matrix()), ::g::Uno::Float2__New2(ind1.X, ind1.Y)));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->Region), ::TYPES[24/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(__this->_screenStartTranslation));
    __this->UpdateConstraint();
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StartUser(uInterface(uPtr(__this->Region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/]));
    __this->CheckNeedUpdate();
}

// private void OnTranslated(float2 dist) :388
void PanGesture__OnTranslated_fn(PanGesture* __this, ::g::Uno::Float2* dist)
{
    __this->OnTranslated(*dist);
}

// protected override sealed void OnUnrooted() :349
void PanGesture__OnUnrooted_fn(PanGesture* __this)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnUnrooted()");
    uPtr(__this->Impl)->remove_Translated(uDelegate::New(::TYPES[23/*Fuse.Gestures.Internal.TwoFingerTranslateHandler*/], (void*)PanGesture__OnTranslated_fn, __this));
    ::g::Fuse::Gestures::TransformGesture__OnUnrooted_fn(__this);
}

// protected override sealed void OnUpdate() :400
void PanGesture__OnUpdate_fn(PanGesture* __this)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnUpdate()");
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float2 ret6;
    uPtr(__this->Target())->Translation((ind3 = ::g::Uno::Vector::Transform1((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->Region), ::TYPES[24/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret6), ret6), __this->_invTransform), ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
}

// internal float4 get_TranslationConstraint() :408
void PanGesture__get_TranslationConstraint_fn(PanGesture* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TranslationConstraint();
}

// private void UpdateConstraint() :381
void PanGesture__UpdateConstraint_fn(PanGesture* __this)
{
    __this->UpdateConstraint();
}

// public PanGesture(Fuse.Elements.InteractiveTransform target) [instance] :339
void PanGesture::ctor_4(::g::Fuse::Elements::InteractiveTransform* target)
{
    uStackFrame __("Fuse.Gestures.PanGesture", ".ctor(Fuse.Elements.InteractiveTransform)");
    ctor_3(target);
}

// public Fuse.Elements.Element get_ConstrainElement() [instance] :466
::g::Fuse::Elements::Element* PanGesture::ConstrainElement()
{
    return _constrainElement;
}

// public void set_ConstrainElement(Fuse.Elements.Element value) [instance] :467
void PanGesture::ConstrainElement(::g::Fuse::Elements::Element* value)
{
    _constrainElement = value;
}

// public Fuse.Gestures.ISizeConstraint get_Constraint() [instance] :491
uObject* PanGesture::Constraint()
{
    return _sizeConstraint;
}

// public void set_Constraint(Fuse.Gestures.ISizeConstraint value) [instance] :492
void PanGesture::Constraint(uObject* value)
{
    _sizeConstraint = value;
}

// private void OnTranslated(float2 dist) [instance] :388
void PanGesture::OnTranslated(::g::Uno::Float2 dist)
{
    uStackFrame __("Fuse.Gestures.PanGesture", "OnTranslated(float2)");
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float2 ret5;
    UpdateConstraint();
    ::g::Uno::Float2 screen = ::g::Uno::Float2__op_Addition2(_screenStartTranslation, dist);
    ::g::Uno::Float2 step = ::g::Uno::Float2__op_Subtraction2(screen, _screenPrevTranslation);
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StepUser(uInterface(uPtr(Region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/]), step);
    _screenPrevTranslation = screen;
    uPtr(Target())->Translation((ind2 = ::g::Uno::Vector::Transform1((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(Region), ::TYPES[24/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret5), ret5), _invTransform), ::g::Uno::Float2__New2(ind2.X, ind2.Y)));
}

// internal float4 get_TranslationConstraint() [instance] :408
::g::Uno::Float4 PanGesture::TranslationConstraint()
{
    uStackFrame __("Fuse.Gestures.PanGesture", "get_TranslationConstraint()");
    bool hasSize = false;
    ::g::Uno::Float2 size = ::g::Uno::Float2__New1(0.0f);
    ::g::Uno::Float2 trimSize = ::g::Uno::Float2__New1(0.0f);

    if (_constrainElement != NULL)
    {
        size = uPtr(_constrainElement)->ActualSize();
        hasSize = true;
    }

    if (_sizeConstraint != NULL)
    {
        size = ::g::Fuse::Gestures::ISizeConstraint::ContentSize(uInterface(uPtr(_sizeConstraint), ::TYPES[25/*Fuse.Gestures.ISizeConstraint*/]));
        trimSize = ::g::Fuse::Gestures::ISizeConstraint::TrimSize(uInterface(uPtr(_sizeConstraint), ::TYPES[25/*Fuse.Gestures.ISizeConstraint*/]));
        hasSize = true;
    }

    if (hasSize)
    {
        ::g::Fuse::FastMatrix* trans = ::g::Fuse::FastMatrix::Identity();
        uPtr(Target())->AppendRotationScale(trans);
        ::g::Uno::Rect rect = ::g::Uno::Rect__New2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_UnaryNegation(size), 2.0f), size);
        ::g::Uno::Rect bounds = ::g::Uno::Rect__Transform(rect, uPtr(trans)->Matrix());
        ::g::Uno::Float2 full = bounds.Maximum();
        ::g::Uno::Float2 over = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Subtraction2(full, ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition2(size, trimSize), 2.0f)));
        ::g::Uno::Float4 c = ::g::Uno::Float4__New7(::g::Uno::Float2__op_UnaryNegation(over), over);
        return c;
    }

    return ::g::Uno::Float4__New2(-FLT_INF, -FLT_INF, FLT_INF, FLT_INF);
}

// private void UpdateConstraint() [instance] :381
void PanGesture::UpdateConstraint()
{
    uStackFrame __("Fuse.Gestures.PanGesture", "UpdateConstraint()");
    ::g::Uno::Float4 c = TranslationConstraint();
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MinPosition(uInterface(uPtr(Region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(c.X, c.Y));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MaxPosition(uInterface(uPtr(Region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(c.Z, c.W));
}

// public PanGesture New(Fuse.Elements.InteractiveTransform target) [static] :339
PanGesture* PanGesture::New2(::g::Fuse::Elements::InteractiveTransform* target)
{
    PanGesture* obj4 = (PanGesture*)uNew(PanGesture_typeof());
    obj4->ctor_4(target);
    return obj4;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class Pressed :515
// {
static void Pressed_build(uType* type)
{
    ::TYPES[4] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Pressed__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* Pressed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Pressed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Pressed", options);
    type->fp_build_ = Pressed_build;
    type->fp_ctor_ = (void*)Pressed__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Pressed__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Pressed__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Pressed() :515
void Pressed__ctor_4_fn(Pressed* __this)
{
    __this->ctor_4();
}

// public generated Pressed New() :515
void Pressed__New2_fn(Pressed** __retval)
{
    *__retval = Pressed::New2();
}

// private void OnPressed(object s, object a) :529
void Pressed__OnPressed_fn(Pressed* __this, uObject* s, uObject* a)
{
    __this->OnPressed(s, a);
}

// protected override sealed void OnRooted() :517
void Pressed__OnRooted_fn(Pressed* __this)
{
    uStackFrame __("Fuse.Gestures.Pressed", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[4/*Fuse.Input.PointerPressedHandler*/], (void*)Pressed__OnPressed_fn, __this));
}

// protected override sealed void OnUnrooted() :523
void Pressed__OnUnrooted_fn(Pressed* __this)
{
    uStackFrame __("Fuse.Gestures.Pressed", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[4/*Fuse.Input.PointerPressedHandler*/], (void*)Pressed__OnPressed_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Pressed() [instance] :515
void Pressed::ctor_4()
{
    ctor_3();
}

// private void OnPressed(object s, object a) [instance] :529
void Pressed::OnPressed(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.Pressed", "OnPressed(object,object)");
    Pulse();
}

// public generated Pressed New() [static] :515
Pressed* Pressed::New2()
{
    Pressed* obj1 = (Pressed*)uNew(Pressed_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class Released :687
// {
static void Released_build(uType* type)
{
    ::TYPES[6] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Released__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* Released_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Released);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Released", options);
    type->fp_build_ = Released_build;
    type->fp_ctor_ = (void*)Released__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Released__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Released__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Released() :687
void Released__ctor_4_fn(Released* __this)
{
    __this->ctor_4();
}

// public generated Released New() :687
void Released__New2_fn(Released** __retval)
{
    *__retval = Released::New2();
}

// private void OnReleased(object s, object a) :701
void Released__OnReleased_fn(Released* __this, uObject* s, uObject* a)
{
    __this->OnReleased(s, a);
}

// protected override sealed void OnRooted() :689
void Released__OnRooted_fn(Released* __this)
{
    uStackFrame __("Fuse.Gestures.Released", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->Parent(), uDelegate::New(::TYPES[6/*Fuse.Input.PointerReleasedHandler*/], (void*)Released__OnReleased_fn, __this));
}

// protected override sealed void OnUnrooted() :695
void Released__OnUnrooted_fn(Released* __this)
{
    uStackFrame __("Fuse.Gestures.Released", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->Parent(), uDelegate::New(::TYPES[6/*Fuse.Input.PointerReleasedHandler*/], (void*)Released__OnReleased_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Released() [instance] :687
void Released::ctor_4()
{
    ctor_3();
}

// private void OnReleased(object s, object a) [instance] :701
void Released::OnReleased(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.Released", "OnReleased(object,object)");
    Pulse();
}

// public generated Released New() [static] :687
Released* Released::New2()
{
    Released* obj1 = (Released*)uNew(Released_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class RotateGesture :730
// {
static void RotateGesture_build(uType* type)
{
    ::TYPES[26] = ::g::Fuse::Gestures::Internal::TwoFingerRotateHandler_typeof();
    ::TYPES[22] = ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof();
    ::TYPES[24] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface3));
    type->SetFields(17,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::RotateGesture, _startRotation), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::RotateGesture, _Step), 0);
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", NULL, (void*)RotateGesture__New2_fn, 0, true, type, 1, ::g::Fuse::Elements::InteractiveTransform_typeof()),
        new uFunction("get_Step", NULL, (void*)RotateGesture__get_Step_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Step", NULL, (void*)RotateGesture__set_Step_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_StepDegrees", NULL, (void*)RotateGesture__get_StepDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_StepDegrees", NULL, (void*)RotateGesture__set_StepDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Gestures::TransformGesture_type* RotateGesture_typeof()
{
    static uSStrong< ::g::Fuse::Gestures::TransformGesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::TransformGesture_typeof();
    options.FieldCount = 19;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(RotateGesture);
    options.TypeSize = sizeof(::g::Fuse::Gestures::TransformGesture_type);
    type = (::g::Fuse::Gestures::TransformGesture_type*)uClassType::New("Fuse.Gestures.RotateGesture", options);
    type->fp_build_ = RotateGesture_build;
    type->fp_OnEnded = (void(*)(::g::Fuse::Gestures::TransformGesture*))RotateGesture__OnEnded_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))RotateGesture__OnRooted_fn;
    type->fp_OnStarted = (void(*)(::g::Fuse::Gestures::TransformGesture*))RotateGesture__OnStarted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))RotateGesture__OnUnrooted_fn;
    type->fp_OnUpdate = (void(*)(::g::Fuse::Gestures::TransformGesture*))RotateGesture__OnUpdate_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public RotateGesture(Fuse.Elements.InteractiveTransform target) :733
void RotateGesture__ctor_4_fn(RotateGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target)
{
    __this->ctor_4(target);
}

// public RotateGesture New(Fuse.Elements.InteractiveTransform target) :733
void RotateGesture__New2_fn(::g::Fuse::Elements::InteractiveTransform* target, RotateGesture** __retval)
{
    *__retval = RotateGesture::New2(target);
}

// protected override sealed void OnEnded() :772
void RotateGesture__OnEnded_fn(RotateGesture* __this)
{
}

// protected override sealed void OnRooted() :753
void RotateGesture__OnRooted_fn(RotateGesture* __this)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "OnRooted()");
    ::g::Fuse::Gestures::TransformGesture__OnRooted_fn(__this);
    uPtr(__this->Impl)->add_Rotated(uDelegate::New(::TYPES[26/*Fuse.Gestures.Internal.TwoFingerRotateHandler*/], (void*)RotateGesture__OnRotated_fn, __this));
}

// private void OnRotated(float angle) :781
void RotateGesture__OnRotated_fn(RotateGesture* __this, float* angle)
{
    __this->OnRotated(*angle);
}

// protected override sealed void OnStarted() :766
void RotateGesture__OnStarted_fn(RotateGesture* __this)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "OnStarted()");
    __this->_startRotation = uPtr(__this->Target())->Rotation();
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::Reset(uInterface(uPtr(__this->Region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(__this->_startRotation, 0.0f));
}

// protected override sealed void OnUnrooted() :759
void RotateGesture__OnUnrooted_fn(RotateGesture* __this)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "OnUnrooted()");
    uPtr(__this->Impl)->remove_Rotated(uDelegate::New(::TYPES[26/*Fuse.Gestures.Internal.TwoFingerRotateHandler*/], (void*)RotateGesture__OnRotated_fn, __this));
    ::g::Fuse::Gestures::TransformGesture__OnUnrooted_fn(__this);
}

// protected override sealed void OnUpdate() :776
void RotateGesture__OnUpdate_fn(RotateGesture* __this)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "OnUpdate()");
    ::g::Uno::Float2 ret2;
    uPtr(__this->Target())->Rotation((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->Region), ::TYPES[24/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret2), ret2).X);
}

// public generated float get_Step() :742
void RotateGesture__get_Step_fn(RotateGesture* __this, float* __retval)
{
    *__retval = __this->Step();
}

// public generated void set_Step(float value) :742
void RotateGesture__set_Step_fn(RotateGesture* __this, float* value)
{
    __this->Step(*value);
}

// public float get_StepDegrees() :749
void RotateGesture__get_StepDegrees_fn(RotateGesture* __this, float* __retval)
{
    *__retval = __this->StepDegrees();
}

// public void set_StepDegrees(float value) :750
void RotateGesture__set_StepDegrees_fn(RotateGesture* __this, float* value)
{
    __this->StepDegrees(*value);
}

// public RotateGesture(Fuse.Elements.InteractiveTransform target) [instance] :733
void RotateGesture::ctor_4(::g::Fuse::Elements::InteractiveTransform* target)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", ".ctor(Fuse.Elements.InteractiveTransform)");
    ctor_3(target);
    Region = (uObject*)::g::Fuse::Motion::Simulation::BasicBoundedRegion2D::CreateRadians();
}

// private void OnRotated(float angle) [instance] :781
void RotateGesture::OnRotated(float angle)
{
    uStackFrame __("Fuse.Gestures.RotateGesture", "OnRotated(float)");
    float q = _startRotation + angle;

    if (Step() > 0.0f)
    {
        float s = ::g::Uno::Math::Round2(q / Step()) * Step();
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::MoveTo(uInterface(uPtr(Region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(s, 0.0f));
        CheckNeedUpdate();
    }
    else
        uPtr(Target())->Rotation(q);
}

// public generated float get_Step() [instance] :742
float RotateGesture::Step()
{
    return _Step;
}

// public generated void set_Step(float value) [instance] :742
void RotateGesture::Step(float value)
{
    _Step = value;
}

// public float get_StepDegrees() [instance] :749
float RotateGesture::StepDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(Step());
}

// public void set_StepDegrees(float value) [instance] :750
void RotateGesture::StepDegrees(float value)
{
    Step(::g::Uno::Math::DegreesToRadians1(value));
}

// public RotateGesture New(Fuse.Elements.InteractiveTransform target) [static] :733
RotateGesture* RotateGesture::New2(::g::Fuse::Elements::InteractiveTransform* target)
{
    RotateGesture* obj1 = (RotateGesture*)uNew(RotateGesture_typeof());
    obj1->ctor_4(target);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/0.42.4/$.uno
// ---------------------------------------------------------------------------------------------------

// public sealed class ScrollableGoto :107
// {
static void ScrollableGoto_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Use ScrollTo instead, it has the same interface");
    ::STRINGS[8] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/0.42.4/$.uno");
    ::STRINGS[9] = uString::Const(".ctor");
    type->SetFields(13);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ScrollableGoto__New3_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollableGoto_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::ScrollTo_typeof();
    options.FieldCount = 13;
    options.ObjectSize = sizeof(ScrollableGoto);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.ScrollableGoto", options);
    type->fp_build_ = ScrollableGoto_build;
    type->fp_ctor_ = (void*)ScrollableGoto__New3_fn;
    return type;
}

// public ScrollableGoto() :110
void ScrollableGoto__ctor_3_fn(ScrollableGoto* __this)
{
    __this->ctor_3();
}

// public ScrollableGoto New() :110
void ScrollableGoto__New3_fn(ScrollableGoto** __retval)
{
    *__retval = ScrollableGoto::New3();
}

// public ScrollableGoto() [instance] :110
void ScrollableGoto::ctor_3()
{
    ctor_2();
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[7/*"Use ScrollT...*/], this, ::STRINGS[8/*"/Users/most...*/], 112, ::STRINGS[9/*".ctor"*/]);
}

// public ScrollableGoto New() [static] :110
ScrollableGoto* ScrollableGoto::New3()
{
    ScrollableGoto* obj1 = (ScrollableGoto*)uNew(ScrollableGoto_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/0.42.4/$.uno
// ---------------------------------------------------------------------------------------------------

// public class Scroller :133
// {
// static Scroller() :133
static void Scroller__cctor_1_fn(uType* __type)
{
    Scroller::_horizontalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[20/*Fuse.Gestures.DegreeSpan[]*/], 2, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(45.0f, 135.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, -135.0f)));
    Scroller::_verticalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[20/*Fuse.Gestures.DegreeSpan[]*/], 3, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, 45.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-135.0f, -180.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(135.0f, 180.0f)));
}

static void Scroller_build(uType* type)
{
    ::STRINGS[10] = uString::Const("Scroller can only be used in a ScrollView");
    ::STRINGS[11] = uString::Const("Invalid tear-down of pointer events");
    ::TYPES[20] = ::g::Fuse::Gestures::DegreeSpan_typeof()->Array();
    ::TYPES[27] = ::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[28] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[24] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[22] = ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof();
    ::TYPES[29] = ::g::Fuse::Controls::ScrollView_typeof();
    ::TYPES[30] = ::g::Fuse::RequestBringIntoViewHandler_typeof();
    ::TYPES[31] = ::g::Fuse::Controls::ScrollPositionChangedHandler_typeof();
    ::TYPES[4] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[5] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[6] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Scroller_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Scroller_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Scroller_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Scroller_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Scroller_type, interface4));
    type->SetFields(13,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _delayStart), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _down), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _hasUpdated), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _isHardCapture), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _pendingBringIntoView), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _pointerListening), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _pointerPos), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _prevPos), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _prevTime), 0,
        ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/], offsetof(::g::Fuse::Gestures::Scroller, _region), 0,
        ::TYPES[29/*Fuse.Controls.ScrollView*/], offsetof(::g::Fuse::Gestures::Scroller, _scrollable), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _softCaptureCurrent), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _softCaptureStart), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _startPos), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _updateFirstFrame), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _userScroll), 0,
        ::TYPES[27/*Fuse.Motion.Simulation.PointerVelocity<float2>*/], offsetof(::g::Fuse::Gestures::Scroller, _velocity), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::Scroller::_horizontalGesture_, uFieldFlagsStatic,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::Scroller::_verticalGesture_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(8,
        new uFunction("CheckLimits", NULL, (void*)Scroller__CheckLimits_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_DelayStart", NULL, (void*)Scroller__get_DelayStart_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_DelayStart", NULL, (void*)Scroller__set_DelayStart_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Goto", NULL, (void*)Scroller__Goto_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction(".ctor", NULL, (void*)Scroller__New2_fn, 0, true, type, 0),
        new uFunction("get_OverflowExtent", NULL, (void*)Scroller__get_OverflowExtent_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_UserScroll", NULL, (void*)Scroller__get_UserScroll_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_UserScroll", NULL, (void*)Scroller__set_UserScroll_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

Scroller_type* Scroller_typeof()
{
    static uSStrong<Scroller_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 32;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Scroller);
    options.TypeSize = sizeof(Scroller_type);
    type = (Scroller_type*)uClassType::New("Fuse.Gestures.Scroller", options);
    type->fp_build_ = Scroller_build;
    type->fp_ctor_ = (void*)Scroller__New2_fn;
    type->fp_cctor_ = Scroller__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Scroller__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Scroller__OnUnrooted_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Scroller__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Scroller() :133
void Scroller__ctor_3_fn(Scroller* __this)
{
    __this->ctor_3();
}

// public void CheckLimits() :400
void Scroller__CheckLimits_fn(Scroller* __this)
{
    __this->CheckLimits();
}

// private void CheckNeedUpdated([bool off]) :235
void Scroller__CheckNeedUpdated_fn(Scroller* __this, bool* off)
{
    __this->CheckNeedUpdated(*off);
}

// public bool get_DelayStart() :145
void Scroller__get_DelayStart_fn(Scroller* __this, bool* __retval)
{
    *__retval = __this->DelayStart();
}

// public void set_DelayStart(bool value) :146
void Scroller__set_DelayStart_fn(Scroller* __this, bool* value)
{
    __this->DelayStart(*value);
}

// private void EndInteraction() :311
void Scroller__EndInteraction_fn(Scroller* __this)
{
    __this->EndInteraction();
}

// private float2 FromWindow(float2 p) :296
void Scroller__FromWindow_fn(Scroller* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->FromWindow(*p);
}

// public void Goto(float2 position) :427
void Scroller__Goto_fn(Scroller* __this, ::g::Uno::Float2* position)
{
    __this->Goto(*position);
}

// private bool HardCapture(Fuse.Input.PointerEventArgs args) :331
void Scroller__HardCapture_fn(Scroller* __this, ::g::Fuse::Input::PointerEventArgs* args, bool* __retval)
{
    *__retval = __this->HardCapture(args);
}

// private void MoveUser(Fuse.Gestures.Scroller.MoveUserFlags flags, double time) :504
void Scroller__MoveUser_fn(Scroller* __this, int* flags, double* time)
{
    __this->MoveUser(*flags, *time);
}

// public generated Scroller New() :133
void Scroller__New2_fn(Scroller** __retval)
{
    *__retval = Scroller::New2();
}

// private void OnLostCapture() :301
void Scroller__OnLostCapture_fn(Scroller* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :340
void Scroller__OnPointerMoved_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :268
void Scroller__OnPointerPressed_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :377
void Scroller__OnPointerReleased_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnRequestBringIntoView(object sender, Fuse.RequestBringIntoViewArgs args) :409
void Scroller__OnRequestBringIntoView_fn(Scroller* __this, uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args)
{
    __this->OnRequestBringIntoView(sender, args);
}

// protected override sealed void OnRooted() :151
void Scroller__OnRooted_fn(Scroller* __this)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_scrollable = uAs< ::g::Fuse::Controls::ScrollView*>(__this->Parent(), ::TYPES[29/*Fuse.Controls.ScrollView*/]);

    if (__this->_scrollable == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[10/*"Scroller ca...*/]));

    uPtr(__this->_scrollable)->_scroller = __this;
    uPtr(__this->_scrollable)->add_RequestBringIntoView(uDelegate::New(::TYPES[30/*Fuse.RequestBringIntoViewHandler*/], (void*)Scroller__OnRequestBringIntoView_fn, __this));
    uPtr(__this->_scrollable)->add_ScrollPositionChanged(uDelegate::New(::TYPES[31/*Fuse.Controls.ScrollPositionChangedHandler*/], (void*)Scroller__OnScrollPositionChanged_fn, __this));
    __this->_region = uPtr(uPtr(__this->_scrollable)->Motion())->AcquireSimulation();
    __this->UpdatePointerEvents(false);
}

// private void OnScrollPositionChanged(object s, Fuse.Controls.ScrollPositionChangedArgs args) :477
void Scroller__OnScrollPositionChanged_fn(Scroller* __this, uObject* s, ::g::Fuse::Controls::ScrollPositionChangedArgs* args)
{
    __this->OnScrollPositionChanged(s, args);
}

// protected override sealed void OnUnrooted() :166
void Scroller__OnUnrooted_fn(Scroller* __this)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnUnrooted()");
    uPtr(__this->_scrollable)->remove_RequestBringIntoView(uDelegate::New(::TYPES[30/*Fuse.RequestBringIntoViewHandler*/], (void*)Scroller__OnRequestBringIntoView_fn, __this));
    uPtr(__this->_scrollable)->remove_ScrollPositionChanged(uDelegate::New(::TYPES[31/*Fuse.Controls.ScrollPositionChangedHandler*/], (void*)Scroller__OnScrollPositionChanged_fn, __this));
    uPtr(__this->_scrollable)->_scroller = NULL;

    if (__this->_hasUpdated)
    {
        __this->_hasUpdated = false;
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, __this), 0);
    }

    __this->UpdatePointerEvents(true);

    if (__this->_region != NULL)
    {
        uPtr(uPtr(__this->_scrollable)->Motion())->ReleaseSimulation();
        __this->_region = NULL;
    }

    __this->_scrollable = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void OnUpdated() :456
void Scroller__OnUpdated_fn(Scroller* __this)
{
    __this->OnUpdated();
}

// public float2 get_OverflowExtent() :531
void Scroller__get_OverflowExtent_fn(Scroller* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->OverflowExtent();
}

// private void PerformBringIntoView() :417
void Scroller__PerformBringIntoView_fn(Scroller* __this)
{
    __this->PerformBringIntoView();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector sel) :473
void Scroller__UnoUXIPropertyListenerOnPropertyChanged_fn(Scroller* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* sel)
{
}

// private void UpdatePointerEvents([bool forceOff]) :207
void Scroller__UpdatePointerEvents_fn(Scroller* __this, bool* forceOff)
{
    __this->UpdatePointerEvents(*forceOff);
}

// private void UpdateScrollMax() :444
void Scroller__UpdateScrollMax_fn(Scroller* __this)
{
    __this->UpdateScrollMax();
}

// public bool get_UserScroll() :194
void Scroller__get_UserScroll_fn(Scroller* __this, bool* __retval)
{
    *__retval = __this->UserScroll();
}

// public void set_UserScroll(bool value) :195
void Scroller__set_UserScroll_fn(Scroller* __this, bool* value)
{
    __this->UserScroll(*value);
}

uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> Scroller::_horizontalGesture_;
uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> Scroller::_verticalGesture_;

// public generated Scroller() [instance] :133
void Scroller::ctor_3()
{
    uStackFrame __("Fuse.Gestures.Scroller", ".ctor()");
    _velocity = ((::g::Fuse::Motion::Simulation::PointerVelocity*)::g::Fuse::Motion::Simulation::PointerVelocity::New1(::TYPES[27/*Fuse.Motion.Simulation.PointerVelocity<float2>*/]));
    _delayStart = true;
    _userScroll = true;
    _down = -1;
    ctor_2();
}

// public void CheckLimits() [instance] :400
void Scroller::CheckLimits()
{
    uStackFrame __("Fuse.Gestures.Scroller", "CheckLimits()");
    UpdateScrollMax();

    if ((_region != NULL) && ::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::TYPES[28/*Fuse.Motion.Simulation.Simulation*/])))
        Goto(uPtr(_scrollable)->ScrollPosition());
}

// private void CheckNeedUpdated([bool off]) [instance] :235
void Scroller::CheckNeedUpdated(bool off)
{
    uStackFrame __("Fuse.Gestures.Scroller", "CheckNeedUpdated([bool])");
    bool needUpdated = (_region != NULL) && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::TYPES[28/*Fuse.Motion.Simulation.Simulation*/]));

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, this), 0);
        _hasUpdated = true;
        _updateFirstFrame = true;
    }
    else if (off)
    {
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// public bool get_DelayStart() [instance] :145
bool Scroller::DelayStart()
{
    return _delayStart;
}

// public void set_DelayStart(bool value) [instance] :146
void Scroller::DelayStart(bool value)
{
    _delayStart = value;
}

// private void EndInteraction() [instance] :311
void Scroller::EndInteraction()
{
    uStackFrame __("Fuse.Gestures.Scroller", "EndInteraction()");
    _down = -1;
    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);
    CheckNeedUpdated(false);
    uPtr(_scrollable)->EndInteraction(this);
}

// private float2 FromWindow(float2 p) [instance] :296
::g::Uno::Float2 Scroller::FromWindow(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Gestures.Scroller", "FromWindow(float2)");
    return uPtr(uPtr(_scrollable)->Parent())->WindowToLocal(p);
}

// public void Goto(float2 position) [instance] :427
void Scroller::Goto(::g::Uno::Float2 position)
{
    uStackFrame __("Fuse.Gestures.Scroller", "Goto(float2)");

    if (_scrollable == NULL)
        return;

    position = uPtr(_scrollable)->Constrain(position);
    UpdateScrollMax();

    if (_region != NULL)
    {
        if (::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::TYPES[28/*Fuse.Motion.Simulation.Simulation*/])))
            ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[24/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(uPtr(_scrollable)->ScrollPosition()));

        ::g::Fuse::Motion::Simulation::BoundedRegion2D::MoveTo(uInterface(uPtr(_region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/]), position);
    }

    CheckNeedUpdated(false);
}

// private bool HardCapture(Fuse.Input.PointerEventArgs args) [instance] :331
bool Scroller::HardCapture(::g::Fuse::Input::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Gestures.Scroller", "HardCapture(Fuse.Input.PointerEventArgs)");
    _isHardCapture = uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Scroller__OnLostCapture_fn, this), NULL);

    if (!_isHardCapture)
        OnLostCapture();

    uPtr(_scrollable)->BeginInteraction(this, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Scroller__OnLostCapture_fn, this));
    return _isHardCapture;
}

// private void MoveUser(Fuse.Gestures.Scroller.MoveUserFlags flags, double time) [instance] :504
void Scroller::MoveUser(int flags, double time)
{
    uStackFrame __("Fuse.Gestures.Scroller", "MoveUser(Fuse.Gestures.Scroller.MoveUserFlags,double)");
    ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(FromWindow(_prevPos), FromWindow(_pointerPos));

    if ((flags & 2) == 2)
        diff = ::g::Uno::Float2__New1(0.0f);

    _prevPos = _pointerPos;
    double elapsed = time - _prevTime;
    _prevTime = time;

    if ((flags & 1) == 1)
    {
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[24/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(uPtr(_scrollable)->ScrollPosition()));
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::StepUser(uInterface(uPtr(_region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/]), diff);
    }

    ::g::Fuse::Motion::Simulation::PointerVelocity__AddSample_fn(uPtr(_velocity), uCRef(FromWindow(_pointerPos)), uCRef((double)(float)elapsed), uCRef<int>((!((flags & 1) == 1) ? 1 : 0) | (((flags & 2) == 2) ? 2 : 0)));
}

// private void OnLostCapture() [instance] :301
void Scroller::OnLostCapture()
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnLostCapture()");

    if (IsRootingCompleted())
    {
        EndInteraction();

        if (::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(_region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/])))
            ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(_region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New1(0.0f));
    }
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :340
void Scroller::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnPointerMoved(object,Fuse.Input.PointerMovedArgs)");

    if (_down != uPtr(args)->PointIndex())
        return;

    if (!::g::Fuse::Input::Pointer::IsPressed1(_down))
        OnLostCapture();

    if (!_isHardCapture)
    {
        _softCaptureCurrent = uPtr(args)->WindowPoint();
        ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(_softCaptureCurrent, _softCaptureStart);

        if (uPtr(_scrollable)->AllowedScrollDirections() == 15)
        {
            if (::g::Uno::Vector::Length(diff) > 10.0f)
                HardCapture(args);
        }

        if (uPtr(_scrollable)->AllowedScrollDirections() == 3)
        {
            if (uPtr(Scroller::_horizontalGesture())->IsWithinBounds(diff))
                HardCapture(args);
        }

        if (uPtr(_scrollable)->AllowedScrollDirections() == 12)
        {
            if (uPtr(Scroller::_verticalGesture())->IsWithinBounds(diff))
                HardCapture(args);
        }
    }

    _pointerPos = uPtr(args)->WindowPoint();
    MoveUser((!_delayStart || _isHardCapture) ? 1 : 0, args->Timestamp());
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :268
void Scroller::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnPointerPressed(object,Fuse.Input.PointerPressedArgs)");
    ::g::Uno::Float2 ret2;

    if (_down == -1)
    {
        bool captured = false;
        _isHardCapture = false;

        if (::g::Uno::Vector::Length((::g::Fuse::Motion::Simulation::MotionSimulation::get_Velocity_ex(uInterface(uPtr(_region), ::TYPES[24/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret2), ret2)) > 100.0f)
            captured = HardCapture(args);
        else
            captured = uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Scroller__OnLostCapture_fn, this), NULL);

        if (captured)
        {
            _softCaptureStart = (_softCaptureCurrent = uPtr(args)->WindowPoint());
            _down = args->PointIndex();
            _pointerPos = args->WindowPoint();
            _prevPos = (_startPos = _pointerPos);
            _prevTime = args->Timestamp();
            ::g::Fuse::Motion::Simulation::PointerVelocity__Reset1_fn(uPtr(_velocity), uCRef(FromWindow(_pointerPos)), uCRef(::g::Uno::Float2__New1(0.0f)), uCRef(0.0));
            ::g::Fuse::Motion::Simulation::BoundedRegion2D::StartUser(uInterface(uPtr(_region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/]));
            ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[24/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(uPtr(_scrollable)->ScrollPosition()));
            CheckNeedUpdated(false);
        }
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :377
void Scroller::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnPointerReleased(object,Fuse.Input.PointerReleasedArgs)");
    ::g::Uno::Float2 ret3;

    if (_down == uPtr(args)->PointIndex())
    {
        if (_delayStart && !_isHardCapture)
        {
            OnLostCapture();
            return;
        }

        if (::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(_region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/])))
        {
            _pointerPos = uPtr(args)->WindowPoint();
            MoveUser(3, args->Timestamp());
            ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(_region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__op_UnaryNegation(uPtr(_scrollable)->ConstrainExtents((::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret3), ret3))));
        }

        EndInteraction();
    }
}

// private void OnRequestBringIntoView(object sender, Fuse.RequestBringIntoViewArgs args) [instance] :409
void Scroller::OnRequestBringIntoView(uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnRequestBringIntoView(object,Fuse.RequestBringIntoViewArgs)");
    _pendingBringIntoView = uPtr(args)->Visual();
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)Scroller__PerformBringIntoView_fn, this), 1, ::g::Fuse::LayoutPriority::Post());
}

// private void OnScrollPositionChanged(object s, Fuse.Controls.ScrollPositionChangedArgs args) [instance] :477
void Scroller::OnScrollPositionChanged(uObject* s, ::g::Fuse::Controls::ScrollPositionChangedArgs* args)
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnScrollPositionChanged(object,Fuse.Controls.ScrollPositionChangedArgs)");
    ::g::Uno::Float2 ret4;
    ::g::Uno::Float2 ret5;

    if (uPtr(args)->Origin() == this)
        return;

    if (uPtr(args)->IsAdjustment() && ::g::Uno::Float2__op_Inequality(uPtr(args)->ArrangeOffset(), ::g::Uno::Float2__New1(0.0f)))
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[24/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(::g::Uno::Float2__op_Addition2((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[24/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret4), ret4), uPtr(args)->ArrangeOffset())));

    if (::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(_region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/])))
        return;

    if (!uPtr(args)->IsAdjustment())
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::Reset(uInterface(uPtr(_region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/]), (::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret5), ret5));

    CheckNeedUpdated(true);
}

// private void OnUpdated() [instance] :456
void Scroller::OnUpdated()
{
    uStackFrame __("Fuse.Gestures.Scroller", "OnUpdated()");
    ::g::Uno::Float2 ret6;

    if (_updateFirstFrame)
    {
        _updateFirstFrame = false;
        return;
    }

    UpdateScrollMax();
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_region), ::TYPES[28/*Fuse.Motion.Simulation.Simulation*/]), ::g::Fuse::Time::FrameInterval());
    uPtr(_scrollable)->SetScrollPosition1((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[24/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret6), ret6), (uObject*)this);
    CheckNeedUpdated(true);
}

// public float2 get_OverflowExtent() [instance] :531
::g::Uno::Float2 Scroller::OverflowExtent()
{
    uStackFrame __("Fuse.Gestures.Scroller", "get_OverflowExtent()");
    return (_scrollable == NULL) ? ::g::Uno::Float2__New1(0.0f) : uPtr(uPtr(_scrollable)->Motion())->OverflowExtent();
}

// private void PerformBringIntoView() [instance] :417
void Scroller::PerformBringIntoView()
{
    uStackFrame __("Fuse.Gestures.Scroller", "PerformBringIntoView()");

    if ((_pendingBringIntoView == NULL) || !uPtr(_pendingBringIntoView)->IsRootingCompleted())
        return;

    ::g::Uno::Float2 pos = uPtr(_scrollable)->GetVisualScrollPosition(_pendingBringIntoView);
    Goto(pos);
    _pendingBringIntoView = NULL;
}

// private void UpdatePointerEvents([bool forceOff]) [instance] :207
void Scroller::UpdatePointerEvents(bool forceOff)
{
    uStackFrame __("Fuse.Gestures.Scroller", "UpdatePointerEvents([bool])");
    bool shouldListen = (!forceOff && (_scrollable != NULL)) && _userScroll;

    if (shouldListen == _pointerListening)
        return;

    if (shouldListen)
    {
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _scrollable, uDelegate::New(::TYPES[4/*Fuse.Input.PointerPressedHandler*/], (void*)Scroller__OnPointerPressed_fn, this));
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _scrollable, uDelegate::New(::TYPES[5/*Fuse.Input.PointerMovedHandler*/], (void*)Scroller__OnPointerMoved_fn, this));
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _scrollable, uDelegate::New(::TYPES[6/*Fuse.Input.PointerReleasedHandler*/], (void*)Scroller__OnPointerReleased_fn, this));
    }
    else if (_scrollable != NULL)
    {
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _scrollable, uDelegate::New(::TYPES[4/*Fuse.Input.PointerPressedHandler*/], (void*)Scroller__OnPointerPressed_fn, this));
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _scrollable, uDelegate::New(::TYPES[5/*Fuse.Input.PointerMovedHandler*/], (void*)Scroller__OnPointerMoved_fn, this));
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _scrollable, uDelegate::New(::TYPES[6/*Fuse.Input.PointerReleasedHandler*/], (void*)Scroller__OnPointerReleased_fn, this));
    }
    else
        U_THROW(::g::Uno::Exception::New2(::STRINGS[11/*"Invalid tea...*/]));

    _pointerListening = shouldListen;
}

// private void UpdateScrollMax() [instance] :444
void Scroller::UpdateScrollMax()
{
    uStackFrame __("Fuse.Gestures.Scroller", "UpdateScrollMax()");

    if (_scrollable == NULL)
        return;

    if (_region != NULL)
    {
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::MaxPosition(uInterface(uPtr(_region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/]), uPtr(_scrollable)->MaxScroll());
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::MinPosition(uInterface(uPtr(_region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/]), uPtr(_scrollable)->MinScroll());
    }
}

// public bool get_UserScroll() [instance] :194
bool Scroller::UserScroll()
{
    return _userScroll;
}

// public void set_UserScroll(bool value) [instance] :195
void Scroller::UserScroll(bool value)
{
    uStackFrame __("Fuse.Gestures.Scroller", "set_UserScroll(bool)");

    if (_userScroll != value)
    {
        _userScroll = value;
        UpdatePointerEvents(false);
        OnLostCapture();
    }
}

// public generated Scroller New() [static] :133
Scroller* Scroller::New2()
{
    Scroller* obj1 = (Scroller*)uNew(Scroller_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/0.42.4/$.uno
// ---------------------------------------------------------------------------------------------------

// public class ScrollTo :52
// {
static void ScrollTo_build(uType* type)
{
    type->SetFields(8,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::ScrollTo, _hasPosition), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::ScrollTo, _hasRelativePosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::ScrollTo, _position), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::ScrollTo, _relativePosition), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::Fuse::Gestures::ScrollTo, _Target), 0);
    type->Reflection.SetFunctions(7,
        new uFunction(".ctor", NULL, (void*)ScrollTo__New2_fn, 0, true, type, 0),
        new uFunction("get_Position", NULL, (void*)ScrollTo__get_Position_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Position", NULL, (void*)ScrollTo__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_RelativePosition", NULL, (void*)ScrollTo__get_RelativePosition_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_RelativePosition", NULL, (void*)ScrollTo__set_RelativePosition_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Target", NULL, (void*)ScrollTo__get_Target_fn, 0, false, ::g::Fuse::Controls::ScrollView_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)ScrollTo__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::ScrollView_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollTo_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 13;
    options.ObjectSize = sizeof(ScrollTo);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.ScrollTo", options);
    type->fp_build_ = ScrollTo_build;
    type->fp_ctor_ = (void*)ScrollTo__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ScrollTo__Perform_fn;
    return type;
}

// public generated ScrollTo() :52
void ScrollTo__ctor_2_fn(ScrollTo* __this)
{
    __this->ctor_2();
}

// public generated ScrollTo New() :52
void ScrollTo__New2_fn(ScrollTo** __retval)
{
    *__retval = ScrollTo::New2();
}

// protected override sealed void Perform(Fuse.Node target) :90
void ScrollTo__Perform_fn(ScrollTo* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Gestures.ScrollTo", "Perform(Fuse.Node)");

    if (__this->Target() == NULL)
        return;

    if (__this->_hasRelativePosition)
        uPtr(__this->Target())->Goto(::g::Uno::Float2__op_Addition2(uPtr(__this->Target())->MinScroll(), ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(__this->Target())->MaxScroll(), uPtr(__this->Target())->MinScroll()), __this->_relativePosition)));
    else if (__this->_hasPosition)
        uPtr(__this->Target())->Goto(__this->_position);
}

// public float2 get_Position() :62
void ScrollTo__get_Position_fn(ScrollTo* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(float2 value) :63
void ScrollTo__set_Position_fn(ScrollTo* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// public float2 get_RelativePosition() :82
void ScrollTo__get_RelativePosition_fn(ScrollTo* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->RelativePosition();
}

// public void set_RelativePosition(float2 value) :83
void ScrollTo__set_RelativePosition_fn(ScrollTo* __this, ::g::Uno::Float2* value)
{
    __this->RelativePosition(*value);
}

// public generated Fuse.Controls.ScrollView get_Target() :55
void ScrollTo__get_Target_fn(ScrollTo* __this, ::g::Fuse::Controls::ScrollView** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Controls.ScrollView value) :55
void ScrollTo__set_Target_fn(ScrollTo* __this, ::g::Fuse::Controls::ScrollView* value)
{
    __this->Target(value);
}

// public generated ScrollTo() [instance] :52
void ScrollTo::ctor_2()
{
    ctor_1();
}

// public float2 get_Position() [instance] :62
::g::Uno::Float2 ScrollTo::Position()
{
    return _position;
}

// public void set_Position(float2 value) [instance] :63
void ScrollTo::Position(::g::Uno::Float2 value)
{
    _position = value;
    _hasPosition = true;
}

// public float2 get_RelativePosition() [instance] :82
::g::Uno::Float2 ScrollTo::RelativePosition()
{
    return _relativePosition;
}

// public void set_RelativePosition(float2 value) [instance] :83
void ScrollTo::RelativePosition(::g::Uno::Float2 value)
{
    _relativePosition = value;
    _hasRelativePosition = true;
}

// public generated Fuse.Controls.ScrollView get_Target() [instance] :55
::g::Fuse::Controls::ScrollView* ScrollTo::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Controls.ScrollView value) [instance] :55
void ScrollTo::Target(::g::Fuse::Controls::ScrollView* value)
{
    _Target = value;
}

// public generated ScrollTo New() [static] :52
ScrollTo* ScrollTo::New2()
{
    ScrollTo* obj1 = (ScrollTo*)uNew(ScrollTo_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class SetSwipeActive :1183
// {
static void SetSwipeActive_build(uType* type)
{
    type->SetFields(8,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SetSwipeActive, _Bypass), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::SetSwipeActive, _Target), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SetSwipeActive, _Value), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Bypass", NULL, (void*)SetSwipeActive__get_Bypass_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Bypass", NULL, (void*)SetSwipeActive__set_Bypass_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)SetSwipeActive__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)SetSwipeActive__get_Target_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)SetSwipeActive__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipeGesture_typeof()),
        new uFunction("get_Value", NULL, (void*)SetSwipeActive__get_Value_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)SetSwipeActive__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* SetSwipeActive_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.ObjectSize = sizeof(SetSwipeActive);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.SetSwipeActive", options);
    type->fp_build_ = SetSwipeActive_build;
    type->fp_ctor_ = (void*)SetSwipeActive__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))SetSwipeActive__Perform_fn;
    return type;
}

// public generated SetSwipeActive() :1183
void SetSwipeActive__ctor_2_fn(SetSwipeActive* __this)
{
    __this->ctor_2();
}

// public generated bool get_Bypass() :1192
void SetSwipeActive__get_Bypass_fn(SetSwipeActive* __this, bool* __retval)
{
    *__retval = __this->Bypass();
}

// public generated void set_Bypass(bool value) :1192
void SetSwipeActive__set_Bypass_fn(SetSwipeActive* __this, bool* value)
{
    __this->Bypass(*value);
}

// public generated SetSwipeActive New() :1183
void SetSwipeActive__New2_fn(SetSwipeActive** __retval)
{
    *__retval = SetSwipeActive::New2();
}

// protected override sealed void Perform(Fuse.Node target) :1194
void SetSwipeActive__Perform_fn(SetSwipeActive* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Gestures.SetSwipeActive", "Perform(Fuse.Node)");

    if (__this->Target() != NULL)
        uPtr(__this->Target())->SetActive(__this->Value(), NULL, __this->Bypass());
}

// public generated Fuse.Gestures.SwipeGesture get_Target() :1186
void SetSwipeActive__get_Target_fn(SetSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) :1186
void SetSwipeActive__set_Target_fn(SetSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Target(value);
}

// public generated bool get_Value() :1189
void SetSwipeActive__get_Value_fn(SetSwipeActive* __this, bool* __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(bool value) :1189
void SetSwipeActive__set_Value_fn(SetSwipeActive* __this, bool* value)
{
    __this->Value(*value);
}

// public generated SetSwipeActive() [instance] :1183
void SetSwipeActive::ctor_2()
{
    ctor_1();
}

// public generated bool get_Bypass() [instance] :1192
bool SetSwipeActive::Bypass()
{
    return _Bypass;
}

// public generated void set_Bypass(bool value) [instance] :1192
void SetSwipeActive::Bypass(bool value)
{
    _Bypass = value;
}

// public generated Fuse.Gestures.SwipeGesture get_Target() [instance] :1186
::g::Fuse::Gestures::SwipeGesture* SetSwipeActive::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) [instance] :1186
void SetSwipeActive::Target(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Target = value;
}

// public generated bool get_Value() [instance] :1189
bool SetSwipeActive::Value()
{
    return _Value;
}

// public generated void set_Value(bool value) [instance] :1189
void SetSwipeActive::Value(bool value)
{
    _Value = value;
}

// public generated SetSwipeActive New() [static] :1183
SetSwipeActive* SetSwipeActive::New2()
{
    SetSwipeActive* obj1 = (SetSwipeActive*)uNew(SetSwipeActive_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class Swiped :1310
// {
static void Swiped_build(uType* type)
{
    ::TYPES[32] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        ::g::Fuse::Gestures::SwipedHow_typeof(), offsetof(::g::Fuse::Gestures::Swiped, _how), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::Swiped, _region), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::Swiped, _Source), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_How", NULL, (void*)Swiped__get_How_fn, 0, false, ::g::Fuse::Gestures::SwipedHow_typeof(), 0),
        new uFunction("set_How", NULL, (void*)Swiped__set_How_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipedHow_typeof()),
        new uFunction(".ctor", NULL, (void*)Swiped__New2_fn, 0, true, type, 1, ::g::Fuse::Gestures::SwipeGesture_typeof()),
        new uFunction("get_Source", NULL, (void*)Swiped__get_Source_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* Swiped_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 31;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Swiped);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Swiped", options);
    type->fp_build_ = Swiped_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Swiped__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Swiped__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Swiped(Fuse.Gestures.SwipeGesture source) :1316
void Swiped__ctor_4_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture* source)
{
    __this->ctor_4(source);
}

// public Fuse.Gestures.SwipedHow get_How() :1329
void Swiped__get_How_fn(Swiped* __this, int* __retval)
{
    *__retval = __this->How();
}

// public void set_How(Fuse.Gestures.SwipedHow value) :1330
void Swiped__set_How_fn(Swiped* __this, int* value)
{
    __this->How(*value);
}

// public Swiped New(Fuse.Gestures.SwipeGesture source) :1316
void Swiped__New2_fn(::g::Fuse::Gestures::SwipeGesture* source, Swiped** __retval)
{
    *__retval = Swiped::New2(source);
}

// protected override sealed void OnRooted() :1334
void Swiped__OnRooted_fn(Swiped* __this)
{
    uStackFrame __("Fuse.Gestures.Swiped", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_region = uPtr(__this->Source())->Region();
    uPtr(__this->_region)->add_Swiped(uDelegate::New(::TYPES[32/*Uno.Action<bool>*/], (void*)Swiped__OnSwiped_fn, __this));
}

// private void OnSwiped(bool v) :1347
void Swiped__OnSwiped_fn(Swiped* __this, bool* v)
{
    __this->OnSwiped(*v);
}

// protected override sealed void OnUnrooted() :1341
void Swiped__OnUnrooted_fn(Swiped* __this)
{
    uStackFrame __("Fuse.Gestures.Swiped", "OnUnrooted()");
    uPtr(__this->_region)->remove_Swiped(uDelegate::New(::TYPES[32/*Uno.Action<bool>*/], (void*)Swiped__OnSwiped_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() :1313
void Swiped__get_Source_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) :1313
void Swiped__set_Source_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Source(value);
}

// public Swiped(Fuse.Gestures.SwipeGesture source) [instance] :1316
void Swiped::ctor_4(::g::Fuse::Gestures::SwipeGesture* source)
{
    ctor_3();
    Source(source);
}

// public Fuse.Gestures.SwipedHow get_How() [instance] :1329
int Swiped::How()
{
    return _how;
}

// public void set_How(Fuse.Gestures.SwipedHow value) [instance] :1330
void Swiped::How(int value)
{
    _how = value;
}

// private void OnSwiped(bool v) [instance] :1347
void Swiped::OnSwiped(bool v)
{
    uStackFrame __("Fuse.Gestures.Swiped", "OnSwiped(bool)");

    if (v && ((How() == 0) || (How() == 2)))
        Pulse();

    if (!v && ((How() == 1) || (How() == 2)))
        Pulse();
}

// public generated Fuse.Gestures.SwipeGesture get_Source() [instance] :1313
::g::Fuse::Gestures::SwipeGesture* Swiped::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) [instance] :1313
void Swiped::Source(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Source = value;
}

// public Swiped New(Fuse.Gestures.SwipeGesture source) [static] :1316
Swiped* Swiped::New2(::g::Fuse::Gestures::SwipeGesture* source)
{
    Swiped* obj1 = (Swiped*)uNew(Swiped_typeof());
    obj1->ctor_4(source);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public enum SwipedHow :1273
uEnumType* SwipedHow_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipedHow", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "ToActive", 0LL,
        "ToInactive", 1LL,
        "ToEither", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public enum SwipeDirection :812
uEnumType* SwipeDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipeDirection", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Left", 0LL,
        "Up", 1LL,
        "Right", 2LL,
        "Down", 3LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class SwipeGesture :855
// {
// static SwipeGesture() :855
static void SwipeGesture__cctor_1_fn(uType* __type)
{
    SwipeGesture::_isActiveName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"IsActive"*/]);
}

static void SwipeGesture_build(uType* type)
{
    ::STRINGS[12] = uString::Const("IsActive");
    ::STRINGS[13] = uString::Const("Element");
    ::STRINGS[14] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno");
    ::STRINGS[4] = uString::Const("OnRooted");
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipeGesture_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(SwipeGesture_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipeGesture_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipeGesture_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(SwipeGesture_type, interface4));
    type->SetFields(13,
        ::g::Fuse::Gestures::SwipeDirection_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _direction), 0,
        ::g::Fuse::Gestures::Edge_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _edge), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _hasDirection), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _hasEdge), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _hitSize), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _isActive), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _isEnabled), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _length), 0,
        ::TYPES[1/*Fuse.Elements.Element*/], offsetof(::g::Fuse::Gestures::SwipeGesture, _lengthNode), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _region), 0,
        ::g::Fuse::Gestures::Internal::Swiper_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _swiper), 0,
        ::g::Fuse::Gestures::SwipeType_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _type), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Gestures::SwipeGesture::_isActiveName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(18,
        new uFunction("get_Direction", NULL, (void*)SwipeGesture__get_Direction_fn, 0, false, ::g::Fuse::Gestures::SwipeDirection_typeof(), 0),
        new uFunction("set_Direction", NULL, (void*)SwipeGesture__set_Direction_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipeDirection_typeof()),
        new uFunction("get_Edge", NULL, (void*)SwipeGesture__get_Edge_fn, 0, false, ::g::Fuse::Gestures::Edge_typeof(), 0),
        new uFunction("set_Edge", NULL, (void*)SwipeGesture__set_Edge_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::Edge_typeof()),
        new uFunction("get_HitSize", NULL, (void*)SwipeGesture__get_HitSize_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_HitSize", NULL, (void*)SwipeGesture__set_HitSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_IsActive", NULL, (void*)SwipeGesture__get_IsActive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsActive", NULL, (void*)SwipeGesture__set_IsActive_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_IsEnabled", NULL, (void*)SwipeGesture__get_IsEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsEnabled", NULL, (void*)SwipeGesture__set_IsEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Length", NULL, (void*)SwipeGesture__get_Length_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Length", NULL, (void*)SwipeGesture__set_Length_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_LengthNode", NULL, (void*)SwipeGesture__get_LengthNode_fn, 0, false, ::TYPES[1/*Fuse.Elements.Element*/], 0),
        new uFunction("set_LengthNode", NULL, (void*)SwipeGesture__set_LengthNode_fn, 0, false, uVoid_typeof(), 1, ::TYPES[1/*Fuse.Elements.Element*/]),
        new uFunction(".ctor", NULL, (void*)SwipeGesture__New2_fn, 0, true, type, 0),
        new uFunction("SetIsActive", NULL, (void*)SwipeGesture__SetIsActive_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_Type", NULL, (void*)SwipeGesture__get_Type_fn, 0, false, ::g::Fuse::Gestures::SwipeType_typeof(), 0),
        new uFunction("set_Type", NULL, (void*)SwipeGesture__set_Type_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipeType_typeof()));
}

SwipeGesture_type* SwipeGesture_typeof()
{
    static uSStrong<SwipeGesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 26;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(SwipeGesture);
    options.TypeSize = sizeof(SwipeGesture_type);
    type = (SwipeGesture_type*)uClassType::New("Fuse.Gestures.SwipeGesture", options);
    type->fp_build_ = SwipeGesture_build;
    type->fp_ctor_ = (void*)SwipeGesture__New2_fn;
    type->fp_cctor_ = SwipeGesture__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))SwipeGesture__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))SwipeGesture__OnUnrooted_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))SwipeGesture__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated SwipeGesture() :855
void SwipeGesture__ctor_3_fn(SwipeGesture* __this)
{
    __this->ctor_3();
}

// private void ConstructRegion() :980
void SwipeGesture__ConstructRegion_fn(SwipeGesture* __this)
{
    __this->ConstructRegion();
}

// public Fuse.Gestures.SwipeDirection get_Direction() :901
void SwipeGesture__get_Direction_fn(SwipeGesture* __this, int* __retval)
{
    *__retval = __this->Direction();
}

// public void set_Direction(Fuse.Gestures.SwipeDirection value) :902
void SwipeGesture__set_Direction_fn(SwipeGesture* __this, int* value)
{
    __this->Direction(*value);
}

// public Fuse.Gestures.Edge get_Edge() :882
void SwipeGesture__get_Edge_fn(SwipeGesture* __this, int* __retval)
{
    *__retval = __this->Edge();
}

// public void set_Edge(Fuse.Gestures.Edge value) :883
void SwipeGesture__set_Edge_fn(SwipeGesture* __this, int* value)
{
    __this->Edge(*value);
}

// public float get_HitSize() :947
void SwipeGesture__get_HitSize_fn(SwipeGesture* __this, float* __retval)
{
    *__retval = __this->HitSize();
}

// public void set_HitSize(float value) :948
void SwipeGesture__set_HitSize_fn(SwipeGesture* __this, float* value)
{
    __this->HitSize(*value);
}

// public bool get_IsActive() :1076
void SwipeGesture__get_IsActive_fn(SwipeGesture* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value) :1077
void SwipeGesture__set_IsActive_fn(SwipeGesture* __this, bool* value)
{
    __this->IsActive(*value);
}

// public bool get_IsEnabled() :954
void SwipeGesture__get_IsEnabled_fn(SwipeGesture* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public void set_IsEnabled(bool value) :955
void SwipeGesture__set_IsEnabled_fn(SwipeGesture* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public float get_Length() :922
void SwipeGesture__get_Length_fn(SwipeGesture* __this, float* __retval)
{
    *__retval = __this->Length();
}

// public void set_Length(float value) :923
void SwipeGesture__set_Length_fn(SwipeGesture* __this, float* value)
{
    __this->Length(*value);
}

// public Fuse.Elements.Element get_LengthNode() :935
void SwipeGesture__get_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->LengthNode();
}

// public void set_LengthNode(Fuse.Elements.Element value) :936
void SwipeGesture__set_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element* value)
{
    __this->LengthNode(value);
}

// public generated SwipeGesture New() :855
void SwipeGesture__New2_fn(SwipeGesture** __retval)
{
    *__retval = SwipeGesture::New2();
}

// protected override sealed void OnRooted() :964
void SwipeGesture__OnRooted_fn(SwipeGesture* __this)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Fuse::Elements::Element* element = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[1/*Fuse.Elements.Element*/]);

    if (element == NULL)
    {
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[13/*"Element"*/], __this->Parent(), __this, ::STRINGS[14/*"/Users/most...*/], 970, ::STRINGS[4/*"OnRooted"*/]);
        return;
    }

    __this->ConstructRegion();
    __this->_swiper = ::g::Fuse::Gestures::Internal::Swiper::AttachSwiper(element);
    uPtr(__this->_swiper)->AddRegion(__this->Region());
    uPtr(__this->_region)->AddPropertyListener((uObject*)__this);
}

// protected override sealed void OnUnrooted() :1057
void SwipeGesture__OnUnrooted_fn(SwipeGesture* __this)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "OnUnrooted()");
    uPtr(__this->_region)->RemovePropertyListener((uObject*)__this);

    if (__this->_swiper != NULL)
    {
        uPtr(__this->_swiper)->RemoveRegion(__this->_region);
        uPtr(__this->_swiper)->Detach();
        __this->_swiper = NULL;
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// internal Fuse.Gestures.Internal.SwipeRegion get_Region() :1054
void SwipeGesture__get_Region_fn(SwipeGesture* __this, ::g::Fuse::Gestures::Internal::SwipeRegion** __retval)
{
    *__retval = __this->Region();
}

// internal void SetActive(bool value, Uno.UX.IPropertyListener origin, [bool bypass]) :1086
void SwipeGesture__SetActive_fn(SwipeGesture* __this, bool* value, uObject* origin, bool* bypass)
{
    __this->SetActive(*value, origin, *bypass);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) :1080
void SwipeGesture__SetIsActive_fn(SwipeGesture* __this, bool* value, uObject* origin)
{
    __this->SetIsActive(*value, origin);
}

// public Fuse.Gestures.SwipeType get_Type() :866
void SwipeGesture__get_Type_fn(SwipeGesture* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(Fuse.Gestures.SwipeType value) :867
void SwipeGesture__set_Type_fn(SwipeGesture* __this, int* value)
{
    __this->Type(*value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :1045
void SwipeGesture__UnoUXIPropertyListenerOnPropertyChanged_fn(SwipeGesture* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((obj == __this->_region) && ::g::Uno::UX::Selector__op_Equality(prop_, SwipeGesture::_isActiveName()))
        __this->IsActive(uPtr(__this->_region)->IsActive());
}

::g::Uno::UX::Selector SwipeGesture::_isActiveName_;

// public generated SwipeGesture() [instance] :855
void SwipeGesture::ctor_3()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", ".ctor()");
    _region = ::g::Fuse::Gestures::Internal::SwipeRegion::New2();
    _length = 100.0f;
    _hitSize = 100.0f;
    _isEnabled = true;
    ctor_2();
}

// private void ConstructRegion() [instance] :980
void SwipeGesture::ConstructRegion()
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "ConstructRegion()");

    if (_hasEdge)
    {
        uPtr(_region)->Area = 1;

        switch (_edge)
        {
            case 0:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(1.0f, 0.0f);
                uPtr(_region)->Priority = 1;
                break;
            }
            case 2:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 0.0f, 1.0f, 0.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, 1.0f);
                uPtr(_region)->Priority = 2;
                break;
            }
            case 1:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(1.0f, 0.0f, 1.0f, 1.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(-1.0f, 0.0f);
                uPtr(_region)->Priority = 3;
                break;
            }
            case 3:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 1.0f, 1.0f, 1.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, -1.0f);
                uPtr(_region)->Priority = 4;
                break;
            }
        }
    }
    else
    {
        uPtr(_region)->Area = 0;

        switch (Direction())
        {
            case 0:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(-1.0f, 0.0f);
                uPtr(_region)->Priority = 101;
                break;
            }
            case 1:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, -1.0f);
                uPtr(_region)->Priority = 102;
                break;
            }
            case 2:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(1.0f, 0.0f);
                uPtr(_region)->Priority = 103;
                break;
            }
            case 3:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, 1.0f);
                uPtr(_region)->Priority = 104;
                break;
            }
        }
    }

    uPtr(_region)->SetProgress((double)(IsActive() ? 1 : 0), false);
    uPtr(_region)->Length = (double)Length();
    uPtr(_region)->LengthElement = LengthNode();
    uPtr(_region)->AreaVectorDistance = HitSize();
    uPtr(_region)->IsInterruptible = (Type() != 0);
    uPtr(_region)->RevertActive = (Type() != 1);
    uPtr(_region)->AutoTrigger = ((Type() == 2) || (Type() == 3));
    uPtr(_region)->Continuous = (Type() == 2);
    uPtr(_region)->IsEnabled(IsEnabled());
}

// public Fuse.Gestures.SwipeDirection get_Direction() [instance] :901
int SwipeGesture::Direction()
{
    return _direction;
}

// public void set_Direction(Fuse.Gestures.SwipeDirection value) [instance] :902
void SwipeGesture::Direction(int value)
{
    _direction = value;
    _hasDirection = true;
}

// public Fuse.Gestures.Edge get_Edge() [instance] :882
int SwipeGesture::Edge()
{
    return _edge;
}

// public void set_Edge(Fuse.Gestures.Edge value) [instance] :883
void SwipeGesture::Edge(int value)
{
    _edge = value;
    _hasEdge = true;
}

// public float get_HitSize() [instance] :947
float SwipeGesture::HitSize()
{
    return _hitSize;
}

// public void set_HitSize(float value) [instance] :948
void SwipeGesture::HitSize(float value)
{
    _hitSize = value;
}

// public bool get_IsActive() [instance] :1076
bool SwipeGesture::IsActive()
{
    return _isActive;
}

// public void set_IsActive(bool value) [instance] :1077
void SwipeGesture::IsActive(bool value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_IsActive(bool)");
    SetIsActive(value, NULL);
}

// public bool get_IsEnabled() [instance] :954
bool SwipeGesture::IsEnabled()
{
    return _isEnabled;
}

// public void set_IsEnabled(bool value) [instance] :955
void SwipeGesture::IsEnabled(bool value)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "set_IsEnabled(bool)");

    if (_isEnabled == value)
        return;

    _isEnabled = value;
    uPtr(_region)->IsEnabled(_isEnabled);
}

// public float get_Length() [instance] :922
float SwipeGesture::Length()
{
    return _length;
}

// public void set_Length(float value) [instance] :923
void SwipeGesture::Length(float value)
{
    _length = value;
}

// public Fuse.Elements.Element get_LengthNode() [instance] :935
::g::Fuse::Elements::Element* SwipeGesture::LengthNode()
{
    return _lengthNode;
}

// public void set_LengthNode(Fuse.Elements.Element value) [instance] :936
void SwipeGesture::LengthNode(::g::Fuse::Elements::Element* value)
{
    _lengthNode = value;
}

// internal Fuse.Gestures.Internal.SwipeRegion get_Region() [instance] :1054
::g::Fuse::Gestures::Internal::SwipeRegion* SwipeGesture::Region()
{
    return _region;
}

// internal void SetActive(bool value, Uno.UX.IPropertyListener origin, [bool bypass]) [instance] :1086
void SwipeGesture::SetActive(bool value, uObject* origin, bool bypass)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "SetActive(bool,Uno.UX.IPropertyListener,[bool])");

    if ((value == _isActive) || (origin == this))
        return;

    _isActive = value;
    OnPropertyChanged1(SwipeGesture::_isActiveName(), origin);

    if (_swiper != NULL)
        uPtr(_swiper)->SetActivation(_region, value, bypass);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) [instance] :1080
void SwipeGesture::SetIsActive(bool value, uObject* origin)
{
    uStackFrame __("Fuse.Gestures.SwipeGesture", "SetIsActive(bool,Uno.UX.IPropertyListener)");
    SetActive(value, origin, false);
}

// public Fuse.Gestures.SwipeType get_Type() [instance] :866
int SwipeGesture::Type()
{
    return _type;
}

// public void set_Type(Fuse.Gestures.SwipeType value) [instance] :867
void SwipeGesture::Type(int value)
{
    _type = value;
}

// public generated SwipeGesture New() [static] :855
SwipeGesture* SwipeGesture::New2()
{
    SwipeGesture* obj1 = (SwipeGesture*)uNew(SwipeGesture_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/internal/$.uno
// -------------------------------------------------------------------------------------------------

// internal sealed class SwipeGestureHelper :623
// {
static void SwipeGestureHelper_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::SwipeGestureHelper, _lengthThreshold), 0,
        ::g::Fuse::Gestures::DegreeSpan_typeof()->Array(), offsetof(::g::Fuse::Gestures::SwipeGestureHelper, _spans), 0);
}

uType* SwipeGestureHelper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SwipeGestureHelper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.SwipeGestureHelper", options);
    type->fp_build_ = SwipeGestureHelper_build;
    return type;
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) :629
void SwipeGestureHelper__ctor__fn(SwipeGestureHelper* __this, float* lengthThreshold, uArray* spans)
{
    __this->ctor_(*lengthThreshold, spans);
}

// public bool IsWithinBounds(float2 vector) :635
void SwipeGestureHelper__IsWithinBounds_fn(SwipeGestureHelper* __this, ::g::Uno::Float2* vector, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*vector);
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) :629
void SwipeGestureHelper__New1_fn(float* lengthThreshold, uArray* spans, SwipeGestureHelper** __retval)
{
    *__retval = SwipeGestureHelper::New1(*lengthThreshold, spans);
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) [instance] :629
void SwipeGestureHelper::ctor_(float lengthThreshold, uArray* spans)
{
    _spans = spans;
    _lengthThreshold = lengthThreshold;
}

// public bool IsWithinBounds(float2 vector) [instance] :635
bool SwipeGestureHelper::IsWithinBounds(::g::Uno::Float2 vector)
{
    uStackFrame __("Fuse.Gestures.SwipeGestureHelper", "IsWithinBounds(float2)");
    float length = ::g::Uno::Vector::Length(vector);

    if (length < _lengthThreshold)
        return false;

    float angle = ::g::Uno::Math::RadiansToDegrees1(::g::Uno::Math::Atan22(vector.X, vector.Y));

    for (int i = 0; i < uPtr(_spans)->Length(); i++)
        if (uPtr(uPtr(_spans)->Strong< ::g::Fuse::Gestures::DegreeSpan*>(i))->IsWithinBounds(angle))
            return true;

    return false;
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) [static] :629
SwipeGestureHelper* SwipeGestureHelper::New1(float lengthThreshold, uArray* spans)
{
    SwipeGestureHelper* obj1 = (SwipeGestureHelper*)uNew(SwipeGestureHelper_typeof());
    obj1->ctor_(lengthThreshold, spans);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public enum SwipeType :821
uEnumType* SwipeType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipeType", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Simple", 0LL,
        "Active", 1LL,
        "Continuous", 2LL,
        "Auto", 3LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class SwipingAnimation :1129
// {
// static SwipingAnimation() :1129
static void SwipingAnimation__cctor_1_fn(uType* __type)
{
    SwipingAnimation::_progressName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"Progress"*/]);
}

static void SwipingAnimation_build(uType* type)
{
    ::STRINGS[15] = uString::Const("Progress");
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipingAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(SwipingAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipingAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipingAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(SwipingAnimation_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(SwipingAnimation_type, interface5));
    type->SetFields(28,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::SwipingAnimation, _region), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::SwipingAnimation, _Source), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Gestures::SwipingAnimation::_progressName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)SwipingAnimation__New2_fn, 0, true, type, 1, ::g::Fuse::Gestures::SwipeGesture_typeof()),
        new uFunction("get_Source", NULL, (void*)SwipingAnimation__get_Source_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0));
}

SwipingAnimation_type* SwipingAnimation_typeof()
{
    static uSStrong<SwipingAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 31;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(SwipingAnimation);
    options.TypeSize = sizeof(SwipingAnimation_type);
    type = (SwipingAnimation_type*)uClassType::New("Fuse.Gestures.SwipingAnimation", options);
    type->fp_build_ = SwipingAnimation_build;
    type->fp_cctor_ = SwipingAnimation__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))SwipingAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))SwipingAnimation__OnUnrooted_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))SwipingAnimation__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public SwipingAnimation(Fuse.Gestures.SwipeGesture source) :1137
void SwipingAnimation__ctor_4_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture* source)
{
    __this->ctor_4(source);
}

// public SwipingAnimation New(Fuse.Gestures.SwipeGesture source) :1137
void SwipingAnimation__New2_fn(::g::Fuse::Gestures::SwipeGesture* source, SwipingAnimation** __retval)
{
    *__retval = SwipingAnimation::New2(source);
}

// private void OnProgressChanged(double progress) :1163
void SwipingAnimation__OnProgressChanged1_fn(SwipingAnimation* __this, double* progress)
{
    __this->OnProgressChanged1(*progress);
}

// protected override sealed void OnRooted() :1142
void SwipingAnimation__OnRooted_fn(SwipingAnimation* __this)
{
    uStackFrame __("Fuse.Gestures.SwipingAnimation", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_region = uPtr(__this->Source())->Region();
    uPtr(__this->_region)->AddPropertyListener((uObject*)__this);
    __this->OnProgressChanged1(uPtr(uPtr(__this->Source())->Region())->Progress());
}

// protected override sealed void OnUnrooted() :1150
void SwipingAnimation__OnUnrooted_fn(SwipingAnimation* __this)
{
    uStackFrame __("Fuse.Gestures.SwipingAnimation", "OnUnrooted()");
    uPtr(__this->_region)->RemovePropertyListener((uObject*)__this);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() :1132
void SwipingAnimation__get_Source_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) :1132
void SwipingAnimation__set_Source_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Source(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject sender, Uno.UX.Selector prop) :1157
void SwipingAnimation__UnoUXIPropertyListenerOnPropertyChanged_fn(SwipingAnimation* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Gestures.SwipingAnimation", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((sender != __this->_region) || ::g::Uno::UX::Selector__op_Inequality(prop_, SwipingAnimation::_progressName()))
        return;

    __this->OnProgressChanged1(uPtr(__this->_region)->Progress());
}

::g::Uno::UX::Selector SwipingAnimation::_progressName_;

// public SwipingAnimation(Fuse.Gestures.SwipeGesture source) [instance] :1137
void SwipingAnimation::ctor_4(::g::Fuse::Gestures::SwipeGesture* source)
{
    ctor_3();
    Source(source);
}

// private void OnProgressChanged(double progress) [instance] :1163
void SwipingAnimation::OnProgressChanged1(double progress)
{
    uStackFrame __("Fuse.Gestures.SwipingAnimation", "OnProgressChanged(double)");
    double diff = progress - uPtr(uPtr(Source())->Region())->StableProgress();
    Seek(progress, (diff >= 0.0) ? 0 : 1);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() [instance] :1132
::g::Fuse::Gestures::SwipeGesture* SwipingAnimation::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) [instance] :1132
void SwipingAnimation::Source(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Source = value;
}

// public SwipingAnimation New(Fuse.Gestures.SwipeGesture source) [static] :1137
SwipingAnimation* SwipingAnimation::New2(::g::Fuse::Gestures::SwipeGesture* source)
{
    SwipingAnimation* obj1 = (SwipingAnimation*)uNew(SwipingAnimation_typeof());
    obj1->ctor_4(source);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class Tapped :1394
// {
static void Tapped_build(uType* type)
{
    ::TYPES[33] = ::g::Fuse::Visual_typeof()->MakeMethod(3/*FirstChild<Fuse.Gestures.Tapped>*/, type, NULL);
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[13] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[34] = ::g::Fuse::Gestures::TappedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(29,
        ::TYPES[34/*Fuse.Gestures.TappedHandler*/], offsetof(::g::Fuse::Gestures::Tapped, Handler1), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("AddHandler", NULL, (void*)Tapped__AddHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::TYPES[34/*Fuse.Gestures.TappedHandler*/]),
        new uFunction("add_Handler", NULL, (void*)Tapped__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[34/*Fuse.Gestures.TappedHandler*/]),
        new uFunction("remove_Handler", NULL, (void*)Tapped__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::TYPES[34/*Fuse.Gestures.TappedHandler*/]),
        new uFunction(".ctor", NULL, (void*)Tapped__New2_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)Tapped__New3_fn, 0, true, type, 1, ::TYPES[34/*Fuse.Gestures.TappedHandler*/]),
        new uFunction("RemoveHandler", NULL, (void*)Tapped__RemoveHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::TYPES[34/*Fuse.Gestures.TappedHandler*/]));
}

::g::Fuse::Triggers::Trigger_type* Tapped_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Tapped);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Tapped", options);
    type->fp_build_ = Tapped_build;
    type->fp_ctor_ = (void*)Tapped__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Tapped__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Tapped__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Tapped() :1420
void Tapped__ctor_5_fn(Tapped* __this)
{
    __this->ctor_5();
}

// public Tapped(Fuse.Gestures.TappedHandler handler) :1422
void Tapped__ctor_6_fn(Tapped* __this, uDelegate* handler)
{
    __this->ctor_6(handler);
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Gestures.TappedHandler handler) :1397
void Tapped__AddHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Tapped::AddHandler(visual, handler);
}

// public generated void add_Handler(Fuse.Gestures.TappedHandler value) :1418
void Tapped__add_Handler_fn(Tapped* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.TappedHandler value) :1418
void Tapped__remove_Handler_fn(Tapped* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public Tapped New() :1420
void Tapped__New2_fn(Tapped** __retval)
{
    *__retval = Tapped::New2();
}

// public Tapped New(Fuse.Gestures.TappedHandler handler) :1422
void Tapped__New3_fn(uDelegate* handler, Tapped** __retval)
{
    *__retval = Tapped::New3(handler);
}

// protected override sealed void OnRooted() :1427
void Tapped__OnRooted_fn(Tapped* __this)
{
    uStackFrame __("Fuse.Gestures.Tapped", "OnRooted()");
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this);
    uPtr(__this->Clicker)->add_TappedEvent(uDelegate::New(::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/], (void*)Tapped__OnTapped_fn, __this));
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) :1439
void Tapped__OnTapped_fn(Tapped* __this, ::g::Fuse::Input::PointerEventArgs* args, int* tapCount)
{
    __this->OnTapped(args, *tapCount);
}

// protected override sealed void OnUnrooted() :1433
void Tapped__OnUnrooted_fn(Tapped* __this)
{
    uStackFrame __("Fuse.Gestures.Tapped", "OnUnrooted()");
    uPtr(__this->Clicker)->remove_TappedEvent(uDelegate::New(::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/], (void*)Tapped__OnTapped_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this);
}

// public static void RemoveHandler(Fuse.Visual visual, Fuse.Gestures.TappedHandler handler) :1409
void Tapped__RemoveHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Tapped::RemoveHandler(visual, handler);
}

// public Tapped() [instance] :1420
void Tapped::ctor_5()
{
    ctor_4();
}

// public Tapped(Fuse.Gestures.TappedHandler handler) [instance] :1422
void Tapped::ctor_6(uDelegate* handler)
{
    uStackFrame __("Fuse.Gestures.Tapped", ".ctor(Fuse.Gestures.TappedHandler)");
    ctor_4();
    add_Handler(handler);
}

// public generated void add_Handler(Fuse.Gestures.TappedHandler value) [instance] :1418
void Tapped::add_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Tapped", "add_Handler(Fuse.Gestures.TappedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[34/*Fuse.Gestures.TappedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.TappedHandler value) [instance] :1418
void Tapped::remove_Handler(uDelegate* value)
{
    uStackFrame __("Fuse.Gestures.Tapped", "remove_Handler(Fuse.Gestures.TappedHandler)");
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[34/*Fuse.Gestures.TappedHandler*/]);
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) [instance] :1439
void Tapped::OnTapped(::g::Fuse::Input::PointerEventArgs* args, int tapCount)
{
    uStackFrame __("Fuse.Gestures.Tapped", "OnTapped(Fuse.Input.PointerEventArgs,int)");
    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::TappedArgs*)::g::Fuse::Gestures::TappedArgs::New3(args, Parent()));
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Gestures.TappedHandler handler) [static] :1397
void Tapped::AddHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Gestures.Tapped", "AddHandler(Fuse.Visual,Fuse.Gestures.TappedHandler)");
    Tapped* t = (Tapped*)uPtr(visual)->FirstChild(::TYPES[33/*Fuse.Visual.FirstChild<Fuse.Gestures.Tapped>*/]);

    if (t == NULL)
    {
        t = Tapped::New2();
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(visual)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), t);
    }

    uPtr(t)->add_Handler(handler);
}

// public Tapped New() [static] :1420
Tapped* Tapped::New2()
{
    Tapped* obj1 = (Tapped*)uNew(Tapped_typeof());
    obj1->ctor_5();
    return obj1;
}

// public Tapped New(Fuse.Gestures.TappedHandler handler) [static] :1422
Tapped* Tapped::New3(uDelegate* handler)
{
    Tapped* obj2 = (Tapped*)uNew(Tapped_typeof());
    obj2->ctor_6(handler);
    return obj2;
}

// public static void RemoveHandler(Fuse.Visual visual, Fuse.Gestures.TappedHandler handler) [static] :1409
void Tapped::RemoveHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Gestures.Tapped", "RemoveHandler(Fuse.Visual,Fuse.Gestures.TappedHandler)");
    Tapped* t = (Tapped*)uPtr(visual)->FirstChild(::TYPES[33/*Fuse.Visual.FirstChild<Fuse.Gestures.Tapped>*/]);

    if (t != NULL)
        uPtr(t)->remove_Handler(handler);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class TappedArgs :1368
// {
static void TappedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TappedArgs__New3_fn, 0, true, type, 2, ::g::Fuse::Input::PointerEventArgs_typeof(), ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* TappedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::CustomPointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TappedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Gestures.TappedArgs", options);
    type->fp_build_ = TappedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public TappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :1370
void TappedArgs__ctor_4_fn(TappedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    __this->ctor_4(args, visual);
}

// public TappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :1370
void TappedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual, TappedArgs** __retval)
{
    *__retval = TappedArgs::New3(args, visual);
}

// public TappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [instance] :1370
void TappedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Gestures.TappedArgs", ".ctor(Fuse.Input.PointerEventArgs,Fuse.Visual)");
    ctor_3(args, visual);
}

// public TappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [static] :1370
TappedArgs* TappedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    TappedArgs* obj1 = (TappedArgs*)uNew(TappedArgs_typeof());
    obj1->ctor_4(args, visual);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public delegate void TappedHandler(object sender, Fuse.Gestures.TappedArgs args) :1376
uDelegateType* TappedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.TappedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::TappedArgs_typeof());
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class ToggleSwipeActive :1216
// {
static void ToggleSwipeActive_build(uType* type)
{
    type->SetFields(8,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::ToggleSwipeActive, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)ToggleSwipeActive__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)ToggleSwipeActive__get_Target_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)ToggleSwipeActive__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipeGesture_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSwipeActive_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(ToggleSwipeActive);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.ToggleSwipeActive", options);
    type->fp_build_ = ToggleSwipeActive_build;
    type->fp_ctor_ = (void*)ToggleSwipeActive__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ToggleSwipeActive__Perform_fn;
    return type;
}

// public generated ToggleSwipeActive() :1216
void ToggleSwipeActive__ctor_2_fn(ToggleSwipeActive* __this)
{
    __this->ctor_2();
}

// public generated ToggleSwipeActive New() :1216
void ToggleSwipeActive__New2_fn(ToggleSwipeActive** __retval)
{
    *__retval = ToggleSwipeActive::New2();
}

// protected override sealed void Perform(Fuse.Node target) :1221
void ToggleSwipeActive__Perform_fn(ToggleSwipeActive* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Gestures.ToggleSwipeActive", "Perform(Fuse.Node)");

    if (__this->Target() != NULL)
        uPtr(__this->Target())->SetActive(!uPtr(__this->Target())->IsActive(), NULL, false);
}

// public generated Fuse.Gestures.SwipeGesture get_Target() :1219
void ToggleSwipeActive__get_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) :1219
void ToggleSwipeActive__set_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Target(value);
}

// public generated ToggleSwipeActive() [instance] :1216
void ToggleSwipeActive::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Gestures.SwipeGesture get_Target() [instance] :1219
::g::Fuse::Gestures::SwipeGesture* ToggleSwipeActive::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) [instance] :1219
void ToggleSwipeActive::Target(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Target = value;
}

// public generated ToggleSwipeActive New() [static] :1216
ToggleSwipeActive* ToggleSwipeActive::New2()
{
    ToggleSwipeActive* obj1 = (ToggleSwipeActive*)uNew(ToggleSwipeActive_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public abstract class TransformGesture :1557
// {
static void TransformGesture_build(uType* type)
{
    ::TYPES[28] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[35] = ::g::Fuse::Gestures::Internal::TwoFingerEventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(TransformGesture_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(TransformGesture_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(TransformGesture_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(TransformGesture_type, interface3));
    type->SetFields(13,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture, _hasUpdate), 0,
        ::g::Fuse::Gestures::Internal::TwoFinger_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture, Impl), 0,
        ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture, Region), 0,
        ::g::Fuse::Elements::InteractiveTransform_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture, _Target), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Target", NULL, (void*)TransformGesture__get_Target_fn, 0, false, ::g::Fuse::Elements::InteractiveTransform_typeof(), 0));
}

TransformGesture_type* TransformGesture_typeof()
{
    static uSStrong<TransformGesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 17;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(TransformGesture);
    options.TypeSize = sizeof(TransformGesture_type);
    type = (TransformGesture_type*)uClassType::New("Fuse.Gestures.TransformGesture", options);
    type->fp_build_ = TransformGesture_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))TransformGesture__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))TransformGesture__OnUnrooted_fn;
    type->fp_OnUpdate = TransformGesture__OnUpdate_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal TransformGesture(Fuse.Elements.InteractiveTransform target) :1567
void TransformGesture__ctor_3_fn(TransformGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target)
{
    __this->ctor_3(target);
}

// protected void CheckNeedUpdate() :1602
void TransformGesture__CheckNeedUpdate_fn(TransformGesture* __this)
{
    __this->CheckNeedUpdate();
}

// protected override void OnRooted() :1573
void TransformGesture__OnRooted_fn(TransformGesture* __this)
{
    uStackFrame __("Fuse.Gestures.TransformGesture", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->Impl = ::g::Fuse::Gestures::Internal::TwoFinger::Attach(__this->Parent());
    uPtr(__this->Impl)->add_Started(uDelegate::New(::TYPES[35/*Fuse.Gestures.Internal.TwoFingerEventHandler*/], __this, offsetof(TransformGesture_type, fp_OnStarted)));
    uPtr(__this->Impl)->add_Ended(uDelegate::New(::TYPES[35/*Fuse.Gestures.Internal.TwoFingerEventHandler*/], __this, offsetof(TransformGesture_type, fp_OnEnded)));
}

// protected override void OnUnrooted() :1581
void TransformGesture__OnUnrooted_fn(TransformGesture* __this)
{
    uStackFrame __("Fuse.Gestures.TransformGesture", "OnUnrooted()");
    uPtr(__this->Impl)->remove_Started(uDelegate::New(::TYPES[35/*Fuse.Gestures.Internal.TwoFingerEventHandler*/], __this, offsetof(TransformGesture_type, fp_OnStarted)));
    uPtr(__this->Impl)->remove_Ended(uDelegate::New(::TYPES[35/*Fuse.Gestures.Internal.TwoFingerEventHandler*/], __this, offsetof(TransformGesture_type, fp_OnEnded)));
    uPtr(__this->Impl)->Detach();
    __this->Impl = NULL;
    __this->CheckNeedUpdate();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// protected virtual void OnUpdate() :1615
void TransformGesture__OnUpdate_fn(TransformGesture* __this)
{
}

// public generated Fuse.Elements.InteractiveTransform get_Target() :1561
void TransformGesture__get_Target_fn(TransformGesture* __this, ::g::Fuse::Elements::InteractiveTransform** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Fuse.Elements.InteractiveTransform value) :1562
void TransformGesture__set_Target_fn(TransformGesture* __this, ::g::Fuse::Elements::InteractiveTransform* value)
{
    __this->Target(value);
}

// private void Update() :1594
void TransformGesture__Update_fn(TransformGesture* __this)
{
    __this->Update();
}

// internal TransformGesture(Fuse.Elements.InteractiveTransform target) [instance] :1567
void TransformGesture::ctor_3(::g::Fuse::Elements::InteractiveTransform* target)
{
    uStackFrame __("Fuse.Gestures.TransformGesture", ".ctor(Fuse.Elements.InteractiveTransform)");
    Region = (uObject*)::g::Fuse::Motion::Simulation::BasicBoundedRegion2D::CreatePoints();
    ctor_2();
    Target(target);
}

// protected void CheckNeedUpdate() [instance] :1602
void TransformGesture::CheckNeedUpdate()
{
    uStackFrame __("Fuse.Gestures.TransformGesture", "CheckNeedUpdate()");
    bool need = IsRootingCompleted() && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(Region), ::TYPES[28/*Fuse.Motion.Simulation.Simulation*/]));

    if (need == _hasUpdate)
        return;

    _hasUpdate = need;

    if (need)
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)TransformGesture__Update_fn, this), 0);
    else
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)TransformGesture__Update_fn, this), 0);
}

// public generated Fuse.Elements.InteractiveTransform get_Target() [instance] :1561
::g::Fuse::Elements::InteractiveTransform* TransformGesture::Target()
{
    return _Target;
}

// private generated void set_Target(Fuse.Elements.InteractiveTransform value) [instance] :1562
void TransformGesture::Target(::g::Fuse::Elements::InteractiveTransform* value)
{
    _Target = value;
}

// private void Update() [instance] :1594
void TransformGesture::Update()
{
    uStackFrame __("Fuse.Gestures.TransformGesture", "Update()");
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(Region), ::TYPES[28/*Fuse.Motion.Simulation.Simulation*/]), ::g::Fuse::Time::FrameInterval());
    OnUpdate();
    CheckNeedUpdate();
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/internal/$.uno
// -------------------------------------------------------------------------------------------------

// public abstract class WhileClickerTrigger :30
// {
static void WhileClickerTrigger_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(29,
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(::g::Fuse::Gestures::WhileClickerTrigger, Clicker), 0);
}

::g::Fuse::Triggers::Trigger_type* WhileClickerTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileClickerTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.WhileClickerTrigger", options);
    type->fp_build_ = WhileClickerTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileClickerTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileClickerTrigger__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated WhileClickerTrigger() :30
void WhileClickerTrigger__ctor_5_fn(WhileClickerTrigger* __this)
{
    __this->ctor_5();
}

// protected override sealed void OnRooted() :33
void WhileClickerTrigger__OnRooted_fn(WhileClickerTrigger* __this)
{
    uStackFrame __("Fuse.Gestures.WhileClickerTrigger", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->Clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->Parent());
}

// protected override sealed void OnUnrooted() :39
void WhileClickerTrigger__OnUnrooted_fn(WhileClickerTrigger* __this)
{
    uStackFrame __("Fuse.Gestures.WhileClickerTrigger", "OnUnrooted()");
    uPtr(__this->Clicker)->Detach();
    __this->Clicker = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// protected generated WhileClickerTrigger() [instance] :30
void WhileClickerTrigger::ctor_5()
{
    ctor_4();
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class WhileHovering :1749
// {
static void WhileHovering_build(uType* type)
{
    ::TYPES[36] = ::g::Fuse::Input::PointerEnteredHandler_typeof();
    ::TYPES[37] = ::g::Fuse::Input::PointerLeftHandler_typeof();
    ::TYPES[38] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileHovering__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* WhileHovering_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 28;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileHovering);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.WhileHovering", options);
    type->fp_build_ = WhileHovering_build;
    type->fp_ctor_ = (void*)WhileHovering__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileHovering__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileHovering__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileHovering() :1749
void WhileHovering__ctor_4_fn(WhileHovering* __this)
{
    __this->ctor_4();
}

// public generated WhileHovering New() :1749
void WhileHovering__New2_fn(WhileHovering** __retval)
{
    *__retval = WhileHovering::New2();
}

// private void OnIsContextEnabledChanged(object s, object a) :1778
void WhileHovering__OnIsContextEnabledChanged_fn(WhileHovering* __this, uObject* s, uObject* a)
{
    __this->OnIsContextEnabledChanged(s, a);
}

// private void OnPointerEntered(object sender, object args) :1767
void WhileHovering__OnPointerEntered_fn(WhileHovering* __this, uObject* sender, uObject* args)
{
    __this->OnPointerEntered(sender, args);
}

// private void OnPointerLeft(object sender, object args) :1772
void WhileHovering__OnPointerLeft_fn(WhileHovering* __this, uObject* sender, uObject* args)
{
    __this->OnPointerLeft(sender, args);
}

// protected override sealed void OnRooted() :1751
void WhileHovering__OnRooted_fn(WhileHovering* __this)
{
    uStackFrame __("Fuse.Gestures.WhileHovering", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->Parent(), uDelegate::New(::TYPES[36/*Fuse.Input.PointerEnteredHandler*/], (void*)WhileHovering__OnPointerEntered_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->Parent(), uDelegate::New(::TYPES[37/*Fuse.Input.PointerLeftHandler*/], (void*)WhileHovering__OnPointerLeft_fn, __this));
    uPtr(__this->Parent())->add_IsContextEnabledChanged(uDelegate::New(::TYPES[38/*Uno.EventHandler*/], (void*)WhileHovering__OnIsContextEnabledChanged_fn, __this));
}

// protected override sealed void OnUnrooted() :1759
void WhileHovering__OnUnrooted_fn(WhileHovering* __this)
{
    uStackFrame __("Fuse.Gestures.WhileHovering", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->Parent(), uDelegate::New(::TYPES[36/*Fuse.Input.PointerEnteredHandler*/], (void*)WhileHovering__OnPointerEntered_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->Parent(), uDelegate::New(::TYPES[37/*Fuse.Input.PointerLeftHandler*/], (void*)WhileHovering__OnPointerLeft_fn, __this));
    uPtr(__this->Parent())->remove_IsContextEnabledChanged(uDelegate::New(::TYPES[38/*Uno.EventHandler*/], (void*)WhileHovering__OnIsContextEnabledChanged_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated WhileHovering() [instance] :1749
void WhileHovering::ctor_4()
{
    ctor_3();
}

// private void OnIsContextEnabledChanged(object s, object a) [instance] :1778
void WhileHovering::OnIsContextEnabledChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.WhileHovering", "OnIsContextEnabledChanged(object,object)");

    if (!uPtr(Parent())->IsContextEnabled())
        Deactivate();
}

// private void OnPointerEntered(object sender, object args) [instance] :1767
void WhileHovering::OnPointerEntered(uObject* sender, uObject* args)
{
    Activate(NULL);
}

// private void OnPointerLeft(object sender, object args) [instance] :1772
void WhileHovering::OnPointerLeft(uObject* sender, uObject* args)
{
    Deactivate();
}

// public generated WhileHovering New() [static] :1749
WhileHovering* WhileHovering::New2()
{
    WhileHovering* obj1 = (WhileHovering*)uNew(WhileHovering_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class WhilePressed :550
// {
static void WhilePressed_build(uType* type)
{
    ::TYPES[39] = ::g::Fuse::Input::PointerPressedArgs_typeof();
    ::TYPES[13] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[36] = ::g::Fuse::Input::PointerEnteredHandler_typeof();
    ::TYPES[37] = ::g::Fuse::Input::PointerLeftHandler_typeof();
    ::TYPES[4] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[6] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[38] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(29,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, _inside), 0,
        ::g::Uno::Platform::PointerType_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, _pointerType), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, _pressedPosition), 0,
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, Clicker), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, _Capture), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Capture", NULL, (void*)WhilePressed__get_Capture_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Capture", NULL, (void*)WhilePressed__set_Capture_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)WhilePressed__New2_fn, 0, true, type, 0),
        new uFunction("get_PointerType", NULL, (void*)WhilePressed__get_PointerType_fn, 0, false, ::g::Uno::Platform::PointerType_typeof(), 0),
        new uFunction("set_PointerType", NULL, (void*)WhilePressed__set_PointerType_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Platform::PointerType_typeof()),
        new uFunction("get_PressedPosition", NULL, (void*)WhilePressed__get_PressedPosition_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_PressedPosition", NULL, (void*)WhilePressed__set_PressedPosition_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
}

::g::Fuse::Triggers::Trigger_type* WhilePressed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 34;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhilePressed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.WhilePressed", options);
    type->fp_build_ = WhilePressed_build;
    type->fp_ctor_ = (void*)WhilePressed__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhilePressed__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhilePressed__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhilePressed() :550
void WhilePressed__ctor_5_fn(WhilePressed* __this)
{
    __this->ctor_5();
}

// public generated bool get_Capture() :552
void WhilePressed__get_Capture_fn(WhilePressed* __this, bool* __retval)
{
    *__retval = __this->Capture();
}

// public generated void set_Capture(bool value) :552
void WhilePressed__set_Capture_fn(WhilePressed* __this, bool* value)
{
    __this->Capture(*value);
}

// private void CheckStatus(object s, object a) :656
void WhilePressed__CheckStatus_fn(WhilePressed* __this, uObject* s, uObject* a)
{
    __this->CheckStatus(s, a);
}

// public generated WhilePressed New() :550
void WhilePressed__New2_fn(WhilePressed** __retval)
{
    *__retval = WhilePressed::New2();
}

// private void OnClickerPressing(Fuse.Input.PointerEventArgs args, int count) :635
void WhilePressed__OnClickerPressing_fn(WhilePressed* __this, ::g::Fuse::Input::PointerEventArgs* args, int* count)
{
    __this->OnClickerPressing(args, *count);
}

// private void OnPointerEntered(object sender, object args) :644
void WhilePressed__OnPointerEntered_fn(WhilePressed* __this, uObject* sender, uObject* args)
{
    __this->OnPointerEntered(sender, args);
}

// private void OnPointerLeft(object sender, object args) :650
void WhilePressed__OnPointerLeft_fn(WhilePressed* __this, uObject* sender, uObject* args)
{
    __this->OnPointerLeft(sender, args);
}

// protected override sealed void OnRooted() :593
void WhilePressed__OnRooted_fn(WhilePressed* __this)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (__this->Capture())
    {
        __this->Clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->Parent());
        uPtr(__this->Clicker)->add_PressingEvent(uDelegate::New(::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/], (void*)WhilePressed__OnClickerPressing_fn, __this));
    }
    else
    {
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->Parent(), uDelegate::New(::TYPES[36/*Fuse.Input.PointerEnteredHandler*/], (void*)WhilePressed__OnPointerEntered_fn, __this));
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->Parent(), uDelegate::New(::TYPES[37/*Fuse.Input.PointerLeftHandler*/], (void*)WhilePressed__OnPointerLeft_fn, __this));
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[4/*Fuse.Input.PointerPressedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        ::g::Fuse::VisualEvent__AddGlobalHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), uDelegate::New(::TYPES[6/*Fuse.Input.PointerReleasedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        uPtr(__this->Parent())->add_IsContextEnabledChanged(uDelegate::New(::TYPES[38/*Uno.EventHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        __this->_inside = false;
    }

    __this->SetActive(false);
}

// protected override sealed void OnUnrooted() :615
void WhilePressed__OnUnrooted_fn(WhilePressed* __this)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "OnUnrooted()");

    if (__this->Capture())
    {
        uPtr(__this->Clicker)->remove_PressingEvent(uDelegate::New(::TYPES[13/*Fuse.Gestures.ClickerEventHandler*/], (void*)WhilePressed__OnClickerPressing_fn, __this));
        uPtr(__this->Clicker)->Detach();
        __this->Clicker = NULL;
    }
    else
    {
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->Parent(), uDelegate::New(::TYPES[36/*Fuse.Input.PointerEnteredHandler*/], (void*)WhilePressed__OnPointerEntered_fn, __this));
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->Parent(), uDelegate::New(::TYPES[37/*Fuse.Input.PointerLeftHandler*/], (void*)WhilePressed__OnPointerLeft_fn, __this));
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[4/*Fuse.Input.PointerPressedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        ::g::Fuse::VisualEvent__RemoveGlobalHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), uDelegate::New(::TYPES[6/*Fuse.Input.PointerReleasedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        uPtr(__this->Parent())->remove_IsContextEnabledChanged(uDelegate::New(::TYPES[38/*Uno.EventHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Uno.Platform.PointerType get_PointerType() :589
void WhilePressed__get_PointerType_fn(WhilePressed* __this, int* __retval)
{
    *__retval = __this->PointerType();
}

// public void set_PointerType(Uno.Platform.PointerType value) :590
void WhilePressed__set_PointerType_fn(WhilePressed* __this, int* value)
{
    __this->PointerType(*value);
}

// public float2 get_PressedPosition() :578
void WhilePressed__get_PressedPosition_fn(WhilePressed* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PressedPosition();
}

// public void set_PressedPosition(float2 value) :581
void WhilePressed__set_PressedPosition_fn(WhilePressed* __this, ::g::Uno::Float2* value)
{
    __this->PressedPosition(*value);
}

// public generated WhilePressed() [instance] :550
void WhilePressed::ctor_5()
{
    ctor_4();
}

// public generated bool get_Capture() [instance] :552
bool WhilePressed::Capture()
{
    return _Capture;
}

// public generated void set_Capture(bool value) [instance] :552
void WhilePressed::Capture(bool value)
{
    _Capture = value;
}

// private void CheckStatus(object s, object a) [instance] :656
void WhilePressed::CheckStatus(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "CheckStatus(object,object)");
    ::g::Fuse::Input::PointerPressedArgs* ppa = uAs< ::g::Fuse::Input::PointerPressedArgs*>(a, ::TYPES[39/*Fuse.Input.PointerPressedArgs*/]);

    if (ppa != NULL)
        _pressedPosition = uPtr(Parent())->WindowToLocal(uPtr(ppa)->WindowPoint());

    SetActive((_inside && uPtr(Parent())->IsContextEnabled()) && ::g::Fuse::Input::Pointer::IsPressed());
}

// private void OnClickerPressing(Fuse.Input.PointerEventArgs args, int count) [instance] :635
void WhilePressed::OnClickerPressing(::g::Fuse::Input::PointerEventArgs* args, int count)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "OnClickerPressing(Fuse.Input.PointerEventArgs,int)");
    bool q = (PointerType() == 0) || (PointerType() == uPtr(args)->PointerType());
    bool on = count > 0;

    if (q)
        SetActive(on);
}

// private void OnPointerEntered(object sender, object args) [instance] :644
void WhilePressed::OnPointerEntered(uObject* sender, uObject* args)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "OnPointerEntered(object,object)");
    _inside = true;
    CheckStatus(sender, args);
}

// private void OnPointerLeft(object sender, object args) [instance] :650
void WhilePressed::OnPointerLeft(uObject* sender, uObject* args)
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "OnPointerLeft(object,object)");
    _inside = false;
    CheckStatus(sender, args);
}

// public Uno.Platform.PointerType get_PointerType() [instance] :589
int WhilePressed::PointerType()
{
    return _pointerType;
}

// public void set_PointerType(Uno.Platform.PointerType value) [instance] :590
void WhilePressed::PointerType(int value)
{
    _pointerType = value;
}

// public float2 get_PressedPosition() [instance] :578
::g::Uno::Float2 WhilePressed::PressedPosition()
{
    uStackFrame __("Fuse.Gestures.WhilePressed", "get_PressedPosition()");
    return (Clicker != NULL) ? uPtr(Clicker)->PressedPosition() : _pressedPosition;
}

// public void set_PressedPosition(float2 value) [instance] :581
void WhilePressed::PressedPosition(::g::Uno::Float2 value)
{
}

// public generated WhilePressed New() [static] :550
WhilePressed* WhilePressed::New2()
{
    WhilePressed* obj1 = (WhilePressed*)uNew(WhilePressed_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class WhileSwipeActive :1242
// {
static void WhileSwipeActive_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileSwipeActive_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileSwipeActive_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileSwipeActive_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileSwipeActive_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(WhileSwipeActive_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(WhileSwipeActive_type, interface5));
    type->SetFields(29,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::WhileSwipeActive, _Source), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhileSwipeActive__New2_fn, 0, true, type, 1, ::g::Fuse::Gestures::SwipeGesture_typeof()),
        new uFunction("get_Source", NULL, (void*)WhileSwipeActive__get_Source_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0));
}

WhileSwipeActive_type* WhileSwipeActive_typeof()
{
    static uSStrong<WhileSwipeActive_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(WhileSwipeActive);
    options.TypeSize = sizeof(WhileSwipeActive_type);
    type = (WhileSwipeActive_type*)uClassType::New("Fuse.Gestures.WhileSwipeActive", options);
    type->fp_build_ = WhileSwipeActive_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileSwipeActive__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileSwipeActive__OnUnrooted_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))WhileSwipeActive__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public WhileSwipeActive(Fuse.Gestures.SwipeGesture source) :1248
void WhileSwipeActive__ctor_5_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* source)
{
    __this->ctor_5(source);
}

// public WhileSwipeActive New(Fuse.Gestures.SwipeGesture source) :1248
void WhileSwipeActive__New2_fn(::g::Fuse::Gestures::SwipeGesture* source, WhileSwipeActive** __retval)
{
    *__retval = WhileSwipeActive::New2(source);
}

// protected override sealed void OnRooted() :1253
void WhileSwipeActive__OnRooted_fn(WhileSwipeActive* __this)
{
    uStackFrame __("Fuse.Gestures.WhileSwipeActive", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    uPtr(__this->Source())->AddPropertyListener((uObject*)__this);
    __this->SetActive(uPtr(__this->Source())->IsActive());
}

// protected override sealed void OnUnrooted() :1260
void WhileSwipeActive__OnUnrooted_fn(WhileSwipeActive* __this)
{
    uStackFrame __("Fuse.Gestures.WhileSwipeActive", "OnUnrooted()");
    uPtr(__this->Source())->RemovePropertyListener((uObject*)__this);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() :1245
void WhileSwipeActive__get_Source_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) :1245
void WhileSwipeActive__set_Source_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Source(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :1266
void WhileSwipeActive__UnoUXIPropertyListenerOnPropertyChanged_fn(WhileSwipeActive* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Gestures.WhileSwipeActive", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    __this->SetActive(uPtr(__this->Source())->IsActive());
}

// public WhileSwipeActive(Fuse.Gestures.SwipeGesture source) [instance] :1248
void WhileSwipeActive::ctor_5(::g::Fuse::Gestures::SwipeGesture* source)
{
    ctor_4();
    Source(source);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() [instance] :1245
::g::Fuse::Gestures::SwipeGesture* WhileSwipeActive::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) [instance] :1245
void WhileSwipeActive::Source(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Source = value;
}

// public WhileSwipeActive New(Fuse.Gestures.SwipeGesture source) [static] :1248
WhileSwipeActive* WhileSwipeActive::New2(::g::Fuse::Gestures::SwipeGesture* source)
{
    WhileSwipeActive* obj1 = (WhileSwipeActive*)uNew(WhileSwipeActive_typeof());
    obj1->ctor_5(source);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class ZoomGesture :1822
// {
static void ZoomGesture_build(uType* type)
{
    ::TYPES[22] = ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof();
    ::TYPES[40] = ::g::Fuse::Gestures::Internal::TwoFingerZoomHandler_typeof();
    ::TYPES[24] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Gestures::TransformGesture_type, interface3));
    type->SetFields(17,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::ZoomGesture, _maximum), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::ZoomGesture, _minimum), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::ZoomGesture, _prevZoom), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::ZoomGesture, _startZoom), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Maximum", NULL, (void*)ZoomGesture__get_Maximum_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Maximum", NULL, (void*)ZoomGesture__set_Maximum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Minimum", NULL, (void*)ZoomGesture__get_Minimum_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Minimum", NULL, (void*)ZoomGesture__set_Minimum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)ZoomGesture__New2_fn, 0, true, type, 1, ::g::Fuse::Elements::InteractiveTransform_typeof()));
}

::g::Fuse::Gestures::TransformGesture_type* ZoomGesture_typeof()
{
    static uSStrong< ::g::Fuse::Gestures::TransformGesture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::TransformGesture_typeof();
    options.FieldCount = 21;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(ZoomGesture);
    options.TypeSize = sizeof(::g::Fuse::Gestures::TransformGesture_type);
    type = (::g::Fuse::Gestures::TransformGesture_type*)uClassType::New("Fuse.Gestures.ZoomGesture", options);
    type->fp_build_ = ZoomGesture_build;
    type->fp_OnEnded = (void(*)(::g::Fuse::Gestures::TransformGesture*))ZoomGesture__OnEnded_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))ZoomGesture__OnRooted_fn;
    type->fp_OnStarted = (void(*)(::g::Fuse::Gestures::TransformGesture*))ZoomGesture__OnStarted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))ZoomGesture__OnUnrooted_fn;
    type->fp_OnUpdate = (void(*)(::g::Fuse::Gestures::TransformGesture*))ZoomGesture__OnUpdate_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public ZoomGesture(Fuse.Elements.InteractiveTransform target) :1825
void ZoomGesture__ctor_4_fn(ZoomGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target)
{
    __this->ctor_4(target);
}

// public float get_Maximum() :1883
void ZoomGesture__get_Maximum_fn(ZoomGesture* __this, float* __retval)
{
    *__retval = __this->Maximum();
}

// public void set_Maximum(float value) :1884
void ZoomGesture__set_Maximum_fn(ZoomGesture* __this, float* value)
{
    __this->Maximum(*value);
}

// public float get_Minimum() :1893
void ZoomGesture__get_Minimum_fn(ZoomGesture* __this, float* __retval)
{
    *__retval = __this->Minimum();
}

// public void set_Minimum(float value) :1894
void ZoomGesture__set_Minimum_fn(ZoomGesture* __this, float* value)
{
    __this->Minimum(*value);
}

// public ZoomGesture New(Fuse.Elements.InteractiveTransform target) :1825
void ZoomGesture__New2_fn(::g::Fuse::Elements::InteractiveTransform* target, ZoomGesture** __retval)
{
    *__retval = ZoomGesture::New2(target);
}

// protected override sealed void OnEnded() :1856
void ZoomGesture__OnEnded_fn(ZoomGesture* __this)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnEnded()");
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(__this->Region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New1(0.0f));
    __this->CheckNeedUpdate();
}

// protected override sealed void OnRooted() :1831
void ZoomGesture__OnRooted_fn(ZoomGesture* __this)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnRooted()");
    ::g::Fuse::Gestures::TransformGesture__OnRooted_fn(__this);
    uPtr(__this->Impl)->add_Zoomed(uDelegate::New(::TYPES[40/*Fuse.Gestures.Internal.TwoFingerZoomHandler*/], (void*)ZoomGesture__OnZoomed_fn, __this));
}

// protected override sealed void OnStarted() :1844
void ZoomGesture__OnStarted_fn(ZoomGesture* __this)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnStarted()");
    __this->_startZoom = uPtr(__this->Target())->ZoomFactor();
    __this->_prevZoom = ::g::Uno::Math::Log1(__this->_startZoom);
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->Region), ::TYPES[24/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(::g::Uno::Float2__New2(__this->_prevZoom, 0.0f)));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MinPosition(uInterface(uPtr(__this->Region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(::g::Uno::Math::Log1(__this->Minimum()), 0.0f));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MaxPosition(uInterface(uPtr(__this->Region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(::g::Uno::Math::Log1(__this->Maximum()), 0.0f));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StartUser(uInterface(uPtr(__this->Region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/]));
    __this->CheckNeedUpdate();
}

// protected override sealed void OnUnrooted() :1837
void ZoomGesture__OnUnrooted_fn(ZoomGesture* __this)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnUnrooted()");
    uPtr(__this->Impl)->remove_Zoomed(uDelegate::New(::TYPES[40/*Fuse.Gestures.Internal.TwoFingerZoomHandler*/], (void*)ZoomGesture__OnZoomed_fn, __this));
    ::g::Fuse::Gestures::TransformGesture__OnUnrooted_fn(__this);
}

// protected override sealed void OnUpdate() :1872
void ZoomGesture__OnUpdate_fn(ZoomGesture* __this)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnUpdate()");
    ::g::Uno::Float2 ret2;
    uPtr(__this->Target())->SetZoomFactor(::g::Uno::Math::Exp1((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->Region), ::TYPES[24/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret2), ret2).X), NULL);
}

// private void OnZoomed(float factor) :1862
void ZoomGesture__OnZoomed_fn(ZoomGesture* __this, float* factor)
{
    __this->OnZoomed(*factor);
}

// public ZoomGesture(Fuse.Elements.InteractiveTransform target) [instance] :1825
void ZoomGesture::ctor_4(::g::Fuse::Elements::InteractiveTransform* target)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", ".ctor(Fuse.Elements.InteractiveTransform)");
    _maximum = FLT_INF;
    _minimum = 0.0f;
    ctor_3(target);
    Region = (uObject*)::g::Fuse::Motion::Simulation::BasicBoundedRegion2D::CreateExponential();
}

// public float get_Maximum() [instance] :1883
float ZoomGesture::Maximum()
{
    return _maximum;
}

// public void set_Maximum(float value) [instance] :1884
void ZoomGesture::Maximum(float value)
{
    _maximum = value;
}

// public float get_Minimum() [instance] :1893
float ZoomGesture::Minimum()
{
    return _minimum;
}

// public void set_Minimum(float value) [instance] :1894
void ZoomGesture::Minimum(float value)
{
    _minimum = value;
}

// private void OnZoomed(float factor) [instance] :1862
void ZoomGesture::OnZoomed(float factor)
{
    uStackFrame __("Fuse.Gestures.ZoomGesture", "OnZoomed(float)");
    ::g::Uno::Float2 ret3;
    float current = _startZoom * factor;
    float step = ::g::Uno::Math::Log1(current) - _prevZoom;
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StepUser(uInterface(uPtr(Region), ::TYPES[22/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(step, 0.0f));
    _prevZoom = ::g::Uno::Math::Log1(current);
    uPtr(Target())->ZoomFactor(::g::Uno::Math::Exp1((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(Region), ::TYPES[24/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret3), ret3).X));
}

// public ZoomGesture New(Fuse.Elements.InteractiveTransform target) [static] :1825
ZoomGesture* ZoomGesture::New2(::g::Fuse::Elements::InteractiveTransform* target)
{
    ZoomGesture* obj1 = (ZoomGesture*)uNew(ZoomGesture_typeof());
    obj1->ctor_4(target);
    return obj1;
}
// }

}}} // ::g::Fuse::Gestures
