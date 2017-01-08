// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.INativeViewRenderer.h>
#include <Uno.IDisposable.h>
#include <Uno.Int2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct NativeViewRenderer;}}}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class NativeViewRenderer :1508
// {
struct NativeViewRenderer_type : uType
{
    ::g::Fuse::Controls::Native::INativeViewRenderer interface0;
    ::g::Uno::IDisposable interface1;
};

NativeViewRenderer_type* NativeViewRenderer_typeof();
void NativeViewRenderer__ctor__fn(NativeViewRenderer* __this, uObject* viewHandle);
void NativeViewRenderer__DeleteTexture_fn(NativeViewRenderer* __this);
void NativeViewRenderer__Draw_fn(uObject* viewHandle, int* textureName, void** pixelBufferHandle, int* width, int* height, float* density, bool* reuse);
void NativeViewRenderer__FreePixelBuffer_fn(void** buffer);
void NativeViewRenderer__FuseControlsNativeINativeViewRendererDraw_fn(NativeViewRenderer* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density);
void NativeViewRenderer__FuseControlsNativeINativeViewRendererInvalidate_fn(NativeViewRenderer* __this);
void NativeViewRenderer__MallocPixelBuffer_fn(int* size, void** __retval);
void NativeViewRenderer__New1_fn(uObject* viewHandle, NativeViewRenderer** __retval);
void NativeViewRenderer__UnoIDisposableDispose_fn(NativeViewRenderer* __this);

struct NativeViewRenderer : uObject
{
    ::g::Uno::Int2 _oldSize;
    void* _pixelBuffer;
    uint32_t _textureHandle;
    uStrong<uObject*> _viewHandle;
    bool _visualValid;

    void ctor_(uObject* viewHandle);
    void DeleteTexture();
    static void Draw(uObject* viewHandle, int textureName, void* pixelBufferHandle, int width, int height, float density, bool reuse);
    static void FreePixelBuffer(void* buffer);
    static void* MallocPixelBuffer(int size);
    static NativeViewRenderer* New1(uObject* viewHandle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
