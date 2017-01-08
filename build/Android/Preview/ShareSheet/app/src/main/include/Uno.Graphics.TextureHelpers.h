// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct TextureCube;}}}
namespace g{namespace Uno{namespace Graphics{struct TextureHelpers;}}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Uno{
namespace Graphics{

// public static class TextureHelpers :1497
// {
uClassType* TextureHelpers_typeof();
void TextureHelpers__GetMipCount1_fn(::g::Uno::Int2* size, int* __retval);
void TextureHelpers__GetMipSize_fn(::g::Uno::Graphics::Texture2D* texture, int* mip, ::g::Uno::Int2* __retval);
void TextureHelpers__GetMipSize1_fn(::g::Uno::Graphics::TextureCube* texture, int* mip, ::g::Uno::Int2* __retval);

struct TextureHelpers : uObject
{
    static int GetMipCount1(::g::Uno::Int2 size);
    static ::g::Uno::Int2 GetMipSize(::g::Uno::Graphics::Texture2D* texture, int mip);
    static ::g::Uno::Int2 GetMipSize1(::g::Uno::Graphics::TextureCube* texture, int mip);
};
// }

}}} // ::g::Uno::Graphics
