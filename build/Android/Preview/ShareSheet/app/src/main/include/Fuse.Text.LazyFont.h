// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.CacheItem-2.h>
#include <Fuse.Text.Font.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Text{struct Glyph;}}}
namespace g{namespace Fuse{namespace Text{struct GlyphAtlas;}}}
namespace g{namespace Fuse{namespace Text{struct GlyphTexture;}}}
namespace g{namespace Fuse{namespace Text{struct LazyFont;}}}
namespace g{namespace Fuse{namespace Text{struct LazyFontFace;}}}
namespace g{namespace Fuse{namespace Text{struct PositionedGlyph;}}}
namespace g{namespace Fuse{namespace Text{struct RenderedGlyph;}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}

namespace g{
namespace Fuse{
namespace Text{

// public sealed class LazyFont :1299
// {
::g::Fuse::Text::Font_type* LazyFont_typeof();
void LazyFont__ctor_1_fn(LazyFont* __this, ::g::Fuse::Text::LazyFontFace* fontFace, int* pixelSize);
void LazyFont__get_Ascender_fn(LazyFont* __this, float* __retval);
void LazyFont__get_Descender_fn(LazyFont* __this, float* __retval);
void LazyFont__Dispose_fn(LazyFont* __this);
void LazyFont__Force_fn(LazyFont* __this, ::g::Fuse::Text::Font** __retval);
void LazyFont__GetCachedGlyphTexture_fn(LazyFont* __this, ::g::Fuse::Text::Glyph* glyph, ::g::Fuse::Text::GlyphAtlas* atlas, int* version, ::g::Fuse::Text::GlyphTexture* __retval);
void LazyFont__get_LineHeight_fn(LazyFont* __this, float* __retval);
void LazyFont__New1_fn(::g::Fuse::Text::LazyFontFace* fontFace, int* pixelSize, LazyFont** __retval);
void LazyFont__get_NumGlyphs_fn(LazyFont* __this, int* __retval);
void LazyFont__get_PixelSize_fn(LazyFont* __this, int* __retval);
void LazyFont__Render_fn(LazyFont* __this, ::g::Fuse::Text::Glyph* glyph, ::g::Fuse::Text::RenderedGlyph* __retval);
void LazyFont__Shape_fn(LazyFont* __this, ::g::Fuse::Text::Substring* text, int* fontIndex, int* dir, uArray** __retval);

struct LazyFont : ::g::Fuse::Text::Font
{
    uStrong< ::g::Fuse::Text::LazyFontFace*> _fontFace;
    ::g::Fuse::Internal::CacheItem _loadedFont;
    uStrong< ::g::Uno::Threading::Mutex*> _loadedFontMutex;
    int _pixelSize;

    void ctor_1(::g::Fuse::Text::LazyFontFace* fontFace, int pixelSize);
    ::g::Fuse::Text::Font* Force();
    static LazyFont* New1(::g::Fuse::Text::LazyFontFace* fontFace, int pixelSize);
};
// }

}}} // ::g::Fuse::Text
