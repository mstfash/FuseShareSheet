// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{struct GlyphAtlas;}}}
namespace g{namespace Fuse{namespace Text{struct SubTexture;}}}
namespace g{namespace Fuse{namespace Text{struct TextureAtlas;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Content{namespace Images{struct Bitmap;}}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Text{

// public sealed class GlyphAtlas :1204
// {
struct GlyphAtlas_type : uType
{
    ::g::Uno::IDisposable interface0;
};

GlyphAtlas_type* GlyphAtlas_typeof();
void GlyphAtlas__ctor__fn(GlyphAtlas* __this, ::g::Uno::Int2* size);
void GlyphAtlas__Add_fn(GlyphAtlas* __this, ::g::Uno::Content::Images::Bitmap* bitmap, ::g::Fuse::Text::SubTexture* __retval);
void GlyphAtlas__Commit_fn(GlyphAtlas* __this);
void GlyphAtlas__Dispose_fn(GlyphAtlas* __this);
void GlyphAtlas__New1_fn(::g::Uno::Int2* size, GlyphAtlas** __retval);

struct GlyphAtlas : uObject
{
    uStrong< ::g::Fuse::Text::TextureAtlas*> _textureAtlasL8;
    uStrong< ::g::Fuse::Text::TextureAtlas*> _textureAtlasRGBA;
    uStrong< ::g::Uno::Collections::List*> Textures;

    void ctor_(::g::Uno::Int2 size);
    ::g::Fuse::Text::SubTexture Add(::g::Uno::Content::Images::Bitmap* bitmap);
    void Commit();
    void Dispose();
    static GlyphAtlas* New1(::g::Uno::Int2 size);
};
// }

}}} // ::g::Fuse::Text
