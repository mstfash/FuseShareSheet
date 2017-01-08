// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/iOS/Preview/cache/ux11/ShareSheet.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ShareSheet_FuseControlsPage_Title_Property;}

namespace g{

// internal sealed class ShareSheet_FuseControlsPage_Title_Property :64
// {
::g::Uno::UX::Property1_type* ShareSheet_FuseControlsPage_Title_Property_typeof();
void ShareSheet_FuseControlsPage_Title_Property__ctor_2_fn(ShareSheet_FuseControlsPage_Title_Property* __this, ::g::Fuse::Controls::Page* obj, ::g::Uno::UX::Selector* name);
void ShareSheet_FuseControlsPage_Title_Property__Get_fn(ShareSheet_FuseControlsPage_Title_Property* __this, uString** __retval);
void ShareSheet_FuseControlsPage_Title_Property__New1_fn(::g::Fuse::Controls::Page* obj, ::g::Uno::UX::Selector* name, ShareSheet_FuseControlsPage_Title_Property** __retval);
void ShareSheet_FuseControlsPage_Title_Property__get_Object_fn(ShareSheet_FuseControlsPage_Title_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void ShareSheet_FuseControlsPage_Title_Property__Set_fn(ShareSheet_FuseControlsPage_Title_Property* __this, uString* v, uObject* origin);
void ShareSheet_FuseControlsPage_Title_Property__get_SupportsOriginSetter_fn(ShareSheet_FuseControlsPage_Title_Property* __this, bool* __retval);

struct ShareSheet_FuseControlsPage_Title_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Page*> _obj;

    void ctor_2(::g::Fuse::Controls::Page* obj, ::g::Uno::UX::Selector name);
    static ShareSheet_FuseControlsPage_Title_Property* New1(::g::Fuse::Controls::Page* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
