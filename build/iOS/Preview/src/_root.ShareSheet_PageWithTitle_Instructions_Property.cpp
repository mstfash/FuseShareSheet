// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/iOS/Preview/cache/ux11/ShareSheet.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.PageWithTitle.h>
#include <_root.ShareSheet_PageWithTitle_Instructions_Property.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class ShareSheet_PageWithTitle_Instructions_Property :82
// {
static void ShareSheet_PageWithTitle_Instructions_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::PageWithTitle_typeof(), offsetof(::g::ShareSheet_PageWithTitle_Instructions_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* ShareSheet_PageWithTitle_Instructions_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ShareSheet_PageWithTitle_Instructions_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("ShareSheet_PageWithTitle_Instructions_Property", options);
    type->fp_build_ = ShareSheet_PageWithTitle_Instructions_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))ShareSheet_PageWithTitle_Instructions_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))ShareSheet_PageWithTitle_Instructions_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))ShareSheet_PageWithTitle_Instructions_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))ShareSheet_PageWithTitle_Instructions_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public ShareSheet_PageWithTitle_Instructions_Property(PageWithTitle obj, Uno.UX.Selector name) :85
void ShareSheet_PageWithTitle_Instructions_Property__ctor_2_fn(ShareSheet_PageWithTitle_Instructions_Property* __this, ::g::PageWithTitle* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :87
void ShareSheet_PageWithTitle_Instructions_Property__Get_fn(ShareSheet_PageWithTitle_Instructions_Property* __this, uString** __retval)
{
    uStackFrame __("ShareSheet_PageWithTitle_Instructions_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Instructions(), void();
}

// public ShareSheet_PageWithTitle_Instructions_Property New(PageWithTitle obj, Uno.UX.Selector name) :85
void ShareSheet_PageWithTitle_Instructions_Property__New1_fn(::g::PageWithTitle* obj, ::g::Uno::UX::Selector* name, ShareSheet_PageWithTitle_Instructions_Property** __retval)
{
    *__retval = ShareSheet_PageWithTitle_Instructions_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :86
void ShareSheet_PageWithTitle_Instructions_Property__get_Object_fn(ShareSheet_PageWithTitle_Instructions_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :88
void ShareSheet_PageWithTitle_Instructions_Property__Set_fn(ShareSheet_PageWithTitle_Instructions_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("ShareSheet_PageWithTitle_Instructions_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->SetInstructions(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :89
void ShareSheet_PageWithTitle_Instructions_Property__get_SupportsOriginSetter_fn(ShareSheet_PageWithTitle_Instructions_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public ShareSheet_PageWithTitle_Instructions_Property(PageWithTitle obj, Uno.UX.Selector name) [instance] :85
void ShareSheet_PageWithTitle_Instructions_Property::ctor_2(::g::PageWithTitle* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public ShareSheet_PageWithTitle_Instructions_Property New(PageWithTitle obj, Uno.UX.Selector name) [static] :85
ShareSheet_PageWithTitle_Instructions_Property* ShareSheet_PageWithTitle_Instructions_Property::New1(::g::PageWithTitle* obj, ::g::Uno::UX::Selector name)
{
    ShareSheet_PageWithTitle_Instructions_Property* obj1 = (ShareSheet_PageWithTitle_Instructions_Property*)uNew(ShareSheet_PageWithTitle_Instructions_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
