// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreGraphics/CoreGraphics.h>
#include <Fuse.Controls.Native.iOS.iOSBlitter.h>
#include <Fuse.Controls.Native.iOS.NativeViewRenderer.h>
#include <GLKit/GLKit.h>
#include <ObjC.Object.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureTarget.h>
#include <OpenGLES/EAGL.h>
#include <QuartzCore/QuartzCore.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <uObjC.Foreign.h>
#include <Uno.Float2.h>
#include <Uno.Float4x4.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class NativeViewRenderer :1508
// {
static void NativeViewRenderer_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(NativeViewRenderer_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(NativeViewRenderer_type, interface1));
    type->SetFields(0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::NativeViewRenderer, _oldSize), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::NativeViewRenderer, _pixelBuffer), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::NativeViewRenderer, _textureHandle), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::NativeViewRenderer, _viewHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::NativeViewRenderer, _visualValid), 0);
}

NativeViewRenderer_type* NativeViewRenderer_typeof()
{
    static uSStrong<NativeViewRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NativeViewRenderer);
    options.TypeSize = sizeof(NativeViewRenderer_type);
    type = (NativeViewRenderer_type*)uClassType::New("Fuse.Controls.Native.iOS.NativeViewRenderer", options);
    type->fp_build_ = NativeViewRenderer_build;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Uno::Float4x4*, ::g::Uno::Float2*, ::g::Uno::Float2*, float*))NativeViewRenderer__FuseControlsNativeINativeViewRendererDraw_fn;
    type->interface0.fp_Invalidate = (void(*)(uObject*))NativeViewRenderer__FuseControlsNativeINativeViewRendererInvalidate_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))NativeViewRenderer__UnoIDisposableDispose_fn;
    return type;
}

// public NativeViewRenderer(ObjC.Object viewHandle) :1515
void NativeViewRenderer__ctor__fn(NativeViewRenderer* __this, uObject* viewHandle)
{
    __this->ctor_(viewHandle);
}

// private void DeleteTexture() :1625
void NativeViewRenderer__DeleteTexture_fn(NativeViewRenderer* __this)
{
    __this->DeleteTexture();
}

// private static void Draw(ObjC.Object viewHandle, int textureName, Uno.IntPtr pixelBufferHandle, int width, int height, float density, bool reuse) :1562
void NativeViewRenderer__Draw_fn(uObject* viewHandle, int* textureName, void** pixelBufferHandle, int* width, int* height, float* density, bool* reuse)
{
    NativeViewRenderer::Draw(viewHandle, *textureName, *pixelBufferHandle, *width, *height, *density, *reuse);
}

// private static void FreePixelBuffer(Uno.IntPtr buffer) :1666
void NativeViewRenderer__FreePixelBuffer_fn(void** buffer)
{
    NativeViewRenderer::FreePixelBuffer(*buffer);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4 localToClipTransform, float2 position, float2 size, float density) :1521
void NativeViewRenderer__FuseControlsNativeINativeViewRendererDraw_fn(NativeViewRenderer* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density)
{
    uStackFrame __("Fuse.Controls.Native.iOS.NativeViewRenderer", "Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4,float2,float2,float)");
    ::g::Uno::Float2 size_ = *size;
    float density_ = *density;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float4x4 localToClipTransform_ = *localToClipTransform;
    ::g::Uno::Int2 realSize = ::g::Uno::Int2__op_Explicit(::g::Uno::Float2__op_Multiply1(size_, density_));
    bool reuse = true;

    if (::g::Uno::Int2__op_Inequality(__this->_oldSize, realSize))
    {
        __this->DeleteTexture();
        __this->_textureHandle = ::g::OpenGL::GL::CreateTexture();
        __this->_pixelBuffer = NativeViewRenderer::MallocPixelBuffer((realSize.X * realSize.Y) * 4);
        __this->_oldSize = realSize;
        reuse = false;
        __this->_visualValid = false;
    }

    if (!__this->_visualValid)
    {
        ::g::OpenGL::GL::BindTexture(3553, __this->_textureHandle);
        NativeViewRenderer::Draw(__this->_viewHandle, ::g::OpenGL::GLTextureHandle::op_Explicit1(__this->_textureHandle), __this->_pixelBuffer, realSize.X, realSize.Y, density_, reuse);
        ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero_);
        __this->_visualValid = true;
    }

    uPtr(::g::Fuse::Controls::Native::iOS::iOSBlitter::Singleton())->Blit(::g::Uno::Graphics::Texture2D::New2(__this->_textureHandle, realSize, 1, 3), position_, size_, localToClipTransform_);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Invalidate() :1620
void NativeViewRenderer__FuseControlsNativeINativeViewRendererInvalidate_fn(NativeViewRenderer* __this)
{
    __this->_visualValid = false;
}

// private static Uno.IntPtr MallocPixelBuffer(int size) :1661
void NativeViewRenderer__MallocPixelBuffer_fn(int* size, void** __retval)
{
    *__retval = NativeViewRenderer::MallocPixelBuffer(*size);
}

// public NativeViewRenderer New(ObjC.Object viewHandle) :1515
void NativeViewRenderer__New1_fn(uObject* viewHandle, NativeViewRenderer** __retval)
{
    *__retval = NativeViewRenderer::New1(viewHandle);
}

// private void Uno.IDisposable.Dispose() :1639
void NativeViewRenderer__UnoIDisposableDispose_fn(NativeViewRenderer* __this)
{
    __this->DeleteTexture();
    __this->_viewHandle = NULL;
}

// public NativeViewRenderer(ObjC.Object viewHandle) [instance] :1515
void NativeViewRenderer::ctor_(uObject* viewHandle)
{
    _oldSize = ::g::Uno::Int2__New2(-1, -1);
    _viewHandle = viewHandle;
}

// private void DeleteTexture() [instance] :1625
void NativeViewRenderer::DeleteTexture()
{
    if (::g::OpenGL::GLTextureHandle::op_Inequality(_textureHandle, ::g::OpenGL::GLTextureHandle::Zero_))
    {
        ::g::OpenGL::GL::DeleteTexture(_textureHandle);
        _textureHandle = ::g::OpenGL::GLTextureHandle::Zero_;
    }

    if (::g::Uno::IntPtr::op_Inequality(_pixelBuffer, ::g::Uno::IntPtr::Zero_))
    {
        NativeViewRenderer::FreePixelBuffer(_pixelBuffer);
        _pixelBuffer = ::g::Uno::IntPtr::Zero_;
    }
}

// private static void Draw(ObjC.Object viewHandle, int textureName, Uno.IntPtr pixelBufferHandle, int width, int height, float density, bool reuse) [static] :1562
void NativeViewRenderer::Draw(uObject* viewHandle, int textureName, void* pixelBufferHandle, int width, int height, float density, bool reuse)
{
    @autoreleasepool
    {
        [] (::id viewHandle, int textureName, void* pixelBufferHandle, int width, int height, float density, bool reuse) -> void
        {
            ::UIView* view = (::UIView*)viewHandle;
            			GLubyte* pixelBuffer = (GLubyte*)pixelBufferHandle;
            
            			CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
            			CGContextRef context = CGBitmapContextCreate(
            				pixelBuffer,
            				width,
            				height,
            				8,
            				4 * width,
            				colorSpace,
            				kCGImageAlphaPremultipliedLast | kCGBitmapByteOrder32Big);
            
            			CGContextClearRect(context, { { 0.0f, 0.0f, }, { (CGFloat)width, (CGFloat)height } });
            			CGContextScaleCTM(context, (CGFloat)density, (CGFloat)density);
            			CGColorSpaceRelease(colorSpace);
            
            			[[view layer] renderInContext:context];
            
            			if (reuse)
            			{
            				glTexSubImage2D(
            					GL_TEXTURE_2D,
            					0,
            					0,
            					0,
            					width,
            					height,
            					GL_RGBA,
            					GL_UNSIGNED_BYTE,
            					pixelBuffer);
            
            			}
            			else
            			{
            				glTexImage2D(
            					GL_TEXTURE_2D,
            					0,
            					GL_RGBA,
            					width,
            					height,
            					0,
            					GL_RGBA,
            					GL_UNSIGNED_BYTE,
            					pixelBuffer);
            			}
            			CGContextRelease(context);
        } (::g::ObjC::Helpers::GetHandle(viewHandle), textureName, pixelBufferHandle, width, height, density, reuse);
        
    }
    
}

// private static void FreePixelBuffer(Uno.IntPtr buffer) [static] :1666
void NativeViewRenderer::FreePixelBuffer(void* buffer)
{
    free( buffer );
}

// private static Uno.IntPtr MallocPixelBuffer(int size) [static] :1661
void* NativeViewRenderer::MallocPixelBuffer(int size)
{
    return malloc( size );
}

// public NativeViewRenderer New(ObjC.Object viewHandle) [static] :1515
NativeViewRenderer* NativeViewRenderer::New1(uObject* viewHandle)
{
    NativeViewRenderer* obj1 = (NativeViewRenderer*)uNew(NativeViewRenderer_typeof());
    obj1->ctor_(viewHandle);
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
