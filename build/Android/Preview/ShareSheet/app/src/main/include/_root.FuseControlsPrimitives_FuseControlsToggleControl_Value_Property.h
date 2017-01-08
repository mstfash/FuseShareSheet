// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/.uno/ux11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct ToggleControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseControlsPrimitives_FuseControlsToggleControl_Value_Property;}

namespace g{

// internal sealed class FuseControlsPrimitives_FuseControlsToggleControl_Value_Property :632
// {
::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsToggleControl_Value_Property_typeof();
void FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsToggleControl_Value_Property* __this, ::g::Fuse::Controls::ToggleControl* obj, ::g::Uno::UX::Selector* name);
void FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__Get_fn(FuseControlsPrimitives_FuseControlsToggleControl_Value_Property* __this, bool* __retval);
void FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__New1_fn(::g::Fuse::Controls::ToggleControl* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsToggleControl_Value_Property** __retval);
void FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsToggleControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__Set_fn(FuseControlsPrimitives_FuseControlsToggleControl_Value_Property* __this, bool* v, uObject* origin);
void FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsToggleControl_Value_Property* __this, bool* __retval);

struct FuseControlsPrimitives_FuseControlsToggleControl_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::ToggleControl*> _obj;

    void ctor_2(::g::Fuse::Controls::ToggleControl* obj, ::g::Uno::UX::Selector name);
    static FuseControlsPrimitives_FuseControlsToggleControl_Value_Property* New1(::g::Fuse::Controls::ToggleControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
