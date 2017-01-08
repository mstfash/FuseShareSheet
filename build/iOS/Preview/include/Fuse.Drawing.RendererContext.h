// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/rendering/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct RendererContext;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class RendererContext :310
// {
uType* RendererContext_typeof();
void RendererContext__ctor__fn(RendererContext* __this);
void RendererContext__get_CanvasSize_fn(RendererContext* __this, ::g::Uno::Float2* __retval);
void RendererContext__set_CanvasSize_fn(RendererContext* __this, ::g::Uno::Float2* value);
void RendererContext__get_CullFace_fn(RendererContext* __this, int* __retval);
void RendererContext__set_CullFace_fn(RendererContext* __this, int* value);
void RendererContext__get_Density_fn(RendererContext* __this, float* __retval);
void RendererContext__set_Density_fn(RendererContext* __this, float* value);
void RendererContext__New1_fn(RendererContext** __retval);
void RendererContext__get_Transform_fn(RendererContext* __this, ::g::Uno::Float4x4* __retval);
void RendererContext__set_Transform_fn(RendererContext* __this, ::g::Uno::Float4x4* value);

struct RendererContext : uObject
{
    ::g::Uno::Float2 _CanvasSize;
    int _CullFace;
    float _Density;
    ::g::Uno::Float4x4 _Transform;

    void ctor_();
    ::g::Uno::Float2 CanvasSize();
    void CanvasSize(::g::Uno::Float2 value);
    int CullFace();
    void CullFace(int value);
    float Density();
    void Density(float value);
    ::g::Uno::Float4x4 Transform();
    void Transform(::g::Uno::Float4x4 value);
    static RendererContext* New1();
};
// }

}}} // ::g::Fuse::Drawing
