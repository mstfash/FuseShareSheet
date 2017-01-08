// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.Font.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct HarfbuzzFont;}}}}
namespace g{namespace Fuse{namespace Text{struct PositionedGlyph;}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal abstract extern class HarfbuzzFont :1001
// {
struct HarfbuzzFont_type : ::g::Fuse::Text::Font_type
{
    void(*fp_get_Scale)(::g::Fuse::Text::Implementation::HarfbuzzFont*, float*);
};

HarfbuzzFont_type* HarfbuzzFont_typeof();
void HarfbuzzFont__ctor_1_fn(HarfbuzzFont* __this, void** hbFont);
void HarfbuzzFont__get_Ascender_fn(HarfbuzzFont* __this, float* __retval);
void HarfbuzzFont__get_Descender_fn(HarfbuzzFont* __this, float* __retval);
void HarfbuzzFont__Dispose_fn(HarfbuzzFont* __this);
void HarfbuzzFont__get_LineHeight_fn(HarfbuzzFont* __this, float* __retval);
void HarfbuzzFont__get_Scale_fn(HarfbuzzFont* __this, float* __retval);
void HarfbuzzFont__Shape_fn(HarfbuzzFont* __this, ::g::Fuse::Text::Substring* text, int* fontIndex, int* dir, uArray** __retval);

struct HarfbuzzFont : ::g::Fuse::Text::Font
{
    void* _hbFont;

    void ctor_1(void* hbFont);
    float Scale() { float __retval; return (((HarfbuzzFont_type*)__type)->fp_get_Scale)(this, &__retval), __retval; }
    static float Scale(HarfbuzzFont* __this) { float __retval; return HarfbuzzFont__get_Scale_fn(__this, &__retval), __retval; }
};
// }

}}}} // ::g::Fuse::Text::Implementation
