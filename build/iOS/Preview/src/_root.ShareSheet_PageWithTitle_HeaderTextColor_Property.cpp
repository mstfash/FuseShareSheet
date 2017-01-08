// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/iOS/Preview/cache/ux11/ShareSheet.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.PageWithTitle.h>
#include <_root.ShareSheet_PageWithTitle_HeaderTextColor_Property.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class ShareSheet_PageWithTitle_HeaderTextColor_Property :73
// {
static void ShareSheet_PageWithTitle_HeaderTextColor_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::g::PageWithTitle_typeof(), offsetof(::g::ShareSheet_PageWithTitle_HeaderTextColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* ShareSheet_PageWithTitle_HeaderTextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ShareSheet_PageWithTitle_HeaderTextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("ShareSheet_PageWithTitle_HeaderTextColor_Property", options);
    type->fp_build_ = ShareSheet_PageWithTitle_HeaderTextColor_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))ShareSheet_PageWithTitle_HeaderTextColor_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))ShareSheet_PageWithTitle_HeaderTextColor_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))ShareSheet_PageWithTitle_HeaderTextColor_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))ShareSheet_PageWithTitle_HeaderTextColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public ShareSheet_PageWithTitle_HeaderTextColor_Property(PageWithTitle obj, Uno.UX.Selector name) :76
void ShareSheet_PageWithTitle_HeaderTextColor_Property__ctor_2_fn(ShareSheet_PageWithTitle_HeaderTextColor_Property* __this, ::g::PageWithTitle* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :78
void ShareSheet_PageWithTitle_HeaderTextColor_Property__Get_fn(ShareSheet_PageWithTitle_HeaderTextColor_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("ShareSheet_PageWithTitle_HeaderTextColor_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->HeaderTextColor(), void();
}

// public ShareSheet_PageWithTitle_HeaderTextColor_Property New(PageWithTitle obj, Uno.UX.Selector name) :76
void ShareSheet_PageWithTitle_HeaderTextColor_Property__New1_fn(::g::PageWithTitle* obj, ::g::Uno::UX::Selector* name, ShareSheet_PageWithTitle_HeaderTextColor_Property** __retval)
{
    *__retval = ShareSheet_PageWithTitle_HeaderTextColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :77
void ShareSheet_PageWithTitle_HeaderTextColor_Property__get_Object_fn(ShareSheet_PageWithTitle_HeaderTextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :79
void ShareSheet_PageWithTitle_HeaderTextColor_Property__Set_fn(ShareSheet_PageWithTitle_HeaderTextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("ShareSheet_PageWithTitle_HeaderTextColor_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetHeaderTextColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :80
void ShareSheet_PageWithTitle_HeaderTextColor_Property__get_SupportsOriginSetter_fn(ShareSheet_PageWithTitle_HeaderTextColor_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public ShareSheet_PageWithTitle_HeaderTextColor_Property(PageWithTitle obj, Uno.UX.Selector name) [instance] :76
void ShareSheet_PageWithTitle_HeaderTextColor_Property::ctor_2(::g::PageWithTitle* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public ShareSheet_PageWithTitle_HeaderTextColor_Property New(PageWithTitle obj, Uno.UX.Selector name) [static] :76
ShareSheet_PageWithTitle_HeaderTextColor_Property* ShareSheet_PageWithTitle_HeaderTextColor_Property::New1(::g::PageWithTitle* obj, ::g::Uno::UX::Selector name)
{
    ShareSheet_PageWithTitle_HeaderTextColor_Property* obj1 = (ShareSheet_PageWithTitle_HeaderTextColor_Property*)uNew(ShareSheet_PageWithTitle_HeaderTextColor_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
