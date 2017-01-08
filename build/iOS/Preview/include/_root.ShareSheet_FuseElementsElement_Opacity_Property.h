// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/iOS/Preview/cache/ux11/ShareSheet.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ShareSheet_FuseElementsElement_Opacity_Property;}

namespace g{

// internal sealed class ShareSheet_FuseElementsElement_Opacity_Property :100
// {
::g::Uno::UX::Property1_type* ShareSheet_FuseElementsElement_Opacity_Property_typeof();
void ShareSheet_FuseElementsElement_Opacity_Property__ctor_2_fn(ShareSheet_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void ShareSheet_FuseElementsElement_Opacity_Property__Get_fn(ShareSheet_FuseElementsElement_Opacity_Property* __this, float* __retval);
void ShareSheet_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, ShareSheet_FuseElementsElement_Opacity_Property** __retval);
void ShareSheet_FuseElementsElement_Opacity_Property__get_Object_fn(ShareSheet_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void ShareSheet_FuseElementsElement_Opacity_Property__Set_fn(ShareSheet_FuseElementsElement_Opacity_Property* __this, float* v, uObject* origin);
void ShareSheet_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(ShareSheet_FuseElementsElement_Opacity_Property* __this, bool* __retval);

struct ShareSheet_FuseElementsElement_Opacity_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_2(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static ShareSheet_FuseElementsElement_Opacity_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
