// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{struct RenderedGlyph;}}}
namespace g{namespace Uno{namespace Content{namespace Images{struct Bitmap;}}}}

namespace g{
namespace Fuse{
namespace Text{

// public struct RenderedGlyph :1013
// {
uStructType* RenderedGlyph_typeof();
void RenderedGlyph__ctor__fn(RenderedGlyph* __this, ::g::Uno::Content::Images::Bitmap* bitmap, ::g::Uno::Float2* offset, float* scale);
void RenderedGlyph__New1_fn(::g::Uno::Content::Images::Bitmap* bitmap, ::g::Uno::Float2* offset, float* scale, RenderedGlyph* __retval);

struct RenderedGlyph
{
    uStrong< ::g::Uno::Content::Images::Bitmap*> Bitmap;
    ::g::Uno::Float2 Offset;
    float Scale;

    void ctor_(::g::Uno::Content::Images::Bitmap* bitmap, ::g::Uno::Float2 offset, float scale);
};

RenderedGlyph RenderedGlyph__New1(::g::Uno::Content::Images::Bitmap* bitmap, ::g::Uno::Float2 offset, float scale);
// }

}}} // ::g::Fuse::Text
