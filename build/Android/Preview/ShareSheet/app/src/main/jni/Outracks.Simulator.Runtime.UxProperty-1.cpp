// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/Android/Preview/preamble/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Simulator.Runtime.UxProperty-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Func-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class UxProperty<T> :39
// {
static void UxProperty_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(1,
        ::g::Uno::Func_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::Outracks::Simulator::Runtime::UxProperty, _getter), 0,
        ::g::Uno::UX::PropertyObject_typeof(), offsetof(::g::Outracks::Simulator::Runtime::UxProperty, _obj), 0,
        ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL), offsetof(::g::Outracks::Simulator::Runtime::UxProperty, _setter), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Outracks::Simulator::Runtime::UxProperty, _supportsOriginSetter), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", type, (void*)UxProperty__New1_fn, 0, true, type, 5, ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL), ::g::Uno::Func_typeof()->MakeType(uObject_typeof(), NULL), ::g::Uno::UX::PropertyObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()));
}

::g::Uno::UX::Property1_type* UxProperty_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(UxProperty);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Outracks.Simulator.Runtime.UxProperty`1", options);
    type->fp_build_ = UxProperty_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))UxProperty__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))UxProperty__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))UxProperty__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))UxProperty__get_SupportsOriginSetter_fn;
    return type;
}

// public UxProperty(Uno.Action<object, object> setter, Uno.Func<object> getter, Uno.UX.PropertyObject obj, string name, bool supportsOriginSetter) :46
void UxProperty__ctor_2_fn(UxProperty* __this, uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool* supportsOriginSetter)
{
    __this->ctor_2(setter, getter, obj, name, *supportsOriginSetter);
}

// public override sealed T Get() :62
void UxProperty__Get_fn(UxProperty* __this, uTRef __retval)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxProperty`1", "Get()");
    return __retval.Store(__this->__type->T(0), uUnboxAny(__this->__type->T(0), uPtr(__this->_getter)->Invoke())), void();
}

// public UxProperty New(Uno.Action<object, object> setter, Uno.Func<object> getter, Uno.UX.PropertyObject obj, string name, bool supportsOriginSetter) :46
void UxProperty__New1_fn(uType* __type, uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool* supportsOriginSetter, UxProperty** __retval)
{
    *__retval = UxProperty::New1(__type, setter, getter, obj, name, *supportsOriginSetter);
}

// public override sealed Uno.UX.PropertyObject get_Object() :56
void UxProperty__get_Object_fn(UxProperty* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(T value, Uno.UX.IPropertyListener origin) :56
void UxProperty__Set_fn(UxProperty* __this, void* value, uObject* origin)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxProperty`1", "Set(T,Uno.UX.IPropertyListener)");
    uPtr(__this->_setter)->Invoke(2, uBoxPtr(__this->__type->T(0), value), origin);
}

// public override sealed bool get_SupportsOriginSetter() :56
void UxProperty__get_SupportsOriginSetter_fn(UxProperty* __this, bool* __retval)
{
    return *__retval = __this->_supportsOriginSetter, void();
}

// public UxProperty(Uno.Action<object, object> setter, Uno.Func<object> getter, Uno.UX.PropertyObject obj, string name, bool supportsOriginSetter) [instance] :46
void UxProperty::ctor_2(uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool supportsOriginSetter)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxProperty`1", ".ctor(Uno.Action<object, object>,Uno.Func<object>,Uno.UX.PropertyObject,string,bool)");
    ctor_1(::g::Uno::UX::Selector__New1(name));
    _setter = setter;
    _getter = getter;
    _obj = obj;
    _supportsOriginSetter = supportsOriginSetter;
}

// public UxProperty New(Uno.Action<object, object> setter, Uno.Func<object> getter, Uno.UX.PropertyObject obj, string name, bool supportsOriginSetter) [static] :46
UxProperty* UxProperty::New1(uType* __type, uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool supportsOriginSetter)
{
    UxProperty* obj1 = (UxProperty*)uNew(__type);
    obj1->ctor_2(setter, getter, obj, name, supportsOriginSetter);
    return obj1;
}
// }

}}}} // ::g::Outracks::Simulator::Runtime
