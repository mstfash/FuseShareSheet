// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/iOS/Preview/cache/ux11/ShareSheet.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ShareSheet_FuseElementsElement_Height_Property.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class ShareSheet_FuseElementsElement_Height_Property :46
// {
static void ShareSheet_FuseElementsElement_Height_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::ShareSheet_FuseElementsElement_Height_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* ShareSheet_FuseElementsElement_Height_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ShareSheet_FuseElementsElement_Height_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("ShareSheet_FuseElementsElement_Height_Property", options);
    type->fp_build_ = ShareSheet_FuseElementsElement_Height_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))ShareSheet_FuseElementsElement_Height_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))ShareSheet_FuseElementsElement_Height_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))ShareSheet_FuseElementsElement_Height_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))ShareSheet_FuseElementsElement_Height_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public ShareSheet_FuseElementsElement_Height_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :49
void ShareSheet_FuseElementsElement_Height_Property__ctor_2_fn(ShareSheet_FuseElementsElement_Height_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Uno.UX.Size Get() :51
void ShareSheet_FuseElementsElement_Height_Property__Get_fn(ShareSheet_FuseElementsElement_Height_Property* __this, ::g::Uno::UX::Size* __retval)
{
    uStackFrame __("ShareSheet_FuseElementsElement_Height_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Height(), void();
}

// public ShareSheet_FuseElementsElement_Height_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :49
void ShareSheet_FuseElementsElement_Height_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, ShareSheet_FuseElementsElement_Height_Property** __retval)
{
    *__retval = ShareSheet_FuseElementsElement_Height_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :50
void ShareSheet_FuseElementsElement_Height_Property__get_Object_fn(ShareSheet_FuseElementsElement_Height_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.Size v, Uno.UX.IPropertyListener origin) :52
void ShareSheet_FuseElementsElement_Height_Property__Set_fn(ShareSheet_FuseElementsElement_Height_Property* __this, ::g::Uno::UX::Size* v, uObject* origin)
{
    uStackFrame __("ShareSheet_FuseElementsElement_Height_Property", "Set(Uno.UX.Size,Uno.UX.IPropertyListener)");
    ::g::Uno::UX::Size v_ = *v;
    uPtr(__this->_obj)->Height(v_);
}

// public override sealed bool get_SupportsOriginSetter() :53
void ShareSheet_FuseElementsElement_Height_Property__get_SupportsOriginSetter_fn(ShareSheet_FuseElementsElement_Height_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public ShareSheet_FuseElementsElement_Height_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :49
void ShareSheet_FuseElementsElement_Height_Property::ctor_2(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public ShareSheet_FuseElementsElement_Height_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :49
ShareSheet_FuseElementsElement_Height_Property* ShareSheet_FuseElementsElement_Height_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ShareSheet_FuseElementsElement_Height_Property* obj1 = (ShareSheet_FuseElementsElement_Height_Property*)uNew(ShareSheet_FuseElementsElement_Height_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
