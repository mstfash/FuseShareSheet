// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/iOS/Preview/cache/ux11/ShareSheet.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ShareSheet_FuseControlsTextControl_TextColor_Property;}

namespace g{

// internal sealed class ShareSheet_FuseControlsTextControl_TextColor_Property :19
// {
::g::Uno::UX::Property1_type* ShareSheet_FuseControlsTextControl_TextColor_Property_typeof();
void ShareSheet_FuseControlsTextControl_TextColor_Property__ctor_2_fn(ShareSheet_FuseControlsTextControl_TextColor_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name);
void ShareSheet_FuseControlsTextControl_TextColor_Property__Get_fn(ShareSheet_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::Float4* __retval);
void ShareSheet_FuseControlsTextControl_TextColor_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, ShareSheet_FuseControlsTextControl_TextColor_Property** __retval);
void ShareSheet_FuseControlsTextControl_TextColor_Property__get_Object_fn(ShareSheet_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void ShareSheet_FuseControlsTextControl_TextColor_Property__Set_fn(ShareSheet_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin);
void ShareSheet_FuseControlsTextControl_TextColor_Property__get_SupportsOriginSetter_fn(ShareSheet_FuseControlsTextControl_TextColor_Property* __this, bool* __retval);

struct ShareSheet_FuseControlsTextControl_TextColor_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextControl*> _obj;

    void ctor_2(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
    static ShareSheet_FuseControlsTextControl_TextColor_Property* New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
