// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseElements_bundle.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Internal.ElementDraw.h>
#include <Fuse.Elements.Internal.Scale9Rectangle.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Matrix.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.UShort.h>
static uType* TYPES[4];

namespace g{
namespace Fuse{
namespace Elements{
namespace Internal{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.42.4/drawing/$.uno
// ------------------------------------------------------------------------------------------------

// internal sealed class ElementDraw :308
// {
// static ElementDraw() :308
static void ElementDraw__cctor__fn(uType* __type)
{
    ElementDraw::Impl_ = ElementDraw::New1();
}

static void ElementDraw_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::IRenderViewport_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Elements::Internal::ElementDraw, _draw_ecf1769), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Elements::Internal::ElementDraw, Rectangle_LocalTransform_ecf1769_3_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Elements::Internal::ElementDraw, Rectangle_LocalTransform_ecf1769_3_9_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Elements::Internal::ElementDraw, Rectangle_VertexData_ecf1769_6_2_1), 0,
        type, (uintptr_t)&::g::Fuse::Elements::Internal::ElementDraw::Impl_, uFieldFlagsStatic);
}

uType* ElementDraw_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ElementDraw);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.Internal.ElementDraw", options);
    type->fp_build_ = ElementDraw_build;
    type->fp_ctor_ = (void*)ElementDraw__New1_fn;
    type->fp_cctor_ = ElementDraw__cctor__fn;
    return type;
}

// public generated ElementDraw() :308
void ElementDraw__ctor__fn(ElementDraw* __this)
{
    __this->ctor_();
}

// private generated void init_DrawCalls() :308
void ElementDraw__init_DrawCalls_fn(ElementDraw* __this)
{
    __this->init_DrawCalls();
}

// public generated ElementDraw New() :308
void ElementDraw__New1_fn(ElementDraw** __retval)
{
    *__retval = ElementDraw::New1();
}

// public void Rectangle(Fuse.DrawContext dc, Fuse.Elements.Element element, float2 offset, float2 size, float4 color) :312
void ElementDraw__Rectangle_fn(ElementDraw* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* offset, ::g::Uno::Float2* size, ::g::Uno::Float4* color)
{
    __this->Rectangle(dc, element, *offset, *size, *color);
}

uSStrong<ElementDraw*> ElementDraw::Impl_;

// public generated ElementDraw() [instance] :308
void ElementDraw::ctor_()
{
    init_DrawCalls();
}

// private generated void init_DrawCalls() [instance] :308
void ElementDraw::init_DrawCalls()
{
    uStackFrame __("Fuse.Elements.Internal.ElementDraw", "init_DrawCalls()");
    Rectangle_VertexData_ecf1769_6_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[0/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f))), 0);
    Rectangle_LocalTransform_ecf1769_3_9_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    Rectangle_LocalTransform_ecf1769_3_9_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    _draw_ecf1769 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseElements_bundle::ElementDraw1f583284());
}

// public void Rectangle(Fuse.DrawContext dc, Fuse.Elements.Element element, float2 offset, float2 size, float4 color) [instance] :312
void ElementDraw::Rectangle(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2 offset, ::g::Uno::Float2 size, ::g::Uno::Float4 color)
{
    uStackFrame __("Fuse.Elements.Internal.ElementDraw", "Rectangle(Fuse.DrawContext,Fuse.Elements.Element,float2,float2,float4)");
    ::g::Uno::Float4x4 LocalTransform_ecf1769_3_9_4 = ::g::Uno::Matrix::Mul10(Rectangle_LocalTransform_ecf1769_3_9_2, ::g::Uno::Matrix::Scaling1(size.X, size.Y, 1.0f), Rectangle_LocalTransform_ecf1769_3_9_3, ::g::Uno::Matrix::Translation(offset.X, offset.Y, 0.0f));
    _draw_ecf1769.BlendEnabled(true);
    _draw_ecf1769.DepthTestEnabled(false);
    _draw_ecf1769.CullFace(uPtr(dc)->CullFace());
    _draw_ecf1769.BlendSrcRgb(2);
    _draw_ecf1769.BlendDstRgb(3);
    _draw_ecf1769.BlendDstAlpha(3);
    _draw_ecf1769.Use();
    _draw_ecf1769.Attrib1(0, 2, Rectangle_VertexData_ecf1769_6_2_1, 8, 0);
    _draw_ecf1769.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IRenderViewport*/])));
    _draw_ecf1769.Uniform10(2, color);
    _draw_ecf1769.Uniform12(3, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_ecf1769_3_9_4, uPtr(element)->WorldTransform()) : LocalTransform_ecf1769_3_9_4);
    _draw_ecf1769.DrawArrays(6);
}

// public generated ElementDraw New() [static] :308
ElementDraw* ElementDraw::New1()
{
    ElementDraw* obj1 = (ElementDraw*)uNew(ElementDraw_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.42.4/drawing/$.uno
// ------------------------------------------------------------------------------------------------

// internal sealed class Scale9Rectangle :333
// {
// static Scale9Rectangle() :333
static void Scale9Rectangle__cctor__fn(uType* __type)
{
    Scale9Rectangle::Impl_ = Scale9Rectangle::New1();
}

static void Scale9Rectangle_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::IRenderViewport_typeof();
    ::TYPES[2] = ::g::Uno::UShort_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Float3_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Elements::Internal::Scale9Rectangle, _draw_42808b82), 0,
        ::TYPES[2/*ushort[]*/], offsetof(::g::Fuse::Elements::Internal::Scale9Rectangle, Draw_indices_42808b82_1_2_13), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Elements::Internal::Scale9Rectangle, Draw_xv_42808b82_1_3_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Elements::Internal::Scale9Rectangle, Draw_xv_42808b82_1_3_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Elements::Internal::Scale9Rectangle, Draw_yv_42808b82_1_4_6), 0,
        type, (uintptr_t)&::g::Fuse::Elements::Internal::Scale9Rectangle::Impl_, uFieldFlagsStatic);
}

uType* Scale9Rectangle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Scale9Rectangle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.Internal.Scale9Rectangle", options);
    type->fp_build_ = Scale9Rectangle_build;
    type->fp_ctor_ = (void*)Scale9Rectangle__New1_fn;
    type->fp_cctor_ = Scale9Rectangle__cctor__fn;
    return type;
}

// public generated Scale9Rectangle() :333
void Scale9Rectangle__ctor__fn(Scale9Rectangle* __this)
{
    __this->ctor_();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual element, float2 size, float2 scaleTextureSize, texture2D tex, float4 color, float4 margin) :337
void Scale9Rectangle__Draw_fn(Scale9Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2* size, ::g::Uno::Float2* scaleTextureSize, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float4* color, ::g::Uno::Float4* margin)
{
    __this->Draw(dc, element, *size, *scaleTextureSize, tex, *color, *margin);
}

// private generated void init_DrawCalls() :333
void Scale9Rectangle__init_DrawCalls_fn(Scale9Rectangle* __this)
{
    __this->init_DrawCalls();
}

// public generated Scale9Rectangle New() :333
void Scale9Rectangle__New1_fn(Scale9Rectangle** __retval)
{
    *__retval = Scale9Rectangle::New1();
}

uSStrong<Scale9Rectangle*> Scale9Rectangle::Impl_;

// public generated Scale9Rectangle() [instance] :333
void Scale9Rectangle::ctor_()
{
    init_DrawCalls();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual element, float2 size, float2 scaleTextureSize, texture2D tex, float4 color, float4 margin) [instance] :337
void Scale9Rectangle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2 size, ::g::Uno::Float2 scaleTextureSize, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float4 color, ::g::Uno::Float4 margin)
{
    uStackFrame __("Fuse.Elements.Internal.Scale9Rectangle", "Draw(Fuse.DrawContext,Fuse.Visual,float2,float2,texture2D,float4,float4)");
    _draw_42808b82.BlendEnabled(true);
    _draw_42808b82.DepthTestEnabled(false);
    _draw_42808b82.CullFace(0);
    _draw_42808b82.BlendSrcRgb(2);
    _draw_42808b82.BlendDstRgb(3);
    _draw_42808b82.BlendDstAlpha(3);
    _draw_42808b82.Use();
    _draw_42808b82.Attrib1(0, 3, Draw_xv_42808b82_1_3_3, 12, 0);
    _draw_42808b82.Attrib1(1, 3, Draw_yv_42808b82_1_4_6, 12, 0);
    _draw_42808b82.Uniform(2, margin.X);
    _draw_42808b82.Uniform(3, size.X - margin.Z);
    _draw_42808b82.Uniform(4, size.X);
    _draw_42808b82.Uniform(5, margin.Y);
    _draw_42808b82.Uniform(6, size.Y - margin.W);
    _draw_42808b82.Uniform(7, size.Y);
    _draw_42808b82.Uniform12(8, uPtr(element)->WorldTransform());
    _draw_42808b82.Uniform12(9, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(uPtr(dc)->Viewport()), ::TYPES[1/*Fuse.IRenderViewport*/])));
    _draw_42808b82.Uniform(10, scaleTextureSize.X - margin.Z);
    _draw_42808b82.Uniform(11, scaleTextureSize.X);
    _draw_42808b82.Uniform(12, scaleTextureSize.Y - margin.W);
    _draw_42808b82.Uniform(13, scaleTextureSize.Y);
    _draw_42808b82.Uniform2(14, scaleTextureSize);
    _draw_42808b82.Uniform10(15, color);
    _draw_42808b82.Sampler2(16, tex);
    _draw_42808b82.Draw(uPtr(Draw_indices_42808b82_1_2_13)->Length(), 2, Draw_xv_42808b82_1_3_2);
}

// private generated void init_DrawCalls() [instance] :333
void Scale9Rectangle::init_DrawCalls()
{
    uStackFrame __("Fuse.Elements.Internal.Scale9Rectangle", "init_DrawCalls()");
    uArray* indices_42808b82_1_2_1 = uArray::Init<int>(::TYPES[2/*ushort[]*/], 54, 0, 4, 5, 0, 5, 1, 1, 5, 6, 1, 6, 2, 2, 6, 7, 2, 7, 3, 4, 8, 9, 4, 9, 5, 5, 9, 10, 5, 10, 6, 6, 10, 11, 6, 11, 7, 8, 12, 13, 8, 13, 9, 9, 13, 14, 9, 14, 10, 10, 14, 15, 10, 15, 11);
    Draw_xv_42808b82_1_3_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(indices_42808b82_1_2_1), 0);
    Draw_xv_42808b82_1_3_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer4(uArray::Init< ::g::Uno::Float3>(::TYPES[3/*float3[]*/], 16, ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f))), 0);
    Draw_yv_42808b82_1_4_6 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer4(uArray::Init< ::g::Uno::Float3>(::TYPES[3/*float3[]*/], 16, ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f))), 0);
    Draw_indices_42808b82_1_2_13 = indices_42808b82_1_2_1;
    _draw_42808b82 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseElements_bundle::Scale9Rectangle720ad3ad());
}

// public generated Scale9Rectangle New() [static] :333
Scale9Rectangle* Scale9Rectangle::New1()
{
    Scale9Rectangle* obj1 = (Scale9Rectangle*)uNew(Scale9Rectangle_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}}} // ::g::Fuse::Elements::Internal
