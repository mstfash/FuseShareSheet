// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControls_bundle.h>
#include <CoreGraphics/CoreGraphics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.iOS.Bindings.Blitter.h>
#include <Fuse.iOS.Bindings.CGColorSpaceRef.h>
#include <Fuse.iOS.Bindings.CGContextRef.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.Matrix.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.iOS/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal sealed class Blitter :891
// {
// static Blitter() :891
static void Blitter__cctor__fn(uType* __type)
{
    Blitter::Singleton_ = Blitter::New1();
}

static void Blitter_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::IRenderViewport_typeof();
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::iOS::Bindings::Blitter, _draw_e36bc3a0), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::iOS::Bindings::Blitter, Blit_LocalTransform_e36bc3a0_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::iOS::Bindings::Blitter, Blit_LocalTransform_e36bc3a0_4_9_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::iOS::Bindings::Blitter, Blit_VertexData_e36bc3a0_7_2_1), 0,
        type, (uintptr_t)&::g::Fuse::iOS::Bindings::Blitter::Singleton_, uFieldFlagsStatic);
}

uType* Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.iOS.Bindings.Blitter", options);
    type->fp_build_ = Blitter_build;
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    type->fp_cctor_ = Blitter__cctor__fn;
    return type;
}

// public generated Blitter() :891
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(Fuse.DrawContext dc, Fuse.Visual where, texture2D vt, float2 pos, float2 size) :895
void Blitter__Blit_fn(Blitter* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size)
{
    __this->Blit(dc, where, vt, *pos, *size);
}

// private generated void init_DrawCalls() :891
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public generated Blitter New() :891
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::Singleton_;

// public generated Blitter() [instance] :891
void Blitter::ctor_()
{
    init_DrawCalls();
}

// public void Blit(Fuse.DrawContext dc, Fuse.Visual where, texture2D vt, float2 pos, float2 size) [instance] :895
void Blitter::Blit(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.iOS.Bindings.Blitter", "Blit(Fuse.DrawContext,Fuse.Visual,texture2D,float2,float2)");
    ::g::Uno::Float4x4 LocalTransform_e36bc3a0_4_9_4 = ::g::Uno::Matrix::Mul10(Blit_LocalTransform_e36bc3a0_4_9_2, ::g::Uno::Matrix::Scaling1(size.X, size.Y, 1.0f), Blit_LocalTransform_e36bc3a0_4_9_3, ::g::Uno::Matrix::Translation(pos.X, pos.Y, 0.0f));
    _draw_e36bc3a0.BlendEnabled(true);
    _draw_e36bc3a0.DepthTestEnabled(false);
    _draw_e36bc3a0.CullFace(uPtr(dc)->CullFace());
    _draw_e36bc3a0.BlendSrcAlpha(7);
    _draw_e36bc3a0.BlendDstRgb(3);
    _draw_e36bc3a0.Use();
    _draw_e36bc3a0.Attrib1(0, 2, Blit_VertexData_e36bc3a0_7_2_1, 8, 0);
    _draw_e36bc3a0.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IRenderViewport*/])));
    _draw_e36bc3a0.Uniform12(2, (where != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_e36bc3a0_4_9_4, uPtr(where)->WorldTransform()) : LocalTransform_e36bc3a0_4_9_4);
    _draw_e36bc3a0.Sampler2(3, vt);
    _draw_e36bc3a0.DrawArrays(6);
}

// private generated void init_DrawCalls() [instance] :891
void Blitter::init_DrawCalls()
{
    uStackFrame __("Fuse.iOS.Bindings.Blitter", "init_DrawCalls()");
    Blit_VertexData_e36bc3a0_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f))), 0);
    Blit_LocalTransform_e36bc3a0_4_9_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    Blit_LocalTransform_e36bc3a0_4_9_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    _draw_e36bc3a0 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::Viewportd3ce851b());
}

// public generated Blitter New() [static] :891
Blitter* Blitter::New1()
{
    Blitter* obj1 = (Blitter*)uNew(Blitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.iOS/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal extern struct CGColorSpaceRef :733
// {
static void CGColorSpaceRef_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::iOS::Bindings::CGColorSpaceRef, _dummy), 0);
}

uStructType* CGColorSpaceRef_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(::CGColorSpaceRef);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.iOS.Bindings.CGColorSpaceRef", options);
    type->fp_build_ = CGColorSpaceRef_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.iOS/0.42.4/$.uno
// -----------------------------------------------------------------------------------

// internal extern struct CGContextRef :737
// {
static void CGContextRef_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::iOS::Bindings::CGContextRef, _dummy), 0);
}

uStructType* CGContextRef_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(::CGContextRef);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.iOS.Bindings.CGContextRef", options);
    type->fp_build_ = CGContextRef_build;
    return type;
}
// }

}}}} // ::g::Fuse::iOS::Bindings
