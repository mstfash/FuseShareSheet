// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ICommonViewport.h>
#include <Fuse.IRenderViewport.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct FrustumViewport;}}
namespace g{namespace Fuse{struct InheritViewport;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{

// internal sealed class InheritViewport :3245
// {
struct InheritViewport_type : uType
{
    ::g::Fuse::IRenderViewport interface0;
    ::g::Fuse::ICommonViewport interface1;
};

InheritViewport_type* InheritViewport_typeof();
void InheritViewport__ctor__fn(InheritViewport* __this, uObject* baseView, ::g::Fuse::FrustumViewport* childView, ::g::Fuse::Visual* child);
void InheritViewport__New1_fn(uObject* baseView, ::g::Fuse::FrustumViewport* childView, ::g::Fuse::Visual* child, InheritViewport** __retval);
void InheritViewport__get_PixelSize_fn(InheritViewport* __this, ::g::Uno::Float2* __retval);
void InheritViewport__get_PixelsPerPoint_fn(InheritViewport* __this, float* __retval);
void InheritViewport__get_ProjectionTransform_fn(InheritViewport* __this, ::g::Uno::Float4x4* __retval);
void InheritViewport__get_Size_fn(InheritViewport* __this, ::g::Uno::Float2* __retval);
void InheritViewport__get_ViewOrigin_fn(InheritViewport* __this, ::g::Uno::Float3* __retval);
void InheritViewport__get_ViewProjectionTransform_fn(InheritViewport* __this, ::g::Uno::Float4x4* __retval);
void InheritViewport__get_ViewRange_fn(InheritViewport* __this, ::g::Uno::Float2* __retval);
void InheritViewport__get_ViewTransform_fn(InheritViewport* __this, ::g::Uno::Float4x4* __retval);

struct InheritViewport : uObject
{
    uStrong<uObject*> _baseView;
    uStrong< ::g::Fuse::Visual*> _child;
    uStrong< ::g::Fuse::FrustumViewport*> _childView;

    void ctor_(uObject* baseView, ::g::Fuse::FrustumViewport* childView, ::g::Fuse::Visual* child);
    ::g::Uno::Float2 PixelSize();
    float PixelsPerPoint();
    ::g::Uno::Float4x4 ProjectionTransform();
    ::g::Uno::Float2 Size();
    ::g::Uno::Float3 ViewOrigin();
    ::g::Uno::Float4x4 ViewProjectionTransform();
    ::g::Uno::Float2 ViewRange();
    ::g::Uno::Float4x4 ViewTransform();
    static InheritViewport* New1(uObject* baseView, ::g::Fuse::FrustumViewport* childView, ::g::Fuse::Visual* child);
};
// }

}} // ::g::Fuse
