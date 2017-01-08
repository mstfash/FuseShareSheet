// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/iOS/Preview/cache/ux11/ShareSheet.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ShareSheet_FuseControlsPanel_Color_Property.h>
#include <Fuse.Controls.Panel.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class ShareSheet_FuseControlsPanel_Color_Property :1
// {
static void ShareSheet_FuseControlsPanel_Color_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::ShareSheet_FuseControlsPanel_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* ShareSheet_FuseControlsPanel_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ShareSheet_FuseControlsPanel_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("ShareSheet_FuseControlsPanel_Color_Property", options);
    type->fp_build_ = ShareSheet_FuseControlsPanel_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))ShareSheet_FuseControlsPanel_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))ShareSheet_FuseControlsPanel_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))ShareSheet_FuseControlsPanel_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))ShareSheet_FuseControlsPanel_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public ShareSheet_FuseControlsPanel_Color_Property(Fuse.Controls.Panel obj, Uno.UX.Selector name) :4
void ShareSheet_FuseControlsPanel_Color_Property__ctor_2_fn(ShareSheet_FuseControlsPanel_Color_Property* __this, ::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :6
void ShareSheet_FuseControlsPanel_Color_Property__Get_fn(ShareSheet_FuseControlsPanel_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("ShareSheet_FuseControlsPanel_Color_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public ShareSheet_FuseControlsPanel_Color_Property New(Fuse.Controls.Panel obj, Uno.UX.Selector name) :4
void ShareSheet_FuseControlsPanel_Color_Property__New1_fn(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name, ShareSheet_FuseControlsPanel_Color_Property** __retval)
{
    *__retval = ShareSheet_FuseControlsPanel_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :5
void ShareSheet_FuseControlsPanel_Color_Property__get_Object_fn(ShareSheet_FuseControlsPanel_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :7
void ShareSheet_FuseControlsPanel_Color_Property__Set_fn(ShareSheet_FuseControlsPanel_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("ShareSheet_FuseControlsPanel_Color_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :8
void ShareSheet_FuseControlsPanel_Color_Property__get_SupportsOriginSetter_fn(ShareSheet_FuseControlsPanel_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public ShareSheet_FuseControlsPanel_Color_Property(Fuse.Controls.Panel obj, Uno.UX.Selector name) [instance] :4
void ShareSheet_FuseControlsPanel_Color_Property::ctor_2(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public ShareSheet_FuseControlsPanel_Color_Property New(Fuse.Controls.Panel obj, Uno.UX.Selector name) [static] :4
ShareSheet_FuseControlsPanel_Color_Property* ShareSheet_FuseControlsPanel_Color_Property::New1(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name)
{
    ShareSheet_FuseControlsPanel_Color_Property* obj1 = (ShareSheet_FuseControlsPanel_Color_Property*)uNew(ShareSheet_FuseControlsPanel_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
