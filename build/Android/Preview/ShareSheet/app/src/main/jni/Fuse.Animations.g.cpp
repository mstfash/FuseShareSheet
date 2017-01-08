// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.AnimatorState.h>
#include <Fuse.Animations.AnimatorVariant.h>
#include <Fuse.Animations.Attractor-1.h>
#include <Fuse.Animations.AverageMasterProperty-1.h>
#include <Fuse.Animations.AverageMasterTransform.h>
#include <Fuse.Animations.AverageMixer.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.ContinuousTrackChangeState-1.h>
#include <Fuse.Animations.ContinuousTrackProvider.h>
#include <Fuse.Animations.Converter-1.h>
#include <Fuse.Animations.ConverterDouble.h>
#include <Fuse.Animations.ConverterFloat.h>
#include <Fuse.Animations.ConverterFloat2.h>
#include <Fuse.Animations.ConverterFloat3.h>
#include <Fuse.Animations.ConverterFloat4.h>
#include <Fuse.Animations.ConverterSize.h>
#include <Fuse.Animations.ConverterSize2.h>
#include <Fuse.Animations.CreateStateParams.h>
#include <Fuse.Animations.CubicBezierEasing.h>
#include <Fuse.Animations.Cycle-1.h>
#include <Fuse.Animations.CycleState-1.h>
#include <Fuse.Animations.CycleWaveform.h>
#include <Fuse.Animations.DiscreteKeyframeTrack.h>
#include <Fuse.Animations.DiscreteMasterProperty-1.h>
#include <Fuse.Animations.DiscreteMasterTransform.h>
#include <Fuse.Animations.DiscreteMixer.h>
#include <Fuse.Animations.DiscreteSingleTrack.h>
#include <Fuse.Animations.DiscreteTrackChangeState-1.h>
#include <Fuse.Animations.DiscreteTrackProvider.h>
#include <Fuse.Animations.Easing.BackInImpl.h>
#include <Fuse.Animations.Easing.BackInOutImpl.h>
#include <Fuse.Animations.Easing.BackOutImpl.h>
#include <Fuse.Animations.Easing.BounceInImpl.h>
#include <Fuse.Animations.Easing.BounceInOutImpl.h>
#include <Fuse.Animations.Easing.BounceOutImpl.h>
#include <Fuse.Animations.Easing.CircularInImpl.h>
#include <Fuse.Animations.Easing.CircularInOutImpl.h>
#include <Fuse.Animations.Easing.CircularOutImpl.h>
#include <Fuse.Animations.Easing.CubicInImpl.h>
#include <Fuse.Animations.Easing.CubicInOutImpl.h>
#include <Fuse.Animations.Easing.CubicOutImpl.h>
#include <Fuse.Animations.Easing.ElasticInImpl.h>
#include <Fuse.Animations.Easing.ElasticInOutImpl.h>
#include <Fuse.Animations.Easing.ElasticOutImpl.h>
#include <Fuse.Animations.Easing.ExponentialInImpl.h>
#include <Fuse.Animations.Easing.ExponentialInOutImpl.h>
#include <Fuse.Animations.Easing.ExponentialOutImpl.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Easing.LinearImpl.h>
#include <Fuse.Animations.Easing.QuadraticInImpl.h>
#include <Fuse.Animations.Easing.QuadraticInOutImpl.h>
#include <Fuse.Animations.Easing.QuadraticOutImpl.h>
#include <Fuse.Animations.Easing.QuarticInImpl.h>
#include <Fuse.Animations.Easing.QuarticInOutImpl.h>
#include <Fuse.Animations.Easing.QuarticOutImpl.h>
#include <Fuse.Animations.Easing.QuinticInImpl.h>
#include <Fuse.Animations.Easing.QuinticInOutImpl.h>
#include <Fuse.Animations.Easing.QuinticOutImpl.h>
#include <Fuse.Animations.Easing.SinusoidalInImpl.h>
#include <Fuse.Animations.Easing.SinusoidalInOutImpl.h>
#include <Fuse.Animations.Easing.SinusoidalOutImpl.h>
#include <Fuse.Animations.EasingFunction.h>
#include <Fuse.Animations.EasingFunctions.h>
#include <Fuse.Animations.EasingTrack.h>
#include <Fuse.Animations.FastMatrixTransform.h>
#include <Fuse.Animations.IMixer.h>
#include <Fuse.Animations.IMixerHandle-1.h>
#include <Fuse.Animations.IMixerMaster.h>
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Animations.IResize.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.ITrackProvider.h>
#include <Fuse.Animations.Keyframe.h>
#include <Fuse.Animations.KeyframeInterpolation.h>
#include <Fuse.Animations.KeyframeTrack.h>
#include <Fuse.Animations.MasterBase-1.GFWResult.h>
#include <Fuse.Animations.MasterBase-1.h>
#include <Fuse.Animations.MasterProperty-1.h>
#include <Fuse.Animations.MasterPropertyGet.h>
#include <Fuse.Animations.MasterTransform.h>
#include <Fuse.Animations.Mixer.h>
#include <Fuse.Animations.MixerBase.h>
#include <Fuse.Animations.MixerHandle-1.h>
#include <Fuse.Animations.MixOp.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Nothing.h>
#include <Fuse.Animations.NothingAnimatorState.h>
#include <Fuse.Animations.OpenAnimator.h>
#include <Fuse.Animations.OpenAnimatorState.h>
#include <Fuse.Animations.Player.h>
#include <Fuse.Animations.PlayerPart.h>
#include <Fuse.Animations.PlayMode.h>
#include <Fuse.Animations.RangeAdapter-1.h>
#include <Fuse.Animations.RangeAdapterHelpers.h>
#include <Fuse.Animations.Resize.h>
#include <Fuse.Animations.ResizeAnimatorState.h>
#include <Fuse.Animations.Rotate.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.SeekDirection.h>
#include <Fuse.Animations.SeekResult.h>
#include <Fuse.Animations.Skew.h>
#include <Fuse.Animations.Spin.h>
#include <Fuse.Animations.SpinState.h>
#include <Fuse.Animations.SplineTrack.h>
#include <Fuse.Animations.SplineTrack.PointInterpolater.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TrackAnimatorState.h>
#include <Fuse.Animations.TrackProvider.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Animations.TransformAnimatorState-1.h>
#include <Fuse.Animations.TransformPriority.h>
#include <Fuse.Animations.TriggerAnimation.h>
#include <Fuse.Animations.TriggerAnimationState.h>
#include <Fuse.Animations.TriggerAnimationState.SeekFlags.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Internal.Blender-1.h>
#include <Fuse.Internal.BlenderMap.h>
#include <Fuse.Internal.ScalarBlender-1.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Motion.DestinationMotion-1.h>
#include <Fuse.Motion.MotionDestinationType.h>
#include <Fuse.Motion.MotionUnit.h>
#include <Fuse.Motion.Simulation.DestinationSimulation-1.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Fuse.Node.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.RelativeTransform-1.h>
#include <Fuse.Rotation.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Time.h>
#include <Fuse.Transform.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
static uString* STRINGS[20];
static uType* TYPES[78];

namespace g{
namespace Fuse{
namespace Animations{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public enum AnimationVariant :3893
uEnumType* AnimationVariant_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.AnimationVariant", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public abstract class Animator :70
// {
static void Animator_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Animations::MixOp_typeof(), offsetof(::g::Fuse::Animations::Animator, _mixOp), 0,
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(::g::Fuse::Animations::Animator, Mixer), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Animator, _Delay), 0);
    type->Reflection.SetFields(1,
        new uField("Mixer", 2));
    type->Reflection.SetFunctions(4,
        new uFunction("get_Delay", NULL, (void*)Animator__get_Delay_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Delay", NULL, (void*)Animator__set_Delay_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_MixOp", NULL, (void*)Animator__get_MixOp_fn, 0, false, ::g::Fuse::Animations::MixOp_typeof(), 0),
        new uFunction("set_MixOp", NULL, (void*)Animator__set_MixOp_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::MixOp_typeof()));
}

Animator_type* Animator_typeof()
{
    static uSStrong<Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Animator);
    options.TypeSize = sizeof(Animator_type);
    type = (Animator_type*)uClassType::New("Fuse.Animations.Animator", options);
    type->fp_build_ = Animator_build;
    type->fp_get_AnimatorVariant = Animator__get_AnimatorVariant_fn;
    type->fp_GetDurationWithDelay = Animator__GetDurationWithDelay_fn;
    return type;
}

// internal Animator() :100
void Animator__ctor_1_fn(Animator* __this)
{
    __this->ctor_1();
}

// internal virtual Fuse.Animations.AnimatorVariant get_AnimatorVariant() :81
void Animator__get_AnimatorVariant_fn(Animator* __this, int* __retval)
{
    return *__retval = 0, void();
}

// public generated double get_Delay() :79
void Animator__get_Delay_fn(Animator* __this, double* __retval)
{
    *__retval = __this->Delay();
}

// public generated void set_Delay(double value) :79
void Animator__set_Delay_fn(Animator* __this, double* value)
{
    __this->Delay(*value);
}

// internal virtual double GetDurationWithDelay(Fuse.Animations.AnimationVariant dir) :95
void Animator__GetDurationWithDelay_fn(Animator* __this, int* dir, double* __retval)
{
    return *__retval = __this->Delay(), void();
}

// public Fuse.Animations.MixOp get_MixOp() :91
void Animator__get_MixOp_fn(Animator* __this, int* __retval)
{
    *__retval = __this->MixOp();
}

// public void set_MixOp(Fuse.Animations.MixOp value) :92
void Animator__set_MixOp_fn(Animator* __this, int* value)
{
    __this->MixOp(*value);
}

// internal Animator() [instance] :100
void Animator::ctor_1()
{
    Mixer = ::g::Fuse::Animations::Mixer::Default();
    ctor_();
}

// public generated double get_Delay() [instance] :79
double Animator::Delay()
{
    return _Delay;
}

// public generated void set_Delay(double value) [instance] :79
void Animator::Delay(double value)
{
    _Delay = value;
}

// public Fuse.Animations.MixOp get_MixOp() [instance] :91
int Animator::MixOp()
{
    return _mixOp;
}

// public void set_MixOp(Fuse.Animations.MixOp value) [instance] :92
void Animator::MixOp(int value)
{
    _mixOp = value;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal abstract class AnimatorState :124
// {
static void AnimatorState_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::AnimatorState, TotalDuration), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Animations::AnimatorState, Variant), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::AnimatorState, Visual), 0);
}

AnimatorState_type* AnimatorState_typeof()
{
    static uSStrong<AnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(AnimatorState);
    options.TypeSize = sizeof(AnimatorState_type);
    type = (AnimatorState_type*)uClassType::New("Fuse.Animations.AnimatorState", options);
    type->fp_build_ = AnimatorState_build;
    type->fp_Disable = AnimatorState__Disable_fn;
    type->fp_get_IsOpenEnd = AnimatorState__get_IsOpenEnd_fn;
    return type;
}

// protected AnimatorState(Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) :130
void AnimatorState__ctor__fn(AnimatorState* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    __this->ctor_(p, useVisual);
}

// public virtual void Disable() :144
void AnimatorState__Disable_fn(AnimatorState* __this)
{
}

// public virtual bool get_IsOpenEnd() :143
void AnimatorState__get_IsOpenEnd_fn(AnimatorState* __this, bool* __retval)
{
    return *__retval = false, void();
}

// protected AnimatorState(Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) [instance] :130
void AnimatorState::ctor_(::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    uStackFrame __("Fuse.Animations.AnimatorState", ".ctor(Fuse.Animations.CreateStateParams,[Fuse.Visual])");
    Variant = uPtr(p)->Variant;
    Visual = ((useVisual != NULL) ? useVisual : (::g::Fuse::Visual*)p->Attached);
    TotalDuration = p->TotalDuration;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal enum AnimatorVariant :8
uEnumType* AnimatorVariant_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.AnimatorVariant", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Allow", 0LL,
        "Disallow", 1LL,
        "HasBackward", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class Attractor<T> :176
// {
static void Attractor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("target");
    ::STRINGS[1] = uString::Const("Motion should not be changed post-rooting");
    ::STRINGS[2] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno");
    ::STRINGS[3] = uString::Const("set_Motion");
    ::TYPES[0] = ::g::Fuse::Motion::DestinationMotion_typeof();
    ::TYPES[1] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[3] = ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof();
    ::TYPES[4] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof();
    type->SetPrecalc(
        ::g::Fuse::Motion::DestinationMotion_typeof()->MakeType(type->T(0), NULL),
        type->T(0),
        ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Attractor_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Attractor_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Attractor_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Attractor_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Attractor_type, interface4));
    type->SetFields(13,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Attractor, _isEnabled), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Attractor, _isUpdate), 0,
        ::TYPES[0/*Fuse.Motion.DestinationMotion`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Animations::Attractor, _motion), 0,
        ::TYPES[3/*Fuse.Motion.Simulation.DestinationSimulation`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Animations::Attractor, _sim), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::Attractor, _timeMultiplier), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Animations::Attractor, _Target), 0);
    type->Reflection.SetFunctions(22,
        new uFunction("get_Distance", NULL, (void*)Attractor__get_Distance_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Distance", NULL, (void*)Attractor__set_Distance_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Duration", NULL, (void*)Attractor__get_Duration_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Duration", NULL, (void*)Attractor__set_Duration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DurationExp", NULL, (void*)Attractor__get_DurationExp_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DurationExp", NULL, (void*)Attractor__set_DurationExp_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Easing", NULL, (void*)Attractor__get_Easing_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_Easing", NULL, (void*)Attractor__set_Easing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("get_IsEnabled", NULL, (void*)Attractor__get_IsEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsEnabled", NULL, (void*)Attractor__set_IsEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Motion", NULL, (void*)Attractor__get_Motion_fn, 0, false, ::TYPES[0/*Fuse.Motion.DestinationMotion`1*/]->MakeType(type->T(0), NULL), 0),
        new uFunction("set_Motion", NULL, (void*)Attractor__set_Motion_fn, 0, false, uVoid_typeof(), 1, ::TYPES[0/*Fuse.Motion.DestinationMotion`1*/]->MakeType(type->T(0), NULL)),
        new uFunction(".ctor", type, (void*)Attractor__New3_fn, 0, true, type, 1, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL)),
        new uFunction("get_Target", NULL, (void*)Attractor__get_Target_fn, 0, false, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), 0),
        new uFunction("get_TimeMultiplier", NULL, (void*)Attractor__get_TimeMultiplier_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_TimeMultiplier", NULL, (void*)Attractor__set_TimeMultiplier_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Type", NULL, (void*)Attractor__get_Type_fn, 0, false, ::g::Fuse::Motion::MotionDestinationType_typeof(), 0),
        new uFunction("set_Type", NULL, (void*)Attractor__set_Type_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::MotionDestinationType_typeof()),
        new uFunction("get_Unit", NULL, (void*)Attractor__get_Unit_fn, 0, false, ::g::Fuse::Motion::MotionUnit_typeof(), 0),
        new uFunction("set_Unit", NULL, (void*)Attractor__set_Unit_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::MotionUnit_typeof()),
        new uFunction("get_Value", NULL, (void*)Attractor__get_Value_fn, 0, false, type->T(0), 0),
        new uFunction("set_Value", NULL, (void*)Attractor__set_Value_fn, 0, false, uVoid_typeof(), 1, type->T(0)));
}

Attractor_type* Attractor_typeof()
{
    static uSStrong<Attractor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 19;
    options.GenericCount = 1;
    options.InterfaceCount = 5;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(Attractor);
    options.TypeSize = sizeof(Attractor_type);
    type = (Attractor_type*)uClassType::New("Fuse.Animations.Attractor`1", options);
    type->fp_build_ = Attractor_build;
    type->fp_ctor_ = (void*)Attractor__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Attractor__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Attractor__OnUnrooted_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Attractor__UnoUXIPropertyListenerOnPropertyChanged_fn;
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

// internal Attractor() :178
void Attractor__ctor_3_fn(Attractor* __this)
{
    __this->ctor_3();
}

// public Attractor(Uno.UX.Property<T> target) :186
void Attractor__ctor_4_fn(Attractor* __this, ::g::Uno::UX::Property1* target)
{
    __this->ctor_4(target);
}

// private void CheckNeedUpdate() :303
void Attractor__CheckNeedUpdate_fn(Attractor* __this)
{
    __this->CheckNeedUpdate();
}

// public float get_Distance() :242
void Attractor__get_Distance_fn(Attractor* __this, float* __retval)
{
    *__retval = __this->Distance();
}

// public void set_Distance(float value) :243
void Attractor__set_Distance_fn(Attractor* __this, float* value)
{
    __this->Distance(*value);
}

// public float get_Duration() :230
void Attractor__get_Duration_fn(Attractor* __this, float* __retval)
{
    *__retval = __this->Duration();
}

// public void set_Duration(float value) :231
void Attractor__set_Duration_fn(Attractor* __this, float* value)
{
    __this->Duration(*value);
}

// public float get_DurationExp() :236
void Attractor__get_DurationExp_fn(Attractor* __this, float* __retval)
{
    *__retval = __this->DurationExp();
}

// public void set_DurationExp(float value) :237
void Attractor__set_DurationExp_fn(Attractor* __this, float* value)
{
    __this->DurationExp(*value);
}

// public Fuse.Animations.Easing get_Easing() :217
void Attractor__get_Easing_fn(Attractor* __this, ::g::Fuse::Animations::Easing** __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :218
void Attractor__set_Easing_fn(Attractor* __this, ::g::Fuse::Animations::Easing* value)
{
    __this->Easing(value);
}

// public bool get_IsEnabled() :261
void Attractor__get_IsEnabled_fn(Attractor* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public void set_IsEnabled(bool value) :262
void Attractor__set_IsEnabled_fn(Attractor* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public Fuse.Motion.DestinationMotion<T> get_Motion() :196
void Attractor__get_Motion_fn(Attractor* __this, ::g::Fuse::Motion::DestinationMotion** __retval)
{
    *__retval = __this->Motion();
}

// public void set_Motion(Fuse.Motion.DestinationMotion<T> value) :197
void Attractor__set_Motion_fn(Attractor* __this, ::g::Fuse::Motion::DestinationMotion* value)
{
    __this->Motion(value);
}

// internal Attractor New() :178
void Attractor__New2_fn(uType* __type, Attractor** __retval)
{
    *__retval = Attractor::New2(__type);
}

// public Attractor New(Uno.UX.Property<T> target) :186
void Attractor__New3_fn(uType* __type, ::g::Uno::UX::Property1* target, Attractor** __retval)
{
    *__retval = Attractor::New3(__type, target);
}

// protected override sealed void OnRooted() :316
void Attractor__OnRooted_fn(Attractor* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
        __this->__type->Precalced(2/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", "OnRooted()");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_sim = ((uObject*)uPtr(__this->Motion())->Create());
    ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(__this->_sim), __types[1]), (uPtr(__this->Target())->Get_ex(&ret3), ret3));
    uPtr(__this->Target())->AddListener((uObject*)__this);
}

// protected override sealed void OnUnrooted() :324
void Attractor__OnUnrooted_fn(Attractor* __this)
{
    uStackFrame __("Fuse.Animations.Attractor`1", "OnUnrooted()");
    __this->_sim = NULL;
    __this->CheckNeedUpdate();
    uPtr(__this->Target())->RemoveListener((uObject*)__this);
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public generated Uno.UX.Property<T> get_Target() :183
void Attractor__get_Target_fn(Attractor* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :183
void Attractor__set_Target_fn(Attractor* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// public float get_TimeMultiplier() :276
void Attractor__get_TimeMultiplier_fn(Attractor* __this, float* __retval)
{
    *__retval = __this->TimeMultiplier();
}

// public void set_TimeMultiplier(float value) :277
void Attractor__set_TimeMultiplier_fn(Attractor* __this, float* value)
{
    __this->TimeMultiplier(*value);
}

// public Fuse.Motion.MotionDestinationType get_Type() :209
void Attractor__get_Type_fn(Attractor* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(Fuse.Motion.MotionDestinationType value) :210
void Attractor__set_Type_fn(Attractor* __this, int* value)
{
    __this->Type(*value);
}

// public Fuse.Motion.MotionUnit get_Unit() :251
void Attractor__get_Unit_fn(Attractor* __this, int* __retval)
{
    *__retval = __this->Unit();
}

// public void set_Unit(Fuse.Motion.MotionUnit value) :252
void Attractor__set_Unit_fn(Attractor* __this, int* value)
{
    __this->Unit(*value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :342
void Attractor__UnoUXIPropertyListenerOnPropertyChanged_fn(Attractor* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
        __this->__type->Precalced(2/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
        __this->__type->Precalced(3/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT val(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->_sim == NULL)
        return;

    val = (uPtr(__this->Target())->Get_ex(&ret4), ret4);

    if (!__this->IsEnabled() || ::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(__this->_sim), ::TYPES[1/*Fuse.Motion.Simulation.Simulation*/])))
        ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(__this->_sim), __types[1]), val);
    else
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->_sim), __types[2]), val);

    __this->CheckNeedUpdate();
}

// private void Update() :332
void Attractor__Update_fn(Attractor* __this)
{
    __this->Update();
}

// public T get_Value() :282
void Attractor__get_Value_fn(Attractor* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
        __this->__type->Precalced(2/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", "get_Value()");
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->IsRootingCompleted())
        return __retval.Store((::g::Fuse::Motion::Simulation::DestinationSimulation::get_Destination_ex(uInterface(uPtr(__this->_sim), __types[1]), &ret7), ret7)), void();

    return __retval.Store((uPtr(__this->Target())->Get_ex(&ret8), ret8)), void();
}

// public void set_Value(T value) :288
void Attractor__set_Value_fn(Attractor* __this, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", "set_Value(T)");

    if (__this->IsRootingCompleted())
    {
        ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(__this->_sim), __types[0]), value);
        __this->CheckNeedUpdate();
    }
    else
        uPtr(__this->Target())->Set_ex(value, (uObject*)__this);
}

// internal Attractor() [instance] :178
void Attractor::ctor_3()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Motion.DestinationMotion<T>*/),
    };
    _motion = ((::g::Fuse::Motion::DestinationMotion*)::g::Fuse::Motion::DestinationMotion::New1(__types[0]));
    _isEnabled = true;
    _timeMultiplier = 1.0f;
    ctor_2();
}

// public Attractor(Uno.UX.Property<T> target) [instance] :186
void Attractor::ctor_4(::g::Uno::UX::Property1* target)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Motion.DestinationMotion<T>*/),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", ".ctor(Uno.UX.Property<T>)");
    _motion = ((::g::Fuse::Motion::DestinationMotion*)::g::Fuse::Motion::DestinationMotion::New1(__types[0]));
    _isEnabled = true;
    _timeMultiplier = 1.0f;
    ctor_2();

    if (target == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"target"*/]));

    Target(target);
}

// private void CheckNeedUpdate() [instance] :303
void Attractor::CheckNeedUpdate()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "CheckNeedUpdate()");
    bool need = (_sim != NULL) && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_sim), ::TYPES[1/*Fuse.Motion.Simulation.Simulation*/]));

    if (need == _isUpdate)
        return;

    if (need)
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Attractor__Update_fn, this), 0);
    else
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)Attractor__Update_fn, this), 0);

    _isUpdate = need;
}

// public float get_Distance() [instance] :242
float Attractor::Distance()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "get_Distance()");
    return uPtr(_motion)->Distance();
}

// public void set_Distance(float value) [instance] :243
void Attractor::Distance(float value)
{
    uStackFrame __("Fuse.Animations.Attractor`1", "set_Distance(float)");
    uPtr(_motion)->Distance(value);
}

// public float get_Duration() [instance] :230
float Attractor::Duration()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "get_Duration()");
    return uPtr(_motion)->Duration();
}

// public void set_Duration(float value) [instance] :231
void Attractor::Duration(float value)
{
    uStackFrame __("Fuse.Animations.Attractor`1", "set_Duration(float)");
    uPtr(_motion)->Duration(value);
}

// public float get_DurationExp() [instance] :236
float Attractor::DurationExp()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "get_DurationExp()");
    return uPtr(_motion)->DurationExp();
}

// public void set_DurationExp(float value) [instance] :237
void Attractor::DurationExp(float value)
{
    uStackFrame __("Fuse.Animations.Attractor`1", "set_DurationExp(float)");
    uPtr(_motion)->DurationExp(value);
}

// public Fuse.Animations.Easing get_Easing() [instance] :217
::g::Fuse::Animations::Easing* Attractor::Easing()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "get_Easing()");
    return uPtr(_motion)->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :218
void Attractor::Easing(::g::Fuse::Animations::Easing* value)
{
    uStackFrame __("Fuse.Animations.Attractor`1", "set_Easing(Fuse.Animations.Easing)");
    uPtr(_motion)->Easing(value);
}

// public bool get_IsEnabled() [instance] :261
bool Attractor::IsEnabled()
{
    return _isEnabled;
}

// public void set_IsEnabled(bool value) [instance] :262
void Attractor::IsEnabled(bool value)
{
    uType* __types[] = {
        __type->Precalced(1/*T*/),
        __type->Precalced(2/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", "set_IsEnabled(bool)");
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (_isEnabled == value)
        return;

    _isEnabled = true;

    if (!_isEnabled && (_sim != NULL))
        ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(_sim), __types[1]), (uPtr(Target())->Get_ex(&ret6), ret6));

    CheckNeedUpdate();
}

// public Fuse.Motion.DestinationMotion<T> get_Motion() [instance] :196
::g::Fuse::Motion::DestinationMotion* Attractor::Motion()
{
    return _motion;
}

// public void set_Motion(Fuse.Motion.DestinationMotion<T> value) [instance] :197
void Attractor::Motion(::g::Fuse::Motion::DestinationMotion* value)
{
    _motion = value;

    if (IsRootingCompleted())
        ::g::Fuse::Diagnostics::UserError(::STRINGS[1/*"Motion shou...*/], this, ::STRINGS[2/*"/Users/most...*/], 201, ::STRINGS[3/*"set_Motion"*/]);
}

// public generated Uno.UX.Property<T> get_Target() [instance] :183
::g::Uno::UX::Property1* Attractor::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :183
void Attractor::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}

// public float get_TimeMultiplier() [instance] :276
float Attractor::TimeMultiplier()
{
    return _timeMultiplier;
}

// public void set_TimeMultiplier(float value) [instance] :277
void Attractor::TimeMultiplier(float value)
{
    _timeMultiplier = value;
}

// public Fuse.Motion.MotionDestinationType get_Type() [instance] :209
int Attractor::Type()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "get_Type()");
    return uPtr(_motion)->Type();
}

// public void set_Type(Fuse.Motion.MotionDestinationType value) [instance] :210
void Attractor::Type(int value)
{
    uStackFrame __("Fuse.Animations.Attractor`1", "set_Type(Fuse.Motion.MotionDestinationType)");
    uPtr(_motion)->Type(value);
}

// public Fuse.Motion.MotionUnit get_Unit() [instance] :251
int Attractor::Unit()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "get_Unit()");
    return uPtr(_motion)->Unit();
}

// public void set_Unit(Fuse.Motion.MotionUnit value) [instance] :252
void Attractor::Unit(int value)
{
    uStackFrame __("Fuse.Animations.Attractor`1", "set_Unit(Fuse.Motion.MotionUnit)");
    uPtr(_motion)->Unit(value);
}

// private void Update() [instance] :332
void Attractor::Update()
{
    uType* __types[] = {
        __type->Precalced(1/*T*/),
        __type->Precalced(3/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", "Update()");
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (_sim != NULL)
    {
        ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_sim), ::TYPES[1/*Fuse.Motion.Simulation.Simulation*/]), ::g::Fuse::Time::FrameInterval() * (double)_timeMultiplier);
        uPtr(Target())->Set_ex((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_sim), __types[1]), &ret5), ret5), (uObject*)this);
    }

    CheckNeedUpdate();
}

// internal Attractor New() [static] :178
Attractor* Attractor::New2(uType* __type)
{
    Attractor* obj1 = (Attractor*)uNew(__type);
    obj1->ctor_3();
    return obj1;
}

// public Attractor New(Uno.UX.Property<T> target) [static] :186
Attractor* Attractor::New3(uType* __type, ::g::Uno::UX::Property1* target)
{
    Attractor* obj2 = (Attractor*)uNew(__type);
    obj2->ctor_4(target);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class AverageMasterProperty<T> :377
// {
static void AverageMasterProperty_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Internal::BlenderMap_typeof();
    type->SetBase(::g::Fuse::Animations::MasterProperty_typeof()->MakeType(type->T(0), NULL));
    type->SetPrecalc(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(0/*Get<T>*/, type->T(0), NULL),
        type->T(0));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface0),
        ::g::Fuse::Animations::MasterPropertyGet_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface2));
    type->SetFields(10,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Animations::AverageMasterProperty, blender), 0);
}

::g::Fuse::Animations::MasterProperty_type* AverageMasterProperty_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MasterProperty_typeof();
    options.FieldCount = 11;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(AverageMasterProperty);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterProperty_type);
    type = (::g::Fuse::Animations::MasterProperty_type*)uClassType::New("Fuse.Animations.AverageMasterProperty`1", options);
    type->fp_build_ = AverageMasterProperty_build;
    type->fp_OnActive = (void(*)(::g::Fuse::Animations::MasterBase*))AverageMasterProperty__OnActive_fn;
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))AverageMasterProperty__OnComplete_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Animations::MasterProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_GetPropertyObject = (void(*)(uObject*, uObject**))::g::Fuse::Animations::MasterProperty__GetPropertyObject_fn;
    return type;
}

// public AverageMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :379
void AverageMasterProperty__ctor_2_fn(AverageMasterProperty* __this, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(property, mixerBase);
}

// public AverageMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :379
void AverageMasterProperty__New1_fn(uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase, AverageMasterProperty** __retval)
{
    *__retval = AverageMasterProperty::New1(__type, property, mixerBase);
}

// protected override sealed void OnActive() :383
void AverageMasterProperty__OnActive_fn(AverageMasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    uStackFrame __("Fuse.Animations.AverageMasterProperty`1", "OnActive()");
    ::g::Fuse::Animations::MasterProperty__OnActive_fn(__this);

    if (__this->blender == NULL)
        __this->blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
}

// public override sealed void OnComplete() :390
void AverageMasterProperty__OnComplete_fn(AverageMasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uStackFrame __("Fuse.Animations.AverageMasterProperty`1", "OnComplete()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret10(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT nv(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT add(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Fuse::Animations::MixerHandle* ret4;
    ::g::Fuse::Animations::MasterBase__GFWResult weight = __this->GetFullWeight();
    nv = (uPtr(__this->blender)->Weight_ex((__this->get_RestValue_ex(&ret3), ret3), uCRef((double)(weight.Rest / weight.Full)), &ret2), ret2);
    int c = uPtr((::g::Uno::Collections::List*)__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret4), ret4);

        if (!uPtr(v)->HasValue())
            continue;

        if (uPtr(v)->MixOp() == 2)
            add = (uPtr(__this->blender)->Weight_ex(uPtr(v)->Value(), uCRef((double)(::g::Uno::Math::Max1(0.0f, uPtr(v)->Strength) / weight.Full)), &ret5), ret5);
        else if (uPtr(v)->MixOp() == 0)
            add = (uPtr(__this->blender)->Weight_ex((uPtr(__this->blender)->Sub_ex(uPtr(v)->Value(), (__this->get_RestValue_ex(&ret8), ret8), &ret7), ret7), uCRef((double)uPtr(v)->Strength), &ret6), ret6);
        else
            add = (uPtr(__this->blender)->Weight_ex(uPtr(v)->Value(), uCRef((double)uPtr(v)->Strength), &ret9), ret9);

        nv = (uPtr(__this->blender)->Add_ex(nv, add, &ret10), ret10);
    }

    ::g::Fuse::Animations::MasterProperty__Set_fn(__this, nv);
}

// public AverageMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [instance] :379
void AverageMasterProperty::ctor_2(::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_1(property, mixerBase);
}

// public AverageMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [static] :379
AverageMasterProperty* AverageMasterProperty::New1(uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterProperty* obj1 = (AverageMasterProperty*)uNew(__type);
    obj1->ctor_2(property, mixerBase);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class AverageMasterTransform :417
// {
static void AverageMasterTransform_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::Float4x4_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterBase_type, interface0));
    type->SetFields(6);
}

::g::Fuse::Animations::MasterBase_type* AverageMasterTransform_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MasterTransform_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AverageMasterTransform);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterBase_type);
    type = (::g::Fuse::Animations::MasterBase_type*)uClassType::New("Fuse.Animations.AverageMasterTransform", options);
    type->fp_build_ = AverageMasterTransform_build;
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))AverageMasterTransform__OnComplete_fn;
    return type;
}

// public AverageMasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) :419
void AverageMasterTransform__ctor_2_fn(AverageMasterTransform* __this, ::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(node, mixerBase);
}

// public AverageMasterTransform New(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) :419
void AverageMasterTransform__New1_fn(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase, AverageMasterTransform** __retval)
{
    *__retval = AverageMasterTransform::New1(node, mixerBase);
}

// public override sealed void OnComplete() :422
void AverageMasterTransform__OnComplete_fn(AverageMasterTransform* __this)
{
    uStackFrame __("Fuse.Animations.AverageMasterTransform", "OnComplete()");
    ::g::Fuse::Animations::MixerHandle* ret2;
    ::g::Fuse::Animations::MasterBase__GFWResult weight = __this->GetFullWeight();
    ::g::Fuse::FastMatrix* nv = ::g::Fuse::FastMatrix::Identity();
    int c = uPtr((::g::Uno::Collections::List*)__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret2), ret2);

        if (!uPtr(v)->HasValue())
            continue;

        if (uPtr(v)->MixOp() == 2)
            uPtr(uPtr(v)->Value().Strong< ::g::Fuse::Transform*>())->AppendTo(nv, uPtr(v)->Strength / weight.Full);
        else
            uPtr(uPtr(v)->Value().Strong< ::g::Fuse::Transform*>())->AppendTo(nv, uPtr(v)->Strength);
    }

    if (!uPtr(nv)->Matrix().Equals(::TYPES[6/*float4x4*/], uBox(::TYPES[6/*float4x4*/], uPtr(uPtr(__this->FMT)->Matrix)->Matrix())))
    {
        uPtr(__this->FMT)->Matrix = nv;
        uPtr(__this->FMT)->Changed();
    }
}

// public AverageMasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) [instance] :419
void AverageMasterTransform::ctor_2(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_1(node, mixerBase);
}

// public AverageMasterTransform New(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) [static] :419
AverageMasterTransform* AverageMasterTransform::New1(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterTransform* obj1 = (AverageMasterTransform*)uNew(AverageMasterTransform_typeof());
    obj1->ctor_2(node, mixerBase);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class AverageMixer :367
// {
static void AverageMixer_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Animations::AverageMasterProperty_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[7/*Fuse.Animations.AverageMasterProperty`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(::g::Fuse::Animations::MixerBase_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Animations::MixerBase_type* AverageMixer_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MixerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MixerBase_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(AverageMixer);
    options.TypeSize = sizeof(::g::Fuse::Animations::MixerBase_type);
    type = (::g::Fuse::Animations::MixerBase_type*)uClassType::New("Fuse.Animations.AverageMixer", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->fp_build_ = AverageMixer_build;
    type->fp_ctor_ = (void*)AverageMixer__New1_fn;
    type->fp_CreateMaster = (void(*)(::g::Fuse::Animations::MixerBase*, uType*, ::g::Uno::UX::Property1*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterProperty**))AverageMixer__CreateMaster_fn;
    type->fp_CreateMasterTransform = (void(*)(::g::Fuse::Animations::MixerBase*, ::g::Fuse::Visual*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterBase**))AverageMixer__CreateMasterTransform_fn;
    type->interface0.fp_Register = (void(*)(uObject*, uType*, ::g::Uno::UX::Property1*, int*, uObject**))::g::Fuse::Animations::MixerBase__Register_fn;
    type->interface0.fp_RegisterTransform = (void(*)(uObject*, ::g::Fuse::Visual*, int*, int*, uObject**))::g::Fuse::Animations::MixerBase__RegisterTransform_fn;
    return type;
}

// public generated AverageMixer() :367
void AverageMixer__ctor_1_fn(AverageMixer* __this)
{
    __this->ctor_1();
}

// protected override sealed Fuse.Animations.MasterProperty<T> CreateMaster<T>(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :369
void AverageMixer__CreateMaster_fn(AverageMixer* __this, uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterProperty** __retval)
{
    __type = AverageMixer_typeof()->GetVirtual(0, __type);
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.AverageMasterProperty<T>*/),
    };
    return *__retval = (::g::Fuse::Animations::AverageMasterProperty*)::g::Fuse::Animations::AverageMasterProperty::New1(__types[0], property, mixerBase), void();
}

// protected override sealed Fuse.Animations.MasterBase<Fuse.Transform> CreateMasterTransform(Fuse.Visual element, Fuse.Animations.MixerBase mixerBase) :372
void AverageMixer__CreateMasterTransform_fn(AverageMixer* __this, ::g::Fuse::Visual* element, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterBase** __retval)
{
    return *__retval = ::g::Fuse::Animations::AverageMasterTransform::New1(element, mixerBase), void();
}

// public generated AverageMixer New() :367
void AverageMixer__New1_fn(AverageMixer** __retval)
{
    *__retval = AverageMixer::New1();
}

// public generated AverageMixer() [instance] :367
void AverageMixer::ctor_1()
{
    ctor_();
}

// public generated AverageMixer New() [static] :367
AverageMixer* AverageMixer::New1()
{
    AverageMixer* obj1 = (AverageMixer*)uNew(AverageMixer_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.BackInImpl :1541
// {
static void Easing__BackInImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__BackInImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__BackInImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.BackInImpl", options);
    type->fp_build_ = Easing__BackInImpl_build;
    type->fp_ctor_ = (void*)Easing__BackInImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__BackInImpl__Map_fn;
    return type;
}

// public generated BackInImpl() :1541
void Easing__BackInImpl__ctor_1_fn(Easing__BackInImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1543
void Easing__BackInImpl__Map_fn(Easing__BackInImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    float s = 1.70158f;
    return *__retval = (k_ * k_) * (((double)(s + 1.0f) * k_) - (double)s), void();
}

// public generated BackInImpl New() :1541
void Easing__BackInImpl__New1_fn(Easing__BackInImpl** __retval)
{
    *__retval = Easing__BackInImpl::New1();
}

// public generated BackInImpl() [instance] :1541
void Easing__BackInImpl::ctor_1()
{
    ctor_();
}

// public generated BackInImpl New() [static] :1541
Easing__BackInImpl* Easing__BackInImpl::New1()
{
    Easing__BackInImpl* obj1 = (Easing__BackInImpl*)uNew(Easing__BackInImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.BackInOutImpl :1560
// {
static void Easing__BackInOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__BackInOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__BackInOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.BackInOutImpl", options);
    type->fp_build_ = Easing__BackInOutImpl_build;
    type->fp_ctor_ = (void*)Easing__BackInOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__BackInOutImpl__Map_fn;
    return type;
}

// public generated BackInOutImpl() :1560
void Easing__BackInOutImpl__ctor_1_fn(Easing__BackInOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1562
void Easing__BackInOutImpl__Map_fn(Easing__BackInOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    float s = 2.59490943f;
    k_ = k_ * 2.0;

    if (k_ < 1.0)
        return *__retval = 0.5 * ((k_ * k_) * (((double)(s + 1.0f) * k_) - (double)s)), void();

    k_ = k_ - 2.0;
    return *__retval = 0.5 * (((k_ * k_) * (((double)(s + 1.0f) * k_) + (double)s)) + 2.0), void();
}

// public generated BackInOutImpl New() :1560
void Easing__BackInOutImpl__New1_fn(Easing__BackInOutImpl** __retval)
{
    *__retval = Easing__BackInOutImpl::New1();
}

// public generated BackInOutImpl() [instance] :1560
void Easing__BackInOutImpl::ctor_1()
{
    ctor_();
}

// public generated BackInOutImpl New() [static] :1560
Easing__BackInOutImpl* Easing__BackInOutImpl::New1()
{
    Easing__BackInOutImpl* obj1 = (Easing__BackInOutImpl*)uNew(Easing__BackInOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.BackOutImpl :1550
// {
static void Easing__BackOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__BackOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__BackOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.BackOutImpl", options);
    type->fp_build_ = Easing__BackOutImpl_build;
    type->fp_ctor_ = (void*)Easing__BackOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__BackOutImpl__Map_fn;
    return type;
}

// public generated BackOutImpl() :1550
void Easing__BackOutImpl__ctor_1_fn(Easing__BackOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1552
void Easing__BackOutImpl__Map_fn(Easing__BackOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    float s = 1.70158f;
    k_ = k_ - 1.0;
    return *__retval = ((k_ * k_) * (((double)(s + 1.0f) * k_) + (double)s)) + 1.0, void();
}

// public generated BackOutImpl New() :1550
void Easing__BackOutImpl__New1_fn(Easing__BackOutImpl** __retval)
{
    *__retval = Easing__BackOutImpl::New1();
}

// public generated BackOutImpl() [instance] :1550
void Easing__BackOutImpl::ctor_1()
{
    ctor_();
}

// public generated BackOutImpl New() [static] :1550
Easing__BackOutImpl* Easing__BackOutImpl::New1()
{
    Easing__BackOutImpl* obj1 = (Easing__BackOutImpl*)uNew(Easing__BackOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.BounceInImpl :1575
// {
static void Easing__BounceInImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__BounceInImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__BounceInImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.BounceInImpl", options);
    type->fp_build_ = Easing__BounceInImpl_build;
    type->fp_ctor_ = (void*)Easing__BounceInImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__BounceInImpl__Map_fn;
    return type;
}

// public generated BounceInImpl() :1575
void Easing__BounceInImpl__ctor_1_fn(Easing__BounceInImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1577
void Easing__BounceInImpl__Map_fn(Easing__BounceInImpl* __this, double* k, double* __retval)
{
    uStackFrame __("Fuse.Animations.Easing.BounceInImpl", "Map(double)");
    double k_ = *k;
    return *__retval = 1.0 - uPtr(::g::Fuse::Animations::Easing::BounceOut())->Map(1.0 - k_), void();
}

// public generated BounceInImpl New() :1575
void Easing__BounceInImpl__New1_fn(Easing__BounceInImpl** __retval)
{
    *__retval = Easing__BounceInImpl::New1();
}

// public generated BounceInImpl() [instance] :1575
void Easing__BounceInImpl::ctor_1()
{
    ctor_();
}

// public generated BounceInImpl New() [static] :1575
Easing__BounceInImpl* Easing__BounceInImpl::New1()
{
    Easing__BounceInImpl* obj1 = (Easing__BounceInImpl*)uNew(Easing__BounceInImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.BounceInOutImpl :1609
// {
static void Easing__BounceInOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__BounceInOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__BounceInOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.BounceInOutImpl", options);
    type->fp_build_ = Easing__BounceInOutImpl_build;
    type->fp_ctor_ = (void*)Easing__BounceInOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__BounceInOutImpl__Map_fn;
    return type;
}

// public generated BounceInOutImpl() :1609
void Easing__BounceInOutImpl__ctor_1_fn(Easing__BounceInOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1611
void Easing__BounceInOutImpl__Map_fn(Easing__BounceInOutImpl* __this, double* k, double* __retval)
{
    uStackFrame __("Fuse.Animations.Easing.BounceInOutImpl", "Map(double)");
    double k_ = *k;

    if (k_ < 0.5)
        return *__retval = uPtr(::g::Fuse::Animations::Easing::BounceIn())->Map(k_ * 2.0) * 0.5, void();

    return *__retval = (uPtr(::g::Fuse::Animations::Easing::BounceOut())->Map((k_ * 2.0) - 1.0) * 0.5) + 0.5, void();
}

// public generated BounceInOutImpl New() :1609
void Easing__BounceInOutImpl__New1_fn(Easing__BounceInOutImpl** __retval)
{
    *__retval = Easing__BounceInOutImpl::New1();
}

// public generated BounceInOutImpl() [instance] :1609
void Easing__BounceInOutImpl::ctor_1()
{
    ctor_();
}

// public generated BounceInOutImpl New() [static] :1609
Easing__BounceInOutImpl* Easing__BounceInOutImpl::New1()
{
    Easing__BounceInOutImpl* obj1 = (Easing__BounceInOutImpl*)uNew(Easing__BounceInOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.BounceOutImpl :1583
// {
static void Easing__BounceOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__BounceOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__BounceOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.BounceOutImpl", options);
    type->fp_build_ = Easing__BounceOutImpl_build;
    type->fp_ctor_ = (void*)Easing__BounceOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__BounceOutImpl__Map_fn;
    return type;
}

// public generated BounceOutImpl() :1583
void Easing__BounceOutImpl__ctor_1_fn(Easing__BounceOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1585
void Easing__BounceOutImpl__Map_fn(Easing__BounceOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;

    if (k_ < 0.36363637447357178)
        return *__retval = (7.5625 * k_) * k_, void();
    else if (k_ < 0.72727274894714355)
    {
        k_ = k_ - 0.54545456171035767;
        return *__retval = ((7.5625 * k_) * k_) + 0.75, void();
    }
    else if (k_ < 0.90909093618392944)
    {
        k_ = k_ - 0.81818181276321411;
        return *__retval = ((7.5619997978210449 * k_) * k_) + 0.9375, void();
    }
    else
    {
        k_ = k_ - 0.95454543828964233;
        return *__retval = ((7.5625 * k_) * k_) + 0.984375, void();
    }
}

// public generated BounceOutImpl New() :1583
void Easing__BounceOutImpl__New1_fn(Easing__BounceOutImpl** __retval)
{
    *__retval = Easing__BounceOutImpl::New1();
}

// public generated BounceOutImpl() [instance] :1583
void Easing__BounceOutImpl::ctor_1()
{
    ctor_();
}

// public generated BounceOutImpl New() [static] :1583
Easing__BounceOutImpl* Easing__BounceOutImpl::New1()
{
    Easing__BounceOutImpl* obj1 = (Easing__BounceOutImpl*)uNew(Easing__BounceOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class Change<T> :487
// {
static void Change_build(uType* type)
{
    ::STRINGS[0] = uString::Const("target");
    ::STRINGS[4] = uString::Const("Unsupported change type: ");
    ::TYPES[8] = ::g::Uno::Type_typeof();
    ::TYPES[9] = ::g::Fuse::Animations::Converter_typeof();
    ::TYPES[10] = ::g::Fuse::Animations::ContinuousTrackChangeState_typeof();
    ::TYPES[11] = ::g::Fuse::Animations::DiscreteTrackChangeState_typeof();
    type->SetPrecalc(
        ::g::Fuse::Animations::Converter_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Animations::ContinuousTrackChangeState_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Animations::DiscreteTrackChangeState_typeof()->MakeType(type->T(0), NULL),
        type->T(0));
    type->SetFields(19,
        ::TYPES[9/*Fuse.Animations.Converter`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Animations::Change, ContinuousConverter), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Animations::Change, _Target), 0);
    type->Reflection.SetFunctions(20,
        new uFunction("get_DegreesX", NULL, (void*)Change__get_DegreesX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesX", NULL, (void*)Change__set_DegreesX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesXY", NULL, (void*)Change__get_DegreesXY_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_DegreesXY", NULL, (void*)Change__set_DegreesXY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_DegreesY", NULL, (void*)Change__get_DegreesY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesY", NULL, (void*)Change__set_DegreesY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesZ", NULL, (void*)Change__get_DegreesZ_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesZ", NULL, (void*)Change__set_DegreesZ_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", type, (void*)Change__New2_fn, 0, true, type, 1, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL)),
        new uFunction("get_Target", NULL, (void*)Change__get_Target_fn, 0, false, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), 0),
        new uFunction("get_Value", NULL, (void*)Change__get_Value_fn, 0, false, type->T(0), 0),
        new uFunction("set_Value", NULL, (void*)Change__set_Value_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_X", NULL, (void*)Change__get_X_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_X", NULL, (void*)Change__set_X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_XY", NULL, (void*)Change__get_XY_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_XY", NULL, (void*)Change__set_XY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Y", NULL, (void*)Change__get_Y_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Y", NULL, (void*)Change__set_Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Z", NULL, (void*)Change__get_Z_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Z", NULL, (void*)Change__set_Z_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Animations::Animator_type* Change_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimator_typeof();
    options.FieldCount = 21;
    options.GenericCount = 1;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(Change);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Change`1", options);
    type->fp_build_ = Change_build;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Change__CreateState_fn;
    return type;
}

// public Change(Uno.UX.Property<T> target) :515
void Change__ctor_3_fn(Change* __this, ::g::Uno::UX::Property1* target)
{
    __this->ctor_3(target);
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :549
void Change__CreateState_fn(Change* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Animations.ContinuousTrackChangeState<T>*/),
        __this->__type->Precalced(2/*Fuse.Animations.DiscreteTrackChangeState<T>*/),
    };

    if (__this->IsContinuous())
        return *__retval = (::g::Fuse::Animations::ContinuousTrackChangeState*)::g::Fuse::Animations::ContinuousTrackChangeState::New1(__types[0], __this, p), void();

    return *__retval = (::g::Fuse::Animations::DiscreteTrackChangeState*)::g::Fuse::Animations::DiscreteTrackChangeState::New1(__types[1], __this, p), void();
}

// public float get_DegreesX() :581
void Change__get_DegreesX_fn(Change* __this, float* __retval)
{
    *__retval = __this->DegreesX();
}

// public void set_DegreesX(float value) :582
void Change__set_DegreesX_fn(Change* __this, float* value)
{
    __this->DegreesX(*value);
}

// public float2 get_DegreesXY() :623
void Change__get_DegreesXY_fn(Change* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->DegreesXY();
}

// public void set_DegreesXY(float2 value) :624
void Change__set_DegreesXY_fn(Change* __this, ::g::Uno::Float2* value)
{
    __this->DegreesXY(*value);
}

// public float get_DegreesY() :595
void Change__get_DegreesY_fn(Change* __this, float* __retval)
{
    *__retval = __this->DegreesY();
}

// public void set_DegreesY(float value) :596
void Change__set_DegreesY_fn(Change* __this, float* value)
{
    __this->DegreesY(*value);
}

// public float get_DegreesZ() :609
void Change__get_DegreesZ_fn(Change* __this, float* __retval)
{
    *__retval = __this->DegreesZ();
}

// public void set_DegreesZ(float value) :610
void Change__set_DegreesZ_fn(Change* __this, float* value)
{
    __this->DegreesZ(*value);
}

// private bool get_IsContinuous() :558
void Change__get_IsContinuous_fn(Change* __this, bool* __retval)
{
    *__retval = __this->IsContinuous();
}

// public Change New(Uno.UX.Property<T> target) :515
void Change__New2_fn(uType* __type, ::g::Uno::UX::Property1* target, Change** __retval)
{
    *__retval = Change::New2(__type, target);
}

// public generated Uno.UX.Property<T> get_Target() :492
void Change__get_Target_fn(Change* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :492
void Change__set_Target_fn(Change* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// public T get_Value() :499
void Change__get_Value_fn(Change* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(3/*T*/),
    };
    uStackFrame __("Fuse.Animations.Change`1", "get_Value()");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store(__types[0], __this->IsContinuous() ? (uPtr(__this->ContinuousConverter)->Out_ex(uCRef(__this->_vectorValue), &ret3), (void*)ret3) : (void*)uUnboxAny(__types[0], __this->_objectValue)), void();
}

// public void set_Value(T value) :503
void Change__set_Value_fn(Change* __this, void* value)
{
    uStackFrame __("Fuse.Animations.Change`1", "set_Value(T)");
    ::g::Uno::Float4 ret4;

    if (__this->IsContinuous())
        __this->_vectorValue = (uPtr(__this->ContinuousConverter)->In_ex(value, &ret4), ret4);
    else
        __this->_objectValue = uBoxPtr(__this->__type->T(0), value);
}

// public float get_X() :574
void Change__get_X_fn(Change* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :575
void Change__set_X_fn(Change* __this, float* value)
{
    __this->X(*value);
}

// public float2 get_XY() :616
void Change__get_XY_fn(Change* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->XY();
}

// public void set_XY(float2 value) :617
void Change__set_XY_fn(Change* __this, ::g::Uno::Float2* value)
{
    __this->XY(*value);
}

// public float get_Y() :588
void Change__get_Y_fn(Change* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :589
void Change__set_Y_fn(Change* __this, float* value)
{
    __this->Y(*value);
}

// public float get_Z() :602
void Change__get_Z_fn(Change* __this, float* __retval)
{
    *__retval = __this->Z();
}

// public void set_Z(float value) :603
void Change__set_Z_fn(Change* __this, float* value)
{
    __this->Z(*value);
}

// public Change(Uno.UX.Property<T> target) [instance] :515
void Change::ctor_3(::g::Uno::UX::Property1* target)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.Converter<T>*/),
    };
    uStackFrame __("Fuse.Animations.Change`1", ".ctor(Uno.UX.Property<T>)");
    ctor_2();

    if (target == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"target"*/]));

    Target(target);

    if (IsContinuous())
    {
        uObject* v;

        if (::g::Uno::Type::op_Equality(__type->Precalced(3/*T*/), ::g::Uno::Float_typeof()))
            v = ::g::Fuse::Animations::ConverterFloat::Singleton();
        else if (::g::Uno::Type::op_Equality(__type->Precalced(3/*T*/), ::g::Uno::Float2_typeof()))
            v = ::g::Fuse::Animations::ConverterFloat2::Singleton();
        else if (::g::Uno::Type::op_Equality(__type->Precalced(3/*T*/), ::g::Uno::Float3_typeof()))
            v = ::g::Fuse::Animations::ConverterFloat3::Singleton();
        else if (::g::Uno::Type::op_Equality(__type->Precalced(3/*T*/), ::g::Uno::Float4_typeof()))
            v = ::g::Fuse::Animations::ConverterFloat4::Singleton();
        else if (::g::Uno::Type::op_Equality(__type->Precalced(3/*T*/), ::g::Uno::Double_typeof()))
            v = ::g::Fuse::Animations::ConverterDouble::Singleton();
        else if (::g::Uno::Type::op_Equality(__type->Precalced(3/*T*/), ::g::Uno::UX::Size_typeof()))
            v = ::g::Fuse::Animations::ConverterSize::Singleton();
        else if (::g::Uno::Type::op_Equality(__type->Precalced(3/*T*/), ::g::Uno::UX::Size2_typeof()))
            v = ::g::Fuse::Animations::ConverterSize2::Singleton();
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[4/*"Unsupported...*/], __type->Precalced(3/*T*/))));

        ContinuousConverter = uCast< ::g::Fuse::Animations::Converter*>(v, __types[0]);
    }
    else
    {
        Mixer = ::g::Fuse::Animations::Mixer::DefaultDiscrete();
        MarkDiscrete();
    }
}

// public float get_DegreesX() [instance] :581
float Change::DegreesX()
{
    return ::g::Uno::Math::RadiansToDegrees1(X());
}

// public void set_DegreesX(float value) [instance] :582
void Change::DegreesX(float value)
{
    X(::g::Uno::Math::DegreesToRadians1(value));
}

// public float2 get_DegreesXY() [instance] :623
::g::Uno::Float2 Change::DegreesXY()
{
    return ::g::Uno::Float2__New2(::g::Uno::Math::RadiansToDegrees1(X()), ::g::Uno::Math::RadiansToDegrees1(Y()));
}

// public void set_DegreesXY(float2 value) [instance] :624
void Change::DegreesXY(::g::Uno::Float2 value)
{
    XY(::g::Uno::Float2__New2(::g::Uno::Math::DegreesToRadians1(value.X), ::g::Uno::Math::DegreesToRadians1(value.Y)));
}

// public float get_DegreesY() [instance] :595
float Change::DegreesY()
{
    return ::g::Uno::Math::RadiansToDegrees1(Y());
}

// public void set_DegreesY(float value) [instance] :596
void Change::DegreesY(float value)
{
    Y(::g::Uno::Math::DegreesToRadians1(value));
}

// public float get_DegreesZ() [instance] :609
float Change::DegreesZ()
{
    return ::g::Uno::Math::RadiansToDegrees1(Y());
}

// public void set_DegreesZ(float value) [instance] :610
void Change::DegreesZ(float value)
{
    Y(::g::Uno::Math::DegreesToRadians1(value));
}

// private bool get_IsContinuous() [instance] :558
bool Change::IsContinuous()
{
    return (((((::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float_typeof()) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float2_typeof())) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float3_typeof())) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float4_typeof())) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Double_typeof())) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::UX::Size_typeof())) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::UX::Size2_typeof());
}

// public generated Uno.UX.Property<T> get_Target() [instance] :492
::g::Uno::UX::Property1* Change::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :492
void Change::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}

// public float get_X() [instance] :574
float Change::X()
{
    return _vectorValue.X;
}

// public void set_X(float value) [instance] :575
void Change::X(float value)
{
    _vectorValue.X = value;
}

// public float2 get_XY() [instance] :616
::g::Uno::Float2 Change::XY()
{
    ::g::Uno::Float4 ind1 = _vectorValue;
    return ::g::Uno::Float2__New2(ind1.X, ind1.Y);
}

// public void set_XY(float2 value) [instance] :617
void Change::XY(::g::Uno::Float2 value)
{
    _vectorValue = ::g::Uno::Float4__New6(value, _vectorValue.Z, _vectorValue.W);
}

// public float get_Y() [instance] :588
float Change::Y()
{
    return _vectorValue.Y;
}

// public void set_Y(float value) [instance] :589
void Change::Y(float value)
{
    _vectorValue.Y = value;
}

// public float get_Z() [instance] :602
float Change::Z()
{
    return _vectorValue.Z;
}

// public void set_Z(float value) [instance] :603
void Change::Z(float value)
{
    _vectorValue.Z = value;
}

// public Change New(Uno.UX.Property<T> target) [static] :515
Change* Change::New2(uType* __type, ::g::Uno::UX::Property1* target)
{
    Change* obj2 = (Change*)uNew(__type);
    obj2->ctor_3(target);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.CircularInImpl :1467
// {
static void Easing__CircularInImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__CircularInImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__CircularInImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.CircularInImpl", options);
    type->fp_build_ = Easing__CircularInImpl_build;
    type->fp_ctor_ = (void*)Easing__CircularInImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__CircularInImpl__Map_fn;
    return type;
}

// public generated CircularInImpl() :1467
void Easing__CircularInImpl__ctor_1_fn(Easing__CircularInImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1469
void Easing__CircularInImpl__Map_fn(Easing__CircularInImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = 1.0 - ::g::Uno::Math::Sqrt(1.0 - (k_ * k_)), void();
}

// public generated CircularInImpl New() :1467
void Easing__CircularInImpl__New1_fn(Easing__CircularInImpl** __retval)
{
    *__retval = Easing__CircularInImpl::New1();
}

// public generated CircularInImpl() [instance] :1467
void Easing__CircularInImpl::ctor_1()
{
    ctor_();
}

// public generated CircularInImpl New() [static] :1467
Easing__CircularInImpl* Easing__CircularInImpl::New1()
{
    Easing__CircularInImpl* obj1 = (Easing__CircularInImpl*)uNew(Easing__CircularInImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.CircularInOutImpl :1484
// {
static void Easing__CircularInOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__CircularInOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__CircularInOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.CircularInOutImpl", options);
    type->fp_build_ = Easing__CircularInOutImpl_build;
    type->fp_ctor_ = (void*)Easing__CircularInOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__CircularInOutImpl__Map_fn;
    return type;
}

// public generated CircularInOutImpl() :1484
void Easing__CircularInOutImpl__ctor_1_fn(Easing__CircularInOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1486
void Easing__CircularInOutImpl__Map_fn(Easing__CircularInOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    k_ = k_ * 2.0;

    if (k_ < 1.0)
        return *__retval = -0.5 * (::g::Uno::Math::Sqrt(1.0 - (k_ * k_)) - 1.0), void();

    k_ = k_ - 2.0;
    return *__retval = 0.5 * (::g::Uno::Math::Sqrt(1.0 - (k_ * k_)) + 1.0), void();
}

// public generated CircularInOutImpl New() :1484
void Easing__CircularInOutImpl__New1_fn(Easing__CircularInOutImpl** __retval)
{
    *__retval = Easing__CircularInOutImpl::New1();
}

// public generated CircularInOutImpl() [instance] :1484
void Easing__CircularInOutImpl::ctor_1()
{
    ctor_();
}

// public generated CircularInOutImpl New() [static] :1484
Easing__CircularInOutImpl* Easing__CircularInOutImpl::New1()
{
    Easing__CircularInOutImpl* obj1 = (Easing__CircularInOutImpl*)uNew(Easing__CircularInOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.CircularOutImpl :1475
// {
static void Easing__CircularOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__CircularOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__CircularOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.CircularOutImpl", options);
    type->fp_build_ = Easing__CircularOutImpl_build;
    type->fp_ctor_ = (void*)Easing__CircularOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__CircularOutImpl__Map_fn;
    return type;
}

// public generated CircularOutImpl() :1475
void Easing__CircularOutImpl__ctor_1_fn(Easing__CircularOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1477
void Easing__CircularOutImpl__Map_fn(Easing__CircularOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    k_ = k_ - 1.0;
    return *__retval = ::g::Uno::Math::Sqrt(1.0 - (k_ * k_)), void();
}

// public generated CircularOutImpl New() :1475
void Easing__CircularOutImpl__New1_fn(Easing__CircularOutImpl** __retval)
{
    *__retval = Easing__CircularOutImpl::New1();
}

// public generated CircularOutImpl() [instance] :1475
void Easing__CircularOutImpl::ctor_1()
{
    ctor_();
}

// public generated CircularOutImpl New() [static] :1475
Easing__CircularOutImpl* Easing__CircularOutImpl::New1()
{
    Easing__CircularOutImpl* obj1 = (Easing__CircularOutImpl*)uNew(Easing__CircularOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class ContinuousTrackChangeState<T> :661
// {
static void ContinuousTrackChangeState_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Invalid Seek");
    ::STRINGS[2] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno");
    ::TYPES[12] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[13] = ::g::Fuse::Animations::IMixerHandle_typeof();
    type->SetPrecalc(
        ::g::Fuse::Animations::IMixer_typeof()->MakeMethod(0/*Register<T>*/, type->T(0), NULL),
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0), NULL),
        type->T(0));
    type->SetFields(6,
        ::g::Fuse::Animations::Change_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Animations::ContinuousTrackChangeState, Animator1), 0,
        ::TYPES[13/*Fuse.Animations.IMixerHandle`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Animations::ContinuousTrackChangeState, mixHandle), 0);
}

::g::Fuse::Animations::TrackAnimatorState_type* ContinuousTrackChangeState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimatorState_typeof();
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(ContinuousTrackChangeState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.ContinuousTrackChangeState`1", options);
    type->fp_build_ = ContinuousTrackChangeState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Disable_fn;
    type->fp_SeekValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, ::g::Uno::Float4*, float*))ContinuousTrackChangeState__SeekValue_fn;
    return type;
}

// public ContinuousTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :666
void ContinuousTrackChangeState__ctor_2_fn(ContinuousTrackChangeState* __this, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :673
void ContinuousTrackChangeState__Disable_fn(ContinuousTrackChangeState* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Animations.IMixerHandle<T>*/),
    };
    uStackFrame __("Fuse.Animations.ContinuousTrackChangeState`1", "Disable()");

    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), __types[0]));
    __this->mixHandle = NULL;
}

// public ContinuousTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :666
void ContinuousTrackChangeState__New1_fn(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p, ContinuousTrackChangeState** __retval)
{
    *__retval = ContinuousTrackChangeState::New1(__type, animator, p);
}

// protected override sealed void SeekValue(float4 value, float strength) :682
void ContinuousTrackChangeState__SeekValue_fn(ContinuousTrackChangeState* __this, ::g::Uno::Float4* value, float* strength)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*T*/),
        __this->__type->Precalced(1/*Fuse.Animations.IMixerHandle<T>*/),
    };
    uStackFrame __("Fuse.Animations.ContinuousTrackChangeState`1", "SeekValue(float4,float)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Uno::Float4 value_ = *value;
    float strength_ = *strength;

    if (__this->mixHandle == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[5/*"Invalid Seek"*/], 1, ::STRINGS[2/*"/Users/most...*/], 686);
        return;
    }

    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), __types[1]), (uPtr((::g::Fuse::Animations::Converter*)uPtr(__this->Animator1)->ContinuousConverter)->Out_ex(uCRef(value_), &ret2), ret2), uCRef(strength_));
}

// public ContinuousTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [instance] :666
void ContinuousTrackChangeState::ctor_2(::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.IMixer.Register<T>*/),
    };
    uStackFrame __("Fuse.Animations.ContinuousTrackChangeState`1", ".ctor(Fuse.Animations.Change<T>,Fuse.Animations.CreateStateParams)");
    ctor_1(animator, p, NULL);
    Animator1 = animator;
    mixHandle = ((uObject*)::g::Fuse::Animations::IMixer::Register(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[12/*Fuse.Animations.IMixer*/]), __types[0], (::g::Uno::UX::Property1*)uPtr(Animator1)->Target(), uPtr(Animator1)->MixOp()));
}

// public ContinuousTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [static] :666
ContinuousTrackChangeState* ContinuousTrackChangeState::New1(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState* obj1 = (ContinuousTrackChangeState*)uNew(__type);
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal abstract interface ContinuousTrackProvider :3119
// {
uInterfaceType* ContinuousTrackProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.ContinuousTrackProvider", 0, 0);
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal abstract class Converter<T> :693
// {
static void Converter_build(uType* type)
{
}

Converter_type* Converter_typeof()
{
    static uSStrong<Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Converter);
    options.TypeSize = sizeof(Converter_type);
    type = (Converter_type*)uClassType::New("Fuse.Animations.Converter`1", options);
    type->fp_build_ = Converter_build;
    return type;
}

// protected generated Converter() :693
void Converter__ctor__fn(Converter* __this)
{
    __this->ctor_();
}

// protected generated Converter() [instance] :693
void Converter::ctor_()
{
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class ConverterDouble :742
// {
// static ConverterDouble() :742
static void ConverterDouble__cctor__fn(uType* __type)
{
    ConverterDouble::Singleton_ = ConverterDouble::New1();
}

static void ConverterDouble_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Double_typeof(), NULL));
    type->SetFields(0,
        type, (uintptr_t)&::g::Fuse::Animations::ConverterDouble::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterDouble_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Converter_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterDouble);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterDouble", options);
    type->fp_build_ = ConverterDouble_build;
    type->fp_ctor_ = (void*)ConverterDouble__New1_fn;
    type->fp_cctor_ = ConverterDouble__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterDouble__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterDouble__Out_fn;
    return type;
}

// public generated ConverterDouble() :742
void ConverterDouble__ctor_1_fn(ConverterDouble* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(double value) :746
void ConverterDouble__In_fn(ConverterDouble* __this, double* value, ::g::Uno::Float4* __retval)
{
    double value_ = *value;
    return *__retval = ::g::Uno::Float4__New2((float)value_, 0.0f, 0.0f, 0.0f), void();
}

// public generated ConverterDouble New() :742
void ConverterDouble__New1_fn(ConverterDouble** __retval)
{
    *__retval = ConverterDouble::New1();
}

// public override sealed double Out(float4 value) :745
void ConverterDouble__Out_fn(ConverterDouble* __this, ::g::Uno::Float4* value, double* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = (double)value_.X, void();
}

uSStrong<ConverterDouble*> ConverterDouble::Singleton_;

// public generated ConverterDouble() [instance] :742
void ConverterDouble::ctor_1()
{
    ctor_();
}

// public generated ConverterDouble New() [static] :742
ConverterDouble* ConverterDouble::New1()
{
    ConverterDouble* obj1 = (ConverterDouble*)uNew(ConverterDouble_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class ConverterFloat :699
// {
// static ConverterFloat() :699
static void ConverterFloat__cctor__fn(uType* __type)
{
    ConverterFloat::Singleton_ = ConverterFloat::New1();
}

static void ConverterFloat_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(0,
        type, (uintptr_t)&::g::Fuse::Animations::ConverterFloat::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterFloat_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Converter_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat", options);
    type->fp_build_ = ConverterFloat_build;
    type->fp_ctor_ = (void*)ConverterFloat__New1_fn;
    type->fp_cctor_ = ConverterFloat__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat__Out_fn;
    return type;
}

// public generated ConverterFloat() :699
void ConverterFloat__ctor_1_fn(ConverterFloat* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float value) :703
void ConverterFloat__In_fn(ConverterFloat* __this, float* value, ::g::Uno::Float4* __retval)
{
    float value_ = *value;
    return *__retval = ::g::Uno::Float4__New2(value_, 0.0f, 0.0f, 0.0f), void();
}

// public generated ConverterFloat New() :699
void ConverterFloat__New1_fn(ConverterFloat** __retval)
{
    *__retval = ConverterFloat::New1();
}

// public override sealed float Out(float4 value) :702
void ConverterFloat__Out_fn(ConverterFloat* __this, ::g::Uno::Float4* value, float* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = value_.X, void();
}

uSStrong<ConverterFloat*> ConverterFloat::Singleton_;

// public generated ConverterFloat() [instance] :699
void ConverterFloat::ctor_1()
{
    ctor_();
}

// public generated ConverterFloat New() [static] :699
ConverterFloat* ConverterFloat::New1()
{
    ConverterFloat* obj1 = (ConverterFloat*)uNew(ConverterFloat_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class ConverterFloat2 :721
// {
// static ConverterFloat2() :721
static void ConverterFloat2__cctor__fn(uType* __type)
{
    ConverterFloat2::Singleton_ = ConverterFloat2::New1();
}

static void ConverterFloat2_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL));
    type->SetFields(0,
        type, (uintptr_t)&::g::Fuse::Animations::ConverterFloat2::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterFloat2_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Converter_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat2);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat2", options);
    type->fp_build_ = ConverterFloat2_build;
    type->fp_ctor_ = (void*)ConverterFloat2__New1_fn;
    type->fp_cctor_ = ConverterFloat2__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat2__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat2__Out_fn;
    return type;
}

// public generated ConverterFloat2() :721
void ConverterFloat2__ctor_1_fn(ConverterFloat2* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float2 value) :725
void ConverterFloat2__In_fn(ConverterFloat2* __this, ::g::Uno::Float2* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float2 value_ = *value;
    return *__retval = ::g::Uno::Float4__New6(value_, 0.0f, 0.0f), void();
}

// public generated ConverterFloat2 New() :721
void ConverterFloat2__New1_fn(ConverterFloat2** __retval)
{
    *__retval = ConverterFloat2::New1();
}

// public override sealed float2 Out(float4 value) :724
void ConverterFloat2__Out_fn(ConverterFloat2* __this, ::g::Uno::Float4* value, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::Float2__New2(value_.X, value_.Y), void();
}

uSStrong<ConverterFloat2*> ConverterFloat2::Singleton_;

// public generated ConverterFloat2() [instance] :721
void ConverterFloat2::ctor_1()
{
    ctor_();
}

// public generated ConverterFloat2 New() [static] :721
ConverterFloat2* ConverterFloat2::New1()
{
    ConverterFloat2* obj1 = (ConverterFloat2*)uNew(ConverterFloat2_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class ConverterFloat3 :728
// {
// static ConverterFloat3() :728
static void ConverterFloat3__cctor__fn(uType* __type)
{
    ConverterFloat3::Singleton_ = ConverterFloat3::New1();
}

static void ConverterFloat3_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float3_typeof(), NULL));
    type->SetFields(0,
        type, (uintptr_t)&::g::Fuse::Animations::ConverterFloat3::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterFloat3_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Converter_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat3);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat3", options);
    type->fp_build_ = ConverterFloat3_build;
    type->fp_ctor_ = (void*)ConverterFloat3__New1_fn;
    type->fp_cctor_ = ConverterFloat3__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat3__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat3__Out_fn;
    return type;
}

// public generated ConverterFloat3() :728
void ConverterFloat3__ctor_1_fn(ConverterFloat3* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float3 value) :732
void ConverterFloat3__In_fn(ConverterFloat3* __this, ::g::Uno::Float3* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float3 value_ = *value;
    return *__retval = ::g::Uno::Float4__New8(value_, 0.0f), void();
}

// public generated ConverterFloat3 New() :728
void ConverterFloat3__New1_fn(ConverterFloat3** __retval)
{
    *__retval = ConverterFloat3::New1();
}

// public override sealed float3 Out(float4 value) :731
void ConverterFloat3__Out_fn(ConverterFloat3* __this, ::g::Uno::Float4* value, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z), void();
}

uSStrong<ConverterFloat3*> ConverterFloat3::Singleton_;

// public generated ConverterFloat3() [instance] :728
void ConverterFloat3::ctor_1()
{
    ctor_();
}

// public generated ConverterFloat3 New() [static] :728
ConverterFloat3* ConverterFloat3::New1()
{
    ConverterFloat3* obj1 = (ConverterFloat3*)uNew(ConverterFloat3_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class ConverterFloat4 :735
// {
// static ConverterFloat4() :735
static void ConverterFloat4__cctor__fn(uType* __type)
{
    ConverterFloat4::Singleton_ = ConverterFloat4::New1();
}

static void ConverterFloat4_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(0,
        type, (uintptr_t)&::g::Fuse::Animations::ConverterFloat4::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterFloat4_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Converter_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat4);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat4", options);
    type->fp_build_ = ConverterFloat4_build;
    type->fp_ctor_ = (void*)ConverterFloat4__New1_fn;
    type->fp_cctor_ = ConverterFloat4__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat4__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat4__Out_fn;
    return type;
}

// public generated ConverterFloat4() :735
void ConverterFloat4__ctor_1_fn(ConverterFloat4* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float4 value) :739
void ConverterFloat4__In_fn(ConverterFloat4* __this, ::g::Uno::Float4* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = value_, void();
}

// public generated ConverterFloat4 New() :735
void ConverterFloat4__New1_fn(ConverterFloat4** __retval)
{
    *__retval = ConverterFloat4::New1();
}

// public override sealed float4 Out(float4 value) :738
void ConverterFloat4__Out_fn(ConverterFloat4* __this, ::g::Uno::Float4* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = value_, void();
}

uSStrong<ConverterFloat4*> ConverterFloat4::Singleton_;

// public generated ConverterFloat4() [instance] :735
void ConverterFloat4::ctor_1()
{
    ctor_();
}

// public generated ConverterFloat4 New() [static] :735
ConverterFloat4* ConverterFloat4::New1()
{
    ConverterFloat4* obj1 = (ConverterFloat4*)uNew(ConverterFloat4_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class ConverterSize :706
// {
// static ConverterSize() :706
static void ConverterSize__cctor__fn(uType* __type)
{
    ConverterSize::Singleton_ = ConverterSize::New1();
}

static void ConverterSize_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL));
    type->SetFields(0,
        type, (uintptr_t)&::g::Fuse::Animations::ConverterSize::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterSize_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Converter_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterSize);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterSize", options);
    type->fp_build_ = ConverterSize_build;
    type->fp_ctor_ = (void*)ConverterSize__New1_fn;
    type->fp_cctor_ = ConverterSize__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterSize__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterSize__Out_fn;
    return type;
}

// public generated ConverterSize() :706
void ConverterSize__ctor_1_fn(ConverterSize* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(Uno.UX.Size value) :710
void ConverterSize__In_fn(ConverterSize* __this, ::g::Uno::UX::Size* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::UX::Size value_ = *value;
    return *__retval = ::g::Uno::Float4__New2(value_.Value, 0.0f, 0.0f, 0.0f), void();
}

// public generated ConverterSize New() :706
void ConverterSize__New1_fn(ConverterSize** __retval)
{
    *__retval = ConverterSize::New1();
}

// public override sealed Uno.UX.Size Out(float4 value) :709
void ConverterSize__Out_fn(ConverterSize* __this, ::g::Uno::Float4* value, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::UX::Size__op_Implicit(value_.X), void();
}

uSStrong<ConverterSize*> ConverterSize::Singleton_;

// public generated ConverterSize() [instance] :706
void ConverterSize::ctor_1()
{
    ctor_();
}

// public generated ConverterSize New() [static] :706
ConverterSize* ConverterSize::New1()
{
    ConverterSize* obj1 = (ConverterSize*)uNew(ConverterSize_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class ConverterSize2 :713
// {
// static ConverterSize2() :713
static void ConverterSize2__cctor__fn(uType* __type)
{
    ConverterSize2::Singleton_ = ConverterSize2::New1();
}

static void ConverterSize2_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::UX::Size2_typeof(), NULL));
    type->SetFields(0,
        type, (uintptr_t)&::g::Fuse::Animations::ConverterSize2::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterSize2_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Converter_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterSize2);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterSize2", options);
    type->fp_build_ = ConverterSize2_build;
    type->fp_ctor_ = (void*)ConverterSize2__New1_fn;
    type->fp_cctor_ = ConverterSize2__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterSize2__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterSize2__Out_fn;
    return type;
}

// public generated ConverterSize2() :713
void ConverterSize2__ctor_1_fn(ConverterSize2* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(Uno.UX.Size2 value) :717
void ConverterSize2__In_fn(ConverterSize2* __this, ::g::Uno::UX::Size2* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::UX::Size2 value_ = *value;
    return *__retval = ::g::Uno::Float4__New2(::g::Uno::UX::Size__op_Explicit(value_.X), ::g::Uno::UX::Size__op_Explicit(value_.Y), 0.0f, 0.0f), void();
}

// public generated ConverterSize2 New() :713
void ConverterSize2__New1_fn(ConverterSize2** __retval)
{
    *__retval = ConverterSize2::New1();
}

// public override sealed Uno.UX.Size2 Out(float4 value) :716
void ConverterSize2__Out_fn(ConverterSize2* __this, ::g::Uno::Float4* value, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::UX::Size2__op_Implicit1(::g::Uno::Float2__New2(value_.X, value_.Y)), void();
}

uSStrong<ConverterSize2*> ConverterSize2::Singleton_;

// public generated ConverterSize2() [instance] :713
void ConverterSize2::ctor_1()
{
    ctor_();
}

// public generated ConverterSize2 New() [static] :713
ConverterSize2* ConverterSize2::New1()
{
    ConverterSize2* obj1 = (ConverterSize2*)uNew(ConverterSize2_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class CreateStateParams :103
// {
static void CreateStateParams_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::CreateStateParams, Attached), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::CreateStateParams, TotalDuration), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Animations::CreateStateParams, Variant), 0);
}

uType* CreateStateParams_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(CreateStateParams);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.CreateStateParams", options);
    type->fp_build_ = CreateStateParams_build;
    type->fp_ctor_ = (void*)CreateStateParams__New1_fn;
    return type;
}

// public generated CreateStateParams() :103
void CreateStateParams__ctor__fn(CreateStateParams* __this)
{
    __this->ctor_();
}

// public generated CreateStateParams New() :103
void CreateStateParams__New1_fn(CreateStateParams** __retval)
{
    *__retval = CreateStateParams::New1();
}

// public generated CreateStateParams() [instance] :103
void CreateStateParams::ctor_()
{
}

// public generated CreateStateParams New() [static] :103
CreateStateParams* CreateStateParams::New1()
{
    CreateStateParams* obj1 = (CreateStateParams*)uNew(CreateStateParams_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// public sealed class CubicBezierEasing :1670
// {
static void CubicBezierEasing_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::CubicBezierEasing, _C1X), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::CubicBezierEasing, _C1Y), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::CubicBezierEasing, _C2X), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::CubicBezierEasing, _C2Y), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_C1X", NULL, (void*)CubicBezierEasing__get_C1X_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_C1X", NULL, (void*)CubicBezierEasing__set_C1X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_C1Y", NULL, (void*)CubicBezierEasing__get_C1Y_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_C1Y", NULL, (void*)CubicBezierEasing__set_C1Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_C2X", NULL, (void*)CubicBezierEasing__get_C2X_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_C2X", NULL, (void*)CubicBezierEasing__set_C2X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_C2Y", NULL, (void*)CubicBezierEasing__get_C2Y_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_C2Y", NULL, (void*)CubicBezierEasing__set_C2Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_ControlPoints", NULL, (void*)CubicBezierEasing__get_ControlPoints_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_ControlPoints", NULL, (void*)CubicBezierEasing__set_ControlPoints_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction(".ctor", NULL, (void*)CubicBezierEasing__New1_fn, 0, true, type, 0));
}

::g::Fuse::Animations::Easing_type* CubicBezierEasing_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(CubicBezierEasing);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.CubicBezierEasing", options);
    type->fp_build_ = CubicBezierEasing_build;
    type->fp_ctor_ = (void*)CubicBezierEasing__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))CubicBezierEasing__Map_fn;
    return type;
}

// public generated CubicBezierEasing() :1670
void CubicBezierEasing__ctor_1_fn(CubicBezierEasing* __this)
{
    __this->ctor_1();
}

// public generated double get_C1X() :1677
void CubicBezierEasing__get_C1X_fn(CubicBezierEasing* __this, double* __retval)
{
    *__retval = __this->C1X();
}

// public generated void set_C1X(double value) :1677
void CubicBezierEasing__set_C1X_fn(CubicBezierEasing* __this, double* value)
{
    __this->C1X(*value);
}

// public generated double get_C1Y() :1678
void CubicBezierEasing__get_C1Y_fn(CubicBezierEasing* __this, double* __retval)
{
    *__retval = __this->C1Y();
}

// public generated void set_C1Y(double value) :1678
void CubicBezierEasing__set_C1Y_fn(CubicBezierEasing* __this, double* value)
{
    __this->C1Y(*value);
}

// public generated double get_C2X() :1679
void CubicBezierEasing__get_C2X_fn(CubicBezierEasing* __this, double* __retval)
{
    *__retval = __this->C2X();
}

// public generated void set_C2X(double value) :1679
void CubicBezierEasing__set_C2X_fn(CubicBezierEasing* __this, double* value)
{
    __this->C2X(*value);
}

// public generated double get_C2Y() :1680
void CubicBezierEasing__get_C2Y_fn(CubicBezierEasing* __this, double* __retval)
{
    *__retval = __this->C2Y();
}

// public generated void set_C2Y(double value) :1680
void CubicBezierEasing__set_C2Y_fn(CubicBezierEasing* __this, double* value)
{
    __this->C2Y(*value);
}

// public float4 get_ControlPoints() :1684
void CubicBezierEasing__get_ControlPoints_fn(CubicBezierEasing* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->ControlPoints();
}

// public void set_ControlPoints(float4 value) :1685
void CubicBezierEasing__set_ControlPoints_fn(CubicBezierEasing* __this, ::g::Uno::Float4* value)
{
    __this->ControlPoints(*value);
}

// public override sealed double Map(double p) :1688
void CubicBezierEasing__Map_fn(CubicBezierEasing* __this, double* p, double* __retval)
{
    double p_ = *p;
    double a = ((1.0 - (3.0 * __this->C2X())) + (3.0 * __this->C1X())) - 0.0;
    double b = (3.0 * __this->C2X()) - (6.0 * __this->C1X());
    double c = (3.0 * __this->C1X()) - 0.0;
    double d = 0.0;
    double e = ((1.0 - (3.0 * __this->C2Y())) + (3.0 * __this->C1Y())) - 0.0;
    double f = (3.0 * __this->C2Y()) - (6.0 * __this->C1Y());
    double g = (3.0 * __this->C1Y()) - 0.0;
    double h = 0.0;
    double t = p_;

    for (int i = 0; i < 5; i++)
    {
        double x = (((a * ((t * t) * t)) + (b * (t * t))) + (c * t)) + d;
        double q = ((((3.0 * a) * t) * t) + ((2.0 * b) * t)) + c;

        if (::g::Uno::Math::Abs(q) < 1e-06)
            break;

        double s = 1.0 / q;
        t = t - ((x - p_) * s);
        t = ::g::Uno::Math::Clamp(t, 0.0, 1.0);
    }

    return *__retval = (((e * ((t * t) * t)) + (f * (t * t))) + (g * t)) + h, void();
}

// public generated CubicBezierEasing New() :1670
void CubicBezierEasing__New1_fn(CubicBezierEasing** __retval)
{
    *__retval = CubicBezierEasing::New1();
}

// public generated CubicBezierEasing() [instance] :1670
void CubicBezierEasing::ctor_1()
{
    ctor_();
}

// public generated double get_C1X() [instance] :1677
double CubicBezierEasing::C1X()
{
    return _C1X;
}

// public generated void set_C1X(double value) [instance] :1677
void CubicBezierEasing::C1X(double value)
{
    _C1X = value;
}

// public generated double get_C1Y() [instance] :1678
double CubicBezierEasing::C1Y()
{
    return _C1Y;
}

// public generated void set_C1Y(double value) [instance] :1678
void CubicBezierEasing::C1Y(double value)
{
    _C1Y = value;
}

// public generated double get_C2X() [instance] :1679
double CubicBezierEasing::C2X()
{
    return _C2X;
}

// public generated void set_C2X(double value) [instance] :1679
void CubicBezierEasing::C2X(double value)
{
    _C2X = value;
}

// public generated double get_C2Y() [instance] :1680
double CubicBezierEasing::C2Y()
{
    return _C2Y;
}

// public generated void set_C2Y(double value) [instance] :1680
void CubicBezierEasing::C2Y(double value)
{
    _C2Y = value;
}

// public float4 get_ControlPoints() [instance] :1684
::g::Uno::Float4 CubicBezierEasing::ControlPoints()
{
    return ::g::Uno::Float4__New2((float)C1X(), (float)C1Y(), (float)C2X(), (float)C2Y());
}

// public void set_ControlPoints(float4 value) [instance] :1685
void CubicBezierEasing::ControlPoints(::g::Uno::Float4 value)
{
    C1X((double)value.X);
    C1Y((double)value.Y);
    C2X((double)value.Z);
    C2Y((double)value.W);
}

// public generated CubicBezierEasing New() [static] :1670
CubicBezierEasing* CubicBezierEasing::New1()
{
    CubicBezierEasing* obj1 = (CubicBezierEasing*)uNew(CubicBezierEasing_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.CubicInImpl :1320
// {
static void Easing__CubicInImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__CubicInImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__CubicInImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.CubicInImpl", options);
    type->fp_build_ = Easing__CubicInImpl_build;
    type->fp_ctor_ = (void*)Easing__CubicInImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__CubicInImpl__Map_fn;
    return type;
}

// public generated CubicInImpl() :1320
void Easing__CubicInImpl__ctor_1_fn(Easing__CubicInImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1322
void Easing__CubicInImpl__Map_fn(Easing__CubicInImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = (k_ * k_) * k_, void();
}

// public generated CubicInImpl New() :1320
void Easing__CubicInImpl__New1_fn(Easing__CubicInImpl** __retval)
{
    *__retval = Easing__CubicInImpl::New1();
}

// public generated CubicInImpl() [instance] :1320
void Easing__CubicInImpl::ctor_1()
{
    ctor_();
}

// public generated CubicInImpl New() [static] :1320
Easing__CubicInImpl* Easing__CubicInImpl::New1()
{
    Easing__CubicInImpl* obj1 = (Easing__CubicInImpl*)uNew(Easing__CubicInImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.CubicInOutImpl :1337
// {
static void Easing__CubicInOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__CubicInOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__CubicInOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.CubicInOutImpl", options);
    type->fp_build_ = Easing__CubicInOutImpl_build;
    type->fp_ctor_ = (void*)Easing__CubicInOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__CubicInOutImpl__Map_fn;
    return type;
}

// public generated CubicInOutImpl() :1337
void Easing__CubicInOutImpl__ctor_1_fn(Easing__CubicInOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1339
void Easing__CubicInOutImpl__Map_fn(Easing__CubicInOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    k_ = k_ * 2.0;

    if (k_ < 1.0)
        return *__retval = ((0.5 * k_) * k_) * k_, void();

    k_ = k_ - 2.0;
    return *__retval = 0.5 * (((k_ * k_) * k_) + 2.0), void();
}

// public generated CubicInOutImpl New() :1337
void Easing__CubicInOutImpl__New1_fn(Easing__CubicInOutImpl** __retval)
{
    *__retval = Easing__CubicInOutImpl::New1();
}

// public generated CubicInOutImpl() [instance] :1337
void Easing__CubicInOutImpl::ctor_1()
{
    ctor_();
}

// public generated CubicInOutImpl New() [static] :1337
Easing__CubicInOutImpl* Easing__CubicInOutImpl::New1()
{
    Easing__CubicInOutImpl* obj1 = (Easing__CubicInOutImpl*)uNew(Easing__CubicInOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.CubicOutImpl :1328
// {
static void Easing__CubicOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__CubicOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__CubicOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.CubicOutImpl", options);
    type->fp_build_ = Easing__CubicOutImpl_build;
    type->fp_ctor_ = (void*)Easing__CubicOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__CubicOutImpl__Map_fn;
    return type;
}

// public generated CubicOutImpl() :1328
void Easing__CubicOutImpl__ctor_1_fn(Easing__CubicOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1330
void Easing__CubicOutImpl__Map_fn(Easing__CubicOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    k_ = k_ - 1.0;
    return *__retval = ((k_ * k_) * k_) + 1.0, void();
}

// public generated CubicOutImpl New() :1328
void Easing__CubicOutImpl__New1_fn(Easing__CubicOutImpl** __retval)
{
    *__retval = Easing__CubicOutImpl::New1();
}

// public generated CubicOutImpl() [instance] :1328
void Easing__CubicOutImpl::ctor_1()
{
    ctor_();
}

// public generated CubicOutImpl New() [static] :1328
Easing__CubicOutImpl* Easing__CubicOutImpl::New1()
{
    Easing__CubicOutImpl* obj1 = (Easing__CubicOutImpl*)uNew(Easing__CubicOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class Cycle<T> :797
// {
static void Cycle_build(uType* type)
{
    ::STRINGS[6] = uString::Const("Target");
    ::TYPES[5] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[14] = ::g::Fuse::Animations::CycleState_typeof();
    type->SetPrecalc(
        type->T(0),
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(0/*Get<T>*/, type->T(0), NULL),
        ::g::Fuse::Animations::CycleState_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(6,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Cycle, _backFrequency), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Animations::Cycle, _easing), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Cycle, _frequency), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Cycle, _hasBackFrequency), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Cycle, _hasProgressOffset), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::Cycle, _progressOffset), 0,
        ::g::Fuse::Animations::CycleWaveform_typeof(), offsetof(::g::Fuse::Animations::Cycle, _waveform), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::Cycle, _High), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::Cycle, _Low), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Animations::Cycle, _Target), 0);
    type->Reflection.SetFunctions(18,
        new uFunction("get_Base", NULL, (void*)Cycle__get_Base_fn, 0, false, type->T(0), 0),
        new uFunction("set_Base", NULL, (void*)Cycle__set_Base_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_Easing", NULL, (void*)Cycle__get_Easing_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_Easing", NULL, (void*)Cycle__set_Easing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("get_Frequency", NULL, (void*)Cycle__get_Frequency_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Frequency", NULL, (void*)Cycle__set_Frequency_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_FrequencyBack", NULL, (void*)Cycle__get_FrequencyBack_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_FrequencyBack", NULL, (void*)Cycle__set_FrequencyBack_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_High", NULL, (void*)Cycle__get_High_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_High", NULL, (void*)Cycle__set_High_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Low", NULL, (void*)Cycle__get_Low_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Low", NULL, (void*)Cycle__set_Low_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", type, (void*)Cycle__New2_fn, 0, true, type, 1, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL)),
        new uFunction("get_ProgressOffset", NULL, (void*)Cycle__get_ProgressOffset_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ProgressOffset", NULL, (void*)Cycle__set_ProgressOffset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Target", NULL, (void*)Cycle__get_Target_fn, 0, false, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), 0),
        new uFunction("get_Waveform", NULL, (void*)Cycle__get_Waveform_fn, 0, false, ::g::Fuse::Animations::CycleWaveform_typeof(), 0),
        new uFunction("set_Waveform", NULL, (void*)Cycle__set_Waveform_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::CycleWaveform_typeof()));
}

::g::Fuse::Animations::Animator_type* Cycle_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::OpenAnimator_typeof();
    options.FieldCount = 17;
    options.GenericCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(Cycle);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Cycle`1", options);
    type->fp_build_ = Cycle_build;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Cycle__CreateState_fn;
    return type;
}

// public Cycle(Uno.UX.Property<T> Target) :812
void Cycle__ctor_3_fn(Cycle* __this, ::g::Uno::UX::Property1* Target1)
{
    __this->ctor_3(Target1);
}

// public generated T get_Base() :809
void Cycle__get_Base_fn(Cycle* __this, uTRef __retval)
{
    return __retval.Store(__this->_Base()), void();
}

// public generated void set_Base(T value) :809
void Cycle__set_Base_fn(Cycle* __this, void* value)
{
    __this->_Base() = value;
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :850
void Cycle__CreateState_fn(Cycle* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Fuse.Animations.CycleState<T>*/),
    };
    return *__retval = (::g::Fuse::Animations::CycleState*)::g::Fuse::Animations::CycleState::New1(__types[0], __this, p), void();
}

// public Fuse.Animations.Easing get_Easing() :916
void Cycle__get_Easing_fn(Cycle* __this, ::g::Fuse::Animations::Easing** __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :917
void Cycle__set_Easing_fn(Cycle* __this, ::g::Fuse::Animations::Easing* value)
{
    __this->Easing(value);
}

// public double get_Frequency() :825
void Cycle__get_Frequency_fn(Cycle* __this, double* __retval)
{
    *__retval = __this->Frequency();
}

// public void set_Frequency(double value) :826
void Cycle__set_Frequency_fn(Cycle* __this, double* value)
{
    __this->Frequency(*value);
}

// public double get_FrequencyBack() :834
void Cycle__get_FrequencyBack_fn(Cycle* __this, double* __retval)
{
    *__retval = __this->FrequencyBack();
}

// public void set_FrequencyBack(double value) :835
void Cycle__set_FrequencyBack_fn(Cycle* __this, double* value)
{
    __this->FrequencyBack(*value);
}

// public generated float get_High() :804
void Cycle__get_High_fn(Cycle* __this, float* __retval)
{
    *__retval = __this->High();
}

// public generated void set_High(float value) :804
void Cycle__set_High_fn(Cycle* __this, float* value)
{
    __this->High(*value);
}

// private bool get_IsOneCrossing() :862
void Cycle__get_IsOneCrossing_fn(Cycle* __this, bool* __retval)
{
    *__retval = __this->IsOneCrossing();
}

// private bool get_IsZeroCrossing() :857
void Cycle__get_IsZeroCrossing_fn(Cycle* __this, bool* __retval)
{
    *__retval = __this->IsZeroCrossing();
}

// public generated float get_Low() :802
void Cycle__get_Low_fn(Cycle* __this, float* __retval)
{
    *__retval = __this->Low();
}

// public generated void set_Low(float value) :802
void Cycle__set_Low_fn(Cycle* __this, float* value)
{
    __this->Low(*value);
}

// public Cycle New(Uno.UX.Property<T> Target) :812
void Cycle__New2_fn(uType* __type, ::g::Uno::UX::Property1* Target1, Cycle** __retval)
{
    *__retval = Cycle::New2(__type, Target1);
}

// public float get_ProgressOffset() :899
void Cycle__get_ProgressOffset_fn(Cycle* __this, float* __retval)
{
    *__retval = __this->ProgressOffset();
}

// public void set_ProgressOffset(float value) :900
void Cycle__set_ProgressOffset_fn(Cycle* __this, float* value)
{
    __this->ProgressOffset(*value);
}

// private double get_RestProgress() :870
void Cycle__get_RestProgress_fn(Cycle* __this, double* __retval)
{
    *__retval = __this->RestProgress();
}

// public generated Uno.UX.Property<T> get_Target() :800
void Cycle__get_Target_fn(Cycle* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :800
void Cycle__set_Target_fn(Cycle* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// public Fuse.Animations.CycleWaveform get_Waveform() :846
void Cycle__get_Waveform_fn(Cycle* __this, int* __retval)
{
    *__retval = __this->Waveform();
}

// public void set_Waveform(Fuse.Animations.CycleWaveform value) :847
void Cycle__set_Waveform_fn(Cycle* __this, int* value)
{
    __this->Waveform(*value);
}

// internal double WaveformFunc(double i, double offset) :923
void Cycle__WaveformFunc_fn(Cycle* __this, double* i, double* offset, double* __retval)
{
    *__retval = __this->WaveformFunc(*i, *offset);
}

// public Cycle(Uno.UX.Property<T> Target) [instance] :812
void Cycle::ctor_3(::g::Uno::UX::Property1* Target1)
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
        __type->Precalced(1/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    uStackFrame __("Fuse.Animations.Cycle`1", ".ctor(Uno.UX.Property<T>)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    _frequency = 1.0;
    _progressOffset = 0.0f;
    ctor_2();

    if (Target1 == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[6/*"Target"*/]));

    Target(Target1);
    ::g::Fuse::Internal::Blender* blender = (::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[1]);
    Cycle__set_Base_fn(this, (uPtr(blender)->get_One_ex(&ret2), ret2));
}

// public Fuse.Animations.Easing get_Easing() [instance] :916
::g::Fuse::Animations::Easing* Cycle::Easing()
{
    return _easing;
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :917
void Cycle::Easing(::g::Fuse::Animations::Easing* value)
{
    _easing = value;
}

// public double get_Frequency() [instance] :825
double Cycle::Frequency()
{
    return _frequency;
}

// public void set_Frequency(double value) [instance] :826
void Cycle::Frequency(double value)
{
    _frequency = value;
}

// public double get_FrequencyBack() [instance] :834
double Cycle::FrequencyBack()
{
    return _hasBackFrequency ? _backFrequency : Frequency();
}

// public void set_FrequencyBack(double value) [instance] :835
void Cycle::FrequencyBack(double value)
{
    _backFrequency = value;
    _hasBackFrequency = true;
}

// public generated float get_High() [instance] :804
float Cycle::High()
{
    return _High;
}

// public generated void set_High(float value) [instance] :804
void Cycle::High(float value)
{
    _High = value;
}

// private bool get_IsOneCrossing() [instance] :862
bool Cycle::IsOneCrossing()
{
    return (Low() <= 1.0f) && (High() >= 1.0f);
}

// private bool get_IsZeroCrossing() [instance] :857
bool Cycle::IsZeroCrossing()
{
    return (Low() <= 0.0f) && (High() >= 0.0f);
}

// public generated float get_Low() [instance] :802
float Cycle::Low()
{
    return _Low;
}

// public generated void set_Low(float value) [instance] :802
void Cycle::Low(float value)
{
    _Low = value;
}

// public float get_ProgressOffset() [instance] :899
float Cycle::ProgressOffset()
{
    return (_hasProgressOffset || (_easing != NULL)) ? _progressOffset : (float)RestProgress();
}

// public void set_ProgressOffset(float value) [instance] :900
void Cycle::ProgressOffset(float value)
{
    _hasProgressOffset = true;
    _progressOffset = value;
}

// private double get_RestProgress() [instance] :870
double Cycle::RestProgress()
{
    double v = 0.0;

    if (IsZeroCrossing())
        v = (double)((0.0f - Low()) / (High() - Low()));
    else if (IsOneCrossing())
        v = (double)((1.0f - Low()) / (High() - Low()));

    switch (Waveform())
    {
        case 0:
            return ::g::Uno::Math::Asin(2.0 * (v - 0.5)) / 6.2831853071795862;
        case 1:
            return v * 0.5;
        case 2:
            return v;
    }

    return v;
}

// public generated Uno.UX.Property<T> get_Target() [instance] :800
::g::Uno::UX::Property1* Cycle::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :800
void Cycle::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}

// public Fuse.Animations.CycleWaveform get_Waveform() [instance] :846
int Cycle::Waveform()
{
    return _waveform;
}

// public void set_Waveform(Fuse.Animations.CycleWaveform value) [instance] :847
void Cycle::Waveform(int value)
{
    _waveform = value;
}

// internal double WaveformFunc(double i, double offset) [instance] :923
double Cycle::WaveformFunc(double i, double offset)
{
    switch (Waveform())
    {
        case 0:
            return (::g::Uno::Math::Sin(((i + offset) * 3.1415926535897931) * 2.0) / 2.0) + 0.5;
        case 1:
        {
            double a = ::g::Uno::Math::Mod(i + offset, 1.0);

            if (a < 0.5)
                return a * 2.0;

            return 1.0 + (2.0 * (0.5 - a));
        }
        case 2:
            return ::g::Uno::Math::Mod(i + offset, 1.0);
    }

    return i;
}

// public Cycle New(Uno.UX.Property<T> Target) [static] :812
Cycle* Cycle::New2(uType* __type, ::g::Uno::UX::Property1* Target1)
{
    Cycle* obj1 = (Cycle*)uNew(__type);
    obj1->ctor_3(Target1);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class CycleState<T> :944
// {
static void CycleState_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Invalid seek");
    ::STRINGS[2] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno");
    ::TYPES[12] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[5] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[13] = ::g::Fuse::Animations::IMixerHandle_typeof();
    type->SetPrecalc(
        ::g::Fuse::Animations::IMixer_typeof()->MakeMethod(0/*Register<T>*/, type->T(0), NULL),
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(0/*Get<T>*/, type->T(0), NULL),
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0), NULL),
        type->T(0));
    type->SetFields(5,
        ::g::Fuse::Animations::Cycle_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Animations::CycleState, Animator1), 0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Animations::CycleState, blender), 0,
        ::TYPES[13/*Fuse.Animations.IMixerHandle`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Animations::CycleState, mixHandle), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::CycleState, progress), 0);
}

::g::Fuse::Animations::OpenAnimatorState_type* CycleState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::OpenAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::OpenAnimatorState_typeof();
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(CycleState);
    options.TypeSize = sizeof(::g::Fuse::Animations::OpenAnimatorState_type);
    type = (::g::Fuse::Animations::OpenAnimatorState_type*)uClassType::New("Fuse.Animations.CycleState`1", options);
    type->fp_build_ = CycleState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))CycleState__Disable_fn;
    type->fp_Seek = (void(*)(::g::Fuse::Animations::OpenAnimatorState*, bool*, float*, float*, int*, bool*))CycleState__Seek_fn;
    return type;
}

// public CycleState(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) :950
void CycleState__ctor_2_fn(CycleState* __this, ::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :958
void CycleState__Disable_fn(CycleState* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Fuse.Animations.IMixerHandle<T>*/),
    };
    uStackFrame __("Fuse.Animations.CycleState`1", "Disable()");

    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), __types[0]));
    __this->mixHandle = NULL;
    __this->progress = 0.0;
}

// public CycleState New(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) :950
void CycleState__New1_fn(uType* __type, ::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p, CycleState** __retval)
{
    *__retval = CycleState::New1(__type, animator, p);
}

// protected override sealed bool Seek(bool on, float interval, float strength, Fuse.Animations.SeekDirection dir) :976
void CycleState__Seek_fn(CycleState* __this, bool* on, float* interval, float* strength, int* dir, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(3/*T*/),
        __this->__type->Precalced(2/*Fuse.Animations.IMixerHandle<T>*/),
    };
    uStackFrame __("Fuse.Animations.CycleState`1", "Seek(bool,float,float,Fuse.Animations.SeekDirection)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    float interval_ = *interval;
    bool on_ = *on;
    float strength_ = *strength;

    if (__this->mixHandle == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[7/*"Invalid seek"*/], 1, ::STRINGS[2/*"/Users/most...*/], 980);
        return *__retval = true, void();
    }

    bool done = false;
    double oldProgress = __this->progress;
    __this->progress = (__this->progress + ((double)interval_ * ((interval_ < 0.0f) ? uPtr(__this->Animator1)->FrequencyBack() : uPtr(__this->Animator1)->Frequency())));

    if (on_)
        __this->progress = ::g::Uno::Math::Mod(__this->progress, 1.0);
    else if ((((oldProgress <= 0.0) || (__this->progress <= 0.0)) || (__this->progress >= 1.0)) || (oldProgress >= 1.0))
    {
        __this->progress = 0.0;
        done = true;
    }

    double s = uPtr(__this->Animator1)->WaveformFunc(__this->progress, (double)uPtr(__this->Animator1)->ProgressOffset());

    if (uPtr(__this->Animator1)->Easing() != NULL)
        s = uPtr(uPtr(__this->Animator1)->Easing())->Map((double)(float)s);

    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), __types[1]), (uPtr(__this->blender)->Weight_ex((::g::Fuse::Animations::Cycle__get_Base_fn(uPtr(__this->Animator1), &ret3), ret3), uCRef((double)::g::Uno::Math::Lerp1(uPtr(__this->Animator1)->Low(), uPtr(__this->Animator1)->High(), (float)s)), &ret2), ret2), uCRef(strength_));
    return *__retval = done, void();
}

// public CycleState(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) [instance] :950
void CycleState::ctor_2(::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.IMixer.Register<T>*/),
        __type->Precalced(1/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    uStackFrame __("Fuse.Animations.CycleState`1", ".ctor(Fuse.Animations.Cycle<T>,Fuse.Animations.CreateStateParams)");
    ctor_1(animator, p, NULL);
    Animator1 = animator;
    mixHandle = ((uObject*)::g::Fuse::Animations::IMixer::Register(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[12/*Fuse.Animations.IMixer*/]), __types[0], (::g::Uno::UX::Property1*)uPtr(Animator1)->Target(), uPtr(Animator1)->MixOp()));
    blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[1]));
}

// public CycleState New(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) [static] :950
CycleState* CycleState::New1(uType* __type, ::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    CycleState* obj1 = (CycleState*)uNew(__type);
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public enum CycleWaveform :759
uEnumType* CycleWaveform_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.CycleWaveform", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Sine", 0LL,
        "Triangle", 1LL,
        "Sawtooth", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class DiscreteKeyframeTrack :1019
// {
static void DiscreteKeyframeTrack_build(uType* type)
{
    ::TYPES[15] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::Keyframe_typeof(), NULL);
    ::TYPES[16] = ::g::Fuse::Animations::DiscreteTrackProvider_typeof();
    type->SetInterfaces(
        ::TYPES[16/*Fuse.Animations.DiscreteTrackProvider*/], offsetof(DiscreteKeyframeTrack_type, interface0),
        ::g::Fuse::Animations::ITrackProvider_typeof(), offsetof(DiscreteKeyframeTrack_type, interface1),
        ::g::Fuse::Animations::KeyframeTrack_typeof(), offsetof(DiscreteKeyframeTrack_type, interface2),
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(DiscreteKeyframeTrack_type, interface3));
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::DiscreteKeyframeTrack, _duration), 0,
        ::TYPES[15/*Uno.Collections.List<Fuse.Animations.Keyframe>*/], offsetof(::g::Fuse::Animations::DiscreteKeyframeTrack, _frames), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::DiscreteKeyframeTrack, _init), 0,
        ::g::Fuse::Animations::KeyframeInterpolation_typeof(), offsetof(::g::Fuse::Animations::DiscreteKeyframeTrack, _Interpolation), 0);
}

DiscreteKeyframeTrack_type* DiscreteKeyframeTrack_typeof()
{
    static uSStrong<DiscreteKeyframeTrack_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(DiscreteKeyframeTrack);
    options.TypeSize = sizeof(DiscreteKeyframeTrack_type);
    type = (DiscreteKeyframeTrack_type*)uClassType::New("Fuse.Animations.DiscreteKeyframeTrack", options);
    type->fp_build_ = DiscreteKeyframeTrack_build;
    type->fp_ctor_ = (void*)DiscreteKeyframeTrack__New1_fn;
    type->interface3.fp_GetDuration = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*, double*))DiscreteKeyframeTrack__FuseAnimationsTrackProviderGetDuration_fn;
    type->interface3.fp_GetAnimatorVariant = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*))DiscreteKeyframeTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn;
    type->interface0.fp_GetSeekProgress = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, uObject**, double*, int*))DiscreteKeyframeTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn;
    type->interface0.fp_GetSeekTime = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, uObject**, double*, int*))DiscreteKeyframeTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn;
    type->interface2.fp_get_Keyframes = (void(*)(uObject*, uObject**))DiscreteKeyframeTrack__get_Keyframes_fn;
    type->interface2.fp_get_Interpolation = (void(*)(uObject*, int*))DiscreteKeyframeTrack__get_Interpolation_fn;
    type->interface2.fp_set_Interpolation = (void(*)(uObject*, int*))DiscreteKeyframeTrack__set_Interpolation_fn;
    return type;
}

// public generated DiscreteKeyframeTrack() :1019
void DiscreteKeyframeTrack__ctor__fn(DiscreteKeyframeTrack* __this)
{
    __this->ctor_();
}

// private Fuse.Animations.SeekResult Fuse.Animations.DiscreteTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState tas, double progress, double interval, Fuse.Animations.SeekDirection dir, object& value, double& strength) :1052
void DiscreteKeyframeTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn(DiscreteKeyframeTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, uObject** value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", "Fuse.Animations.DiscreteTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,object&,double&)");
    double progress_ = *progress;
    double interval_ = *interval;
    int dir_ = *dir;
    return *__retval = ::g::Fuse::Animations::DiscreteTrackProvider::GetSeekTime(uInterface(uPtr(uAs<uObject*>(__this, ::TYPES[16/*Fuse.Animations.DiscreteTrackProvider*/])), ::TYPES[16/*Fuse.Animations.DiscreteTrackProvider*/]), tas, progress_ * __this->_duration, interval_, dir_, value, strength), void();
}

// private Fuse.Animations.SeekResult Fuse.Animations.DiscreteTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState tas, double elapsed, double interval, Fuse.Animations.SeekDirection dir, object& value, double& strength) :1060
void DiscreteKeyframeTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn(DiscreteKeyframeTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, uObject** value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", "Fuse.Animations.DiscreteTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,object&,double&)");
    ::g::Fuse::Animations::Keyframe* ret2;
    double elapsed_ = *elapsed;
    ::g::Fuse::Animations::Keyframe* ret3;
    ::g::Fuse::Animations::Keyframe* ret4;
    int dir_ = *dir;
    __this->Init();

    if (uPtr(__this->_frames)->Count() == 0)
    {
        *value = NULL;
        *strength = 0.0;
        return *__retval = 3, void();
    }

    int segment = -1;

    while ((segment < (uPtr(__this->_frames)->Count() - 2)) && (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(segment + 1), &ret2), ret2))->Time() <= elapsed_))
        ++segment;

    if (segment == -1)
    {
        *value = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(0), &ret3), ret3))->ObjectValue();
        *strength = 0.0;
    }
    else
    {
        *value = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(segment), &ret4), ret4))->ObjectValue();
        *strength = 1.0;
    }

    return *__retval = (((dir_ == 0) ? elapsed_ >= 0.0 : elapsed_ <= 0.0) ? 1 : 0) | 2, void();
}

// private Fuse.Animations.AnimatorVariant Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator ta) :1047
void DiscreteKeyframeTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(DiscreteKeyframeTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* __retval)
{
    return *__retval = 0, void();
}

// private double Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator ta, Fuse.Animations.AnimationVariant variant) :1041
void DiscreteKeyframeTrack__FuseAnimationsTrackProviderGetDuration_fn(DiscreteKeyframeTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", "Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator,Fuse.Animations.AnimationVariant)");
    __this->Init();
    return *__retval = __this->_duration, void();
}

// private void Init() :1032
void DiscreteKeyframeTrack__Init_fn(DiscreteKeyframeTrack* __this)
{
    __this->Init();
}

// public generated Fuse.Animations.KeyframeInterpolation get_Interpolation() :1028
void DiscreteKeyframeTrack__get_Interpolation_fn(DiscreteKeyframeTrack* __this, int* __retval)
{
    *__retval = __this->Interpolation();
}

// public generated void set_Interpolation(Fuse.Animations.KeyframeInterpolation value) :1028
void DiscreteKeyframeTrack__set_Interpolation_fn(DiscreteKeyframeTrack* __this, int* value)
{
    __this->Interpolation(*value);
}

// public Uno.Collections.IList<Fuse.Animations.Keyframe> get_Keyframes() :1025
void DiscreteKeyframeTrack__get_Keyframes_fn(DiscreteKeyframeTrack* __this, uObject** __retval)
{
    *__retval = __this->Keyframes();
}

// public generated DiscreteKeyframeTrack New() :1019
void DiscreteKeyframeTrack__New1_fn(DiscreteKeyframeTrack** __retval)
{
    *__retval = DiscreteKeyframeTrack::New1();
}

// public generated DiscreteKeyframeTrack() [instance] :1019
void DiscreteKeyframeTrack::ctor_()
{
    _frames = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[15/*Uno.Collections.List<Fuse.Animations.Keyframe>*/]));
}

// private void Init() [instance] :1032
void DiscreteKeyframeTrack::Init()
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", "Init()");

    if (_init)
        return;

    _duration = ::g::Fuse::Animations::Keyframe::CompleteFrames((uObject*)_frames, 0.0f, 0.0f, 0.0f);
    _init = true;
}

// public generated Fuse.Animations.KeyframeInterpolation get_Interpolation() [instance] :1028
int DiscreteKeyframeTrack::Interpolation()
{
    return _Interpolation;
}

// public generated void set_Interpolation(Fuse.Animations.KeyframeInterpolation value) [instance] :1028
void DiscreteKeyframeTrack::Interpolation(int value)
{
    _Interpolation = value;
}

// public Uno.Collections.IList<Fuse.Animations.Keyframe> get_Keyframes() [instance] :1025
uObject* DiscreteKeyframeTrack::Keyframes()
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", "get_Keyframes()");
    return (uObject*)_frames;
}

// public generated DiscreteKeyframeTrack New() [static] :1019
DiscreteKeyframeTrack* DiscreteKeyframeTrack::New1()
{
    DiscreteKeyframeTrack* obj1 = (DiscreteKeyframeTrack*)uNew(DiscreteKeyframeTrack_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class DiscreteMasterProperty<T> :1113
// {
static void DiscreteMasterProperty_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::MasterProperty_typeof()->MakeType(type->T(0), NULL));
    type->SetPrecalc(
        type->T(0));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface0),
        ::g::Fuse::Animations::MasterPropertyGet_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface2));
    type->SetFields(10);
}

::g::Fuse::Animations::MasterProperty_type* DiscreteMasterProperty_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MasterProperty_typeof();
    options.FieldCount = 10;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(DiscreteMasterProperty);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterProperty_type);
    type = (::g::Fuse::Animations::MasterProperty_type*)uClassType::New("Fuse.Animations.DiscreteMasterProperty`1", options);
    type->fp_build_ = DiscreteMasterProperty_build;
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))DiscreteMasterProperty__OnComplete_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Animations::MasterProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_GetPropertyObject = (void(*)(uObject*, uObject**))::g::Fuse::Animations::MasterProperty__GetPropertyObject_fn;
    return type;
}

// public DiscreteMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :1115
void DiscreteMasterProperty__ctor_2_fn(DiscreteMasterProperty* __this, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(property, mixerBase);
}

// public DiscreteMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :1115
void DiscreteMasterProperty__New1_fn(uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase, DiscreteMasterProperty** __retval)
{
    *__retval = DiscreteMasterProperty::New1(__type, property, mixerBase);
}

// public override sealed void OnComplete() :1118
void DiscreteMasterProperty__OnComplete_fn(DiscreteMasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*T*/),
    };
    uStackFrame __("Fuse.Animations.DiscreteMasterProperty`1", "OnComplete()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT nv(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Fuse::Animations::MixerHandle* ret3;
    nv = (__this->get_RestValue_ex(&ret2), ret2);
    float str = 0.5f;

    for (int i = 0; i < uPtr((::g::Uno::Collections::List*)__this->Handles)->Count(); ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret3), ret3);

        if (uPtr(v)->HasValue() && (uPtr(v)->Strength > str))
        {
            nv = uPtr(v)->Value();
            str = v->Strength;
        }
    }

    ::g::Fuse::Animations::MasterProperty__Set_fn(__this, nv);
}

// public DiscreteMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [instance] :1115
void DiscreteMasterProperty::ctor_2(::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_1(property, mixerBase);
}

// public DiscreteMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [static] :1115
DiscreteMasterProperty* DiscreteMasterProperty::New1(uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    DiscreteMasterProperty* obj1 = (DiscreteMasterProperty*)uNew(__type);
    obj1->ctor_2(property, mixerBase);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class DiscreteMasterTransform :1136
// {
static void DiscreteMasterTransform_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterBase_type, interface0));
    type->SetFields(6);
}

::g::Fuse::Animations::MasterBase_type* DiscreteMasterTransform_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MasterTransform_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DiscreteMasterTransform);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterBase_type);
    type = (::g::Fuse::Animations::MasterBase_type*)uClassType::New("Fuse.Animations.DiscreteMasterTransform", options);
    type->fp_build_ = DiscreteMasterTransform_build;
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))DiscreteMasterTransform__OnComplete_fn;
    return type;
}

// public DiscreteMasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) :1138
void DiscreteMasterTransform__ctor_2_fn(DiscreteMasterTransform* __this, ::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(node, mixerBase);
}

// public DiscreteMasterTransform New(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) :1138
void DiscreteMasterTransform__New1_fn(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase, DiscreteMasterTransform** __retval)
{
    *__retval = DiscreteMasterTransform::New1(node, mixerBase);
}

// public override sealed void OnComplete() :1141
void DiscreteMasterTransform__OnComplete_fn(DiscreteMasterTransform* __this)
{
    uStackFrame __("Fuse.Animations.DiscreteMasterTransform", "OnComplete()");
    ::g::Fuse::Animations::MixerHandle* ret2;
    uPtr(uPtr(__this->FMT)->Matrix)->ResetIdentity();
    float str = 0.5f;
    ::g::Fuse::Transform* value = NULL;

    for (int i = 0; i < uPtr((::g::Uno::Collections::List*)__this->Handles)->Count(); ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret2), ret2);

        if (uPtr(v)->HasValue() && (uPtr(v)->Strength > str))
        {
            value = uPtr(v)->Value().Strong< ::g::Fuse::Transform*>();
            str = v->Strength;
        }
    }

    if (value != NULL)
        uPtr(value)->AppendTo(uPtr(__this->FMT)->Matrix, 1.0f);

    uPtr(__this->FMT)->Changed();
}

// public DiscreteMasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) [instance] :1138
void DiscreteMasterTransform::ctor_2(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_1(node, mixerBase);
}

// public DiscreteMasterTransform New(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) [static] :1138
DiscreteMasterTransform* DiscreteMasterTransform::New1(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    DiscreteMasterTransform* obj1 = (DiscreteMasterTransform*)uNew(DiscreteMasterTransform_typeof());
    obj1->ctor_2(node, mixerBase);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class DiscreteMixer :1103
// {
static void DiscreteMixer_build(uType* type)
{
    ::TYPES[17] = ::g::Fuse::Animations::DiscreteMasterProperty_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[17/*Fuse.Animations.DiscreteMasterProperty`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(::g::Fuse::Animations::MixerBase_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Animations::MixerBase_type* DiscreteMixer_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MixerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MixerBase_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(DiscreteMixer);
    options.TypeSize = sizeof(::g::Fuse::Animations::MixerBase_type);
    type = (::g::Fuse::Animations::MixerBase_type*)uClassType::New("Fuse.Animations.DiscreteMixer", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->fp_build_ = DiscreteMixer_build;
    type->fp_ctor_ = (void*)DiscreteMixer__New1_fn;
    type->fp_CreateMaster = (void(*)(::g::Fuse::Animations::MixerBase*, uType*, ::g::Uno::UX::Property1*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterProperty**))DiscreteMixer__CreateMaster_fn;
    type->fp_CreateMasterTransform = (void(*)(::g::Fuse::Animations::MixerBase*, ::g::Fuse::Visual*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterBase**))DiscreteMixer__CreateMasterTransform_fn;
    type->interface0.fp_Register = (void(*)(uObject*, uType*, ::g::Uno::UX::Property1*, int*, uObject**))::g::Fuse::Animations::MixerBase__Register_fn;
    type->interface0.fp_RegisterTransform = (void(*)(uObject*, ::g::Fuse::Visual*, int*, int*, uObject**))::g::Fuse::Animations::MixerBase__RegisterTransform_fn;
    return type;
}

// public generated DiscreteMixer() :1103
void DiscreteMixer__ctor_1_fn(DiscreteMixer* __this)
{
    __this->ctor_1();
}

// protected override sealed Fuse.Animations.MasterProperty<T> CreateMaster<T>(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :1105
void DiscreteMixer__CreateMaster_fn(DiscreteMixer* __this, uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterProperty** __retval)
{
    __type = DiscreteMixer_typeof()->GetVirtual(0, __type);
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.DiscreteMasterProperty<T>*/),
    };
    return *__retval = (::g::Fuse::Animations::DiscreteMasterProperty*)::g::Fuse::Animations::DiscreteMasterProperty::New1(__types[0], property, mixerBase), void();
}

// protected override sealed Fuse.Animations.MasterBase<Fuse.Transform> CreateMasterTransform(Fuse.Visual element, Fuse.Animations.MixerBase mixerBase) :1108
void DiscreteMixer__CreateMasterTransform_fn(DiscreteMixer* __this, ::g::Fuse::Visual* element, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterBase** __retval)
{
    return *__retval = ::g::Fuse::Animations::DiscreteMasterTransform::New1(element, mixerBase), void();
}

// public generated DiscreteMixer New() :1103
void DiscreteMixer__New1_fn(DiscreteMixer** __retval)
{
    *__retval = DiscreteMixer::New1();
}

// public generated DiscreteMixer() [instance] :1103
void DiscreteMixer::ctor_1()
{
    ctor_();
}

// public generated DiscreteMixer New() [static] :1103
DiscreteMixer* DiscreteMixer::New1()
{
    DiscreteMixer* obj1 = (DiscreteMixer*)uNew(DiscreteMixer_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class DiscreteSingleTrack :1171
// {
// static DiscreteSingleTrack() :1171
static void DiscreteSingleTrack__cctor__fn(uType* __type)
{
    DiscreteSingleTrack::Singleton_ = DiscreteSingleTrack::New1();
}

static void DiscreteSingleTrack_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Animations::DiscreteTrackProvider_typeof(), offsetof(DiscreteSingleTrack_type, interface0),
        ::g::Fuse::Animations::ITrackProvider_typeof(), offsetof(DiscreteSingleTrack_type, interface1),
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(DiscreteSingleTrack_type, interface2));
    type->SetFields(0,
        type, (uintptr_t)&::g::Fuse::Animations::DiscreteSingleTrack::Singleton_, uFieldFlagsStatic);
}

DiscreteSingleTrack_type* DiscreteSingleTrack_typeof()
{
    static uSStrong<DiscreteSingleTrack_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(DiscreteSingleTrack);
    options.TypeSize = sizeof(DiscreteSingleTrack_type);
    type = (DiscreteSingleTrack_type*)uClassType::New("Fuse.Animations.DiscreteSingleTrack", options);
    type->fp_build_ = DiscreteSingleTrack_build;
    type->fp_ctor_ = (void*)DiscreteSingleTrack__New1_fn;
    type->fp_cctor_ = DiscreteSingleTrack__cctor__fn;
    type->interface2.fp_GetDuration = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*, double*))DiscreteSingleTrack__FuseAnimationsTrackProviderGetDuration_fn;
    type->interface2.fp_GetAnimatorVariant = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*))DiscreteSingleTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn;
    type->interface0.fp_GetSeekProgress = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, uObject**, double*, int*))DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn;
    type->interface0.fp_GetSeekTime = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, uObject**, double*, int*))DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn;
    return type;
}

// public generated DiscreteSingleTrack() :1171
void DiscreteSingleTrack__ctor__fn(DiscreteSingleTrack* __this)
{
    __this->ctor_();
}

// private Fuse.Animations.SeekResult Fuse.Animations.DiscreteTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState tas, double progress, double interval, Fuse.Animations.SeekDirection dir, object& value, double& strength) :1186
void DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, uObject** value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteSingleTrack", "Fuse.Animations.DiscreteTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,object&,double&)");
    double progress_ = *progress;
    int dir_ = *dir;
    *strength = progress_;
    *value = uPtr(uPtr(tas)->Animator)->_objectValue;
    return *__retval = (((dir_ == 0) ? progress_ >= 1.0 : progress_ <= 0.0) ? 1 : 0) | 2, void();
}

// private Fuse.Animations.SeekResult Fuse.Animations.DiscreteTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState tas, double elapsed, double interval, Fuse.Animations.SeekDirection dir, object& value, double& strength) :1197
void DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, uObject** value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteSingleTrack", "Fuse.Animations.DiscreteTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,object&,double&)");
    int dir_ = *dir;
    double elapsed_ = *elapsed;
    double duration = uPtr(tas)->Duration();
    float progress;

    if (duration < 9.9999997473787516e-06)
        progress = (float)(((dir_ == 0) ? elapsed_ >= -9.9999997473787516e-06 : elapsed_ > 9.9999997473787516e-06) ? 1 : 0);
    else
        progress = (float)(elapsed_ / duration);

    *strength = (double)::g::Uno::Math::Clamp1(progress, 0.0f, 1.0f);
    *value = uPtr(tas->Animator)->_objectValue;
    return *__retval = (((dir_ == 0) ? elapsed_ >= 0.0 : elapsed_ <= 0.0) ? 1 : 0) | 2, void();
}

// private Fuse.Animations.AnimatorVariant Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator ta) :1181
void DiscreteSingleTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteSingleTrack", "Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator)");
    return *__retval = uPtr(ta)->HasBack() ? 2 : 0, void();
}

// private double Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator ta, Fuse.Animations.AnimationVariant variant) :1176
void DiscreteSingleTrack__FuseAnimationsTrackProviderGetDuration_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteSingleTrack", "Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator,Fuse.Animations.AnimationVariant)");
    int variant_ = *variant;
    return *__retval = (variant_ == 1) ? uPtr(ta)->DurationBack() : uPtr(ta)->Duration(), void();
}

// public generated DiscreteSingleTrack New() :1171
void DiscreteSingleTrack__New1_fn(DiscreteSingleTrack** __retval)
{
    *__retval = DiscreteSingleTrack::New1();
}

uSStrong<DiscreteSingleTrack*> DiscreteSingleTrack::Singleton_;

// public generated DiscreteSingleTrack() [instance] :1171
void DiscreteSingleTrack::ctor_()
{
}

// public generated DiscreteSingleTrack New() [static] :1171
DiscreteSingleTrack* DiscreteSingleTrack::New1()
{
    DiscreteSingleTrack* obj1 = (DiscreteSingleTrack*)uNew(DiscreteSingleTrack_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class DiscreteTrackChangeState<T> :628
// {
static void DiscreteTrackChangeState_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Invalid Seek");
    ::STRINGS[2] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno");
    ::TYPES[12] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[13] = ::g::Fuse::Animations::IMixerHandle_typeof();
    type->SetPrecalc(
        ::g::Fuse::Animations::IMixer_typeof()->MakeMethod(0/*Register<T>*/, type->T(0), NULL),
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0), NULL),
        type->T(0));
    type->SetFields(6,
        ::g::Fuse::Animations::Change_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Animations::DiscreteTrackChangeState, Animator1), 0,
        ::TYPES[13/*Fuse.Animations.IMixerHandle`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Animations::DiscreteTrackChangeState, mixHandle), 0);
}

::g::Fuse::Animations::TrackAnimatorState_type* DiscreteTrackChangeState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimatorState_typeof();
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(DiscreteTrackChangeState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.DiscreteTrackChangeState`1", options);
    type->fp_build_ = DiscreteTrackChangeState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Disable_fn;
    type->fp_SeekObjectValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, uObject*, float*))DiscreteTrackChangeState__SeekObjectValue_fn;
    return type;
}

// public DiscreteTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :633
void DiscreteTrackChangeState__ctor_2_fn(DiscreteTrackChangeState* __this, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :640
void DiscreteTrackChangeState__Disable_fn(DiscreteTrackChangeState* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Animations.IMixerHandle<T>*/),
    };
    uStackFrame __("Fuse.Animations.DiscreteTrackChangeState`1", "Disable()");

    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), __types[0]));
    __this->mixHandle = NULL;
}

// public DiscreteTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :633
void DiscreteTrackChangeState__New1_fn(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p, DiscreteTrackChangeState** __retval)
{
    *__retval = DiscreteTrackChangeState::New1(__type, animator, p);
}

// protected override sealed void SeekObjectValue(object value, float strength) :649
void DiscreteTrackChangeState__SeekObjectValue_fn(DiscreteTrackChangeState* __this, uObject* value, float* strength)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*T*/),
        __this->__type->Precalced(1/*Fuse.Animations.IMixerHandle<T>*/),
    };
    uStackFrame __("Fuse.Animations.DiscreteTrackChangeState`1", "SeekObjectValue(object,float)");
    float strength_ = *strength;

    if (__this->mixHandle == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[5/*"Invalid Seek"*/], 1, ::STRINGS[2/*"/Users/most...*/], 653);
        return;
    }

    if ((value != NULL) && uIs(value, __types[0]))
        ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), __types[1]), uUnboxAny(__types[0], value), uCRef(strength_));
}

// public DiscreteTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [instance] :633
void DiscreteTrackChangeState::ctor_2(::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.IMixer.Register<T>*/),
    };
    uStackFrame __("Fuse.Animations.DiscreteTrackChangeState`1", ".ctor(Fuse.Animations.Change<T>,Fuse.Animations.CreateStateParams)");
    ctor_1(animator, p, NULL);
    Animator1 = animator;
    mixHandle = ((uObject*)::g::Fuse::Animations::IMixer::Register(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[12/*Fuse.Animations.IMixer*/]), __types[0], (::g::Uno::UX::Property1*)uPtr(Animator1)->Target(), uPtr(Animator1)->MixOp()));
}

// public DiscreteTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [static] :633
DiscreteTrackChangeState* DiscreteTrackChangeState::New1(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState* obj1 = (DiscreteTrackChangeState*)uNew(__type);
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal abstract interface DiscreteTrackProvider :3127
// {
uInterfaceType* DiscreteTrackProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.DiscreteTrackProvider", 0, 0);
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// public abstract class Easing :1234
// {
// static Easing() :1234
static void Easing__cctor__fn(uType* __type)
{
    Easing::Linear_ = Easing__LinearImpl::New1();
    Easing::QuadraticIn_ = Easing__QuadraticInImpl::New1();
    Easing::QuadraticOut_ = Easing__QuadraticOutImpl::New1();
    Easing::QuadraticInOut_ = Easing__QuadraticInOutImpl::New1();
    Easing::CubicIn_ = Easing__CubicInImpl::New1();
    Easing::CubicOut_ = Easing__CubicOutImpl::New1();
    Easing::CubicInOut_ = Easing__CubicInOutImpl::New1();
    Easing::QuarticIn_ = Easing__QuarticInImpl::New1();
    Easing::QuarticOut_ = Easing__QuarticOutImpl::New1();
    Easing::QuarticInOut_ = Easing__QuarticInOutImpl::New1();
    Easing::QuinticIn_ = Easing__QuinticInImpl::New1();
    Easing::QuinticOut_ = Easing__QuinticOutImpl::New1();
    Easing::QuinticInOut_ = Easing__QuinticInOutImpl::New1();
    Easing::SinusoidalIn_ = Easing__SinusoidalInImpl::New1();
    Easing::SinusoidalOut_ = Easing__SinusoidalOutImpl::New1();
    Easing::SinusoidalInOut_ = Easing__SinusoidalInOutImpl::New1();
    Easing::ExponentialIn_ = Easing__ExponentialInImpl::New1();
    Easing::ExponentialOut_ = Easing__ExponentialOutImpl::New1();
    Easing::ExponentialInOut_ = Easing__ExponentialInOutImpl::New1();
    Easing::CircularIn_ = Easing__CircularInImpl::New1();
    Easing::CircularOut_ = Easing__CircularOutImpl::New1();
    Easing::CircularInOut_ = Easing__CircularInOutImpl::New1();
    Easing::ElasticIn_ = Easing__ElasticInImpl::New1();
    Easing::ElasticOut_ = Easing__ElasticOutImpl::New1();
    Easing::ElasticInOut_ = Easing__ElasticInOutImpl::New1();
    Easing::BackIn_ = Easing__BackInImpl::New1();
    Easing::BackOut_ = Easing__BackOutImpl::New1();
    Easing::BackInOut_ = Easing__BackInOutImpl::New1();
    Easing::BounceIn_ = Easing__BounceInImpl::New1();
    Easing::BounceOut_ = Easing__BounceOutImpl::New1();
    Easing::BounceInOut_ = Easing__BounceInOutImpl::New1();
}

static void Easing_build(uType* type)
{
    type->SetFields(0,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::BackIn_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::BackInOut_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::BackOut_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::BounceIn_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::BounceInOut_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::BounceOut_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::CircularIn_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::CircularInOut_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::CircularOut_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::CubicIn_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::CubicInOut_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::CubicOut_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::ElasticIn_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::ElasticInOut_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::ElasticOut_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::ExponentialIn_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::ExponentialInOut_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::ExponentialOut_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::Linear_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::QuadraticIn_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::QuadraticInOut_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::QuadraticOut_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::QuarticIn_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::QuarticInOut_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::QuarticOut_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::QuinticIn_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::QuinticInOut_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::QuinticOut_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::SinusoidalIn_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::SinusoidalInOut_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Fuse::Animations::Easing::SinusoidalOut_, uFieldFlagsStatic);
    type->Reflection.SetFields(31,
        new uField("BackIn", 0),
        new uField("BackInOut", 1),
        new uField("BackOut", 2),
        new uField("BounceIn", 3),
        new uField("BounceInOut", 4),
        new uField("BounceOut", 5),
        new uField("CircularIn", 6),
        new uField("CircularInOut", 7),
        new uField("CircularOut", 8),
        new uField("CubicIn", 9),
        new uField("CubicInOut", 10),
        new uField("CubicOut", 11),
        new uField("ElasticIn", 12),
        new uField("ElasticInOut", 13),
        new uField("ElasticOut", 14),
        new uField("ExponentialIn", 15),
        new uField("ExponentialInOut", 16),
        new uField("ExponentialOut", 17),
        new uField("Linear", 18),
        new uField("QuadraticIn", 19),
        new uField("QuadraticInOut", 20),
        new uField("QuadraticOut", 21),
        new uField("QuarticIn", 22),
        new uField("QuarticInOut", 23),
        new uField("QuarticOut", 24),
        new uField("QuinticIn", 25),
        new uField("QuinticInOut", 26),
        new uField("QuinticOut", 27),
        new uField("SinusoidalIn", 28),
        new uField("SinusoidalInOut", 29),
        new uField("SinusoidalOut", 30));
    type->Reflection.SetFunctions(1,
        new uFunction("Map", NULL, NULL, offsetof(Easing_type, fp_Map), false, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()));
}

Easing_type* Easing_typeof()
{
    static uSStrong<Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 31;
    options.ObjectSize = sizeof(Easing);
    options.TypeSize = sizeof(Easing_type);
    type = (Easing_type*)uClassType::New("Fuse.Animations.Easing", options);
    type->fp_build_ = Easing_build;
    type->fp_cctor_ = Easing__cctor__fn;
    return type;
}

// protected generated Easing() :1234
void Easing__ctor__fn(Easing* __this)
{
    __this->ctor_();
}

uSStrong<Easing*> Easing::BackIn_;
uSStrong<Easing*> Easing::BackInOut_;
uSStrong<Easing*> Easing::BackOut_;
uSStrong<Easing*> Easing::BounceIn_;
uSStrong<Easing*> Easing::BounceInOut_;
uSStrong<Easing*> Easing::BounceOut_;
uSStrong<Easing*> Easing::CircularIn_;
uSStrong<Easing*> Easing::CircularInOut_;
uSStrong<Easing*> Easing::CircularOut_;
uSStrong<Easing*> Easing::CubicIn_;
uSStrong<Easing*> Easing::CubicInOut_;
uSStrong<Easing*> Easing::CubicOut_;
uSStrong<Easing*> Easing::ElasticIn_;
uSStrong<Easing*> Easing::ElasticInOut_;
uSStrong<Easing*> Easing::ElasticOut_;
uSStrong<Easing*> Easing::ExponentialIn_;
uSStrong<Easing*> Easing::ExponentialInOut_;
uSStrong<Easing*> Easing::ExponentialOut_;
uSStrong<Easing*> Easing::Linear_;
uSStrong<Easing*> Easing::QuadraticIn_;
uSStrong<Easing*> Easing::QuadraticInOut_;
uSStrong<Easing*> Easing::QuadraticOut_;
uSStrong<Easing*> Easing::QuarticIn_;
uSStrong<Easing*> Easing::QuarticInOut_;
uSStrong<Easing*> Easing::QuarticOut_;
uSStrong<Easing*> Easing::QuinticIn_;
uSStrong<Easing*> Easing::QuinticInOut_;
uSStrong<Easing*> Easing::QuinticOut_;
uSStrong<Easing*> Easing::SinusoidalIn_;
uSStrong<Easing*> Easing::SinusoidalInOut_;
uSStrong<Easing*> Easing::SinusoidalOut_;

// protected generated Easing() [instance] :1234
void Easing::ctor_()
{
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// public delegate float EasingFunction(float f) :1716
uDelegateType* EasingFunction_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Animations.EasingFunction", 1, 0);
    type->SetSignature(::g::Uno::Float_typeof(),
        ::g::Uno::Float_typeof());
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// public static class EasingFunctions :1724
// {
static void EasingFunctions_build(uType* type)
{
    ::TYPES[18] = ::g::Fuse::Animations::Easing__LinearImpl_typeof();
    ::TYPES[19] = ::g::Fuse::Animations::EasingFunction_typeof();
    ::TYPES[20] = ::g::Fuse::Animations::Easing__QuadraticInImpl_typeof();
    ::TYPES[21] = ::g::Fuse::Animations::Easing__QuadraticOutImpl_typeof();
    ::TYPES[22] = ::g::Fuse::Animations::Easing__QuadraticInOutImpl_typeof();
    ::TYPES[23] = ::g::Fuse::Animations::Easing__CubicInImpl_typeof();
    ::TYPES[24] = ::g::Fuse::Animations::Easing__CubicOutImpl_typeof();
    ::TYPES[25] = ::g::Fuse::Animations::Easing__CubicInOutImpl_typeof();
    ::TYPES[26] = ::g::Fuse::Animations::Easing__QuarticInImpl_typeof();
    ::TYPES[27] = ::g::Fuse::Animations::Easing__QuarticOutImpl_typeof();
    ::TYPES[28] = ::g::Fuse::Animations::Easing__QuarticInOutImpl_typeof();
    ::TYPES[29] = ::g::Fuse::Animations::Easing__QuinticInImpl_typeof();
    ::TYPES[30] = ::g::Fuse::Animations::Easing__QuinticOutImpl_typeof();
    ::TYPES[31] = ::g::Fuse::Animations::Easing__QuinticInOutImpl_typeof();
    ::TYPES[32] = ::g::Fuse::Animations::Easing__SinusoidalInImpl_typeof();
    ::TYPES[33] = ::g::Fuse::Animations::Easing__SinusoidalOutImpl_typeof();
    ::TYPES[34] = ::g::Fuse::Animations::Easing__SinusoidalInOutImpl_typeof();
    ::TYPES[35] = ::g::Fuse::Animations::Easing__ExponentialInImpl_typeof();
    ::TYPES[36] = ::g::Fuse::Animations::Easing__ExponentialOutImpl_typeof();
    ::TYPES[37] = ::g::Fuse::Animations::Easing__ExponentialInOutImpl_typeof();
    ::TYPES[38] = ::g::Fuse::Animations::Easing__CircularInImpl_typeof();
    ::TYPES[39] = ::g::Fuse::Animations::Easing__CircularOutImpl_typeof();
    ::TYPES[40] = ::g::Fuse::Animations::Easing__CircularInOutImpl_typeof();
    ::TYPES[41] = ::g::Fuse::Animations::Easing__ElasticInImpl_typeof();
    ::TYPES[42] = ::g::Fuse::Animations::Easing__ElasticOutImpl_typeof();
    ::TYPES[43] = ::g::Fuse::Animations::Easing__ElasticInOutImpl_typeof();
    ::TYPES[44] = ::g::Fuse::Animations::Easing__BackInImpl_typeof();
    ::TYPES[45] = ::g::Fuse::Animations::Easing__BackOutImpl_typeof();
    ::TYPES[46] = ::g::Fuse::Animations::Easing__BackInOutImpl_typeof();
    ::TYPES[47] = ::g::Fuse::Animations::Easing__BounceInImpl_typeof();
    ::TYPES[48] = ::g::Fuse::Animations::Easing__BounceOutImpl_typeof();
    ::TYPES[49] = ::g::Fuse::Animations::Easing__BounceInOutImpl_typeof();
    type->Reflection.SetFunctions(32,
        new uFunction("BackIn", NULL, (void*)EasingFunctions__BackIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("BackInOut", NULL, (void*)EasingFunctions__BackInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("BackOut", NULL, (void*)EasingFunctions__BackOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("BounceIn", NULL, (void*)EasingFunctions__BounceIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("BounceInOut", NULL, (void*)EasingFunctions__BounceInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("BounceOut", NULL, (void*)EasingFunctions__BounceOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("CircularIn", NULL, (void*)EasingFunctions__CircularIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("CircularInOut", NULL, (void*)EasingFunctions__CircularInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("CircularOut", NULL, (void*)EasingFunctions__CircularOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("CubicIn", NULL, (void*)EasingFunctions__CubicIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("CubicInOut", NULL, (void*)EasingFunctions__CubicInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("CubicOut", NULL, (void*)EasingFunctions__CubicOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ElasticIn", NULL, (void*)EasingFunctions__ElasticIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ElasticInOut", NULL, (void*)EasingFunctions__ElasticInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ElasticOut", NULL, (void*)EasingFunctions__ElasticOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ExponentialIn", NULL, (void*)EasingFunctions__ExponentialIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ExponentialInOut", NULL, (void*)EasingFunctions__ExponentialInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ExponentialOut", NULL, (void*)EasingFunctions__ExponentialOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("FromEasing", NULL, (void*)EasingFunctions__FromEasing_fn, 0, true, ::TYPES[19/*Fuse.Animations.EasingFunction*/], 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("Linear", NULL, (void*)EasingFunctions__Linear_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuadraticIn", NULL, (void*)EasingFunctions__QuadraticIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuadraticInOut", NULL, (void*)EasingFunctions__QuadraticInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuadraticOut", NULL, (void*)EasingFunctions__QuadraticOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuarticIn", NULL, (void*)EasingFunctions__QuarticIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuarticInOut", NULL, (void*)EasingFunctions__QuarticInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuarticOut", NULL, (void*)EasingFunctions__QuarticOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuinticIn", NULL, (void*)EasingFunctions__QuinticIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuinticInOut", NULL, (void*)EasingFunctions__QuinticInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuinticOut", NULL, (void*)EasingFunctions__QuinticOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("SinusoidalIn", NULL, (void*)EasingFunctions__SinusoidalIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("SinusoidalInOut", NULL, (void*)EasingFunctions__SinusoidalInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("SinusoidalOut", NULL, (void*)EasingFunctions__SinusoidalOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()));
}

uClassType* EasingFunctions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Animations.EasingFunctions", options);
    type->fp_build_ = EasingFunctions_build;
    return type;
}

// public static float BackIn(float k) :1958
void EasingFunctions__BackIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BackIn(*k);
}

// public static float BackInOut(float k) :1971
void EasingFunctions__BackInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BackInOut(*k);
}

// public static float BackOut(float k) :1964
void EasingFunctions__BackOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BackOut(*k);
}

// public static float BounceIn(float k) :1983
void EasingFunctions__BounceIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BounceIn(*k);
}

// public static float BounceInOut(float k) :2011
void EasingFunctions__BounceInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BounceInOut(*k);
}

// public static float BounceOut(float k) :1988
void EasingFunctions__BounceOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BounceOut(*k);
}

// public static float CircularIn(float k) :1902
void EasingFunctions__CircularIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CircularIn(*k);
}

// public static float CircularInOut(float k) :1913
void EasingFunctions__CircularInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CircularInOut(*k);
}

// public static float CircularOut(float k) :1907
void EasingFunctions__CircularOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CircularOut(*k);
}

// public static float CubicIn(float k) :1800
void EasingFunctions__CubicIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CubicIn(*k);
}

// public static float CubicInOut(float k) :1811
void EasingFunctions__CubicInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CubicInOut(*k);
}

// public static float CubicOut(float k) :1805
void EasingFunctions__CubicOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CubicOut(*k);
}

// public static float ElasticIn(float k) :1922
void EasingFunctions__ElasticIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ElasticIn(*k);
}

// public static float ElasticInOut(float k) :1944
void EasingFunctions__ElasticInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ElasticInOut(*k);
}

// public static float ElasticOut(float k) :1933
void EasingFunctions__ElasticOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ElasticOut(*k);
}

// public static float ExponentialIn(float k) :1877
void EasingFunctions__ExponentialIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ExponentialIn(*k);
}

// public static float ExponentialInOut(float k) :1887
void EasingFunctions__ExponentialInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ExponentialInOut(*k);
}

// public static float ExponentialOut(float k) :1882
void EasingFunctions__ExponentialOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ExponentialOut(*k);
}

// public static Fuse.Animations.EasingFunction FromEasing(Fuse.Animations.Easing e) :1726
void EasingFunctions__FromEasing_fn(::g::Fuse::Animations::Easing* e, uDelegate** __retval)
{
    *__retval = EasingFunctions::FromEasing(e);
}

// public static float Linear(float k) :1773
void EasingFunctions__Linear_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::Linear(*k);
}

// public static float QuadraticIn(float k) :1778
void EasingFunctions__QuadraticIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuadraticIn(*k);
}

// public static float QuadraticInOut(float k) :1788
void EasingFunctions__QuadraticInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuadraticInOut(*k);
}

// public static float QuadraticOut(float k) :1783
void EasingFunctions__QuadraticOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuadraticOut(*k);
}

// public static float QuarticIn(float k) :1821
void EasingFunctions__QuarticIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuarticIn(*k);
}

// public static float QuarticInOut(float k) :1832
void EasingFunctions__QuarticInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuarticInOut(*k);
}

// public static float QuarticOut(float k) :1826
void EasingFunctions__QuarticOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuarticOut(*k);
}

// public static float QuinticIn(float k) :1841
void EasingFunctions__QuinticIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuinticIn(*k);
}

// public static float QuinticInOut(float k) :1852
void EasingFunctions__QuinticInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuinticInOut(*k);
}

// public static float QuinticOut(float k) :1846
void EasingFunctions__QuinticOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuinticOut(*k);
}

// public static float SinusoidalIn(float k) :1862
void EasingFunctions__SinusoidalIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::SinusoidalIn(*k);
}

// public static float SinusoidalInOut(float k) :1872
void EasingFunctions__SinusoidalInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::SinusoidalInOut(*k);
}

// public static float SinusoidalOut(float k) :1867
void EasingFunctions__SinusoidalOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::SinusoidalOut(*k);
}

// public static float BackIn(float k) [static] :1958
float EasingFunctions::BackIn(float k)
{
    float s = 1.70158f;
    return (k * k) * (((s + 1.0f) * k) - s);
}

// public static float BackInOut(float k) [static] :1971
float EasingFunctions::BackInOut(float k)
{
    float s = 2.59490943f;
    k = k * 2.0f;

    if (k < 1.0f)
        return 0.5f * ((k * k) * (((s + 1.0f) * k) - s));

    k = k - 2.0f;
    return 0.5f * (((k * k) * (((s + 1.0f) * k) + s)) + 2.0f);
}

// public static float BackOut(float k) [static] :1964
float EasingFunctions::BackOut(float k)
{
    float s = 1.70158f;
    k = k - 1.0f;
    return ((k * k) * (((s + 1.0f) * k) + s)) + 1.0f;
}

// public static float BounceIn(float k) [static] :1983
float EasingFunctions::BounceIn(float k)
{
    return 1.0f - EasingFunctions::BounceOut(1.0f - k);
}

// public static float BounceInOut(float k) [static] :2011
float EasingFunctions::BounceInOut(float k)
{
    if (k < 0.5f)
        return EasingFunctions::BounceIn(k * 2.0f) * 0.5f;

    return (EasingFunctions::BounceOut((k * 2.0f) - 1.0f) * 0.5f) + 0.5f;
}

// public static float BounceOut(float k) [static] :1988
float EasingFunctions::BounceOut(float k)
{
    if (k < 0.363636374f)
        return (7.5625f * k) * k;
    else if (k < 0.727272749f)
    {
        k = k - 0.545454562f;
        return ((7.5625f * k) * k) + 0.75f;
    }
    else if (k < 0.909090936f)
    {
        k = k - 0.8181818f;
        return ((7.562f * k) * k) + 0.9375f;
    }
    else
    {
        k = k - 0.954545438f;
        return ((7.5625f * k) * k) + 0.984375f;
    }
}

// public static float CircularIn(float k) [static] :1902
float EasingFunctions::CircularIn(float k)
{
    return 1.0f - ::g::Uno::Math::Sqrt1(1.0f - (k * k));
}

// public static float CircularInOut(float k) [static] :1913
float EasingFunctions::CircularInOut(float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
        return -0.5f * (::g::Uno::Math::Sqrt1(1.0f - (k * k)) - 1.0f);

    k = k - 2.0f;
    return 0.5f * (::g::Uno::Math::Sqrt1(1.0f - (k * k)) + 1.0f);
}

// public static float CircularOut(float k) [static] :1907
float EasingFunctions::CircularOut(float k)
{
    k = k - 1.0f;
    return ::g::Uno::Math::Sqrt1(1.0f - (k * k));
}

// public static float CubicIn(float k) [static] :1800
float EasingFunctions::CubicIn(float k)
{
    return (k * k) * k;
}

// public static float CubicInOut(float k) [static] :1811
float EasingFunctions::CubicInOut(float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
        return ((0.5f * k) * k) * k;

    k = k - 2.0f;
    return 0.5f * (((k * k) * k) + 2.0f);
}

// public static float CubicOut(float k) [static] :1805
float EasingFunctions::CubicOut(float k)
{
    k = k - 1.0f;
    return ((k * k) * k) + 1.0f;
}

// public static float ElasticIn(float k) [static] :1922
float EasingFunctions::ElasticIn(float k)
{
    if (k == 0.0f)
        return 0.0f;

    if (k == 1.0f)
        return 1.0f;

    k = k - 1.0f;
    return -::g::Uno::Math::Pow1(2.0f, 10.0f * k) * ::g::Uno::Math::Sin1(((k - 0.1f) * 6.28318548f) * 2.5f);
}

// public static float ElasticInOut(float k) [static] :1944
float EasingFunctions::ElasticInOut(float k)
{
    if (k == 0.0f)
        return 0.0f;

    if (k == 1.0f)
        return 1.0f;

    k = (k * 2.0f) - 1.0f;

    if (k < 0.0f)
        return (-0.5f * ::g::Uno::Math::Pow1(2.0f, 10.0f * k)) * ::g::Uno::Math::Sin1(((k - 0.1f) * 6.28318548f) * 2.5f);

    return ((::g::Uno::Math::Pow1(2.0f, -10.0f * k) * ::g::Uno::Math::Sin1(((k - 0.1f) * 6.28318548f) * 2.5f)) * 0.5f) + 1.0f;
}

// public static float ElasticOut(float k) [static] :1933
float EasingFunctions::ElasticOut(float k)
{
    if (k == 0.0f)
        return 0.0f;

    if (k == 1.0f)
        return 1.0f;

    return (::g::Uno::Math::Pow1(2.0f, -10.0f * k) * ::g::Uno::Math::Sin1(((k - 0.1f) * 6.28318548f) * 2.5f)) + 1.0f;
}

// public static float ExponentialIn(float k) [static] :1877
float EasingFunctions::ExponentialIn(float k)
{
    return (k == 0.0f) ? 0.0f : ::g::Uno::Math::Pow1(1024.0f, k - 1.0f);
}

// public static float ExponentialInOut(float k) [static] :1887
float EasingFunctions::ExponentialInOut(float k)
{
    if (k == 0.0f)
        return 0.0f;

    if (k == 1.0f)
        return 1.0f;

    k = k * 2.0f;

    if (k < 1.0f)
        return 0.5f * ::g::Uno::Math::Pow1(1024.0f, k - 1.0f);

    return 0.5f * (-::g::Uno::Math::Pow1(2.0f, -10.0f * (k - 1.0f)) + 2.0f);
}

// public static float ExponentialOut(float k) [static] :1882
float EasingFunctions::ExponentialOut(float k)
{
    return (k == 1.0f) ? 1.0f : 1.0f - ::g::Uno::Math::Pow1(2.0f, -10.0f * k);
}

// public static Fuse.Animations.EasingFunction FromEasing(Fuse.Animations.Easing e) [static] :1726
uDelegate* EasingFunctions::FromEasing(::g::Fuse::Animations::Easing* e)
{
    if (uIs(e, ::TYPES[18/*Fuse.Animations.Easing.LinearImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__Linear_fn);

    if (uIs(e, ::TYPES[20/*Fuse.Animations.Easing.QuadraticInImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuadraticIn_fn);

    if (uIs(e, ::TYPES[21/*Fuse.Animations.Easing.QuadraticOutImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuadraticOut_fn);

    if (uIs(e, ::TYPES[22/*Fuse.Animations.Easing.QuadraticInOutImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuadraticInOut_fn);

    if (uIs(e, ::TYPES[23/*Fuse.Animations.Easing.CubicInImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CubicIn_fn);

    if (uIs(e, ::TYPES[24/*Fuse.Animations.Easing.CubicOutImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CubicOut_fn);

    if (uIs(e, ::TYPES[25/*Fuse.Animations.Easing.CubicInOutImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CubicInOut_fn);

    if (uIs(e, ::TYPES[26/*Fuse.Animations.Easing.QuarticInImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuarticIn_fn);

    if (uIs(e, ::TYPES[27/*Fuse.Animations.Easing.QuarticOutImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuarticOut_fn);

    if (uIs(e, ::TYPES[28/*Fuse.Animations.Easing.QuarticInOutImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuarticInOut_fn);

    if (uIs(e, ::TYPES[29/*Fuse.Animations.Easing.QuinticInImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuinticIn_fn);

    if (uIs(e, ::TYPES[30/*Fuse.Animations.Easing.QuinticOutImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuinticOut_fn);

    if (uIs(e, ::TYPES[31/*Fuse.Animations.Easing.QuinticInOutImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuinticInOut_fn);

    if (uIs(e, ::TYPES[32/*Fuse.Animations.Easing.SinusoidalInImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__SinusoidalIn_fn);

    if (uIs(e, ::TYPES[33/*Fuse.Animations.Easing.SinusoidalOutImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__SinusoidalOut_fn);

    if (uIs(e, ::TYPES[34/*Fuse.Animations.Easing.SinusoidalInOutImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__SinusoidalInOut_fn);

    if (uIs(e, ::TYPES[35/*Fuse.Animations.Easing.ExponentialInImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ExponentialIn_fn);

    if (uIs(e, ::TYPES[36/*Fuse.Animations.Easing.ExponentialOutImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ExponentialOut_fn);

    if (uIs(e, ::TYPES[37/*Fuse.Animations.Easing.ExponentialInOutImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ExponentialInOut_fn);

    if (uIs(e, ::TYPES[38/*Fuse.Animations.Easing.CircularInImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CircularIn_fn);

    if (uIs(e, ::TYPES[39/*Fuse.Animations.Easing.CircularOutImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CircularOut_fn);

    if (uIs(e, ::TYPES[40/*Fuse.Animations.Easing.CircularInOutImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CircularInOut_fn);

    if (uIs(e, ::TYPES[41/*Fuse.Animations.Easing.ElasticInImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ElasticIn_fn);

    if (uIs(e, ::TYPES[42/*Fuse.Animations.Easing.ElasticOutImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ElasticOut_fn);

    if (uIs(e, ::TYPES[43/*Fuse.Animations.Easing.ElasticInOutImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ElasticInOut_fn);

    if (uIs(e, ::TYPES[44/*Fuse.Animations.Easing.BackInImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BackIn_fn);

    if (uIs(e, ::TYPES[45/*Fuse.Animations.Easing.BackOutImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BackOut_fn);

    if (uIs(e, ::TYPES[46/*Fuse.Animations.Easing.BackInOutImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BackInOut_fn);

    if (uIs(e, ::TYPES[47/*Fuse.Animations.Easing.BounceInImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BounceIn_fn);

    if (uIs(e, ::TYPES[48/*Fuse.Animations.Easing.BounceOutImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BounceOut_fn);

    if (uIs(e, ::TYPES[49/*Fuse.Animations.Easing.BounceInOutImpl*/]))
        return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BounceInOut_fn);

    return uDelegate::New(::TYPES[19/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__Linear_fn);
}

// public static float Linear(float k) [static] :1773
float EasingFunctions::Linear(float k)
{
    return k;
}

// public static float QuadraticIn(float k) [static] :1778
float EasingFunctions::QuadraticIn(float k)
{
    return k * k;
}

// public static float QuadraticInOut(float k) [static] :1788
float EasingFunctions::QuadraticInOut(float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
        return (0.5f * k) * k;

    k = k - 1.0f;
    return -0.5f * ((k * (k - 2.0f)) - 1.0f);
}

// public static float QuadraticOut(float k) [static] :1783
float EasingFunctions::QuadraticOut(float k)
{
    return k * (2.0f - k);
}

// public static float QuarticIn(float k) [static] :1821
float EasingFunctions::QuarticIn(float k)
{
    return ((k * k) * k) * k;
}

// public static float QuarticInOut(float k) [static] :1832
float EasingFunctions::QuarticInOut(float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
        return (((0.5f * k) * k) * k) * k;

    k = k - 2.0f;
    return -0.5f * ((((k * k) * k) * k) - 2.0f);
}

// public static float QuarticOut(float k) [static] :1826
float EasingFunctions::QuarticOut(float k)
{
    k = k - 1.0f;
    return 1.0f - (((k * k) * k) * k);
}

// public static float QuinticIn(float k) [static] :1841
float EasingFunctions::QuinticIn(float k)
{
    return (((k * k) * k) * k) * k;
}

// public static float QuinticInOut(float k) [static] :1852
float EasingFunctions::QuinticInOut(float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
        return ((((0.5f * k) * k) * k) * k) * k;

    k = k - 2.0f;
    return 0.5f * (((((k * k) * k) * k) * k) + 2.0f);
}

// public static float QuinticOut(float k) [static] :1846
float EasingFunctions::QuinticOut(float k)
{
    k = k - 1.0f;
    return ((((k * k) * k) * k) * k) + 1.0f;
}

// public static float SinusoidalIn(float k) [static] :1862
float EasingFunctions::SinusoidalIn(float k)
{
    return 1.0f - ::g::Uno::Math::Cos1((k * 3.14159274f) / 2.0f);
}

// public static float SinusoidalInOut(float k) [static] :1872
float EasingFunctions::SinusoidalInOut(float k)
{
    return 0.5f * (1.0f - ::g::Uno::Math::Cos1(3.14159274f * k));
}

// public static float SinusoidalOut(float k) [static] :1867
float EasingFunctions::SinusoidalOut(float k)
{
    return ::g::Uno::Math::Sin1((k * 3.14159274f) / 2.0f);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class EasingTrack :1226
// {
// static EasingTrack() :1226
static void EasingTrack__cctor__fn(uType* __type)
{
    EasingTrack::Singleton_ = EasingTrack::New1();
}

static void EasingTrack_build(uType* type)
{
    ::TYPES[50] = ::g::Fuse::Animations::ContinuousTrackProvider_typeof();
    type->SetInterfaces(
        ::TYPES[50/*Fuse.Animations.ContinuousTrackProvider*/], offsetof(EasingTrack_type, interface0),
        ::g::Fuse::Animations::ITrackProvider_typeof(), offsetof(EasingTrack_type, interface1),
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(EasingTrack_type, interface2));
    type->SetFields(0,
        type, (uintptr_t)&::g::Fuse::Animations::EasingTrack::Singleton_, uFieldFlagsStatic);
}

EasingTrack_type* EasingTrack_typeof()
{
    static uSStrong<EasingTrack_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(EasingTrack);
    options.TypeSize = sizeof(EasingTrack_type);
    type = (EasingTrack_type*)uClassType::New("Fuse.Animations.EasingTrack", options);
    type->fp_build_ = EasingTrack_build;
    type->fp_ctor_ = (void*)EasingTrack__New1_fn;
    type->fp_cctor_ = EasingTrack__cctor__fn;
    type->interface2.fp_GetDuration = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*, double*))EasingTrack__FuseAnimationsTrackProviderGetDuration_fn;
    type->interface2.fp_GetAnimatorVariant = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*))EasingTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn;
    type->interface0.fp_GetSeekProgress = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, ::g::Uno::Float4*, double*, int*))EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekProgress_fn;
    type->interface0.fp_GetSeekTime = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, ::g::Uno::Float4*, double*, int*))EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekTime_fn;
    return type;
}

// public generated EasingTrack() :1226
void EasingTrack__ctor__fn(EasingTrack* __this)
{
    __this->ctor_();
}

// private Fuse.Animations.SeekResult Fuse.Animations.ContinuousTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState tas, double progress, double interval, Fuse.Animations.SeekDirection dir, float4& value, double& strength) :1241
void EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekProgress_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.EasingTrack", "Fuse.Animations.ContinuousTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,float4&,double&)");
    double progress_ = *progress;
    int dir_ = *dir;
    progress_ = ::g::Uno::Math::Clamp(progress_, 0.0, 1.0);
    double ease = uPtr(uPtr(tas)->Easing())->Map((double)(float)progress_);
    *strength = ease;
    *value = uPtr(tas->Animator)->_vectorValue;
    return *__retval = (((dir_ == 0) ? progress_ >= 1.0 : progress_ <= 0.0) ? 1 : 0) | 2, void();
}

// private Fuse.Animations.SeekResult Fuse.Animations.ContinuousTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState tas, double elapsed, double interval, Fuse.Animations.SeekDirection dir, float4& value, double& strength) :1255
void EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekTime_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.EasingTrack", "Fuse.Animations.ContinuousTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,float4&,double&)");
    int dir_ = *dir;
    double elapsed_ = *elapsed;
    double interval_ = *interval;
    double duration = uPtr(tas)->Duration();
    float progress;

    if (duration < 9.9999997473787516e-06)
        progress = (float)(((dir_ == 0) ? elapsed_ >= -9.9999997473787516e-06 : elapsed_ > 9.9999997473787516e-06) ? 1 : 0);
    else
        progress = (float)(elapsed_ / duration);

    return *__retval = ::g::Fuse::Animations::ContinuousTrackProvider::GetSeekProgress(uInterface(uPtr(uAs<uObject*>(__this, ::TYPES[50/*Fuse.Animations.ContinuousTrackProvider*/])), ::TYPES[50/*Fuse.Animations.ContinuousTrackProvider*/]), tas, (double)progress, interval_, dir_, value, strength), void();
}

// private Fuse.Animations.AnimatorVariant Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator ta) :1236
void EasingTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* __retval)
{
    uStackFrame __("Fuse.Animations.EasingTrack", "Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator)");
    return *__retval = uPtr(ta)->HasBack() ? 2 : 0, void();
}

// private double Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator ta, Fuse.Animations.AnimationVariant variant) :1231
void EasingTrack__FuseAnimationsTrackProviderGetDuration_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval)
{
    uStackFrame __("Fuse.Animations.EasingTrack", "Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator,Fuse.Animations.AnimationVariant)");
    int variant_ = *variant;
    return *__retval = ((variant_ == 1) && uPtr(ta)->HasBack()) ? uPtr(ta)->DurationBack() : uPtr(ta)->Duration(), void();
}

// public generated EasingTrack New() :1226
void EasingTrack__New1_fn(EasingTrack** __retval)
{
    *__retval = EasingTrack::New1();
}

uSStrong<EasingTrack*> EasingTrack::Singleton_;

// public generated EasingTrack() [instance] :1226
void EasingTrack::ctor_()
{
}

// public generated EasingTrack New() [static] :1226
EasingTrack* EasingTrack::New1()
{
    EasingTrack* obj1 = (EasingTrack*)uNew(EasingTrack_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.ElasticInImpl :1496
// {
static void Easing__ElasticInImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__ElasticInImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__ElasticInImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.ElasticInImpl", options);
    type->fp_build_ = Easing__ElasticInImpl_build;
    type->fp_ctor_ = (void*)Easing__ElasticInImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__ElasticInImpl__Map_fn;
    return type;
}

// public generated ElasticInImpl() :1496
void Easing__ElasticInImpl__ctor_1_fn(Easing__ElasticInImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1498
void Easing__ElasticInImpl__Map_fn(Easing__ElasticInImpl* __this, double* k, double* __retval)
{
    double k_ = *k;

    if (k_ == 0.0)
        return *__retval = 0.0, void();

    if (k_ == 1.0)
        return *__retval = 1.0, void();

    k_ = k_ - 1.0;
    return *__retval = -::g::Uno::Math::Pow(2.0, 10.0 * k_) * ::g::Uno::Math::Sin(((k_ - 0.10000000149011612) * 6.2831854820251465) * 2.5), void();
}

// public generated ElasticInImpl New() :1496
void Easing__ElasticInImpl__New1_fn(Easing__ElasticInImpl** __retval)
{
    *__retval = Easing__ElasticInImpl::New1();
}

// public generated ElasticInImpl() [instance] :1496
void Easing__ElasticInImpl::ctor_1()
{
    ctor_();
}

// public generated ElasticInImpl New() [static] :1496
Easing__ElasticInImpl* Easing__ElasticInImpl::New1()
{
    Easing__ElasticInImpl* obj1 = (Easing__ElasticInImpl*)uNew(Easing__ElasticInImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.ElasticInOutImpl :1524
// {
static void Easing__ElasticInOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__ElasticInOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__ElasticInOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.ElasticInOutImpl", options);
    type->fp_build_ = Easing__ElasticInOutImpl_build;
    type->fp_ctor_ = (void*)Easing__ElasticInOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__ElasticInOutImpl__Map_fn;
    return type;
}

// public generated ElasticInOutImpl() :1524
void Easing__ElasticInOutImpl__ctor_1_fn(Easing__ElasticInOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1526
void Easing__ElasticInOutImpl__Map_fn(Easing__ElasticInOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;

    if (k_ == 0.0)
        return *__retval = 0.0, void();

    if (k_ == 1.0)
        return *__retval = 1.0, void();

    k_ = (k_ * 2.0) - 1.0;

    if (k_ < 0.0)
        return *__retval = (-0.5 * ::g::Uno::Math::Pow(2.0, 10.0 * k_)) * ::g::Uno::Math::Sin(((k_ - 0.10000000149011612) * 6.2831854820251465) * 2.5), void();

    return *__retval = ((::g::Uno::Math::Pow(2.0, -10.0 * k_) * ::g::Uno::Math::Sin(((k_ - 0.10000000149011612) * 6.2831854820251465) * 2.5)) * 0.5) + 1.0, void();
}

// public generated ElasticInOutImpl New() :1524
void Easing__ElasticInOutImpl__New1_fn(Easing__ElasticInOutImpl** __retval)
{
    *__retval = Easing__ElasticInOutImpl::New1();
}

// public generated ElasticInOutImpl() [instance] :1524
void Easing__ElasticInOutImpl::ctor_1()
{
    ctor_();
}

// public generated ElasticInOutImpl New() [static] :1524
Easing__ElasticInOutImpl* Easing__ElasticInOutImpl::New1()
{
    Easing__ElasticInOutImpl* obj1 = (Easing__ElasticInOutImpl*)uNew(Easing__ElasticInOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.ElasticOutImpl :1510
// {
static void Easing__ElasticOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__ElasticOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__ElasticOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.ElasticOutImpl", options);
    type->fp_build_ = Easing__ElasticOutImpl_build;
    type->fp_ctor_ = (void*)Easing__ElasticOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__ElasticOutImpl__Map_fn;
    return type;
}

// public generated ElasticOutImpl() :1510
void Easing__ElasticOutImpl__ctor_1_fn(Easing__ElasticOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1512
void Easing__ElasticOutImpl__Map_fn(Easing__ElasticOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;

    if (k_ == 0.0)
        return *__retval = 0.0, void();

    if (k_ == 1.0)
        return *__retval = 1.0, void();

    return *__retval = (::g::Uno::Math::Pow(2.0, -10.0 * k_) * ::g::Uno::Math::Sin(((k_ - 0.10000000149011612) * 6.2831854820251465) * 2.5)) + 1.0, void();
}

// public generated ElasticOutImpl New() :1510
void Easing__ElasticOutImpl__New1_fn(Easing__ElasticOutImpl** __retval)
{
    *__retval = Easing__ElasticOutImpl::New1();
}

// public generated ElasticOutImpl() [instance] :1510
void Easing__ElasticOutImpl::ctor_1()
{
    ctor_();
}

// public generated ElasticOutImpl New() [static] :1510
Easing__ElasticOutImpl* Easing__ElasticOutImpl::New1()
{
    Easing__ElasticOutImpl* obj1 = (Easing__ElasticOutImpl*)uNew(Easing__ElasticOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.ExponentialInImpl :1433
// {
static void Easing__ExponentialInImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__ExponentialInImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__ExponentialInImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.ExponentialInImpl", options);
    type->fp_build_ = Easing__ExponentialInImpl_build;
    type->fp_ctor_ = (void*)Easing__ExponentialInImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__ExponentialInImpl__Map_fn;
    return type;
}

// public generated ExponentialInImpl() :1433
void Easing__ExponentialInImpl__ctor_1_fn(Easing__ExponentialInImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1435
void Easing__ExponentialInImpl__Map_fn(Easing__ExponentialInImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = (k_ == 0.0) ? 0.0 : ::g::Uno::Math::Pow(1024.0, k_ - 1.0), void();
}

// public generated ExponentialInImpl New() :1433
void Easing__ExponentialInImpl__New1_fn(Easing__ExponentialInImpl** __retval)
{
    *__retval = Easing__ExponentialInImpl::New1();
}

// public generated ExponentialInImpl() [instance] :1433
void Easing__ExponentialInImpl::ctor_1()
{
    ctor_();
}

// public generated ExponentialInImpl New() [static] :1433
Easing__ExponentialInImpl* Easing__ExponentialInImpl::New1()
{
    Easing__ExponentialInImpl* obj1 = (Easing__ExponentialInImpl*)uNew(Easing__ExponentialInImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.ExponentialInOutImpl :1449
// {
static void Easing__ExponentialInOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__ExponentialInOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__ExponentialInOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.ExponentialInOutImpl", options);
    type->fp_build_ = Easing__ExponentialInOutImpl_build;
    type->fp_ctor_ = (void*)Easing__ExponentialInOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__ExponentialInOutImpl__Map_fn;
    return type;
}

// public generated ExponentialInOutImpl() :1449
void Easing__ExponentialInOutImpl__ctor_1_fn(Easing__ExponentialInOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1451
void Easing__ExponentialInOutImpl__Map_fn(Easing__ExponentialInOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;

    if (k_ == 0.0)
        return *__retval = 0.0, void();

    if (k_ == 1.0)
        return *__retval = 1.0, void();

    k_ = k_ * 2.0;

    if (k_ < 1.0)
        return *__retval = 0.5 * ::g::Uno::Math::Pow(1024.0, k_ - 1.0), void();

    return *__retval = 0.5 * (-::g::Uno::Math::Pow(2.0, -10.0 * (k_ - 1.0)) + 2.0), void();
}

// public generated ExponentialInOutImpl New() :1449
void Easing__ExponentialInOutImpl__New1_fn(Easing__ExponentialInOutImpl** __retval)
{
    *__retval = Easing__ExponentialInOutImpl::New1();
}

// public generated ExponentialInOutImpl() [instance] :1449
void Easing__ExponentialInOutImpl::ctor_1()
{
    ctor_();
}

// public generated ExponentialInOutImpl New() [static] :1449
Easing__ExponentialInOutImpl* Easing__ExponentialInOutImpl::New1()
{
    Easing__ExponentialInOutImpl* obj1 = (Easing__ExponentialInOutImpl*)uNew(Easing__ExponentialInOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.ExponentialOutImpl :1441
// {
static void Easing__ExponentialOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__ExponentialOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__ExponentialOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.ExponentialOutImpl", options);
    type->fp_build_ = Easing__ExponentialOutImpl_build;
    type->fp_ctor_ = (void*)Easing__ExponentialOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__ExponentialOutImpl__Map_fn;
    return type;
}

// public generated ExponentialOutImpl() :1441
void Easing__ExponentialOutImpl__ctor_1_fn(Easing__ExponentialOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1443
void Easing__ExponentialOutImpl__Map_fn(Easing__ExponentialOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = (k_ == 1.0) ? 1.0 : 1.0 - ::g::Uno::Math::Pow(2.0, -10.0 * k_), void();
}

// public generated ExponentialOutImpl New() :1441
void Easing__ExponentialOutImpl__New1_fn(Easing__ExponentialOutImpl** __retval)
{
    *__retval = Easing__ExponentialOutImpl::New1();
}

// public generated ExponentialOutImpl() [instance] :1441
void Easing__ExponentialOutImpl::ctor_1()
{
    ctor_();
}

// public generated ExponentialOutImpl New() [static] :1441
Easing__ExponentialOutImpl* Easing__ExponentialOutImpl::New1()
{
    Easing__ExponentialOutImpl* obj1 = (Easing__ExponentialOutImpl*)uNew(Easing__ExponentialOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class FastMatrixTransform :1789
// {
static void FastMatrixTransform_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Transform_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface3));
    type->SetFields(14,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Animations::FastMatrixTransform, Matrix), 0);
}

::g::Fuse::Transform_type* FastMatrixTransform_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Transform_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(FastMatrixTransform);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Animations.FastMatrixTransform", options);
    type->fp_build_ = FastMatrixTransform_build;
    type->fp_ctor_ = (void*)FastMatrixTransform__New2_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))FastMatrixTransform__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))FastMatrixTransform__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))FastMatrixTransform__PrependTo_fn;
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

// public generated FastMatrixTransform() :1789
void FastMatrixTransform__ctor_3_fn(FastMatrixTransform* __this)
{
    __this->ctor_3();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :1793
void FastMatrixTransform__AppendTo_fn(FastMatrixTransform* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    uStackFrame __("Fuse.Animations.FastMatrixTransform", "AppendTo(Fuse.FastMatrix,float)");
    uPtr(m)->AppendFastMatrix(__this->Matrix);
}

// public void Changed() :1804
void FastMatrixTransform__Changed_fn(FastMatrixTransform* __this)
{
    __this->Changed();
}

// public override sealed bool get_IsFlat() :1811
void FastMatrixTransform__get_IsFlat_fn(FastMatrixTransform* __this, bool* __retval)
{
    uStackFrame __("Fuse.Animations.FastMatrixTransform", "get_IsFlat()");
    ::g::Uno::Float4x4 m = uPtr(__this->Matrix)->Matrix();
    bool q = (((((::g::Uno::Math::Abs1(m.M13) < 1e-05f) && (::g::Uno::Math::Abs1(m.M23) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M43) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M14) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M24) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M34) < 1e-05f);
    return *__retval = q, void();
}

// public generated FastMatrixTransform New() :1789
void FastMatrixTransform__New2_fn(FastMatrixTransform** __retval)
{
    *__retval = FastMatrixTransform::New2();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :1799
void FastMatrixTransform__PrependTo_fn(FastMatrixTransform* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Animations.FastMatrixTransform", "PrependTo(Fuse.FastMatrix)");
    uPtr(m)->PrependFastMatrix(__this->Matrix);
}

// public generated FastMatrixTransform() [instance] :1789
void FastMatrixTransform::ctor_3()
{
    Matrix = ::g::Fuse::FastMatrix::Identity();
    ctor_2();
}

// public void Changed() [instance] :1804
void FastMatrixTransform::Changed()
{
    uStackFrame __("Fuse.Animations.FastMatrixTransform", "Changed()");
    OnMatrixChanged(NULL, NULL);
}

// public generated FastMatrixTransform New() [static] :1789
FastMatrixTransform* FastMatrixTransform::New2()
{
    FastMatrixTransform* obj1 = (FastMatrixTransform*)uNew(FastMatrixTransform_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// protected struct MasterBase<T>.GFWResult :1675
// {
static void MasterBase__GFWResult_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::MasterBase__GFWResult, Rest), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::MasterBase__GFWResult, Full), 0);
}

uStructType* MasterBase__GFWResult_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ValueSize = sizeof(MasterBase__GFWResult);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Animations.MasterBase`1.GFWResult", options);
    type->fp_build_ = MasterBase__GFWResult_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public abstract interface IMixer :1519
// {
uInterfaceType* IMixer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IMixer", 0, 1);
    type->MethodTypes[0] = type->NewMethodType(1);
    type->Reflection.SetFunctions(2,
        new uFunction("Register`1", type->MethodTypes[0], NULL, offsetof(IMixer, fp_Register), false, ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->MethodTypes[0]->U(0), NULL), 2, ::g::Uno::UX::Property1_typeof()->MakeType(type->MethodTypes[0]->U(0), NULL), ::g::Fuse::Animations::MixOp_typeof()),
        new uFunction("RegisterTransform", NULL, NULL, offsetof(IMixer, fp_RegisterTransform), false, ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof(), NULL), 3, ::g::Fuse::Visual_typeof(), ::g::Fuse::Animations::MixOp_typeof(), ::g::Uno::Int_typeof()));
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public abstract interface IMixerHandle<T> :1525
// {
uInterfaceType* IMixerHandle_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IMixerHandle`1", 1, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_RestValue", NULL, NULL, offsetof(IMixerHandle, fp_get_RestValue), false, type->T(0), 0),
        new uFunction("Set", NULL, NULL, offsetof(IMixerHandle, fp_Set), false, uVoid_typeof(), 2, type->T(0), ::g::Uno::Float_typeof()),
        new uFunction("Unregister", NULL, NULL, offsetof(IMixerHandle, fp_Unregister), false, uVoid_typeof(), 0));
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal abstract interface IMixerMaster :1540
// {
uInterfaceType* IMixerMaster_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IMixerMaster", 0, 0);
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal abstract interface IPlayerFeedback :4103
// {
uInterfaceType* IPlayerFeedback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IPlayerFeedback", 0, 0);
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public abstract interface IResize :2624
// {
uInterfaceType* IResize_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IResize", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("SetSize", NULL, NULL, offsetof(IResize, fp_SetSize), false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public abstract interface IResizeMode :2629
// {
uInterfaceType* IResizeMode_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IResizeMode", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("GetSizeChange", NULL, NULL, offsetof(IResizeMode, fp_GetSizeChange), false, ::g::Uno::Bool_typeof(), 4, ::g::Fuse::Visual_typeof(), ::g::Fuse::Visual_typeof(), ::g::Uno::Float2_typeof()->ByRef(), ::g::Uno::Float2_typeof()->ByRef()));
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public abstract interface ITrackProvider :3110
// {
uInterfaceType* ITrackProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.ITrackProvider", 0, 0);
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class Keyframe :1310
// {
static void Keyframe_build(uType* type)
{
    ::TYPES[51] = ::g::Uno::Collections::ICollection_typeof()->MakeType(type, NULL);
    ::TYPES[52] = ::g::Uno::Collections::IList_typeof()->MakeType(type, NULL);
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _hasTangentIn), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _hasTangentOut), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _hasTime), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _hasTimeDelta), 0,
        uObject_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _objectValue), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _tangentIn), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _tangentOut), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _time), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _timeDelta), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _value), 0);
    type->Reflection.SetFunctions(31,
        new uFunction("get_DegreesX", NULL, (void*)Keyframe__get_DegreesX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesX", NULL, (void*)Keyframe__set_DegreesX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesXY", NULL, (void*)Keyframe__get_DegreesXY_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_DegreesXY", NULL, (void*)Keyframe__set_DegreesXY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_DegreesY", NULL, (void*)Keyframe__get_DegreesY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesY", NULL, (void*)Keyframe__set_DegreesY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesZ", NULL, (void*)Keyframe__get_DegreesZ_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesZ", NULL, (void*)Keyframe__set_DegreesZ_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Keyframe__New1_fn, 0, true, type, 0),
        new uFunction("get_ObjectValue", NULL, (void*)Keyframe__get_ObjectValue_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_ObjectValue", NULL, (void*)Keyframe__set_ObjectValue_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_TangentIn", NULL, (void*)Keyframe__get_TangentIn_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_TangentIn", NULL, (void*)Keyframe__set_TangentIn_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_TangentOut", NULL, (void*)Keyframe__get_TangentOut_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_TangentOut", NULL, (void*)Keyframe__set_TangentOut_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_Time", NULL, (void*)Keyframe__get_Time_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Time", NULL, (void*)Keyframe__set_Time_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_TimeDelta", NULL, (void*)Keyframe__get_TimeDelta_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_TimeDelta", NULL, (void*)Keyframe__set_TimeDelta_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Value", NULL, (void*)Keyframe__get_Value_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Keyframe__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_X", NULL, (void*)Keyframe__get_X_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_X", NULL, (void*)Keyframe__set_X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_XY", NULL, (void*)Keyframe__get_XY_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_XY", NULL, (void*)Keyframe__set_XY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_XYZ", NULL, (void*)Keyframe__get_XYZ_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_XYZ", NULL, (void*)Keyframe__set_XYZ_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("get_Y", NULL, (void*)Keyframe__get_Y_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Y", NULL, (void*)Keyframe__set_Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Z", NULL, (void*)Keyframe__get_Z_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Z", NULL, (void*)Keyframe__set_Z_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

uType* Keyframe_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(Keyframe);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.Keyframe", options);
    type->fp_build_ = Keyframe_build;
    type->fp_ctor_ = (void*)Keyframe__New1_fn;
    return type;
}

// public generated Keyframe() :1310
void Keyframe__ctor__fn(Keyframe* __this)
{
    __this->ctor_();
}

// internal static double CompleteFrames(Uno.Collections.IList<Fuse.Animations.Keyframe> frames, float tension, float bias, float continuity) :1441
void Keyframe__CompleteFrames_fn(uObject* frames, float* tension, float* bias, float* continuity, double* __retval)
{
    *__retval = Keyframe::CompleteFrames(frames, *tension, *bias, *continuity);
}

// public float get_DegreesX() :1358
void Keyframe__get_DegreesX_fn(Keyframe* __this, float* __retval)
{
    *__retval = __this->DegreesX();
}

// public void set_DegreesX(float value) :1359
void Keyframe__set_DegreesX_fn(Keyframe* __this, float* value)
{
    __this->DegreesX(*value);
}

// public float2 get_DegreesXY() :1376
void Keyframe__get_DegreesXY_fn(Keyframe* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->DegreesXY();
}

// public void set_DegreesXY(float2 value) :1377
void Keyframe__set_DegreesXY_fn(Keyframe* __this, ::g::Uno::Float2* value)
{
    __this->DegreesXY(*value);
}

// public float get_DegreesY() :1364
void Keyframe__get_DegreesY_fn(Keyframe* __this, float* __retval)
{
    *__retval = __this->DegreesY();
}

// public void set_DegreesY(float value) :1365
void Keyframe__set_DegreesY_fn(Keyframe* __this, float* value)
{
    __this->DegreesY(*value);
}

// public float get_DegreesZ() :1370
void Keyframe__get_DegreesZ_fn(Keyframe* __this, float* __retval)
{
    *__retval = __this->DegreesZ();
}

// public void set_DegreesZ(float value) :1371
void Keyframe__set_DegreesZ_fn(Keyframe* __this, float* value)
{
    __this->DegreesZ(*value);
}

// private static void KochanekBartelTangent(float4 pa, float4 pb, float4 pc, float4 pd, float t, float b, float c, float4& tangentIn, float4& tangentOut) :1482
void Keyframe__KochanekBartelTangent_fn(::g::Uno::Float4* pa, ::g::Uno::Float4* pb, ::g::Uno::Float4* pc, ::g::Uno::Float4* pd, float* t, float* b, float* c, ::g::Uno::Float4* tangentIn, ::g::Uno::Float4* tangentOut)
{
    Keyframe::KochanekBartelTangent(*pa, *pb, *pc, *pd, *t, *b, *c, tangentIn, tangentOut);
}

// public generated Keyframe New() :1310
void Keyframe__New1_fn(Keyframe** __retval)
{
    *__retval = Keyframe::New1();
}

// public object get_ObjectValue() :1322
void Keyframe__get_ObjectValue_fn(Keyframe* __this, uObject** __retval)
{
    *__retval = __this->ObjectValue();
}

// public void set_ObjectValue(object value) :1323
void Keyframe__set_ObjectValue_fn(Keyframe* __this, uObject* value)
{
    __this->ObjectValue(value);
}

// public float4 get_TangentIn() :1409
void Keyframe__get_TangentIn_fn(Keyframe* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TangentIn();
}

// public void set_TangentIn(float4 value) :1410
void Keyframe__set_TangentIn_fn(Keyframe* __this, ::g::Uno::Float4* value)
{
    __this->TangentIn(*value);
}

// public float4 get_TangentOut() :1419
void Keyframe__get_TangentOut_fn(Keyframe* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TangentOut();
}

// public void set_TangentOut(float4 value) :1420
void Keyframe__set_TangentOut_fn(Keyframe* __this, ::g::Uno::Float4* value)
{
    __this->TangentOut(*value);
}

// public double get_Time() :1397
void Keyframe__get_Time_fn(Keyframe* __this, double* __retval)
{
    *__retval = __this->Time();
}

// public void set_Time(double value) :1398
void Keyframe__set_Time_fn(Keyframe* __this, double* value)
{
    __this->Time(*value);
}

// public double get_TimeDelta() :1385
void Keyframe__get_TimeDelta_fn(Keyframe* __this, double* __retval)
{
    *__retval = __this->TimeDelta();
}

// public void set_TimeDelta(double value) :1386
void Keyframe__set_TimeDelta_fn(Keyframe* __this, double* value)
{
    __this->TimeDelta(*value);
}

// public float4 get_Value() :1315
void Keyframe__get_Value_fn(Keyframe* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(float4 value) :1316
void Keyframe__set_Value_fn(Keyframe* __this, ::g::Uno::Float4* value)
{
    __this->Value(*value);
}

// public float get_X() :1328
void Keyframe__get_X_fn(Keyframe* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :1329
void Keyframe__set_X_fn(Keyframe* __this, float* value)
{
    __this->X(*value);
}

// public float2 get_XY() :1346
void Keyframe__get_XY_fn(Keyframe* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->XY();
}

// public void set_XY(float2 value) :1347
void Keyframe__set_XY_fn(Keyframe* __this, ::g::Uno::Float2* value)
{
    __this->XY(*value);
}

// public float3 get_XYZ() :1352
void Keyframe__get_XYZ_fn(Keyframe* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->XYZ();
}

// public void set_XYZ(float3 value) :1353
void Keyframe__set_XYZ_fn(Keyframe* __this, ::g::Uno::Float3* value)
{
    __this->XYZ(*value);
}

// public float get_Y() :1334
void Keyframe__get_Y_fn(Keyframe* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :1335
void Keyframe__set_Y_fn(Keyframe* __this, float* value)
{
    __this->Y(*value);
}

// public float get_Z() :1340
void Keyframe__get_Z_fn(Keyframe* __this, float* __retval)
{
    *__retval = __this->Z();
}

// public void set_Z(float value) :1341
void Keyframe__set_Z_fn(Keyframe* __this, float* value)
{
    __this->Z(*value);
}

// public generated Keyframe() [instance] :1310
void Keyframe::ctor_()
{
}

// public float get_DegreesX() [instance] :1358
float Keyframe::DegreesX()
{
    return ::g::Uno::Math::RadiansToDegrees1(_value.X);
}

// public void set_DegreesX(float value) [instance] :1359
void Keyframe::DegreesX(float value)
{
    _value.X = ::g::Uno::Math::DegreesToRadians1(value);
}

// public float2 get_DegreesXY() [instance] :1376
::g::Uno::Float2 Keyframe::DegreesXY()
{
    return ::g::Uno::Float2__New2(::g::Uno::Math::RadiansToDegrees1(_value.X), ::g::Uno::Math::RadiansToDegrees1(_value.Y));
}

// public void set_DegreesXY(float2 value) [instance] :1377
void Keyframe::DegreesXY(::g::Uno::Float2 value)
{
    _value = ::g::Uno::Float4__New2(::g::Uno::Math::DegreesToRadians1(value.X), ::g::Uno::Math::DegreesToRadians1(value.Y), _value.Z, _value.W);
}

// public float get_DegreesY() [instance] :1364
float Keyframe::DegreesY()
{
    return ::g::Uno::Math::RadiansToDegrees1(_value.Y);
}

// public void set_DegreesY(float value) [instance] :1365
void Keyframe::DegreesY(float value)
{
    _value.Y = ::g::Uno::Math::DegreesToRadians1(value);
}

// public float get_DegreesZ() [instance] :1370
float Keyframe::DegreesZ()
{
    return ::g::Uno::Math::RadiansToDegrees1(_value.Z);
}

// public void set_DegreesZ(float value) [instance] :1371
void Keyframe::DegreesZ(float value)
{
    _value.Z = ::g::Uno::Math::DegreesToRadians1(value);
}

// public object get_ObjectValue() [instance] :1322
uObject* Keyframe::ObjectValue()
{
    return _objectValue;
}

// public void set_ObjectValue(object value) [instance] :1323
void Keyframe::ObjectValue(uObject* value)
{
    _objectValue = value;
}

// public float4 get_TangentIn() [instance] :1409
::g::Uno::Float4 Keyframe::TangentIn()
{
    return _tangentIn;
}

// public void set_TangentIn(float4 value) [instance] :1410
void Keyframe::TangentIn(::g::Uno::Float4 value)
{
    _tangentIn = value;
    _hasTangentIn = true;
}

// public float4 get_TangentOut() [instance] :1419
::g::Uno::Float4 Keyframe::TangentOut()
{
    return _tangentOut;
}

// public void set_TangentOut(float4 value) [instance] :1420
void Keyframe::TangentOut(::g::Uno::Float4 value)
{
    _tangentOut = value;
    _hasTangentOut = true;
}

// public double get_Time() [instance] :1397
double Keyframe::Time()
{
    return _time;
}

// public void set_Time(double value) [instance] :1398
void Keyframe::Time(double value)
{
    _time = value;
    _hasTime = true;
}

// public double get_TimeDelta() [instance] :1385
double Keyframe::TimeDelta()
{
    return _timeDelta;
}

// public void set_TimeDelta(double value) [instance] :1386
void Keyframe::TimeDelta(double value)
{
    _timeDelta = value;
    _hasTimeDelta = true;
}

// public float4 get_Value() [instance] :1315
::g::Uno::Float4 Keyframe::Value()
{
    return _value;
}

// public void set_Value(float4 value) [instance] :1316
void Keyframe::Value(::g::Uno::Float4 value)
{
    _value = value;
}

// public float get_X() [instance] :1328
float Keyframe::X()
{
    return _value.X;
}

// public void set_X(float value) [instance] :1329
void Keyframe::X(float value)
{
    _value.X = value;
}

// public float2 get_XY() [instance] :1346
::g::Uno::Float2 Keyframe::XY()
{
    ::g::Uno::Float4 ind1 = _value;
    return ::g::Uno::Float2__New2(ind1.X, ind1.Y);
}

// public void set_XY(float2 value) [instance] :1347
void Keyframe::XY(::g::Uno::Float2 value)
{
    _value = ::g::Uno::Float4__New6(value, _value.Z, _value.W);
}

// public float3 get_XYZ() [instance] :1352
::g::Uno::Float3 Keyframe::XYZ()
{
    ::g::Uno::Float4 ind2 = _value;
    return ::g::Uno::Float3__New2(ind2.X, ind2.Y, ind2.Z);
}

// public void set_XYZ(float3 value) [instance] :1353
void Keyframe::XYZ(::g::Uno::Float3 value)
{
    _value = ::g::Uno::Float4__New8(value, _value.W);
}

// public float get_Y() [instance] :1334
float Keyframe::Y()
{
    return _value.Y;
}

// public void set_Y(float value) [instance] :1335
void Keyframe::Y(float value)
{
    _value.Y = value;
}

// public float get_Z() [instance] :1340
float Keyframe::Z()
{
    return _value.Z;
}

// public void set_Z(float value) [instance] :1341
void Keyframe::Z(float value)
{
    _value.Z = value;
}

// internal static double CompleteFrames(Uno.Collections.IList<Fuse.Animations.Keyframe> frames, float tension, float bias, float continuity) [static] :1441
double Keyframe::CompleteFrames(uObject* frames, float tension, float bias, float continuity)
{
    uStackFrame __("Fuse.Animations.Keyframe", "CompleteFrames(Uno.Collections.IList<Fuse.Animations.Keyframe>,float,float,float)");
    Keyframe* ret4;
    Keyframe* ret5;
    Keyframe* ret6;
    Keyframe* ret7;
    double time = 0.0;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(frames), ::TYPES[51/*Uno.Collections.ICollection<Fuse.Animations.Keyframe>*/])); ++i)
    {
        Keyframe* prev = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(frames), ::TYPES[52/*Uno.Collections.IList<Fuse.Animations.Keyframe>*/]), uCRef<int>(::g::Uno::Math::Max8(0, i - 1)), &ret4), ret4);
        Keyframe* frame = (::g::Uno::Collections::IList::get_Item_ex(uInterface(frames, ::TYPES[52/*Uno.Collections.IList<Fuse.Animations.Keyframe>*/]), uCRef<int>(i), &ret5), ret5);
        Keyframe* next = (::g::Uno::Collections::IList::get_Item_ex(uInterface(frames, ::TYPES[52/*Uno.Collections.IList<Fuse.Animations.Keyframe>*/]), uCRef<int>(::g::Uno::Math::Min8(::g::Uno::Collections::ICollection::Count(uInterface(frames, ::TYPES[51/*Uno.Collections.ICollection<Fuse.Animations.Keyframe>*/])) - 1, i + 1)), &ret6), ret6);
        Keyframe* next2 = (::g::Uno::Collections::IList::get_Item_ex(uInterface(frames, ::TYPES[52/*Uno.Collections.IList<Fuse.Animations.Keyframe>*/]), uCRef<int>(::g::Uno::Math::Min8(::g::Uno::Collections::ICollection::Count(uInterface(frames, ::TYPES[51/*Uno.Collections.ICollection<Fuse.Animations.Keyframe>*/])) - 1, i + 2)), &ret7), ret7);

        if (uPtr(frame)->_hasTime)
        {
            uPtr(frame)->_timeDelta = (uPtr(frame)->_time - time);
            time = frame->_time;
        }
        else if (uPtr(frame)->_hasTimeDelta)
        {
            time = time + uPtr(frame)->_timeDelta;
            frame->_time = time;
        }
        else
        {
            uPtr(frame)->_time = time;
            frame->_timeDelta = 0.0;
        }

        ::g::Uno::Float4 ta, tb;
        Keyframe::KochanekBartelTangent(uPtr(prev)->Value(), uPtr(frame)->Value(), uPtr(next)->Value(), uPtr(next2)->Value(), tension, bias, continuity, &ta, &tb);

        if ((i > 0) && !frame->_hasTangentOut)
            uPtr(frame)->_tangentOut = ta;

        if (!next->_hasTangentIn)
            uPtr(next)->_tangentIn = tb;
    }

    return time;
}

// private static void KochanekBartelTangent(float4 pa, float4 pb, float4 pc, float4 pd, float t, float b, float c, float4& tangentIn, float4& tangentOut) [static] :1482
void Keyframe::KochanekBartelTangent(::g::Uno::Float4 pa, ::g::Uno::Float4 pb, ::g::Uno::Float4 pc, ::g::Uno::Float4 pd, float t, float b, float c, ::g::Uno::Float4* tangentIn, ::g::Uno::Float4* tangentOut)
{
    *tangentIn = ::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Multiply((((1.0f - t) * (1.0f + b)) * (1.0f + c)) / 2.0f, ::g::Uno::Float4__op_Subtraction2(pb, pa)), ::g::Uno::Float4__op_Multiply((((1.0f - t) * (1.0f - b)) * (1.0f - c)) / 2.0f, ::g::Uno::Float4__op_Subtraction2(pc, pb)));
    *tangentOut = ::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Multiply((((1.0f - t) * (1.0f + b)) * (1.0f - c)) / 2.0f, ::g::Uno::Float4__op_Subtraction2(pc, pb)), ::g::Uno::Float4__op_Multiply((((1.0f - t) * (1.0f - b)) * (1.0f + c)) / 2.0f, ::g::Uno::Float4__op_Subtraction2(pd, pc)));
}

// public generated Keyframe New() [static] :1310
Keyframe* Keyframe::New1()
{
    Keyframe* obj3 = (Keyframe*)uNew(Keyframe_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public enum KeyframeInterpolation :2905
uEnumType* KeyframeInterpolation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.KeyframeInterpolation", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Linear", 0LL,
        "CatmullRom", 1LL,
        "Smooth", 1LL,
        "Custom", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal abstract interface KeyframeTrack :3135
// {
uInterfaceType* KeyframeTrack_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.KeyframeTrack", 0, 0);
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.LinearImpl :1281
// {
static void Easing__LinearImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__LinearImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__LinearImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.LinearImpl", options);
    type->fp_build_ = Easing__LinearImpl_build;
    type->fp_ctor_ = (void*)Easing__LinearImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__LinearImpl__Map_fn;
    return type;
}

// public generated LinearImpl() :1281
void Easing__LinearImpl__ctor_1_fn(Easing__LinearImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1283
void Easing__LinearImpl__Map_fn(Easing__LinearImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = k_, void();
}

// public generated LinearImpl New() :1281
void Easing__LinearImpl__New1_fn(Easing__LinearImpl** __retval)
{
    *__retval = Easing__LinearImpl::New1();
}

// public generated LinearImpl() [instance] :1281
void Easing__LinearImpl::ctor_1()
{
    ctor_();
}

// public generated LinearImpl New() [static] :1281
Easing__LinearImpl* Easing__LinearImpl::New1()
{
    Easing__LinearImpl* obj1 = (Easing__LinearImpl*)uNew(Easing__LinearImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal abstract class MasterBase<T> :1592
// {
// ~MasterBase() :1600
static void MasterBase__Finalize_fn(MasterBase* __this)
{
}

static void MasterBase_build(uType* type)
{
    ::STRINGS[8] = uString::Const("Attempt to register in inactive Master");
    ::STRINGS[2] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno");
    ::STRINGS[9] = uString::Const("Register");
    ::TYPES[53] = ::g::Uno::Collections::List_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::MixerHandle_typeof()->MakeType(type->T(0), NULL), NULL));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(MasterBase_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MasterBase, _inactive), 0,
        ::g::Fuse::Animations::MixerBase_typeof(), offsetof(::g::Fuse::Animations::MasterBase, _mixerBase), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MasterBase, DirtyValue), 0,
        ::TYPES[53/*Uno.Collections.List`1*/]->MakeType(::g::Fuse::Animations::MixerHandle_typeof()->MakeType(type->T(0), NULL), NULL), offsetof(::g::Fuse::Animations::MasterBase, Handles), 0);
}

MasterBase_type* MasterBase_typeof()
{
    static uSStrong<MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(MasterBase);
    options.TypeSize = sizeof(MasterBase_type);
    type = (MasterBase_type*)uClassType::New("Fuse.Animations.MasterBase`1", options);
    type->fp_build_ = MasterBase_build;
    type->fp_Finalize = (void(*)(uObject*))MasterBase__Finalize_fn;
    type->fp_OnActive = MasterBase__OnActive_fn;
    return type;
}

// protected MasterBase([Fuse.Animations.MixerBase mixerBase]) :1595
void MasterBase__ctor__fn(MasterBase* __this, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_(mixerBase);
}

// private void Complete() :1646
void MasterBase__Complete_fn(MasterBase* __this)
{
    __this->Complete();
}

// protected Fuse.Animations.MasterBase<T>.GFWResult GetFullWeight() :1681
void MasterBase__GetFullWeight_fn(MasterBase* __this, MasterBase__GFWResult* __retval)
{
    *__retval = __this->GetFullWeight();
}

// public void MarkDirty() :1660
void MasterBase__MarkDirty_fn(MasterBase* __this)
{
    __this->MarkDirty();
}

// protected virtual void OnActive() :1643
void MasterBase__OnActive_fn(MasterBase* __this)
{
}

// public void Register(Fuse.Animations.MixerHandle<T> handle) :1611
void MasterBase__Register_fn(MasterBase* __this, ::g::Fuse::Animations::MixerHandle* handle)
{
    __this->Register(handle);
}

// public void Unregister(Fuse.Animations.MixerHandle<T> handle) :1627
void MasterBase__Unregister_fn(MasterBase* __this, ::g::Fuse::Animations::MixerHandle* handle)
{
    __this->Unregister(handle);
}

// protected MasterBase([Fuse.Animations.MixerBase mixerBase]) [instance] :1595
void MasterBase::ctor_(::g::Fuse::Animations::MixerBase* mixerBase)
{
    uType* __types[] = {
        __type->GetBase(MasterBase_typeof())->Precalced(0/*Uno.Collections.List<Fuse.Animations.MixerHandle<T>>*/),
    };
    Handles = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
    _mixerBase = mixerBase;
}

// private void Complete() [instance] :1646
void MasterBase::Complete()
{
    uStackFrame __("Fuse.Animations.MasterBase`1", "Complete()");

    if (!DirtyValue)
        return;

    DirtyValue = false;

    if (uPtr(Handles)->Count() == 0)
        return;

    OnComplete();
}

// protected Fuse.Animations.MasterBase<T>.GFWResult GetFullWeight() [instance] :1681
MasterBase__GFWResult MasterBase::GetFullWeight()
{
    uStackFrame __("Fuse.Animations.MasterBase`1", "GetFullWeight()");
    MasterBase__GFWResult collection1;
    ::g::Fuse::Animations::MixerHandle* ret1;
    float fullWeight = 0.0f;
    int c = uPtr(Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr(Handles), uCRef<int>(i), &ret1), ret1);

        if (uPtr(v)->MixOp() == 2)
            fullWeight = fullWeight + (uPtr(v)->HasValue() ? ::g::Uno::Math::Max1(0.0f, uPtr(v)->Strength) : 0.0f);
    }

    float restWeight = 1.0f - ::g::Uno::Math::Min1(fullWeight, 1.0f);
    fullWeight = ::g::Uno::Math::Max1(1.0f, fullWeight);
    collection1 = uDefault<MasterBase__GFWResult>();
    collection1.Rest = restWeight;
    collection1.Full = fullWeight;
    return collection1;
}

// public void MarkDirty() [instance] :1660
void MasterBase::MarkDirty()
{
    uStackFrame __("Fuse.Animations.MasterBase`1", "MarkDirty()");

    if (DirtyValue)
        return;

    DirtyValue = true;

    if (uPtr(Handles)->Count() < 2)
    {
        Complete();
        return;
    }

    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)MasterBase__Complete_fn, this), -1, 0);
}

// public void Register(Fuse.Animations.MixerHandle<T> handle) [instance] :1611
void MasterBase::Register(::g::Fuse::Animations::MixerHandle* handle)
{
    uStackFrame __("Fuse.Animations.MasterBase`1", "Register(Fuse.Animations.MixerHandle<T>)");
    ::g::Fuse::Animations::MixerHandle* ret2;

    if (_inactive)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[8/*"Attempt to ...*/], this, ::STRINGS[2/*"/Users/most...*/], 1615, ::STRINGS[9/*"Register"*/]);
        return;
    }

    int at = 0;

    for (; (at < uPtr(Handles)->Count()) && (uPtr(handle)->Priority() <= uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Handles), uCRef<int>(at), &ret2), ret2))->Priority()); ++at)
        ;

    ::g::Uno::Collections::List__Insert_fn(uPtr(Handles), uCRef<int>(at), handle);

    if (uPtr(Handles)->Count() == 1)
        OnActive();
}

// public void Unregister(Fuse.Animations.MixerHandle<T> handle) [instance] :1627
void MasterBase::Unregister(::g::Fuse::Animations::MixerHandle* handle)
{
    uStackFrame __("Fuse.Animations.MasterBase`1", "Unregister(Fuse.Animations.MixerHandle<T>)");
    bool ret3;
    ::g::Uno::Collections::List__Remove_fn(uPtr(Handles), handle, &ret3);
    MarkDirty();

    if (uPtr(Handles)->Count() == 0)
    {
        _inactive = true;
        OnInactive();

        if (_mixerBase != NULL)
            uPtr(_mixerBase)->Unused((uObject*)this);
    }
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal abstract class MasterProperty<T> :1708
// {
static void MasterProperty_build(uType* type)
{
    ::STRINGS[10] = uString::Const("The property ");
    ::STRINGS[11] = uString::Const(" of ");
    ::STRINGS[12] = uString::Const(" cannot be reliably animated because it does not provide an origin-setter. Animating this property may lead to visual glitches or inconsistencies.");
    ::STRINGS[2] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno");
    ::STRINGS[13] = uString::Const("GiveOriginSetterWarning");
    type->SetBase(::g::Fuse::Animations::MasterBase_typeof()->MakeType(type->T(0), NULL));
    type->SetPrecalc(
        type->T(0));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(MasterProperty_type, interface0),
        ::g::Fuse::Animations::MasterPropertyGet_typeof(), offsetof(MasterProperty_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(MasterProperty_type, interface2));
    type->SetFields(4,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MasterProperty, _hasSetValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MasterProperty, _isListening), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MasterProperty, _warningGiven), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Animations::MasterProperty, Property), 0);
}

MasterProperty_type* MasterProperty_typeof()
{
    static uSStrong<MasterProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MasterBase_typeof();
    options.FieldCount = 10;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(MasterProperty);
    options.TypeSize = sizeof(MasterProperty_type);
    type = (MasterProperty_type*)uClassType::New("Fuse.Animations.MasterProperty`1", options);
    type->fp_build_ = MasterProperty_build;
    type->fp_OnActive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterProperty__OnActive_fn;
    type->fp_OnInactive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterProperty__OnInactive_fn;
    type->fp_get_RestValue = (void(*)(::g::Fuse::Animations::MasterBase*, uTRef))MasterProperty__get_RestValue_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))MasterProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_GetPropertyObject = (void(*)(uObject*, uObject**))MasterProperty__GetPropertyObject_fn;
    return type;
}

// protected MasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :1713
void MasterProperty__ctor_1_fn(MasterProperty* __this, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_1(property, mixerBase);
}

// public object GetPropertyObject() :1711
void MasterProperty__GetPropertyObject_fn(MasterProperty* __this, uObject** __retval)
{
    *__retval = __this->GetPropertyObject();
}

// private void GiveOriginSetterWarning() :1767
void MasterProperty__GiveOriginSetterWarning_fn(MasterProperty* __this)
{
    __this->GiveOriginSetterWarning();
}

// protected override void OnActive() :1729
void MasterProperty__OnActive_fn(MasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(MasterProperty_typeof())->Precalced(0/*T*/),
    };
    uStackFrame __("Fuse.Animations.MasterProperty`1", "OnActive()");
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (!__this->_isListening)
    {
        __this->_restValue() = (uPtr(__this->Property)->Get_ex(&ret1), ret1);
        uPtr(__this->Property)->AddListener((uObject*)__this);
        __this->_isListening = true;
    }
}

// protected override sealed void OnInactive() :1739
void MasterProperty__OnInactive_fn(MasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(MasterProperty_typeof())->Precalced(0/*T*/),
    };
    uStackFrame __("Fuse.Animations.MasterProperty`1", "OnInactive()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->_isListening)
    {
        uPtr(__this->Property)->RemoveListener((uObject*)__this);
        uPtr(__this->Property)->Set_ex((__this->get_RestValue_ex(&ret2), ret2), (uObject*)__this);
        __this->_isListening = false;
    }
}

// public override sealed T get_RestValue() :1722
void MasterProperty__get_RestValue_fn(MasterProperty* __this, uTRef __retval)
{
    return __retval.Store(__this->_restValue()), void();
}

// protected void Set(T value) :1779
void MasterProperty__Set_fn(MasterProperty* __this, void* value)
{
    uStackFrame __("Fuse.Animations.MasterProperty`1", "Set(T)");

    if (!__this->_isListening)
        U_THROW(::g::Uno::Exception::New1());

    __this->_hasSetValue = true;
    __this->_lastSetValue() = value;
    uPtr(__this->Property)->Set_ex(value, (uObject*)__this);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector property) :1749
void MasterProperty__UnoUXIPropertyListenerOnPropertyChanged_fn(MasterProperty* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* property)
{
    uType* __types[] = {
        __this->__type->GetBase(MasterProperty_typeof())->Precalced(0/*T*/),
    };
    uStackFrame __("Fuse.Animations.MasterProperty`1", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT v(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Uno::UX::Selector property_ = *property;

    if (::g::Uno::UX::Selector__op_Inequality(uPtr(__this->Property)->Name(), property_))
        return;

    v = (uPtr(__this->Property)->Get_ex(&ret3), ret3);

    if (uPtr(__this->Property)->SupportsOriginSetter())
        __this->_restValue() = v;
    else if (!__this->_hasSetValue || !::g::Uno::Object::Equals(uBoxPtr(__types[0], uPtr(__this->_lastSetValue()), U_ALLOCA(__types[0]->ObjectSize)), uBoxPtr(__types[0], v)))
    {
        __this->GiveOriginSetterWarning();
        __this->_restValue() = v;
    }
}

// protected MasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [instance] :1713
void MasterProperty::ctor_1(::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_(mixerBase);
    Property = property;
}

// public object GetPropertyObject() [instance] :1711
uObject* MasterProperty::GetPropertyObject()
{
    return Property;
}

// private void GiveOriginSetterWarning() [instance] :1767
void MasterProperty::GiveOriginSetterWarning()
{
    uStackFrame __("Fuse.Animations.MasterProperty`1", "GiveOriginSetterWarning()");

    if (!_warningGiven)
    {
        _warningGiven = true;
        ::g::Fuse::Diagnostics::UserWarning(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[10/*"The property "*/], ::g::Uno::UX::Selector__op_Implicit1(uPtr(Property)->Name())), ::STRINGS[11/*" of "*/]), uPtr(Property)->Object()), ::STRINGS[12/*" cannot be ...*/]), this, ::STRINGS[2/*"/Users/most...*/], 1772, ::STRINGS[13/*"GiveOriginS...*/]);
    }
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal abstract interface MasterPropertyGet :1704
// {
uInterfaceType* MasterPropertyGet_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.MasterPropertyGet", 0, 0);
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal abstract class MasterTransform :1825
// {
// static MasterTransform() :1825
static void MasterTransform__cctor__fn(uType* __type)
{
    MasterTransform::identity_ = ::g::Fuse::Translation::New2();
}

static void MasterTransform_build(uType* type)
{
    ::TYPES[54] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetBase(::g::Fuse::Animations::MasterBase_typeof()->MakeType(::g::Fuse::Transform_typeof(), NULL));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterBase_type, interface0));
    type->SetFields(4,
        ::g::Fuse::Animations::FastMatrixTransform_typeof(), offsetof(::g::Fuse::Animations::MasterTransform, FMT), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::MasterTransform, Visual), 0,
        ::g::Fuse::Transform_typeof(), (uintptr_t)&::g::Fuse::Animations::MasterTransform::identity_, uFieldFlagsStatic);
}

::g::Fuse::Animations::MasterBase_type* MasterTransform_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MasterBase_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MasterTransform);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterBase_type);
    type = (::g::Fuse::Animations::MasterBase_type*)uClassType::New("Fuse.Animations.MasterTransform", options);
    type->fp_build_ = MasterTransform_build;
    type->fp_cctor_ = MasterTransform__cctor__fn;
    type->fp_OnActive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterTransform__OnActive_fn;
    type->fp_OnInactive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterTransform__OnInactive_fn;
    type->fp_get_RestValue = (void(*)(::g::Fuse::Animations::MasterBase*, uTRef))MasterTransform__get_RestValue_fn;
    return type;
}

// protected MasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) :1830
void MasterTransform__ctor_1_fn(MasterTransform* __this, ::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_1(node, mixerBase);
}

// protected override sealed void OnActive() :1837
void MasterTransform__OnActive_fn(MasterTransform* __this)
{
    uStackFrame __("Fuse.Animations.MasterTransform", "OnActive()");
    __this->FMT = ::g::Fuse::Animations::FastMatrixTransform::New2();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->Visual)->Children()), ::TYPES[54/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->FMT);
}

// protected override sealed void OnInactive() :1843
void MasterTransform__OnInactive_fn(MasterTransform* __this)
{
    uStackFrame __("Fuse.Animations.MasterTransform", "OnInactive()");
    bool ret1;
    ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(__this->Visual)->Children()), ::TYPES[54/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->FMT, &ret1);
    __this->FMT = NULL;
}

// public override sealed Fuse.Transform get_RestValue() :1852
void MasterTransform__get_RestValue_fn(MasterTransform* __this, ::g::Fuse::Transform** __retval)
{
    return *__retval = MasterTransform::identity(), void();
}

uSStrong< ::g::Fuse::Transform*> MasterTransform::identity_;

// protected MasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) [instance] :1830
void MasterTransform::ctor_1(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_(mixerBase);
    Visual = node;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class Mixer :1532
// {
// static Mixer() :1532
static void Mixer__cctor__fn(uType* __type)
{
    Mixer::_default_ = (uObject*)::g::Fuse::Animations::AverageMixer::New1();
    Mixer::_defaultDiscrete_ = (uObject*)::g::Fuse::Animations::DiscreteMixer::New1();
}

static void Mixer_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Animations::IMixer_typeof(), (uintptr_t)&::g::Fuse::Animations::Mixer::_default_, uFieldFlagsStatic,
        ::g::Fuse::Animations::IMixer_typeof(), (uintptr_t)&::g::Fuse::Animations::Mixer::_defaultDiscrete_, uFieldFlagsStatic);
}

uType* Mixer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Mixer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.Mixer", options);
    type->fp_build_ = Mixer_build;
    type->fp_ctor_ = (void*)Mixer__New1_fn;
    type->fp_cctor_ = Mixer__cctor__fn;
    return type;
}

// public generated Mixer() :1532
void Mixer__ctor__fn(Mixer* __this)
{
    __this->ctor_();
}

// public static Fuse.Animations.IMixer get_Default() :1535
void Mixer__get_Default_fn(uObject** __retval)
{
    *__retval = Mixer::Default();
}

// public static Fuse.Animations.IMixer get_DefaultDiscrete() :1537
void Mixer__get_DefaultDiscrete_fn(uObject** __retval)
{
    *__retval = Mixer::DefaultDiscrete();
}

// public generated Mixer New() :1532
void Mixer__New1_fn(Mixer** __retval)
{
    *__retval = Mixer::New1();
}

uSStrong<uObject*> Mixer::_default_;
uSStrong<uObject*> Mixer::_defaultDiscrete_;

// public generated Mixer() [instance] :1532
void Mixer::ctor_()
{
}

// public generated Mixer New() [static] :1532
Mixer* Mixer::New1()
{
    Mixer* obj1 = (Mixer*)uNew(Mixer_typeof());
    obj1->ctor_();
    return obj1;
}

// public static Fuse.Animations.IMixer get_Default() [static] :1535
uObject* Mixer::Default()
{
    Mixer_typeof()->Init();
    return Mixer::_default();
}

// public static Fuse.Animations.IMixer get_DefaultDiscrete() [static] :1537
uObject* Mixer::DefaultDiscrete()
{
    Mixer_typeof()->Init();
    return Mixer::_defaultDiscrete();
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal abstract class MixerBase :1542
// {
static void MixerBase_build(uType* type)
{
    ::TYPES[55] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[56] = ::g::Fuse::Animations::MasterBase_typeof();
    ::TYPES[57] = ::g::Fuse::Animations::MixerHandle_typeof();
    ::TYPES[58] = ::TYPES[56/*Fuse.Animations.MasterBase`1*/]->MakeType(::g::Fuse::Transform_typeof(), NULL);
    ::TYPES[59] = ::TYPES[57/*Fuse.Animations.MixerHandle`1*/]->MakeType(::g::Fuse::Transform_typeof(), NULL);
    ::TYPES[60] = ::g::Fuse::Animations::MasterPropertyGet_typeof();
    ::TYPES[61] = ::g::Fuse::Animations::MasterTransform_typeof();
    type->MethodTypes[1]->SetPrecalc(
        type->MakeMethod(0/*CreateMaster<T>*/, type->MethodTypes[1]->U(0), NULL),
        ::TYPES[56/*Fuse.Animations.MasterBase`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL),
        ::TYPES[57/*Fuse.Animations.MixerHandle`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(MixerBase_type, interface0));
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(::g::Fuse::Animations::MixerBase, _propHandle), 0,
        ::TYPES[55/*Uno.Collections.Dictionary<object, object>*/], offsetof(::g::Fuse::Animations::MixerBase, Masters), 0);
}

MixerBase_type* MixerBase_typeof()
{
    static uSStrong<MixerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 2;
    options.ObjectSize = sizeof(MixerBase);
    options.TypeSize = sizeof(MixerBase_type);
    type = (MixerBase_type*)uClassType::New("Fuse.Animations.MixerBase", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0);
    type->MethodTypes[1] = type->NewMethodType(1, 3);
    type->fp_build_ = MixerBase_build;
    type->interface0.fp_Register = (void(*)(uObject*, uType*, ::g::Uno::UX::Property1*, int*, uObject**))MixerBase__Register_fn;
    type->interface0.fp_RegisterTransform = (void(*)(uObject*, ::g::Fuse::Visual*, int*, int*, uObject**))MixerBase__RegisterTransform_fn;
    return type;
}

// protected generated MixerBase() :1542
void MixerBase__ctor__fn(MixerBase* __this)
{
    __this->ctor_();
}

// public Fuse.Animations.IMixerHandle<T> Register<T>(Uno.UX.Property<T> property, Fuse.Animations.MixOp mode) :1546
void MixerBase__Register_fn(MixerBase* __this, uType* __type, ::g::Uno::UX::Property1* property, int* mode, uObject** __retval)
{
    *__retval = __this->Register(__type, property, *mode);
}

// public Fuse.Animations.IMixerHandle<Fuse.Transform> RegisterTransform(Fuse.Visual element, Fuse.Animations.MixOp mode, [int priority]) :1560
void MixerBase__RegisterTransform_fn(MixerBase* __this, ::g::Fuse::Visual* element, int* mode, int* priority, uObject** __retval)
{
    *__retval = __this->RegisterTransform(element, *mode, *priority);
}

// public void Unused(Fuse.Animations.IMixerMaster mb) :1575
void MixerBase__Unused_fn(MixerBase* __this, uObject* mb)
{
    __this->Unused(mb);
}

// protected generated MixerBase() [instance] :1542
void MixerBase::ctor_()
{
    Masters = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[55/*Uno.Collections.Dictionary<object, object>*/]));
    _propHandle = ::g::Fuse::Properties::CreateHandle();
}

// public Fuse.Animations.IMixerHandle<T> Register<T>(Uno.UX.Property<T> property, Fuse.Animations.MixOp mode) [instance] :1546
uObject* MixerBase::Register(uType* __type, ::g::Uno::UX::Property1* property, int mode)
{
    __type = MixerBase_typeof()->GetVirtual(1, __type);
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.MixerBase.CreateMaster<T>*/),
        __type->Precalced(1/*Fuse.Animations.MasterBase<T>*/),
        __type->Precalced(2/*Fuse.Animations.MixerHandle<T>*/),
    };
    uStackFrame __("Fuse.Animations.MixerBase", "Register`1(Uno.UX.Property<T>,Fuse.Animations.MixOp)");
    bool ret1;
    uObject* master;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Masters), property, (void**)(&master), &ret1), ret1))
    {
        master = (::g::Fuse::Animations::MasterProperty*)CreateMaster(__types[0], property, this);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Masters), property, master);
    }

    ::g::Fuse::Animations::MasterBase* masterT = uCast< ::g::Fuse::Animations::MasterBase*>(master, __types[1]);
    return (uObject*)((::g::Fuse::Animations::MixerHandle*)::g::Fuse::Animations::MixerHandle::New1(__types[2], masterT, mode, 0));
}

// public Fuse.Animations.IMixerHandle<Fuse.Transform> RegisterTransform(Fuse.Visual element, Fuse.Animations.MixOp mode, [int priority]) [instance] :1560
uObject* MixerBase::RegisterTransform(::g::Fuse::Visual* element, int mode, int priority)
{
    uStackFrame __("Fuse.Animations.MixerBase", "RegisterTransform(Fuse.Visual,Fuse.Animations.MixOp,[int])");
    uObject* master;

    if (!uPtr(uPtr(element)->Properties())->TryGet(_propHandle, &master))
    {
        master = CreateMasterTransform(element, this);
        uPtr(uPtr(element)->Properties())->Set(_propHandle, master);
    }

    ::g::Fuse::Animations::MasterBase* masterT = uCast< ::g::Fuse::Animations::MasterBase*>(master, ::TYPES[58/*Fuse.Animations.MasterBase<Fuse.Transform>*/]);
    return (uObject*)((::g::Fuse::Animations::MixerHandle*)::g::Fuse::Animations::MixerHandle::New1(::TYPES[59/*Fuse.Animations.MixerHandle<Fuse.Transform>*/], masterT, mode, priority));
}

// public void Unused(Fuse.Animations.IMixerMaster mb) [instance] :1575
void MixerBase::Unused(uObject* mb)
{
    uStackFrame __("Fuse.Animations.MixerBase", "Unused(Fuse.Animations.IMixerMaster)");
    bool ret2;
    uObject* prop = uAs<uObject*>(mb, ::TYPES[60/*Fuse.Animations.MasterPropertyGet*/]);

    if (prop != NULL)
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(Masters), ::g::Fuse::Animations::MasterPropertyGet::GetPropertyObject(uInterface(uPtr(prop), ::TYPES[60/*Fuse.Animations.MasterPropertyGet*/])), &ret2);

    ::g::Fuse::Animations::MasterTransform* trans = uAs< ::g::Fuse::Animations::MasterTransform*>(mb, ::TYPES[61/*Fuse.Animations.MasterTransform*/]);

    if (trans != NULL)
        uPtr(uPtr(uPtr(trans)->Visual)->Properties())->Clear(_propHandle);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class MixerHandle<T> :1856
// {
static void MixerHandle_build(uType* type)
{
    ::STRINGS[14] = uString::Const("invalid MixerHandle.Set post-Unregister");
    ::STRINGS[2] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno");
    ::STRINGS[15] = uString::Const("Invalid MixerHandle.RestValue post-Unregister");
    type->SetPrecalc(
        type->T(0));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0), NULL), offsetof(MixerHandle_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MixerHandle, _hasValue), 0,
        ::g::Fuse::Animations::MasterBase_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Animations::MixerHandle, Master), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::MixerHandle, Strength), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Fuse::Animations::MixOp_typeof(), offsetof(::g::Fuse::Animations::MixerHandle, _MixOp), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Animations::MixerHandle, _Priority), 0);
}

MixerHandle_type* MixerHandle_typeof()
{
    static uSStrong<MixerHandle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(MixerHandle);
    options.TypeSize = sizeof(MixerHandle_type);
    type = (MixerHandle_type*)uClassType::New("Fuse.Animations.MixerHandle`1", options);
    type->fp_build_ = MixerHandle_build;
    type->interface0.fp_Unregister = (void(*)(uObject*))MixerHandle__Unregister_fn;
    type->interface0.fp_Set = (void(*)(uObject*, void*, float*))MixerHandle__Set_fn;
    type->interface0.fp_get_RestValue = (void(*)(uObject*, uTRef))MixerHandle__get_RestValue_fn;
    return type;
}

// public MixerHandle(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) :1869
void MixerHandle__ctor__fn(MixerHandle* __this, ::g::Fuse::Animations::MasterBase* master, int* mode, int* priority)
{
    __this->ctor_(master, *mode, *priority);
}

// public bool get_HasValue() :1862
void MixerHandle__get_HasValue_fn(MixerHandle* __this, bool* __retval)
{
    *__retval = __this->HasValue();
}

// public generated Fuse.Animations.MixOp get_MixOp() :1864
void MixerHandle__get_MixOp_fn(MixerHandle* __this, int* __retval)
{
    *__retval = __this->MixOp();
}

// public generated void set_MixOp(Fuse.Animations.MixOp value) :1864
void MixerHandle__set_MixOp_fn(MixerHandle* __this, int* value)
{
    __this->MixOp(*value);
}

// public MixerHandle New(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) :1869
void MixerHandle__New1_fn(uType* __type, ::g::Fuse::Animations::MasterBase* master, int* mode, int* priority, MixerHandle** __retval)
{
    *__retval = MixerHandle::New1(__type, master, *mode, *priority);
}

// public generated int get_Priority() :1866
void MixerHandle__get_Priority_fn(MixerHandle* __this, int* __retval)
{
    *__retval = __this->Priority();
}

// private generated void set_Priority(int value) :1866
void MixerHandle__set_Priority_fn(MixerHandle* __this, int* value)
{
    __this->Priority(*value);
}

// public T get_RestValue() :1900
void MixerHandle__get_RestValue_fn(MixerHandle* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*T*/),
    };
    uStackFrame __("Fuse.Animations.MixerHandle`1", "get_RestValue()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->Master == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[15/*"Invalid Mix...*/]));

    return __retval.Store((uPtr(__this->Master)->get_RestValue_ex(&ret2), ret2)), void();
}

// public void Set(T value, float strength) :1884
void MixerHandle__Set_fn(MixerHandle* __this, void* value, float* strength)
{
    uStackFrame __("Fuse.Animations.MixerHandle`1", "Set(T,float)");
    float strength_ = *strength;

    if (__this->Master == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[14/*"invalid Mix...*/], 1, ::STRINGS[2/*"/Users/most...*/], 1888);
        return;
    }

    __this->_hasValue = true;
    __this->Value() = value;
    __this->Strength = strength_;
    uPtr(__this->Master)->MarkDirty();
}

// public void Unregister() :1877
void MixerHandle__Unregister_fn(MixerHandle* __this)
{
    __this->Unregister();
}

// public MixerHandle(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) [instance] :1869
void MixerHandle::ctor_(::g::Fuse::Animations::MasterBase* master, int mode, int priority)
{
    uStackFrame __("Fuse.Animations.MixerHandle`1", ".ctor(Fuse.Animations.MasterBase<T>,Fuse.Animations.MixOp,int)");
    Priority(priority);
    Master = master;
    MixOp(mode);
    uPtr(Master)->Register(this);
}

// public bool get_HasValue() [instance] :1862
bool MixerHandle::HasValue()
{
    return _hasValue;
}

// public generated Fuse.Animations.MixOp get_MixOp() [instance] :1864
int MixerHandle::MixOp()
{
    return _MixOp;
}

// public generated void set_MixOp(Fuse.Animations.MixOp value) [instance] :1864
void MixerHandle::MixOp(int value)
{
    _MixOp = value;
}

// public generated int get_Priority() [instance] :1866
int MixerHandle::Priority()
{
    return _Priority;
}

// private generated void set_Priority(int value) [instance] :1866
void MixerHandle::Priority(int value)
{
    _Priority = value;
}

// public void Unregister() [instance] :1877
void MixerHandle::Unregister()
{
    uStackFrame __("Fuse.Animations.MixerHandle`1", "Unregister()");
    _hasValue = false;
    uPtr(Master)->Unregister(this);
    Master = NULL;
}

// public MixerHandle New(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) [static] :1869
MixerHandle* MixerHandle::New1(uType* __type, ::g::Fuse::Animations::MasterBase* master, int mode, int priority)
{
    MixerHandle* obj1 = (MixerHandle*)uNew(__type);
    obj1->ctor_(master, mode, priority);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public enum MixOp :1509
uEnumType* MixOp_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.MixOp", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Offset", 0LL,
        "Add", 1LL,
        "Weight", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class Move :3679
// {
static void Move_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Translation_typeof(), NULL));
    type->SetFields(22,
        ::g::Fuse::ITranslationMode_typeof(), offsetof(::g::Fuse::Animations::Move, _relativeTo), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Move__New2_fn, 0, true, type, 0),
        new uFunction("get_RelativeTo", NULL, (void*)Move__get_RelativeTo_fn, 0, false, ::g::Fuse::ITranslationMode_typeof(), 0),
        new uFunction("set_RelativeTo", NULL, (void*)Move__set_RelativeTo_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::ITranslationMode_typeof()));
}

::g::Fuse::Animations::TransformAnimator_type* Move_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TransformAnimator_typeof();
    options.FieldCount = 23;
    options.ObjectSize = sizeof(Move);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Move", options);
    type->fp_build_ = Move_build;
    type->fp_ctor_ = (void*)Move__New2_fn;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Visual*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Move__Update_fn;
    return type;
}

// public Move() :3681
void Move__ctor_4_fn(Move* __this)
{
    __this->ctor_4();
}

// public Move New() :3681
void Move__New2_fn(Move** __retval)
{
    *__retval = Move::New2();
}

// public Fuse.ITranslationMode get_RelativeTo() :3706
void Move__get_RelativeTo_fn(Move* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.ITranslationMode value) :3707
void Move__set_RelativeTo_fn(Move* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// internal override sealed void Update(Fuse.Visual elm, Fuse.Translation t, float4 value) :3710
void Move__Update_fn(Move* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Translation* t, ::g::Uno::Float4* value)
{
    uStackFrame __("Fuse.Animations.Move", "Update(Fuse.Visual,Fuse.Translation,float4)");
    ::g::Fuse::Visual* ind1;
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->RelativeNode((ind1 = __this->RelativeNode(), (ind1 != NULL) ? ind1 : elm));
    t->RelativeTo(__this->RelativeTo());
    t->Vector(::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z));
}

// public Move() [instance] :3681
void Move::ctor_4()
{
    _relativeTo = ::g::Fuse::TranslationModes::Local();
    ctor_3();
    Priority(1000);
}

// public Fuse.ITranslationMode get_RelativeTo() [instance] :3706
uObject* Move::RelativeTo()
{
    return _relativeTo;
}

// public void set_RelativeTo(Fuse.ITranslationMode value) [instance] :3707
void Move::RelativeTo(uObject* value)
{
    _relativeTo = value;
}

// public Move New() [static] :3681
Move* Move::New2()
{
    Move* obj2 = (Move*)uNew(Move_typeof());
    obj2->ctor_4();
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class Nothing :1922
// {
static void Nothing_build(uType* type)
{
    type->SetFields(19);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Nothing__New2_fn, 0, true, type, 0));
}

::g::Fuse::Animations::Animator_type* Nothing_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimator_typeof();
    options.FieldCount = 19;
    options.ObjectSize = sizeof(Nothing);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Nothing", options);
    type->fp_build_ = Nothing_build;
    type->fp_ctor_ = (void*)Nothing__New2_fn;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Nothing__CreateState_fn;
    return type;
}

// public generated Nothing() :1922
void Nothing__ctor_3_fn(Nothing* __this)
{
    __this->ctor_3();
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :1924
void Nothing__CreateState_fn(Nothing* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    return *__retval = ::g::Fuse::Animations::NothingAnimatorState::New1(__this, p), void();
}

// public generated Nothing New() :1922
void Nothing__New2_fn(Nothing** __retval)
{
    *__retval = Nothing::New2();
}

// public generated Nothing() [instance] :1922
void Nothing::ctor_3()
{
    uStackFrame __("Fuse.Animations.Nothing", ".ctor()");
    ctor_2();
}

// public generated Nothing New() [static] :1922
Nothing* Nothing::New2()
{
    Nothing* obj1 = (Nothing*)uNew(Nothing_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class NothingAnimatorState :1930
// {
static void NothingAnimatorState_build(uType* type)
{
    type->SetFields(6);
}

::g::Fuse::Animations::TrackAnimatorState_type* NothingAnimatorState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimatorState_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(NothingAnimatorState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.NothingAnimatorState", options);
    type->fp_build_ = NothingAnimatorState_build;
    return type;
}

// public NothingAnimatorState(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) :1932
void NothingAnimatorState__ctor_2_fn(NothingAnimatorState* __this, ::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public NothingAnimatorState New(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) :1932
void NothingAnimatorState__New1_fn(::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p, NothingAnimatorState** __retval)
{
    *__retval = NothingAnimatorState::New1(animator, p);
}

// public NothingAnimatorState(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) [instance] :1932
void NothingAnimatorState::ctor_2(::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uStackFrame __("Fuse.Animations.NothingAnimatorState", ".ctor(Fuse.Animations.Nothing,Fuse.Animations.CreateStateParams)");
    ctor_1(animator, p, NULL);
}

// public NothingAnimatorState New(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) [static] :1932
NothingAnimatorState* NothingAnimatorState::New1(::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    NothingAnimatorState* obj1 = (NothingAnimatorState*)uNew(NothingAnimatorState_typeof());
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public abstract class OpenAnimator :1955
// {
static void OpenAnimator_build(uType* type)
{
    type->SetFields(4,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::OpenAnimator, _duration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::OpenAnimator, _hasDuration), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Duration", NULL, (void*)OpenAnimator__get_Duration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Duration", NULL, (void*)OpenAnimator__set_Duration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_HasDuration", NULL, (void*)OpenAnimator__get_HasDuration_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("ResetDuration", NULL, (void*)OpenAnimator__ResetDuration_fn, 0, false, uVoid_typeof(), 0));
}

::g::Fuse::Animations::Animator_type* OpenAnimator_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Animator_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(OpenAnimator);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.OpenAnimator", options);
    type->fp_build_ = OpenAnimator_build;
    type->fp_get_AnimatorVariant = (void(*)(::g::Fuse::Animations::Animator*, int*))OpenAnimator__get_AnimatorVariant_fn;
    type->fp_GetDurationWithDelay = (void(*)(::g::Fuse::Animations::Animator*, int*, double*))OpenAnimator__GetDurationWithDelay_fn;
    return type;
}

// protected generated OpenAnimator() :1955
void OpenAnimator__ctor_2_fn(OpenAnimator* __this)
{
    __this->ctor_2();
}

// internal override sealed Fuse.Animations.AnimatorVariant get_AnimatorVariant() :1959
void OpenAnimator__get_AnimatorVariant_fn(OpenAnimator* __this, int* __retval)
{
    return *__retval = 1, void();
}

// public double get_Duration() :1970
void OpenAnimator__get_Duration_fn(OpenAnimator* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public void set_Duration(double value) :1971
void OpenAnimator__set_Duration_fn(OpenAnimator* __this, double* value)
{
    __this->Duration(*value);
}

// internal double GetDelay(Fuse.Animations.AnimationVariant dir, double totalDuration) :1992
void OpenAnimator__GetDelay_fn(OpenAnimator* __this, int* dir, double* totalDuration, double* __retval)
{
    *__retval = __this->GetDelay(*dir, *totalDuration);
}

// internal override sealed double GetDurationWithDelay(Fuse.Animations.AnimationVariant dir) :1987
void OpenAnimator__GetDurationWithDelay_fn(OpenAnimator* __this, int* dir, double* __retval)
{
    return *__retval = __this->Delay() + __this->Duration(), void();
}

// public bool get_HasDuration() :1985
void OpenAnimator__get_HasDuration_fn(OpenAnimator* __this, bool* __retval)
{
    *__retval = __this->HasDuration();
}

// public void ResetDuration() :1978
void OpenAnimator__ResetDuration_fn(OpenAnimator* __this)
{
    __this->ResetDuration();
}

// protected generated OpenAnimator() [instance] :1955
void OpenAnimator::ctor_2()
{
    ctor_1();
}

// public double get_Duration() [instance] :1970
double OpenAnimator::Duration()
{
    return _duration;
}

// public void set_Duration(double value) [instance] :1971
void OpenAnimator::Duration(double value)
{
    _duration = value;
    _hasDuration = true;
}

// internal double GetDelay(Fuse.Animations.AnimationVariant dir, double totalDuration) [instance] :1992
double OpenAnimator::GetDelay(int dir, double totalDuration)
{
    return Delay();
}

// public bool get_HasDuration() [instance] :1985
bool OpenAnimator::HasDuration()
{
    return _hasDuration;
}

// public void ResetDuration() [instance] :1978
void OpenAnimator::ResetDuration()
{
    _duration = 0.0;
    _hasDuration = false;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal abstract class OpenAnimatorState :1998
// {
static void OpenAnimatorState_build(uType* type)
{
    type->SetFields(3,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::OpenAnimatorState, _seekDone), 0,
        ::g::Fuse::Animations::OpenAnimator_typeof(), offsetof(::g::Fuse::Animations::OpenAnimatorState, Animator), 0);
}

OpenAnimatorState_type* OpenAnimatorState_typeof()
{
    static uSStrong<OpenAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::AnimatorState_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(OpenAnimatorState);
    options.TypeSize = sizeof(OpenAnimatorState_type);
    type = (OpenAnimatorState_type*)uClassType::New("Fuse.Animations.OpenAnimatorState", options);
    type->fp_build_ = OpenAnimatorState_build;
    type->fp_get_IsOpenEnd = (void(*)(::g::Fuse::Animations::AnimatorState*, bool*))OpenAnimatorState__get_IsOpenEnd_fn;
    type->fp_SeekProgress = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*))OpenAnimatorState__SeekProgress_fn;
    type->fp_SeekTime = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*))OpenAnimatorState__SeekTime_fn;
    return type;
}

// protected OpenAnimatorState(Fuse.Animations.OpenAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) :2003
void OpenAnimatorState__ctor_1_fn(OpenAnimatorState* __this, ::g::Fuse::Animations::OpenAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    __this->ctor_1(animator, p, useVisual);
}

// public override sealed bool get_IsOpenEnd() :2010
void OpenAnimatorState__get_IsOpenEnd_fn(OpenAnimatorState* __this, bool* __retval)
{
    return *__retval = true, void();
}

// internal override sealed Fuse.Animations.SeekResult SeekProgress(double progress, double interval, Fuse.Animations.SeekDirection dir, double strength) :2012
void OpenAnimatorState__SeekProgress_fn(OpenAnimatorState* __this, double* progress, double* interval, int* dir, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.OpenAnimatorState", "SeekProgress(double,double,Fuse.Animations.SeekDirection,double)");
    double progress_ = *progress;
    double interval_ = *interval;
    int dir_ = *dir;
    double strength_ = *strength;
    return *__retval = __this->SeekTime(progress_ * __this->TotalDuration, interval_, dir_, strength_), void();
}

// internal override sealed Fuse.Animations.SeekResult SeekTime(double nominal, double interval, Fuse.Animations.SeekDirection dir, double strength) :2018
void OpenAnimatorState__SeekTime_fn(OpenAnimatorState* __this, double* nominal, double* interval, int* dir, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.OpenAnimatorState", "SeekTime(double,double,Fuse.Animations.SeekDirection,double)");
    int dir_ = *dir;
    double nominal_ = *nominal;
    double interval_ = *interval;
    double strength_ = *strength;
    double delay = uPtr(__this->Animator)->GetDelay(__this->Variant, __this->TotalDuration);
    bool on = (dir_ == 0) ? nominal_ > (delay - 9.9999997473787516e-06) : nominal_ > (delay + 9.9999997473787516e-06);

    if (uPtr(__this->Animator)->HasDuration() && (nominal_ > ((delay + uPtr(__this->Animator)->Duration()) - 9.9999997473787516e-06)))
        on = false;

    bool mayEnd = (dir_ == 0) ? nominal_ >= (uPtr(__this->Animator)->GetDurationWithDelay(__this->Variant) - 9.9999997473787516e-06) : nominal_ <= (delay + 9.9999997473787516e-06);

    if (on || !__this->_seekDone)
        __this->_seekDone = __this->Seek(on, (float)interval_, (float)strength_, dir_);

    return *__retval = (__this->_seekDone ? 2 : 0) | ((mayEnd && __this->_seekDone) ? 1 : 0), void();
}

// protected OpenAnimatorState(Fuse.Animations.OpenAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) [instance] :2003
void OpenAnimatorState::ctor_1(::g::Fuse::Animations::OpenAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    uStackFrame __("Fuse.Animations.OpenAnimatorState", ".ctor(Fuse.Animations.OpenAnimator,Fuse.Animations.CreateStateParams,[Fuse.Visual])");
    _seekDone = true;
    ctor_(p, useVisual);
    Animator = animator;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class Player :2212
// {
static void Player_build(uType* type)
{
    ::TYPES[62] = ::g::Fuse::Animations::IPlayerFeedback_typeof();
    type->SetInterfaces(
        ::g::Fuse::IUpdateListener_typeof(), offsetof(Player_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Player, _allStable), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Player, _isDone), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Player, _isStarted), 0,
        ::g::Fuse::Animations::PlayerPart_typeof(), offsetof(::g::Fuse::Animations::Player, _progress), 0,
        ::g::Fuse::Animations::SeekDirection_typeof(), offsetof(::g::Fuse::Animations::Player, _seekDirection), 0,
        ::g::Fuse::Animations::AnimatorState_typeof()->Array(), offsetof(::g::Fuse::Animations::Player, _states), 0,
        ::g::Fuse::Animations::PlayerPart_typeof(), offsetof(::g::Fuse::Animations::Player, _strength), 0,
        ::TYPES[62/*Fuse.Animations.IPlayerFeedback*/], offsetof(::g::Fuse::Animations::Player, Feedback), 0,
        ::g::Fuse::Animations::TriggerAnimation_typeof(), offsetof(::g::Fuse::Animations::Player, _Animation), 0,
        ::g::Fuse::Animations::PlayMode_typeof(), offsetof(::g::Fuse::Animations::Player, _Mode), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Animations::Player, _Variant), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::Player, _Visual), 0);
}

Player_type* Player_typeof()
{
    static uSStrong<Player_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Player);
    options.TypeSize = sizeof(Player_type);
    type = (Player_type*)uClassType::New("Fuse.Animations.Player", options);
    type->fp_build_ = Player_build;
    type->interface0.fp_Update = (void(*)(uObject*))Player__FuseIUpdateListenerUpdate_fn;
    return type;
}

// public Player(Fuse.Visual elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) :2234
void Player__ctor__fn(Player* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int* variant, int* mode)
{
    __this->ctor_(elm, animation, *variant, *mode);
}

// public generated Fuse.Animations.TriggerAnimation get_Animation() :2217
void Player__get_Animation_fn(Player* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->Animation();
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) :2217
void Player__set_Animation_fn(Player* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->Animation(value);
}

// public double get_AnimatorsDuration() :2250
void Player__get_AnimatorsDuration_fn(Player* __this, double* __retval)
{
    *__retval = __this->AnimatorsDuration();
}

// private void CheckUpdate([bool interval]) :2256
void Player__CheckUpdate_fn(Player* __this, bool* interval)
{
    __this->CheckUpdate(*interval);
}

// public void Disable() :2346
void Player__Disable_fn(Player* __this)
{
    __this->Disable();
}

// private void Done() :2331
void Player__Done_fn(Player* __this)
{
    __this->Done();
}

// public void FadeIn(double time) :2460
void Player__FadeIn_fn(Player* __this, double* time)
{
    __this->FadeIn(*time);
}

// public void FadeOut(double time) :2467
void Player__FadeOut_fn(Player* __this, double* time)
{
    __this->FadeOut(*time);
}

// private void Fuse.IUpdateListener.Update() :2252
void Player__FuseIUpdateListenerUpdate_fn(Player* __this)
{
    uStackFrame __("Fuse.Animations.Player", "Fuse.IUpdateListener.Update()");
    __this->CheckUpdate(true);
}

// public bool get_IsStable() :2298
void Player__get_IsStable_fn(Player* __this, bool* __retval)
{
    *__retval = __this->IsStable();
}

// internal bool get_IsSyncState() :2386
void Player__get_IsSyncState_fn(Player* __this, bool* __retval)
{
    *__retval = __this->IsSyncState();
}

// public generated Fuse.Animations.PlayMode get_Mode() :2219
void Player__get_Mode_fn(Player* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// private generated void set_Mode(Fuse.Animations.PlayMode value) :2219
void Player__set_Mode_fn(Player* __this, int* value)
{
    __this->Mode(*value);
}

// public Player New(Fuse.Visual elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) :2234
void Player__New1_fn(::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int* variant, int* mode, Player** __retval)
{
    *__retval = Player::New1(elm, animation, *variant, *mode);
}

// public void PlayToEnd() :2432
void Player__PlayToEnd_fn(Player* __this)
{
    __this->PlayToEnd();
}

// public void PlayToProgress(double progress) :2423
void Player__PlayToProgress_fn(Player* __this, double* progress)
{
    __this->PlayToProgress(*progress);
}

// public void PlayToStart() :2440
void Player__PlayToStart_fn(Player* __this)
{
    __this->PlayToStart();
}

// public double get_Progress() :2360
void Player__get_Progress_fn(Player* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public double get_RemainTime() :2364
void Player__get_RemainTime_fn(Player* __this, double* __retval)
{
    *__retval = __this->RemainTime();
}

// public void SeekProgress(double progress, [bool triggerUpdate]) :2374
void Player__SeekProgress_fn(Player* __this, double* progress, bool* triggerUpdate)
{
    __this->SeekProgress(*progress, *triggerUpdate);
}

// private void Start() :2303
void Player__Start_fn(Player* __this)
{
    __this->Start();
}

// private Fuse.Animations.AnimatorState[] get_States() :2224
void Player__get_States_fn(Player* __this, uArray** __retval)
{
    *__retval = __this->States();
}

// private void Stop() :2312
void Player__Stop_fn(Player* __this)
{
    __this->Stop();
}

// public double get_Strength() :2452
void Player__get_Strength_fn(Player* __this, double* __retval)
{
    *__retval = __this->Strength();
}

// public void set_Strength(double value) :2453
void Player__set_Strength_fn(Player* __this, double* value)
{
    __this->Strength(*value);
}

// public void Suspend() :2321
void Player__Suspend_fn(Player* __this)
{
    __this->Suspend();
}

// public void TimeChanged() :2244
void Player__TimeChanged_fn(Player* __this)
{
    __this->TimeChanged();
}

// private bool UpdateStates(bool isInterval) :2392
void Player__UpdateStates_fn(Player* __this, bool* isInterval, bool* __retval)
{
    *__retval = __this->UpdateStates(*isInterval);
}

// public generated Fuse.Animations.AnimationVariant get_Variant() :2218
void Player__get_Variant_fn(Player* __this, int* __retval)
{
    *__retval = __this->Variant();
}

// public generated void set_Variant(Fuse.Animations.AnimationVariant value) :2218
void Player__set_Variant_fn(Player* __this, int* value)
{
    __this->Variant(*value);
}

// public generated Fuse.Visual get_Visual() :2216
void Player__get_Visual_fn(Player* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Visual();
}

// private generated void set_Visual(Fuse.Visual value) :2216
void Player__set_Visual_fn(Player* __this, ::g::Fuse::Visual* value)
{
    __this->Visual(value);
}

// public Player(Fuse.Visual elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) [instance] :2234
void Player::ctor_(::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int variant, int mode)
{
    uStackFrame __("Fuse.Animations.Player", ".ctor(Fuse.Visual,Fuse.Animations.TriggerAnimation,Fuse.Animations.AnimationVariant,Fuse.Animations.PlayMode)");
    _allStable = true;
    _progress = ::g::Fuse::Animations::PlayerPart::New1(0.0);
    _seekDirection = 1;
    _strength = ::g::Fuse::Animations::PlayerPart::New1(1.0);
    Animation(animation);
    Visual(elm);
    Variant(variant);
    Mode(mode);
    TimeChanged();
}

// public generated Fuse.Animations.TriggerAnimation get_Animation() [instance] :2217
::g::Fuse::Animations::TriggerAnimation* Player::Animation()
{
    return _Animation;
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) [instance] :2217
void Player::Animation(::g::Fuse::Animations::TriggerAnimation* value)
{
    _Animation = value;
}

// public double get_AnimatorsDuration() [instance] :2250
double Player::AnimatorsDuration()
{
    uStackFrame __("Fuse.Animations.Player", "get_AnimatorsDuration()");
    return uPtr(_progress)->Duration;
}

// private void CheckUpdate([bool interval]) [instance] :2256
void Player::CheckUpdate(bool interval)
{
    uStackFrame __("Fuse.Animations.Player", "CheckUpdate([bool])");
    bool running = false;

    if (uPtr(_progress)->Animate)
    {
        running = true;

        if (Mode() == 1)
            uPtr(_progress)->WrapStep();
        else
            uPtr(_progress)->Step();

        if (Feedback != NULL)
            ::g::Fuse::Animations::IPlayerFeedback::OnProgressUpdated(uInterface(uPtr(Feedback), ::TYPES[62/*Fuse.Animations.IPlayerFeedback*/]), this);
    }

    if (uPtr(_strength)->Animate)
    {
        running = true;
        uPtr(_strength)->Step();
    }

    bool stable = UpdateStates(interval);

    if (stable && !running)
        Stop();
    else
        Start();

    if (!running)
        Done();

    if (stable != _allStable)
    {
        _allStable = stable;

        if ((Feedback != NULL) && stable)
            ::g::Fuse::Animations::IPlayerFeedback::OnStable(uInterface(uPtr(Feedback), ::TYPES[62/*Fuse.Animations.IPlayerFeedback*/]), this);
    }
}

// public void Disable() [instance] :2346
void Player::Disable()
{
    uStackFrame __("Fuse.Animations.Player", "Disable()");
    Stop();

    if (_states != NULL)
    {
        for (int i = 0; i < uPtr(_states)->Length(); i++)
            uPtr(uPtr(_states)->Strong< ::g::Fuse::Animations::AnimatorState*>(i))->Disable();

        _states = NULL;
    }
}

// private void Done() [instance] :2331
void Player::Done()
{
    uStackFrame __("Fuse.Animations.Player", "Done()");
    uPtr(_progress)->Animate = false;
    uPtr(_strength)->Animate = false;

    if (!_isDone)
    {
        _isDone = true;

        if (Feedback != NULL)
            ::g::Fuse::Animations::IPlayerFeedback::OnPlaybackDone(uInterface(uPtr(Feedback), ::TYPES[62/*Fuse.Animations.IPlayerFeedback*/]), this);
    }
}

// public void FadeIn(double time) [instance] :2460
void Player::FadeIn(double time)
{
    uStackFrame __("Fuse.Animations.Player", "FadeIn(double)");
    uPtr(_strength)->AlterDuration(time, 1.0);
    uPtr(_strength)->PlayToEnd();
    CheckUpdate(false);
}

// public void FadeOut(double time) [instance] :2467
void Player::FadeOut(double time)
{
    uStackFrame __("Fuse.Animations.Player", "FadeOut(double)");
    uPtr(_strength)->AlterDuration(time, 1.0);
    uPtr(_strength)->PlayToStart();
    CheckUpdate(false);
}

// public bool get_IsStable() [instance] :2298
bool Player::IsStable()
{
    return _allStable;
}

// internal bool get_IsSyncState() [instance] :2386
bool Player::IsSyncState()
{
    uStackFrame __("Fuse.Animations.Player", "get_IsSyncState()");
    return (uPtr(_progress)->Current == 0.0) || (uPtr(_progress)->Progress() == 1.0);
}

// public generated Fuse.Animations.PlayMode get_Mode() [instance] :2219
int Player::Mode()
{
    return _Mode;
}

// private generated void set_Mode(Fuse.Animations.PlayMode value) [instance] :2219
void Player::Mode(int value)
{
    _Mode = value;
}

// public void PlayToEnd() [instance] :2432
void Player::PlayToEnd()
{
    uStackFrame __("Fuse.Animations.Player", "PlayToEnd()");
    _seekDirection = 0;
    uPtr(_progress)->PlayToEnd();
    _isDone = false;
    CheckUpdate(false);
}

// public void PlayToProgress(double progress) [instance] :2423
void Player::PlayToProgress(double progress)
{
    uStackFrame __("Fuse.Animations.Player", "PlayToProgress(double)");

    if (progress != uPtr(_progress)->Progress())
        _seekDirection = ((progress > uPtr(_progress)->Progress()) ? 0 : 1);

    uPtr(_progress)->PlayToProgress(progress);
    _isDone = false;
    CheckUpdate(false);
}

// public void PlayToStart() [instance] :2440
void Player::PlayToStart()
{
    uStackFrame __("Fuse.Animations.Player", "PlayToStart()");
    _seekDirection = 1;
    uPtr(_progress)->PlayToStart();
    _isDone = false;
    CheckUpdate(false);
}

// public double get_Progress() [instance] :2360
double Player::Progress()
{
    uStackFrame __("Fuse.Animations.Player", "get_Progress()");
    return uPtr(_progress)->Progress();
}

// public double get_RemainTime() [instance] :2364
double Player::RemainTime()
{
    uStackFrame __("Fuse.Animations.Player", "get_RemainTime()");

    if (uPtr(_progress)->IsProgress || (uPtr(_progress)->Duration < 9.9999997473787516e-06))
        return 0.0;

    return (Variant() == 0) ? uPtr(_progress)->Duration - uPtr(_progress)->Current : uPtr(_progress)->Current;
}

// public void SeekProgress(double progress, [bool triggerUpdate]) [instance] :2374
void Player::SeekProgress(double progress, bool triggerUpdate)
{
    uStackFrame __("Fuse.Animations.Player", "SeekProgress(double,[bool])");
    uPtr(_progress)->SeekProgress(progress);
    _isDone = true;
    CheckUpdate(false);

    if (triggerUpdate && (Feedback != NULL))
        ::g::Fuse::Animations::IPlayerFeedback::OnProgressUpdated(uInterface(uPtr(Feedback), ::TYPES[62/*Fuse.Animations.IPlayerFeedback*/]), this);
}

// private void Start() [instance] :2303
void Player::Start()
{
    uStackFrame __("Fuse.Animations.Player", "Start()");

    if (!_isStarted)
    {
        _isStarted = true;
        ::g::Fuse::UpdateManager::AddAction((uObject*)this, 0);
    }
}

// private Fuse.Animations.AnimatorState[] get_States() [instance] :2224
uArray* Player::States()
{
    uStackFrame __("Fuse.Animations.Player", "get_States()");

    if (_states == NULL)
        _states = uPtr(Animation())->CreateAnimatorsState(Variant(), Visual());

    return _states;
}

// private void Stop() [instance] :2312
void Player::Stop()
{
    uStackFrame __("Fuse.Animations.Player", "Stop()");

    if (_isStarted)
    {
        _isStarted = false;
        ::g::Fuse::UpdateManager::RemoveAction((uObject*)this, 0);
    }
}

// public double get_Strength() [instance] :2452
double Player::Strength()
{
    uStackFrame __("Fuse.Animations.Player", "get_Strength()");
    return uPtr(_strength)->Progress();
}

// public void set_Strength(double value) [instance] :2453
void Player::Strength(double value)
{
    uStackFrame __("Fuse.Animations.Player", "set_Strength(double)");
    uPtr(_strength)->SeekProgress(value);
    CheckUpdate(false);
}

// public void Suspend() [instance] :2321
void Player::Suspend()
{
    uStackFrame __("Fuse.Animations.Player", "Suspend()");
    uPtr(_progress)->Animate = false;
    uPtr(_strength)->Animate = false;
    CheckUpdate(false);
}

// public void TimeChanged() [instance] :2244
void Player::TimeChanged()
{
    uStackFrame __("Fuse.Animations.Player", "TimeChanged()");
    uPtr(_progress)->AlterDuration(uPtr(Animation())->GetAnimatorsDuration(Variant()), uPtr(Animation())->GetTimeMultiplier(Variant()));
}

// private bool UpdateStates(bool isInterval) [instance] :2392
bool Player::UpdateStates(bool isInterval)
{
    uStackFrame __("Fuse.Animations.Player", "UpdateStates(bool)");
    bool allStable = true;
    double interval = isInterval ? ::g::Fuse::Time::FrameInterval() * uPtr(_progress)->TimeMultiplier() : 0.0;

    if (_seekDirection == 1)
        interval = -interval;

    for (int i = 0; i < uPtr(States())->Length(); ++i)
    {
        ::g::Fuse::Animations::AnimatorState* s = uPtr(States())->Strong< ::g::Fuse::Animations::AnimatorState*>(i);
        int stable;

        if (uPtr(_progress)->IsProgress)
            stable = uPtr(s)->SeekProgress(uPtr(_progress)->Current, interval, _seekDirection, uPtr(_strength)->Progress());
        else
            stable = uPtr(s)->SeekTime(uPtr(_progress)->Current, interval, _seekDirection, uPtr(_strength)->Progress());

        allStable = allStable && ((stable & 2) == 2);
    }

    return allStable;
}

// public generated Fuse.Animations.AnimationVariant get_Variant() [instance] :2218
int Player::Variant()
{
    return _Variant;
}

// public generated void set_Variant(Fuse.Animations.AnimationVariant value) [instance] :2218
void Player::Variant(int value)
{
    _Variant = value;
}

// public generated Fuse.Visual get_Visual() [instance] :2216
::g::Fuse::Visual* Player::Visual()
{
    return _Visual;
}

// private generated void set_Visual(Fuse.Visual value) [instance] :2216
void Player::Visual(::g::Fuse::Visual* value)
{
    _Visual = value;
}

// public Player New(Fuse.Visual elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) [static] :2234
Player* Player::New1(::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int variant, int mode)
{
    Player* obj1 = (Player*)uNew(Player_typeof());
    obj1->ctor_(elm, animation, variant, mode);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class PlayerPart :2065
// {
static void PlayerPart_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, _stepTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, _timeMultiplier), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Animate), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Current), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Duration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, IsProgress), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Source), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, SourceTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Target), 0);
}

uType* PlayerPart_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(PlayerPart);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.PlayerPart", options);
    type->fp_build_ = PlayerPart_build;
    return type;
}

// public PlayerPart([double currentProgress]) :2075
void PlayerPart__ctor__fn(PlayerPart* __this, double* currentProgress)
{
    __this->ctor_(*currentProgress);
}

// public void AlterDuration(double t, double timeMult) :2200
void PlayerPart__AlterDuration_fn(PlayerPart* __this, double* t, double* timeMult)
{
    __this->AlterDuration(*t, *timeMult);
}

// private void MarkSource(bool isAnimating) :2107
void PlayerPart__MarkSource_fn(PlayerPart* __this, bool* isAnimating)
{
    __this->MarkSource(*isAnimating);
}

// public PlayerPart New([double currentProgress]) :2075
void PlayerPart__New1_fn(double* currentProgress, PlayerPart** __retval)
{
    *__retval = PlayerPart::New1(*currentProgress);
}

// public void PlayToEnd() :2119
void PlayerPart__PlayToEnd_fn(PlayerPart* __this)
{
    __this->PlayToEnd();
}

// public void PlayToProgress(double progress) :2081
void PlayerPart__PlayToProgress_fn(PlayerPart* __this, double* progress)
{
    __this->PlayToProgress(*progress);
}

// public void PlayToStart() :2124
void PlayerPart__PlayToStart_fn(PlayerPart* __this)
{
    __this->PlayToStart();
}

// public double get_Progress() :2190
void PlayerPart__get_Progress_fn(PlayerPart* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public void SeekProgress(double p) :2172
void PlayerPart__SeekProgress_fn(PlayerPart* __this, double* p)
{
    __this->SeekProgress(*p);
}

// public void Step() :2130
void PlayerPart__Step_fn(PlayerPart* __this)
{
    __this->Step();
}

// public double get_TimeMultiplier() :2209
void PlayerPart__get_TimeMultiplier_fn(PlayerPart* __this, double* __retval)
{
    *__retval = __this->TimeMultiplier();
}

// public void WrapStep() :2151
void PlayerPart__WrapStep_fn(PlayerPart* __this)
{
    __this->WrapStep();
}

// public PlayerPart([double currentProgress]) [instance] :2075
void PlayerPart::ctor_(double currentProgress)
{
    _timeMultiplier = 1.0;
    IsProgress = true;
    Current = currentProgress;
}

// public void AlterDuration(double t, double timeMult) [instance] :2200
void PlayerPart::AlterDuration(double t, double timeMult)
{
    _timeMultiplier = timeMult;
    MarkSource(Animate);
    double p = Progress();
    Duration = t;
    SeekProgress(p);
}

// private void MarkSource(bool isAnimating) [instance] :2107
void PlayerPart::MarkSource(bool isAnimating)
{
    Source = Current;

    if (isAnimating && (_stepTime < ::g::Fuse::Time::FrameTime()))
        SourceTime = (::g::Fuse::Time::FrameTime() - (::g::Fuse::Time::FrameInterval() * _timeMultiplier));
    else
        SourceTime = ::g::Fuse::Time::FrameTime();
}

// public void PlayToEnd() [instance] :2119
void PlayerPart::PlayToEnd()
{
    PlayToProgress(1.0);
}

// public void PlayToProgress(double progress) [instance] :2081
void PlayerPart::PlayToProgress(double progress)
{
    bool nIsProgress;
    double nTarget;

    if (Duration < 9.9999997473787516e-06)
    {
        nIsProgress = true;
        nTarget = progress;
    }
    else
    {
        nIsProgress = false;
        nTarget = progress * Duration;
    }

    if (((nIsProgress == IsProgress) && (nTarget == Target)) && Animate)
        return;

    MarkSource(Animate);
    Animate = true;
    IsProgress = nIsProgress;
    Target = nTarget;
}

// public void PlayToStart() [instance] :2124
void PlayerPart::PlayToStart()
{
    PlayToProgress(0.0);
}

// public double get_Progress() [instance] :2190
double PlayerPart::Progress()
{
    if (IsProgress)
        return Current;
    else
        return ::g::Uno::Math::Clamp(Current / Duration, 0.0, 1.0);
}

// public void SeekProgress(double p) [instance] :2172
void PlayerPart::SeekProgress(double p)
{
    p = ::g::Uno::Math::Clamp(p, 0.0, 1.0);
    Animate = false;

    if (Duration < 9.9999997473787516e-06)
    {
        IsProgress = true;
        Current = p;
    }
    else
    {
        IsProgress = false;
        Current = (p * Duration);
    }
}

// public void Step() [instance] :2130
void PlayerPart::Step()
{
    _stepTime = ::g::Fuse::Time::FrameTime();
    double elapsed = (::g::Fuse::Time::FrameTime() - SourceTime) * _timeMultiplier;

    if (Target > Source)
        Current = (IsProgress ? 1.0 : ::g::Uno::Math::Min(elapsed + Source, Duration));
    else
        Current = (IsProgress ? 0.0 : ::g::Uno::Math::Max(Source - elapsed, 0.0));

    if (((Target >= Source) && (Current >= Target)) || ((Target <= Source) && (Current <= Target)))
    {
        Current = Target;
        Animate = false;
    }
}

// public double get_TimeMultiplier() [instance] :2209
double PlayerPart::TimeMultiplier()
{
    return _timeMultiplier;
}

// public void WrapStep() [instance] :2151
void PlayerPart::WrapStep()
{
    if (IsProgress || ((Target > 0.0) && (Target < 1.0)))
    {
        Step();
        return;
    }

    _stepTime = ::g::Fuse::Time::FrameTime();
    double elapsed = (::g::Fuse::Time::FrameTime() - SourceTime) * _timeMultiplier;

    if (Target > Source)
        Current = ::g::Uno::Math::Mod(elapsed + Source, Duration);
    else
        Current = ::g::Uno::Math::Mod(Source - elapsed, Duration);
}

// public PlayerPart New([double currentProgress]) [static] :2075
PlayerPart* PlayerPart::New1(double currentProgress)
{
    PlayerPart* obj1 = (PlayerPart*)uNew(PlayerPart_typeof());
    obj1->ctor_(currentProgress);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public enum PlayMode :3899
uEnumType* PlayMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.PlayMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Once", 0LL,
        "Wrap", 1LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// private delegate float4 SplineTrack.PointInterpolater(float4 p0, float4 p1, float4 m0, float4 m1, float t) :2969
uDelegateType* SplineTrack__PointInterpolater_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Animations.SplineTrack.PointInterpolater", 5, 0);
    type->SetSignature(::g::Uno::Float4_typeof(),
        ::g::Uno::Float4_typeof(),
        ::g::Uno::Float4_typeof(),
        ::g::Uno::Float4_typeof(),
        ::g::Uno::Float4_typeof(),
        ::g::Uno::Float_typeof());
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.QuadraticInImpl :1289
// {
static void Easing__QuadraticInImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__QuadraticInImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__QuadraticInImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.QuadraticInImpl", options);
    type->fp_build_ = Easing__QuadraticInImpl_build;
    type->fp_ctor_ = (void*)Easing__QuadraticInImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__QuadraticInImpl__Map_fn;
    return type;
}

// public generated QuadraticInImpl() :1289
void Easing__QuadraticInImpl__ctor_1_fn(Easing__QuadraticInImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1291
void Easing__QuadraticInImpl__Map_fn(Easing__QuadraticInImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = k_ * k_, void();
}

// public generated QuadraticInImpl New() :1289
void Easing__QuadraticInImpl__New1_fn(Easing__QuadraticInImpl** __retval)
{
    *__retval = Easing__QuadraticInImpl::New1();
}

// public generated QuadraticInImpl() [instance] :1289
void Easing__QuadraticInImpl::ctor_1()
{
    ctor_();
}

// public generated QuadraticInImpl New() [static] :1289
Easing__QuadraticInImpl* Easing__QuadraticInImpl::New1()
{
    Easing__QuadraticInImpl* obj1 = (Easing__QuadraticInImpl*)uNew(Easing__QuadraticInImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.QuadraticInOutImpl :1305
// {
static void Easing__QuadraticInOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__QuadraticInOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__QuadraticInOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.QuadraticInOutImpl", options);
    type->fp_build_ = Easing__QuadraticInOutImpl_build;
    type->fp_ctor_ = (void*)Easing__QuadraticInOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__QuadraticInOutImpl__Map_fn;
    return type;
}

// public generated QuadraticInOutImpl() :1305
void Easing__QuadraticInOutImpl__ctor_1_fn(Easing__QuadraticInOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1307
void Easing__QuadraticInOutImpl__Map_fn(Easing__QuadraticInOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    k_ = k_ * 2.0;

    if (k_ < 1.0)
        return *__retval = (0.5 * k_) * k_, void();

    k_ = k_ - 1.0;
    return *__retval = -0.5 * ((k_ * (k_ - 2.0)) - 1.0), void();
}

// public generated QuadraticInOutImpl New() :1305
void Easing__QuadraticInOutImpl__New1_fn(Easing__QuadraticInOutImpl** __retval)
{
    *__retval = Easing__QuadraticInOutImpl::New1();
}

// public generated QuadraticInOutImpl() [instance] :1305
void Easing__QuadraticInOutImpl::ctor_1()
{
    ctor_();
}

// public generated QuadraticInOutImpl New() [static] :1305
Easing__QuadraticInOutImpl* Easing__QuadraticInOutImpl::New1()
{
    Easing__QuadraticInOutImpl* obj1 = (Easing__QuadraticInOutImpl*)uNew(Easing__QuadraticInOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.QuadraticOutImpl :1297
// {
static void Easing__QuadraticOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__QuadraticOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__QuadraticOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.QuadraticOutImpl", options);
    type->fp_build_ = Easing__QuadraticOutImpl_build;
    type->fp_ctor_ = (void*)Easing__QuadraticOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__QuadraticOutImpl__Map_fn;
    return type;
}

// public generated QuadraticOutImpl() :1297
void Easing__QuadraticOutImpl__ctor_1_fn(Easing__QuadraticOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1299
void Easing__QuadraticOutImpl__Map_fn(Easing__QuadraticOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = k_ * (2.0 - k_), void();
}

// public generated QuadraticOutImpl New() :1297
void Easing__QuadraticOutImpl__New1_fn(Easing__QuadraticOutImpl** __retval)
{
    *__retval = Easing__QuadraticOutImpl::New1();
}

// public generated QuadraticOutImpl() [instance] :1297
void Easing__QuadraticOutImpl::ctor_1()
{
    ctor_();
}

// public generated QuadraticOutImpl New() [static] :1297
Easing__QuadraticOutImpl* Easing__QuadraticOutImpl::New1()
{
    Easing__QuadraticOutImpl* obj1 = (Easing__QuadraticOutImpl*)uNew(Easing__QuadraticOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.QuarticInImpl :1350
// {
static void Easing__QuarticInImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__QuarticInImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__QuarticInImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.QuarticInImpl", options);
    type->fp_build_ = Easing__QuarticInImpl_build;
    type->fp_ctor_ = (void*)Easing__QuarticInImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__QuarticInImpl__Map_fn;
    return type;
}

// public generated QuarticInImpl() :1350
void Easing__QuarticInImpl__ctor_1_fn(Easing__QuarticInImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1352
void Easing__QuarticInImpl__Map_fn(Easing__QuarticInImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = ((k_ * k_) * k_) * k_, void();
}

// public generated QuarticInImpl New() :1350
void Easing__QuarticInImpl__New1_fn(Easing__QuarticInImpl** __retval)
{
    *__retval = Easing__QuarticInImpl::New1();
}

// public generated QuarticInImpl() [instance] :1350
void Easing__QuarticInImpl::ctor_1()
{
    ctor_();
}

// public generated QuarticInImpl New() [static] :1350
Easing__QuarticInImpl* Easing__QuarticInImpl::New1()
{
    Easing__QuarticInImpl* obj1 = (Easing__QuarticInImpl*)uNew(Easing__QuarticInImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.QuarticInOutImpl :1367
// {
static void Easing__QuarticInOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__QuarticInOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__QuarticInOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.QuarticInOutImpl", options);
    type->fp_build_ = Easing__QuarticInOutImpl_build;
    type->fp_ctor_ = (void*)Easing__QuarticInOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__QuarticInOutImpl__Map_fn;
    return type;
}

// public generated QuarticInOutImpl() :1367
void Easing__QuarticInOutImpl__ctor_1_fn(Easing__QuarticInOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1369
void Easing__QuarticInOutImpl__Map_fn(Easing__QuarticInOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    k_ = k_ * 2.0;

    if (k_ < 1.0)
        return *__retval = (((0.5 * k_) * k_) * k_) * k_, void();

    k_ = k_ - 2.0;
    return *__retval = -0.5 * ((((k_ * k_) * k_) * k_) - 2.0), void();
}

// public generated QuarticInOutImpl New() :1367
void Easing__QuarticInOutImpl__New1_fn(Easing__QuarticInOutImpl** __retval)
{
    *__retval = Easing__QuarticInOutImpl::New1();
}

// public generated QuarticInOutImpl() [instance] :1367
void Easing__QuarticInOutImpl::ctor_1()
{
    ctor_();
}

// public generated QuarticInOutImpl New() [static] :1367
Easing__QuarticInOutImpl* Easing__QuarticInOutImpl::New1()
{
    Easing__QuarticInOutImpl* obj1 = (Easing__QuarticInOutImpl*)uNew(Easing__QuarticInOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.QuarticOutImpl :1358
// {
static void Easing__QuarticOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__QuarticOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__QuarticOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.QuarticOutImpl", options);
    type->fp_build_ = Easing__QuarticOutImpl_build;
    type->fp_ctor_ = (void*)Easing__QuarticOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__QuarticOutImpl__Map_fn;
    return type;
}

// public generated QuarticOutImpl() :1358
void Easing__QuarticOutImpl__ctor_1_fn(Easing__QuarticOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1360
void Easing__QuarticOutImpl__Map_fn(Easing__QuarticOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    k_ = k_ - 1.0;
    return *__retval = 1.0 - (((k_ * k_) * k_) * k_), void();
}

// public generated QuarticOutImpl New() :1358
void Easing__QuarticOutImpl__New1_fn(Easing__QuarticOutImpl** __retval)
{
    *__retval = Easing__QuarticOutImpl::New1();
}

// public generated QuarticOutImpl() [instance] :1358
void Easing__QuarticOutImpl::ctor_1()
{
    ctor_();
}

// public generated QuarticOutImpl New() [static] :1358
Easing__QuarticOutImpl* Easing__QuarticOutImpl::New1()
{
    Easing__QuarticOutImpl* obj1 = (Easing__QuarticOutImpl*)uNew(Easing__QuarticOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.QuinticInImpl :1379
// {
static void Easing__QuinticInImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__QuinticInImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__QuinticInImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.QuinticInImpl", options);
    type->fp_build_ = Easing__QuinticInImpl_build;
    type->fp_ctor_ = (void*)Easing__QuinticInImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__QuinticInImpl__Map_fn;
    return type;
}

// public generated QuinticInImpl() :1379
void Easing__QuinticInImpl__ctor_1_fn(Easing__QuinticInImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1381
void Easing__QuinticInImpl__Map_fn(Easing__QuinticInImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = (((k_ * k_) * k_) * k_) * k_, void();
}

// public generated QuinticInImpl New() :1379
void Easing__QuinticInImpl__New1_fn(Easing__QuinticInImpl** __retval)
{
    *__retval = Easing__QuinticInImpl::New1();
}

// public generated QuinticInImpl() [instance] :1379
void Easing__QuinticInImpl::ctor_1()
{
    ctor_();
}

// public generated QuinticInImpl New() [static] :1379
Easing__QuinticInImpl* Easing__QuinticInImpl::New1()
{
    Easing__QuinticInImpl* obj1 = (Easing__QuinticInImpl*)uNew(Easing__QuinticInImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.QuinticInOutImpl :1396
// {
static void Easing__QuinticInOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__QuinticInOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__QuinticInOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.QuinticInOutImpl", options);
    type->fp_build_ = Easing__QuinticInOutImpl_build;
    type->fp_ctor_ = (void*)Easing__QuinticInOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__QuinticInOutImpl__Map_fn;
    return type;
}

// public generated QuinticInOutImpl() :1396
void Easing__QuinticInOutImpl__ctor_1_fn(Easing__QuinticInOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1398
void Easing__QuinticInOutImpl__Map_fn(Easing__QuinticInOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    k_ = k_ * 2.0;

    if (k_ < 1.0)
        return *__retval = ((((0.5 * k_) * k_) * k_) * k_) * k_, void();

    k_ = k_ - 2.0;
    return *__retval = 0.5 * (((((k_ * k_) * k_) * k_) * k_) + 2.0), void();
}

// public generated QuinticInOutImpl New() :1396
void Easing__QuinticInOutImpl__New1_fn(Easing__QuinticInOutImpl** __retval)
{
    *__retval = Easing__QuinticInOutImpl::New1();
}

// public generated QuinticInOutImpl() [instance] :1396
void Easing__QuinticInOutImpl::ctor_1()
{
    ctor_();
}

// public generated QuinticInOutImpl New() [static] :1396
Easing__QuinticInOutImpl* Easing__QuinticInOutImpl::New1()
{
    Easing__QuinticInOutImpl* obj1 = (Easing__QuinticInOutImpl*)uNew(Easing__QuinticInOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.QuinticOutImpl :1387
// {
static void Easing__QuinticOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__QuinticOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__QuinticOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.QuinticOutImpl", options);
    type->fp_build_ = Easing__QuinticOutImpl_build;
    type->fp_ctor_ = (void*)Easing__QuinticOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__QuinticOutImpl__Map_fn;
    return type;
}

// public generated QuinticOutImpl() :1387
void Easing__QuinticOutImpl__ctor_1_fn(Easing__QuinticOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1389
void Easing__QuinticOutImpl__Map_fn(Easing__QuinticOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    k_ = k_ - 1.0;
    return *__retval = ((((k_ * k_) * k_) * k_) * k_) + 1.0, void();
}

// public generated QuinticOutImpl New() :1387
void Easing__QuinticOutImpl__New1_fn(Easing__QuinticOutImpl** __retval)
{
    *__retval = Easing__QuinticOutImpl::New1();
}

// public generated QuinticOutImpl() [instance] :1387
void Easing__QuinticOutImpl::ctor_1()
{
    ctor_();
}

// public generated QuinticOutImpl New() [static] :1387
Easing__QuinticOutImpl* Easing__QuinticOutImpl::New1()
{
    Easing__QuinticOutImpl* obj1 = (Easing__QuinticOutImpl*)uNew(Easing__QuinticOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class RangeAdapter<T> :2514
// {
static void RangeAdapter_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Internal::BlenderMap_typeof();
    type->SetPrecalc(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(1/*GetScalar<T>*/, type->T(0), NULL),
        type->T(0));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RangeAdapter_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(RangeAdapter_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RangeAdapter_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RangeAdapter_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(RangeAdapter_type, interface4));
    type->SetFields(13,
        ::g::Fuse::Internal::ScalarBlender_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Animations::RangeAdapter, _blender), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::RangeAdapter, _sourceRangeMax), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::RangeAdapter, _sourceRangeMin), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::RangeAdapter, _valueRangeMax), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::RangeAdapter, _valueRangeMin), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Animations::RangeAdapter, _Source), 0);
    type->Reflection.SetFunctions(13,
        new uFunction(".ctor", type, (void*)RangeAdapter__New2_fn, 0, true, type, 1, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL)),
        new uFunction("SetValue", NULL, (void*)RangeAdapter__SetValue_fn, 0, false, uVoid_typeof(), 2, type->T(0), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_Source", NULL, (void*)RangeAdapter__get_Source_fn, 0, false, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), 0),
        new uFunction("get_SourceRangeMax", NULL, (void*)RangeAdapter__get_SourceRangeMax_fn, 0, false, type->T(0), 0),
        new uFunction("set_SourceRangeMax", NULL, (void*)RangeAdapter__set_SourceRangeMax_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_SourceRangeMin", NULL, (void*)RangeAdapter__get_SourceRangeMin_fn, 0, false, type->T(0), 0),
        new uFunction("set_SourceRangeMin", NULL, (void*)RangeAdapter__set_SourceRangeMin_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_Value", NULL, (void*)RangeAdapter__get_Value_fn, 0, false, type->T(0), 0),
        new uFunction("set_Value", NULL, (void*)RangeAdapter__set_Value_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_ValueRangeMax", NULL, (void*)RangeAdapter__get_ValueRangeMax_fn, 0, false, type->T(0), 0),
        new uFunction("set_ValueRangeMax", NULL, (void*)RangeAdapter__set_ValueRangeMax_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_ValueRangeMin", NULL, (void*)RangeAdapter__get_ValueRangeMin_fn, 0, false, type->T(0), 0),
        new uFunction("set_ValueRangeMin", NULL, (void*)RangeAdapter__set_ValueRangeMin_fn, 0, false, uVoid_typeof(), 1, type->T(0)));
}

RangeAdapter_type* RangeAdapter_typeof()
{
    static uSStrong<RangeAdapter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 19;
    options.GenericCount = 1;
    options.InterfaceCount = 5;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(RangeAdapter);
    options.TypeSize = sizeof(RangeAdapter_type);
    type = (RangeAdapter_type*)uClassType::New("Fuse.Animations.RangeAdapter`1", options);
    type->fp_build_ = RangeAdapter_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))RangeAdapter__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))RangeAdapter__OnUnrooted_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))RangeAdapter__UnoUXIPropertyListenerOnPropertyChanged_fn;
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

// public RangeAdapter(Uno.UX.Property<T> source) :2521
void RangeAdapter__ctor_3_fn(RangeAdapter* __this, ::g::Uno::UX::Property1* source)
{
    __this->ctor_3(source);
}

// private T In(T value) :2607
void RangeAdapter__In_fn(RangeAdapter* __this, void* value, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "In(T)");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double ret2;
    double dst = (uPtr(__this->_blender)->ToDouble_ex(value, &ret2), ret2);
    double rel = (dst - __this->_valueRangeMin) / (__this->_valueRangeMax - __this->_valueRangeMin);
    double src = (rel * (__this->_sourceRangeMax - __this->_sourceRangeMin)) + __this->_sourceRangeMin;
    return __retval.Store((uPtr(__this->_blender)->FromDouble_ex(uCRef(src), &ret3), ret3)), void();
}

// public RangeAdapter New(Uno.UX.Property<T> source) :2521
void RangeAdapter__New2_fn(uType* __type, ::g::Uno::UX::Property1* source, RangeAdapter** __retval)
{
    *__retval = RangeAdapter::New2(__type, source);
}

// protected override sealed void OnRooted() :2541
void RangeAdapter__OnRooted_fn(RangeAdapter* __this)
{
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    uPtr(__this->Source())->AddListener((uObject*)__this);
}

// protected override sealed void OnUnrooted() :2547
void RangeAdapter__OnUnrooted_fn(RangeAdapter* __this)
{
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "OnUnrooted()");
    uPtr(__this->Source())->RemoveListener((uObject*)__this);
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private T Out(T value) :2598
void RangeAdapter__Out_fn(RangeAdapter* __this, void* value, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "Out(T)");
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double ret4;
    double src = (uPtr(__this->_blender)->ToDouble_ex(value, &ret4), ret4);
    double rel = (src - __this->_sourceRangeMin) / (__this->_sourceRangeMax - __this->_sourceRangeMin);
    double dst = (rel * (__this->_valueRangeMax - __this->_valueRangeMin)) + __this->_valueRangeMin;
    return __retval.Store((uPtr(__this->_blender)->FromDouble_ex(uCRef(dst), &ret5), ret5)), void();
}

// public void SetValue(T value, Uno.UX.IPropertyListener origin) :2536
void RangeAdapter__SetValue_fn(RangeAdapter* __this, void* value, uObject* origin)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "SetValue(T,Uno.UX.IPropertyListener)");
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uPtr(__this->Source())->Set_ex((RangeAdapter__In_fn(__this, value, &ret6), ret6), origin);
}

// public generated Uno.UX.Property<T> get_Source() :2516
void RangeAdapter__get_Source_fn(RangeAdapter* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Uno.UX.Property<T> value) :2516
void RangeAdapter__set_Source_fn(RangeAdapter* __this, ::g::Uno::UX::Property1* value)
{
    __this->Source(value);
}

// public T get_SourceRangeMax() :2574
void RangeAdapter__get_SourceRangeMax_fn(RangeAdapter* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "get_SourceRangeMax()");
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((uPtr(__this->_blender)->FromDouble_ex(uCRef(__this->_sourceRangeMax), &ret7), ret7)), void();
}

// public void set_SourceRangeMax(T value) :2575
void RangeAdapter__set_SourceRangeMax_fn(RangeAdapter* __this, void* value)
{
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "set_SourceRangeMax(T)");
    double ret8;
    __this->_sourceRangeMax = (uPtr(__this->_blender)->ToDouble_ex(value, &ret8), ret8);
}

// public T get_SourceRangeMin() :2565
void RangeAdapter__get_SourceRangeMin_fn(RangeAdapter* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "get_SourceRangeMin()");
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((uPtr(__this->_blender)->FromDouble_ex(uCRef(__this->_sourceRangeMin), &ret9), ret9)), void();
}

// public void set_SourceRangeMin(T value) :2566
void RangeAdapter__set_SourceRangeMin_fn(RangeAdapter* __this, void* value)
{
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "set_SourceRangeMin(T)");
    double ret10;
    __this->_sourceRangeMin = (uPtr(__this->_blender)->ToDouble_ex(value, &ret10), ret10);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector sel) :2554
void RangeAdapter__UnoUXIPropertyListenerOnPropertyChanged_fn(RangeAdapter* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* sel)
{
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    __this->OnPropertyChanged(::g::Fuse::Animations::RangeAdapterHelpers::_valueName());
}

// public T get_Value() :2532
void RangeAdapter__get_Value_fn(RangeAdapter* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "get_Value()");
    uT ret11(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret12(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((RangeAdapter__Out_fn(__this, (uPtr(__this->Source())->Get_ex(&ret12), ret12), &ret11), ret11)), void();
}

// public void set_Value(T value) :2533
void RangeAdapter__set_Value_fn(RangeAdapter* __this, void* value)
{
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "set_Value(T)");
    RangeAdapter__SetValue_fn(__this, value, (uObject*)__this);
}

// public T get_ValueRangeMax() :2593
void RangeAdapter__get_ValueRangeMax_fn(RangeAdapter* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "get_ValueRangeMax()");
    uT ret13(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((uPtr(__this->_blender)->FromDouble_ex(uCRef(__this->_valueRangeMax), &ret13), ret13)), void();
}

// public void set_ValueRangeMax(T value) :2594
void RangeAdapter__set_ValueRangeMax_fn(RangeAdapter* __this, void* value)
{
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "set_ValueRangeMax(T)");
    double ret14;
    __this->_valueRangeMax = (uPtr(__this->_blender)->ToDouble_ex(value, &ret14), ret14);
}

// public T get_ValueRangeMin() :2584
void RangeAdapter__get_ValueRangeMin_fn(RangeAdapter* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "get_ValueRangeMin()");
    uT ret15(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((uPtr(__this->_blender)->FromDouble_ex(uCRef(__this->_valueRangeMin), &ret15), ret15)), void();
}

// public void set_ValueRangeMin(T value) :2585
void RangeAdapter__set_ValueRangeMin_fn(RangeAdapter* __this, void* value)
{
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "set_ValueRangeMin(T)");
    double ret16;
    __this->_valueRangeMin = (uPtr(__this->_blender)->ToDouble_ex(value, &ret16), ret16);
}

// public RangeAdapter(Uno.UX.Property<T> source) [instance] :2521
void RangeAdapter::ctor_3(::g::Uno::UX::Property1* source)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.BlenderMap.GetScalar<T>*/),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", ".ctor(Uno.UX.Property<T>)");
    _blender = ((::g::Fuse::Internal::ScalarBlender*)::g::Fuse::Internal::BlenderMap::GetScalar(__types[0]));
    _sourceRangeMin = 0.0;
    _sourceRangeMax = 1.0;
    _valueRangeMin = 0.0;
    _valueRangeMax = 1.0;
    ctor_2();
    Source(source);
}

// public generated Uno.UX.Property<T> get_Source() [instance] :2516
::g::Uno::UX::Property1* RangeAdapter::Source()
{
    return _Source;
}

// private generated void set_Source(Uno.UX.Property<T> value) [instance] :2516
void RangeAdapter::Source(::g::Uno::UX::Property1* value)
{
    _Source = value;
}

// public RangeAdapter New(Uno.UX.Property<T> source) [static] :2521
RangeAdapter* RangeAdapter::New2(uType* __type, ::g::Uno::UX::Property1* source)
{
    RangeAdapter* obj1 = (RangeAdapter*)uNew(__type);
    obj1->ctor_3(source);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal static class RangeAdapterHelpers :2484
// {
// static RangeAdapterHelpers() :2484
static void RangeAdapterHelpers__cctor__fn(uType* __type)
{
    RangeAdapterHelpers::_valueName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"Value"*/]);
}

static void RangeAdapterHelpers_build(uType* type)
{
    ::STRINGS[16] = uString::Const("Value");
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Animations::RangeAdapterHelpers::_valueName_, uFieldFlagsStatic);
}

uClassType* RangeAdapterHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Animations.RangeAdapterHelpers", options);
    type->fp_build_ = RangeAdapterHelpers_build;
    type->fp_cctor_ = RangeAdapterHelpers__cctor__fn;
    return type;
}

::g::Uno::UX::Selector RangeAdapterHelpers::_valueName_;
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class Resize :2651
// {
static void Resize_build(uType* type)
{
    type->SetFields(19,
        ::g::Fuse::Animations::IResizeMode_typeof(), offsetof(::g::Fuse::Animations::Resize, _resizeMode), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::Resize, _RelativeNode), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::Resize, _Target), 0);
    type->Reflection.SetFunctions(13,
        new uFunction(".ctor", NULL, (void*)Resize__New2_fn, 0, true, type, 0),
        new uFunction("get_RelativeNode", NULL, (void*)Resize__get_RelativeNode_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_RelativeNode", NULL, (void*)Resize__set_RelativeNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_RelativeTo", NULL, (void*)Resize__get_RelativeTo_fn, 0, false, ::g::Fuse::Animations::IResizeMode_typeof(), 0),
        new uFunction("set_RelativeTo", NULL, (void*)Resize__set_RelativeTo_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::IResizeMode_typeof()),
        new uFunction("get_Target", NULL, (void*)Resize__get_Target_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)Resize__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_Vector", NULL, (void*)Resize__get_Vector_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Vector", NULL, (void*)Resize__set_Vector_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_X", NULL, (void*)Resize__get_X_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_X", NULL, (void*)Resize__set_X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Y", NULL, (void*)Resize__get_Y_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Y", NULL, (void*)Resize__set_Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Animations::Animator_type* Resize_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimator_typeof();
    options.FieldCount = 22;
    options.ObjectSize = sizeof(Resize);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Resize", options);
    type->fp_build_ = Resize_build;
    type->fp_ctor_ = (void*)Resize__New2_fn;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Resize__CreateState_fn;
    return type;
}

// public generated Resize() :2651
void Resize__ctor_3_fn(Resize* __this)
{
    __this->ctor_3();
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :2697
void Resize__CreateState_fn(Resize* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    return *__retval = ::g::Fuse::Animations::ResizeAnimatorState::New1(__this, p), void();
}

// public generated Resize New() :2651
void Resize__New2_fn(Resize** __retval)
{
    *__retval = Resize::New2();
}

// public generated Fuse.Visual get_RelativeNode() :2657
void Resize__get_RelativeNode_fn(Resize* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->RelativeNode();
}

// public generated void set_RelativeNode(Fuse.Visual value) :2657
void Resize__set_RelativeNode_fn(Resize* __this, ::g::Fuse::Visual* value)
{
    __this->RelativeNode(value);
}

// public Fuse.Animations.IResizeMode get_RelativeTo() :2668
void Resize__get_RelativeTo_fn(Resize* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.Animations.IResizeMode value) :2669
void Resize__set_RelativeTo_fn(Resize* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// public generated Fuse.Visual get_Target() :2654
void Resize__get_Target_fn(Resize* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :2654
void Resize__set_Target_fn(Resize* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public float2 get_Vector() :2693
void Resize__get_Vector_fn(Resize* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float2 value) :2694
void Resize__set_Vector_fn(Resize* __this, ::g::Uno::Float2* value)
{
    __this->Vector(*value);
}

// public float get_X() :2675
void Resize__get_X_fn(Resize* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :2676
void Resize__set_X_fn(Resize* __this, float* value)
{
    __this->X(*value);
}

// public float get_Y() :2682
void Resize__get_Y_fn(Resize* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :2683
void Resize__set_Y_fn(Resize* __this, float* value)
{
    __this->Y(*value);
}

// public generated Resize() [instance] :2651
void Resize::ctor_3()
{
    uStackFrame __("Fuse.Animations.Resize", ".ctor()");
    ctor_2();
}

// public generated Fuse.Visual get_RelativeNode() [instance] :2657
::g::Fuse::Visual* Resize::RelativeNode()
{
    return _RelativeNode;
}

// public generated void set_RelativeNode(Fuse.Visual value) [instance] :2657
void Resize::RelativeNode(::g::Fuse::Visual* value)
{
    _RelativeNode = value;
}

// public Fuse.Animations.IResizeMode get_RelativeTo() [instance] :2668
uObject* Resize::RelativeTo()
{
    return _resizeMode;
}

// public void set_RelativeTo(Fuse.Animations.IResizeMode value) [instance] :2669
void Resize::RelativeTo(uObject* value)
{
    _resizeMode = value;
}

// public generated Fuse.Visual get_Target() [instance] :2654
::g::Fuse::Visual* Resize::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :2654
void Resize::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public float2 get_Vector() [instance] :2693
::g::Uno::Float2 Resize::Vector()
{
    ::g::Uno::Float4 ind1 = _vectorValue;
    return ::g::Uno::Float2__New2(ind1.X, ind1.Y);
}

// public void set_Vector(float2 value) [instance] :2694
void Resize::Vector(::g::Uno::Float2 value)
{
    ::g::Uno::Float4 ind2;
    _vectorValue = ::g::Uno::Float4__New7(value, (ind2 = _vectorValue, ::g::Uno::Float2__New2(ind2.Z, ind2.W)));
}

// public float get_X() [instance] :2675
float Resize::X()
{
    return _vectorValue.X;
}

// public void set_X(float value) [instance] :2676
void Resize::X(float value)
{
    _vectorValue.X = value;
}

// public float get_Y() [instance] :2682
float Resize::Y()
{
    return _vectorValue.Y;
}

// public void set_Y(float value) [instance] :2683
void Resize::Y(float value)
{
    _vectorValue.Y = value;
}

// public generated Resize New() [static] :2651
Resize* Resize::New2()
{
    Resize* obj3 = (Resize*)uNew(Resize_typeof());
    obj3->ctor_3();
    return obj3;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class ResizeAnimatorState :2703
// {
static void ResizeAnimatorState_build(uType* type)
{
    ::STRINGS[17] = uString::Const("Resize started without a Target node");
    ::STRINGS[2] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno");
    ::STRINGS[18] = uString::Const(".ctor");
    ::STRINGS[19] = uString::Const("Resize started without as RelativeTo");
    ::TYPES[63] = ::g::Fuse::Animations::IResize_typeof();
    ::TYPES[64] = ::g::Fuse::IActualPlacement_typeof();
    ::TYPES[65] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[66] = ::g::Fuse::Animations::IResizeMode_typeof();
    type->SetFields(6,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _lastStrength), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _lastValue), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _relativeNode), 0,
        ::TYPES[66/*Fuse.Animations.IResizeMode*/], offsetof(::g::Fuse::Animations::ResizeAnimatorState, _relativeTo), 0,
        ::g::Fuse::Animations::Resize_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _resize), 0,
        ::TYPES[63/*Fuse.Animations.IResize*/], offsetof(::g::Fuse::Animations::ResizeAnimatorState, _target), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _valid), 0);
}

::g::Fuse::Animations::TrackAnimatorState_type* ResizeAnimatorState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimatorState_typeof();
    options.FieldCount = 13;
    options.ObjectSize = sizeof(ResizeAnimatorState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.ResizeAnimatorState", options);
    type->fp_build_ = ResizeAnimatorState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))ResizeAnimatorState__Disable_fn;
    type->fp_SeekValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, ::g::Uno::Float4*, float*))ResizeAnimatorState__SeekValue_fn;
    return type;
}

// public ResizeAnimatorState(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) :2711
void ResizeAnimatorState__ctor_2_fn(ResizeAnimatorState* __this, ::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(r, p);
}

// public override sealed void Disable() :2742
void ResizeAnimatorState__Disable_fn(ResizeAnimatorState* __this)
{
    uStackFrame __("Fuse.Animations.ResizeAnimatorState", "Disable()");
    ::g::Fuse::Animations::AnimatorState__Disable_fn(__this);

    if (!__this->_valid)
        return;

    uObject* e = uAs<uObject*>(__this->_target, ::TYPES[64/*Fuse.IActualPlacement*/]);

    if (e != NULL)
        ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(e), ::TYPES[64/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[65/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, __this));

    uObject* elm = uAs<uObject*>(__this->_relativeNode, ::TYPES[64/*Fuse.IActualPlacement*/]);

    if (elm != NULL)
        ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(elm), ::TYPES[64/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[65/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, __this));
}

// public ResizeAnimatorState New(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) :2711
void ResizeAnimatorState__New1_fn(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p, ResizeAnimatorState** __retval)
{
    *__retval = ResizeAnimatorState::New1(r, p);
}

// private void OnPlaced(object s, object a) :2781
void ResizeAnimatorState__OnPlaced_fn(ResizeAnimatorState* __this, uObject* s, uObject* a)
{
    __this->OnPlaced(s, a);
}

// protected override sealed void SeekValue(float4 value, float strength) :2759
void ResizeAnimatorState__SeekValue_fn(ResizeAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
    uStackFrame __("Fuse.Animations.ResizeAnimatorState", "SeekValue(float4,float)");
    float strength_ = *strength;
    ::g::Uno::Float4 value_ = *value;
    __this->_lastStrength = strength_;
    __this->_lastValue = value_;
    __this->Update(value_, strength_);
}

// private void Update(float4 value, float strength) :2766
void ResizeAnimatorState__Update_fn(ResizeAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
    __this->Update(*value, *strength);
}

// public ResizeAnimatorState(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) [instance] :2711
void ResizeAnimatorState::ctor_2(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p)
{
    uStackFrame __("Fuse.Animations.ResizeAnimatorState", ".ctor(Fuse.Animations.Resize,Fuse.Animations.CreateStateParams)");
    ::g::Fuse::Visual* ind1;
    _valid = true;
    ctor_1(r, p, uPtr(r)->Target());
    _resize = r;
    _target = uAs<uObject*>(Visual, ::TYPES[63/*Fuse.Animations.IResize*/]);

    if (_target == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[17/*"Resize star...*/], r, ::STRINGS[2/*"/Users/most...*/], 2717, ::STRINGS[18/*".ctor"*/]);
        _valid = false;
        return;
    }

    _relativeTo = r->RelativeTo();

    if (_relativeTo == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[19/*"Resize star...*/], r, ::STRINGS[2/*"/Users/most...*/], 2725, ::STRINGS[18/*".ctor"*/]);
        _valid = false;
        return;
    }

    _relativeNode = (ind1 = uPtr(_resize)->RelativeNode(), ((ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)Visual));
    uObject* elm = uAs<uObject*>(_relativeNode, ::TYPES[64/*Fuse.IActualPlacement*/]);

    if (elm != NULL)
        ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(elm), ::TYPES[64/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[65/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, this));

    uObject* e = uAs<uObject*>(_target, ::TYPES[64/*Fuse.IActualPlacement*/]);

    if (e != NULL)
        ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(e), ::TYPES[64/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[65/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, this));
}

// private void OnPlaced(object s, object a) [instance] :2781
void ResizeAnimatorState::OnPlaced(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Animations.ResizeAnimatorState", "OnPlaced(object,object)");
    Update(_lastValue, _lastStrength);
}

// private void Update(float4 value, float strength) [instance] :2766
void ResizeAnimatorState::Update(::g::Uno::Float4 value, float strength)
{
    uStackFrame __("Fuse.Animations.ResizeAnimatorState", "Update(float4,float)");

    if (!_valid)
        return;

    ::g::Uno::Float2 baseSize;
    ::g::Uno::Float2 deltaSize;

    if (::g::Fuse::Animations::IResizeMode::GetSizeChange(uInterface(uPtr(_relativeTo), ::TYPES[66/*Fuse.Animations.IResizeMode*/]), Visual, _relativeNode, &baseSize, &deltaSize))
    {
        ::g::Uno::Float2 sz = ::g::Uno::Float2__op_Addition2(baseSize, ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Multiply2(deltaSize, ::g::Uno::Float2__New2(value.X, value.Y)), strength));
        ::g::Fuse::Animations::IResize::SetSize(uInterface(uPtr(_target), ::TYPES[63/*Fuse.Animations.IResize*/]), sz);
    }
}

// public ResizeAnimatorState New(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) [static] :2711
ResizeAnimatorState* ResizeAnimatorState::New1(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p)
{
    ResizeAnimatorState* obj2 = (ResizeAnimatorState*)uNew(ResizeAnimatorState_typeof());
    obj2->ctor_2(r, p);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class Rotate :3732
// {
static void Rotate_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Rotation_typeof(), NULL));
    type->SetFields(22);
    type->Reflection.SetFunctions(9,
        new uFunction("get_Degrees", NULL, (void*)Rotate__get_Degrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Degrees", NULL, (void*)Rotate__set_Degrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesX", NULL, (void*)Rotate__get_DegreesX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesX", NULL, (void*)Rotate__set_DegreesX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesY", NULL, (void*)Rotate__get_DegreesY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesY", NULL, (void*)Rotate__set_DegreesY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesZ", NULL, (void*)Rotate__get_DegreesZ_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesZ", NULL, (void*)Rotate__set_DegreesZ_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Rotate__New2_fn, 0, true, type, 0));
}

::g::Fuse::Animations::TransformAnimator_type* Rotate_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TransformAnimator_typeof();
    options.FieldCount = 22;
    options.ObjectSize = sizeof(Rotate);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Rotate", options);
    type->fp_build_ = Rotate_build;
    type->fp_ctor_ = (void*)Rotate__New2_fn;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Visual*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Rotate__Update_fn;
    return type;
}

// public Rotate() :3734
void Rotate__ctor_4_fn(Rotate* __this)
{
    __this->ctor_4();
}

// public float get_Degrees() :3742
void Rotate__get_Degrees_fn(Rotate* __this, float* __retval)
{
    *__retval = __this->Degrees();
}

// public void set_Degrees(float value) :3743
void Rotate__set_Degrees_fn(Rotate* __this, float* value)
{
    __this->Degrees(*value);
}

// public float get_DegreesX() :3749
void Rotate__get_DegreesX_fn(Rotate* __this, float* __retval)
{
    *__retval = __this->DegreesX();
}

// public void set_DegreesX(float value) :3750
void Rotate__set_DegreesX_fn(Rotate* __this, float* value)
{
    __this->DegreesX(*value);
}

// public float get_DegreesY() :3756
void Rotate__get_DegreesY_fn(Rotate* __this, float* __retval)
{
    *__retval = __this->DegreesY();
}

// public void set_DegreesY(float value) :3757
void Rotate__set_DegreesY_fn(Rotate* __this, float* value)
{
    __this->DegreesY(*value);
}

// public float get_DegreesZ() :3763
void Rotate__get_DegreesZ_fn(Rotate* __this, float* __retval)
{
    *__retval = __this->DegreesZ();
}

// public void set_DegreesZ(float value) :3764
void Rotate__set_DegreesZ_fn(Rotate* __this, float* value)
{
    __this->DegreesZ(*value);
}

// public Rotate New() :3734
void Rotate__New2_fn(Rotate** __retval)
{
    *__retval = Rotate::New2();
}

// internal override sealed void Update(Fuse.Visual elm, Fuse.Rotation t, float4 value) :3767
void Rotate__Update_fn(Rotate* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Rotation* t, ::g::Uno::Float4* value)
{
    uStackFrame __("Fuse.Animations.Rotate", "Update(Fuse.Visual,Fuse.Rotation,float4)");
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->EulerAngle(::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z));
}

// public Rotate() [instance] :3734
void Rotate::ctor_4()
{
    ctor_3();
    Priority(3000);
}

// public float get_Degrees() [instance] :3742
float Rotate::Degrees()
{
    return DegreesZ();
}

// public void set_Degrees(float value) [instance] :3743
void Rotate::Degrees(float value)
{
    DegreesZ(value);
}

// public float get_DegreesX() [instance] :3749
float Rotate::DegreesX()
{
    return ::g::Uno::Math::RadiansToDegrees1(X());
}

// public void set_DegreesX(float value) [instance] :3750
void Rotate::DegreesX(float value)
{
    X(::g::Uno::Math::DegreesToRadians1(value));
}

// public float get_DegreesY() [instance] :3756
float Rotate::DegreesY()
{
    return ::g::Uno::Math::RadiansToDegrees1(Y());
}

// public void set_DegreesY(float value) [instance] :3757
void Rotate::DegreesY(float value)
{
    Y(::g::Uno::Math::DegreesToRadians1(value));
}

// public float get_DegreesZ() [instance] :3763
float Rotate::DegreesZ()
{
    return ::g::Uno::Math::RadiansToDegrees1(Z());
}

// public void set_DegreesZ(float value) [instance] :3764
void Rotate::DegreesZ(float value)
{
    Z(::g::Uno::Math::DegreesToRadians1(value));
}

// public Rotate New() [static] :3734
Rotate* Rotate::New2()
{
    Rotate* obj1 = (Rotate*)uNew(Rotate_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class Scale :3794
// {
static void Scale_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Scaling_typeof(), NULL));
    type->SetFields(22,
        ::g::Fuse::IScalingMode_typeof(), offsetof(::g::Fuse::Animations::Scale, _relativeTo), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Factor", NULL, (void*)Scale__get_Factor_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Factor", NULL, (void*)Scale__set_Factor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Scale__New2_fn, 0, true, type, 0),
        new uFunction("get_RelativeTo", NULL, (void*)Scale__get_RelativeTo_fn, 0, false, ::g::Fuse::IScalingMode_typeof(), 0),
        new uFunction("set_RelativeTo", NULL, (void*)Scale__set_RelativeTo_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::IScalingMode_typeof()));
}

::g::Fuse::Animations::TransformAnimator_type* Scale_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TransformAnimator_typeof();
    options.FieldCount = 23;
    options.ObjectSize = sizeof(Scale);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Scale", options);
    type->fp_build_ = Scale_build;
    type->fp_ctor_ = (void*)Scale__New2_fn;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Visual*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Scale__Update_fn;
    return type;
}

// public Scale() :3804
void Scale__ctor_4_fn(Scale* __this)
{
    __this->ctor_4();
}

// public float get_Factor() :3813
void Scale__get_Factor_fn(Scale* __this, float* __retval)
{
    *__retval = __this->Factor();
}

// public void set_Factor(float value) :3814
void Scale__set_Factor_fn(Scale* __this, float* value)
{
    __this->Factor(*value);
}

// public Scale New() :3804
void Scale__New2_fn(Scale** __retval)
{
    *__retval = Scale::New2();
}

// public Fuse.IScalingMode get_RelativeTo() :3800
void Scale__get_RelativeTo_fn(Scale* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.IScalingMode value) :3801
void Scale__set_RelativeTo_fn(Scale* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// internal override sealed void Update(Fuse.Visual elm, Fuse.Scaling t, float4 value) :3817
void Scale__Update_fn(Scale* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Scaling* t, ::g::Uno::Float4* value)
{
    uStackFrame __("Fuse.Animations.Scale", "Update(Fuse.Visual,Fuse.Scaling,float4)");
    ::g::Fuse::Visual* ind1;
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->RelativeNode((ind1 = __this->RelativeNode(), (ind1 != NULL) ? ind1 : elm));
    t->RelativeTo(__this->RelativeTo());
    t->Vector(::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z));
}

// public Scale() [instance] :3804
void Scale::ctor_4()
{
    _relativeTo = ::g::Fuse::ScalingModes::Identity();
    ctor_3();
    Priority(2000);
    _vectorValue = ::g::Uno::Float4__New1(1.0f);
}

// public float get_Factor() [instance] :3813
float Scale::Factor()
{
    return X();
}

// public void set_Factor(float value) [instance] :3814
void Scale::Factor(float value)
{
    _vectorValue = ::g::Uno::Float4__New1(value);
}

// public Fuse.IScalingMode get_RelativeTo() [instance] :3800
uObject* Scale::RelativeTo()
{
    return _relativeTo;
}

// public void set_RelativeTo(Fuse.IScalingMode value) [instance] :3801
void Scale::RelativeTo(uObject* value)
{
    _relativeTo = value;
}

// public Scale New() [static] :3804
Scale* Scale::New2()
{
    Scale* obj2 = (Scale*)uNew(Scale_typeof());
    obj2->ctor_4();
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal enum SeekDirection :110
uEnumType* SeekDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.SeekDirection", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public enum TriggerAnimationState.SeekFlags :4329
uEnumType* TriggerAnimationState__SeekFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.TriggerAnimationState.SeekFlags", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "ForcePlayer", 1LL,
        "BypassUpdate", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal enum SeekResult :117
uEnumType* SeekResult_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.SeekResult", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Complete", 1LL,
        "Stable", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.SinusoidalInImpl :1409
// {
static void Easing__SinusoidalInImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__SinusoidalInImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__SinusoidalInImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.SinusoidalInImpl", options);
    type->fp_build_ = Easing__SinusoidalInImpl_build;
    type->fp_ctor_ = (void*)Easing__SinusoidalInImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__SinusoidalInImpl__Map_fn;
    return type;
}

// public generated SinusoidalInImpl() :1409
void Easing__SinusoidalInImpl__ctor_1_fn(Easing__SinusoidalInImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1411
void Easing__SinusoidalInImpl__Map_fn(Easing__SinusoidalInImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = 1.0 - ::g::Uno::Math::Cos((k_ * 3.1415926535897931) / 2.0), void();
}

// public generated SinusoidalInImpl New() :1409
void Easing__SinusoidalInImpl__New1_fn(Easing__SinusoidalInImpl** __retval)
{
    *__retval = Easing__SinusoidalInImpl::New1();
}

// public generated SinusoidalInImpl() [instance] :1409
void Easing__SinusoidalInImpl::ctor_1()
{
    ctor_();
}

// public generated SinusoidalInImpl New() [static] :1409
Easing__SinusoidalInImpl* Easing__SinusoidalInImpl::New1()
{
    Easing__SinusoidalInImpl* obj1 = (Easing__SinusoidalInImpl*)uNew(Easing__SinusoidalInImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.SinusoidalInOutImpl :1425
// {
static void Easing__SinusoidalInOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__SinusoidalInOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__SinusoidalInOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.SinusoidalInOutImpl", options);
    type->fp_build_ = Easing__SinusoidalInOutImpl_build;
    type->fp_ctor_ = (void*)Easing__SinusoidalInOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__SinusoidalInOutImpl__Map_fn;
    return type;
}

// public generated SinusoidalInOutImpl() :1425
void Easing__SinusoidalInOutImpl__ctor_1_fn(Easing__SinusoidalInOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1427
void Easing__SinusoidalInOutImpl__Map_fn(Easing__SinusoidalInOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = 0.5 * (1.0 - ::g::Uno::Math::Cos(3.1415926535897931 * k_)), void();
}

// public generated SinusoidalInOutImpl New() :1425
void Easing__SinusoidalInOutImpl__New1_fn(Easing__SinusoidalInOutImpl** __retval)
{
    *__retval = Easing__SinusoidalInOutImpl::New1();
}

// public generated SinusoidalInOutImpl() [instance] :1425
void Easing__SinusoidalInOutImpl::ctor_1()
{
    ctor_();
}

// public generated SinusoidalInOutImpl New() [static] :1425
Easing__SinusoidalInOutImpl* Easing__SinusoidalInOutImpl::New1()
{
    Easing__SinusoidalInOutImpl* obj1 = (Easing__SinusoidalInOutImpl*)uNew(Easing__SinusoidalInOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Easing.SinusoidalOutImpl :1417
// {
static void Easing__SinusoidalOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__SinusoidalOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__SinusoidalOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.SinusoidalOutImpl", options);
    type->fp_build_ = Easing__SinusoidalOutImpl_build;
    type->fp_ctor_ = (void*)Easing__SinusoidalOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__SinusoidalOutImpl__Map_fn;
    return type;
}

// public generated SinusoidalOutImpl() :1417
void Easing__SinusoidalOutImpl__ctor_1_fn(Easing__SinusoidalOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :1419
void Easing__SinusoidalOutImpl__Map_fn(Easing__SinusoidalOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = ::g::Uno::Math::Sin((k_ * 3.1415926535897931) / 2.0), void();
}

// public generated SinusoidalOutImpl New() :1417
void Easing__SinusoidalOutImpl__New1_fn(Easing__SinusoidalOutImpl** __retval)
{
    *__retval = Easing__SinusoidalOutImpl::New1();
}

// public generated SinusoidalOutImpl() [instance] :1417
void Easing__SinusoidalOutImpl::ctor_1()
{
    ctor_();
}

// public generated SinusoidalOutImpl New() [static] :1417
Easing__SinusoidalOutImpl* Easing__SinusoidalOutImpl::New1()
{
    Easing__SinusoidalOutImpl* obj1 = (Easing__SinusoidalOutImpl*)uNew(Easing__SinusoidalOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class Skew :3839
// {
static void Skew_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Shear_typeof(), NULL));
    type->SetFields(22);
    type->Reflection.SetFunctions(9,
        new uFunction("get_DegreesX", NULL, (void*)Skew__get_DegreesX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesX", NULL, (void*)Skew__set_DegreesX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesXY", NULL, (void*)Skew__get_DegreesXY_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_DegreesXY", NULL, (void*)Skew__set_DegreesXY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_DegreesY", NULL, (void*)Skew__get_DegreesY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesY", NULL, (void*)Skew__set_DegreesY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Skew__New2_fn, 0, true, type, 0),
        new uFunction("get_XY", NULL, (void*)Skew__get_XY_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_XY", NULL, (void*)Skew__set_XY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
}

::g::Fuse::Animations::TransformAnimator_type* Skew_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TransformAnimator_typeof();
    options.FieldCount = 22;
    options.ObjectSize = sizeof(Skew);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Skew", options);
    type->fp_build_ = Skew_build;
    type->fp_ctor_ = (void*)Skew__New2_fn;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Visual*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Skew__Update_fn;
    return type;
}

// public Skew() :3841
void Skew__ctor_4_fn(Skew* __this)
{
    __this->ctor_4();
}

// public float get_DegreesX() :3854
void Skew__get_DegreesX_fn(Skew* __this, float* __retval)
{
    *__retval = __this->DegreesX();
}

// public void set_DegreesX(float value) :3855
void Skew__set_DegreesX_fn(Skew* __this, float* value)
{
    __this->DegreesX(*value);
}

// public float2 get_DegreesXY() :3875
void Skew__get_DegreesXY_fn(Skew* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->DegreesXY();
}

// public void set_DegreesXY(float2 value) :3876
void Skew__set_DegreesXY_fn(Skew* __this, ::g::Uno::Float2* value)
{
    __this->DegreesXY(*value);
}

// public float get_DegreesY() :3861
void Skew__get_DegreesY_fn(Skew* __this, float* __retval)
{
    *__retval = __this->DegreesY();
}

// public void set_DegreesY(float value) :3862
void Skew__set_DegreesY_fn(Skew* __this, float* value)
{
    __this->DegreesY(*value);
}

// public Skew New() :3841
void Skew__New2_fn(Skew** __retval)
{
    *__retval = Skew::New2();
}

// internal override sealed void Update(Fuse.Visual elm, Fuse.Shear t, float4 value) :3846
void Skew__Update_fn(Skew* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Shear* t, ::g::Uno::Float4* value)
{
    uStackFrame __("Fuse.Animations.Skew", "Update(Fuse.Visual,Fuse.Shear,float4)");
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->Vector(::g::Uno::Float2__New2(value_.X, value_.Y));
}

// public float2 get_XY() :3868
void Skew__get_XY_fn(Skew* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->XY();
}

// public void set_XY(float2 value) :3869
void Skew__set_XY_fn(Skew* __this, ::g::Uno::Float2* value)
{
    __this->XY(*value);
}

// public Skew() [instance] :3841
void Skew::ctor_4()
{
    ctor_3();
    Priority(4000);
}

// public float get_DegreesX() [instance] :3854
float Skew::DegreesX()
{
    return ::g::Uno::Math::RadiansToDegrees1(X());
}

// public void set_DegreesX(float value) [instance] :3855
void Skew::DegreesX(float value)
{
    X(::g::Uno::Math::DegreesToRadians1(value));
}

// public float2 get_DegreesXY() [instance] :3875
::g::Uno::Float2 Skew::DegreesXY()
{
    return ::g::Uno::Float2__New2(::g::Uno::Math::RadiansToDegrees1(X()), ::g::Uno::Math::RadiansToDegrees1(Y()));
}

// public void set_DegreesXY(float2 value) [instance] :3876
void Skew::DegreesXY(::g::Uno::Float2 value)
{
    XY(::g::Uno::Float2__New2(::g::Uno::Math::DegreesToRadians1(value.X), ::g::Uno::Math::DegreesToRadians1(value.Y)));
}

// public float get_DegreesY() [instance] :3861
float Skew::DegreesY()
{
    return ::g::Uno::Math::RadiansToDegrees1(Y());
}

// public void set_DegreesY(float value) [instance] :3862
void Skew::DegreesY(float value)
{
    Y(::g::Uno::Math::DegreesToRadians1(value));
}

// public float2 get_XY() [instance] :3868
::g::Uno::Float2 Skew::XY()
{
    ::g::Uno::Float4 ind1 = _vectorValue;
    return ::g::Uno::Float2__New2(ind1.X, ind1.Y);
}

// public void set_XY(float2 value) [instance] :3869
void Skew::XY(::g::Uno::Float2 value)
{
    _vectorValue = ::g::Uno::Float4__New6(value, _vectorValue.Z, _vectorValue.W);
}

// public Skew New() [static] :3841
Skew* Skew::New2()
{
    Skew* obj2 = (Skew*)uNew(Skew_typeof());
    obj2->ctor_4();
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class Spin :2808
// {
static void Spin_build(uType* type)
{
    type->SetFields(6,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Spin, _hertz), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::Spin, _Target), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Frequency", NULL, (void*)Spin__get_Frequency_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Frequency", NULL, (void*)Spin__set_Frequency_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction(".ctor", NULL, (void*)Spin__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)Spin__get_Target_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)Spin__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()));
}

::g::Fuse::Animations::Animator_type* Spin_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::OpenAnimator_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Spin);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Spin", options);
    type->fp_build_ = Spin_build;
    type->fp_ctor_ = (void*)Spin__New2_fn;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Spin__CreateState_fn;
    return type;
}

// public Spin() :2810
void Spin__ctor_3_fn(Spin* __this)
{
    __this->ctor_3();
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :2830
void Spin__CreateState_fn(Spin* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    return *__retval = ::g::Fuse::Animations::SpinState::New1(__this, p), void();
}

// public double get_Frequency() :2826
void Spin__get_Frequency_fn(Spin* __this, double* __retval)
{
    *__retval = __this->Frequency();
}

// public void set_Frequency(double value) :2827
void Spin__set_Frequency_fn(Spin* __this, double* value)
{
    __this->Frequency(*value);
}

// public Spin New() :2810
void Spin__New2_fn(Spin** __retval)
{
    *__retval = Spin::New2();
}

// public generated Fuse.Visual get_Target() :2818
void Spin__get_Target_fn(Spin* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :2818
void Spin__set_Target_fn(Spin* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public Spin() [instance] :2810
void Spin::ctor_3()
{
    _hertz = 1.0;
    ctor_2();
    MixOp(1);
}

// public double get_Frequency() [instance] :2826
double Spin::Frequency()
{
    return _hertz;
}

// public void set_Frequency(double value) [instance] :2827
void Spin::Frequency(double value)
{
    _hertz = value;
}

// public generated Fuse.Visual get_Target() [instance] :2818
::g::Fuse::Visual* Spin::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :2818
void Spin::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public Spin New() [static] :2810
Spin* Spin::New2()
{
    Spin* obj1 = (Spin*)uNew(Spin_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class SpinState :2837
// {
static void SpinState_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Invalid seek");
    ::STRINGS[2] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno");
    ::TYPES[12] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[67] = ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof(), NULL);
    type->SetFields(5,
        ::g::Fuse::Animations::Spin_typeof(), offsetof(::g::Fuse::Animations::SpinState, Animator1), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::SpinState, degrees), 0,
        ::TYPES[67/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/], offsetof(::g::Fuse::Animations::SpinState, mixHandle), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::Fuse::Animations::SpinState, transform), 0);
}

::g::Fuse::Animations::OpenAnimatorState_type* SpinState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::OpenAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::OpenAnimatorState_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(SpinState);
    options.TypeSize = sizeof(::g::Fuse::Animations::OpenAnimatorState_type);
    type = (::g::Fuse::Animations::OpenAnimatorState_type*)uClassType::New("Fuse.Animations.SpinState", options);
    type->fp_build_ = SpinState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))SpinState__Disable_fn;
    type->fp_Seek = (void(*)(::g::Fuse::Animations::OpenAnimatorState*, bool*, float*, float*, int*, bool*))SpinState__Seek_fn;
    return type;
}

// public SpinState(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) :2843
void SpinState__ctor_2_fn(SpinState* __this, ::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :2852
void SpinState__Disable_fn(SpinState* __this)
{
    uStackFrame __("Fuse.Animations.SpinState", "Disable()");

    if (__this->mixHandle == NULL)
        return;

    __this->degrees = 0.0;
    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), ::TYPES[67/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]));
    __this->mixHandle = NULL;
}

// public SpinState New(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) :2843
void SpinState__New1_fn(::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p, SpinState** __retval)
{
    *__retval = SpinState::New1(animator, p);
}

// protected override sealed bool Seek(bool on, float interval, float strength, Fuse.Animations.SeekDirection dir) :2862
void SpinState__Seek_fn(SpinState* __this, bool* on, float* interval, float* strength, int* dir, bool* __retval)
{
    uStackFrame __("Fuse.Animations.SpinState", "Seek(bool,float,float,Fuse.Animations.SeekDirection)");
    float interval_ = *interval;
    bool on_ = *on;
    float strength_ = *strength;

    if ((__this->mixHandle == NULL) || (__this->transform == NULL))
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[7/*"Invalid seek"*/], 1, ::STRINGS[2/*"/Users/most...*/], 2866);
        return *__retval = true, void();
    }

    bool done = false;
    double oldDegrees = __this->degrees;
    __this->degrees = (__this->degrees + ((double)(interval_ * 360.0f) * uPtr(__this->Animator1)->Frequency()));

    if (on_)
        __this->degrees = ::g::Uno::Math::Mod(__this->degrees, 360.0);
    else if ((((oldDegrees <= 9.9999997473787516e-06) || (__this->degrees <= 9.9999997473787516e-06)) || (oldDegrees >= 360.0)) || (__this->degrees >= 360.0))
    {
        __this->degrees = 0.0;
        done = true;
    }

    uPtr(__this->transform)->Degrees((float)__this->degrees);
    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), ::TYPES[67/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]), __this->transform, uCRef(strength_));
    return *__retval = done, void();
}

// public SpinState(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) [instance] :2843
void SpinState::ctor_2(::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uStackFrame __("Fuse.Animations.SpinState", ".ctor(Fuse.Animations.Spin,Fuse.Animations.CreateStateParams)");
    transform = ::g::Fuse::Rotation::New2();
    ctor_1(animator, p, uPtr(animator)->Target());
    Animator1 = animator;
    mixHandle = ::g::Fuse::Animations::IMixer::RegisterTransform(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[12/*Fuse.Animations.IMixer*/]), Visual, uPtr(Animator1)->MixOp(), 3000);
}

// public SpinState New(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) [static] :2843
SpinState* SpinState::New1(::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    SpinState* obj1 = (SpinState*)uNew(SpinState_typeof());
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class SplineTrack :2918
// {
static void SplineTrack_build(uType* type)
{
    ::TYPES[15] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::Keyframe_typeof(), NULL);
    ::TYPES[68] = SplineTrack__PointInterpolater_typeof();
    ::TYPES[50] = ::g::Fuse::Animations::ContinuousTrackProvider_typeof();
    type->SetInterfaces(
        ::TYPES[50/*Fuse.Animations.ContinuousTrackProvider*/], offsetof(SplineTrack_type, interface0),
        ::g::Fuse::Animations::ITrackProvider_typeof(), offsetof(SplineTrack_type, interface1),
        ::g::Fuse::Animations::KeyframeTrack_typeof(), offsetof(SplineTrack_type, interface2),
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(SplineTrack_type, interface3));
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::SplineTrack, _bias), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::SplineTrack, _continuity), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::SplineTrack, _duration), 0,
        ::TYPES[15/*Uno.Collections.List<Fuse.Animations.Keyframe>*/], offsetof(::g::Fuse::Animations::SplineTrack, _frames), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::SplineTrack, _init), 0,
        ::TYPES[68/*Fuse.Animations.SplineTrack.PointInterpolater*/], offsetof(::g::Fuse::Animations::SplineTrack, _pointInterpolater), 0,
        ::g::Fuse::Animations::KeyframeInterpolation_typeof(), offsetof(::g::Fuse::Animations::SplineTrack, _style), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::SplineTrack, _tension), 0);
}

SplineTrack_type* SplineTrack_typeof()
{
    static uSStrong<SplineTrack_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(SplineTrack);
    options.TypeSize = sizeof(SplineTrack_type);
    type = (SplineTrack_type*)uClassType::New("Fuse.Animations.SplineTrack", options);
    type->fp_build_ = SplineTrack_build;
    type->fp_ctor_ = (void*)SplineTrack__New1_fn;
    type->interface3.fp_GetDuration = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*, double*))SplineTrack__FuseAnimationsTrackProviderGetDuration_fn;
    type->interface3.fp_GetAnimatorVariant = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*))SplineTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn;
    type->interface0.fp_GetSeekProgress = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, ::g::Uno::Float4*, double*, int*))SplineTrack__FuseAnimationsContinuousTrackProviderGetSeekProgress_fn;
    type->interface0.fp_GetSeekTime = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, ::g::Uno::Float4*, double*, int*))SplineTrack__FuseAnimationsContinuousTrackProviderGetSeekTime_fn;
    type->interface2.fp_get_Keyframes = (void(*)(uObject*, uObject**))SplineTrack__get_Keyframes_fn;
    type->interface2.fp_get_Interpolation = (void(*)(uObject*, int*))SplineTrack__get_Interpolation_fn;
    type->interface2.fp_set_Interpolation = (void(*)(uObject*, int*))SplineTrack__set_Interpolation_fn;
    return type;
}

// public generated SplineTrack() :2918
void SplineTrack__ctor__fn(SplineTrack* __this)
{
    __this->ctor_();
}

// public float get_Bias() :2947
void SplineTrack__get_Bias_fn(SplineTrack* __this, float* __retval)
{
    *__retval = __this->Bias();
}

// public void set_Bias(float value) :2948
void SplineTrack__set_Bias_fn(SplineTrack* __this, float* value)
{
    __this->Bias(*value);
}

// public float get_Continuity() :2961
void SplineTrack__get_Continuity_fn(SplineTrack* __this, float* __retval)
{
    *__retval = __this->Continuity();
}

// public void set_Continuity(float value) :2962
void SplineTrack__set_Continuity_fn(SplineTrack* __this, float* value)
{
    __this->Continuity(*value);
}

// private static float4 CubicHermitePoint(float4 p0, float4 p1, float4 m0, float4 m1, float t) :3071
void SplineTrack__CubicHermitePoint_fn(::g::Uno::Float4* p0, ::g::Uno::Float4* p1, ::g::Uno::Float4* m0, ::g::Uno::Float4* m1, float* t, ::g::Uno::Float4* __retval)
{
    *__retval = SplineTrack::CubicHermitePoint(*p0, *p1, *m0, *m1, *t);
}

// private Fuse.Animations.SeekResult Fuse.Animations.ContinuousTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState tas, double progress, double interval, Fuse.Animations.SeekDirection dir, float4& value, double& strength) :3024
void SplineTrack__FuseAnimationsContinuousTrackProviderGetSeekProgress_fn(SplineTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "Fuse.Animations.ContinuousTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,float4&,double&)");
    double progress_ = *progress;
    double interval_ = *interval;
    int dir_ = *dir;
    return *__retval = ::g::Fuse::Animations::ContinuousTrackProvider::GetSeekTime(uInterface(uPtr(uAs<uObject*>(__this, ::TYPES[50/*Fuse.Animations.ContinuousTrackProvider*/])), ::TYPES[50/*Fuse.Animations.ContinuousTrackProvider*/]), tas, progress_ * __this->_duration, interval_, dir_, value, strength), void();
}

// private Fuse.Animations.SeekResult Fuse.Animations.ContinuousTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState tas, double elapsed, double interval, Fuse.Animations.SeekDirection dir, float4& value, double& strength) :3032
void SplineTrack__FuseAnimationsContinuousTrackProviderGetSeekTime_fn(SplineTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "Fuse.Animations.ContinuousTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,float4&,double&)");
    ::g::Fuse::Animations::Keyframe* ret2;
    double elapsed_ = *elapsed;
    ::g::Fuse::Animations::Keyframe* ret3;
    ::g::Fuse::Animations::Keyframe* ret4;
    ::g::Fuse::Animations::Keyframe* ret5;
    ::g::Fuse::Animations::Keyframe* ret6;
    ::g::Fuse::Animations::Keyframe* ret7;
    ::g::Uno::Float4 ret8;
    ::g::Fuse::Animations::Keyframe* ret9;
    ::g::Fuse::Animations::Keyframe* ret10;
    ::g::Fuse::Animations::Keyframe* ret11;
    ::g::Fuse::Animations::Keyframe* ret12;
    int dir_ = *dir;
    __this->Init();

    if (uPtr(__this->_frames)->Count() == 0)
    {
        *value = ::g::Uno::Float4__New1(0.0f);
        *strength = 0.0;
        return *__retval = 3, void();
    }

    int segment = 0;

    while ((segment < (uPtr(__this->_frames)->Count() - 1)) && (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(segment), &ret2), ret2))->Time() <= elapsed_))
        ++segment;

    if (segment == 0)
    {
        double segmentProgress = elapsed_ / uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(0), &ret3), ret3))->TimeDelta();
        *value = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(0), &ret4), ret4))->Value();
        *strength = segmentProgress;
    }
    else
    {
        int previous = segment - 1;
        double segmentProgress1 = (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(segment), &ret5), ret5))->TimeDelta() < 9.9999997473787516e-06) ? 0.0 : ::g::Uno::Math::Clamp((elapsed_ - uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(previous), &ret6), ret6))->Time()) / uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(segment), &ret7), ret7))->TimeDelta(), 0.0, 1.0);
        *value = (uPtr(__this->_pointInterpolater)->Invoke(&ret8, 5, uCRef(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(previous), &ret9), ret9))->Value()), uCRef(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(segment), &ret10), ret10))->Value()), uCRef(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(previous), &ret11), ret11))->TangentOut()), uCRef(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(segment), &ret12), ret12))->TangentIn()), uCRef((float)segmentProgress1)), ret8);
        *strength = 1.0;
    }

    return *__retval = (((dir_ == 0) ? elapsed_ >= __this->_duration : elapsed_ <= 0.0) ? 1 : 0) | 2, void();
}

// private Fuse.Animations.AnimatorVariant Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator tas) :3019
void SplineTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(SplineTrack* __this, ::g::Fuse::Animations::TrackAnimator* tas, int* __retval)
{
    return *__retval = 0, void();
}

// private double Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator ta, Fuse.Animations.AnimationVariant variant) :3013
void SplineTrack__FuseAnimationsTrackProviderGetDuration_fn(SplineTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator,Fuse.Animations.AnimationVariant)");
    __this->Init();
    return *__retval = __this->_duration, void();
}

// private void Init() :3005
void SplineTrack__Init_fn(SplineTrack* __this)
{
    __this->Init();
}

// public Fuse.Animations.KeyframeInterpolation get_Interpolation() :2975
void SplineTrack__get_Interpolation_fn(SplineTrack* __this, int* __retval)
{
    *__retval = __this->Interpolation();
}

// public void set_Interpolation(Fuse.Animations.KeyframeInterpolation value) :2976
void SplineTrack__set_Interpolation_fn(SplineTrack* __this, int* value)
{
    __this->Interpolation(*value);
}

// public Uno.Collections.IList<Fuse.Animations.Keyframe> get_Keyframes() :2924
void SplineTrack__get_Keyframes_fn(SplineTrack* __this, uObject** __retval)
{
    *__retval = __this->Keyframes();
}

// private static float4 LinearPoint(float4 p0, float4 p1, float4 m0, float4 m1, float t) :3082
void SplineTrack__LinearPoint_fn(::g::Uno::Float4* p0, ::g::Uno::Float4* p1, ::g::Uno::Float4* m0, ::g::Uno::Float4* m1, float* t, ::g::Uno::Float4* __retval)
{
    *__retval = SplineTrack::LinearPoint(*p0, *p1, *m0, *m1, *t);
}

// public generated SplineTrack New() :2918
void SplineTrack__New1_fn(SplineTrack** __retval)
{
    *__retval = SplineTrack::New1();
}

// public float get_Tension() :2933
void SplineTrack__get_Tension_fn(SplineTrack* __this, float* __retval)
{
    *__retval = __this->Tension();
}

// public void set_Tension(float value) :2934
void SplineTrack__set_Tension_fn(SplineTrack* __this, float* value)
{
    __this->Tension(*value);
}

// public generated SplineTrack() [instance] :2918
void SplineTrack::ctor_()
{
    _frames = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[15/*Uno.Collections.List<Fuse.Animations.Keyframe>*/]));
    _tension = 1.0f;
    _continuity = -1.0f;
    _pointInterpolater = uDelegate::New(::TYPES[68/*Fuse.Animations.SplineTrack.PointInterpolater*/], (void*)SplineTrack__LinearPoint_fn);
}

// public float get_Bias() [instance] :2947
float SplineTrack::Bias()
{
    return _bias;
}

// public void set_Bias(float value) [instance] :2948
void SplineTrack::Bias(float value)
{
    _bias = value;
    _style = 2;
}

// public float get_Continuity() [instance] :2961
float SplineTrack::Continuity()
{
    return _continuity;
}

// public void set_Continuity(float value) [instance] :2962
void SplineTrack::Continuity(float value)
{
    _continuity = value;
    _style = 2;
}

// private void Init() [instance] :3005
void SplineTrack::Init()
{
    uStackFrame __("Fuse.Animations.SplineTrack", "Init()");

    if (_init)
        return;

    _duration = ::g::Fuse::Animations::Keyframe::CompleteFrames((uObject*)_frames, Tension(), Bias(), Continuity());
    _init = true;
}

// public Fuse.Animations.KeyframeInterpolation get_Interpolation() [instance] :2975
int SplineTrack::Interpolation()
{
    return _style;
}

// public void set_Interpolation(Fuse.Animations.KeyframeInterpolation value) [instance] :2976
void SplineTrack::Interpolation(int value)
{
    _style = value;

    switch (_style)
    {
        case 0:
        {
            _bias = 0.0f;
            _tension = 1.0f;
            _continuity = -1.0f;
            _pointInterpolater = uDelegate::New(::TYPES[68/*Fuse.Animations.SplineTrack.PointInterpolater*/], (void*)SplineTrack__LinearPoint_fn);
            break;
        }
        case 1:
        {
            _bias = 0.0f;
            _tension = 0.0f;
            _continuity = 0.0f;
            _pointInterpolater = uDelegate::New(::TYPES[68/*Fuse.Animations.SplineTrack.PointInterpolater*/], (void*)SplineTrack__CubicHermitePoint_fn);
            break;
        }
        default:
        {
            _pointInterpolater = uDelegate::New(::TYPES[68/*Fuse.Animations.SplineTrack.PointInterpolater*/], (void*)SplineTrack__CubicHermitePoint_fn);
            break;
        }
    }
}

// public Uno.Collections.IList<Fuse.Animations.Keyframe> get_Keyframes() [instance] :2924
uObject* SplineTrack::Keyframes()
{
    uStackFrame __("Fuse.Animations.SplineTrack", "get_Keyframes()");
    return (uObject*)_frames;
}

// public float get_Tension() [instance] :2933
float SplineTrack::Tension()
{
    return _tension;
}

// public void set_Tension(float value) [instance] :2934
void SplineTrack::Tension(float value)
{
    _tension = value;
    _style = 2;
}

// private static float4 CubicHermitePoint(float4 p0, float4 p1, float4 m0, float4 m1, float t) [static] :3071
::g::Uno::Float4 SplineTrack::CubicHermitePoint(::g::Uno::Float4 p0, ::g::Uno::Float4 p1, ::g::Uno::Float4 m0, ::g::Uno::Float4 m1, float t)
{
    float t2 = t * t;
    float t3 = t2 * t;
    return ::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Multiply(((2.0f * t3) - (3.0f * t2)) + 1.0f, p0), ::g::Uno::Float4__op_Multiply((t3 - (2.0f * t2)) + t, m0)), ::g::Uno::Float4__op_Multiply((-2.0f * t3) + (3.0f * t2), p1)), ::g::Uno::Float4__op_Multiply(t3 - t2, m1));
}

// private static float4 LinearPoint(float4 p0, float4 p1, float4 m0, float4 m1, float t) [static] :3082
::g::Uno::Float4 SplineTrack::LinearPoint(::g::Uno::Float4 p0, ::g::Uno::Float4 p1, ::g::Uno::Float4 m0, ::g::Uno::Float4 m1, float t)
{
    return ::g::Uno::Float4__op_Addition2(p0, ::g::Uno::Float4__op_Multiply(t, ::g::Uno::Float4__op_Subtraction2(p1, p0)));
}

// public generated SplineTrack New() [static] :2918
SplineTrack* SplineTrack::New1()
{
    SplineTrack* obj1 = (SplineTrack*)uNew(SplineTrack_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public abstract class TrackAnimator :3151
// {
static void TrackAnimator_build(uType* type)
{
    ::TYPES[69] = ::g::Fuse::Animations::TrackProvider_typeof();
    ::TYPES[70] = ::g::Fuse::Animations::KeyframeTrack_typeof();
    ::TYPES[71] = ::g::Fuse::Animations::ITrackProvider_typeof();
    ::TYPES[50] = ::g::Fuse::Animations::ContinuousTrackProvider_typeof();
    type->SetFields(4,
        ::TYPES[69/*Fuse.Animations.TrackProvider*/], offsetof(::g::Fuse::Animations::TrackAnimator, _continuousProvider), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _delayBack), 0,
        ::TYPES[69/*Fuse.Animations.TrackProvider*/], offsetof(::g::Fuse::Animations::TrackAnimator, _discreteProvider), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _durationBack), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _easing), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _easingBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _hasDelayBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _hasDurationBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _hasEasingBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _isDiscrete), 0,
        ::TYPES[70/*Fuse.Animations.KeyframeTrack*/], offsetof(::g::Fuse::Animations::TrackAnimator, _keyframeTrack), 0,
        uObject_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _objectValue), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _vectorValue), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _weight), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _Duration), 0);
    type->Reflection.SetFunctions(17,
        new uFunction("get_DelayBack", NULL, (void*)TrackAnimator__get_DelayBack_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_DelayBack", NULL, (void*)TrackAnimator__set_DelayBack_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Duration", NULL, (void*)TrackAnimator__get_Duration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Duration", NULL, (void*)TrackAnimator__set_Duration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_DurationBack", NULL, (void*)TrackAnimator__get_DurationBack_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_DurationBack", NULL, (void*)TrackAnimator__set_DurationBack_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Easing", NULL, (void*)TrackAnimator__get_Easing_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_Easing", NULL, (void*)TrackAnimator__set_Easing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("get_EasingBack", NULL, (void*)TrackAnimator__get_EasingBack_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_EasingBack", NULL, (void*)TrackAnimator__set_EasingBack_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("get_KeyframeInterpolation", NULL, (void*)TrackAnimator__get_KeyframeInterpolation_fn, 0, false, ::g::Fuse::Animations::KeyframeInterpolation_typeof(), 0),
        new uFunction("set_KeyframeInterpolation", NULL, (void*)TrackAnimator__set_KeyframeInterpolation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::KeyframeInterpolation_typeof()),
        new uFunction("get_Keyframes", NULL, (void*)TrackAnimator__get_Keyframes_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Animations::Keyframe_typeof(), NULL), 0),
        new uFunction("get_Provider", NULL, (void*)TrackAnimator__get_Provider_fn, 0, false, ::TYPES[71/*Fuse.Animations.ITrackProvider*/], 0),
        new uFunction("set_Provider", NULL, (void*)TrackAnimator__set_Provider_fn, 0, false, uVoid_typeof(), 1, ::TYPES[71/*Fuse.Animations.ITrackProvider*/]),
        new uFunction("get_Weight", NULL, (void*)TrackAnimator__get_Weight_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Weight", NULL, (void*)TrackAnimator__set_Weight_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

::g::Fuse::Animations::Animator_type* TrackAnimator_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Animator_typeof();
    options.FieldCount = 19;
    options.ObjectSize = sizeof(TrackAnimator);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.TrackAnimator", options);
    type->fp_build_ = TrackAnimator_build;
    type->fp_get_AnimatorVariant = (void(*)(::g::Fuse::Animations::Animator*, int*))TrackAnimator__get_AnimatorVariant_fn;
    type->fp_GetDurationWithDelay = (void(*)(::g::Fuse::Animations::Animator*, int*, double*))TrackAnimator__GetDurationWithDelay_fn;
    return type;
}

// protected generated TrackAnimator() :3151
void TrackAnimator__ctor_2_fn(TrackAnimator* __this)
{
    __this->ctor_2();
}

// internal override sealed Fuse.Animations.AnimatorVariant get_AnimatorVariant() :3155
void TrackAnimator__get_AnimatorVariant_fn(TrackAnimator* __this, int* __retval)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_AnimatorVariant()");

    if (__this->_discreteProvider != NULL)
        return *__retval = ::g::Fuse::Animations::TrackProvider::GetAnimatorVariant(uInterface(uPtr(__this->_discreteProvider), ::TYPES[69/*Fuse.Animations.TrackProvider*/]), __this), void();
    else if (__this->_continuousProvider != NULL)
        return *__retval = ::g::Fuse::Animations::TrackProvider::GetAnimatorVariant(uInterface(uPtr(__this->_continuousProvider), ::TYPES[69/*Fuse.Animations.TrackProvider*/]), __this), void();

    return *__retval = 0, void();
}

// public double get_DelayBack() :3265
void TrackAnimator__get_DelayBack_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->DelayBack();
}

// public void set_DelayBack(double value) :3266
void TrackAnimator__set_DelayBack_fn(TrackAnimator* __this, double* value)
{
    __this->DelayBack(*value);
}

// public generated double get_Duration() :3241
void TrackAnimator__get_Duration_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public generated void set_Duration(double value) :3241
void TrackAnimator__set_Duration_fn(TrackAnimator* __this, double* value)
{
    __this->Duration(*value);
}

// public double get_DurationBack() :3250
void TrackAnimator__get_DurationBack_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->DurationBack();
}

// public void set_DurationBack(double value) :3251
void TrackAnimator__set_DurationBack_fn(TrackAnimator* __this, double* value)
{
    __this->DurationBack(*value);
}

// public Fuse.Animations.Easing get_Easing() :3219
void TrackAnimator__get_Easing_fn(TrackAnimator* __this, ::g::Fuse::Animations::Easing** __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :3220
void TrackAnimator__set_Easing_fn(TrackAnimator* __this, ::g::Fuse::Animations::Easing* value)
{
    __this->Easing(value);
}

// public Fuse.Animations.Easing get_EasingBack() :3230
void TrackAnimator__get_EasingBack_fn(TrackAnimator* __this, ::g::Fuse::Animations::Easing** __retval)
{
    *__retval = __this->EasingBack();
}

// public void set_EasingBack(Fuse.Animations.Easing value) :3231
void TrackAnimator__set_EasingBack_fn(TrackAnimator* __this, ::g::Fuse::Animations::Easing* value)
{
    __this->EasingBack(value);
}

// internal override sealed double GetDurationWithDelay(Fuse.Animations.AnimationVariant dir) :3165
void TrackAnimator__GetDurationWithDelay_fn(TrackAnimator* __this, int* dir, double* __retval)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "GetDurationWithDelay(Fuse.Animations.AnimationVariant)");
    int dir_ = *dir;
    double duration = 0.0;

    if (__this->_discreteProvider != NULL)
        duration = ::g::Fuse::Animations::TrackProvider::GetDuration(uInterface(uPtr(__this->_discreteProvider), ::TYPES[69/*Fuse.Animations.TrackProvider*/]), __this, dir_);
    else if (__this->_continuousProvider != NULL)
        duration = ::g::Fuse::Animations::TrackProvider::GetDuration(uInterface(uPtr(__this->_continuousProvider), ::TYPES[69/*Fuse.Animations.TrackProvider*/]), __this, dir_);

    return *__retval = (((dir_ == 1) && __this->HasBack()) ? __this->DelayBack() : __this->Delay()) + duration, void();
}

// internal Fuse.Animations.TrackProvider GetProvider(Fuse.Animations.AnimationVariant variant) :3205
void TrackAnimator__GetProvider_fn(TrackAnimator* __this, int* variant, uObject** __retval)
{
    *__retval = __this->GetProvider(*variant);
}

// internal bool get_HasBack() :3275
void TrackAnimator__get_HasBack_fn(TrackAnimator* __this, bool* __retval)
{
    *__retval = __this->HasBack();
}

// public Fuse.Animations.KeyframeInterpolation get_KeyframeInterpolation() :3305
void TrackAnimator__get_KeyframeInterpolation_fn(TrackAnimator* __this, int* __retval)
{
    *__retval = __this->KeyframeInterpolation();
}

// public void set_KeyframeInterpolation(Fuse.Animations.KeyframeInterpolation value) :3306
void TrackAnimator__set_KeyframeInterpolation_fn(TrackAnimator* __this, int* value)
{
    __this->KeyframeInterpolation(*value);
}

// public Uno.Collections.IList<Fuse.Animations.Keyframe> get_Keyframes() :3348
void TrackAnimator__get_Keyframes_fn(TrackAnimator* __this, uObject** __retval)
{
    *__retval = __this->Keyframes();
}

// private Fuse.Animations.KeyframeTrack get_KeyframeTrack() :3281
void TrackAnimator__get_KeyframeTrack_fn(TrackAnimator* __this, uObject** __retval)
{
    *__retval = __this->KeyframeTrack();
}

// internal void MarkDiscrete() :3180
void TrackAnimator__MarkDiscrete_fn(TrackAnimator* __this)
{
    __this->MarkDiscrete();
}

// public Fuse.Animations.ITrackProvider get_Provider() :3191
void TrackAnimator__get_Provider_fn(TrackAnimator* __this, uObject** __retval)
{
    *__retval = __this->Provider();
}

// public void set_Provider(Fuse.Animations.ITrackProvider value) :3197
void TrackAnimator__set_Provider_fn(TrackAnimator* __this, uObject* value)
{
    __this->Provider(value);
}

// public double get_Weight() :3359
void TrackAnimator__get_Weight_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->Weight();
}

// public void set_Weight(double value) :3360
void TrackAnimator__set_Weight_fn(TrackAnimator* __this, double* value)
{
    __this->Weight(*value);
}

// protected generated TrackAnimator() [instance] :3151
void TrackAnimator::ctor_2()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", ".ctor()");
    _continuousProvider = (uObject*)::g::Fuse::Animations::EasingTrack::Singleton();
    _easing = ::g::Fuse::Animations::Easing::Linear();
    _weight = 1.0;
    ctor_1();
}

// public double get_DelayBack() [instance] :3265
double TrackAnimator::DelayBack()
{
    return _hasDelayBack ? _delayBack : 0.0;
}

// public void set_DelayBack(double value) [instance] :3266
void TrackAnimator::DelayBack(double value)
{
    _delayBack = value;
    _hasDelayBack = true;
}

// public generated double get_Duration() [instance] :3241
double TrackAnimator::Duration()
{
    return _Duration;
}

// public generated void set_Duration(double value) [instance] :3241
void TrackAnimator::Duration(double value)
{
    _Duration = value;
}

// public double get_DurationBack() [instance] :3250
double TrackAnimator::DurationBack()
{
    return _hasDurationBack ? _durationBack : Duration();
}

// public void set_DurationBack(double value) [instance] :3251
void TrackAnimator::DurationBack(double value)
{
    _durationBack = value;
    _hasDurationBack = true;
}

// public Fuse.Animations.Easing get_Easing() [instance] :3219
::g::Fuse::Animations::Easing* TrackAnimator::Easing()
{
    return _easing;
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :3220
void TrackAnimator::Easing(::g::Fuse::Animations::Easing* value)
{
    _easing = value;
}

// public Fuse.Animations.Easing get_EasingBack() [instance] :3230
::g::Fuse::Animations::Easing* TrackAnimator::EasingBack()
{
    return _hasEasingBack ? (::g::Fuse::Animations::Easing*)_easingBack : (::g::Fuse::Animations::Easing*)_easing;
}

// public void set_EasingBack(Fuse.Animations.Easing value) [instance] :3231
void TrackAnimator::EasingBack(::g::Fuse::Animations::Easing* value)
{
    _easingBack = value;
    _hasEasingBack = true;
}

// internal Fuse.Animations.TrackProvider GetProvider(Fuse.Animations.AnimationVariant variant) [instance] :3205
uObject* TrackAnimator::GetProvider(int variant)
{
    uObject* ind1 = _discreteProvider;
    return (ind1 != NULL) ? ind1 : (uObject*)_continuousProvider;
}

// internal bool get_HasBack() [instance] :3275
bool TrackAnimator::HasBack()
{
    return (_hasDelayBack || _hasDurationBack) || _hasEasingBack;
}

// public Fuse.Animations.KeyframeInterpolation get_KeyframeInterpolation() [instance] :3305
int TrackAnimator::KeyframeInterpolation()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_KeyframeInterpolation()");
    return ::g::Fuse::Animations::KeyframeTrack::Interpolation(uInterface(uPtr(KeyframeTrack()), ::TYPES[70/*Fuse.Animations.KeyframeTrack*/]));
}

// public void set_KeyframeInterpolation(Fuse.Animations.KeyframeInterpolation value) [instance] :3306
void TrackAnimator::KeyframeInterpolation(int value)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "set_KeyframeInterpolation(Fuse.Animations.KeyframeInterpolation)");
    ::g::Fuse::Animations::KeyframeTrack::Interpolation(uInterface(uPtr(KeyframeTrack()), ::TYPES[70/*Fuse.Animations.KeyframeTrack*/]), value);
}

// public Uno.Collections.IList<Fuse.Animations.Keyframe> get_Keyframes() [instance] :3348
uObject* TrackAnimator::Keyframes()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_Keyframes()");
    return ::g::Fuse::Animations::KeyframeTrack::Keyframes(uInterface(uPtr(KeyframeTrack()), ::TYPES[70/*Fuse.Animations.KeyframeTrack*/]));
}

// private Fuse.Animations.KeyframeTrack get_KeyframeTrack() [instance] :3281
uObject* TrackAnimator::KeyframeTrack()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_KeyframeTrack()");

    if (_keyframeTrack == NULL)
    {
        if (_isDiscrete)
        {
            ::g::Fuse::Animations::DiscreteKeyframeTrack* t = ::g::Fuse::Animations::DiscreteKeyframeTrack::New1();
            _keyframeTrack = (uObject*)t;
            _discreteProvider = (uObject*)t;
        }
        else
        {
            ::g::Fuse::Animations::SplineTrack* t1 = ::g::Fuse::Animations::SplineTrack::New1();
            _keyframeTrack = (uObject*)t1;
            _continuousProvider = (uObject*)t1;
        }
    }

    return _keyframeTrack;
}

// internal void MarkDiscrete() [instance] :3180
void TrackAnimator::MarkDiscrete()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "MarkDiscrete()");
    _discreteProvider = (uObject*)::g::Fuse::Animations::DiscreteSingleTrack::Singleton();
    _continuousProvider = NULL;
    _isDiscrete = true;
}

// public Fuse.Animations.ITrackProvider get_Provider() [instance] :3191
uObject* TrackAnimator::Provider()
{
    if (_continuousProvider != NULL)
        return uAs<uObject*>(_continuousProvider, ::TYPES[71/*Fuse.Animations.ITrackProvider*/]);

    return NULL;
}

// public void set_Provider(Fuse.Animations.ITrackProvider value) [instance] :3197
void TrackAnimator::Provider(uObject* value)
{
    _continuousProvider = NULL;

    if (uIs(value, ::TYPES[50/*Fuse.Animations.ContinuousTrackProvider*/]))
        _continuousProvider = uAs<uObject*>(value, ::TYPES[69/*Fuse.Animations.TrackProvider*/]);
}

// public double get_Weight() [instance] :3359
double TrackAnimator::Weight()
{
    return _weight;
}

// public void set_Weight(double value) [instance] :3360
void TrackAnimator::Weight(double value)
{
    _weight = value;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal abstract class TrackAnimatorState :3369
// {
static void TrackAnimatorState_build(uType* type)
{
    ::TYPES[50] = ::g::Fuse::Animations::ContinuousTrackProvider_typeof();
    ::TYPES[16] = ::g::Fuse::Animations::DiscreteTrackProvider_typeof();
    type->SetFields(3,
        ::TYPES[50/*Fuse.Animations.ContinuousTrackProvider*/], offsetof(::g::Fuse::Animations::TrackAnimatorState, _continuousProvider), 0,
        ::TYPES[16/*Fuse.Animations.DiscreteTrackProvider*/], offsetof(::g::Fuse::Animations::TrackAnimatorState, _discreteProvider), 0,
        ::g::Fuse::Animations::TrackAnimator_typeof(), offsetof(::g::Fuse::Animations::TrackAnimatorState, Animator), 0);
}

TrackAnimatorState_type* TrackAnimatorState_typeof()
{
    static uSStrong<TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::AnimatorState_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(TrackAnimatorState);
    options.TypeSize = sizeof(TrackAnimatorState_type);
    type = (TrackAnimatorState_type*)uClassType::New("Fuse.Animations.TrackAnimatorState", options);
    type->fp_build_ = TrackAnimatorState_build;
    type->fp_SeekObjectValue = TrackAnimatorState__SeekObjectValue_fn;
    type->fp_SeekProgress = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*))TrackAnimatorState__SeekProgress_fn;
    type->fp_SeekTime = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*))TrackAnimatorState__SeekTime_fn;
    type->fp_SeekValue = TrackAnimatorState__SeekValue_fn;
    return type;
}

// protected TrackAnimatorState(Fuse.Animations.TrackAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) :3375
void TrackAnimatorState__ctor_1_fn(TrackAnimatorState* __this, ::g::Fuse::Animations::TrackAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    __this->ctor_1(animator, p, useVisual);
}

// public double get_Duration() :3454
void TrackAnimatorState__get_Duration_fn(TrackAnimatorState* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public Fuse.Animations.Easing get_Easing() :3459
void TrackAnimatorState__get_Easing_fn(TrackAnimatorState* __this, ::g::Fuse::Animations::Easing** __retval)
{
    *__retval = __this->Easing();
}

// public bool get_IsBackward() :3449
void TrackAnimatorState__get_IsBackward_fn(TrackAnimatorState* __this, bool* __retval)
{
    *__retval = __this->IsBackward();
}

// protected virtual void SeekObjectValue(object value, float strength) :3445
void TrackAnimatorState__SeekObjectValue_fn(TrackAnimatorState* __this, uObject* value, float* strength)
{
}

// internal override sealed Fuse.Animations.SeekResult SeekProgress(double progress, double interval, Fuse.Animations.SeekDirection dir, double strength) :3385
void TrackAnimatorState__SeekProgress_fn(TrackAnimatorState* __this, double* progress, double* interval, int* dir, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.TrackAnimatorState", "SeekProgress(double,double,Fuse.Animations.SeekDirection,double)");
    double progress_ = *progress;
    double interval_ = *interval;
    int dir_ = *dir;
    double strength_ = *strength;

    if (__this->_continuousProvider != NULL)
    {
        double oStrength;
        ::g::Uno::Float4 oValue;
        int r = ::g::Fuse::Animations::ContinuousTrackProvider::GetSeekProgress(uInterface(uPtr(__this->_continuousProvider), ::TYPES[50/*Fuse.Animations.ContinuousTrackProvider*/]), __this, progress_, interval_, dir_, &oValue, &oStrength);
        __this->SeekValue(oValue, (float)((oStrength * strength_) * uPtr(__this->Animator)->Weight()));
        return *__retval = r, void();
    }

    if (__this->_discreteProvider != NULL)
    {
        double oStrength1;
        uObject* oValue1;
        int r1 = ::g::Fuse::Animations::DiscreteTrackProvider::GetSeekProgress(uInterface(uPtr(__this->_discreteProvider), ::TYPES[16/*Fuse.Animations.DiscreteTrackProvider*/]), __this, progress_, interval_, dir_, &oValue1, &oStrength1);
        __this->SeekObjectValue(oValue1, (float)((oStrength1 * strength_) * uPtr(__this->Animator)->Weight()));
        return *__retval = r1, void();
    }

    return *__retval = 3, void();
}

// internal override sealed Fuse.Animations.SeekResult SeekTime(double elapsed, double interval, Fuse.Animations.SeekDirection dir, double strength) :3411
void TrackAnimatorState__SeekTime_fn(TrackAnimatorState* __this, double* elapsed, double* interval, int* dir, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.TrackAnimatorState", "SeekTime(double,double,Fuse.Animations.SeekDirection,double)");
    double elapsed_ = *elapsed;
    double interval_ = *interval;
    int dir_ = *dir;
    double strength_ = *strength;
    double relTime;

    if (__this->IsBackward() && uPtr(__this->Animator)->HasBack())
        relTime = elapsed_ - ((__this->TotalDuration - uPtr(__this->Animator)->DelayBack()) - uPtr(__this->Animator)->DurationBack());
    else
        relTime = elapsed_ - uPtr(__this->Animator)->Delay();

    if (__this->_continuousProvider != NULL)
    {
        double oStrength;
        ::g::Uno::Float4 oValue;
        int r = ::g::Fuse::Animations::ContinuousTrackProvider::GetSeekTime(uInterface(uPtr(__this->_continuousProvider), ::TYPES[50/*Fuse.Animations.ContinuousTrackProvider*/]), __this, relTime, interval_, dir_, &oValue, &oStrength);
        __this->SeekValue(oValue, (float)((oStrength * strength_) * uPtr(__this->Animator)->Weight()));
        return *__retval = r, void();
    }

    if (__this->_discreteProvider != NULL)
    {
        double oStrength1;
        uObject* oValue1;
        int r1 = ::g::Fuse::Animations::DiscreteTrackProvider::GetSeekTime(uInterface(uPtr(__this->_discreteProvider), ::TYPES[16/*Fuse.Animations.DiscreteTrackProvider*/]), __this, relTime, interval_, dir_, &oValue1, &oStrength1);
        __this->SeekObjectValue(oValue1, (float)((oStrength1 * strength_) * uPtr(__this->Animator)->Weight()));
        return *__retval = r1, void();
    }

    return *__retval = 3, void();
}

// protected virtual void SeekValue(float4 value, float strength) :3444
void TrackAnimatorState__SeekValue_fn(TrackAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
}

// protected TrackAnimatorState(Fuse.Animations.TrackAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) [instance] :3375
void TrackAnimatorState::ctor_1(::g::Fuse::Animations::TrackAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    uStackFrame __("Fuse.Animations.TrackAnimatorState", ".ctor(Fuse.Animations.TrackAnimator,Fuse.Animations.CreateStateParams,[Fuse.Visual])");
    ctor_(p, useVisual);
    Animator = animator;
    uObject* pr = uPtr(animator)->GetProvider(Variant);
    _continuousProvider = uAs<uObject*>(pr, ::TYPES[50/*Fuse.Animations.ContinuousTrackProvider*/]);
    _discreteProvider = uAs<uObject*>(pr, ::TYPES[16/*Fuse.Animations.DiscreteTrackProvider*/]);
}

// public double get_Duration() [instance] :3454
double TrackAnimatorState::Duration()
{
    uStackFrame __("Fuse.Animations.TrackAnimatorState", "get_Duration()");
    return IsBackward() ? uPtr(Animator)->DurationBack() : uPtr(Animator)->Duration();
}

// public Fuse.Animations.Easing get_Easing() [instance] :3459
::g::Fuse::Animations::Easing* TrackAnimatorState::Easing()
{
    uStackFrame __("Fuse.Animations.TrackAnimatorState", "get_Easing()");
    return IsBackward() ? (::g::Fuse::Animations::Easing*)uPtr(Animator)->EasingBack() : (::g::Fuse::Animations::Easing*)uPtr(Animator)->Easing();
}

// public bool get_IsBackward() [instance] :3449
bool TrackAnimatorState::IsBackward()
{
    return Variant == 1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal abstract interface TrackProvider :3113
// {
uInterfaceType* TrackProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.TrackProvider", 0, 0);
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public abstract class TransformAnimator<TransformType> :3490
// {
static void TransformAnimator_build(uType* type)
{
    ::TYPES[72] = ::g::Fuse::Animations::TransformAnimatorState_typeof();
    type->SetPrecalc(
        ::g::Fuse::Animations::TransformAnimatorState_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(19,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Animations::TransformAnimator, _Priority), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::TransformAnimator, _RelativeNode), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::TransformAnimator, _Target), 0);
    type->Reflection.SetFunctions(14,
        new uFunction("get_Priority", NULL, (void*)TransformAnimator__get_Priority_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Priority", NULL, (void*)TransformAnimator__set_Priority_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_RelativeNode", NULL, (void*)TransformAnimator__get_RelativeNode_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_RelativeNode", NULL, (void*)TransformAnimator__set_RelativeNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_Target", NULL, (void*)TransformAnimator__get_Target_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)TransformAnimator__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_Vector", NULL, (void*)TransformAnimator__get_Vector_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_Vector", NULL, (void*)TransformAnimator__set_Vector_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("get_X", NULL, (void*)TransformAnimator__get_X_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_X", NULL, (void*)TransformAnimator__set_X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Y", NULL, (void*)TransformAnimator__get_Y_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Y", NULL, (void*)TransformAnimator__set_Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Z", NULL, (void*)TransformAnimator__get_Z_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Z", NULL, (void*)TransformAnimator__set_Z_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

TransformAnimator_type* TransformAnimator_typeof()
{
    static uSStrong<TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimator_typeof();
    options.FieldCount = 22;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(TransformAnimator);
    options.TypeSize = sizeof(TransformAnimator_type);
    type = (TransformAnimator_type*)uClassType::New("Fuse.Animations.TransformAnimator`1", options);
    type->fp_build_ = TransformAnimator_build;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))TransformAnimator__CreateState_fn;
    return type;
}

// internal TransformAnimator() :3493
void TransformAnimator__ctor_3_fn(TransformAnimator* __this)
{
    __this->ctor_3();
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :3591
void TransformAnimator__CreateState_fn(TransformAnimator* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(TransformAnimator_typeof())->Precalced(0/*Fuse.Animations.TransformAnimatorState<TransformType>*/),
    };
    return *__retval = (::g::Fuse::Animations::TransformAnimatorState*)::g::Fuse::Animations::TransformAnimatorState::New1(__types[0], __this, p), void();
}

// public generated int get_Priority() :3587
void TransformAnimator__get_Priority_fn(TransformAnimator* __this, int* __retval)
{
    *__retval = __this->Priority();
}

// public generated void set_Priority(int value) :3587
void TransformAnimator__set_Priority_fn(TransformAnimator* __this, int* value)
{
    __this->Priority(*value);
}

// public generated Fuse.Visual get_RelativeNode() :3579
void TransformAnimator__get_RelativeNode_fn(TransformAnimator* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->RelativeNode();
}

// public generated void set_RelativeNode(Fuse.Visual value) :3580
void TransformAnimator__set_RelativeNode_fn(TransformAnimator* __this, ::g::Fuse::Visual* value)
{
    __this->RelativeNode(value);
}

// public generated Fuse.Visual get_Target() :3584
void TransformAnimator__get_Target_fn(TransformAnimator* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :3584
void TransformAnimator__set_Target_fn(TransformAnimator* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public float3 get_Vector() :3562
void TransformAnimator__get_Vector_fn(TransformAnimator* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float3 value) :3563
void TransformAnimator__set_Vector_fn(TransformAnimator* __this, ::g::Uno::Float3* value)
{
    __this->Vector(*value);
}

// public float get_X() :3511
void TransformAnimator__get_X_fn(TransformAnimator* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :3512
void TransformAnimator__set_X_fn(TransformAnimator* __this, float* value)
{
    __this->X(*value);
}

// public float get_Y() :3528
void TransformAnimator__get_Y_fn(TransformAnimator* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :3529
void TransformAnimator__set_Y_fn(TransformAnimator* __this, float* value)
{
    __this->Y(*value);
}

// public float get_Z() :3545
void TransformAnimator__get_Z_fn(TransformAnimator* __this, float* __retval)
{
    *__retval = __this->Z();
}

// public void set_Z(float value) :3546
void TransformAnimator__set_Z_fn(TransformAnimator* __this, float* value)
{
    __this->Z(*value);
}

// internal TransformAnimator() [instance] :3493
void TransformAnimator::ctor_3()
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", ".ctor()");
    ctor_2();
    MixOp(1);
}

// public generated int get_Priority() [instance] :3587
int TransformAnimator::Priority()
{
    return _Priority;
}

// public generated void set_Priority(int value) [instance] :3587
void TransformAnimator::Priority(int value)
{
    _Priority = value;
}

// public generated Fuse.Visual get_RelativeNode() [instance] :3579
::g::Fuse::Visual* TransformAnimator::RelativeNode()
{
    return _RelativeNode;
}

// public generated void set_RelativeNode(Fuse.Visual value) [instance] :3580
void TransformAnimator::RelativeNode(::g::Fuse::Visual* value)
{
    _RelativeNode = value;
}

// public generated Fuse.Visual get_Target() [instance] :3584
::g::Fuse::Visual* TransformAnimator::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :3584
void TransformAnimator::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public float3 get_Vector() [instance] :3562
::g::Uno::Float3 TransformAnimator::Vector()
{
    ::g::Uno::Float4 ind1 = _vectorValue;
    return ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z);
}

// public void set_Vector(float3 value) [instance] :3563
void TransformAnimator::Vector(::g::Uno::Float3 value)
{
    _vectorValue = ::g::Uno::Float4__New8(value, _vectorValue.W);
}

// public float get_X() [instance] :3511
float TransformAnimator::X()
{
    return _vectorValue.X;
}

// public void set_X(float value) [instance] :3512
void TransformAnimator::X(float value)
{
    _vectorValue.X = value;
}

// public float get_Y() [instance] :3528
float TransformAnimator::Y()
{
    return _vectorValue.Y;
}

// public void set_Y(float value) [instance] :3529
void TransformAnimator::Y(float value)
{
    _vectorValue.Y = value;
}

// public float get_Z() [instance] :3545
float TransformAnimator::Z()
{
    return _vectorValue.Z;
}

// public void set_Z(float value) [instance] :3546
void TransformAnimator::Z(float value)
{
    _vectorValue.Z = value;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class TransformAnimatorState<TransformType> :3597
// {
static void TransformAnimatorState_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Invalid seek");
    ::STRINGS[2] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno");
    ::TYPES[12] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[73] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Transform_typeof(), NULL);
    ::TYPES[74] = ::g::Fuse::Transform_typeof();
    ::TYPES[67] = ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::TYPES[74/*Fuse.Transform*/], NULL);
    type->SetPrecalc(
        type->T(0));
    type->SetFields(6,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TransformAnimatorState, _inSeek), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::TransformAnimatorState, _lastStrength), 0,
        ::TYPES[73/*Uno.Action<Fuse.Transform>*/], offsetof(::g::Fuse::Animations::TransformAnimatorState, _matAct), 0,
        ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Animations::TransformAnimatorState, Animator1), 0,
        ::TYPES[67/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/], offsetof(::g::Fuse::Animations::TransformAnimatorState, mixHandle), 0,
        type->T(0), offsetof(::g::Fuse::Animations::TransformAnimatorState, transform), 0);
}

::g::Fuse::Animations::TrackAnimatorState_type* TransformAnimatorState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimatorState_typeof();
    options.FieldCount = 12;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(TransformAnimatorState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.TransformAnimatorState`1", options);
    type->fp_build_ = TransformAnimatorState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))TransformAnimatorState__Disable_fn;
    type->fp_SeekValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, ::g::Uno::Float4*, float*))TransformAnimatorState__SeekValue_fn;
    return type;
}

// public TransformAnimatorState(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) :3605
void TransformAnimatorState__ctor_2_fn(TransformAnimatorState* __this, ::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :3618
void TransformAnimatorState__Disable_fn(TransformAnimatorState* __this)
{
    uStackFrame __("Fuse.Animations.TransformAnimatorState`1", "Disable()");

    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), ::TYPES[67/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]));
    __this->mixHandle = NULL;
    uPtr(uAs< ::g::Fuse::Transform*>(__this->transform, ::TYPES[74/*Fuse.Transform*/]))->remove_MatrixChanged(__this->_matAct);
    ::g::Fuse::Node::Unrelate(__this->Visual, __this->transform);
    __this->_matAct = NULL;
    __this->transform = NULL;
}

// public TransformAnimatorState New(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) :3605
void TransformAnimatorState__New1_fn(uType* __type, ::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, TransformAnimatorState** __retval)
{
    *__retval = TransformAnimatorState::New1(__type, animator, p);
}

// internal void OnMatrixChanged(Fuse.Transform ignore) :3650
void TransformAnimatorState__OnMatrixChanged_fn(TransformAnimatorState* __this, ::g::Fuse::Transform* ignore)
{
    __this->OnMatrixChanged(ignore);
}

// protected override sealed void SeekValue(float4 value, float strength) :3632
void TransformAnimatorState__SeekValue_fn(TransformAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
    uStackFrame __("Fuse.Animations.TransformAnimatorState`1", "SeekValue(float4,float)");
    ::g::Uno::Float4 value_ = *value;
    float strength_ = *strength;

    if ((__this->mixHandle == NULL) || (__this->transform == NULL))
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[7/*"Invalid seek"*/], 1, ::STRINGS[2/*"/Users/most...*/], 3636);
        return;
    }

    __this->_inSeek = true;
    uPtr(__this->Animator1)->Update(__this->Visual, __this->transform, value_);
    __this->_lastStrength = strength_;
    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), ::TYPES[67/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]), __this->transform, uCRef(__this->_lastStrength));
    __this->_inSeek = false;
}

// public TransformAnimatorState(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) [instance] :3605
void TransformAnimatorState::ctor_2(::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->Precalced(0/*TransformType*/),
    };
    uStackFrame __("Fuse.Animations.TransformAnimatorState`1", ".ctor(Fuse.Animations.TransformAnimator<TransformType>,Fuse.Animations.CreateStateParams)");
    transform = (::g::Fuse::Transform*)__types[0]->New();
    ctor_1(animator, p, uPtr(animator)->Target());
    Animator1 = animator;
    mixHandle = ::g::Fuse::Animations::IMixer::RegisterTransform(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[12/*Fuse.Animations.IMixer*/]), Visual, uPtr(Animator1)->MixOp(), uPtr(Animator1)->Priority());
    _matAct = uDelegate::New(::TYPES[73/*Uno.Action<Fuse.Transform>*/], (void*)TransformAnimatorState__OnMatrixChanged_fn, this);
    uPtr(uAs< ::g::Fuse::Transform*>(transform, ::TYPES[74/*Fuse.Transform*/]))->add_MatrixChanged(_matAct);
    ::g::Fuse::Node::Relate(Visual, transform);
}

// internal void OnMatrixChanged(Fuse.Transform ignore) [instance] :3650
void TransformAnimatorState::OnMatrixChanged(::g::Fuse::Transform* ignore)
{
    uStackFrame __("Fuse.Animations.TransformAnimatorState`1", "OnMatrixChanged(Fuse.Transform)");

    if ((!_inSeek && (mixHandle != NULL)) && (transform != NULL))
        ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(mixHandle), ::TYPES[67/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]), transform, uCRef(_lastStrength));
}

// public TransformAnimatorState New(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) [static] :3605
TransformAnimatorState* TransformAnimatorState::New1(uType* __type, ::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    TransformAnimatorState* obj1 = (TransformAnimatorState*)uNew(__type);
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal enum TransformPriority :3470
uEnumType* TransformPriority_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.TransformPriority", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Shear", 4000LL,
        "Rotate", 3000LL,
        "Scale", 2000LL,
        "Translate", 1000LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class TriggerAnimation :3910
// {
static void TriggerAnimation_build(uType* type)
{
    ::TYPES[75] = ::g::Fuse::Animations::AnimatorState_typeof()->Array();
    ::TYPES[76] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::TYPES[76/*Uno.Collections.List<Fuse.Animations.Animator>*/], offsetof(::g::Fuse::Animations::TriggerAnimation, _animators), 0,
        type, offsetof(::g::Fuse::Animations::TriggerAnimation, _backward), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _crossFadeDuration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _hasStretchDuration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _hasTimeMultiplier), 0,
        ::g::Fuse::Animations::PlayMode_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _playMode), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _stretchDuration), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _timeMultiplier), 0,
        ::TYPES[2/*Uno.Action*/], offsetof(::g::Fuse::Animations::TriggerAnimation, TimeChanged1), 0);
    type->Reflection.SetFunctions(16,
        new uFunction("get_Animators", NULL, (void*)TriggerAnimation__get_Animators_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL), 0),
        new uFunction("get_Backward", NULL, (void*)TriggerAnimation__get_Backward_fn, 0, false, type, 0),
        new uFunction("set_Backward", NULL, (void*)TriggerAnimation__set_Backward_fn, 0, false, uVoid_typeof(), 1, type),
        new uFunction("get_CrossFadeDuration", NULL, (void*)TriggerAnimation__get_CrossFadeDuration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_CrossFadeDuration", NULL, (void*)TriggerAnimation__set_CrossFadeDuration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("GetAnimatorsDuration", NULL, (void*)TriggerAnimation__GetAnimatorsDuration_fn, 0, false, ::g::Uno::Double_typeof(), 1, ::g::Fuse::Animations::AnimationVariant_typeof()),
        new uFunction("GetTimeMultiplier", NULL, (void*)TriggerAnimation__GetTimeMultiplier_fn, 0, false, ::g::Uno::Double_typeof(), 1, ::g::Fuse::Animations::AnimationVariant_typeof()),
        new uFunction("get_HasAnimators", NULL, (void*)TriggerAnimation__get_HasAnimators_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasBackward", NULL, (void*)TriggerAnimation__get_HasBackward_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)TriggerAnimation__New1_fn, 0, true, type, 0),
        new uFunction("get_PlayMode", NULL, (void*)TriggerAnimation__get_PlayMode_fn, 0, false, ::g::Fuse::Animations::PlayMode_typeof(), 0),
        new uFunction("set_PlayMode", NULL, (void*)TriggerAnimation__set_PlayMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::PlayMode_typeof()),
        new uFunction("get_StretchDuration", NULL, (void*)TriggerAnimation__get_StretchDuration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_StretchDuration", NULL, (void*)TriggerAnimation__set_StretchDuration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_TimeMultiplier", NULL, (void*)TriggerAnimation__get_TimeMultiplier_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_TimeMultiplier", NULL, (void*)TriggerAnimation__set_TimeMultiplier_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

uType* TriggerAnimation_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(TriggerAnimation);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.TriggerAnimation", options);
    type->fp_build_ = TriggerAnimation_build;
    type->fp_ctor_ = (void*)TriggerAnimation__New1_fn;
    return type;
}

// public generated TriggerAnimation() :3910
void TriggerAnimation__ctor__fn(TriggerAnimation* __this)
{
    __this->ctor_();
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() :3916
void TriggerAnimation__get_Animators_fn(TriggerAnimation* __this, uObject** __retval)
{
    *__retval = __this->Animators();
}

// public Fuse.Animations.TriggerAnimation get_Backward() :3931
void TriggerAnimation__get_Backward_fn(TriggerAnimation* __this, TriggerAnimation** __retval)
{
    *__retval = __this->Backward();
}

// public void set_Backward(Fuse.Animations.TriggerAnimation value) :3937
void TriggerAnimation__set_Backward_fn(TriggerAnimation* __this, TriggerAnimation* value)
{
    __this->Backward(value);
}

// internal Fuse.Animations.AnimatorState[] CreateAnimatorsState(Fuse.Animations.AnimationVariant variant, Fuse.Visual elm) :3948
void TriggerAnimation__CreateAnimatorsState_fn(TriggerAnimation* __this, int* variant, ::g::Fuse::Visual* elm, uArray** __retval)
{
    *__retval = __this->CreateAnimatorsState(*variant, elm);
}

// internal Fuse.Animations.Player CreatePlayer([Fuse.Visual node], [Fuse.Animations.AnimationVariant variant]) :4082
void TriggerAnimation__CreatePlayer_fn(TriggerAnimation* __this, ::g::Fuse::Visual* node, int* variant, ::g::Fuse::Animations::Player** __retval)
{
    *__retval = __this->CreatePlayer(node, *variant);
}

// internal Fuse.Animations.TriggerAnimationState CreateState([Fuse.Visual elm]) :4070
void TriggerAnimation__CreateState_fn(TriggerAnimation* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimationState** __retval)
{
    *__retval = __this->CreateState(elm);
}

// public double get_CrossFadeDuration() :4015
void TriggerAnimation__get_CrossFadeDuration_fn(TriggerAnimation* __this, double* __retval)
{
    *__retval = __this->CrossFadeDuration();
}

// public void set_CrossFadeDuration(double value) :4016
void TriggerAnimation__set_CrossFadeDuration_fn(TriggerAnimation* __this, double* value)
{
    __this->CrossFadeDuration(*value);
}

// public double GetAnimatorsDuration(Fuse.Animations.AnimationVariant variant) :3963
void TriggerAnimation__GetAnimatorsDuration_fn(TriggerAnimation* __this, int* variant, double* __retval)
{
    *__retval = __this->GetAnimatorsDuration(*variant);
}

// public double GetTimeMultiplier(Fuse.Animations.AnimationVariant variant) :4025
void TriggerAnimation__GetTimeMultiplier_fn(TriggerAnimation* __this, int* variant, double* __retval)
{
    *__retval = __this->GetTimeMultiplier(*variant);
}

// public bool get_HasAnimators() :3925
void TriggerAnimation__get_HasAnimators_fn(TriggerAnimation* __this, bool* __retval)
{
    *__retval = __this->HasAnimators();
}

// public bool get_HasBackward() :3945
void TriggerAnimation__get_HasBackward_fn(TriggerAnimation* __this, bool* __retval)
{
    *__retval = __this->HasBackward();
}

// internal bool get_HasDirectionVariant() :4050
void TriggerAnimation__get_HasDirectionVariant_fn(TriggerAnimation* __this, bool* __retval)
{
    *__retval = __this->HasDirectionVariant();
}

// public generated TriggerAnimation New() :3910
void TriggerAnimation__New1_fn(TriggerAnimation** __retval)
{
    *__retval = TriggerAnimation::New1();
}

// private void OnTimeChanged() :4019
void TriggerAnimation__OnTimeChanged_fn(TriggerAnimation* __this)
{
    __this->OnTimeChanged();
}

// public Fuse.Animations.PlayMode get_PlayMode() :4098
void TriggerAnimation__get_PlayMode_fn(TriggerAnimation* __this, int* __retval)
{
    *__retval = __this->PlayMode();
}

// public void set_PlayMode(Fuse.Animations.PlayMode value) :4099
void TriggerAnimation__set_PlayMode_fn(TriggerAnimation* __this, int* value)
{
    __this->PlayMode(*value);
}

// internal Fuse.Animations.AnimationVariant RestrictVariant(Fuse.Animations.AnimationVariant variant) :4075
void TriggerAnimation__RestrictVariant_fn(TriggerAnimation* __this, int* variant, int* __retval)
{
    *__retval = __this->RestrictVariant(*variant);
}

// public double get_StretchDuration() :4001
void TriggerAnimation__get_StretchDuration_fn(TriggerAnimation* __this, double* __retval)
{
    *__retval = __this->StretchDuration();
}

// public void set_StretchDuration(double value) :4002
void TriggerAnimation__set_StretchDuration_fn(TriggerAnimation* __this, double* value)
{
    __this->StretchDuration(*value);
}

// internal generated void add_TimeChanged(Uno.Action value) :4046
void TriggerAnimation__add_TimeChanged_fn(TriggerAnimation* __this, uDelegate* value)
{
    __this->add_TimeChanged(value);
}

// internal generated void remove_TimeChanged(Uno.Action value) :4046
void TriggerAnimation__remove_TimeChanged_fn(TriggerAnimation* __this, uDelegate* value)
{
    __this->remove_TimeChanged(value);
}

// public double get_TimeMultiplier() :3986
void TriggerAnimation__get_TimeMultiplier_fn(TriggerAnimation* __this, double* __retval)
{
    *__retval = __this->TimeMultiplier();
}

// public void set_TimeMultiplier(double value) :3987
void TriggerAnimation__set_TimeMultiplier_fn(TriggerAnimation* __this, double* value)
{
    __this->TimeMultiplier(*value);
}

// public generated TriggerAnimation() [instance] :3910
void TriggerAnimation::ctor_()
{
    _crossFadeDuration = 0.5;
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() [instance] :3916
uObject* TriggerAnimation::Animators()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "get_Animators()");

    if (_animators == NULL)
        _animators = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[76/*Uno.Collections.List<Fuse.Animations.Animator>*/]));

    return (uObject*)_animators;
}

// public Fuse.Animations.TriggerAnimation get_Backward() [instance] :3931
TriggerAnimation* TriggerAnimation::Backward()
{
    if (_backward == NULL)
        _backward = TriggerAnimation::New1();

    return _backward;
}

// public void set_Backward(Fuse.Animations.TriggerAnimation value) [instance] :3937
void TriggerAnimation::Backward(TriggerAnimation* value)
{
    _backward = value;
}

// internal Fuse.Animations.AnimatorState[] CreateAnimatorsState(Fuse.Animations.AnimationVariant variant, Fuse.Visual elm) [instance] :3948
uArray* TriggerAnimation::CreateAnimatorsState(int variant, ::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "CreateAnimatorsState(Fuse.Animations.AnimationVariant,Fuse.Visual)");
    ::g::Fuse::Animations::CreateStateParams* collection1;
    ::g::Fuse::Animations::Animator* ret3;
    collection1 = ::g::Fuse::Animations::CreateStateParams::New1();
    uPtr(collection1)->Variant = variant;
    uPtr(collection1)->TotalDuration = GetAnimatorsDuration(variant);
    uPtr(collection1)->Attached = elm;
    ::g::Fuse::Animations::CreateStateParams* csp = collection1;

    if (_animators == NULL)
        return uArray::New(::TYPES[75/*Fuse.Animations.AnimatorState[]*/], 0);

    uArray* state = uArray::New(::TYPES[75/*Fuse.Animations.AnimatorState[]*/], uPtr(_animators)->Count());

    for (int i = 0; i < uPtr(_animators)->Count(); ++i)
        uPtr(state)->Strong< ::g::Fuse::Animations::AnimatorState*>(i) = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_animators), uCRef<int>(i), &ret3), ret3))->CreateState(csp);

    return state;
}

// internal Fuse.Animations.Player CreatePlayer([Fuse.Visual node], [Fuse.Animations.AnimationVariant variant]) [instance] :4082
::g::Fuse::Animations::Player* TriggerAnimation::CreatePlayer(::g::Fuse::Visual* node, int variant)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "CreatePlayer([Fuse.Visual],[Fuse.Animations.AnimationVariant])");
    variant = RestrictVariant(variant);

    if (variant == 0)
        return ::g::Fuse::Animations::Player::New1(node, this, 0, PlayMode());

    if (_backward != NULL)
        return ::g::Fuse::Animations::Player::New1(node, _backward, 0, PlayMode());

    return ::g::Fuse::Animations::Player::New1(node, this, 1, PlayMode());
}

// internal Fuse.Animations.TriggerAnimationState CreateState([Fuse.Visual elm]) [instance] :4070
::g::Fuse::Animations::TriggerAnimationState* TriggerAnimation::CreateState(::g::Fuse::Visual* elm)
{
    return ::g::Fuse::Animations::TriggerAnimationState::New1(this, elm);
}

// public double get_CrossFadeDuration() [instance] :4015
double TriggerAnimation::CrossFadeDuration()
{
    return _crossFadeDuration;
}

// public void set_CrossFadeDuration(double value) [instance] :4016
void TriggerAnimation::CrossFadeDuration(double value)
{
    _crossFadeDuration = value;
}

// public double GetAnimatorsDuration(Fuse.Animations.AnimationVariant variant) [instance] :3963
double TriggerAnimation::GetAnimatorsDuration(int variant)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "GetAnimatorsDuration(Fuse.Animations.AnimationVariant)");
    ::g::Fuse::Animations::Animator* ret4;

    if ((variant == 1) && (_backward != NULL))
        return uPtr(_backward)->GetAnimatorsDuration(0);

    if (_animators == NULL)
        return 0.0;

    double max = 0.0;
    int c = uPtr(_animators)->Count();

    for (int i = 0; i < c; ++i)
    {
        double q = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_animators), uCRef<int>(i), &ret4), ret4))->GetDurationWithDelay(variant);
        max = ::g::Uno::Math::Max(max, q);
    }

    return max;
}

// public double GetTimeMultiplier(Fuse.Animations.AnimationVariant variant) [instance] :4025
double TriggerAnimation::GetTimeMultiplier(int variant)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "GetTimeMultiplier(Fuse.Animations.AnimationVariant)");

    if (_hasStretchDuration)
    {
        double dur = GetAnimatorsDuration(variant);

        if (_stretchDuration < 9.9999997473787516e-06)
            return 1.0;

        double mult = dur / _stretchDuration;

        if (_hasTimeMultiplier)
            mult = mult * TimeMultiplier();

        return mult;
    }

    if (_hasTimeMultiplier)
        return TimeMultiplier();

    return 1.0;
}

// public bool get_HasAnimators() [instance] :3925
bool TriggerAnimation::HasAnimators()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "get_HasAnimators()");
    return (_animators != NULL) && (uPtr(_animators)->Count() > 0);
}

// public bool get_HasBackward() [instance] :3945
bool TriggerAnimation::HasBackward()
{
    return _backward != NULL;
}

// internal bool get_HasDirectionVariant() [instance] :4050
bool TriggerAnimation::HasDirectionVariant()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "get_HasDirectionVariant()");
    ::g::Fuse::Animations::Animator* ret5;

    if (_animators == NULL)
        return false;

    bool has = false;
    int c = uPtr(_animators)->Count();

    for (int i = 0; i < c; ++i)
    {
        int v = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_animators), uCRef<int>(i), &ret5), ret5))->AnimatorVariant();

        if (v == 2)
            has = true;

        if (v == 1)
            return false;
    }

    return has;
}

// private void OnTimeChanged() [instance] :4019
void TriggerAnimation::OnTimeChanged()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "OnTimeChanged()");

    if (::g::Uno::Delegate::op_Inequality(TimeChanged1, NULL))
        uPtr(TimeChanged1)->InvokeVoid();
}

// public Fuse.Animations.PlayMode get_PlayMode() [instance] :4098
int TriggerAnimation::PlayMode()
{
    return _playMode;
}

// public void set_PlayMode(Fuse.Animations.PlayMode value) [instance] :4099
void TriggerAnimation::PlayMode(int value)
{
    _playMode = value;
}

// internal Fuse.Animations.AnimationVariant RestrictVariant(Fuse.Animations.AnimationVariant variant) [instance] :4075
int TriggerAnimation::RestrictVariant(int variant)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "RestrictVariant(Fuse.Animations.AnimationVariant)");

    if (!HasDirectionVariant() && (_backward == NULL))
        return 0;

    return variant;
}

// public double get_StretchDuration() [instance] :4001
double TriggerAnimation::StretchDuration()
{
    return _stretchDuration;
}

// public void set_StretchDuration(double value) [instance] :4002
void TriggerAnimation::StretchDuration(double value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "set_StretchDuration(double)");

    if ((_stretchDuration == value) && _hasStretchDuration)
        return;

    _stretchDuration = value;
    _hasStretchDuration = true;
    OnTimeChanged();
}

// internal generated void add_TimeChanged(Uno.Action value) [instance] :4046
void TriggerAnimation::add_TimeChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "add_TimeChanged(Uno.Action)");
    TimeChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TimeChanged1, value), ::TYPES[2/*Uno.Action*/]);
}

// internal generated void remove_TimeChanged(Uno.Action value) [instance] :4046
void TriggerAnimation::remove_TimeChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "remove_TimeChanged(Uno.Action)");
    TimeChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TimeChanged1, value), ::TYPES[2/*Uno.Action*/]);
}

// public double get_TimeMultiplier() [instance] :3986
double TriggerAnimation::TimeMultiplier()
{
    return _timeMultiplier;
}

// public void set_TimeMultiplier(double value) [instance] :3987
void TriggerAnimation::TimeMultiplier(double value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "set_TimeMultiplier(double)");

    if ((_timeMultiplier == value) && _hasTimeMultiplier)
        return;

    _timeMultiplier = value;
    _hasTimeMultiplier = true;
    OnTimeChanged();
}

// public generated TriggerAnimation New() [static] :3910
TriggerAnimation* TriggerAnimation::New1()
{
    TriggerAnimation* obj2 = (TriggerAnimation*)uNew(TriggerAnimation_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class TriggerAnimationState :4110
// {
static void TriggerAnimationState_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[62] = ::g::Fuse::Animations::IPlayerFeedback_typeof();
    ::TYPES[77] = ::g::Fuse::Animations::Player_typeof();
    type->SetInterfaces(
        ::TYPES[62/*Fuse.Animations.IPlayerFeedback*/], offsetof(TriggerAnimationState_type, interface0));
    type->SetFields(0,
        ::TYPES[77/*Fuse.Animations.Player*/], offsetof(::g::Fuse::Animations::TriggerAnimationState, _backPlayer), 0,
        ::TYPES[77/*Fuse.Animations.Player*/], offsetof(::g::Fuse::Animations::TriggerAnimationState, _curPlayer), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _curPlayerVariant), 0,
        ::TYPES[77/*Fuse.Animations.Player*/], offsetof(::g::Fuse::Animations::TriggerAnimationState, _forePlayer), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _node), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _prevProgress), 0,
        ::TYPES[62/*Fuse.Animations.IPlayerFeedback*/], offsetof(::g::Fuse::Animations::TriggerAnimationState, Feedback), 0,
        ::g::Fuse::Animations::TriggerAnimation_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _Animation), 0);
}

TriggerAnimationState_type* TriggerAnimationState_typeof()
{
    static uSStrong<TriggerAnimationState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TriggerAnimationState);
    options.TypeSize = sizeof(TriggerAnimationState_type);
    type = (TriggerAnimationState_type*)uClassType::New("Fuse.Animations.TriggerAnimationState", options);
    type->fp_build_ = TriggerAnimationState_build;
    type->interface0.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))TriggerAnimationState__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface0.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))TriggerAnimationState__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface0.fp_OnStable = (void(*)(uObject*, uObject*))TriggerAnimationState__FuseAnimationsIPlayerFeedbackOnStable_fn;
    return type;
}

// internal TriggerAnimationState(Fuse.Animations.TriggerAnimation animation, Fuse.Visual node) :4115
void TriggerAnimationState__ctor__fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Visual* node)
{
    __this->ctor_(animation, node);
}

// private generated Fuse.Animations.TriggerAnimation get_Animation() :4112
void TriggerAnimationState__get_Animation_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->Animation();
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) :4112
void TriggerAnimationState__set_Animation_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->Animation(value);
}

// public double get_CurrentAnimatorsDuration() :4306
void TriggerAnimationState__get_CurrentAnimatorsDuration_fn(TriggerAnimationState* __this, double* __retval)
{
    *__retval = __this->CurrentAnimatorsDuration();
}

// public void Dispose() :4126
void TriggerAnimationState__Dispose_fn(TriggerAnimationState* __this)
{
    __this->Dispose();
}

// private void Fuse.Animations.IPlayerFeedback.OnPlaybackDone(object s) :4170
void TriggerAnimationState__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn(TriggerAnimationState* __this, uObject* s)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "Fuse.Animations.IPlayerFeedback.OnPlaybackDone(object)");

    if (s != __this->_curPlayer)
        return;

    if (__this->Feedback != NULL)
        ::g::Fuse::Animations::IPlayerFeedback::OnPlaybackDone(uInterface(uPtr(__this->Feedback), ::TYPES[62/*Fuse.Animations.IPlayerFeedback*/]), __this);
}

// private void Fuse.Animations.IPlayerFeedback.OnProgressUpdated(object s) :4159
void TriggerAnimationState__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn(TriggerAnimationState* __this, uObject* s)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "Fuse.Animations.IPlayerFeedback.OnProgressUpdated(object)");

    if (s != __this->_curPlayer)
        return;

    if (__this->Feedback != NULL)
        ::g::Fuse::Animations::IPlayerFeedback::OnProgressUpdated(uInterface(uPtr(__this->Feedback), ::TYPES[62/*Fuse.Animations.IPlayerFeedback*/]), __this);

    __this->_prevProgress = __this->Progress();
}

// private void Fuse.Animations.IPlayerFeedback.OnStable(object s) :4179
void TriggerAnimationState__FuseAnimationsIPlayerFeedbackOnStable_fn(TriggerAnimationState* __this, uObject* s)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "Fuse.Animations.IPlayerFeedback.OnStable(object)");

    if (s != __this->_curPlayer)
        return;

    if (__this->Feedback != NULL)
        ::g::Fuse::Animations::IPlayerFeedback::OnStable(uInterface(uPtr(__this->Feedback), ::TYPES[62/*Fuse.Animations.IPlayerFeedback*/]), __this);
}

// private Fuse.Animations.Player GetCurrentPlayer(Fuse.Animations.AnimationVariant tendTo, Fuse.Animations.TriggerAnimationState.SeekFlags flags) :4317
void TriggerAnimationState__GetCurrentPlayer_fn(TriggerAnimationState* __this, int* tendTo, int* flags, ::g::Fuse::Animations::Player** __retval)
{
    *__retval = __this->GetCurrentPlayer(*tendTo, *flags);
}

// private Fuse.Animations.Player GetPlayer([Fuse.Animations.AnimationVariant variant], [bool noFade]) :4198
void TriggerAnimationState__GetPlayer_fn(TriggerAnimationState* __this, int* variant, bool* noFade, ::g::Fuse::Animations::Player** __retval)
{
    *__retval = __this->GetPlayer(*variant, *noFade);
}

// public bool get_IsStable() :4190
void TriggerAnimationState__get_IsStable_fn(TriggerAnimationState* __this, bool* __retval)
{
    *__retval = __this->IsStable();
}

// internal TriggerAnimationState New(Fuse.Animations.TriggerAnimation animation, Fuse.Visual node) :4115
void TriggerAnimationState__New1_fn(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Visual* node, TriggerAnimationState** __retval)
{
    *__retval = TriggerAnimationState::New1(animation, node);
}

// private void OnTimeChanged() :4144
void TriggerAnimationState__OnTimeChanged_fn(TriggerAnimationState* __this)
{
    __this->OnTimeChanged();
}

// public void PlayEnd(bool on) :4278
void TriggerAnimationState__PlayEnd_fn(TriggerAnimationState* __this, bool* on)
{
    __this->PlayEnd(*on);
}

// public void PlayOff() :4266
void TriggerAnimationState__PlayOff_fn(TriggerAnimationState* __this)
{
    __this->PlayOff();
}

// public void PlayOn() :4272
void TriggerAnimationState__PlayOn_fn(TriggerAnimationState* __this)
{
    __this->PlayOn();
}

// public void PlayToProgress(double progress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) :4344
void TriggerAnimationState__PlayToProgress_fn(TriggerAnimationState* __this, double* progress, int* tendTo, int* flags)
{
    __this->PlayToProgress(*progress, *tendTo, *flags);
}

// public double get_PreviousProgress() :4298
void TriggerAnimationState__get_PreviousProgress_fn(TriggerAnimationState* __this, double* __retval)
{
    *__retval = __this->PreviousProgress();
}

// public double get_Progress() :4288
void TriggerAnimationState__get_Progress_fn(TriggerAnimationState* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public bool get_ProgressFullOff() :4315
void TriggerAnimationState__get_ProgressFullOff_fn(TriggerAnimationState* __this, bool* __retval)
{
    *__retval = __this->ProgressFullOff();
}

// public bool get_ProgressFullOn() :4314
void TriggerAnimationState__get_ProgressFullOn_fn(TriggerAnimationState* __this, bool* __retval)
{
    *__retval = __this->ProgressFullOn();
}

// public void SeekProgress(double newProgress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) :4334
void TriggerAnimationState__SeekProgress_fn(TriggerAnimationState* __this, double* newProgress, int* tendTo, int* flags)
{
    __this->SeekProgress(*newProgress, *tendTo, *flags);
}

// private void TrackProgress(Fuse.Animations.Player player) :4153
void TriggerAnimationState__TrackProgress_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::Player* player)
{
    __this->TrackProgress(player);
}

// internal TriggerAnimationState(Fuse.Animations.TriggerAnimation animation, Fuse.Visual node) [instance] :4115
void TriggerAnimationState::ctor_(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Visual* node)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", ".ctor(Fuse.Animations.TriggerAnimation,Fuse.Visual)");
    Animation(animation);
    uPtr(Animation())->add_TimeChanged(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)TriggerAnimationState__OnTimeChanged_fn, this));
    _node = node;
}

// private generated Fuse.Animations.TriggerAnimation get_Animation() [instance] :4112
::g::Fuse::Animations::TriggerAnimation* TriggerAnimationState::Animation()
{
    return _Animation;
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) [instance] :4112
void TriggerAnimationState::Animation(::g::Fuse::Animations::TriggerAnimation* value)
{
    _Animation = value;
}

// public double get_CurrentAnimatorsDuration() [instance] :4306
double TriggerAnimationState::CurrentAnimatorsDuration()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "get_CurrentAnimatorsDuration()");

    if (_curPlayer == NULL)
        return uPtr(Animation())->GetAnimatorsDuration(0);

    return uPtr(_curPlayer)->AnimatorsDuration();
}

// public void Dispose() [instance] :4126
void TriggerAnimationState::Dispose()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "Dispose()");

    if (_forePlayer != NULL)
    {
        uPtr(_forePlayer)->Disable();
        _forePlayer = NULL;
    }

    if (_backPlayer != NULL)
    {
        uPtr(_backPlayer)->Disable();
        _backPlayer = NULL;
    }

    _curPlayer = NULL;
    _node = NULL;
}

// private Fuse.Animations.Player GetCurrentPlayer(Fuse.Animations.AnimationVariant tendTo, Fuse.Animations.TriggerAnimationState.SeekFlags flags) [instance] :4317
::g::Fuse::Animations::Player* TriggerAnimationState::GetCurrentPlayer(int tendTo, int flags)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "GetCurrentPlayer(Fuse.Animations.AnimationVariant,Fuse.Animations.TriggerAnimationState.SeekFlags)");

    if (!((flags & 1) == 1))
    {
        if (((_curPlayer != NULL) && (uPtr(_curPlayer)->Progress() < 1.0)) && (uPtr(_curPlayer)->Progress() > 0.0))
            return _curPlayer;
    }

    return uAs< ::g::Fuse::Animations::Player*>(GetPlayer(tendTo, false), ::TYPES[77/*Fuse.Animations.Player*/]);
}

// private Fuse.Animations.Player GetPlayer([Fuse.Animations.AnimationVariant variant], [bool noFade]) [instance] :4198
::g::Fuse::Animations::Player* TriggerAnimationState::GetPlayer(int variant, bool noFade)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "GetPlayer([Fuse.Animations.AnimationVariant],[bool])");
    ::g::Fuse::Animations::Player* cur, *prev;
    variant = uPtr(Animation())->RestrictVariant(variant);

    if ((_curPlayer != NULL) && (_curPlayerVariant == variant))
        return _curPlayer;

    bool isNew = false;

    if (variant == 0)
    {
        if (_forePlayer == NULL)
        {
            _forePlayer = uPtr(Animation())->CreatePlayer(_node, variant);
            isNew = true;
        }

        cur = _forePlayer;
        prev = _backPlayer;
    }
    else
    {
        if (_backPlayer == NULL)
        {
            _backPlayer = uPtr(Animation())->CreatePlayer(_node, variant);
            uPtr(_backPlayer)->SeekProgress(1.0, false);
            isNew = true;
        }

        cur = _backPlayer;
        prev = _forePlayer;
    }

    if (isNew)
        TrackProgress(cur);

    _curPlayer = cur;
    _curPlayerVariant = variant;

    if (prev != NULL)
    {
        double prevProgress = uPtr(prev)->Progress();
        prev->SeekProgress(prevProgress, false);
        uPtr(cur)->SeekProgress(prevProgress, false);

        if (isNew)
            uPtr(cur)->Strength(0.0);

        double remainTime = prev->RemainTime();

        if ((prev->IsSyncState() || (remainTime < 9.9999997473787516e-06)) || noFade)
        {
            uPtr(prev)->Strength(0.0);
            uPtr(cur)->Strength(1.0);
        }
        else
        {
            double fadeTime = ::g::Uno::Math::Min(remainTime, uPtr(Animation())->CrossFadeDuration());
            uPtr(cur)->FadeIn(fadeTime);
            uPtr(prev)->FadeOut(fadeTime);
        }
    }

    return cur;
}

// public bool get_IsStable() [instance] :4190
bool TriggerAnimationState::IsStable()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "get_IsStable()");

    if (_curPlayer == NULL)
        return true;

    return uPtr(_curPlayer)->IsStable();
}

// private void OnTimeChanged() [instance] :4144
void TriggerAnimationState::OnTimeChanged()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "OnTimeChanged()");

    if (_forePlayer != NULL)
        uPtr(_forePlayer)->TimeChanged();

    if (_backPlayer != NULL)
        uPtr(_backPlayer)->TimeChanged();
}

// public void PlayEnd(bool on) [instance] :4278
void TriggerAnimationState::PlayEnd(bool on)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "PlayEnd(bool)");

    if (on)
        PlayOn();
    else
        PlayOff();
}

// public void PlayOff() [instance] :4266
void TriggerAnimationState::PlayOff()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "PlayOff()");
    ::g::Fuse::Animations::Player* p = GetPlayer(1, false);
    uPtr(p)->PlayToStart();
}

// public void PlayOn() [instance] :4272
void TriggerAnimationState::PlayOn()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "PlayOn()");
    ::g::Fuse::Animations::Player* p = GetPlayer(0, false);
    uPtr(p)->PlayToEnd();
}

// public void PlayToProgress(double progress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) [instance] :4344
void TriggerAnimationState::PlayToProgress(double progress, int tendTo, int flags)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "PlayToProgress(double,[Fuse.Animations.AnimationVariant],[Fuse.Animations.TriggerAnimationState.SeekFlags])");
    ::g::Fuse::Animations::Player* player = GetCurrentPlayer(tendTo, flags);
    uPtr(player)->PlayToProgress(progress);
}

// public double get_PreviousProgress() [instance] :4298
double TriggerAnimationState::PreviousProgress()
{
    return _prevProgress;
}

// public double get_Progress() [instance] :4288
double TriggerAnimationState::Progress()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "get_Progress()");

    if (_curPlayer != NULL)
        return uPtr(_curPlayer)->Progress();

    return 0.0;
}

// public bool get_ProgressFullOff() [instance] :4315
bool TriggerAnimationState::ProgressFullOff()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "get_ProgressFullOff()");
    return Progress() <= 0.0;
}

// public bool get_ProgressFullOn() [instance] :4314
bool TriggerAnimationState::ProgressFullOn()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "get_ProgressFullOn()");
    return Progress() >= 1.0;
}

// public void SeekProgress(double newProgress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) [instance] :4334
void TriggerAnimationState::SeekProgress(double newProgress, int tendTo, int flags)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "SeekProgress(double,[Fuse.Animations.AnimationVariant],[Fuse.Animations.TriggerAnimationState.SeekFlags])");
    bool bypassUpdate = (flags & 2) == 2;
    ::g::Fuse::Animations::Player* player = GetCurrentPlayer(tendTo, flags);

    if (bypassUpdate)
        _prevProgress = newProgress;

    uPtr(player)->SeekProgress(newProgress, !bypassUpdate);
}

// private void TrackProgress(Fuse.Animations.Player player) [instance] :4153
void TriggerAnimationState::TrackProgress(::g::Fuse::Animations::Player* player)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "TrackProgress(Fuse.Animations.Player)");
    uPtr(player)->Feedback = (uObject*)this;
}

// internal TriggerAnimationState New(Fuse.Animations.TriggerAnimation animation, Fuse.Visual node) [static] :4115
TriggerAnimationState* TriggerAnimationState::New1(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Visual* node)
{
    TriggerAnimationState* obj1 = (TriggerAnimationState*)uNew(TriggerAnimationState_typeof());
    obj1->ctor_(animation, node);
    return obj1;
}
// }

}}} // ::g::Fuse::Animations
