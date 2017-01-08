// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.42.4/drawing/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Elements{namespace Internal{struct ElementDraw;}}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Elements{
namespace Internal{

// internal sealed class ElementDraw :308
// {
uType* ElementDraw_typeof();
void ElementDraw__ctor__fn(ElementDraw* __this);
void ElementDraw__init_DrawCalls_fn(ElementDraw* __this);
void ElementDraw__New1_fn(ElementDraw** __retval);
void ElementDraw__Rectangle_fn(ElementDraw* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* offset, ::g::Uno::Float2* size, ::g::Uno::Float4* color);

struct ElementDraw : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_ecf1769;
    static uSStrong<ElementDraw*> Impl_;
    static uSStrong<ElementDraw*>& Impl() { return ElementDraw_typeof()->Init(), Impl_; }
    ::g::Uno::Float4x4 Rectangle_LocalTransform_ecf1769_3_9_2;
    ::g::Uno::Float4x4 Rectangle_LocalTransform_ecf1769_3_9_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Rectangle_VertexData_ecf1769_6_2_1;

    void ctor_();
    void init_DrawCalls();
    void Rectangle(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2 offset, ::g::Uno::Float2 size, ::g::Uno::Float4 color);
    static ElementDraw* New1();
};
// }

}}}} // ::g::Fuse::Elements::Internal
