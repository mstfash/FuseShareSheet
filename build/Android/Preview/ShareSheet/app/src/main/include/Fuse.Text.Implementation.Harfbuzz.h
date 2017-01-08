// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct Harfbuzz;}}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal static extern class Harfbuzz :858
// {
uClassType* Harfbuzz_typeof();
void Harfbuzz__buffer_create_fn(void** font, ::g::Fuse::Text::Substring* text, bool* ltr, void** __retval);
void Harfbuzz__buffer_create_Raw_fn(void** font, void** text, int* length, bool* ltr, void** __retval);
void Harfbuzz__buffer_destroy_fn(void** buffer);
void Harfbuzz__buffer_get_length_fn(void** buffer, uint32_t* __retval);
void Harfbuzz__face_destroy_fn(void** face);
void Harfbuzz__font_create_fn(void** hbFace, void** __retval);
void Harfbuzz__font_destroy_fn(void** font);
void Harfbuzz__font_get_h_extents_fn(void** font, float* ascender, float* descender, float* lineGap);
void Harfbuzz__font_set_scale_fn(void** hbFont, int* x_scale, int* y_scale);
void Harfbuzz__ft_font_cached_set_funcs_fn(void** hbFont);
void Harfbuzz__ft_font_create_fn(void** face, void** __retval);
void Harfbuzz__ft_font_set_default_load_flags_fn(void** hbFont);
void Harfbuzz__get_shape_data_fn(void** font, void** buffer, uArray* output);

struct Harfbuzz : uObject
{
    static void* buffer_create(void* font, ::g::Fuse::Text::Substring* text, bool ltr);
    static void* buffer_create_Raw(void* font, void* text, int length, bool ltr);
    static void buffer_destroy(void* buffer);
    static uint32_t buffer_get_length(void* buffer);
    static void face_destroy(void* face);
    static void* font_create(void* hbFace);
    static void font_destroy(void* font);
    static void font_get_h_extents(void* font, float* ascender, float* descender, float* lineGap);
    static void font_set_scale(void* hbFont, int x_scale, int y_scale);
    static void ft_font_cached_set_funcs(void* hbFont);
    static void* ft_font_create(void* face);
    static void ft_font_set_default_load_flags(void* hbFont);
    static void get_shape_data(void* font, void* buffer, uArray* output);
};
// }

}}}} // ::g::Fuse::Text::Implementation
