// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/.uno/ux11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property;}

namespace g{

// internal sealed class FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property :614
// {
::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof();
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__ctor_2_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name);
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval);
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__New1_fn(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property** __retval);
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* v, uObject* origin);
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval);

struct FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Gestures::SwipeGesture*> _obj;

    void ctor_2(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name);
    static FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* New1(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
