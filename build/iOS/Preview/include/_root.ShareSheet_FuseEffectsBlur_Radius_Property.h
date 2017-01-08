// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/iOS/Preview/cache/ux11/ShareSheet.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Effects{struct Blur;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ShareSheet_FuseEffectsBlur_Radius_Property;}

namespace g{

// internal sealed class ShareSheet_FuseEffectsBlur_Radius_Property :109
// {
::g::Uno::UX::Property1_type* ShareSheet_FuseEffectsBlur_Radius_Property_typeof();
void ShareSheet_FuseEffectsBlur_Radius_Property__ctor_2_fn(ShareSheet_FuseEffectsBlur_Radius_Property* __this, ::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector* name);
void ShareSheet_FuseEffectsBlur_Radius_Property__Get_fn(ShareSheet_FuseEffectsBlur_Radius_Property* __this, float* __retval);
void ShareSheet_FuseEffectsBlur_Radius_Property__New1_fn(::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector* name, ShareSheet_FuseEffectsBlur_Radius_Property** __retval);
void ShareSheet_FuseEffectsBlur_Radius_Property__get_Object_fn(ShareSheet_FuseEffectsBlur_Radius_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void ShareSheet_FuseEffectsBlur_Radius_Property__Set_fn(ShareSheet_FuseEffectsBlur_Radius_Property* __this, float* v, uObject* origin);
void ShareSheet_FuseEffectsBlur_Radius_Property__get_SupportsOriginSetter_fn(ShareSheet_FuseEffectsBlur_Radius_Property* __this, bool* __retval);

struct ShareSheet_FuseEffectsBlur_Radius_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Effects::Blur*> _obj;

    void ctor_2(::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector name);
    static ShareSheet_FuseEffectsBlur_Radius_Property* New1(::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
