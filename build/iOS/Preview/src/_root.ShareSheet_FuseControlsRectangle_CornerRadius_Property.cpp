// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/iOS/Preview/cache/ux11/ShareSheet.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ShareSheet_FuseControlsRectangle_CornerRadius_Property.h>
#include <Fuse.Controls.Rectangle.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class ShareSheet_FuseControlsRectangle_CornerRadius_Property :91
// {
static void ShareSheet_FuseControlsRectangle_CornerRadius_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::ShareSheet_FuseControlsRectangle_CornerRadius_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* ShareSheet_FuseControlsRectangle_CornerRadius_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ShareSheet_FuseControlsRectangle_CornerRadius_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("ShareSheet_FuseControlsRectangle_CornerRadius_Property", options);
    type->fp_build_ = ShareSheet_FuseControlsRectangle_CornerRadius_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))ShareSheet_FuseControlsRectangle_CornerRadius_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))ShareSheet_FuseControlsRectangle_CornerRadius_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))ShareSheet_FuseControlsRectangle_CornerRadius_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))ShareSheet_FuseControlsRectangle_CornerRadius_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public ShareSheet_FuseControlsRectangle_CornerRadius_Property(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) :94
void ShareSheet_FuseControlsRectangle_CornerRadius_Property__ctor_2_fn(ShareSheet_FuseControlsRectangle_CornerRadius_Property* __this, ::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :96
void ShareSheet_FuseControlsRectangle_CornerRadius_Property__Get_fn(ShareSheet_FuseControlsRectangle_CornerRadius_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("ShareSheet_FuseControlsRectangle_CornerRadius_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->CornerRadius(), void();
}

// public ShareSheet_FuseControlsRectangle_CornerRadius_Property New(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) :94
void ShareSheet_FuseControlsRectangle_CornerRadius_Property__New1_fn(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name, ShareSheet_FuseControlsRectangle_CornerRadius_Property** __retval)
{
    *__retval = ShareSheet_FuseControlsRectangle_CornerRadius_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :95
void ShareSheet_FuseControlsRectangle_CornerRadius_Property__get_Object_fn(ShareSheet_FuseControlsRectangle_CornerRadius_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :97
void ShareSheet_FuseControlsRectangle_CornerRadius_Property__Set_fn(ShareSheet_FuseControlsRectangle_CornerRadius_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("ShareSheet_FuseControlsRectangle_CornerRadius_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetCornerRadius(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :98
void ShareSheet_FuseControlsRectangle_CornerRadius_Property__get_SupportsOriginSetter_fn(ShareSheet_FuseControlsRectangle_CornerRadius_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public ShareSheet_FuseControlsRectangle_CornerRadius_Property(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) [instance] :94
void ShareSheet_FuseControlsRectangle_CornerRadius_Property::ctor_2(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public ShareSheet_FuseControlsRectangle_CornerRadius_Property New(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) [static] :94
ShareSheet_FuseControlsRectangle_CornerRadius_Property* ShareSheet_FuseControlsRectangle_CornerRadius_Property::New1(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name)
{
    ShareSheet_FuseControlsRectangle_CornerRadius_Property* obj1 = (ShareSheet_FuseControlsRectangle_CornerRadius_Property*)uNew(ShareSheet_FuseControlsRectangle_CornerRadius_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
