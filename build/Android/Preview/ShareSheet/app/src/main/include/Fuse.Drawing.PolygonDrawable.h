// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct PolygonDrawable;}}}
namespace g{namespace Fuse{namespace Drawing{struct RendererContext;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class PolygonDrawable :416
// {
uType* PolygonDrawable_typeof();
void PolygonDrawable__ctor__fn(PolygonDrawable* __this, uArray* vertices);
void PolygonDrawable__CalcBounds_fn(PolygonDrawable* __this, ::g::Uno::Rect* __retval);
void PolygonDrawable__Dispose_fn(PolygonDrawable* __this);
void PolygonDrawable__Draw_fn(PolygonDrawable* __this, ::g::Fuse::Drawing::Brush* f, ::g::Fuse::Drawing::RendererContext* ctx);
void PolygonDrawable__free_DrawCalls_fn(PolygonDrawable* __this);
void PolygonDrawable__init_DrawCalls_fn(PolygonDrawable* __this);
void PolygonDrawable__Intersects_fn(PolygonDrawable* __this, ::g::Uno::Float2* p, bool* __retval);
void PolygonDrawable__New1_fn(uArray* vertices, PolygonDrawable** __retval);

struct PolygonDrawable : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_76ce9793;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_76ce97f4;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_76ce9836;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> _vbo;
    uStrong<uArray*> _vertices;
    int Draw_BlendDstAlpha_76ce9859_7_7_8;
    int Draw_BlendDstRgb_76ce9859_7_5_7;
    int Draw_BlendSrcAlpha_76ce9859_7_6_6;
    int Draw_BlendSrcRgb_76ce9859_7_4_5;

    void ctor_(uArray* vertices);
    ::g::Uno::Rect CalcBounds();
    void Dispose();
    void Draw(::g::Fuse::Drawing::Brush* f, ::g::Fuse::Drawing::RendererContext* ctx);
    void free_DrawCalls();
    void init_DrawCalls();
    bool Intersects(::g::Uno::Float2 p);
    static PolygonDrawable* New1(uArray* vertices);
};
// }

}}} // ::g::Fuse::Drawing
