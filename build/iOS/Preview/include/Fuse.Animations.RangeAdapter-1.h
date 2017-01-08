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
namespace g{namespace Fuse{namespace Animations{struct RangeAdapter;}}}
namespace g{namespace Fuse{namespace Internal{struct ScalarBlender;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class RangeAdapter<T> :2514
// {
struct RangeAdapter_type : ::g::Fuse::Node_type
{
    ::g::Uno::UX::IPropertyListener interface4;
};

RangeAdapter_type* RangeAdapter_typeof();
void RangeAdapter__ctor_3_fn(RangeAdapter* __this, ::g::Uno::UX::Property1* source);
void RangeAdapter__In_fn(RangeAdapter* __this, void* value, uTRef __retval);
void RangeAdapter__New2_fn(uType* __type, ::g::Uno::UX::Property1* source, RangeAdapter** __retval);
void RangeAdapter__OnRooted_fn(RangeAdapter* __this);
void RangeAdapter__OnUnrooted_fn(RangeAdapter* __this);
void RangeAdapter__Out_fn(RangeAdapter* __this, void* value, uTRef __retval);
void RangeAdapter__SetValue_fn(RangeAdapter* __this, void* value, uObject* origin);
void RangeAdapter__get_Source_fn(RangeAdapter* __this, ::g::Uno::UX::Property1** __retval);
void RangeAdapter__set_Source_fn(RangeAdapter* __this, ::g::Uno::UX::Property1* value);
void RangeAdapter__get_SourceRangeMax_fn(RangeAdapter* __this, uTRef __retval);
void RangeAdapter__set_SourceRangeMax_fn(RangeAdapter* __this, void* value);
void RangeAdapter__get_SourceRangeMin_fn(RangeAdapter* __this, uTRef __retval);
void RangeAdapter__set_SourceRangeMin_fn(RangeAdapter* __this, void* value);
void RangeAdapter__UnoUXIPropertyListenerOnPropertyChanged_fn(RangeAdapter* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* sel);
void RangeAdapter__get_Value_fn(RangeAdapter* __this, uTRef __retval);
void RangeAdapter__set_Value_fn(RangeAdapter* __this, void* value);
void RangeAdapter__get_ValueRangeMax_fn(RangeAdapter* __this, uTRef __retval);
void RangeAdapter__set_ValueRangeMax_fn(RangeAdapter* __this, void* value);
void RangeAdapter__get_ValueRangeMin_fn(RangeAdapter* __this, uTRef __retval);
void RangeAdapter__set_ValueRangeMin_fn(RangeAdapter* __this, void* value);

struct RangeAdapter : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Internal::ScalarBlender*> _blender;
    double _sourceRangeMax;
    double _sourceRangeMin;
    double _valueRangeMax;
    double _valueRangeMin;
    uStrong< ::g::Uno::UX::Property1*> _Source;

    void ctor_3(::g::Uno::UX::Property1* source);
    template<class T>
    T In(T value) { T __retval; return RangeAdapter__In_fn(this, uConstrain(__type->T(0), value), &__retval), __retval; }
    template<class T>
    T Out(T value) { T __retval; return RangeAdapter__Out_fn(this, uConstrain(__type->T(0), value), &__retval), __retval; }
    template<class T>
    void SetValue(T value, uObject* origin) { RangeAdapter__SetValue_fn(this, uConstrain(__type->T(0), value), origin); }
    ::g::Uno::UX::Property1* Source();
    void Source(::g::Uno::UX::Property1* value);
    template<class T>
    T SourceRangeMax() { T __retval; return RangeAdapter__get_SourceRangeMax_fn(this, &__retval), __retval; }
    template<class T>
    void SourceRangeMax(T value) { RangeAdapter__set_SourceRangeMax_fn(this, uConstrain(__type->T(0), value)); }
    template<class T>
    T SourceRangeMin() { T __retval; return RangeAdapter__get_SourceRangeMin_fn(this, &__retval), __retval; }
    template<class T>
    void SourceRangeMin(T value) { RangeAdapter__set_SourceRangeMin_fn(this, uConstrain(__type->T(0), value)); }
    template<class T>
    T Value() { T __retval; return RangeAdapter__get_Value_fn(this, &__retval), __retval; }
    template<class T>
    void Value(T value) { RangeAdapter__set_Value_fn(this, uConstrain(__type->T(0), value)); }
    template<class T>
    T ValueRangeMax() { T __retval; return RangeAdapter__get_ValueRangeMax_fn(this, &__retval), __retval; }
    template<class T>
    void ValueRangeMax(T value) { RangeAdapter__set_ValueRangeMax_fn(this, uConstrain(__type->T(0), value)); }
    template<class T>
    T ValueRangeMin() { T __retval; return RangeAdapter__get_ValueRangeMin_fn(this, &__retval), __retval; }
    template<class T>
    void ValueRangeMin(T value) { RangeAdapter__set_ValueRangeMin_fn(this, uConstrain(__type->T(0), value)); }
    static RangeAdapter* New2(uType* __type, ::g::Uno::UX::Property1* source);
};
// }

}}} // ::g::Fuse::Animations
