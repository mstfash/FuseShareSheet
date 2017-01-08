// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Graphics{struct TextureCube;}}}

namespace g{
namespace Uno{
namespace Graphics{

// public intrinsic sealed class TextureCube :1200
// {
struct TextureCube_type : uType
{
    ::g::Uno::IDisposable interface0;
};

TextureCube_type* TextureCube_typeof();
void TextureCube__Dispose_fn(TextureCube* __this);
void TextureCube__get_GLTextureHandle_fn(TextureCube* __this, uint32_t* __retval);
void TextureCube__set_GLTextureHandle_fn(TextureCube* __this, uint32_t* value);
void TextureCube__get_IsDisposed_fn(TextureCube* __this, bool* __retval);
void TextureCube__set_IsDisposed_fn(TextureCube* __this, bool* value);
void TextureCube__get_Size_fn(TextureCube* __this, int* __retval);
void TextureCube__set_Size_fn(TextureCube* __this, int* value);

struct TextureCube : uObject
{
    uint32_t _GLTextureHandle;
    bool _IsDisposed;
    int _Size;

    void Dispose();
    uint32_t GLTextureHandle();
    void GLTextureHandle(uint32_t value);
    bool IsDisposed();
    void IsDisposed(bool value);
    int Size();
    void Size(int value);
};
// }

}}} // ::g::Uno::Graphics
