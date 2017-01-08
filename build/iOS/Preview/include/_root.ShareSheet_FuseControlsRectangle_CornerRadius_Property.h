// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/iOS/Preview/cache/ux11/ShareSheet.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ShareSheet_FuseControlsRectangle_CornerRadius_Property;}

namespace g{

// internal sealed class ShareSheet_FuseControlsRectangle_CornerRadius_Property :91
// {
::g::Uno::UX::Property1_type* ShareSheet_FuseControlsRectangle_CornerRadius_Property_typeof();
void ShareSheet_FuseControlsRectangle_CornerRadius_Property__ctor_2_fn(ShareSheet_FuseControlsRectangle_CornerRadius_Property* __this, ::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name);
void ShareSheet_FuseControlsRectangle_CornerRadius_Property__Get_fn(ShareSheet_FuseControlsRectangle_CornerRadius_Property* __this, ::g::Uno::Float4* __retval);
void ShareSheet_FuseControlsRectangle_CornerRadius_Property__New1_fn(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name, ShareSheet_FuseControlsRectangle_CornerRadius_Property** __retval);
void ShareSheet_FuseControlsRectangle_CornerRadius_Property__get_Object_fn(ShareSheet_FuseControlsRectangle_CornerRadius_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void ShareSheet_FuseControlsRectangle_CornerRadius_Property__Set_fn(ShareSheet_FuseControlsRectangle_CornerRadius_Property* __this, ::g::Uno::Float4* v, uObject* origin);
void ShareSheet_FuseControlsRectangle_CornerRadius_Property__get_SupportsOriginSetter_fn(ShareSheet_FuseControlsRectangle_CornerRadius_Property* __this, bool* __retval);

struct ShareSheet_FuseControlsRectangle_CornerRadius_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Rectangle*> _obj;

    void ctor_2(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name);
    static ShareSheet_FuseControlsRectangle_CornerRadius_Property* New1(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
