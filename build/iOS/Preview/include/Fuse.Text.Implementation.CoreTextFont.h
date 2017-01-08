// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.Implementation.HarfbuzzFont.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct CoreTextFont;}}}}
namespace g{namespace Fuse{namespace Text{struct Glyph;}}}
namespace g{namespace Fuse{namespace Text{struct RenderedGlyph;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal sealed extern class CoreTextFont :49
// {
::g::Fuse::Text::Implementation::HarfbuzzFont_type* CoreTextFont_typeof();
void CoreTextFont__ctor_2_fn(CoreTextFont* __this, void** hbFace, void** cgFont, uObject* uiFont, int* pixelSize);
void CoreTextFont__get_Ascender_fn(CoreTextFont* __this, float* __retval);
void CoreTextFont__CGFontRelease_fn(CoreTextFont* __this, void** cgFont);
void CoreTextFont__get_Descender_fn(CoreTextFont* __this, float* __retval);
void CoreTextFont__Dispose_fn(CoreTextFont* __this);
void CoreTextFont__GetAscender_fn(CoreTextFont* __this, uObject* uiFont, float* __retval);
void CoreTextFont__GetCTFont_fn(uObject* font, void** __retval);
void CoreTextFont__GetDescender_fn(CoreTextFont* __this, uObject* uiFont, float* __retval);
void CoreTextFont__GetLineHeight_fn(CoreTextFont* __this, uObject* uiFont, float* __retval);
void CoreTextFont__GetNumGlyphs_fn(CoreTextFont* __this, void** cgFont, int* __retval);
void CoreTextFont__get_LineHeight_fn(CoreTextFont* __this, float* __retval);
void CoreTextFont__New1_fn(void** hbFace, void** cgFont, uObject* uiFont, int* pixelSize, CoreTextFont** __retval);
void CoreTextFont__get_NumGlyphs_fn(CoreTextFont* __this, int* __retval);
void CoreTextFont__get_PixelSize_fn(CoreTextFont* __this, int* __retval);
void CoreTextFont__Render_fn(CoreTextFont* __this, ::g::Fuse::Text::Glyph* glyph, ::g::Fuse::Text::RenderedGlyph* __retval);
void CoreTextFont__Render1_fn(CoreTextFont* __this, void** rawFont, uint32_t* index, ::g::Uno::Int2* size, ::g::Uno::Float2* offset, uArray** __retval);
void CoreTextFont__get_Scale_fn(CoreTextFont* __this, float* __retval);
void CoreTextFont__TryConvertRGBAToL8_fn(uArray* buffer, uArray** __retval);

struct CoreTextFont : ::g::Fuse::Text::Implementation::HarfbuzzFont
{
    void* _cgFont;
    void* _hbFace;
    int _pixelSize;
    uStrong<uObject*> _uiFont;

    void ctor_2(void* hbFace, void* cgFont, uObject* uiFont, int pixelSize);
    void CGFontRelease(void* cgFont);
    float GetAscender(uObject* uiFont);
    float GetDescender(uObject* uiFont);
    float GetLineHeight(uObject* uiFont);
    int GetNumGlyphs(void* cgFont);
    uArray* Render1(void* rawFont, uint32_t index, ::g::Uno::Int2* size, ::g::Uno::Float2* offset);
    static void* GetCTFont(uObject* font);
    static CoreTextFont* New1(void* hbFace, void* cgFont, uObject* uiFont, int pixelSize);
    static uArray* TryConvertRGBAToL8(uArray* buffer);
};
// }

}}}} // ::g::Fuse::Text::Implementation
