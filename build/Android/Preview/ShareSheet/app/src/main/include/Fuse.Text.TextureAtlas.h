// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Int2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct RectPacker;}}}
namespace g{namespace Fuse{namespace Text{struct SubTexture;}}}
namespace g{namespace Fuse{namespace Text{struct TextureAtlas;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Content{namespace Images{struct Bitmap;}}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}

namespace g{
namespace Fuse{
namespace Text{

// public sealed class TextureAtlas :2388
// {
uType* TextureAtlas_typeof();
void TextureAtlas__ctor__fn(TextureAtlas* __this, ::g::Uno::Int2* minimumTextureSize, int* format, ::g::Uno::Collections::List* textures);
void TextureAtlas__Add_fn(TextureAtlas* __this, ::g::Uno::Content::Images::Bitmap* bitmap, ::g::Fuse::Text::SubTexture* __retval);
void TextureAtlas__Blit_fn(::g::Uno::Content::Images::Bitmap* dst, ::g::Uno::Content::Images::Bitmap* src, ::g::Uno::Int2* dstPos);
void TextureAtlas__Commit_fn(TextureAtlas* __this);
void TextureAtlas__New1_fn(::g::Uno::Int2* minimumTextureSize, int* format, ::g::Uno::Collections::List* textures, TextureAtlas** __retval);
void TextureAtlas__NewTexture_fn(TextureAtlas* __this, ::g::Uno::Int2* size);

struct TextureAtlas : uObject
{
    uStrong< ::g::Uno::Content::Images::Bitmap*> _bitmap;
    bool _dirty;
    int _format;
    ::g::Uno::Int2 _minimumTextureSize;
    uStrong< ::g::Fuse::Internal::RectPacker*> _packer;
    int _textureIndex;
    uStrong< ::g::Uno::Collections::List*> _textures;

    void ctor_(::g::Uno::Int2 minimumTextureSize, int format, ::g::Uno::Collections::List* textures);
    ::g::Fuse::Text::SubTexture Add(::g::Uno::Content::Images::Bitmap* bitmap);
    void Commit();
    void NewTexture(::g::Uno::Int2 size);
    static void Blit(::g::Uno::Content::Images::Bitmap* dst, ::g::Uno::Content::Images::Bitmap* src, ::g::Uno::Int2 dstPos);
    static TextureAtlas* New1(::g::Uno::Int2 minimumTextureSize, int format, ::g::Uno::Collections::List* textures);
};
// }

}}} // ::g::Fuse::Text
