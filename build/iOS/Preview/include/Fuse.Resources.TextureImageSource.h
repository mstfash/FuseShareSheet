// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.42.4/resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.ImageSource.h>
namespace g{namespace Fuse{namespace Resources{struct TextureImageSource;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Resources{

// public sealed class TextureImageSource :1175
// {
::g::Fuse::Resources::ImageSource_type* TextureImageSource_typeof();
void TextureImageSource__ctor_2_fn(TextureImageSource* __this);
void TextureImageSource__get_Density_fn(TextureImageSource* __this, float* __retval);
void TextureImageSource__set_Density_fn(TextureImageSource* __this, float* value);
void TextureImageSource__GetTexture_fn(TextureImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval);
void TextureImageSource__New2_fn(TextureImageSource** __retval);
void TextureImageSource__get_PixelSize_fn(TextureImageSource* __this, ::g::Uno::Int2* __retval);
void TextureImageSource__get_Size_fn(TextureImageSource* __this, ::g::Uno::Float2* __retval);
void TextureImageSource__get_SizeDensity_fn(TextureImageSource* __this, float* __retval);
void TextureImageSource__get_State_fn(TextureImageSource* __this, int* __retval);
void TextureImageSource__get_Texture_fn(TextureImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval);
void TextureImageSource__set_Texture_fn(TextureImageSource* __this, ::g::Uno::Graphics::Texture2D* value);

struct TextureImageSource : ::g::Fuse::Resources::ImageSource
{
    float _density;
    uStrong< ::g::Uno::Graphics::Texture2D*> _texture;

    void ctor_2();
    float Density();
    void Density(float value);
    ::g::Uno::Graphics::Texture2D* Texture();
    void Texture(::g::Uno::Graphics::Texture2D* value);
    static TextureImageSource* New2();
};
// }

}}} // ::g::Fuse::Resources
