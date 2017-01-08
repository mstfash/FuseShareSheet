// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Effects/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Effects.BasicEffect.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4x4.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Effects{struct Blur;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Effects{

// public sealed class Blur :64
// {
::g::Fuse::Effects::BasicEffect_type* Blur_typeof();
void Blur__ctor_4_fn(Blur* __this);
void Blur__init_DrawCalls_fn(Blur* __this);
void Blur__ModifyRenderBounds_fn(Blur* __this, ::g::Fuse::VisualBounds* inBounds, ::g::Fuse::VisualBounds** __retval);
void Blur__New2_fn(Blur** __retval);
void Blur__OnRender_fn(Blur* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect);
void Blur__get_Padding_fn(Blur* __this, float* __retval);
void Blur__get_Radius_fn(Blur* __this, float* __retval);
void Blur__set_Radius_fn(Blur* __this, float* value);
void Blur__get_Sigma_fn(Blur* __this, float* __retval);

struct Blur : ::g::Fuse::Effects::BasicEffect
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_7a2fdace;
    float _radius;
    ::g::Uno::Float4x4 OnRender_LocalTransform_7a2fdace_4_9_2;
    ::g::Uno::Float4x4 OnRender_LocalTransform_7a2fdace_4_9_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_7a2fdace_7_2_1;

    void ctor_4();
    void init_DrawCalls();
    float Padding();
    float Radius();
    void Radius(float value);
    float Sigma();
    static Blur* New2();
};
// }

}}} // ::g::Fuse::Effects
