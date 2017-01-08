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
namespace g{namespace Fuse{namespace Effects{struct Desaturate;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Effects{

// public sealed class Desaturate :141
// {
::g::Fuse::Effects::BasicEffect_type* Desaturate_typeof();
void Desaturate__ctor_4_fn(Desaturate* __this);
void Desaturate__get_Amount_fn(Desaturate* __this, float* __retval);
void Desaturate__set_Amount_fn(Desaturate* __this, float* value);
void Desaturate__init_DrawCalls_fn(Desaturate* __this);
void Desaturate__New2_fn(Desaturate** __retval);
void Desaturate__OnRender_fn(Desaturate* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect);

struct Desaturate : ::g::Fuse::Effects::BasicEffect
{
    float _amount;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_bd5b5311;
    ::g::Uno::Float4x4 OnRender_LocalTransform_bd5b5311_4_9_2;
    ::g::Uno::Float4x4 OnRender_LocalTransform_bd5b5311_4_9_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_bd5b5311_7_2_1;

    void ctor_4();
    float Amount();
    void Amount(float value);
    void init_DrawCalls();
    static Desaturate* New2();
};
// }

}}} // ::g::Fuse::Effects
