// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.Easing.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Motion.DestinationMotion-1.h>
#include <Fuse.Motion.MotionConfig.h>
#include <Fuse.Motion.MotionDestinationType.h>
#include <Fuse.Motion.MotionUnit.h>
#include <Fuse.Motion.NavigationMotion.h>
#include <Fuse.Motion.OverflowType.h>
#include <Fuse.Motion.ScrollViewMotion.h>
#include <Fuse.Motion.Simulation.AdapterMultiplier-1.h>
#include <Fuse.Motion.Simulation.AngularAdapter-1.h>
#include <Fuse.Motion.Simulation.BasicBoundedRegion2D.h>
#include <Fuse.Motion.Simulation.BoundedRegion2D.h>
#include <Fuse.Motion.Simulation.DestinationSimulation-1.h>
#include <Fuse.Motion.Simulation.EasingMotion-1.h>
#include <Fuse.Motion.Simulation.ElasticForce-1.h>
#include <Fuse.Motion.Simulation.Friction-1.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.SmoothSnap-1.h>
#include <Fuse.Motion.SpringFunction.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Value.h>
static uString* STRINGS[3];
static uType* TYPES[9];

namespace g{
namespace Fuse{
namespace Motion{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.42.4/$.uno
// --------------------------------------------------------------------------------------

// public sealed class DestinationMotion<T> :243
// {
static void DestinationMotion_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Invalidate simulation type: ");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.42.4/$.uno");
    ::STRINGS[2] = uString::Const("Create");
    ::TYPES[0] = ::g::Fuse::Motion::Simulation::EasingMotion_typeof();
    ::TYPES[1] = ::g::Fuse::Motion::Simulation::ElasticForce_typeof();
    ::TYPES[2] = ::g::Fuse::Motion::Simulation::SmoothSnap_typeof();
    ::TYPES[3] = ::g::Fuse::Motion::Simulation::AngularAdapter_typeof();
    ::TYPES[4] = ::g::Fuse::Motion::Simulation::AdapterMultiplier_typeof();
    type->SetPrecalc(
        ::g::Fuse::Motion::Simulation::EasingMotion_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Motion::Simulation::ElasticForce_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Motion::Simulation::SmoothSnap_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Motion::Simulation::AngularAdapter_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Motion::Simulation::AdapterMultiplier_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::DestinationMotion, _distance), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::DestinationMotion, _duration), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Motion::DestinationMotion, _durationExp), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Motion::DestinationMotion, _easing), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Motion::DestinationMotion, _explicitType), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Motion::DestinationMotion, _hasDistance), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Motion::DestinationMotion, _hasDuration), 0,
        ::g::Fuse::Motion::MotionDestinationType_typeof(), offsetof(::g::Fuse::Motion::DestinationMotion, _type), 0,
        ::g::Fuse::Motion::MotionUnit_typeof(), offsetof(::g::Fuse::Motion::DestinationMotion, _unit), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_Distance", NULL, (void*)DestinationMotion__get_Distance_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Distance", NULL, (void*)DestinationMotion__set_Distance_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Duration", NULL, (void*)DestinationMotion__get_Duration_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Duration", NULL, (void*)DestinationMotion__set_Duration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DurationExp", NULL, (void*)DestinationMotion__get_DurationExp_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DurationExp", NULL, (void*)DestinationMotion__set_DurationExp_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Easing", NULL, (void*)DestinationMotion__get_Easing_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_Easing", NULL, (void*)DestinationMotion__set_Easing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction(".ctor", type, (void*)DestinationMotion__New1_fn, 0, true, type, 0),
        new uFunction("get_Type", NULL, (void*)DestinationMotion__get_Type_fn, 0, false, ::g::Fuse::Motion::MotionDestinationType_typeof(), 0),
        new uFunction("set_Type", NULL, (void*)DestinationMotion__set_Type_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::MotionDestinationType_typeof()),
        new uFunction("get_Unit", NULL, (void*)DestinationMotion__get_Unit_fn, 0, false, ::g::Fuse::Motion::MotionUnit_typeof(), 0),
        new uFunction("set_Unit", NULL, (void*)DestinationMotion__set_Unit_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::MotionUnit_typeof()));
}

uType* DestinationMotion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.PrecalcCount = 5;
    options.ObjectSize = sizeof(DestinationMotion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Motion.DestinationMotion`1", options);
    type->fp_build_ = DestinationMotion_build;
    type->fp_ctor_ = (void*)DestinationMotion__New1_fn;
    return type;
}

// public generated DestinationMotion() :243
void DestinationMotion__ctor__fn(DestinationMotion* __this)
{
    __this->ctor_();
}

// internal Fuse.Motion.Simulation.DestinationSimulation<T> Create() :351
void DestinationMotion__Create_fn(DestinationMotion* __this, uObject** __retval)
{
    *__retval = __this->Create();
}

// public float get_Distance() :343
void DestinationMotion__get_Distance_fn(DestinationMotion* __this, float* __retval)
{
    *__retval = __this->Distance();
}

// public void set_Distance(float value) :344
void DestinationMotion__set_Distance_fn(DestinationMotion* __this, float* value)
{
    __this->Distance(*value);
}

// public float get_Duration() :293
void DestinationMotion__get_Duration_fn(DestinationMotion* __this, float* __retval)
{
    *__retval = __this->Duration();
}

// public void set_Duration(float value) :294
void DestinationMotion__set_Duration_fn(DestinationMotion* __this, float* value)
{
    __this->Duration(*value);
}

// public float get_DurationExp() :310
void DestinationMotion__get_DurationExp_fn(DestinationMotion* __this, float* __retval)
{
    *__retval = __this->DurationExp();
}

// public void set_DurationExp(float value) :311
void DestinationMotion__set_DurationExp_fn(DestinationMotion* __this, float* value)
{
    __this->DurationExp(*value);
}

// public Fuse.Animations.Easing get_Easing() :272
void DestinationMotion__get_Easing_fn(DestinationMotion* __this, ::g::Fuse::Animations::Easing** __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :273
void DestinationMotion__set_Easing_fn(DestinationMotion* __this, ::g::Fuse::Animations::Easing* value)
{
    __this->Easing(value);
}

// public generated DestinationMotion New() :243
void DestinationMotion__New1_fn(uType* __type, DestinationMotion** __retval)
{
    *__retval = DestinationMotion::New1(__type);
}

// public Fuse.Motion.MotionDestinationType get_Type() :254
void DestinationMotion__get_Type_fn(DestinationMotion* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(Fuse.Motion.MotionDestinationType value) :255
void DestinationMotion__set_Type_fn(DestinationMotion* __this, int* value)
{
    __this->Type(*value);
}

// public Fuse.Motion.MotionUnit get_Unit() :326
void DestinationMotion__get_Unit_fn(DestinationMotion* __this, int* __retval)
{
    *__retval = __this->Unit();
}

// public void set_Unit(Fuse.Motion.MotionUnit value) :327
void DestinationMotion__set_Unit_fn(DestinationMotion* __this, int* value)
{
    __this->Unit(*value);
}

// public generated DestinationMotion() [instance] :243
void DestinationMotion::ctor_()
{
    _type = 1;
    _easing = ::g::Fuse::Animations::Easing::SinusoidalInOut();
    _duration = 0.5f;
    _durationExp = 0.5f;
    _distance = 1000.0f;
}

// internal Fuse.Motion.Simulation.DestinationSimulation<T> Create() [instance] :351
uObject* DestinationMotion::Create()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Motion.Simulation.EasingMotion<T>*/),
        __type->Precalced(1/*Fuse.Motion.Simulation.ElasticForce<T>*/),
        __type->Precalced(2/*Fuse.Motion.Simulation.SmoothSnap<T>*/),
        __type->Precalced(3/*Fuse.Motion.Simulation.AngularAdapter<T>*/),
        __type->Precalced(4/*Fuse.Motion.Simulation.AdapterMultiplier<T>*/),
    };
    uStackFrame __("Fuse.Motion.DestinationMotion`1", "Create()");
    int effectiveUnit = Unit();
    float multiplier = 1.0f;

    if (effectiveUnit == 3)
    {
        effectiveUnit = 2;
        multiplier = ::g::Uno::Math::DegreesToRadians1(1.0f);
    }

    uObject* dest;

    switch (Type())
    {
        case 0:
        {
            ::g::Fuse::Motion::Simulation::EasingMotion* q = (::g::Fuse::Motion::Simulation::EasingMotion*)::g::Fuse::Motion::Simulation::EasingMotion::CreateUnit(__types[0], effectiveUnit);
            uPtr(q)->Easing(Easing());
            q->DurationExp(DurationExp());

            if (_hasDuration)
                uPtr(q)->Duration(Duration());

            if (_hasDistance)
                uPtr(q)->NominalDistance(Distance() * multiplier);

            dest = (uObject*)q;
            break;
        }
        case 1:
        {
            ::g::Fuse::Motion::Simulation::ElasticForce* q1 = (::g::Fuse::Motion::Simulation::ElasticForce*)::g::Fuse::Motion::Simulation::ElasticForce::CreateUnit(__types[1], effectiveUnit);
            dest = (uObject*)q1;
            break;
        }
        case 2:
        {
            ::g::Fuse::Motion::Simulation::SmoothSnap* q2 = (::g::Fuse::Motion::Simulation::SmoothSnap*)::g::Fuse::Motion::Simulation::SmoothSnap::CreateUnit(__types[2], effectiveUnit);

            if (_hasDistance)
                uPtr(q2)->SpeedDropoutDistance(Distance() * multiplier);

            if (_hasDuration)
                uPtr(q2)->SetDuration(Duration());

            dest = (uObject*)q2;
            break;
        }
        default:
        {
            ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition1(::STRINGS[0/*"Invalidate ...*/], uBox<int>(::g::Fuse::Motion::MotionDestinationType_typeof(), Type())), this, ::STRINGS[1/*"/Users/most...*/], 398, ::STRINGS[2/*"Create"*/]);
            dest = (uObject*)((::g::Fuse::Motion::Simulation::ElasticForce*)::g::Fuse::Motion::Simulation::ElasticForce::CreateNormalized(__types[1]));
            break;
        }
    }

    if ((Unit() == 2) || (Unit() == 3))
        dest = (uObject*)((::g::Fuse::Motion::Simulation::AngularAdapter*)::g::Fuse::Motion::Simulation::AngularAdapter::New1(__types[3], dest));

    if (multiplier != 1.0f)
        dest = (uObject*)((::g::Fuse::Motion::Simulation::AdapterMultiplier*)::g::Fuse::Motion::Simulation::AdapterMultiplier::New1(__types[4], dest, (double)multiplier));

    return dest;
}

// public float get_Distance() [instance] :343
float DestinationMotion::Distance()
{
    return _distance;
}

// public void set_Distance(float value) [instance] :344
void DestinationMotion::Distance(float value)
{
    _distance = value;
    _hasDistance = true;
}

// public float get_Duration() [instance] :293
float DestinationMotion::Duration()
{
    return _duration;
}

// public void set_Duration(float value) [instance] :294
void DestinationMotion::Duration(float value)
{
    _duration = value;
    _hasDuration = true;
}

// public float get_DurationExp() [instance] :310
float DestinationMotion::DurationExp()
{
    return _durationExp;
}

// public void set_DurationExp(float value) [instance] :311
void DestinationMotion::DurationExp(float value)
{
    _durationExp = value;
}

// public Fuse.Animations.Easing get_Easing() [instance] :272
::g::Fuse::Animations::Easing* DestinationMotion::Easing()
{
    return _easing;
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :273
void DestinationMotion::Easing(::g::Fuse::Animations::Easing* value)
{
    _easing = value;

    if (!_explicitType)
        _type = 0;
}

// public Fuse.Motion.MotionDestinationType get_Type() [instance] :254
int DestinationMotion::Type()
{
    return _type;
}

// public void set_Type(Fuse.Motion.MotionDestinationType value) [instance] :255
void DestinationMotion::Type(int value)
{
    if ((_type == value) && !_explicitType)
        return;

    _type = value;
    _explicitType = true;
}

// public Fuse.Motion.MotionUnit get_Unit() [instance] :326
int DestinationMotion::Unit()
{
    return _unit;
}

// public void set_Unit(Fuse.Motion.MotionUnit value) [instance] :327
void DestinationMotion::Unit(int value)
{
    _unit = value;
}

// public generated DestinationMotion New() [static] :243
DestinationMotion* DestinationMotion::New1(uType* __type)
{
    DestinationMotion* obj1 = (DestinationMotion*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.42.4/$.uno
// --------------------------------------------------------------------------------------

// public class MotionConfig :15
// {
static void MotionConfig_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Motion::DestinationMotion_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Motion::Simulation::Friction_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[5/*Fuse.Motion.DestinationMotion<float2>*/], offsetof(::g::Fuse::Motion::MotionConfig, _goto), 0,
        ::g::Fuse::Motion::Simulation::BasicBoundedRegion2D_typeof(), offsetof(::g::Fuse::Motion::MotionConfig, _impl), 0,
        ::g::Fuse::Motion::OverflowType_typeof(), offsetof(::g::Fuse::Motion::MotionConfig, _overflow), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Motion::MotionConfig, _overflowExtent), 0,
        ::TYPES[5/*Fuse.Motion.DestinationMotion<float2>*/], offsetof(::g::Fuse::Motion::MotionConfig, _snap), 0);
    type->Reflection.SetFunctions(28,
        new uFunction("get_Goto", NULL, (void*)MotionConfig__get_Goto_fn, 0, false, ::TYPES[5/*Fuse.Motion.DestinationMotion<float2>*/], 0),
        new uFunction("get_GotoDistance", NULL, (void*)MotionConfig__get_GotoDistance_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_GotoDistance", NULL, (void*)MotionConfig__set_GotoDistance_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_GotoDuration", NULL, (void*)MotionConfig__get_GotoDuration_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_GotoDuration", NULL, (void*)MotionConfig__set_GotoDuration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_GotoDurationExp", NULL, (void*)MotionConfig__get_GotoDurationExp_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_GotoDurationExp", NULL, (void*)MotionConfig__set_GotoDurationExp_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_GotoEasing", NULL, (void*)MotionConfig__get_GotoEasing_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_GotoEasing", NULL, (void*)MotionConfig__set_GotoEasing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("get_GotoType", NULL, (void*)MotionConfig__get_GotoType_fn, 0, false, ::g::Fuse::Motion::MotionDestinationType_typeof(), 0),
        new uFunction("set_GotoType", NULL, (void*)MotionConfig__set_GotoType_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::MotionDestinationType_typeof()),
        new uFunction("get_Overflow", NULL, (void*)MotionConfig__get_Overflow_fn, 0, false, ::g::Fuse::Motion::OverflowType_typeof(), 0),
        new uFunction("set_Overflow", NULL, (void*)MotionConfig__set_Overflow_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::OverflowType_typeof()),
        new uFunction("get_OverflowExtent", NULL, (void*)MotionConfig__get_OverflowExtent_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_OverflowExtent", NULL, (void*)MotionConfig__set_OverflowExtent_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Snap", NULL, (void*)MotionConfig__get_Snap_fn, 0, false, ::TYPES[5/*Fuse.Motion.DestinationMotion<float2>*/], 0),
        new uFunction("get_SnapDistance", NULL, (void*)MotionConfig__get_SnapDistance_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_SnapDistance", NULL, (void*)MotionConfig__set_SnapDistance_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_SnapDuration", NULL, (void*)MotionConfig__get_SnapDuration_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_SnapDuration", NULL, (void*)MotionConfig__set_SnapDuration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_SnapDurationExp", NULL, (void*)MotionConfig__get_SnapDurationExp_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_SnapDurationExp", NULL, (void*)MotionConfig__set_SnapDurationExp_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_SnapEasing", NULL, (void*)MotionConfig__get_SnapEasing_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_SnapEasing", NULL, (void*)MotionConfig__set_SnapEasing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("get_SnapType", NULL, (void*)MotionConfig__get_SnapType_fn, 0, false, ::g::Fuse::Motion::MotionDestinationType_typeof(), 0),
        new uFunction("set_SnapType", NULL, (void*)MotionConfig__set_SnapType_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::MotionDestinationType_typeof()),
        new uFunction("get_Unit", NULL, (void*)MotionConfig__get_Unit_fn, 0, false, ::g::Fuse::Motion::MotionUnit_typeof(), 0),
        new uFunction("set_Unit", NULL, (void*)MotionConfig__set_Unit_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::MotionUnit_typeof()));
}

uType* MotionConfig_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MotionConfig);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Motion.MotionConfig", options);
    type->fp_build_ = MotionConfig_build;
    type->fp_ctor_ = (void*)MotionConfig__New1_fn;
    return type;
}

// protected MotionConfig() :19
void MotionConfig__ctor__fn(MotionConfig* __this)
{
    __this->ctor_();
}

// internal Fuse.Motion.Simulation.BoundedRegion2D AcquireSimulation() :26
void MotionConfig__AcquireSimulation_fn(MotionConfig* __this, uObject** __retval)
{
    *__retval = __this->AcquireSimulation();
}

// private void CreateImpl() :176
void MotionConfig__CreateImpl_fn(MotionConfig* __this)
{
    __this->CreateImpl();
}

// public Fuse.Motion.DestinationMotion<float2> get_Goto() :46
void MotionConfig__get_Goto_fn(MotionConfig* __this, ::g::Fuse::Motion::DestinationMotion** __retval)
{
    *__retval = __this->Goto();
}

// public float get_GotoDistance() :80
void MotionConfig__get_GotoDistance_fn(MotionConfig* __this, float* __retval)
{
    *__retval = __this->GotoDistance();
}

// public void set_GotoDistance(float value) :81
void MotionConfig__set_GotoDistance_fn(MotionConfig* __this, float* value)
{
    __this->GotoDistance(*value);
}

// public float get_GotoDuration() :66
void MotionConfig__get_GotoDuration_fn(MotionConfig* __this, float* __retval)
{
    *__retval = __this->GotoDuration();
}

// public void set_GotoDuration(float value) :67
void MotionConfig__set_GotoDuration_fn(MotionConfig* __this, float* value)
{
    __this->GotoDuration(*value);
}

// public float get_GotoDurationExp() :73
void MotionConfig__get_GotoDurationExp_fn(MotionConfig* __this, float* __retval)
{
    *__retval = __this->GotoDurationExp();
}

// public void set_GotoDurationExp(float value) :74
void MotionConfig__set_GotoDurationExp_fn(MotionConfig* __this, float* value)
{
    __this->GotoDurationExp(*value);
}

// public Fuse.Animations.Easing get_GotoEasing() :59
void MotionConfig__get_GotoEasing_fn(MotionConfig* __this, ::g::Fuse::Animations::Easing** __retval)
{
    *__retval = __this->GotoEasing();
}

// public void set_GotoEasing(Fuse.Animations.Easing value) :60
void MotionConfig__set_GotoEasing_fn(MotionConfig* __this, ::g::Fuse::Animations::Easing* value)
{
    __this->GotoEasing(value);
}

// public Fuse.Motion.MotionDestinationType get_GotoType() :52
void MotionConfig__get_GotoType_fn(MotionConfig* __this, int* __retval)
{
    *__retval = __this->GotoType();
}

// public void set_GotoType(Fuse.Motion.MotionDestinationType value) :53
void MotionConfig__set_GotoType_fn(MotionConfig* __this, int* value)
{
    __this->GotoType(*value);
}

// protected MotionConfig New() :19
void MotionConfig__New1_fn(MotionConfig** __retval)
{
    *__retval = MotionConfig::New1();
}

// public Fuse.Motion.OverflowType get_Overflow() :139
void MotionConfig__get_Overflow_fn(MotionConfig* __this, int* __retval)
{
    *__retval = __this->Overflow();
}

// public void set_Overflow(Fuse.Motion.OverflowType value) :140
void MotionConfig__set_Overflow_fn(MotionConfig* __this, int* value)
{
    __this->Overflow(*value);
}

// public float2 get_OverflowExtent() :154
void MotionConfig__get_OverflowExtent_fn(MotionConfig* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->OverflowExtent();
}

// public void set_OverflowExtent(float2 value) :155
void MotionConfig__set_OverflowExtent_fn(MotionConfig* __this, ::g::Uno::Float2* value)
{
    __this->OverflowExtent(*value);
}

// internal void ReleaseSimulation() :35
void MotionConfig__ReleaseSimulation_fn(MotionConfig* __this)
{
    __this->ReleaseSimulation();
}

// public Fuse.Motion.DestinationMotion<float2> get_Snap() :90
void MotionConfig__get_Snap_fn(MotionConfig* __this, ::g::Fuse::Motion::DestinationMotion** __retval)
{
    *__retval = __this->Snap();
}

// public float get_SnapDistance() :124
void MotionConfig__get_SnapDistance_fn(MotionConfig* __this, float* __retval)
{
    *__retval = __this->SnapDistance();
}

// public void set_SnapDistance(float value) :125
void MotionConfig__set_SnapDistance_fn(MotionConfig* __this, float* value)
{
    __this->SnapDistance(*value);
}

// public float get_SnapDuration() :110
void MotionConfig__get_SnapDuration_fn(MotionConfig* __this, float* __retval)
{
    *__retval = __this->SnapDuration();
}

// public void set_SnapDuration(float value) :111
void MotionConfig__set_SnapDuration_fn(MotionConfig* __this, float* value)
{
    __this->SnapDuration(*value);
}

// public float get_SnapDurationExp() :117
void MotionConfig__get_SnapDurationExp_fn(MotionConfig* __this, float* __retval)
{
    *__retval = __this->SnapDurationExp();
}

// public void set_SnapDurationExp(float value) :118
void MotionConfig__set_SnapDurationExp_fn(MotionConfig* __this, float* value)
{
    __this->SnapDurationExp(*value);
}

// public Fuse.Animations.Easing get_SnapEasing() :103
void MotionConfig__get_SnapEasing_fn(MotionConfig* __this, ::g::Fuse::Animations::Easing** __retval)
{
    *__retval = __this->SnapEasing();
}

// public void set_SnapEasing(Fuse.Animations.Easing value) :104
void MotionConfig__set_SnapEasing_fn(MotionConfig* __this, ::g::Fuse::Animations::Easing* value)
{
    __this->SnapEasing(value);
}

// public Fuse.Motion.MotionDestinationType get_SnapType() :96
void MotionConfig__get_SnapType_fn(MotionConfig* __this, int* __retval)
{
    *__retval = __this->SnapType();
}

// public void set_SnapType(Fuse.Motion.MotionDestinationType value) :97
void MotionConfig__set_SnapType_fn(MotionConfig* __this, int* value)
{
    __this->SnapType(*value);
}

// public Fuse.Motion.MotionUnit get_Unit() :168
void MotionConfig__get_Unit_fn(MotionConfig* __this, int* __retval)
{
    *__retval = __this->Unit();
}

// public void set_Unit(Fuse.Motion.MotionUnit value) :169
void MotionConfig__set_Unit_fn(MotionConfig* __this, int* value)
{
    __this->Unit(*value);
}

// protected MotionConfig() [instance] :19
void MotionConfig::ctor_()
{
    _goto = ((::g::Fuse::Motion::DestinationMotion*)::g::Fuse::Motion::DestinationMotion::New1(::TYPES[5/*Fuse.Motion.DestinationMotion<float2>*/]));
    _snap = ((::g::Fuse::Motion::DestinationMotion*)::g::Fuse::Motion::DestinationMotion::New1(::TYPES[5/*Fuse.Motion.DestinationMotion<float2>*/]));
    _overflowExtent = ::g::Uno::Float2__New1(150.0f);
}

// internal Fuse.Motion.Simulation.BoundedRegion2D AcquireSimulation() [instance] :26
uObject* MotionConfig::AcquireSimulation()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "AcquireSimulation()");
    CreateImpl();
    return (uObject*)_impl;
}

// private void CreateImpl() [instance] :176
void MotionConfig::CreateImpl()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "CreateImpl()");
    _impl = ::g::Fuse::Motion::Simulation::BasicBoundedRegion2D::New1();
    uPtr(_impl)->DestinationSimulation((uObject*)uPtr(_goto)->Create());
    uPtr(_impl)->SnapSimulation((uObject*)uPtr(_snap)->Create());
    uPtr(_impl)->OverflowExtent(OverflowExtent());
    uPtr(_impl)->Overflow(Overflow());
    uPtr(_impl)->FrictionSimulation((uObject*)((::g::Fuse::Motion::Simulation::Friction*)::g::Fuse::Motion::Simulation::Friction::CreateUnit(::TYPES[6/*Fuse.Motion.Simulation.Friction<float2>*/], Unit())));
}

// public Fuse.Motion.DestinationMotion<float2> get_Goto() [instance] :46
::g::Fuse::Motion::DestinationMotion* MotionConfig::Goto()
{
    return _goto;
}

// public float get_GotoDistance() [instance] :80
float MotionConfig::GotoDistance()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_GotoDistance()");
    return uPtr(_goto)->Distance();
}

// public void set_GotoDistance(float value) [instance] :81
void MotionConfig::GotoDistance(float value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_GotoDistance(float)");
    uPtr(_goto)->Distance(value);
}

// public float get_GotoDuration() [instance] :66
float MotionConfig::GotoDuration()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_GotoDuration()");
    return uPtr(_goto)->Duration();
}

// public void set_GotoDuration(float value) [instance] :67
void MotionConfig::GotoDuration(float value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_GotoDuration(float)");
    uPtr(_goto)->Duration(value);
}

// public float get_GotoDurationExp() [instance] :73
float MotionConfig::GotoDurationExp()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_GotoDurationExp()");
    return uPtr(_goto)->DurationExp();
}

// public void set_GotoDurationExp(float value) [instance] :74
void MotionConfig::GotoDurationExp(float value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_GotoDurationExp(float)");
    uPtr(_goto)->DurationExp(value);
}

// public Fuse.Animations.Easing get_GotoEasing() [instance] :59
::g::Fuse::Animations::Easing* MotionConfig::GotoEasing()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_GotoEasing()");
    return uPtr(_goto)->Easing();
}

// public void set_GotoEasing(Fuse.Animations.Easing value) [instance] :60
void MotionConfig::GotoEasing(::g::Fuse::Animations::Easing* value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_GotoEasing(Fuse.Animations.Easing)");
    uPtr(_goto)->Easing(value);
}

// public Fuse.Motion.MotionDestinationType get_GotoType() [instance] :52
int MotionConfig::GotoType()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_GotoType()");
    return uPtr(_goto)->Type();
}

// public void set_GotoType(Fuse.Motion.MotionDestinationType value) [instance] :53
void MotionConfig::GotoType(int value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_GotoType(Fuse.Motion.MotionDestinationType)");
    uPtr(_goto)->Type(value);
}

// public Fuse.Motion.OverflowType get_Overflow() [instance] :139
int MotionConfig::Overflow()
{
    return _overflow;
}

// public void set_Overflow(Fuse.Motion.OverflowType value) [instance] :140
void MotionConfig::Overflow(int value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_Overflow(Fuse.Motion.OverflowType)");
    _overflow = value;

    if (_impl != NULL)
        uPtr(_impl)->Overflow(_overflow);
}

// public float2 get_OverflowExtent() [instance] :154
::g::Uno::Float2 MotionConfig::OverflowExtent()
{
    return _overflowExtent;
}

// public void set_OverflowExtent(float2 value) [instance] :155
void MotionConfig::OverflowExtent(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_OverflowExtent(float2)");
    _overflowExtent = value;

    if (_impl != NULL)
        uPtr(_impl)->OverflowExtent(_overflowExtent);
}

// internal void ReleaseSimulation() [instance] :35
void MotionConfig::ReleaseSimulation()
{
    _impl = NULL;
}

// public Fuse.Motion.DestinationMotion<float2> get_Snap() [instance] :90
::g::Fuse::Motion::DestinationMotion* MotionConfig::Snap()
{
    return _snap;
}

// public float get_SnapDistance() [instance] :124
float MotionConfig::SnapDistance()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_SnapDistance()");
    return uPtr(_snap)->Distance();
}

// public void set_SnapDistance(float value) [instance] :125
void MotionConfig::SnapDistance(float value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_SnapDistance(float)");
    uPtr(_snap)->Distance(value);
}

// public float get_SnapDuration() [instance] :110
float MotionConfig::SnapDuration()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_SnapDuration()");
    return uPtr(_snap)->Duration();
}

// public void set_SnapDuration(float value) [instance] :111
void MotionConfig::SnapDuration(float value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_SnapDuration(float)");
    uPtr(_snap)->Duration(value);
}

// public float get_SnapDurationExp() [instance] :117
float MotionConfig::SnapDurationExp()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_SnapDurationExp()");
    return uPtr(_snap)->DurationExp();
}

// public void set_SnapDurationExp(float value) [instance] :118
void MotionConfig::SnapDurationExp(float value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_SnapDurationExp(float)");
    uPtr(_snap)->DurationExp(value);
}

// public Fuse.Animations.Easing get_SnapEasing() [instance] :103
::g::Fuse::Animations::Easing* MotionConfig::SnapEasing()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_SnapEasing()");
    return uPtr(_snap)->Easing();
}

// public void set_SnapEasing(Fuse.Animations.Easing value) [instance] :104
void MotionConfig::SnapEasing(::g::Fuse::Animations::Easing* value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_SnapEasing(Fuse.Animations.Easing)");
    uPtr(_snap)->Easing(value);
}

// public Fuse.Motion.MotionDestinationType get_SnapType() [instance] :96
int MotionConfig::SnapType()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_SnapType()");
    return uPtr(_snap)->Type();
}

// public void set_SnapType(Fuse.Motion.MotionDestinationType value) [instance] :97
void MotionConfig::SnapType(int value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_SnapType(Fuse.Motion.MotionDestinationType)");
    uPtr(_snap)->Type(value);
}

// public Fuse.Motion.MotionUnit get_Unit() [instance] :168
int MotionConfig::Unit()
{
    uStackFrame __("Fuse.Motion.MotionConfig", "get_Unit()");
    return uPtr(_goto)->Unit();
}

// public void set_Unit(Fuse.Motion.MotionUnit value) [instance] :169
void MotionConfig::Unit(int value)
{
    uStackFrame __("Fuse.Motion.MotionConfig", "set_Unit(Fuse.Motion.MotionUnit)");
    uPtr(_goto)->Unit(value);
    uPtr(_snap)->Unit(value);
}

// protected MotionConfig New() [static] :19
MotionConfig* MotionConfig::New1()
{
    MotionConfig* obj1 = (MotionConfig*)uNew(MotionConfig_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.42.4/$.uno
// --------------------------------------------------------------------------------------

// public enum MotionDestinationType :501
uEnumType* MotionDestinationType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Motion.MotionDestinationType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Easing", 0LL,
        "Elastic", 1LL,
        "SmoothSnap", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.42.4/$.uno
// --------------------------------------------------------------------------------------

// public enum MotionUnit :514
uEnumType* MotionUnit_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Motion.MotionUnit", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Points", 0LL,
        "Normalized", 1LL,
        "Radians", 2LL,
        "Degrees", 3LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.42.4/$.uno
// --------------------------------------------------------------------------------------

// public sealed class NavigationMotion :191
// {
static void NavigationMotion_build(uType* type)
{
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NavigationMotion__New2_fn, 0, true, type, 0));
}

uType* NavigationMotion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Motion::MotionConfig_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(NavigationMotion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Motion.NavigationMotion", options);
    type->fp_build_ = NavigationMotion_build;
    type->fp_ctor_ = (void*)NavigationMotion__New2_fn;
    return type;
}

// public NavigationMotion() :193
void NavigationMotion__ctor_1_fn(NavigationMotion* __this)
{
    __this->ctor_1();
}

// public NavigationMotion New() :193
void NavigationMotion__New2_fn(NavigationMotion** __retval)
{
    *__retval = NavigationMotion::New2();
}

// public NavigationMotion() [instance] :193
void NavigationMotion::ctor_1()
{
    uStackFrame __("Fuse.Motion.NavigationMotion", ".ctor()");
    ctor_();
    Unit(1);
    uPtr(Goto())->_type = 0;
    uPtr(Goto())->_easing = ::g::Fuse::Animations::Easing::SinusoidalInOut();
    Overflow(1);
    OverflowExtent(::g::Uno::Float2__New1(0.25f));
}

// public NavigationMotion New() [static] :193
NavigationMotion* NavigationMotion::New2()
{
    NavigationMotion* obj1 = (NavigationMotion*)uNew(NavigationMotion_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.42.4/$.uno
// --------------------------------------------------------------------------------------

// public enum OverflowType :488
uEnumType* OverflowType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Motion.OverflowType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Open", 0LL,
        "Clamp", 1LL,
        "Elastic", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.42.4/$.uno
// --------------------------------------------------------------------------------------

// public sealed class ScrollViewMotion :210
// {
static void ScrollViewMotion_build(uType* type)
{
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ScrollViewMotion__New2_fn, 0, true, type, 0));
}

uType* ScrollViewMotion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Motion::MotionConfig_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ScrollViewMotion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Motion.ScrollViewMotion", options);
    type->fp_build_ = ScrollViewMotion_build;
    type->fp_ctor_ = (void*)ScrollViewMotion__New2_fn;
    return type;
}

// public ScrollViewMotion() :212
void ScrollViewMotion__ctor_1_fn(ScrollViewMotion* __this)
{
    __this->ctor_1();
}

// public ScrollViewMotion New() :212
void ScrollViewMotion__New2_fn(ScrollViewMotion** __retval)
{
    *__retval = ScrollViewMotion::New2();
}

// public ScrollViewMotion() [instance] :212
void ScrollViewMotion::ctor_1()
{
    uStackFrame __("Fuse.Motion.ScrollViewMotion", ".ctor()");
    ctor_();
    Unit(0);
    uPtr(Goto())->_type = 1;
    uPtr(Snap())->_type = 2;
    Overflow(2);
    OverflowExtent(::g::Uno::Float2__New1(150.0f));
}

// public ScrollViewMotion New() [static] :212
ScrollViewMotion* ScrollViewMotion::New2()
{
    ScrollViewMotion* obj1 = (ScrollViewMotion*)uNew(ScrollViewMotion_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Motion/0.42.4/$.uno
// --------------------------------------------------------------------------------------

// public sealed class SpringFunction :422
// {
static void SpringFunction_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Motion::Simulation::ElasticForce_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Action_typeof();
    type->SetFields(1,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Motion::SpringFunction, _hasStartValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Motion::SpringFunction, _isSimulating), 0,
        ::TYPES[7/*Fuse.Motion.Simulation.ElasticForce<float4>*/], offsetof(::g::Fuse::Motion::SpringFunction, _sim), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(::g::Fuse::Motion::SpringFunction, _Target), 0);
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", NULL, (void*)SpringFunction__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)SpringFunction__get_Target_fn, 0, false, ::g::Uno::UX::Property_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)SpringFunction__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Property_typeof()),
        new uFunction("get_Value", NULL, (void*)SpringFunction__get_Value_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)SpringFunction__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()));
}

uType* SpringFunction_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(SpringFunction);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Motion.SpringFunction", options);
    type->fp_build_ = SpringFunction_build;
    type->fp_ctor_ = (void*)SpringFunction__New2_fn;
    return type;
}

// public SpringFunction() :428
void SpringFunction__ctor_1_fn(SpringFunction* __this)
{
    __this->ctor_1();
}

// public SpringFunction New() :428
void SpringFunction__New2_fn(SpringFunction** __retval)
{
    *__retval = SpringFunction::New2();
}

// private void Simulate() :448
void SpringFunction__Simulate_fn(SpringFunction* __this)
{
    __this->Simulate();
}

// private void StartSimulation() :434
void SpringFunction__StartSimulation_fn(SpringFunction* __this)
{
    __this->StartSimulation();
}

// private void StopSimulation() :441
void SpringFunction__StopSimulation_fn(SpringFunction* __this)
{
    __this->StopSimulation();
}

// public generated Uno.UX.Property get_Target() :424
void SpringFunction__get_Target_fn(SpringFunction* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Uno.UX.Property value) :424
void SpringFunction__set_Target_fn(SpringFunction* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// public float4 get_Value() :459
void SpringFunction__get_Value_fn(SpringFunction* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(float4 value) :460
void SpringFunction__set_Value_fn(SpringFunction* __this, ::g::Uno::Float4* value)
{
    __this->Value(*value);
}

// public SpringFunction() [instance] :428
void SpringFunction::ctor_1()
{
    ctor_();
    _sim = ((::g::Fuse::Motion::Simulation::ElasticForce*)::g::Fuse::Motion::Simulation::ElasticForce::CreatePoints(::TYPES[7/*Fuse.Motion.Simulation.ElasticForce<float4>*/]));
}

// private void Simulate() [instance] :448
void SpringFunction::Simulate()
{
    uStackFrame __("Fuse.Motion.SpringFunction", "Simulate()");
    ::g::Uno::Float4 ret2;
    uPtr(_sim)->Update(::g::Fuse::Time::FrameInterval());
    uPtr(Target())->SetAsObject(::g::Uno::UX::Value::Cast(uPtr(Target())->PropertyType(), uBox(::g::Uno::Float4_typeof(), (::g::Fuse::Motion::Simulation::ElasticForce__get_Position_fn(uPtr(_sim), &ret2), ret2))), NULL);

    if (uPtr(_sim)->IsStatic())
        StopSimulation();
}

// private void StartSimulation() [instance] :434
void SpringFunction::StartSimulation()
{
    uStackFrame __("Fuse.Motion.SpringFunction", "StartSimulation()");

    if (_isSimulating)
        return;

    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)SpringFunction__Simulate_fn, this), 0);
    _isSimulating = true;
}

// private void StopSimulation() [instance] :441
void SpringFunction::StopSimulation()
{
    uStackFrame __("Fuse.Motion.SpringFunction", "StopSimulation()");

    if (!_isSimulating)
        return;

    ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)SpringFunction__Simulate_fn, this), 0);
    _isSimulating = false;
}

// public generated Uno.UX.Property get_Target() [instance] :424
::g::Uno::UX::Property* SpringFunction::Target()
{
    return _Target;
}

// public generated void set_Target(Uno.UX.Property value) [instance] :424
void SpringFunction::Target(::g::Uno::UX::Property* value)
{
    _Target = value;
}

// public float4 get_Value() [instance] :459
::g::Uno::Float4 SpringFunction::Value()
{
    uStackFrame __("Fuse.Motion.SpringFunction", "get_Value()");
    ::g::Uno::Float4 ret3;
    return (::g::Fuse::Motion::Simulation::ElasticForce__get_Destination_fn(uPtr(_sim), &ret3), ret3);
}

// public void set_Value(float4 value) [instance] :460
void SpringFunction::Value(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Motion.SpringFunction", "set_Value(float4)");

    if (!_hasStartValue)
    {
        ::g::Fuse::Motion::Simulation::ElasticForce__Reset_fn(uPtr(_sim), uCRef(value));
        _hasStartValue = true;
    }
    else if (::g::Uno::Float4__op_Inequality(Value(), value))
    {
        ::g::Fuse::Motion::Simulation::ElasticForce__set_Destination_fn(uPtr(_sim), uCRef(value));
        StartSimulation();
    }
}

// public SpringFunction New() [static] :428
SpringFunction* SpringFunction::New2()
{
    SpringFunction* obj1 = (SpringFunction*)uNew(SpringFunction_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}} // ::g::Fuse::Motion
