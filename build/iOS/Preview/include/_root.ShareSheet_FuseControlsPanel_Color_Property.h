// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/iOS/Preview/cache/ux11/ShareSheet.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ShareSheet_FuseControlsPanel_Color_Property;}

namespace g{

// internal sealed class ShareSheet_FuseControlsPanel_Color_Property :1
// {
::g::Uno::UX::Property1_type* ShareSheet_FuseControlsPanel_Color_Property_typeof();
void ShareSheet_FuseControlsPanel_Color_Property__ctor_2_fn(ShareSheet_FuseControlsPanel_Color_Property* __this, ::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name);
void ShareSheet_FuseControlsPanel_Color_Property__Get_fn(ShareSheet_FuseControlsPanel_Color_Property* __this, ::g::Uno::Float4* __retval);
void ShareSheet_FuseControlsPanel_Color_Property__New1_fn(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name, ShareSheet_FuseControlsPanel_Color_Property** __retval);
void ShareSheet_FuseControlsPanel_Color_Property__get_Object_fn(ShareSheet_FuseControlsPanel_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void ShareSheet_FuseControlsPanel_Color_Property__Set_fn(ShareSheet_FuseControlsPanel_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin);
void ShareSheet_FuseControlsPanel_Color_Property__get_SupportsOriginSetter_fn(ShareSheet_FuseControlsPanel_Color_Property* __this, bool* __retval);

struct ShareSheet_FuseControlsPanel_Color_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Panel*> _obj;

    void ctor_2(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name);
    static ShareSheet_FuseControlsPanel_Color_Property* New1(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
