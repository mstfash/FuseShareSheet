// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.UnoCore_bundle.h>
#include <uBase/BufferStream.h>
#include <uBase/Bundle.h>
#include <uImage/Bitmap.h>
#include <Uno.Application.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Content.Fonts.BitmapFont.CharPair.h>
#include <Uno.Content.Fonts.BitmapFont.GlyphInfo.h>
#include <Uno.Content.Fonts.BitmapFont.h>
#include <Uno.Content.Fonts.CppFontFace.h>
#include <Uno.Content.Fonts.CppFontFaceHandle.h>
#include <Uno.Content.Fonts.DefaultTextTransform.h>
#include <Uno.Content.Fonts.FontFace.h>
#include <Uno.Content.Fonts.FontFaceHelpers.h>
#include <Uno.Content.Fonts.RenderedGlyph.h>
#include <Uno.Content.Fonts.SdfFontShader.h>
#include <Uno.Content.Fonts.SpriteFontShader.h>
#include <Uno.Content.Fonts.TextRenderer.h>
#include <Uno.Content.Fonts.TextShader.h>
#include <Uno.Content.Fonts.TextShaderData.h>
#include <Uno.Content.Fonts.TextTransform.h>
#include <Uno.Content.Images.Bitmap.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.FormatHelpers.h>
#include <Uno.Graphics.GraphicsContext.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeInfo.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.Internal.BufferReader.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
#include <Uno.UShort.h>
#include <Uno.UShort2.h>
#include <Uno/Support.h>
static uString* STRINGS[3];
static uType* TYPES[8];

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/fonts/$.uno
// -----------------------------------------------------------------------------------------------------------

// public sealed class BitmapFont :9
// {
static void BitmapFont_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Corrupt PBF bitmap font file: Invalid magic number");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Char_typeof(), BitmapFont__GlyphInfo_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Char_typeof(), ::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(BitmapFont__CharPair_typeof(), ::g::Uno::Float_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(BitmapFont_type, interface0));
    type->SetFields(0,
        ::TYPES[1/*Uno.Collections.Dictionary<char, float>*/], offsetof(::g::Uno::Content::Fonts::BitmapFont, Advances), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont, Ascent), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont, Descent), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont, FamilyName), 0,
        ::g::Uno::Content::Fonts::FontFace_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont, FontFace), 0,
        ::TYPES[0/*Uno.Collections.Dictionary<char, Uno.Content.Fonts.BitmapFont.GlyphInfo>*/], offsetof(::g::Uno::Content::Fonts::BitmapFont, Glyphs), 0,
        ::TYPES[2/*Uno.Collections.Dictionary<Uno.Content.Fonts.BitmapFont.CharPair, float>*/], offsetof(::g::Uno::Content::Fonts::BitmapFont, Kernings), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont, LineHeight), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont, PixelSize), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont, PixelSpread), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont, StyleName), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont, Texture), 0);
    type->Reflection.SetFields(12,
        new uField("Advances", 0),
        new uField("Ascent", 1),
        new uField("Descent", 2),
        new uField("FamilyName", 3),
        new uField("FontFace", 4),
        new uField("Glyphs", 5),
        new uField("Kernings", 6),
        new uField("LineHeight", 7),
        new uField("PixelSize", 8),
        new uField("PixelSpread", 9),
        new uField("StyleName", 10),
        new uField("Texture", 11));
    type->Reflection.SetFunctions(1,
        new uFunction("CreateFromPbf", NULL, (void*)BitmapFont__CreateFromPbf_fn, 0, true, type, 2, ::g::Uno::Buffer_typeof(), ::g::Uno::Graphics::Texture2D_typeof()));
}

BitmapFont_type* BitmapFont_typeof()
{
    static uSStrong<BitmapFont_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BitmapFont);
    options.TypeSize = sizeof(BitmapFont_type);
    type = (BitmapFont_type*)uClassType::New("Uno.Content.Fonts.BitmapFont", options);
    type->fp_build_ = BitmapFont_build;
    type->fp_ctor_ = (void*)BitmapFont__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))BitmapFont__UnoIDisposableDispose_fn;
    return type;
}

// internal BitmapFont() :56
void BitmapFont__ctor__fn(BitmapFont* __this)
{
    __this->ctor_();
}

// public static Uno.Content.Fonts.BitmapFont CreateFromPbf(Uno.Buffer pbf, texture2D tex) :65
void BitmapFont__CreateFromPbf_fn(::g::Uno::Buffer* pbf, ::g::Uno::Graphics::Texture2D* tex, BitmapFont** __retval)
{
    *__retval = BitmapFont::CreateFromPbf(pbf, tex);
}

// internal BitmapFont New() :56
void BitmapFont__New1_fn(BitmapFont** __retval)
{
    *__retval = BitmapFont::New1();
}

// private void Uno.IDisposable.Dispose() :60
void BitmapFont__UnoIDisposableDispose_fn(BitmapFont* __this)
{
    uStackFrame __("Uno.Content.Fonts.BitmapFont", "Uno.IDisposable.Dispose()");
    uPtr(__this->Texture)->Dispose();
}

// internal BitmapFont() [instance] :56
void BitmapFont::ctor_()
{
    Glyphs = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<char, Uno.Content.Fonts.BitmapFont.GlyphInfo>*/]));
    Advances = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[1/*Uno.Collections.Dictionary<char, float>*/]));
    Kernings = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[2/*Uno.Collections.Dictionary<Uno.Content.Fonts.BitmapFont.CharPair, float>*/]));
}

// public static Uno.Content.Fonts.BitmapFont CreateFromPbf(Uno.Buffer pbf, texture2D tex) [static] :65
BitmapFont* BitmapFont::CreateFromPbf(::g::Uno::Buffer* pbf, ::g::Uno::Graphics::Texture2D* tex)
{
    uStackFrame __("Uno.Content.Fonts.BitmapFont", "CreateFromPbf(Uno.Buffer,texture2D)");
    ::g::Uno::Runtime::Implementation::Internal::BufferReader* r = ::g::Uno::Runtime::Implementation::Internal::BufferReader::New1(pbf);
    uint32_t magic = r->ReadUInt(true);

    if (magic != 21386064U)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Corrupt PBF...*/]));

    BitmapFont* result = BitmapFont::New1();
    result->Texture = tex;
    result->Ascent = r->ReadFloat(true);
    result->Descent = r->ReadFloat(true);
    result->LineHeight = r->ReadFloat(true);
    int charCount = r->ReadCompressedInt();

    for (int i = 0; i < charCount; i++)
    {
        uChar key = (uChar)uPtr(r)->ReadCompressedInt();
        BitmapFont__GlyphInfo value;
        value.Advance = r->ReadFloat(true);
        value.Bearing = r->ReadFloat2(true);
        value.Size = r->ReadFloat2(true);
        value.UpperLeft.X = (uint16_t)((65535.0 * (double)r->ReadCompressedInt()) / (double)uPtr(tex)->Size().X);
        value.UpperLeft.Y = (uint16_t)((65535.0 * (double)r->ReadCompressedInt()) / (double)tex->Size().Y);
        value.LowerRight.X = (uint16_t)((65535.0 * (double)r->ReadCompressedInt()) / (double)tex->Size().X);
        value.LowerRight.Y = (uint16_t)((65535.0 * (double)r->ReadCompressedInt()) / (double)tex->Size().Y);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(uPtr(result)->Glyphs), uCRef<uChar>(key), uCRef(value));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(result->Advances), uCRef<uChar>(key), uCRef(value.Advance));
    }

    int kerningCount = r->ReadCompressedInt();

    for (int i1 = 0; i1 < kerningCount; i1++)
    {
        uChar left = (uChar)uPtr(r)->ReadCompressedInt();
        uChar right = (uChar)r->ReadCompressedInt();
        float kerning = r->ReadFloat(true);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(uPtr(result)->Kernings), uCRef(BitmapFont__CharPair__New1(left, right)), uCRef(kerning));
    }

    result->PixelSize = r->ReadFloat(true);
    result->PixelSpread = r->ReadFloat(true);
    result->FamilyName = r->ReadString();
    result->StyleName = r->ReadString();
    return result;
}

// internal BitmapFont New() [static] :56
BitmapFont* BitmapFont::New1()
{
    BitmapFont* obj1 = (BitmapFont*)uNew(BitmapFont_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/fonts/$.uno
// -----------------------------------------------------------------------------------------------------------

// public struct BitmapFont.CharPair :20
// {
static void BitmapFont__CharPair_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Char_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont__CharPair, Left), 0,
        ::g::Uno::Char_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont__CharPair, Right), 0);
    type->Reflection.SetFields(2,
        new uField("Left", 0),
        new uField("Right", 1));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BitmapFont__CharPair__New1_fn, 0, true, type, 2, ::g::Uno::Char_typeof(), ::g::Uno::Char_typeof()));
}

uStructType* BitmapFont__CharPair_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(BitmapFont__CharPair);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Content.Fonts.BitmapFont.CharPair", options);
    type->fp_build_ = BitmapFont__CharPair_build;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))BitmapFont__CharPair__GetHashCode_fn;
    return type;
}

// public CharPair(char left, char right) :24
void BitmapFont__CharPair__ctor__fn(BitmapFont__CharPair* __this, uChar* left, uChar* right)
{
    __this->ctor_(*left, *right);
}

// public override sealed int GetHashCode() :30
void BitmapFont__CharPair__GetHashCode_fn(BitmapFont__CharPair* __this, uType* __type, int* __retval)
{
    int hash = 27;
    hash = (hash * 13) + (int)__this->Left;
    hash = (hash * 13) + (int)__this->Right;
    return *__retval = hash, void();
}

// public CharPair New(char left, char right) :24
void BitmapFont__CharPair__New1_fn(uChar* left, uChar* right, BitmapFont__CharPair* __retval)
{
    *__retval = BitmapFont__CharPair__New1(*left, *right);
}

// public CharPair(char left, char right) [instance] :24
void BitmapFont__CharPair::ctor_(uChar left, uChar right)
{
    Left = left;
    Right = right;
}

// public CharPair New(char left, char right) [static] :24
BitmapFont__CharPair BitmapFont__CharPair__New1(uChar left, uChar right)
{
    BitmapFont__CharPair obj1;
    obj1.ctor_(left, right);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/fonts/$.uno
// -----------------------------------------------------------------------------------------------------------

// internal sealed extern class CppFontFace :198
// {
static void CppFontFace_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Content::Fonts::FontFace_type, interface0));
    type->SetFields(0,
        ::g::Uno::Content::Fonts::CppFontFaceHandle_typeof(), offsetof(::g::Uno::Content::Fonts::CppFontFace, _handle), 0);
}

::g::Uno::Content::Fonts::FontFace_type* CppFontFace_typeof()
{
    static uSStrong< ::g::Uno::Content::Fonts::FontFace_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Content::Fonts::FontFace_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CppFontFace);
    options.TypeSize = sizeof(::g::Uno::Content::Fonts::FontFace_type);
    type = (::g::Uno::Content::Fonts::FontFace_type*)uClassType::New("Uno.Content.Fonts.CppFontFace", options);
    type->fp_build_ = CppFontFace_build;
    type->fp_ContainsGlyph = (void(*)(::g::Uno::Content::Fonts::FontFace*, float*, uChar*, bool*))CppFontFace__ContainsGlyph_fn;
    type->fp_Dispose = (void(*)(::g::Uno::Content::Fonts::FontFace*))CppFontFace__Dispose_fn;
    type->fp_get_FamilyName = (void(*)(::g::Uno::Content::Fonts::FontFace*, uString**))CppFontFace__get_FamilyName_fn;
    type->fp_GetAscender = (void(*)(::g::Uno::Content::Fonts::FontFace*, float*, float*))CppFontFace__GetAscender_fn;
    type->fp_GetDescender = (void(*)(::g::Uno::Content::Fonts::FontFace*, float*, float*))CppFontFace__GetDescender_fn;
    type->fp_GetLineHeight = (void(*)(::g::Uno::Content::Fonts::FontFace*, float*, float*))CppFontFace__GetLineHeight_fn;
    type->fp_RenderGlyph = (void(*)(::g::Uno::Content::Fonts::FontFace*, float*, uChar*, ::g::Uno::Content::Fonts::RenderedGlyph*))CppFontFace__RenderGlyph_fn;
    type->fp_get_StyleName = (void(*)(::g::Uno::Content::Fonts::FontFace*, uString**))CppFontFace__get_StyleName_fn;
    type->fp_TryGetKerning = (void(*)(::g::Uno::Content::Fonts::FontFace*, float*, uChar*, uChar*, ::g::Uno::Float2*, bool*))CppFontFace__TryGetKerning_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))CppFontFace__Dispose_fn;
    return type;
}

// public CppFontFace(byte[] data, int offset, int length) :219
void CppFontFace__ctor_1_fn(CppFontFace* __this, uArray* data, int* offset, int* length)
{
    __this->ctor_1(data, *offset, *length);
}

// public CppFontFace(Uno.IO.BundleFile file) :214
void CppFontFace__ctor_2_fn(CppFontFace* __this, ::g::Uno::IO::BundleFile* file)
{
    __this->ctor_2(file);
}

// public override sealed bool ContainsGlyph(float size, char glyph) :255
void CppFontFace__ContainsGlyph_fn(CppFontFace* __this, float* size, uChar* glyph, bool* __retval)
{
    float size_ = *size;
    uChar glyph_ = *glyph;
    return *__retval = __this->_handle->ContainsGlyph(size_, glyph_), void();
}

// public override sealed void Dispose() :224
void CppFontFace__Dispose_fn(CppFontFace* __this)
{
    __this->_handle->Release();
                __this->_handle = 0;
}

// public override sealed string get_FamilyName() :232
void CppFontFace__get_FamilyName_fn(CppFontFace* __this, uString** __retval)
{
    return *__retval = uStringFromXliString(__this->_handle->GetFamilyName()), void();
}

// public override sealed float GetAscender(float size) :240
void CppFontFace__GetAscender_fn(CppFontFace* __this, float* size, float* __retval)
{
    float size_ = *size;
    return *__retval = __this->_handle->GetAscender(size_), void();
}

// public override sealed float GetDescender(float size) :245
void CppFontFace__GetDescender_fn(CppFontFace* __this, float* size, float* __retval)
{
    float size_ = *size;
    return *__retval = __this->_handle->GetDescender(size_), void();
}

// public override sealed float GetLineHeight(float size) :250
void CppFontFace__GetLineHeight_fn(CppFontFace* __this, float* size, float* __retval)
{
    float size_ = *size;
    return *__retval = __this->_handle->GetLineHeight(size_), void();
}

// private static Uno.Content.Fonts.CppFontFaceHandle LoadFontFaceHandle(byte[] data, int offset, int length) :206
void CppFontFace__LoadFontFaceHandle_fn(uArray* data, int* offset, int* length, uImage::FontFace** __retval)
{
    *__retval = CppFontFace::LoadFontFaceHandle(data, *offset, *length);
}

// private static Uno.Content.Fonts.CppFontFaceHandle LoadFontFaceHandle(string filename) :200
void CppFontFace__LoadFontFaceHandle1_fn(uString* filename, uImage::FontFace** __retval)
{
    *__retval = CppFontFace::LoadFontFaceHandle1(filename);
}

// public CppFontFace New(byte[] data, int offset, int length) :219
void CppFontFace__New1_fn(uArray* data, int* offset, int* length, CppFontFace** __retval)
{
    *__retval = CppFontFace::New1(data, *offset, *length);
}

// public CppFontFace New(Uno.IO.BundleFile file) :214
void CppFontFace__New2_fn(::g::Uno::IO::BundleFile* file, CppFontFace** __retval)
{
    *__retval = CppFontFace::New2(file);
}

// public override sealed Uno.Content.Fonts.RenderedGlyph RenderGlyph(float size, char glyph) :265
void CppFontFace__RenderGlyph_fn(CppFontFace* __this, float* size, uChar* glyph, ::g::Uno::Content::Fonts::RenderedGlyph* __retval)
{
    float size_ = *size;
    uChar glyph_ = *glyph;
    uBase::Vector2 advance, bearing;
                uBase::Auto<uImage::Bitmap> bitmap = __this->_handle->RenderGlyph(size_, glyph_, uImage::FontRenderModeNormal, &advance, &bearing);
    
                ::g::Uno::Buffer* resultBuffer = uBufferFromXliDataAccessor(bitmap);
                ::g::Uno::Content::Images::Bitmap* resultBitmap = ::g::Uno::Content::Images::Bitmap::New1(::g::Uno::Int2__New2(bitmap->GetWidth(), bitmap->GetHeight()), 1, resultBuffer);
    
                return *__retval = ::g::Uno::Content::Fonts::RenderedGlyph__New1(::g::Uno::Float2__New2(advance.X, advance.Y), ::g::Uno::Float2__New2(bearing.X, bearing.Y), resultBitmap), void();
}

// public override sealed string get_StyleName() :237
void CppFontFace__get_StyleName_fn(CppFontFace* __this, uString** __retval)
{
    return *__retval = uStringFromXliString(__this->_handle->GetStyleName()), void();
}

// public override sealed bool TryGetKerning(float size, char left, char right, float2& result) :277
void CppFontFace__TryGetKerning_fn(CppFontFace* __this, float* size, uChar* left, uChar* right, ::g::Uno::Float2* result, bool* __retval)
{
    float size_ = *size;
    uChar left_ = *left;
    uChar right_ = *right;
    uBase::Vector2 kerning;
                if (__this->_handle->TryGetKerning(size_, left_, right_, &kerning))
                {
                    result->X = kerning.X;
                    result->Y = kerning.Y;
                    return *__retval = true, void();
                }
    
                result->X = result->Y = 0;
                return *__retval = false, void();
}

// public CppFontFace(byte[] data, int offset, int length) [instance] :219
void CppFontFace::ctor_1(uArray* data, int offset, int length)
{
    ctor_();
    _handle = CppFontFace::LoadFontFaceHandle(data, offset, length);
}

// public CppFontFace(Uno.IO.BundleFile file) [instance] :214
void CppFontFace::ctor_2(::g::Uno::IO::BundleFile* file)
{
    uStackFrame __("Uno.Content.Fonts.CppFontFace", ".ctor(Uno.IO.BundleFile)");
    ctor_();
    _handle = CppFontFace::LoadFontFaceHandle1(uPtr(file)->BundlePath());
}

// private static Uno.Content.Fonts.CppFontFaceHandle LoadFontFaceHandle(byte[] data, int offset, int length) [static] :206
uImage::FontFace* CppFontFace::LoadFontFaceHandle(uArray* data, int offset, int length)
{
    uBase::BufferStream stream(new uBase::BufferPtr((char*)data->Ptr() + offset, length, false), true, false);
                return uImage::FontFace::Load(&stream);
}

// private static Uno.Content.Fonts.CppFontFaceHandle LoadFontFaceHandle(string filename) [static] :200
uImage::FontFace* CppFontFace::LoadFontFaceHandle1(uString* filename)
{
    uBase::Auto<uBase::Stream> f = uBase::Bundle->OpenFile(uStringToXliString(filename));
                return uImage::FontFace::Load(f);
}

// public CppFontFace New(byte[] data, int offset, int length) [static] :219
CppFontFace* CppFontFace::New1(uArray* data, int offset, int length)
{
    CppFontFace* obj2 = (CppFontFace*)uNew(CppFontFace_typeof());
    obj2->ctor_1(data, offset, length);
    return obj2;
}

// public CppFontFace New(Uno.IO.BundleFile file) [static] :214
CppFontFace* CppFontFace::New2(::g::Uno::IO::BundleFile* file)
{
    CppFontFace* obj1 = (CppFontFace*)uNew(CppFontFace_typeof());
    obj1->ctor_2(file);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/fonts/$.uno
// -----------------------------------------------------------------------------------------------------------

// internal extern struct CppFontFaceHandle :190
// {
static void CppFontFaceHandle_build(uType* type)
{
}

uStructType* CppFontFaceHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uImage::FontFace*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Content.Fonts.CppFontFaceHandle", options);
    type->fp_build_ = CppFontFaceHandle_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/fonts/$.uno
// -----------------------------------------------------------------------------------------------------------

// public sealed class DefaultTextTransform :301
// {
static void DefaultTextTransform_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Uno::Content::Fonts::DefaultTextTransform, _matrix), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DefaultTextTransform__New1_fn, 0, true, type, 0));
}

::g::Uno::Content::Fonts::TextTransform_type* DefaultTextTransform_typeof()
{
    static uSStrong< ::g::Uno::Content::Fonts::TextTransform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Content::Fonts::TextTransform_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(DefaultTextTransform);
    options.TypeSize = sizeof(::g::Uno::Content::Fonts::TextTransform_type);
    type = (::g::Uno::Content::Fonts::TextTransform_type*)uClassType::New("Uno.Content.Fonts.DefaultTextTransform", options);
    type->fp_build_ = DefaultTextTransform_build;
    type->fp_ctor_ = (void*)DefaultTextTransform__New1_fn;
    type->fp_get_Matrix = (void(*)(::g::Uno::Content::Fonts::TextTransform*, ::g::Uno::Float4x4*))DefaultTextTransform__get_Matrix_fn;
    type->fp_set_Matrix = (void(*)(::g::Uno::Content::Fonts::TextTransform*, ::g::Uno::Float4x4*))DefaultTextTransform__set_Matrix_fn;
    type->fp_ResolveClipSpaceMatrix = (void(*)(::g::Uno::Content::Fonts::TextTransform*, ::g::Uno::Float4x4*))DefaultTextTransform__ResolveClipSpaceMatrix_fn;
    return type;
}

// public generated DefaultTextTransform() :301
void DefaultTextTransform__ctor_1_fn(DefaultTextTransform* __this)
{
    __this->ctor_1();
}

// public override sealed float4x4 get_Matrix() :307
void DefaultTextTransform__get_Matrix_fn(DefaultTextTransform* __this, ::g::Uno::Float4x4* __retval)
{
    return *__retval = __this->_matrix, void();
}

// public override sealed void set_Matrix(float4x4 value) :308
void DefaultTextTransform__set_Matrix_fn(DefaultTextTransform* __this, ::g::Uno::Float4x4* value)
{
    ::g::Uno::Float4x4 value_ = *value;
    __this->_matrix = value_;
}

// public generated DefaultTextTransform New() :301
void DefaultTextTransform__New1_fn(DefaultTextTransform** __retval)
{
    *__retval = DefaultTextTransform::New1();
}

// public override sealed float4x4 ResolveClipSpaceMatrix() :311
void DefaultTextTransform__ResolveClipSpaceMatrix_fn(DefaultTextTransform* __this, ::g::Uno::Float4x4* __retval)
{
    uStackFrame __("Uno.Content.Fonts.DefaultTextTransform", "ResolveClipSpaceMatrix()");
    ::g::Uno::Float2 csScale = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__New2(2.0f, -2.0f), ::g::Uno::Float2__op_Implicit1(uPtr(uPtr(::g::Uno::Application::Current())->GraphicsContext())->Viewport().Size()));
    ::g::Uno::Float2 csOffset = ::g::Uno::Float2__New2(-1.0f, 1.0f);
    ::g::Uno::Float4x4 csMatrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Scaling2(::g::Uno::Float3__New4(csScale, 1.0f)), ::g::Uno::Matrix::Translation1(::g::Uno::Float3__New4(csOffset, 0.0f)));
    return *__retval = ::g::Uno::Matrix::Mul8(__this->Matrix(), csMatrix), void();
}

// public generated DefaultTextTransform() [instance] :301
void DefaultTextTransform::ctor_1()
{
    _matrix = ::g::Uno::Float4x4__Identity();
    ctor_();
}

// public generated DefaultTextTransform New() [static] :301
DefaultTextTransform* DefaultTextTransform::New1()
{
    DefaultTextTransform* obj1 = (DefaultTextTransform*)uNew(DefaultTextTransform_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/fonts/$.uno
// -----------------------------------------------------------------------------------------------------------

// public abstract class FontFace :332
// {
static void FontFace_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(FontFace_type, interface0));
    type->Reflection.SetFunctions(11,
        new uFunction("ContainsGlyph", NULL, NULL, offsetof(FontFace_type, fp_ContainsGlyph), false, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Char_typeof()),
        new uFunction("Dispose", NULL, NULL, offsetof(FontFace_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("get_FamilyName", NULL, NULL, offsetof(FontFace_type, fp_get_FamilyName), false, ::g::Uno::String_typeof(), 0),
        new uFunction("GetAscender", NULL, NULL, offsetof(FontFace_type, fp_GetAscender), false, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("GetDescender", NULL, NULL, offsetof(FontFace_type, fp_GetDescender), false, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("GetLineHeight", NULL, NULL, offsetof(FontFace_type, fp_GetLineHeight), false, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Load", NULL, (void*)FontFace__Load_fn, 0, true, type, 4, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Load", NULL, (void*)FontFace__Load1_fn, 0, true, type, 1, ::g::Uno::IO::BundleFile_typeof()),
        new uFunction("RenderGlyph", NULL, NULL, offsetof(FontFace_type, fp_RenderGlyph), false, ::g::Uno::Content::Fonts::RenderedGlyph_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Char_typeof()),
        new uFunction("get_StyleName", NULL, NULL, offsetof(FontFace_type, fp_get_StyleName), false, ::g::Uno::String_typeof(), 0),
        new uFunction("TryGetKerning", NULL, NULL, offsetof(FontFace_type, fp_TryGetKerning), false, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Float_typeof(), ::g::Uno::Char_typeof(), ::g::Uno::Char_typeof(), ::g::Uno::Float2_typeof()->ByRef()));
}

FontFace_type* FontFace_typeof()
{
    static uSStrong<FontFace_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FontFace);
    options.TypeSize = sizeof(FontFace_type);
    type = (FontFace_type*)uClassType::New("Uno.Content.Fonts.FontFace", options);
    type->fp_build_ = FontFace_build;
    return type;
}

// protected generated FontFace() :332
void FontFace__ctor__fn(FontFace* __this)
{
    __this->ctor_();
}

// public static Uno.Content.Fonts.FontFace Load(string name, byte[] data, int offset, int length) :348
void FontFace__Load_fn(uString* name, uArray* data, int* offset, int* length, FontFace** __retval)
{
    *__retval = FontFace::Load(name, data, *offset, *length);
}

// public static Uno.Content.Fonts.FontFace Load(Uno.IO.BundleFile file) :334
void FontFace__Load1_fn(::g::Uno::IO::BundleFile* file, FontFace** __retval)
{
    *__retval = FontFace::Load1(file);
}

// protected generated FontFace() [instance] :332
void FontFace::ctor_()
{
}

// public static Uno.Content.Fonts.FontFace Load(string name, byte[] data, int offset, int length) [static] :348
FontFace* FontFace::Load(uString* name, uArray* data, int offset, int length)
{
    return ::g::Uno::Content::Fonts::CppFontFace::New1(data, offset, length);
}

// public static Uno.Content.Fonts.FontFace Load(Uno.IO.BundleFile file) [static] :334
FontFace* FontFace::Load1(::g::Uno::IO::BundleFile* file)
{
    uStackFrame __("Uno.Content.Fonts.FontFace", "Load(Uno.IO.BundleFile)");
    return ::g::Uno::Content::Fonts::CppFontFace::New2(file);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/fonts/$.uno
// -----------------------------------------------------------------------------------------------------------

// public static class FontFaceHelpers :395
// {
static void FontFaceHelpers_build(uType* type)
{
    ::STRINGS[1] = uString::Const(" \300\200");
    ::TYPES[3] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Char_typeof(), ::g::Uno::Content::Fonts::RenderedGlyph_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::Char_typeof(), ::g::Uno::Content::Fonts::RenderedGlyph_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::Char_typeof(), ::g::Uno::Content::Fonts::RenderedGlyph_typeof(), NULL);
    type->Reflection.SetFunctions(1,
        new uFunction("RenderSpriteFont", NULL, (void*)FontFaceHelpers__RenderSpriteFont_fn, 0, true, ::g::Uno::Content::Fonts::BitmapFont_typeof(), 3, ::g::Uno::Content::Fonts::FontFace_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::String_typeof()));
}

uClassType* FontFaceHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Content.Fonts.FontFaceHelpers", options);
    type->fp_build_ = FontFaceHelpers_build;
    return type;
}

// public static Uno.Content.Fonts.BitmapFont RenderSpriteFont(Uno.Content.Fonts.FontFace font, float size, string charset) :397
void FontFaceHelpers__RenderSpriteFont_fn(::g::Uno::Content::Fonts::FontFace* font, float* size, uString* charset, ::g::Uno::Content::Fonts::BitmapFont** __retval)
{
    *__retval = FontFaceHelpers::RenderSpriteFont(font, *size, charset);
}

// public static Uno.Content.Fonts.BitmapFont RenderSpriteFont(Uno.Content.Fonts.FontFace font, float size, string charset) [static] :397
::g::Uno::Content::Fonts::BitmapFont* FontFaceHelpers::RenderSpriteFont(::g::Uno::Content::Fonts::FontFace* font, float size, uString* charset)
{
    uStackFrame __("Uno.Content.Fonts.FontFaceHelpers", "RenderSpriteFont(Uno.Content.Fonts.FontFace,float,string)");
    ::g::Uno::Content::Fonts::BitmapFont* collection1;
    bool ret3;
    ::g::Uno::Collections::Dictionary__Enumerator<uChar, ::g::Uno::Content::Fonts::RenderedGlyph> ret4;
    ::g::Uno::Collections::Dictionary* glyphs = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<char, Uno.Content.Fonts.RenderedGlyph>*/]);
    uString* charsetInclWs = ::g::Uno::String::op_Addition2(charset, ::STRINGS[1/*" \0"*/]);
    int maxSize = 0;

    for (int i = 0; i < uPtr(charsetInclWs)->Length(); i++)
    {
        uChar c = uPtr(charsetInclWs)->Item(i);

        if (uPtr(font)->ContainsGlyph(size, c))
        {
            if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(glyphs), uCRef<uChar>(c), &ret3), ret3))
                continue;

            ::g::Uno::Content::Fonts::RenderedGlyph g = uPtr(font)->RenderGlyph(size, c);
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(glyphs), uCRef<uChar>(c), uCRef(g));

            if (g.Bitmap != NULL)
            {
                maxSize = ::g::Uno::Math::Max8(maxSize, uPtr(g.Bitmap)->Size().X);
                maxSize = ::g::Uno::Math::Max8(maxSize, uPtr(g.Bitmap)->Size().Y);
            }
        }
    }

    int sideCount = (int)::g::Uno::Math::Ceil1(::g::Uno::Math::Sqrt1((float)glyphs->Count()));
    int sideSize = ::g::Uno::Math::NextPow2(sideCount * maxSize);
    ::g::Uno::Content::Images::Bitmap* dst = ::g::Uno::Content::Images::Bitmap::New1(::g::Uno::Int2__New2(sideSize, sideSize), 1, NULL);
    ::g::Uno::Graphics::Texture2D* tex = ::g::Uno::Graphics::Texture2D::New1(dst->Size(), dst->Format(), true);
    collection1 = ::g::Uno::Content::Fonts::BitmapFont::New1();
    uPtr(collection1)->Texture = tex;
    uPtr(collection1)->Ascent = ::g::Uno::Math::Round2(uPtr(font)->GetAscender(size));
    uPtr(collection1)->Descent = ::g::Uno::Math::Round2(uPtr(font)->GetDescender(size));
    uPtr(collection1)->LineHeight = ::g::Uno::Math::Round2(uPtr(font)->GetLineHeight(size));
    uPtr(collection1)->PixelSize = size;
    uPtr(collection1)->PixelSpread = 0.0f;
    uPtr(collection1)->FontFace = font;
    uPtr(collection1)->FamilyName = uPtr(font)->FamilyName();
    uPtr(collection1)->StyleName = uPtr(font)->StyleName();
    ::g::Uno::Content::Fonts::BitmapFont* result = collection1;
    int gi = 0;

    for (::g::Uno::Collections::Dictionary__Enumerator<uChar, ::g::Uno::Content::Fonts::RenderedGlyph> enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(glyphs, &ret4), ret4); enum2.MoveNext(::TYPES[4/*Uno.Collections.Dictionary<char, Uno.Content.Fonts.RenderedGlyph>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uChar, ::g::Uno::Content::Fonts::RenderedGlyph> e = enum2.Current(::TYPES[4/*Uno.Collections.Dictionary<char, Uno.Content.Fonts.RenderedGlyph>.Enumerator*/]);
        int dstX = (gi % sideCount) * (sideSize / sideCount);
        int dstY = ((gi / sideCount) % sideCount) * (sideSize / sideCount);
        gi++;
        ::g::Uno::Content::Images::Bitmap* src = e.Value(::TYPES[5/*Uno.Collections.KeyValuePair<char, Uno.Content.Fonts.RenderedGlyph>*/]).Bitmap;
        ::g::Uno::Float2 srcSize = ::g::Uno::Float2__New2(0.0f, 0.0f);

        if (src != NULL)
        {
            srcSize = ::g::Uno::Float2__op_Implicit1(uPtr(src)->Size());
            int bpp = ::g::Uno::Graphics::FormatHelpers::GetStrideInBytes(src->Format());

            for (int srcY = 0; srcY < src->Size().Y; srcY++)

                for (int srcX = 0; srcX < uPtr(src)->Size().X; srcX++)
                    uPtr(uPtr(dst)->Buffer())->Item((((dstY + srcY) * uPtr(dst)->Size().X) + dstX) + srcX, uPtr(uPtr(src)->Buffer())->Item(((srcY * uPtr(src)->Size().X) + srcX) * bpp));
        }

        ::g::Uno::Content::Fonts::BitmapFont__GlyphInfo g1;
        g1.Advance = ::g::Uno::Math::Round2(e.Value(::TYPES[5/*Uno.Collections.KeyValuePair<char, Uno.Content.Fonts.RenderedGlyph>*/]).Advance.X);
        g1.Bearing = ::g::Uno::Math::Round4(e.Value(::TYPES[5/*Uno.Collections.KeyValuePair<char, Uno.Content.Fonts.RenderedGlyph>*/]).Bearing);
        g1.Size = srcSize;
        g1.UpperLeft.X = (uint16_t)((65535.0 * (double)dstX) / (double)uPtr(dst)->Size().X);
        g1.UpperLeft.Y = (uint16_t)((65535.0 * (double)dstY) / (double)dst->Size().Y);
        g1.LowerRight.X = (uint16_t)((65535.0 * (double)((float)dstX + srcSize.X)) / (double)dst->Size().X);
        g1.LowerRight.Y = (uint16_t)((65535.0 * (double)((float)dstY + srcSize.Y)) / (double)dst->Size().Y);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(uPtr(result)->Glyphs), uCRef<uChar>(e.Key(::TYPES[5/*Uno.Collections.KeyValuePair<char, Uno.Content.Fonts.RenderedGlyph>*/])), uCRef(g1));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(result->Advances), uCRef<uChar>(e.Key(::TYPES[5/*Uno.Collections.KeyValuePair<char, Uno.Content.Fonts.RenderedGlyph>*/])), uCRef(g1.Advance));
    }

    tex->Update1(dst->Buffer());

    if (tex->SupportsMipmap())
        uPtr(tex)->GenerateMipmap();

    for (int i1 = 0; i1 < uPtr(charsetInclWs)->Length(); i1++)
    {
        uChar left = uPtr(charsetInclWs)->Item(i1);

        for (int j = 0; j < charsetInclWs->Length(); j++)
        {
            uChar right = uPtr(charsetInclWs)->Item(j);
            ::g::Uno::Float2 kerning;

            if (uPtr(font)->TryGetKerning(size, left, right, &kerning) && (::g::Uno::Math::Abs1(kerning.X) > 0.0f))
                ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(uPtr(result)->Kernings), uCRef(::g::Uno::Content::Fonts::BitmapFont__CharPair__New1(left, right)), uCRef(kerning.X));
        }
    }

    return result;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/fonts/$.uno
// -----------------------------------------------------------------------------------------------------------

// public struct BitmapFont.GlyphInfo :11
// {
static void BitmapFont__GlyphInfo_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont__GlyphInfo, Advance), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont__GlyphInfo, Bearing), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont__GlyphInfo, Size), 0,
        ::g::Uno::UShort2_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont__GlyphInfo, UpperLeft), 0,
        ::g::Uno::UShort2_typeof(), offsetof(::g::Uno::Content::Fonts::BitmapFont__GlyphInfo, LowerRight), 0);
    type->Reflection.SetFields(5,
        new uField("Advance", 0),
        new uField("Bearing", 1),
        new uField("LowerRight", 4),
        new uField("Size", 2),
        new uField("UpperLeft", 3));
}

uStructType* BitmapFont__GlyphInfo_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ValueSize = sizeof(BitmapFont__GlyphInfo);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Content.Fonts.BitmapFont.GlyphInfo", options);
    type->fp_build_ = BitmapFont__GlyphInfo_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/fonts/$.uno
// -----------------------------------------------------------------------------------------------------------

// public struct RenderedGlyph :530
// {
static void RenderedGlyph_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Uno::Content::Fonts::RenderedGlyph, Advance), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Uno::Content::Fonts::RenderedGlyph, Bearing), 0,
        ::g::Uno::Content::Images::Bitmap_typeof(), offsetof(::g::Uno::Content::Fonts::RenderedGlyph, Bitmap), 0);
    type->Reflection.SetFields(3,
        new uField("Advance", 0),
        new uField("Bearing", 1),
        new uField("Bitmap", 2));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RenderedGlyph__New1_fn, 0, true, type, 3, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Content::Images::Bitmap_typeof()));
}

uStructType* RenderedGlyph_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(RenderedGlyph);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Content.Fonts.RenderedGlyph", options);
    type->fp_build_ = RenderedGlyph_build;
    return type;
}

// public RenderedGlyph(float2 advance, float2 bearing, Uno.Content.Images.Bitmap bitmap) :536
void RenderedGlyph__ctor__fn(RenderedGlyph* __this, ::g::Uno::Float2* advance, ::g::Uno::Float2* bearing, ::g::Uno::Content::Images::Bitmap* bitmap)
{
    __this->ctor_(*advance, *bearing, bitmap);
}

// public RenderedGlyph New(float2 advance, float2 bearing, Uno.Content.Images.Bitmap bitmap) :536
void RenderedGlyph__New1_fn(::g::Uno::Float2* advance, ::g::Uno::Float2* bearing, ::g::Uno::Content::Images::Bitmap* bitmap, RenderedGlyph* __retval)
{
    *__retval = RenderedGlyph__New1(*advance, *bearing, bitmap);
}

// public RenderedGlyph(float2 advance, float2 bearing, Uno.Content.Images.Bitmap bitmap) [instance] :536
void RenderedGlyph::ctor_(::g::Uno::Float2 advance, ::g::Uno::Float2 bearing, ::g::Uno::Content::Images::Bitmap* bitmap)
{
    Advance = advance;
    Bearing = bearing;
    Bitmap = bitmap;
}

// public RenderedGlyph New(float2 advance, float2 bearing, Uno.Content.Images.Bitmap bitmap) [static] :536
RenderedGlyph RenderedGlyph__New1(::g::Uno::Float2 advance, ::g::Uno::Float2 bearing, ::g::Uno::Content::Images::Bitmap* bitmap)
{
    RenderedGlyph obj1;
    obj1.ctor_(advance, bearing, bitmap);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/fonts/$.uno
// -----------------------------------------------------------------------------------------------------------

// public sealed class SdfFontShader :588
// {
static void SdfFontShader_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Uno::Content::Fonts::SdfFontShader, _draw_379fdedc), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SdfFontShader__New1_fn, 0, true, type, 0));
}

::g::Uno::Content::Fonts::TextShader_type* SdfFontShader_typeof()
{
    static uSStrong< ::g::Uno::Content::Fonts::TextShader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Content::Fonts::TextShader_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(SdfFontShader);
    options.TypeSize = sizeof(::g::Uno::Content::Fonts::TextShader_type);
    type = (::g::Uno::Content::Fonts::TextShader_type*)uClassType::New("Uno.Content.Fonts.SdfFontShader", options);
    type->fp_build_ = SdfFontShader_build;
    type->fp_ctor_ = (void*)SdfFontShader__New1_fn;
    type->fp_Draw = (void(*)(::g::Uno::Content::Fonts::TextShader*, ::g::Uno::Content::Fonts::TextShaderData*))SdfFontShader__Draw_fn;
    return type;
}

// public generated SdfFontShader() :588
void SdfFontShader__ctor_1_fn(SdfFontShader* __this)
{
    __this->ctor_1();
}

// public override sealed void Draw(Uno.Content.Fonts.TextShaderData data) :590
void SdfFontShader__Draw_fn(SdfFontShader* __this, ::g::Uno::Content::Fonts::TextShaderData* data)
{
    uStackFrame __("Uno.Content.Fonts.SdfFontShader", "Draw(Uno.Content.Fonts.TextShaderData)");
    float FontSmoothing_379fdedc_12_0_1 = 0.25f / ::g::Uno::Math::Max1(uPtr(data)->FontSpread * uPtr(data)->FontScale, 0.5f);
    __this->_draw_379fdedc.BlendEnabled(true);
    __this->_draw_379fdedc.DepthTestEnabled(false);
    __this->_draw_379fdedc.CullFace(uPtr(data)->DataCullFace);
    __this->_draw_379fdedc.BlendSrcRgb(2);
    __this->_draw_379fdedc.BlendDstRgb(3);
    __this->_draw_379fdedc.Use();
    __this->_draw_379fdedc.Attrib1(0, data->PositionInfo.Type, data->PositionInfo.Buffer, data->PositionInfo.BufferStride, data->PositionInfo.BufferOffset);
    __this->_draw_379fdedc.Attrib1(1, data->TexCoordInfo.Type, data->TexCoordInfo.Buffer, data->TexCoordInfo.BufferStride, data->TexCoordInfo.BufferOffset);
    __this->_draw_379fdedc.Attrib1(2, data->ColorInfo.Type, data->ColorInfo.Buffer, data->ColorInfo.BufferStride, data->ColorInfo.BufferOffset);
    __this->_draw_379fdedc.Uniform12(3, data->ClipSpaceMatrix);
    __this->_draw_379fdedc.Uniform(4, 0.5f - FontSmoothing_379fdedc_12_0_1);
    __this->_draw_379fdedc.Uniform(5, 0.5f + FontSmoothing_379fdedc_12_0_1);
    __this->_draw_379fdedc.Sampler3(6, data->FontTexture, ::g::Uno::Graphics::SamplerState__TrilinearClamp());
    __this->_draw_379fdedc.Draw(data->CharCount * 6, data->IndexType, data->IndexBuffer);
}

// private generated void init_DrawCalls() :588
void SdfFontShader__init_DrawCalls_fn(SdfFontShader* __this)
{
    __this->init_DrawCalls();
}

// public generated SdfFontShader New() :588
void SdfFontShader__New1_fn(SdfFontShader** __retval)
{
    *__retval = SdfFontShader::New1();
}

// public generated SdfFontShader() [instance] :588
void SdfFontShader::ctor_1()
{
    ctor_();
    init_DrawCalls();
}

// private generated void init_DrawCalls() [instance] :588
void SdfFontShader::init_DrawCalls()
{
    _draw_379fdedc = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::UnoCore_bundle::SdfFontShaderc4d110ba());
}

// public generated SdfFontShader New() [static] :588
SdfFontShader* SdfFontShader::New1()
{
    SdfFontShader* obj1 = (SdfFontShader*)uNew(SdfFontShader_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/fonts/$.uno
// -----------------------------------------------------------------------------------------------------------

// public sealed class SpriteFontShader :639
// {
static void SpriteFontShader_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Uno::Content::Fonts::SpriteFontShader, _draw_6b7396b4), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SpriteFontShader__New1_fn, 0, true, type, 0));
}

::g::Uno::Content::Fonts::TextShader_type* SpriteFontShader_typeof()
{
    static uSStrong< ::g::Uno::Content::Fonts::TextShader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Content::Fonts::TextShader_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(SpriteFontShader);
    options.TypeSize = sizeof(::g::Uno::Content::Fonts::TextShader_type);
    type = (::g::Uno::Content::Fonts::TextShader_type*)uClassType::New("Uno.Content.Fonts.SpriteFontShader", options);
    type->fp_build_ = SpriteFontShader_build;
    type->fp_ctor_ = (void*)SpriteFontShader__New1_fn;
    type->fp_Draw = (void(*)(::g::Uno::Content::Fonts::TextShader*, ::g::Uno::Content::Fonts::TextShaderData*))SpriteFontShader__Draw_fn;
    return type;
}

// public generated SpriteFontShader() :639
void SpriteFontShader__ctor_1_fn(SpriteFontShader* __this)
{
    __this->ctor_1();
}

// public override sealed void Draw(Uno.Content.Fonts.TextShaderData data) :641
void SpriteFontShader__Draw_fn(SpriteFontShader* __this, ::g::Uno::Content::Fonts::TextShaderData* data)
{
    uStackFrame __("Uno.Content.Fonts.SpriteFontShader", "Draw(Uno.Content.Fonts.TextShaderData)");
    __this->_draw_6b7396b4.BlendEnabled(true);
    __this->_draw_6b7396b4.DepthTestEnabled(false);
    __this->_draw_6b7396b4.CullFace(uPtr(data)->DataCullFace);
    __this->_draw_6b7396b4.BlendSrcRgb(2);
    __this->_draw_6b7396b4.BlendDstRgb(3);
    __this->_draw_6b7396b4.BlendDstAlpha(3);
    __this->_draw_6b7396b4.Use();
    __this->_draw_6b7396b4.Attrib1(0, data->PositionInfo.Type, data->PositionInfo.Buffer, data->PositionInfo.BufferStride, data->PositionInfo.BufferOffset);
    __this->_draw_6b7396b4.Attrib1(1, data->ColorInfo.Type, data->ColorInfo.Buffer, data->ColorInfo.BufferStride, data->ColorInfo.BufferOffset);
    __this->_draw_6b7396b4.Attrib1(2, data->TexCoordInfo.Type, data->TexCoordInfo.Buffer, data->TexCoordInfo.BufferStride, data->TexCoordInfo.BufferOffset);
    __this->_draw_6b7396b4.Uniform12(3, data->ClipSpaceMatrix);
    __this->_draw_6b7396b4.Sampler3(4, data->FontTexture, ::g::Uno::Graphics::SamplerState__TrilinearClamp());
    __this->_draw_6b7396b4.Draw(data->CharCount * 6, data->IndexType, data->IndexBuffer);
}

// private generated void init_DrawCalls() :639
void SpriteFontShader__init_DrawCalls_fn(SpriteFontShader* __this)
{
    __this->init_DrawCalls();
}

// public generated SpriteFontShader New() :639
void SpriteFontShader__New1_fn(SpriteFontShader** __retval)
{
    *__retval = SpriteFontShader::New1();
}

// public generated SpriteFontShader() [instance] :639
void SpriteFontShader::ctor_1()
{
    ctor_();
    init_DrawCalls();
}

// private generated void init_DrawCalls() [instance] :639
void SpriteFontShader::init_DrawCalls()
{
    _draw_6b7396b4 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::UnoCore_bundle::SpriteFontShader901b6a86());
}

// public generated SpriteFontShader New() [static] :639
SpriteFontShader* SpriteFontShader::New1()
{
    SpriteFontShader* obj1 = (SpriteFontShader*)uNew(SpriteFontShader_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/fonts/$.uno
// -----------------------------------------------------------------------------------------------------------

// public sealed class TextRenderer :660
// {
static void TextRenderer_build(uType* type)
{
    ::STRINGS[2] = uString::Const("font");
    ::TYPES[6] = ::g::Uno::Char_typeof();
    ::TYPES[7] = ::g::Uno::IDisposable_typeof();
    type->SetFields(0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _buffer), 0,
        ::g::Uno::Byte4_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _color), 0,
        ::g::Uno::Content::Fonts::TextShaderData_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _data), 0,
        ::g::Uno::Content::Fonts::BitmapFont_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _font), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _ibo), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _maxCharCount), 0,
        ::g::Uno::Content::Fonts::TextShader_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _shader), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _tracking), 0,
        ::g::Uno::Content::Fonts::TextTransform_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _transform), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _vbo), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Content::Fonts::TextRenderer, _HasBegun), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("Begin", NULL, (void*)TextRenderer__Begin_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Content::Fonts::BitmapFont_typeof()),
        new uFunction("get_Color", NULL, (void*)TextRenderer__get_Color_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Color", NULL, (void*)TextRenderer__set_Color_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("End", NULL, (void*)TextRenderer__End_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_HasBegun", NULL, (void*)TextRenderer__get_HasBegun_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("MeasureString", NULL, (void*)TextRenderer__MeasureString_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("MeasureString", NULL, (void*)TextRenderer__MeasureString1_fn, 0, false, ::g::Uno::Float2_typeof(), 3, ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)TextRenderer__New1_fn, 0, true, type, 3, ::g::Uno::Int_typeof(), ::g::Uno::Content::Fonts::TextShader_typeof(), ::g::Uno::Content::Fonts::TextTransform_typeof()),
        new uFunction("get_Transform", NULL, (void*)TextRenderer__get_Transform_fn, 0, false, ::g::Uno::Content::Fonts::TextTransform_typeof(), 0),
        new uFunction("set_Transform", NULL, (void*)TextRenderer__set_Transform_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Content::Fonts::TextTransform_typeof()),
        new uFunction("WriteString", NULL, (void*)TextRenderer__WriteString_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::String_typeof()),
        new uFunction("WriteString", NULL, (void*)TextRenderer__WriteString1_fn, 0, false, uVoid_typeof(), 4, ::g::Uno::Float2_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
}

uType* TextRenderer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Fonts.TextRenderer", options);
    type->fp_build_ = TextRenderer_build;
    return type;
}

// public TextRenderer(int maxCharCount, Uno.Content.Fonts.TextShader shader, [Uno.Content.Fonts.TextTransform transform]) :679
void TextRenderer__ctor__fn(TextRenderer* __this, int* maxCharCount, ::g::Uno::Content::Fonts::TextShader* shader, ::g::Uno::Content::Fonts::TextTransform* transform)
{
    __this->ctor_(*maxCharCount, shader, transform);
}

// public void Begin(Uno.Content.Fonts.BitmapFont font) :736
void TextRenderer__Begin_fn(TextRenderer* __this, ::g::Uno::Content::Fonts::BitmapFont* font)
{
    __this->Begin(font);
}

// public float4 get_Color() :726
void TextRenderer__get_Color_fn(TextRenderer* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :727
void TextRenderer__set_Color_fn(TextRenderer* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public void End() :916
void TextRenderer__End_fn(TextRenderer* __this)
{
    __this->End();
}

// public generated bool get_HasBegun() :662
void TextRenderer__get_HasBegun_fn(TextRenderer* __this, bool* __retval)
{
    *__retval = __this->HasBegun();
}

// private generated void set_HasBegun(bool value) :662
void TextRenderer__set_HasBegun_fn(TextRenderer* __this, bool* value)
{
    __this->HasBegun(*value);
}

// public float2 MeasureString(string text) :747
void TextRenderer__MeasureString_fn(TextRenderer* __this, uString* text, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MeasureString(text);
}

// public float2 MeasureString(string text, int startIndex, int length) :752
void TextRenderer__MeasureString1_fn(TextRenderer* __this, uString* text, int* startIndex, int* length, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MeasureString1(text, *startIndex, *length);
}

// public TextRenderer New(int maxCharCount, Uno.Content.Fonts.TextShader shader, [Uno.Content.Fonts.TextTransform transform]) :679
void TextRenderer__New1_fn(int* maxCharCount, ::g::Uno::Content::Fonts::TextShader* shader, ::g::Uno::Content::Fonts::TextTransform* transform, TextRenderer** __retval)
{
    *__retval = TextRenderer::New1(*maxCharCount, shader, transform);
}

// public Uno.Content.Fonts.TextTransform get_Transform() :708
void TextRenderer__get_Transform_fn(TextRenderer* __this, ::g::Uno::Content::Fonts::TextTransform** __retval)
{
    *__retval = __this->Transform();
}

// public void set_Transform(Uno.Content.Fonts.TextTransform value) :709
void TextRenderer__set_Transform_fn(TextRenderer* __this, ::g::Uno::Content::Fonts::TextTransform* value)
{
    __this->Transform(value);
}

// private void WriteGlyph(Uno.Content.Fonts.BitmapFont.GlyphInfo ci, float2 caret) :801
void TextRenderer__WriteGlyph_fn(TextRenderer* __this, ::g::Uno::Content::Fonts::BitmapFont__GlyphInfo* ci, ::g::Uno::Float2* caret)
{
    __this->WriteGlyph(*ci, *caret);
}

// public void WriteString(float2 caret, string text) :796
void TextRenderer__WriteString_fn(TextRenderer* __this, ::g::Uno::Float2* caret, uString* text)
{
    __this->WriteString(*caret, text);
}

// public void WriteString(float2 caret, string text, int startIndex, int length) :843
void TextRenderer__WriteString1_fn(TextRenderer* __this, ::g::Uno::Float2* caret, uString* text, int* startIndex, int* length)
{
    __this->WriteString1(*caret, text, *startIndex, *length);
}

// public TextRenderer(int maxCharCount, Uno.Content.Fonts.TextShader shader, [Uno.Content.Fonts.TextTransform transform]) [instance] :679
void TextRenderer::ctor_(int maxCharCount, ::g::Uno::Content::Fonts::TextShader* shader, ::g::Uno::Content::Fonts::TextTransform* transform)
{
    uStackFrame __("Uno.Content.Fonts.TextRenderer", ".ctor(int,Uno.Content.Fonts.TextShader,[Uno.Content.Fonts.TextTransform])");
    _color = ::g::Uno::Byte4__New2(255, 255, 255, 255);
    _maxCharCount = maxCharCount;
    ::g::Uno::Buffer* indexBuffer = ::g::Uno::Buffer::New4((maxCharCount * 6) * 2);

    for (int i = 0; i < maxCharCount; i++)
    {
        uPtr(indexBuffer)->Set23(i * 12, (uint16_t)(i * 4), true);
        indexBuffer->Set23((i * 12) + 2, (uint16_t)((i * 4) + 1), true);
        indexBuffer->Set23((i * 12) + 4, (uint16_t)((i * 4) + 2), true);
        indexBuffer->Set23((i * 12) + 6, (uint16_t)(i * 4), true);
        indexBuffer->Set23((i * 12) + 8, (uint16_t)((i * 4) + 2), true);
        indexBuffer->Set23((i * 12) + 10, (uint16_t)((i * 4) + 3), true);
    }

    _ibo = ::g::Uno::Graphics::IndexBuffer::New2(indexBuffer, 0);
    _vbo = ::g::Uno::Graphics::VertexBuffer::New3(2);
    _buffer = ::g::Uno::Buffer::New4((maxCharCount * 4) * 16);
    _data = ::g::Uno::Content::Fonts::TextShaderData::New1(_ibo, _vbo);
    _shader = shader;
    _transform = ((transform != NULL) ? transform : (::g::Uno::Content::Fonts::DefaultTextTransform*)::g::Uno::Content::Fonts::DefaultTextTransform::New1());
}

// public void Begin(Uno.Content.Fonts.BitmapFont font) [instance] :736
void TextRenderer::Begin(::g::Uno::Content::Fonts::BitmapFont* font)
{
    uStackFrame __("Uno.Content.Fonts.TextRenderer", "Begin(Uno.Content.Fonts.BitmapFont)");

    if (font == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[2/*"font"*/]));

    _font = font;
    uPtr(_data)->CharCount = 0;
    HasBegun(true);
}

// public float4 get_Color() [instance] :726
::g::Uno::Float4 TextRenderer::Color()
{
    return ::g::Uno::Float4__New2((float)_color.X / 255.0f, (float)_color.Y / 255.0f, (float)_color.Z / 255.0f, (float)_color.W / 255.0f);
}

// public void set_Color(float4 value) [instance] :727
void TextRenderer::Color(::g::Uno::Float4 value)
{
    _color = ::g::Uno::Byte4__New2((uint8_t)(::g::Uno::Math::Saturate1(value.X) * 255.0f), (uint8_t)(::g::Uno::Math::Saturate1(value.Y) * 255.0f), (uint8_t)(::g::Uno::Math::Saturate1(value.Z) * 255.0f), (uint8_t)(::g::Uno::Math::Saturate1(value.W) * 255.0f));
}

// public void End() [instance] :916
void TextRenderer::End()
{
    uStackFrame __("Uno.Content.Fonts.TextRenderer", "End()");

    if (uPtr(_data)->CharCount > 0)
    {
        uPtr(_vbo)->Update(_buffer);
        uPtr(_data)->FontTexture = uPtr(_font)->Texture;
        uPtr(_data)->FontSpread = uPtr(_font)->PixelSpread;
        uPtr(_data)->ClipSpaceMatrix = uPtr(_transform)->ResolveClipSpaceMatrix();
        uPtr(_data)->DataCullFace = uPtr(_transform)->CullFace();
        uPtr(_shader)->Draw(_data);
        uPtr(_data)->CharCount = 0;
    }

    _font = NULL;
    HasBegun(false);
}

// public generated bool get_HasBegun() [instance] :662
bool TextRenderer::HasBegun()
{
    return _HasBegun;
}

// private generated void set_HasBegun(bool value) [instance] :662
void TextRenderer::HasBegun(bool value)
{
    _HasBegun = value;
}

// public float2 MeasureString(string text) [instance] :747
::g::Uno::Float2 TextRenderer::MeasureString(uString* text)
{
    uStackFrame __("Uno.Content.Fonts.TextRenderer", "MeasureString(string)");
    return MeasureString1(text, 0, uPtr(text)->Length());
}

// public float2 MeasureString(string text, int startIndex, int length) [instance] :752
::g::Uno::Float2 TextRenderer::MeasureString1(uString* text, int startIndex, int length)
{
    uStackFrame __("Uno.Content.Fonts.TextRenderer", "MeasureString(string,int,int)");
    bool ret2;
    bool ret3;

    if ((_font == NULL) || ::g::Uno::String::op_Equality(text, NULL))
        return ::g::Uno::Float2__New1(0.0f);

    float caret = 0.0f;
    uChar last = 0;

    for (int i = startIndex; i < (startIndex + length); i++)
    {
        uChar c = uPtr(text)->Item(i);

        if ((i == 0) && (c == 8203))
            continue;

        ::g::Uno::Content::Fonts::BitmapFont__GlyphInfo ci;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(_font)->Glyphs), uCRef<uChar>(c), &ci, &ret2), ret2))
        {
            float kerning;

            if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(_font)->Kernings), uCRef(::g::Uno::Content::Fonts::BitmapFont__CharPair__New1(last, c)), &kerning, &ret3), ret3))
                caret = caret + (kerning * uPtr(_data)->FontScale);

            caret = caret + ((ci.Advance * uPtr(_data)->FontScale) + _tracking);
        }
        else if ((uPtr(_font)->FontFace != NULL) && uPtr(uPtr(_font)->FontFace)->ContainsGlyph(uPtr(_font)->PixelSize, c))
        {
            ::g::Uno::Content::Fonts::RenderedGlyph rg = uPtr(uPtr(_font)->FontFace)->RenderGlyph(uPtr(_font)->PixelSize, c);
            ::g::Uno::Float2 kerning1;

            if (uPtr(uPtr(_font)->FontFace)->TryGetKerning(uPtr(_font)->PixelSize, last, c, &kerning1))
                caret = caret + (kerning1.X * uPtr(_data)->FontScale);

            caret = caret + ((::g::Uno::Math::Round2(rg.Advance.X) * uPtr(_data)->FontScale) + _tracking);
        }

        last = c;
    }

    return ::g::Uno::Float2__New2(caret, uPtr(_font)->Ascent + uPtr(_font)->Descent);
}

// public Uno.Content.Fonts.TextTransform get_Transform() [instance] :708
::g::Uno::Content::Fonts::TextTransform* TextRenderer::Transform()
{
    return _transform;
}

// public void set_Transform(Uno.Content.Fonts.TextTransform value) [instance] :709
void TextRenderer::Transform(::g::Uno::Content::Fonts::TextTransform* value)
{
    _transform = value;
}

// private void WriteGlyph(Uno.Content.Fonts.BitmapFont.GlyphInfo ci, float2 caret) [instance] :801
void TextRenderer::WriteGlyph(::g::Uno::Content::Fonts::BitmapFont__GlyphInfo ci, ::g::Uno::Float2 caret)
{
    uStackFrame __("Uno.Content.Fonts.TextRenderer", "WriteGlyph(Uno.Content.Fonts.BitmapFont.GlyphInfo,float2)");

    if ((ci.UpperLeft.X != ci.LowerRight.X) && (ci.UpperLeft.Y != ci.LowerRight.Y))
    {
        ::g::Uno::Float2 p = ::g::Uno::Float2__op_Addition2(caret, ::g::Uno::Float2__op_Multiply1(ci.Bearing, uPtr(_data)->FontScale));
        int o = uPtr(_data)->CharCount * 64;
        ::g::Uno::Float2 s = ::g::Uno::Float2__op_Multiply1(ci.Size, uPtr(_data)->FontScale);
        uPtr(_buffer)->Set4(o, p.X, true);
        uPtr(_buffer)->Set4(o + 4, p.Y + s.Y, true);
        uPtr(_buffer)->Set23(o + 8, ci.UpperLeft.X, true);
        uPtr(_buffer)->Set23(o + 10, ci.LowerRight.Y, true);
        uPtr(_buffer)->Set2(o + 12, _color);
        uPtr(_buffer)->Set4(o + 16, p.X + s.X, true);
        uPtr(_buffer)->Set4(o + 20, p.Y + s.Y, true);
        uPtr(_buffer)->Set23(o + 24, ci.LowerRight.X, true);
        uPtr(_buffer)->Set23(o + 26, ci.LowerRight.Y, true);
        uPtr(_buffer)->Set2(o + 28, _color);
        uPtr(_buffer)->Set4(o + 32, p.X + s.X, true);
        uPtr(_buffer)->Set4(o + 36, p.Y, true);
        uPtr(_buffer)->Set23(o + 40, ci.LowerRight.X, true);
        uPtr(_buffer)->Set23(o + 42, ci.UpperLeft.Y, true);
        uPtr(_buffer)->Set2(o + 44, _color);
        uPtr(_buffer)->Set4(o + 48, p.X, true);
        uPtr(_buffer)->Set4(o + 52, p.Y, true);
        uPtr(_buffer)->Set23(o + 56, ci.UpperLeft.X, true);
        uPtr(_buffer)->Set23(o + 58, ci.UpperLeft.Y, true);
        uPtr(_buffer)->Set2(o + 60, _color);
        uPtr(_data)->CharCount++;
    }
}

// public void WriteString(float2 caret, string text) [instance] :796
void TextRenderer::WriteString(::g::Uno::Float2 caret, uString* text)
{
    uStackFrame __("Uno.Content.Fonts.TextRenderer", "WriteString(float2,string)");
    WriteString1(caret, text, 0, uPtr(text)->Length());
}

// public void WriteString(float2 caret, string text, int startIndex, int length) [instance] :843
void TextRenderer::WriteString1(::g::Uno::Float2 caret, uString* text, int startIndex, int length)
{
    uStackFrame __("Uno.Content.Fonts.TextRenderer", "WriteString(float2,string,int,int)");
    bool ret4;
    bool ret5;
    bool ret6;
    bool ret7;
    uChar last = 0;

    if (uPtr(_font)->PixelSpread > 0.0f)
        caret = ::g::Uno::Float2__op_Subtraction2(caret, ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__New1(uPtr(_font)->PixelSpread * uPtr(_data)->FontScale), ::g::Uno::Float2__New2(1.0f, 2.0f)));

    for (int i = startIndex; i < (startIndex + length); i++)
    {
        uChar c = uPtr(text)->Item(i);

        if ((i == 0) && (c == 8203))
            continue;

        ::g::Uno::Content::Fonts::BitmapFont__GlyphInfo ci;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(_font)->Glyphs), uCRef<uChar>(c), &ci, &ret4), ret4))
        {
            float kerning;

            if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(_font)->Kernings), uCRef(::g::Uno::Content::Fonts::BitmapFont__CharPair__New1(last, c)), &kerning, &ret5), ret5))
                caret.X = (caret.X + (kerning * uPtr(_data)->FontScale));

            if ((ci.UpperLeft.X != ci.LowerRight.X) && (ci.UpperLeft.Y != ci.LowerRight.Y))
            {
                WriteGlyph(ci, caret);

                if (uPtr(_data)->CharCount == _maxCharCount)
                {
                    ::g::Uno::Content::Fonts::BitmapFont* temp = _font;
                    End();
                    Begin(temp);
                }
            }

            caret.X = (caret.X + ((ci.Advance * uPtr(_data)->FontScale) + _tracking));
        }
        else if ((uPtr(_font)->FontFace != NULL) && uPtr(uPtr(_font)->FontFace)->ContainsGlyph(uPtr(_font)->PixelSize, c))
        {
            ::g::Uno::Content::Fonts::BitmapFont* oldFont = _font;
            ::g::Uno::Content::Fonts::BitmapFont* tempFont = ::g::Uno::Content::Fonts::FontFaceHelpers::RenderSpriteFont(uPtr(oldFont)->FontFace, uPtr(oldFont)->PixelSize, ::g::Uno::Char::ToString(c, ::TYPES[6/*char*/]));

            {
                const auto __finally_fun = [&]()
                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)tempFont), ::TYPES[7/*Uno.IDisposable*/]));
                };

                const uFinally<decltype(__finally_fun)> __f(__finally_fun);

                if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(tempFont)->Glyphs), uCRef<uChar>(c), &ci, &ret6), ret6))
                {
                    float kerning1;

                    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(tempFont)->Kernings), uCRef(::g::Uno::Content::Fonts::BitmapFont__CharPair__New1(last, c)), &kerning1, &ret7), ret7))
                        caret.X = (caret.X + (kerning1 * uPtr(_data)->FontScale));

                    if ((ci.UpperLeft.X != ci.LowerRight.X) && (ci.UpperLeft.Y != ci.LowerRight.Y))
                    {
                        End();
                        Begin(tempFont);
                        WriteGlyph(ci, caret);
                        End();
                        Begin(oldFont);
                    }

                    caret.X = (caret.X + ((ci.Advance * uPtr(_data)->FontScale) + _tracking));
                }
            }
        }

        last = c;
    }
}

// public TextRenderer New(int maxCharCount, Uno.Content.Fonts.TextShader shader, [Uno.Content.Fonts.TextTransform transform]) [static] :679
TextRenderer* TextRenderer::New1(int maxCharCount, ::g::Uno::Content::Fonts::TextShader* shader, ::g::Uno::Content::Fonts::TextTransform* transform)
{
    TextRenderer* obj1 = (TextRenderer*)uNew(TextRenderer_typeof());
    obj1->ctor_(maxCharCount, shader, transform);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/fonts/$.uno
// -----------------------------------------------------------------------------------------------------------

// public abstract class TextShader :997
// {
static void TextShader_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction("Draw", NULL, NULL, offsetof(TextShader_type, fp_Draw), false, uVoid_typeof(), 1, ::g::Uno::Content::Fonts::TextShaderData_typeof()));
}

TextShader_type* TextShader_typeof()
{
    static uSStrong<TextShader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TextShader);
    options.TypeSize = sizeof(TextShader_type);
    type = (TextShader_type*)uClassType::New("Uno.Content.Fonts.TextShader", options);
    type->fp_build_ = TextShader_build;
    return type;
}

// protected generated TextShader() :997
void TextShader__ctor__fn(TextShader* __this)
{
    __this->ctor_();
}

// protected generated TextShader() [instance] :997
void TextShader::ctor_()
{
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/fonts/$.uno
// -----------------------------------------------------------------------------------------------------------

// public sealed class TextShaderData :953
// {
static void TextShaderData_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, CharCount), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, ClipSpaceMatrix), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, ColorInfo), 0,
        ::g::Uno::Graphics::PolygonFace_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, DataCullFace), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, FontScale), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, FontSpread), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, FontTexture), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, IndexBuffer), 0,
        ::g::Uno::Graphics::IndexType_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, IndexType), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, PositionInfo), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(::g::Uno::Content::Fonts::TextShaderData, TexCoordInfo), 0);
    type->Reflection.SetFields(11,
        new uField("CharCount", 0),
        new uField("ClipSpaceMatrix", 1),
        new uField("ColorInfo", 2),
        new uField("DataCullFace", 3),
        new uField("FontScale", 4),
        new uField("FontSpread", 5),
        new uField("FontTexture", 6),
        new uField("IndexBuffer", 7),
        new uField("IndexType", 8),
        new uField("PositionInfo", 9),
        new uField("TexCoordInfo", 10));
}

uType* TextShaderData_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(TextShaderData);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Fonts.TextShaderData", options);
    type->fp_build_ = TextShaderData_build;
    return type;
}

// internal TextShaderData(Uno.Graphics.IndexBuffer ibo, Uno.Graphics.VertexBuffer vbo) :971
void TextShaderData__ctor__fn(TextShaderData* __this, ::g::Uno::Graphics::IndexBuffer* ibo, ::g::Uno::Graphics::VertexBuffer* vbo)
{
    __this->ctor_(ibo, vbo);
}

// internal TextShaderData New(Uno.Graphics.IndexBuffer ibo, Uno.Graphics.VertexBuffer vbo) :971
void TextShaderData__New1_fn(::g::Uno::Graphics::IndexBuffer* ibo, ::g::Uno::Graphics::VertexBuffer* vbo, TextShaderData** __retval)
{
    *__retval = TextShaderData::New1(ibo, vbo);
}

// internal TextShaderData(Uno.Graphics.IndexBuffer ibo, Uno.Graphics.VertexBuffer vbo) [instance] :971
void TextShaderData::ctor_(::g::Uno::Graphics::IndexBuffer* ibo, ::g::Uno::Graphics::VertexBuffer* vbo)
{
    FontScale = 1.0f;
    ClipSpaceMatrix = ::g::Uno::Float4x4__Identity();
    DataCullFace = 0;
    IndexType = 2;
    IndexBuffer = ibo;
    PositionInfo.Buffer = vbo;
    PositionInfo.BufferOffset = 0;
    PositionInfo.BufferStride = 16;
    PositionInfo.Type = 2;
    TexCoordInfo.Buffer = vbo;
    TexCoordInfo.BufferOffset = 8;
    TexCoordInfo.BufferStride = 16;
    TexCoordInfo.Type = 14;
    ColorInfo.Buffer = vbo;
    ColorInfo.BufferOffset = 12;
    ColorInfo.BufferStride = 16;
    ColorInfo.Type = 20;
}

// internal TextShaderData New(Uno.Graphics.IndexBuffer ibo, Uno.Graphics.VertexBuffer vbo) [static] :971
TextShaderData* TextShaderData::New1(::g::Uno::Graphics::IndexBuffer* ibo, ::g::Uno::Graphics::VertexBuffer* vbo)
{
    TextShaderData* obj1 = (TextShaderData*)uNew(TextShaderData_typeof());
    obj1->ctor_(ibo, vbo);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/fonts/$.uno
// -----------------------------------------------------------------------------------------------------------

// public abstract class TextTransform :1030
// {
static void TextTransform_build(uType* type)
{
    type->Reflection.SetFunctions(4,
        new uFunction("get_CullFace", NULL, NULL, offsetof(TextTransform_type, fp_get_CullFace), false, ::g::Uno::Graphics::PolygonFace_typeof(), 0),
        new uFunction("get_Matrix", NULL, NULL, offsetof(TextTransform_type, fp_get_Matrix), false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("set_Matrix", NULL, NULL, offsetof(TextTransform_type, fp_set_Matrix), false, uVoid_typeof(), 1, ::g::Uno::Float4x4_typeof()),
        new uFunction("ResolveClipSpaceMatrix", NULL, NULL, offsetof(TextTransform_type, fp_ResolveClipSpaceMatrix), false, ::g::Uno::Float4x4_typeof(), 0));
}

TextTransform_type* TextTransform_typeof()
{
    static uSStrong<TextTransform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TextTransform);
    options.TypeSize = sizeof(TextTransform_type);
    type = (TextTransform_type*)uClassType::New("Uno.Content.Fonts.TextTransform", options);
    type->fp_build_ = TextTransform_build;
    type->fp_get_CullFace = TextTransform__get_CullFace_fn;
    return type;
}

// protected generated TextTransform() :1030
void TextTransform__ctor__fn(TextTransform* __this)
{
    __this->ctor_();
}

// public virtual Uno.Graphics.PolygonFace get_CullFace() :1040
void TextTransform__get_CullFace_fn(TextTransform* __this, int* __retval)
{
    return *__retval = 0, void();
}

// protected generated TextTransform() [instance] :1030
void TextTransform::ctor_()
{
}
// }

}}}} // ::g::Uno::Content::Fonts
