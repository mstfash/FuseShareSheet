// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/iOS/Preview/cache/ux11/ShareSheet.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ShareSheet_FuseReactiveEach_Items_Property;}

namespace g{

// internal sealed class ShareSheet_FuseReactiveEach_Items_Property :28
// {
::g::Uno::UX::Property1_type* ShareSheet_FuseReactiveEach_Items_Property_typeof();
void ShareSheet_FuseReactiveEach_Items_Property__ctor_2_fn(ShareSheet_FuseReactiveEach_Items_Property* __this, ::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name);
void ShareSheet_FuseReactiveEach_Items_Property__Get_fn(ShareSheet_FuseReactiveEach_Items_Property* __this, uObject** __retval);
void ShareSheet_FuseReactiveEach_Items_Property__New1_fn(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name, ShareSheet_FuseReactiveEach_Items_Property** __retval);
void ShareSheet_FuseReactiveEach_Items_Property__get_Object_fn(ShareSheet_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void ShareSheet_FuseReactiveEach_Items_Property__Set_fn(ShareSheet_FuseReactiveEach_Items_Property* __this, uObject* v, uObject* origin);
void ShareSheet_FuseReactiveEach_Items_Property__get_SupportsOriginSetter_fn(ShareSheet_FuseReactiveEach_Items_Property* __this, bool* __retval);

struct ShareSheet_FuseReactiveEach_Items_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Reactive::Each*> _obj;

    void ctor_2(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
    static ShareSheet_FuseReactiveEach_Items_Property* New1(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
