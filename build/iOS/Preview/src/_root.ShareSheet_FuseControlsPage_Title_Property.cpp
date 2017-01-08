// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/iOS/Preview/cache/ux11/ShareSheet.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ShareSheet_FuseControlsPage_Title_Property.h>
#include <Fuse.Controls.Page.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class ShareSheet_FuseControlsPage_Title_Property :64
// {
static void ShareSheet_FuseControlsPage_Title_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::ShareSheet_FuseControlsPage_Title_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* ShareSheet_FuseControlsPage_Title_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ShareSheet_FuseControlsPage_Title_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("ShareSheet_FuseControlsPage_Title_Property", options);
    type->fp_build_ = ShareSheet_FuseControlsPage_Title_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))ShareSheet_FuseControlsPage_Title_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))ShareSheet_FuseControlsPage_Title_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))ShareSheet_FuseControlsPage_Title_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))ShareSheet_FuseControlsPage_Title_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public ShareSheet_FuseControlsPage_Title_Property(Fuse.Controls.Page obj, Uno.UX.Selector name) :67
void ShareSheet_FuseControlsPage_Title_Property__ctor_2_fn(ShareSheet_FuseControlsPage_Title_Property* __this, ::g::Fuse::Controls::Page* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :69
void ShareSheet_FuseControlsPage_Title_Property__Get_fn(ShareSheet_FuseControlsPage_Title_Property* __this, uString** __retval)
{
    uStackFrame __("ShareSheet_FuseControlsPage_Title_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Title(), void();
}

// public ShareSheet_FuseControlsPage_Title_Property New(Fuse.Controls.Page obj, Uno.UX.Selector name) :67
void ShareSheet_FuseControlsPage_Title_Property__New1_fn(::g::Fuse::Controls::Page* obj, ::g::Uno::UX::Selector* name, ShareSheet_FuseControlsPage_Title_Property** __retval)
{
    *__retval = ShareSheet_FuseControlsPage_Title_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :68
void ShareSheet_FuseControlsPage_Title_Property__get_Object_fn(ShareSheet_FuseControlsPage_Title_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :70
void ShareSheet_FuseControlsPage_Title_Property__Set_fn(ShareSheet_FuseControlsPage_Title_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("ShareSheet_FuseControlsPage_Title_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->Title(v);
}

// public override sealed bool get_SupportsOriginSetter() :71
void ShareSheet_FuseControlsPage_Title_Property__get_SupportsOriginSetter_fn(ShareSheet_FuseControlsPage_Title_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public ShareSheet_FuseControlsPage_Title_Property(Fuse.Controls.Page obj, Uno.UX.Selector name) [instance] :67
void ShareSheet_FuseControlsPage_Title_Property::ctor_2(::g::Fuse::Controls::Page* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public ShareSheet_FuseControlsPage_Title_Property New(Fuse.Controls.Page obj, Uno.UX.Selector name) [static] :67
ShareSheet_FuseControlsPage_Title_Property* ShareSheet_FuseControlsPage_Title_Property::New1(::g::Fuse::Controls::Page* obj, ::g::Uno::UX::Selector name)
{
    ShareSheet_FuseControlsPage_Title_Property* obj1 = (ShareSheet_FuseControlsPage_Title_Property*)uNew(ShareSheet_FuseControlsPage_Title_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
