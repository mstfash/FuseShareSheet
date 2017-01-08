// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.GlyphTexture.h>
#include <Fuse.Text.PositionedGlyph.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{struct Font;}}}
namespace g{namespace Fuse{namespace Text{struct Glyph;}}}
namespace g{namespace Fuse{namespace Text{struct GlyphAtlas;}}}
namespace g{namespace Fuse{namespace Text{struct RenderedGlyph;}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}

namespace g{
namespace Fuse{
namespace Text{

// public abstract class Font :1089
// {
struct Font_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_get_Ascender)(::g::Fuse::Text::Font*, float*);
    void(*fp_get_Descender)(::g::Fuse::Text::Font*, float*);
    void(*fp_Dispose)(::g::Fuse::Text::Font*);
    void(*fp_GetCachedGlyphTexture)(::g::Fuse::Text::Font*, ::g::Fuse::Text::Glyph*, ::g::Fuse::Text::GlyphAtlas*, int*, ::g::Fuse::Text::GlyphTexture*);
    void(*fp_get_LineHeight)(::g::Fuse::Text::Font*, float*);
    void(*fp_get_NumGlyphs)(::g::Fuse::Text::Font*, int*);
    void(*fp_get_PixelSize)(::g::Fuse::Text::Font*, int*);
    void(*fp_Render)(::g::Fuse::Text::Font*, ::g::Fuse::Text::Glyph*, ::g::Fuse::Text::RenderedGlyph*);
    void(*fp_Shape)(::g::Fuse::Text::Font*, ::g::Fuse::Text::Substring*, int*, int*, uArray**);
};

Font_type* Font_typeof();
void Font__ctor__fn(Font* __this);
void Font__Dispose_fn(Font* __this);
void Font__GetCachedGlyphTexture_fn(Font* __this, ::g::Fuse::Text::Glyph* glyph, ::g::Fuse::Text::GlyphAtlas* atlas, int* currentVersion, ::g::Fuse::Text::GlyphTexture* __retval);
void Font__Measure_fn(Font* __this, uArray* shapedRun, ::g::Uno::Float2* __retval);
void Font__Shape1_fn(Font* __this, uString* text, int* dir, uArray** __retval);
void Font__get_ShapedTruncation_fn(Font* __this, uArray** __retval);
void Font__get_TruncationMeasurements_fn(Font* __this, ::g::Uno::Float2* __retval);

struct Font : uObject
{
    uStrong<uArray*> _glyphTextureCache;
    int _glyphTextureCacheVersion;
    uStrong<uArray*> _shapedTruncation;
    ::g::Uno::Float2 _truncationMeasurements;
    static uSStrong<uString*> Truncation_;
    static uSStrong<uString*>& Truncation() { return Font_typeof()->Init(), Truncation_; }

    void ctor_();
    float Ascender() { float __retval; return (((Font_type*)__type)->fp_get_Ascender)(this, &__retval), __retval; }
    float Descender() { float __retval; return (((Font_type*)__type)->fp_get_Descender)(this, &__retval), __retval; }
    void Dispose() { (((Font_type*)__type)->fp_Dispose)(this); }
    ::g::Fuse::Text::GlyphTexture GetCachedGlyphTexture(::g::Fuse::Text::Glyph glyph, ::g::Fuse::Text::GlyphAtlas* atlas, int currentVersion);
    float LineHeight() { float __retval; return (((Font_type*)__type)->fp_get_LineHeight)(this, &__retval), __retval; }
    ::g::Uno::Float2 Measure(uArray* shapedRun);
    int NumGlyphs() { int __retval; return (((Font_type*)__type)->fp_get_NumGlyphs)(this, &__retval), __retval; }
    int PixelSize() { int __retval; return (((Font_type*)__type)->fp_get_PixelSize)(this, &__retval), __retval; }
    ::g::Fuse::Text::RenderedGlyph Render(::g::Fuse::Text::Glyph glyph);
    uArray* Shape(::g::Fuse::Text::Substring* text, int fontIndex, int dir) { uArray* __retval; return (((Font_type*)__type)->fp_Shape)(this, text, &fontIndex, &dir, &__retval), __retval; }
    uArray* Shape1(uString* text, int dir);
    uArray* ShapedTruncation();
    ::g::Uno::Float2 TruncationMeasurements();
    static void Dispose(Font* __this) { Font__Dispose_fn(__this); }
    static ::g::Fuse::Text::GlyphTexture GetCachedGlyphTexture(Font* __this, ::g::Fuse::Text::Glyph glyph, ::g::Fuse::Text::GlyphAtlas* atlas, int currentVersion);
};

}}} // ::g::Fuse::Text

#include <Fuse.Text.Glyph.h>
#include <Fuse.Text.RenderedGlyph.h>

namespace g{
namespace Fuse{
namespace Text{

inline ::g::Fuse::Text::GlyphTexture Font::GetCachedGlyphTexture(::g::Fuse::Text::Glyph glyph, ::g::Fuse::Text::GlyphAtlas* atlas, int currentVersion) { ::g::Fuse::Text::GlyphTexture __retval; return (((Font_type*)__type)->fp_GetCachedGlyphTexture)(this, &glyph, atlas, &currentVersion, &__retval), __retval; }
inline ::g::Fuse::Text::RenderedGlyph Font::Render(::g::Fuse::Text::Glyph glyph) { ::g::Fuse::Text::RenderedGlyph __retval; return (((Font_type*)__type)->fp_Render)(this, &glyph, &__retval), __retval; }
inline ::g::Fuse::Text::GlyphTexture Font::GetCachedGlyphTexture(Font* __this, ::g::Fuse::Text::Glyph glyph, ::g::Fuse::Text::GlyphAtlas* atlas, int currentVersion) { ::g::Fuse::Text::GlyphTexture __retval; return Font__GetCachedGlyphTexture_fn(__this, &glyph, atlas, &currentVersion, &__retval), __retval; }
// }

}}} // ::g::Fuse::Text
