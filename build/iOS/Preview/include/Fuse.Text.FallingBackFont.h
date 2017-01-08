// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.CacheItem-2.h>
#include <Fuse.Text.Font.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Text{struct FallingBackFont;}}}
namespace g{namespace Fuse{namespace Text{struct Glyph;}}}
namespace g{namespace Fuse{namespace Text{struct GlyphAtlas;}}}
namespace g{namespace Fuse{namespace Text{struct GlyphTexture;}}}
namespace g{namespace Fuse{namespace Text{struct PositionedGlyph;}}}
namespace g{namespace Fuse{namespace Text{struct RenderedGlyph;}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}

namespace g{
namespace Fuse{
namespace Text{

// public sealed class FallingBackFont :874
// {
::g::Fuse::Text::Font_type* FallingBackFont_typeof();
void FallingBackFont__ctor_1_fn(FallingBackFont* __this, uArray* fonts);
void FallingBackFont__get_Ascender_fn(FallingBackFont* __this, float* __retval);
void FallingBackFont__get_Descender_fn(FallingBackFont* __this, float* __retval);
void FallingBackFont__Dispose_fn(FallingBackFont* __this);
void FallingBackFont__GetCachedGlyphTexture_fn(FallingBackFont* __this, ::g::Fuse::Text::Glyph* glyph, ::g::Fuse::Text::GlyphAtlas* atlas, int* version, ::g::Fuse::Text::GlyphTexture* __retval);
void FallingBackFont__get_LineHeight_fn(FallingBackFont* __this, float* __retval);
void FallingBackFont__New1_fn(uArray* fonts, FallingBackFont** __retval);
void FallingBackFont__get_NumGlyphs_fn(FallingBackFont* __this, int* __retval);
void FallingBackFont__get_PixelSize_fn(FallingBackFont* __this, int* __retval);
void FallingBackFont__Render_fn(FallingBackFont* __this, ::g::Fuse::Text::Glyph* glyph, ::g::Fuse::Text::RenderedGlyph* __retval);
void FallingBackFont__Shape_fn(FallingBackFont* __this, ::g::Fuse::Text::Substring* text, int* fontIndex, int* dir, uArray** __retval);
void FallingBackFont__ShapeInner_fn(FallingBackFont* __this, ::g::Fuse::Text::Substring* text, int* fontIndex, int* dir, uArray** __retval);
void FallingBackFont__TryFindUnhandledSegment_fn(FallingBackFont* __this, uArray* glyphs, int* startIndex, int* start, int* end, bool* __retval);

struct FallingBackFont : ::g::Fuse::Text::Font
{
    uStrong<uArray*> Fonts;

    void ctor_1(uArray* fonts);
    uArray* ShapeInner(::g::Fuse::Text::Substring* text, int fontIndex, int dir);
    bool TryFindUnhandledSegment(uArray* glyphs, int startIndex, int* start, int* end);
    static FallingBackFont* New1(uArray* fonts);
};
// }

}}} // ::g::Fuse::Text
