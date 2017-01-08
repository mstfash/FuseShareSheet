// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.SubTexture.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{struct GlyphTexture;}}}

namespace g{
namespace Fuse{
namespace Text{

// public struct GlyphTexture :1410
// {
uStructType* GlyphTexture_typeof();
void GlyphTexture__ctor__fn(GlyphTexture* __this, ::g::Fuse::Text::SubTexture* subTexture, ::g::Uno::Float2* offset, float* scale);
void GlyphTexture__get_IsValid_fn(GlyphTexture* __this, bool* __retval);
void GlyphTexture__New1_fn(::g::Fuse::Text::SubTexture* subTexture, ::g::Uno::Float2* offset, float* scale, GlyphTexture* __retval);
void GlyphTexture__get_SubTexture_fn(GlyphTexture* __this, ::g::Fuse::Text::SubTexture* __retval);
void GlyphTexture__set_SubTexture_fn(GlyphTexture* __this, ::g::Fuse::Text::SubTexture* value);

struct GlyphTexture
{
    ::g::Uno::Float2 Offset;
    float Scale;
    static GlyphTexture Invalid_;
    static GlyphTexture& Invalid() { return Invalid_; }
    ::g::Fuse::Text::SubTexture _SubTexture;

    void ctor_(::g::Fuse::Text::SubTexture subTexture, ::g::Uno::Float2 offset, float scale);
    bool IsValid();
    ::g::Fuse::Text::SubTexture SubTexture();
    void SubTexture(::g::Fuse::Text::SubTexture value);
};

GlyphTexture GlyphTexture__New1(::g::Fuse::Text::SubTexture subTexture, ::g::Uno::Float2 offset, float scale);
// }

}}} // ::g::Fuse::Text
