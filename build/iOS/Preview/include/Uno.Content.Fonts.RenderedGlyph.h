// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/fonts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Content{namespace Fonts{struct RenderedGlyph;}}}}
namespace g{namespace Uno{namespace Content{namespace Images{struct Bitmap;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// public struct RenderedGlyph :530
// {
uStructType* RenderedGlyph_typeof();
void RenderedGlyph__ctor__fn(RenderedGlyph* __this, ::g::Uno::Float2* advance, ::g::Uno::Float2* bearing, ::g::Uno::Content::Images::Bitmap* bitmap);
void RenderedGlyph__New1_fn(::g::Uno::Float2* advance, ::g::Uno::Float2* bearing, ::g::Uno::Content::Images::Bitmap* bitmap, RenderedGlyph* __retval);

struct RenderedGlyph
{
    ::g::Uno::Float2 Advance;
    ::g::Uno::Float2 Bearing;
    uStrong< ::g::Uno::Content::Images::Bitmap*> Bitmap;

    void ctor_(::g::Uno::Float2 advance, ::g::Uno::Float2 bearing, ::g::Uno::Content::Images::Bitmap* bitmap);
};

RenderedGlyph RenderedGlyph__New1(::g::Uno::Float2 advance, ::g::Uno::Float2 bearing, ::g::Uno::Content::Images::Bitmap* bitmap);
// }

}}}} // ::g::Uno::Content::Fonts
