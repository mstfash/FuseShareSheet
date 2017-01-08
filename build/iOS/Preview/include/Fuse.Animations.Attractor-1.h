// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Animations{struct Attractor;}}}
namespace g{namespace Fuse{namespace Animations{struct Easing;}}}
namespace g{namespace Fuse{namespace Motion{struct DestinationMotion;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Attractor<T> :176
// {
struct Attractor_type : ::g::Fuse::Node_type
{
    ::g::Uno::UX::IPropertyListener interface4;
};

Attractor_type* Attractor_typeof();
void Attractor__ctor_3_fn(Attractor* __this);
void Attractor__ctor_4_fn(Attractor* __this, ::g::Uno::UX::Property1* target);
void Attractor__CheckNeedUpdate_fn(Attractor* __this);
void Attractor__get_Distance_fn(Attractor* __this, float* __retval);
void Attractor__set_Distance_fn(Attractor* __this, float* value);
void Attractor__get_Duration_fn(Attractor* __this, float* __retval);
void Attractor__set_Duration_fn(Attractor* __this, float* value);
void Attractor__get_DurationExp_fn(Attractor* __this, float* __retval);
void Attractor__set_DurationExp_fn(Attractor* __this, float* value);
void Attractor__get_Easing_fn(Attractor* __this, ::g::Fuse::Animations::Easing** __retval);
void Attractor__set_Easing_fn(Attractor* __this, ::g::Fuse::Animations::Easing* value);
void Attractor__get_IsEnabled_fn(Attractor* __this, bool* __retval);
void Attractor__set_IsEnabled_fn(Attractor* __this, bool* value);
void Attractor__get_Motion_fn(Attractor* __this, ::g::Fuse::Motion::DestinationMotion** __retval);
void Attractor__set_Motion_fn(Attractor* __this, ::g::Fuse::Motion::DestinationMotion* value);
void Attractor__New2_fn(uType* __type, Attractor** __retval);
void Attractor__New3_fn(uType* __type, ::g::Uno::UX::Property1* target, Attractor** __retval);
void Attractor__OnRooted_fn(Attractor* __this);
void Attractor__OnUnrooted_fn(Attractor* __this);
void Attractor__get_Target_fn(Attractor* __this, ::g::Uno::UX::Property1** __retval);
void Attractor__set_Target_fn(Attractor* __this, ::g::Uno::UX::Property1* value);
void Attractor__get_TimeMultiplier_fn(Attractor* __this, float* __retval);
void Attractor__set_TimeMultiplier_fn(Attractor* __this, float* value);
void Attractor__get_Type_fn(Attractor* __this, int* __retval);
void Attractor__set_Type_fn(Attractor* __this, int* value);
void Attractor__get_Unit_fn(Attractor* __this, int* __retval);
void Attractor__set_Unit_fn(Attractor* __this, int* value);
void Attractor__UnoUXIPropertyListenerOnPropertyChanged_fn(Attractor* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);
void Attractor__Update_fn(Attractor* __this);
void Attractor__get_Value_fn(Attractor* __this, uTRef __retval);
void Attractor__set_Value_fn(Attractor* __this, void* value);

struct Attractor : ::g::Fuse::Behavior
{
    bool _isEnabled;
    bool _isUpdate;
    uStrong< ::g::Fuse::Motion::DestinationMotion*> _motion;
    uStrong<uObject*> _sim;
    float _timeMultiplier;
    uStrong< ::g::Uno::UX::Property1*> _Target;

    void ctor_3();
    void ctor_4(::g::Uno::UX::Property1* target);
    void CheckNeedUpdate();
    float Distance();
    void Distance(float value);
    float Duration();
    void Duration(float value);
    float DurationExp();
    void DurationExp(float value);
    ::g::Fuse::Animations::Easing* Easing();
    void Easing(::g::Fuse::Animations::Easing* value);
    bool IsEnabled();
    void IsEnabled(bool value);
    ::g::Fuse::Motion::DestinationMotion* Motion();
    void Motion(::g::Fuse::Motion::DestinationMotion* value);
    ::g::Uno::UX::Property1* Target();
    void Target(::g::Uno::UX::Property1* value);
    float TimeMultiplier();
    void TimeMultiplier(float value);
    int Type();
    void Type(int value);
    int Unit();
    void Unit(int value);
    void Update();
    template<class T>
    T Value() { T __retval; return Attractor__get_Value_fn(this, &__retval), __retval; }
    template<class T>
    void Value(T value) { Attractor__set_Value_fn(this, uConstrain(__type->T(0), value)); }
    static Attractor* New2(uType* __type);
    static Attractor* New3(uType* __type, ::g::Uno::UX::Property1* target);
};
// }

}}} // ::g::Fuse::Animations
