// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/.uno/ux11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Brush.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Shape;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseControlsPrimitives_FuseControlsShape_Fill_Property;}

namespace g{

// internal sealed class FuseControlsPrimitives_FuseControlsShape_Fill_Property :659
// {
::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsShape_Fill_Property_typeof();
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name);
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__Get_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Fuse::Drawing::Brush** __retval);
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsShape_Fill_Property** __retval);
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__Set_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Fuse::Drawing::Brush* v, uObject* origin);
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, bool* __retval);

struct FuseControlsPrimitives_FuseControlsShape_Fill_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Shape*> _obj;

    void ctor_2(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name);
    static FuseControlsPrimitives_FuseControlsShape_Fill_Property* New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
