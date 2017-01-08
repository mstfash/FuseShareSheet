// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/iOS/Preview/cache/ux11/ShareSheet.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct PageWithTitle;}
namespace g{struct ShareSheet_PageWithTitle_HeaderTextColor_Property;}

namespace g{

// internal sealed class ShareSheet_PageWithTitle_HeaderTextColor_Property :73
// {
::g::Uno::UX::Property1_type* ShareSheet_PageWithTitle_HeaderTextColor_Property_typeof();
void ShareSheet_PageWithTitle_HeaderTextColor_Property__ctor_2_fn(ShareSheet_PageWithTitle_HeaderTextColor_Property* __this, ::g::PageWithTitle* obj, ::g::Uno::UX::Selector* name);
void ShareSheet_PageWithTitle_HeaderTextColor_Property__Get_fn(ShareSheet_PageWithTitle_HeaderTextColor_Property* __this, ::g::Uno::Float4* __retval);
void ShareSheet_PageWithTitle_HeaderTextColor_Property__New1_fn(::g::PageWithTitle* obj, ::g::Uno::UX::Selector* name, ShareSheet_PageWithTitle_HeaderTextColor_Property** __retval);
void ShareSheet_PageWithTitle_HeaderTextColor_Property__get_Object_fn(ShareSheet_PageWithTitle_HeaderTextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void ShareSheet_PageWithTitle_HeaderTextColor_Property__Set_fn(ShareSheet_PageWithTitle_HeaderTextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin);
void ShareSheet_PageWithTitle_HeaderTextColor_Property__get_SupportsOriginSetter_fn(ShareSheet_PageWithTitle_HeaderTextColor_Property* __this, bool* __retval);

struct ShareSheet_PageWithTitle_HeaderTextColor_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::PageWithTitle*> _obj;

    void ctor_2(::g::PageWithTitle* obj, ::g::Uno::UX::Selector name);
    static ShareSheet_PageWithTitle_HeaderTextColor_Property* New1(::g::PageWithTitle* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
