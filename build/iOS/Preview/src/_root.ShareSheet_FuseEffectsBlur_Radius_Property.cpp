// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/iOS/Preview/cache/ux11/ShareSheet.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ShareSheet_FuseEffectsBlur_Radius_Property.h>
#include <Fuse.Effects.Blur.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class ShareSheet_FuseEffectsBlur_Radius_Property :109
// {
static void ShareSheet_FuseEffectsBlur_Radius_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Effects::Blur_typeof(), offsetof(::g::ShareSheet_FuseEffectsBlur_Radius_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* ShareSheet_FuseEffectsBlur_Radius_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ShareSheet_FuseEffectsBlur_Radius_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("ShareSheet_FuseEffectsBlur_Radius_Property", options);
    type->fp_build_ = ShareSheet_FuseEffectsBlur_Radius_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))ShareSheet_FuseEffectsBlur_Radius_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))ShareSheet_FuseEffectsBlur_Radius_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))ShareSheet_FuseEffectsBlur_Radius_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))ShareSheet_FuseEffectsBlur_Radius_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public ShareSheet_FuseEffectsBlur_Radius_Property(Fuse.Effects.Blur obj, Uno.UX.Selector name) :112
void ShareSheet_FuseEffectsBlur_Radius_Property__ctor_2_fn(ShareSheet_FuseEffectsBlur_Radius_Property* __this, ::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :114
void ShareSheet_FuseEffectsBlur_Radius_Property__Get_fn(ShareSheet_FuseEffectsBlur_Radius_Property* __this, float* __retval)
{
    uStackFrame __("ShareSheet_FuseEffectsBlur_Radius_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Radius(), void();
}

// public ShareSheet_FuseEffectsBlur_Radius_Property New(Fuse.Effects.Blur obj, Uno.UX.Selector name) :112
void ShareSheet_FuseEffectsBlur_Radius_Property__New1_fn(::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector* name, ShareSheet_FuseEffectsBlur_Radius_Property** __retval)
{
    *__retval = ShareSheet_FuseEffectsBlur_Radius_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :113
void ShareSheet_FuseEffectsBlur_Radius_Property__get_Object_fn(ShareSheet_FuseEffectsBlur_Radius_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :115
void ShareSheet_FuseEffectsBlur_Radius_Property__Set_fn(ShareSheet_FuseEffectsBlur_Radius_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("ShareSheet_FuseEffectsBlur_Radius_Property", "Set(float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(__this->_obj)->Radius(v_);
}

// public override sealed bool get_SupportsOriginSetter() :116
void ShareSheet_FuseEffectsBlur_Radius_Property__get_SupportsOriginSetter_fn(ShareSheet_FuseEffectsBlur_Radius_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public ShareSheet_FuseEffectsBlur_Radius_Property(Fuse.Effects.Blur obj, Uno.UX.Selector name) [instance] :112
void ShareSheet_FuseEffectsBlur_Radius_Property::ctor_2(::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public ShareSheet_FuseEffectsBlur_Radius_Property New(Fuse.Effects.Blur obj, Uno.UX.Selector name) [static] :112
ShareSheet_FuseEffectsBlur_Radius_Property* ShareSheet_FuseEffectsBlur_Radius_Property::New1(::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector name)
{
    ShareSheet_FuseEffectsBlur_Radius_Property* obj1 = (ShareSheet_FuseEffectsBlur_Radius_Property*)uNew(ShareSheet_FuseEffectsBlur_Radius_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
