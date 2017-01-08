// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct FreeType;}}}}
namespace g{namespace Uno{namespace Content{namespace Images{struct Bitmap;}}}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal static extern class FreeType :256
// {
uClassType* FreeType_typeof();
void FreeType__Activate_Size_fn(void** size);
void FreeType__Activate_Size_Raw_fn(void** size, int* __retval);
void FreeType__Ascender_fn(void** face, int* __retval);
void FreeType__BGRAToRGBA_fn(uArray* buffer);
void FreeType__Current_Glyph_Bitmap_fn(void** face, ::g::Uno::Content::Images::Bitmap** __retval);
void FreeType__Current_Glyph_Bitmap_Buffer_fn(void** face, void** __retval);
void FreeType__Current_Glyph_Bitmap_Buffer_Is_BGRA_fn(void** face, bool* __retval);
void FreeType__Current_Glyph_Bitmap_Offset_fn(void** face, ::g::Uno::Int2* __retval);
void FreeType__Current_Glyph_Bitmap_Offset_Raw_fn(void** face, int* x, int* y);
void FreeType__Current_Glyph_Bitmap_Size_fn(void** face, ::g::Uno::Int2* __retval);
void FreeType__Current_Glyph_Bitmap_Size_Raw_fn(void** face, int* width, int* rows);
void FreeType__Descender_fn(void** face, int* __retval);
void FreeType__Done_Face_fn(void** face);
void FreeType__Done_Face_Raw_fn(void** face, int* __retval);
void FreeType__Done_Size_fn(void** size);
void FreeType__Done_Size_Raw_fn(void** size, int* __retval);
void FreeType__Family_Name_fn(void** face, uString** __retval);
void FreeType__Family_Name_Raw_fn(void** face, void** __retval);
void FreeType__Height_fn(void** face, int* __retval);
void FreeType__Init_fn();
void FreeType__Init_FreeType_fn(void** library, int* __retval);
void FreeType__get_Library_fn(void** __retval);
void FreeType__Load_Glyph_fn(void** face, uint32_t* glyph, int* flags);
void FreeType__Load_Glyph_Raw_fn(void** face, uint32_t* glyph, int* flags, int* __retval);
void FreeType__Load_Render_Glyph_fn(void** face, uint32_t* glyph);
void FreeType__Load_Render_Glyph_Raw_fn(void** face, uint32_t* glyph, int* __retval);
void FreeType__New_Face_fn(uString* fileName, int* index, void** face);
void FreeType__New_Face_Raw_fn(void** library, uArray* fileName, int* index, void** face, int* __retval);
void FreeType__New_Memory_Face_fn(uArray* buffer, int* index, void** face);
void FreeType__New_Memory_Face_Raw_fn(void** library, uArray* buffer, int* length, int* index, void** face, int* __retval);
void FreeType__New_Size_fn(void** face, void** size);
void FreeType__New_Size_Raw_fn(void** face, void** size, int* __retval);
void FreeType__Num_Faces_fn(void** face, int* __retval);
void FreeType__Num_Glyphs_fn(void** face, int* __retval);
void FreeType__Set_Pixel_Sizes_fn(void** face, int* w, int* h, float* scale);
void FreeType__Set_Pixel_Sizes_Raw_fn(void** rawFace, int* w, int* h, float* scale, int* __retval);
void FreeType__Style_Name_fn(void** face, uString** __retval);
void FreeType__Style_Name_Raw_fn(void** face, void** __retval);

struct FreeType : uObject
{
    static bool _initialized_;
    static bool& _initialized() { return _initialized_; }
    static void* _library_;
    static void*& _library() { return _library_; }

    static void Activate_Size(void* size);
    static int Activate_Size_Raw(void* size);
    static int Ascender(void* face);
    static void BGRAToRGBA(uArray* buffer);
    static ::g::Uno::Content::Images::Bitmap* Current_Glyph_Bitmap(void* face);
    static void* Current_Glyph_Bitmap_Buffer(void* face);
    static bool Current_Glyph_Bitmap_Buffer_Is_BGRA(void* face);
    static ::g::Uno::Int2 Current_Glyph_Bitmap_Offset(void* face);
    static void Current_Glyph_Bitmap_Offset_Raw(void* face, int* x, int* y);
    static ::g::Uno::Int2 Current_Glyph_Bitmap_Size(void* face);
    static void Current_Glyph_Bitmap_Size_Raw(void* face, int* width, int* rows);
    static int Descender(void* face);
    static void Done_Face(void* face);
    static int Done_Face_Raw(void* face);
    static void Done_Size(void* size);
    static int Done_Size_Raw(void* size);
    static uString* Family_Name(void* face);
    static void* Family_Name_Raw(void* face);
    static int Height(void* face);
    static void Init();
    static int Init_FreeType(void** library);
    static void Load_Glyph(void* face, uint32_t glyph, int flags);
    static int Load_Glyph_Raw(void* face, uint32_t glyph, int flags);
    static void Load_Render_Glyph(void* face, uint32_t glyph);
    static int Load_Render_Glyph_Raw(void* face, uint32_t glyph);
    static void New_Face(uString* fileName, int index, void** face);
    static int New_Face_Raw(void* library, uArray* fileName, int index, void** face);
    static void New_Memory_Face(uArray* buffer, int index, void** face);
    static int New_Memory_Face_Raw(void* library, uArray* buffer, int length, int index, void** face);
    static void New_Size(void* face, void** size);
    static int New_Size_Raw(void* face, void** size);
    static int Num_Faces(void* face);
    static int Num_Glyphs(void* face);
    static void Set_Pixel_Sizes(void* face, int w, int h, float* scale);
    static int Set_Pixel_Sizes_Raw(void* rawFace, int w, int h, float* scale);
    static uString* Style_Name(void* face);
    static void* Style_Name_Raw(void* face);
    static void* Library();
};
// }

}}}} // ::g::Fuse::Text::Implementation
