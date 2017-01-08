// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseText_bundle.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Internal.Cache-2.h>
#include <Fuse.Internal.CacheItem-2.h>
#include <Fuse.Internal.FontFaceDescriptor.h>
#include <Fuse.Internal.RectPacker.h>
#include <Fuse.Resources.SystemFileSource.h>
#include <Fuse.Text.Batch.h>
#include <Fuse.Text.Bidirectional.Run.h>
#include <Fuse.Text.FallingBackFont.h>
#include <Fuse.Text.FallingBackFontFace.h>
#include <Fuse.Text.Font.h>
#include <Fuse.Text.FontFace.h>
#include <Fuse.Text.Glyph.h>
#include <Fuse.Text.GlyphAtlas.h>
#include <Fuse.Text.GlyphTexture.h>
#include <Fuse.Text.Implementation.CoreTextFontFace.h>
#include <Fuse.Text.Implementation.FreeTypeFontFace.h>
#include <Fuse.Text.LazyFont.h>
#include <Fuse.Text.LazyFontFace.h>
#include <Fuse.Text.Measure.h>
#include <Fuse.Text.PositionedGlyph.h>
#include <Fuse.Text.PositionedRun.h>
#include <Fuse.Text.Quad.h>
#include <Fuse.Text.RenderedGlyph.h>
#include <Fuse.Text.Renderer.h>
#include <Fuse.Text.Renderer.SharedIndexBuffer.h>
#include <Fuse.Text.Shape.h>
#include <Fuse.Text.ShapedRun.h>
#include <Fuse.Text.ShapedRun.PGEnumerator.h>
#include <Fuse.Text.SinglyLinkedList-1.Enumerator.h>
#include <Fuse.Text.SinglyLinkedList-1.h>
#include <Fuse.Text.Substring.CharEnumerator.h>
#include <Fuse.Text.Substring.h>
#include <Fuse.Text.Substring.LineEnumerable.h>
#include <Fuse.Text.Substring.LineEnumerator.h>
#include <Fuse.Text.SubstringExtensions.h>
#include <Fuse.Text.SubTexture.h>
#include <Fuse.Text.TextDirection.h>
#include <Fuse.Text.TextureAtlas.h>
#include <Fuse.Text.Truncate.h>
#include <Fuse.Text.Wrap.h>
#include <Uno.ArgumentException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Content.Images.Bitmap.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-2.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.FormatHelpers.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.BufferImpl.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.Threading.LockGuard.h>
#include <Uno.Threading.Mutex.h>
#include <Uno.UInt.h>
#include <Uno.UShort.h>
#include <Uno.UShort2.h>
#include <Uno.UX.FileSource.h>
static uString* STRINGS[23];
static uType* TYPES[40];

namespace g{
namespace Fuse{
namespace Text{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// internal struct Batch :1467
// {
// public void Dispose() [adapter] :1481
static void Batch__Dispose_ex(uObject* __this)
{
    Batch__Dispose_fn((Batch*)((uint8_t*)__this + sizeof(uObject)));
}

static void Batch_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Batch_type, interface0));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::Batch, TextureIndex), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Text::Batch, VertexBuffer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::Batch, QuadCount), 0);
}

Batch_type* Batch_typeof()
{
    static uSStrong<Batch_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ValueSize = sizeof(Batch);
    options.TypeSize = sizeof(Batch_type);
    type = (Batch_type*)uStructType::New("Fuse.Text.Batch", options);
    type->fp_build_ = Batch_build;
    type->interface0.fp_Dispose = Batch__Dispose_ex;
    return type;
}

// public Batch(int textureIndex, Uno.Graphics.VertexBuffer vbo, int quadCount) :1473
void Batch__ctor__fn(Batch* __this, int* textureIndex, ::g::Uno::Graphics::VertexBuffer* vbo, int* quadCount)
{
    __this->ctor_(*textureIndex, vbo, *quadCount);
}

// public void Dispose() :1481
void Batch__Dispose_fn(Batch* __this)
{
    __this->Dispose();
}

// public Batch New(int textureIndex, Uno.Graphics.VertexBuffer vbo, int quadCount) :1473
void Batch__New1_fn(int* textureIndex, ::g::Uno::Graphics::VertexBuffer* vbo, int* quadCount, Batch* __retval)
{
    *__retval = Batch__New1(*textureIndex, vbo, *quadCount);
}

// public Batch(int textureIndex, Uno.Graphics.VertexBuffer vbo, int quadCount) [instance] :1473
void Batch::ctor_(int textureIndex, ::g::Uno::Graphics::VertexBuffer* vbo, int quadCount)
{
    uStackFrame __("Fuse.Text.Batch", ".ctor(int,Uno.Graphics.VertexBuffer,int)");
    TextureIndex = textureIndex;
    ::g::Fuse::Text::Renderer__SharedIndexBuffer::EnsureSize(quadCount);
    VertexBuffer = vbo;
    QuadCount = quadCount;
}

// public void Dispose() [instance] :1481
void Batch::Dispose()
{
    uStackFrame __("Fuse.Text.Batch", "Dispose()");
    uPtr(VertexBuffer)->Dispose();
}

// public Batch New(int textureIndex, Uno.Graphics.VertexBuffer vbo, int quadCount) [static] :1473
Batch Batch__New1(int textureIndex, ::g::Uno::Graphics::VertexBuffer* vbo, int quadCount)
{
    Batch obj1;
    obj1.ctor_(textureIndex, vbo, quadCount);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// private sealed class Substring.CharEnumerator :2101
// {
static void Substring__CharEnumerator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Char_typeof(), NULL), offsetof(Substring__CharEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Substring__CharEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Substring__CharEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::Substring__CharEnumerator, _index), 0,
        ::g::Fuse::Text::Substring_typeof(), offsetof(::g::Fuse::Text::Substring__CharEnumerator, _text), 0);
}

Substring__CharEnumerator_type* Substring__CharEnumerator_typeof()
{
    static uSStrong<Substring__CharEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Substring__CharEnumerator);
    options.TypeSize = sizeof(Substring__CharEnumerator_type);
    type = (Substring__CharEnumerator_type*)uClassType::New("Fuse.Text.Substring.CharEnumerator", options);
    type->fp_build_ = Substring__CharEnumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))Substring__CharEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Substring__CharEnumerator__Dispose_fn;
    type->interface2.fp_Reset = (void(*)(uObject*))Substring__CharEnumerator__Reset_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))Substring__CharEnumerator__MoveNext_fn;
    return type;
}

// public CharEnumerator(Fuse.Text.Substring text) :2106
void Substring__CharEnumerator__ctor__fn(Substring__CharEnumerator* __this, ::g::Fuse::Text::Substring* text)
{
    __this->ctor_(text);
}

// public char get_Current() :2125
void Substring__CharEnumerator__get_Current_fn(Substring__CharEnumerator* __this, uChar* __retval)
{
    *__retval = __this->Current();
}

// public void Dispose() :2131
void Substring__CharEnumerator__Dispose_fn(Substring__CharEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :2117
void Substring__CharEnumerator__MoveNext_fn(Substring__CharEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public CharEnumerator New(Fuse.Text.Substring text) :2106
void Substring__CharEnumerator__New1_fn(::g::Fuse::Text::Substring* text, Substring__CharEnumerator** __retval)
{
    *__retval = Substring__CharEnumerator::New1(text);
}

// public void Reset() :2112
void Substring__CharEnumerator__Reset_fn(Substring__CharEnumerator* __this)
{
    __this->Reset();
}

// public CharEnumerator(Fuse.Text.Substring text) [instance] :2106
void Substring__CharEnumerator::ctor_(::g::Fuse::Text::Substring* text)
{
    _text = text;
    Reset();
}

// public char get_Current() [instance] :2125
uChar Substring__CharEnumerator::Current()
{
    uStackFrame __("Fuse.Text.Substring.CharEnumerator", "get_Current()");
    return uPtr(_text)->Item(_index);
}

// public void Dispose() [instance] :2131
void Substring__CharEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :2117
bool Substring__CharEnumerator::MoveNext()
{
    uStackFrame __("Fuse.Text.Substring.CharEnumerator", "MoveNext()");
    ++_index;
    return _index < uPtr(_text)->Length;
}

// public void Reset() [instance] :2112
void Substring__CharEnumerator::Reset()
{
    _index = -1;
}

// public CharEnumerator New(Fuse.Text.Substring text) [static] :2106
Substring__CharEnumerator* Substring__CharEnumerator::New1(::g::Fuse::Text::Substring* text)
{
    Substring__CharEnumerator* obj1 = (Substring__CharEnumerator*)uNew(Substring__CharEnumerator_typeof());
    obj1->ctor_(text);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/implementation/$.uno
// ---------------------------------------------------------------------------------------------------

// private sealed class SinglyLinkedList<T>.Enumerator :1199
// {
static void SinglyLinkedList__Enumerator_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Text::SinglyLinkedList_typeof();
    type->SetPrecalc(
        ::g::Fuse::Text::SinglyLinkedList_typeof()->MakeType(type->T(0), NULL),
        type->T(0));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), offsetof(SinglyLinkedList__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(SinglyLinkedList__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(SinglyLinkedList__Enumerator_type, interface2));
    type->SetFields(0,
        ::TYPES[0/*Fuse.Text.SinglyLinkedList`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Text::SinglyLinkedList__Enumerator, _beforeHead), 0,
        ::TYPES[0/*Fuse.Text.SinglyLinkedList`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Text::SinglyLinkedList__Enumerator, _current), 0);
}

SinglyLinkedList__Enumerator_type* SinglyLinkedList__Enumerator_typeof()
{
    static uSStrong<SinglyLinkedList__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(SinglyLinkedList__Enumerator);
    options.TypeSize = sizeof(SinglyLinkedList__Enumerator_type);
    type = (SinglyLinkedList__Enumerator_type*)uClassType::New("Fuse.Text.SinglyLinkedList`1.Enumerator", options);
    type->fp_build_ = SinglyLinkedList__Enumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))SinglyLinkedList__Enumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))SinglyLinkedList__Enumerator__Dispose_fn;
    type->interface2.fp_Reset = (void(*)(uObject*))SinglyLinkedList__Enumerator__Reset_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))SinglyLinkedList__Enumerator__MoveNext_fn;
    return type;
}

// public Enumerator(Fuse.Text.SinglyLinkedList<T> list) :1204
void SinglyLinkedList__Enumerator__ctor__fn(SinglyLinkedList__Enumerator* __this, ::g::Fuse::Text::SinglyLinkedList* list)
{
    __this->ctor_(list);
}

// public T get_Current() :1212
void SinglyLinkedList__Enumerator__get_Current_fn(SinglyLinkedList__Enumerator* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uStackFrame __("Fuse.Text.SinglyLinkedList`1.Enumerator", "get_Current()");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((::g::Fuse::Text::SinglyLinkedList__get_Value_fn(uPtr(__this->_current), &ret3), ret3)), void();
}

// public void Dispose() :1233
void SinglyLinkedList__Enumerator__Dispose_fn(SinglyLinkedList__Enumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :1223
void SinglyLinkedList__Enumerator__MoveNext_fn(SinglyLinkedList__Enumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public Enumerator New(Fuse.Text.SinglyLinkedList<T> list) :1204
void SinglyLinkedList__Enumerator__New1_fn(uType* __type, ::g::Fuse::Text::SinglyLinkedList* list, SinglyLinkedList__Enumerator** __retval)
{
    *__retval = SinglyLinkedList__Enumerator::New1(__type, list);
}

// public void Reset() :1218
void SinglyLinkedList__Enumerator__Reset_fn(SinglyLinkedList__Enumerator* __this)
{
    __this->Reset();
}

// public Enumerator(Fuse.Text.SinglyLinkedList<T> list) [instance] :1204
void SinglyLinkedList__Enumerator::ctor_(::g::Fuse::Text::SinglyLinkedList* list)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Text.SinglyLinkedList<T>*/),
    };
    ::g::Fuse::Text::SinglyLinkedList* ret2;
    _beforeHead = (::g::Fuse::Text::SinglyLinkedList__New1_fn(__types[0], uT(__type->Precalced(1/*T*/), U_ALLOCA(__type->Precalced(1/*T*/)->ValueSize)), list, &ret2), ret2);
    Reset();
}

// public void Dispose() [instance] :1233
void SinglyLinkedList__Enumerator::Dispose()
{
}

// public bool MoveNext() [instance] :1223
bool SinglyLinkedList__Enumerator::MoveNext()
{
    uStackFrame __("Fuse.Text.SinglyLinkedList`1.Enumerator", "MoveNext()");

    if (_current != NULL)
    {
        _current = uPtr(_current)->Next;
        return _current != NULL;
    }

    return false;
}

// public void Reset() [instance] :1218
void SinglyLinkedList__Enumerator::Reset()
{
    _current = _beforeHead;
}

// public Enumerator New(Fuse.Text.SinglyLinkedList<T> list) [static] :1204
SinglyLinkedList__Enumerator* SinglyLinkedList__Enumerator::New1(uType* __type, ::g::Fuse::Text::SinglyLinkedList* list)
{
    SinglyLinkedList__Enumerator* obj1 = (SinglyLinkedList__Enumerator*)uNew(__type);
    obj1->ctor_(list);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public sealed class FallingBackFont :874
// {
static void FallingBackFont_build(uType* type)
{
    ::STRINGS[0] = uString::Const("fonts.Length > 0");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno");
    ::STRINGS[2] = uString::Const("fontIndex == 0");
    ::TYPES[1] = uObject_typeof()->Array();
    ::TYPES[2] = ::g::Fuse::Internal::CacheItem_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Fuse::Text::Font_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedGlyph_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Text::Font_type, interface0));
    type->SetFields(4,
        ::TYPES[2/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/]->Array(), offsetof(::g::Fuse::Text::FallingBackFont, Fonts), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FallingBackFont__New1_fn, 0, true, type, 1, ::TYPES[2/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/]->Array()));
}

::g::Fuse::Text::Font_type* FallingBackFont_typeof()
{
    static uSStrong< ::g::Fuse::Text::Font_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Text::Font_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FallingBackFont);
    options.TypeSize = sizeof(::g::Fuse::Text::Font_type);
    type = (::g::Fuse::Text::Font_type*)uClassType::New("Fuse.Text.FallingBackFont", options);
    type->fp_build_ = FallingBackFont_build;
    type->fp_get_Ascender = (void(*)(::g::Fuse::Text::Font*, float*))FallingBackFont__get_Ascender_fn;
    type->fp_get_Descender = (void(*)(::g::Fuse::Text::Font*, float*))FallingBackFont__get_Descender_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Text::Font*))FallingBackFont__Dispose_fn;
    type->fp_GetCachedGlyphTexture = (void(*)(::g::Fuse::Text::Font*, ::g::Fuse::Text::Glyph*, ::g::Fuse::Text::GlyphAtlas*, int*, ::g::Fuse::Text::GlyphTexture*))FallingBackFont__GetCachedGlyphTexture_fn;
    type->fp_get_LineHeight = (void(*)(::g::Fuse::Text::Font*, float*))FallingBackFont__get_LineHeight_fn;
    type->fp_get_NumGlyphs = (void(*)(::g::Fuse::Text::Font*, int*))FallingBackFont__get_NumGlyphs_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Text::Font*, int*))FallingBackFont__get_PixelSize_fn;
    type->fp_Render = (void(*)(::g::Fuse::Text::Font*, ::g::Fuse::Text::Glyph*, ::g::Fuse::Text::RenderedGlyph*))FallingBackFont__Render_fn;
    type->fp_Shape = (void(*)(::g::Fuse::Text::Font*, ::g::Fuse::Text::Substring*, int*, int*, uArray**))FallingBackFont__Shape_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))FallingBackFont__Dispose_fn;
    return type;
}

// public FallingBackFont(Fuse.Internal.CacheItem<int, Fuse.Text.Font>[] fonts) :878
void FallingBackFont__ctor_1_fn(FallingBackFont* __this, uArray* fonts)
{
    __this->ctor_1(fonts);
}

// public override sealed float get_Ascender() :897
void FallingBackFont__get_Ascender_fn(FallingBackFont* __this, float* __retval)
{
    uStackFrame __("Fuse.Text.FallingBackFont", "get_Ascender()");
    return *__retval = uPtr((::g::Fuse::Text::Font*)uPtr(__this->Fonts)->Item< ::g::Fuse::Internal::CacheItem>(0).Value(::TYPES[2/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/]))->Ascender(), void();
}

// public override sealed float get_Descender() :898
void FallingBackFont__get_Descender_fn(FallingBackFont* __this, float* __retval)
{
    uStackFrame __("Fuse.Text.FallingBackFont", "get_Descender()");
    return *__retval = uPtr((::g::Fuse::Text::Font*)uPtr(__this->Fonts)->Item< ::g::Fuse::Internal::CacheItem>(0).Value(::TYPES[2/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/]))->Descender(), void();
}

// public override sealed void Dispose() :884
void FallingBackFont__Dispose_fn(FallingBackFont* __this)
{
    uStackFrame __("Fuse.Text.FallingBackFont", "Dispose()");
    uArray* array2;
    int index3;
    int length4;
    ::g::Fuse::Text::Font__Dispose_fn(__this);

    if (__this->Fonts != NULL)
    {
        for (array2 = __this->Fonts, index3 = 0, length4 = uPtr(array2)->Length(); index3 < length4; ++index3)
        {
            ::g::Fuse::Internal::CacheItem font = uPtr(array2)->Item< ::g::Fuse::Internal::CacheItem>(index3);
            font.Dispose(::TYPES[2/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/]);
        }

        __this->Fonts = NULL;
    }
}

// public override sealed Fuse.Text.GlyphTexture GetCachedGlyphTexture(Fuse.Text.Glyph glyph, Fuse.Text.GlyphAtlas atlas, int version) :966
void FallingBackFont__GetCachedGlyphTexture_fn(FallingBackFont* __this, ::g::Fuse::Text::Glyph* glyph, ::g::Fuse::Text::GlyphAtlas* atlas, int* version, ::g::Fuse::Text::GlyphTexture* __retval)
{
    uStackFrame __("Fuse.Text.FallingBackFont", "GetCachedGlyphTexture(Fuse.Text.Glyph,Fuse.Text.GlyphAtlas,int)");
    ::g::Fuse::Text::Glyph glyph_ = *glyph;
    int version_ = *version;
    return *__retval = uPtr((::g::Fuse::Text::Font*)uPtr(__this->Fonts)->Item< ::g::Fuse::Internal::CacheItem>(glyph_.FontIndex).Value(::TYPES[2/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/]))->GetCachedGlyphTexture(::g::Fuse::Text::Glyph__New1(0, glyph_.Index), atlas, version_), void();
}

// public override sealed float get_LineHeight() :899
void FallingBackFont__get_LineHeight_fn(FallingBackFont* __this, float* __retval)
{
    uStackFrame __("Fuse.Text.FallingBackFont", "get_LineHeight()");
    return *__retval = uPtr((::g::Fuse::Text::Font*)uPtr(__this->Fonts)->Item< ::g::Fuse::Internal::CacheItem>(0).Value(::TYPES[2/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/]))->LineHeight(), void();
}

// public FallingBackFont New(Fuse.Internal.CacheItem<int, Fuse.Text.Font>[] fonts) :878
void FallingBackFont__New1_fn(uArray* fonts, FallingBackFont** __retval)
{
    *__retval = FallingBackFont::New1(fonts);
}

// public override sealed int get_NumGlyphs() :901
void FallingBackFont__get_NumGlyphs_fn(FallingBackFont* __this, int* __retval)
{
    return *__retval = 0, void();
}

// public override sealed int get_PixelSize() :900
void FallingBackFont__get_PixelSize_fn(FallingBackFont* __this, int* __retval)
{
    uStackFrame __("Fuse.Text.FallingBackFont", "get_PixelSize()");
    return *__retval = uPtr((::g::Fuse::Text::Font*)uPtr(__this->Fonts)->Item< ::g::Fuse::Internal::CacheItem>(0).Value(::TYPES[2/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/]))->PixelSize(), void();
}

// public override sealed Fuse.Text.RenderedGlyph Render(Fuse.Text.Glyph glyph) :903
void FallingBackFont__Render_fn(FallingBackFont* __this, ::g::Fuse::Text::Glyph* glyph, ::g::Fuse::Text::RenderedGlyph* __retval)
{
    uStackFrame __("Fuse.Text.FallingBackFont", "Render(Fuse.Text.Glyph)");
    ::g::Fuse::Text::Glyph glyph_ = *glyph;
    return *__retval = uPtr((::g::Fuse::Text::Font*)uPtr(__this->Fonts)->Item< ::g::Fuse::Internal::CacheItem>(glyph_.FontIndex).Value(::TYPES[2/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/]))->Render(glyph_), void();
}

// public override sealed Fuse.Text.PositionedGlyph[] Shape(Fuse.Text.Substring text, int fontIndex, Fuse.Text.TextDirection dir) :908
void FallingBackFont__Shape_fn(FallingBackFont* __this, ::g::Fuse::Text::Substring* text, int* fontIndex, int* dir, uArray** __retval)
{
    uStackFrame __("Fuse.Text.FallingBackFont", "Shape(Fuse.Text.Substring,int,Fuse.Text.TextDirection)");
    int fontIndex_ = *fontIndex;
    int dir_ = *dir;
    ::g::Uno::Diagnostics::Debug::Assert(fontIndex_ == 0, ::STRINGS[2/*"fontIndex =...*/], ::STRINGS[1/*"/Users/most...*/], 911, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Int_typeof(), fontIndex_), uBox<int>(::g::Uno::Int_typeof(), 0)));
    return *__retval = __this->ShapeInner(text, 0, dir_), void();
}

// private Fuse.Text.PositionedGlyph[] ShapeInner(Fuse.Text.Substring text, int fontIndex, Fuse.Text.TextDirection dir) :915
void FallingBackFont__ShapeInner_fn(FallingBackFont* __this, ::g::Fuse::Text::Substring* text, int* fontIndex, int* dir, uArray** __retval)
{
    *__retval = __this->ShapeInner(text, *fontIndex, *dir);
}

// private bool TryFindUnhandledSegment(Fuse.Text.PositionedGlyph[] glyphs, int startIndex, int& start, int& end) :949
void FallingBackFont__TryFindUnhandledSegment_fn(FallingBackFont* __this, uArray* glyphs, int* startIndex, int* start, int* end, bool* __retval)
{
    *__retval = __this->TryFindUnhandledSegment(glyphs, *startIndex, start, end);
}

// public FallingBackFont(Fuse.Internal.CacheItem<int, Fuse.Text.Font>[] fonts) [instance] :878
void FallingBackFont::ctor_1(uArray* fonts)
{
    uStackFrame __("Fuse.Text.FallingBackFont", ".ctor(Fuse.Internal.CacheItem<int, Fuse.Text.Font>[])");
    int assert1;
    ctor_();
    assert1 = uPtr(fonts)->Length();
    ::g::Uno::Diagnostics::Debug::Assert(assert1 > 0, ::STRINGS[0/*"fonts.Lengt...*/], ::STRINGS[1/*"/Users/most...*/], 880, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Int_typeof(), assert1), uBox<int>(::g::Uno::Int_typeof(), 0)));
    Fonts = fonts;
}

// private Fuse.Text.PositionedGlyph[] ShapeInner(Fuse.Text.Substring text, int fontIndex, Fuse.Text.TextDirection dir) [instance] :915
uArray* FallingBackFont::ShapeInner(::g::Fuse::Text::Substring* text, int fontIndex, int dir)
{
    uStackFrame __("Fuse.Text.FallingBackFont", "ShapeInner(Fuse.Text.Substring,int,Fuse.Text.TextDirection)");
    uArray* array5;
    int index6;
    int length7;
    uArray* positionedGlyphs = uPtr((::g::Fuse::Text::Font*)uPtr(Fonts)->Item< ::g::Fuse::Internal::CacheItem>(fontIndex).Value(::TYPES[2/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/]))->Shape(text, fontIndex, dir);
    int i = 0, start = 0, end = 0;

    if (((fontIndex + 1) < uPtr(Fonts)->Length()) && TryFindUnhandledSegment(positionedGlyphs, i, &start, &end))
    {
        ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[3/*Uno.Collections.List<Fuse.Text.PositionedGlyph>*/], uPtr(positionedGlyphs)->Length());

        do
        {
            for (int j = i; j < start; ++j)
                ::g::Uno::Collections::List__Add_fn(uPtr(result), uCRef(uPtr(positionedGlyphs)->Item< ::g::Fuse::Text::PositionedGlyph>(j)));

            int firstCluster = uPtr(positionedGlyphs)->Item< ::g::Fuse::Text::PositionedGlyph>(start).Cluster;
            int lastCluster = positionedGlyphs->Item< ::g::Fuse::Text::PositionedGlyph>(end - 1).Cluster;
            int startCluster = ::g::Uno::Math::Min8(firstCluster, lastCluster);
            int endCluster = ::g::Uno::Math::Max8(firstCluster, lastCluster);
            ::g::Fuse::Text::Substring* subText = ::g::Fuse::Text::SubstringExtensions::InclusiveRange(text, startCluster, endCluster);

            for (array5 = ShapeInner(subText, fontIndex + 1, dir), index6 = 0, length7 = uPtr(array5)->Length(); index6 < length7; ++index6)
            {
                ::g::Fuse::Text::PositionedGlyph g = uPtr(array5)->Item< ::g::Fuse::Text::PositionedGlyph>(index6);
                ::g::Uno::Collections::List__Add_fn(uPtr(result), uCRef(::g::Fuse::Text::PositionedGlyph__New1(g.Glyph(), g.Advance(), g.Offset, g.Cluster + startCluster)));
            }

            i = end;
        }
        while (TryFindUnhandledSegment(positionedGlyphs, i, &start, &end));

        for (; i < positionedGlyphs->Length(); ++i)
            ::g::Uno::Collections::List__Add_fn(uPtr(result), uCRef(uPtr(positionedGlyphs)->Item< ::g::Fuse::Text::PositionedGlyph>(i)));

        return (uArray*)result->ToArray();
    }

    return positionedGlyphs;
}

// private bool TryFindUnhandledSegment(Fuse.Text.PositionedGlyph[] glyphs, int startIndex, int& start, int& end) [instance] :949
bool FallingBackFont::TryFindUnhandledSegment(uArray* glyphs, int startIndex, int* start, int* end)
{
    uStackFrame __("Fuse.Text.FallingBackFont", "TryFindUnhandledSegment(Fuse.Text.PositionedGlyph[],int,int&,int&)");

    for (int i = startIndex; i < uPtr(glyphs)->Length(); ++i)
        if (uPtr(glyphs)->Item< ::g::Fuse::Text::PositionedGlyph>(i).Glyph().Index == 0U)
        {
            *start = i;

            while ((i < uPtr(glyphs)->Length()) && (uPtr(glyphs)->Item< ::g::Fuse::Text::PositionedGlyph>(i).Glyph().Index == 0U))
                ++i;

            *end = i;
            return true;
        }

    *start = *end = 0;
    return false;
}

// public FallingBackFont New(Fuse.Internal.CacheItem<int, Fuse.Text.Font>[] fonts) [static] :878
FallingBackFont* FallingBackFont::New1(uArray* fonts)
{
    FallingBackFont* obj8 = (FallingBackFont*)uNew(FallingBackFont_typeof());
    obj8->ctor_1(fonts);
    return obj8;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public sealed class FallingBackFontFace :842
// {
static void FallingBackFontFace_build(uType* type)
{
    ::STRINGS[3] = uString::Const("fontFaces.Length > 0");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno");
    ::TYPES[1] = uObject_typeof()->Array();
    ::TYPES[4] = ::g::Fuse::Internal::CacheItem_typeof()->MakeType(::g::Fuse::Internal::FontFaceDescriptor_typeof(), ::g::Fuse::Text::FontFace_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Internal::CacheItem_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Fuse::Text::Font_typeof(), NULL)->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Text::FontFace_type, interface0));
    type->SetFields(1,
        ::TYPES[4/*Fuse.Internal.CacheItem<Fuse.Internal.FontFaceDescriptor, Fuse.Text.FontFace>*/]->Array(), offsetof(::g::Fuse::Text::FallingBackFontFace, FontFaces), 0);
    type->Reflection.SetFields(1,
        new uField("FontFaces", 1));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FallingBackFontFace__New1_fn, 0, true, type, 1, ::TYPES[4/*Fuse.Internal.CacheItem<Fuse.Internal.FontFaceDescriptor, Fuse.Text.FontFace>*/]->Array()));
}

::g::Fuse::Text::FontFace_type* FallingBackFontFace_typeof()
{
    static uSStrong< ::g::Fuse::Text::FontFace_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Text::FontFace_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FallingBackFontFace);
    options.TypeSize = sizeof(::g::Fuse::Text::FontFace_type);
    type = (::g::Fuse::Text::FontFace_type*)uClassType::New("Fuse.Text.FallingBackFontFace", options);
    type->fp_build_ = FallingBackFontFace_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Text::FontFace*))FallingBackFontFace__Dispose_fn;
    type->fp_GetOfPixelSizeInternal = (void(*)(::g::Fuse::Text::FontFace*, int*, ::g::Fuse::Text::Font**))FallingBackFontFace__GetOfPixelSizeInternal_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))FallingBackFontFace__Dispose_fn;
    return type;
}

// public FallingBackFontFace(Fuse.Internal.CacheItem<Fuse.Internal.FontFaceDescriptor, Fuse.Text.FontFace>[] fontFaces) :846
void FallingBackFontFace__ctor_1_fn(FallingBackFontFace* __this, uArray* fontFaces)
{
    __this->ctor_1(fontFaces);
}

// public override sealed void Dispose() :852
void FallingBackFontFace__Dispose_fn(FallingBackFontFace* __this)
{
    uStackFrame __("Fuse.Text.FallingBackFontFace", "Dispose()");
    uArray* array2;
    int index3;
    int length4;
    ::g::Fuse::Text::FontFace__Dispose_fn(__this);

    if (__this->FontFaces != NULL)
    {
        for (array2 = __this->FontFaces, index3 = 0, length4 = uPtr(array2)->Length(); index3 < length4; ++index3)
        {
            ::g::Fuse::Internal::CacheItem fontFace = uPtr(array2)->Item< ::g::Fuse::Internal::CacheItem>(index3);
            fontFace.Dispose(::TYPES[4/*Fuse.Internal.CacheItem<Fuse.Internal.FontFaceDescriptor, Fuse.Text.FontFace>*/]);
        }

        __this->FontFaces = NULL;
    }
}

// private override sealed Fuse.Text.Font GetOfPixelSizeInternal(int size) :863
void FallingBackFontFace__GetOfPixelSizeInternal_fn(FallingBackFontFace* __this, int* size, ::g::Fuse::Text::Font** __retval)
{
    uStackFrame __("Fuse.Text.FallingBackFontFace", "GetOfPixelSizeInternal(int)");
    int size_ = *size;
    uArray* fonts = uArray::New(::TYPES[5/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>[]*/], uPtr(__this->FontFaces)->Length());

    for (int i = 0; i < uPtr(__this->FontFaces)->Length(); ++i)
        uPtr(fonts)->Item< ::g::Fuse::Internal::CacheItem>(i) = uPtr((::g::Fuse::Text::FontFace*)uPtr(__this->FontFaces)->Item< ::g::Fuse::Internal::CacheItem>(i).Value(::TYPES[4/*Fuse.Internal.CacheItem<Fuse.Internal.FontFaceDescriptor, Fuse.Text.FontFace>*/]))->GetOfPixelSize(size_);

    return *__retval = ::g::Fuse::Text::FallingBackFont::New1(fonts), void();
}

// public FallingBackFontFace New(Fuse.Internal.CacheItem<Fuse.Internal.FontFaceDescriptor, Fuse.Text.FontFace>[] fontFaces) :846
void FallingBackFontFace__New1_fn(uArray* fontFaces, FallingBackFontFace** __retval)
{
    *__retval = FallingBackFontFace::New1(fontFaces);
}

// public FallingBackFontFace(Fuse.Internal.CacheItem<Fuse.Internal.FontFaceDescriptor, Fuse.Text.FontFace>[] fontFaces) [instance] :846
void FallingBackFontFace::ctor_1(uArray* fontFaces)
{
    uStackFrame __("Fuse.Text.FallingBackFontFace", ".ctor(Fuse.Internal.CacheItem<Fuse.Internal.FontFaceDescriptor, Fuse.Text.FontFace>[])");
    int assert1;
    ctor_();
    assert1 = uPtr(fontFaces)->Length();
    ::g::Uno::Diagnostics::Debug::Assert(assert1 > 0, ::STRINGS[3/*"fontFaces.L...*/], ::STRINGS[1/*"/Users/most...*/], 848, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Int_typeof(), assert1), uBox<int>(::g::Uno::Int_typeof(), 0)));
    FontFaces = fontFaces;
}

// public FallingBackFontFace New(Fuse.Internal.CacheItem<Fuse.Internal.FontFaceDescriptor, Fuse.Text.FontFace>[] fontFaces) [static] :846
FallingBackFontFace* FallingBackFontFace::New1(uArray* fontFaces)
{
    FallingBackFontFace* obj5 = (FallingBackFontFace*)uNew(FallingBackFontFace_typeof());
    obj5->ctor_1(fontFaces);
    return obj5;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public abstract class Font :1089
// {
// static Font() :1089
static void Font__cctor__fn(uType* __type)
{
    Font::Truncation_ = ::STRINGS[4/*"..."*/];
}

static void Font_build(uType* type)
{
    ::STRINGS[4] = uString::Const("...");
    ::STRINGS[5] = uString::Const("Error loading glyph: ");
    ::STRINGS[6] = uString::Const(" ");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno");
    ::STRINGS[7] = uString::Const("GetCachedGlyphTexture");
    ::TYPES[6] = ::g::Fuse::Text::GlyphTexture_typeof()->Array();
    ::TYPES[7] = ::g::Uno::Exception_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Font_type, interface0));
    type->SetFields(0,
        ::TYPES[6/*Fuse.Text.GlyphTexture[]*/], offsetof(::g::Fuse::Text::Font, _glyphTextureCache), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::Font, _glyphTextureCacheVersion), 0,
        ::g::Fuse::Text::PositionedGlyph_typeof()->Array(), offsetof(::g::Fuse::Text::Font, _shapedTruncation), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Text::Font, _truncationMeasurements), 0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Fuse::Text::Font::Truncation_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Truncation", 4));
    type->Reflection.SetFunctions(13,
        new uFunction("get_Ascender", NULL, NULL, offsetof(Font_type, fp_get_Ascender), false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_Descender", NULL, NULL, offsetof(Font_type, fp_get_Descender), false, ::g::Uno::Float_typeof(), 0),
        new uFunction("Dispose", NULL, NULL, offsetof(Font_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("GetCachedGlyphTexture", NULL, NULL, offsetof(Font_type, fp_GetCachedGlyphTexture), false, ::g::Fuse::Text::GlyphTexture_typeof(), 3, ::g::Fuse::Text::Glyph_typeof(), ::g::Fuse::Text::GlyphAtlas_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("get_LineHeight", NULL, NULL, offsetof(Font_type, fp_get_LineHeight), false, ::g::Uno::Float_typeof(), 0),
        new uFunction("Measure", NULL, (void*)Font__Measure_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Fuse::Text::PositionedGlyph_typeof()->Array()),
        new uFunction("get_NumGlyphs", NULL, NULL, offsetof(Font_type, fp_get_NumGlyphs), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_PixelSize", NULL, NULL, offsetof(Font_type, fp_get_PixelSize), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("Render", NULL, NULL, offsetof(Font_type, fp_Render), false, ::g::Fuse::Text::RenderedGlyph_typeof(), 1, ::g::Fuse::Text::Glyph_typeof()),
        new uFunction("Shape", NULL, NULL, offsetof(Font_type, fp_Shape), false, ::g::Fuse::Text::PositionedGlyph_typeof()->Array(), 3, ::g::Fuse::Text::Substring_typeof(), ::g::Uno::Int_typeof(), ::g::Fuse::Text::TextDirection_typeof()),
        new uFunction("Shape", NULL, (void*)Font__Shape1_fn, 0, false, ::g::Fuse::Text::PositionedGlyph_typeof()->Array(), 2, ::g::Uno::String_typeof(), ::g::Fuse::Text::TextDirection_typeof()),
        new uFunction("get_ShapedTruncation", NULL, (void*)Font__get_ShapedTruncation_fn, 0, false, ::g::Fuse::Text::PositionedGlyph_typeof()->Array(), 0),
        new uFunction("get_TruncationMeasurements", NULL, (void*)Font__get_TruncationMeasurements_fn, 0, false, ::g::Uno::Float2_typeof(), 0));
}

Font_type* Font_typeof()
{
    static uSStrong<Font_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Font);
    options.TypeSize = sizeof(Font_type);
    type = (Font_type*)uClassType::New("Fuse.Text.Font", options);
    type->fp_build_ = Font_build;
    type->fp_cctor_ = Font__cctor__fn;
    type->fp_Dispose = Font__Dispose_fn;
    type->fp_GetCachedGlyphTexture = Font__GetCachedGlyphTexture_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Font__Dispose_fn;
    return type;
}

// protected generated Font() :1089
void Font__ctor__fn(Font* __this)
{
    __this->ctor_();
}

// public virtual void Dispose() :1183
void Font__Dispose_fn(Font* __this)
{
    uStackFrame __("Fuse.Text.Font", "Dispose()");

    if (__this->_glyphTextureCache != NULL)
    {
        __this->_glyphTextureCache = NULL;
        ::g::Fuse::Text::Renderer::RecreateGlyphAtlas(__this->_glyphTextureCacheVersion);
    }
}

// public virtual Fuse.Text.GlyphTexture GetCachedGlyphTexture(Fuse.Text.Glyph glyph, Fuse.Text.GlyphAtlas atlas, int currentVersion) :1139
void Font__GetCachedGlyphTexture_fn(Font* __this, ::g::Fuse::Text::Glyph* glyph, ::g::Fuse::Text::GlyphAtlas* atlas, int* currentVersion, ::g::Fuse::Text::GlyphTexture* __retval)
{
    uStackFrame __("Fuse.Text.Font", "GetCachedGlyphTexture(Fuse.Text.Glyph,Fuse.Text.GlyphAtlas,int)");
    int currentVersion_ = *currentVersion;
    ::g::Fuse::Text::Glyph glyph_ = *glyph;

    if (__this->_glyphTextureCacheVersion != currentVersion_)
    {
        __this->_glyphTextureCacheVersion = currentVersion_;

        if (__this->_glyphTextureCache != NULL)

            for (int i = 0; i < uPtr(__this->_glyphTextureCache)->Length(); ++i)
                uPtr(__this->_glyphTextureCache)->Item< ::g::Fuse::Text::GlyphTexture>(i) = uDefault< ::g::Fuse::Text::GlyphTexture>();
    }

    if (__this->_glyphTextureCache == NULL)
        __this->_glyphTextureCache = uArray::New(::TYPES[6/*Fuse.Text.GlyphTexture[]*/], __this->NumGlyphs());

    ::g::Fuse::Text::GlyphTexture result = uPtr(__this->_glyphTextureCache)->Item< ::g::Fuse::Text::GlyphTexture>((int)glyph_.Index);

    if (result.IsValid())
        return *__retval = result, void();

    ::g::Fuse::Text::RenderedGlyph renderedGlyph = uDefault< ::g::Fuse::Text::RenderedGlyph>();
    bool renderedGlyphValid = false;

    try
    {
        renderedGlyph = __this->Render(glyph_);
        renderedGlyphValid = true;
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[5/*"Error loadi...*/], uBox<uint32_t>(::g::Uno::UInt_typeof(), glyph_.Index)), ::STRINGS[6/*" "*/]), uPtr(e)->Message()), NULL, ::STRINGS[1/*"/Users/most...*/], 1166, ::STRINGS[7/*"GetCachedGl...*/]);
    }

    if (renderedGlyphValid)
    {
        ::g::Fuse::Text::SubTexture subTexture = uPtr(atlas)->Add(renderedGlyph.Bitmap);
        result = ::g::Fuse::Text::GlyphTexture__New1(subTexture, renderedGlyph.Offset, renderedGlyph.Scale);
    }
    else
        result = ::g::Fuse::Text::GlyphTexture__New1(uDefault< ::g::Fuse::Text::SubTexture>(), ::g::Uno::Float2__New1(0.0f), 1.0f);

    uPtr(__this->_glyphTextureCache)->Item< ::g::Fuse::Text::GlyphTexture>((int)glyph_.Index) = result;
    return *__retval = result, void();
}

// public float2 Measure(Fuse.Text.PositionedGlyph[] shapedRun) :1127
void Font__Measure_fn(Font* __this, uArray* shapedRun, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Measure(shapedRun);
}

// public Fuse.Text.PositionedGlyph[] Shape(string text, Fuse.Text.TextDirection dir) :1122
void Font__Shape1_fn(Font* __this, uString* text, int* dir, uArray** __retval)
{
    *__retval = __this->Shape1(text, *dir);
}

// public Fuse.Text.PositionedGlyph[] get_ShapedTruncation() :1095
void Font__get_ShapedTruncation_fn(Font* __this, uArray** __retval)
{
    *__retval = __this->ShapedTruncation();
}

// public float2 get_TruncationMeasurements() :1105
void Font__get_TruncationMeasurements_fn(Font* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->TruncationMeasurements();
}

uSStrong<uString*> Font::Truncation_;

// protected generated Font() [instance] :1089
void Font::ctor_()
{
}

// public float2 Measure(Fuse.Text.PositionedGlyph[] shapedRun) [instance] :1127
::g::Uno::Float2 Font::Measure(uArray* shapedRun)
{
    uStackFrame __("Fuse.Text.Font", "Measure(Fuse.Text.PositionedGlyph[])");
    uArray* array1;
    int index2;
    int length3;
    ::g::Uno::Float2 result = ::g::Uno::Float2__New2(0.0f, 0.0f);

    for (array1 = shapedRun, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Fuse::Text::PositionedGlyph positionedGlyph = uPtr(array1)->Item< ::g::Fuse::Text::PositionedGlyph>(index2);
        result = ::g::Uno::Float2__op_Addition2(result, positionedGlyph.Advance());
    }

    return result;
}

// public Fuse.Text.PositionedGlyph[] Shape(string text, Fuse.Text.TextDirection dir) [instance] :1122
uArray* Font::Shape1(uString* text, int dir)
{
    uStackFrame __("Fuse.Text.Font", "Shape(string,Fuse.Text.TextDirection)");
    return Shape(::g::Fuse::Text::Substring::New1(text), 0, dir);
}

// public Fuse.Text.PositionedGlyph[] get_ShapedTruncation() [instance] :1095
uArray* Font::ShapedTruncation()
{
    uStackFrame __("Fuse.Text.Font", "get_ShapedTruncation()");

    if (_shapedTruncation == NULL)
        _shapedTruncation = Shape1(Font::Truncation(), 0);

    return _shapedTruncation;
}

// public float2 get_TruncationMeasurements() [instance] :1105
::g::Uno::Float2 Font::TruncationMeasurements()
{
    uStackFrame __("Fuse.Text.Font", "get_TruncationMeasurements()");

    if (::g::Uno::Float2__op_Equality(_truncationMeasurements, uDefault< ::g::Uno::Float2>()))
        _truncationMeasurements = Measure(ShapedTruncation());

    return _truncationMeasurements;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public abstract class FontFace :1027
// {
static void FontFace_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Internal::Cache_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Fuse::Text::Font_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Fuse::Text::Font_typeof(), NULL);
    ::TYPES[10] = ::g::Fuse::Resources::SystemFileSource_typeof();
    ::TYPES[11] = ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(FontFace_type, interface0));
    type->SetFields(0,
        ::TYPES[8/*Fuse.Internal.Cache<int, Fuse.Text.Font>*/], offsetof(::g::Fuse::Text::FontFace, _fontCache), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("Dispose", NULL, NULL, offsetof(FontFace_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("GetOfPixelSize", NULL, (void*)FontFace__GetOfPixelSize_fn, 0, false, ::g::Fuse::Internal::CacheItem_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Fuse::Text::Font_typeof(), NULL), 1, ::g::Uno::Int_typeof()),
        new uFunction("Load", NULL, (void*)FontFace__Load_fn, 0, true, type, 3, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::TYPES[11/*Uno.Predicate<string>*/]),
        new uFunction("Load", NULL, (void*)FontFace__Load2_fn, 0, true, type, 3, ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::TYPES[11/*Uno.Predicate<string>*/]));
}

FontFace_type* FontFace_typeof()
{
    static uSStrong<FontFace_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FontFace);
    options.TypeSize = sizeof(FontFace_type);
    type = (FontFace_type*)uClassType::New("Fuse.Text.FontFace", options);
    type->fp_build_ = FontFace_build;
    type->fp_Dispose = FontFace__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))FontFace__Dispose_fn;
    return type;
}

// protected generated FontFace() :1027
void FontFace__ctor__fn(FontFace* __this)
{
    __this->ctor_();
}

// public virtual void Dispose() :1073
void FontFace__Dispose_fn(FontFace* __this)
{
    uStackFrame __("Fuse.Text.FontFace", "Dispose()");

    if (__this->_fontCache != NULL)
    {
        uPtr(__this->_fontCache)->Dispose();
        __this->_fontCache = NULL;
    }
}

// public Fuse.Internal.CacheItem<int, Fuse.Text.Font> GetOfPixelSize(int size) :1065
void FontFace__GetOfPixelSize_fn(FontFace* __this, int* size, ::g::Fuse::Internal::CacheItem* __retval)
{
    *__retval = __this->GetOfPixelSize(*size);
}

// public static Fuse.Text.FontFace Load(byte[] data, [int index], [Uno.Predicate<string> stylePredicate]) :1046
void FontFace__Load_fn(uArray* data, int* index, uDelegate* stylePredicate, FontFace** __retval)
{
    *__retval = FontFace::Load(data, *index, stylePredicate);
}

// internal static Fuse.Text.FontFace Load(Fuse.Internal.FontFaceDescriptor descriptor) :1029
void FontFace__Load1_fn(::g::Fuse::Internal::FontFaceDescriptor* descriptor, FontFace** __retval)
{
    *__retval = FontFace::Load1(descriptor);
}

// public static Fuse.Text.FontFace Load(string fileName, [int index], [Uno.Predicate<string> stylePredicate]) :1053
void FontFace__Load2_fn(uString* fileName, int* index, uDelegate* stylePredicate, FontFace** __retval)
{
    *__retval = FontFace::Load2(fileName, *index, stylePredicate);
}

// protected generated FontFace() [instance] :1027
void FontFace::ctor_()
{
}

// public Fuse.Internal.CacheItem<int, Fuse.Text.Font> GetOfPixelSize(int size) [instance] :1065
::g::Fuse::Internal::CacheItem FontFace::GetOfPixelSize(int size)
{
    uStackFrame __("Fuse.Text.FontFace", "GetOfPixelSize(int)");
    ::g::Fuse::Internal::CacheItem ret1;

    if (_fontCache == NULL)
        _fontCache = ((::g::Fuse::Internal::Cache*)::g::Fuse::Internal::Cache::New1(::TYPES[8/*Fuse.Internal.Cache<int, Fuse.Text.Font>*/], uDelegate::New(::TYPES[9/*Uno.Func<int, Fuse.Text.Font>*/], this, offsetof(FontFace_type, fp_GetOfPixelSizeInternal)), 10));

    return (::g::Fuse::Internal::Cache__Get_fn(uPtr(_fontCache), uCRef<int>(size), &ret1), ret1);
}

// public static Fuse.Text.FontFace Load(byte[] data, [int index], [Uno.Predicate<string> stylePredicate]) [static] :1046
FontFace* FontFace::Load(uArray* data, int index, uDelegate* stylePredicate)
{
    uStackFrame __("Fuse.Text.FontFace", "Load(byte[],[int],[Uno.Predicate<string>])");
    return ::g::Fuse::Text::Implementation::FreeTypeFontFace::New1(data, index, stylePredicate);
}

// internal static Fuse.Text.FontFace Load(Fuse.Internal.FontFaceDescriptor descriptor) [static] :1029
FontFace* FontFace::Load1(::g::Fuse::Internal::FontFaceDescriptor* descriptor)
{
    uStackFrame __("Fuse.Text.FontFace", "Load(Fuse.Internal.FontFaceDescriptor)");

    if (uIs((::g::Uno::UX::FileSource*)uPtr(descriptor)->FileSource, ::TYPES[10/*Fuse.Resources.SystemFileSource*/]))
        return FontFace::Load2(uPtr(uPtr(descriptor)->FileSource)->Name, uPtr(descriptor)->Index, uDelegate::New(::TYPES[11/*Uno.Predicate<string>*/], (void*)::g::Fuse::Internal::FontFaceDescriptor__Match_fn, uPtr(descriptor)));
    else
        return FontFace::Load(uPtr(uPtr(descriptor)->FileSource)->ReadAllBytes(), uPtr(descriptor)->Index, uDelegate::New(::TYPES[11/*Uno.Predicate<string>*/], (void*)::g::Fuse::Internal::FontFaceDescriptor__Match_fn, uPtr(descriptor)));
}

// public static Fuse.Text.FontFace Load(string fileName, [int index], [Uno.Predicate<string> stylePredicate]) [static] :1053
FontFace* FontFace::Load2(uString* fileName, int index, uDelegate* stylePredicate)
{
    uStackFrame __("Fuse.Text.FontFace", "Load(string,[int],[Uno.Predicate<string>])");
    return ::g::Fuse::Text::Implementation::CoreTextFontFace::New1(fileName, index, stylePredicate);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public struct Glyph :985
// {
static void Glyph_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::Glyph, FontIndex), 0,
        ::g::Uno::UInt_typeof(), offsetof(::g::Fuse::Text::Glyph, Index), 0);
    type->Reflection.SetFields(2,
        new uField("FontIndex", 0),
        new uField("Index", 1));
}

uStructType* Glyph_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Glyph);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Text.Glyph", options);
    type->fp_build_ = Glyph_build;
    return type;
}

// internal Glyph(int fontIndex, uint index) :990
void Glyph__ctor__fn(Glyph* __this, int* fontIndex, uint32_t* index)
{
    __this->ctor_(*fontIndex, *index);
}

// internal Glyph New(int fontIndex, uint index) :990
void Glyph__New1_fn(int* fontIndex, uint32_t* index, Glyph* __retval)
{
    *__retval = Glyph__New1(*fontIndex, *index);
}

// internal Glyph(int fontIndex, uint index) [instance] :990
void Glyph::ctor_(int fontIndex, uint32_t index)
{
    FontIndex = fontIndex;
    Index = index;
}

// internal Glyph New(int fontIndex, uint index) [static] :990
Glyph Glyph__New1(int fontIndex, uint32_t index)
{
    Glyph obj1;
    obj1.ctor_(fontIndex, index);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public sealed class GlyphAtlas :1204
// {
static void GlyphAtlas_build(uType* type)
{
    ::STRINGS[8] = uString::Const("(format == Uno.Graphics.Format.L8) || (format == Uno.Graphics.Format.RGBA8888)");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno");
    ::TYPES[12] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), NULL);
    ::TYPES[1] = uObject_typeof()->Array();
    ::TYPES[13] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(GlyphAtlas_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Text::TextureAtlas_typeof(), offsetof(::g::Fuse::Text::GlyphAtlas, _textureAtlasL8), 0,
        ::g::Fuse::Text::TextureAtlas_typeof(), offsetof(::g::Fuse::Text::GlyphAtlas, _textureAtlasRGBA), 0,
        ::TYPES[12/*Uno.Collections.List<texture2D>*/], offsetof(::g::Fuse::Text::GlyphAtlas, Textures), 0);
    type->Reflection.SetFields(1,
        new uField("Textures", 2));
    type->Reflection.SetFunctions(4,
        new uFunction("Add", NULL, (void*)GlyphAtlas__Add_fn, 0, false, ::g::Fuse::Text::SubTexture_typeof(), 1, ::g::Uno::Content::Images::Bitmap_typeof()),
        new uFunction("Commit", NULL, (void*)GlyphAtlas__Commit_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Dispose", NULL, (void*)GlyphAtlas__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)GlyphAtlas__New1_fn, 0, true, type, 1, ::g::Uno::Int2_typeof()));
}

GlyphAtlas_type* GlyphAtlas_typeof()
{
    static uSStrong<GlyphAtlas_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GlyphAtlas);
    options.TypeSize = sizeof(GlyphAtlas_type);
    type = (GlyphAtlas_type*)uClassType::New("Fuse.Text.GlyphAtlas", options);
    type->fp_build_ = GlyphAtlas_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))GlyphAtlas__Dispose_fn;
    return type;
}

// public GlyphAtlas(int2 size) :1210
void GlyphAtlas__ctor__fn(GlyphAtlas* __this, ::g::Uno::Int2* size)
{
    __this->ctor_(*size);
}

// public Fuse.Text.SubTexture Add(Uno.Content.Images.Bitmap bitmap) :1220
void GlyphAtlas__Add_fn(GlyphAtlas* __this, ::g::Uno::Content::Images::Bitmap* bitmap, ::g::Fuse::Text::SubTexture* __retval)
{
    *__retval = __this->Add(bitmap);
}

// public void Commit() :1228
void GlyphAtlas__Commit_fn(GlyphAtlas* __this)
{
    __this->Commit();
}

// public void Dispose() :1234
void GlyphAtlas__Dispose_fn(GlyphAtlas* __this)
{
    __this->Dispose();
}

// public GlyphAtlas New(int2 size) :1210
void GlyphAtlas__New1_fn(::g::Uno::Int2* size, GlyphAtlas** __retval)
{
    *__retval = GlyphAtlas::New1(*size);
}

// public GlyphAtlas(int2 size) [instance] :1210
void GlyphAtlas::ctor_(::g::Uno::Int2 size)
{
    Textures = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[12/*Uno.Collections.List<texture2D>*/]));
    _textureAtlasL8 = ::g::Fuse::Text::TextureAtlas::New1(size, 1, Textures);
    _textureAtlasRGBA = ::g::Fuse::Text::TextureAtlas::New1(size, 3, Textures);
}

// public Fuse.Text.SubTexture Add(Uno.Content.Images.Bitmap bitmap) [instance] :1220
::g::Fuse::Text::SubTexture GlyphAtlas::Add(::g::Uno::Content::Images::Bitmap* bitmap)
{
    uStackFrame __("Fuse.Text.GlyphAtlas", "Add(Uno.Content.Images.Bitmap)");
    bool assert1;
    bool assert2;
    int format = uPtr(bitmap)->Format();
    assert1 = format == 1;
    assert2 = format == 3;
    ::g::Uno::Diagnostics::Debug::Assert(assert1 || assert2, ::STRINGS[8/*"(format == ...*/], ::STRINGS[1/*"/Users/most...*/], 1223, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox(::g::Uno::Bool_typeof(), assert1), uBox(::g::Uno::Bool_typeof(), assert2)));
    ::g::Fuse::Text::TextureAtlas* atlas = (format == 1) ? (::g::Fuse::Text::TextureAtlas*)_textureAtlasL8 : (::g::Fuse::Text::TextureAtlas*)_textureAtlasRGBA;
    return uPtr(atlas)->Add(bitmap);
}

// public void Commit() [instance] :1228
void GlyphAtlas::Commit()
{
    uStackFrame __("Fuse.Text.GlyphAtlas", "Commit()");
    uPtr(_textureAtlasL8)->Commit();
    uPtr(_textureAtlasRGBA)->Commit();
}

// public void Dispose() [instance] :1234
void GlyphAtlas::Dispose()
{
    uStackFrame __("Fuse.Text.GlyphAtlas", "Dispose()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Graphics::Texture2D*> > ret5;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Graphics::Texture2D*> > enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(Textures), &ret5), ret5); enum3.MoveNext(::TYPES[13/*Uno.Collections.List<texture2D>.Enumerator*/]); )
    {
        ::g::Uno::Graphics::Texture2D* texture = enum3.Current(::TYPES[13/*Uno.Collections.List<texture2D>.Enumerator*/]);
        uPtr(texture)->Dispose();
    }

    uPtr(Textures)->Clear();
}

// public GlyphAtlas New(int2 size) [static] :1210
GlyphAtlas* GlyphAtlas::New1(::g::Uno::Int2 size)
{
    GlyphAtlas* obj4 = (GlyphAtlas*)uNew(GlyphAtlas_typeof());
    obj4->ctor_(size);
    return obj4;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public struct GlyphTexture :1410
// {
static void GlyphTexture_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Text::GlyphTexture, Offset), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Text::GlyphTexture, Scale), 0,
        ::g::Fuse::Text::SubTexture_typeof(), offsetof(::g::Fuse::Text::GlyphTexture, _SubTexture), 0,
        type, (uintptr_t)&::g::Fuse::Text::GlyphTexture::Invalid_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("Offset", 0),
        new uField("Scale", 1));
    type->Reflection.SetFunctions(1,
        new uFunction("get_SubTexture", NULL, (void*)GlyphTexture__get_SubTexture_fn, 0, false, ::g::Fuse::Text::SubTexture_typeof(), 0));
}

uStructType* GlyphTexture_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(GlyphTexture);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Text.GlyphTexture", options);
    type->fp_build_ = GlyphTexture_build;
    return type;
}

// internal GlyphTexture(Fuse.Text.SubTexture subTexture, float2 offset, float scale) :1416
void GlyphTexture__ctor__fn(GlyphTexture* __this, ::g::Fuse::Text::SubTexture* subTexture, ::g::Uno::Float2* offset, float* scale)
{
    __this->ctor_(*subTexture, *offset, *scale);
}

// internal bool get_IsValid() :1425
void GlyphTexture__get_IsValid_fn(GlyphTexture* __this, bool* __retval)
{
    *__retval = __this->IsValid();
}

// internal GlyphTexture New(Fuse.Text.SubTexture subTexture, float2 offset, float scale) :1416
void GlyphTexture__New1_fn(::g::Fuse::Text::SubTexture* subTexture, ::g::Uno::Float2* offset, float* scale, GlyphTexture* __retval)
{
    *__retval = GlyphTexture__New1(*subTexture, *offset, *scale);
}

// public generated Fuse.Text.SubTexture get_SubTexture() :1412
void GlyphTexture__get_SubTexture_fn(GlyphTexture* __this, ::g::Fuse::Text::SubTexture* __retval)
{
    *__retval = __this->SubTexture();
}

// private generated void set_SubTexture(Fuse.Text.SubTexture value) :1412
void GlyphTexture__set_SubTexture_fn(GlyphTexture* __this, ::g::Fuse::Text::SubTexture* value)
{
    __this->SubTexture(*value);
}

GlyphTexture GlyphTexture::Invalid_;

// internal GlyphTexture(Fuse.Text.SubTexture subTexture, float2 offset, float scale) [instance] :1416
void GlyphTexture::ctor_(::g::Fuse::Text::SubTexture subTexture, ::g::Uno::Float2 offset, float scale)
{
    SubTexture(subTexture);
    Offset = offset;
    Scale = scale;
}

// internal bool get_IsValid() [instance] :1425
bool GlyphTexture::IsValid()
{
    return Scale != 0.0f;
}

// public generated Fuse.Text.SubTexture get_SubTexture() [instance] :1412
::g::Fuse::Text::SubTexture GlyphTexture::SubTexture()
{
    return _SubTexture;
}

// private generated void set_SubTexture(Fuse.Text.SubTexture value) [instance] :1412
void GlyphTexture::SubTexture(::g::Fuse::Text::SubTexture value)
{
    _SubTexture = value;
}

// internal GlyphTexture New(Fuse.Text.SubTexture subTexture, float2 offset, float scale) [static] :1416
GlyphTexture GlyphTexture__New1(::g::Fuse::Text::SubTexture subTexture, ::g::Uno::Float2 offset, float scale)
{
    GlyphTexture obj1;
    obj1.ctor_(subTexture, offset, scale);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public sealed class LazyFont :1299
// {
static void LazyFont_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Internal::CacheItem_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Fuse::Text::Font_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::TYPES[14/*Uno.IDisposable*/], offsetof(::g::Fuse::Text::Font_type, interface0));
    type->SetFields(4,
        ::g::Fuse::Text::LazyFontFace_typeof(), offsetof(::g::Fuse::Text::LazyFont, _fontFace), 0,
        ::TYPES[2/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/], offsetof(::g::Fuse::Text::LazyFont, _loadedFont), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Text::LazyFont, _loadedFontMutex), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::LazyFont, _pixelSize), 0);
}

::g::Fuse::Text::Font_type* LazyFont_typeof()
{
    static uSStrong< ::g::Fuse::Text::Font_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Text::Font_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LazyFont);
    options.TypeSize = sizeof(::g::Fuse::Text::Font_type);
    type = (::g::Fuse::Text::Font_type*)uClassType::New("Fuse.Text.LazyFont", options);
    type->fp_build_ = LazyFont_build;
    type->fp_get_Ascender = (void(*)(::g::Fuse::Text::Font*, float*))LazyFont__get_Ascender_fn;
    type->fp_get_Descender = (void(*)(::g::Fuse::Text::Font*, float*))LazyFont__get_Descender_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Text::Font*))LazyFont__Dispose_fn;
    type->fp_GetCachedGlyphTexture = (void(*)(::g::Fuse::Text::Font*, ::g::Fuse::Text::Glyph*, ::g::Fuse::Text::GlyphAtlas*, int*, ::g::Fuse::Text::GlyphTexture*))LazyFont__GetCachedGlyphTexture_fn;
    type->fp_get_LineHeight = (void(*)(::g::Fuse::Text::Font*, float*))LazyFont__get_LineHeight_fn;
    type->fp_get_NumGlyphs = (void(*)(::g::Fuse::Text::Font*, int*))LazyFont__get_NumGlyphs_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Text::Font*, int*))LazyFont__get_PixelSize_fn;
    type->fp_Render = (void(*)(::g::Fuse::Text::Font*, ::g::Fuse::Text::Glyph*, ::g::Fuse::Text::RenderedGlyph*))LazyFont__Render_fn;
    type->fp_Shape = (void(*)(::g::Fuse::Text::Font*, ::g::Fuse::Text::Substring*, int*, int*, uArray**))LazyFont__Shape_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))LazyFont__Dispose_fn;
    return type;
}

// internal LazyFont(Fuse.Text.LazyFontFace fontFace, int pixelSize) :1322
void LazyFont__ctor_1_fn(LazyFont* __this, ::g::Fuse::Text::LazyFontFace* fontFace, int* pixelSize)
{
    __this->ctor_1(fontFace, *pixelSize);
}

// public override sealed float get_Ascender() :1341
void LazyFont__get_Ascender_fn(LazyFont* __this, float* __retval)
{
    uStackFrame __("Fuse.Text.LazyFont", "get_Ascender()");
    return *__retval = uPtr(__this->Force())->Ascender(), void();
}

// public override sealed float get_Descender() :1342
void LazyFont__get_Descender_fn(LazyFont* __this, float* __retval)
{
    uStackFrame __("Fuse.Text.LazyFont", "get_Descender()");
    return *__retval = uPtr(__this->Force())->Descender(), void();
}

// public override sealed void Dispose() :1328
void LazyFont__Dispose_fn(LazyFont* __this)
{
    uStackFrame __("Fuse.Text.LazyFont", "Dispose()");
    ::g::Fuse::Text::Font__Dispose_fn(__this);
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_loadedFontMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[14/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (::g::Fuse::Internal::CacheItem__op_Inequality(::TYPES[2/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/], __this->_loadedFont, uDefault< ::g::Fuse::Internal::CacheItem>()))
        {
            __this->_loadedFont.Dispose(::TYPES[2/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/]);
            __this->_loadedFont = uDefault< ::g::Fuse::Internal::CacheItem>();
        }
    }
}

// private Fuse.Text.Font Force() :1307
void LazyFont__Force_fn(LazyFont* __this, ::g::Fuse::Text::Font** __retval)
{
    *__retval = __this->Force();
}

// public override sealed Fuse.Text.GlyphTexture GetCachedGlyphTexture(Fuse.Text.Glyph glyph, Fuse.Text.GlyphAtlas atlas, int version) :1349
void LazyFont__GetCachedGlyphTexture_fn(LazyFont* __this, ::g::Fuse::Text::Glyph* glyph, ::g::Fuse::Text::GlyphAtlas* atlas, int* version, ::g::Fuse::Text::GlyphTexture* __retval)
{
    uStackFrame __("Fuse.Text.LazyFont", "GetCachedGlyphTexture(Fuse.Text.Glyph,Fuse.Text.GlyphAtlas,int)");
    ::g::Fuse::Text::Glyph glyph_ = *glyph;
    int version_ = *version;
    return *__retval = uPtr(__this->Force())->GetCachedGlyphTexture(glyph_, atlas, version_), void();
}

// public override sealed float get_LineHeight() :1343
void LazyFont__get_LineHeight_fn(LazyFont* __this, float* __retval)
{
    uStackFrame __("Fuse.Text.LazyFont", "get_LineHeight()");
    return *__retval = uPtr(__this->Force())->LineHeight(), void();
}

// internal LazyFont New(Fuse.Text.LazyFontFace fontFace, int pixelSize) :1322
void LazyFont__New1_fn(::g::Fuse::Text::LazyFontFace* fontFace, int* pixelSize, LazyFont** __retval)
{
    *__retval = LazyFont::New1(fontFace, *pixelSize);
}

// public override sealed int get_NumGlyphs() :1345
void LazyFont__get_NumGlyphs_fn(LazyFont* __this, int* __retval)
{
    uStackFrame __("Fuse.Text.LazyFont", "get_NumGlyphs()");
    return *__retval = uPtr(__this->Force())->NumGlyphs(), void();
}

// public override sealed int get_PixelSize() :1344
void LazyFont__get_PixelSize_fn(LazyFont* __this, int* __retval)
{
    return *__retval = __this->_pixelSize, void();
}

// public override sealed Fuse.Text.RenderedGlyph Render(Fuse.Text.Glyph glyph) :1346
void LazyFont__Render_fn(LazyFont* __this, ::g::Fuse::Text::Glyph* glyph, ::g::Fuse::Text::RenderedGlyph* __retval)
{
    uStackFrame __("Fuse.Text.LazyFont", "Render(Fuse.Text.Glyph)");
    ::g::Fuse::Text::Glyph glyph_ = *glyph;
    return *__retval = uPtr(__this->Force())->Render(glyph_), void();
}

// public override sealed Fuse.Text.PositionedGlyph[] Shape(Fuse.Text.Substring text, int fontIndex, Fuse.Text.TextDirection dir) :1347
void LazyFont__Shape_fn(LazyFont* __this, ::g::Fuse::Text::Substring* text, int* fontIndex, int* dir, uArray** __retval)
{
    uStackFrame __("Fuse.Text.LazyFont", "Shape(Fuse.Text.Substring,int,Fuse.Text.TextDirection)");
    int fontIndex_ = *fontIndex;
    int dir_ = *dir;
    return *__retval = uPtr(__this->Force())->Shape(text, fontIndex_, dir_), void();
}

// internal LazyFont(Fuse.Text.LazyFontFace fontFace, int pixelSize) [instance] :1322
void LazyFont::ctor_1(::g::Fuse::Text::LazyFontFace* fontFace, int pixelSize)
{
    uStackFrame __("Fuse.Text.LazyFont", ".ctor(Fuse.Text.LazyFontFace,int)");
    _loadedFontMutex = ::g::Uno::Threading::Mutex::Create();
    ctor_();
    _fontFace = fontFace;
    _pixelSize = pixelSize;
}

// private Fuse.Text.Font Force() [instance] :1307
::g::Fuse::Text::Font* LazyFont::Force()
{
    uStackFrame __("Fuse.Text.LazyFont", "Force()");

    if (::g::Fuse::Internal::CacheItem__op_Equality(::TYPES[2/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/], _loadedFont, uDefault< ::g::Fuse::Internal::CacheItem>()))
    {
        uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_loadedFontMutex);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[14/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            if (::g::Fuse::Internal::CacheItem__op_Equality(::TYPES[2/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/], _loadedFont, uDefault< ::g::Fuse::Internal::CacheItem>()))
                _loadedFont = uPtr(uPtr(_fontFace)->Force())->GetOfPixelSize(_pixelSize);
        }
    }

    return (::g::Fuse::Text::Font*)_loadedFont.Value(::TYPES[2/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/]);
}

// internal LazyFont New(Fuse.Text.LazyFontFace fontFace, int pixelSize) [static] :1322
LazyFont* LazyFont::New1(::g::Fuse::Text::LazyFontFace* fontFace, int pixelSize)
{
    LazyFont* obj1 = (LazyFont*)uNew(LazyFont_typeof());
    obj1->ctor_1(fontFace, pixelSize);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public sealed class LazyFontFace :1253
// {
static void LazyFontFace_build(uType* type)
{
    ::TYPES[14] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::TYPES[14/*Uno.IDisposable*/], offsetof(::g::Fuse::Text::FontFace_type, interface0));
    type->SetFields(1,
        ::g::Fuse::Internal::FontFaceDescriptor_typeof(), offsetof(::g::Fuse::Text::LazyFontFace, _descriptor), 0,
        ::g::Fuse::Text::FontFace_typeof(), offsetof(::g::Fuse::Text::LazyFontFace, _loadedFontFace), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Text::LazyFontFace, _loadedFontFaceMutex), 0);
}

::g::Fuse::Text::FontFace_type* LazyFontFace_typeof()
{
    static uSStrong< ::g::Fuse::Text::FontFace_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Text::FontFace_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LazyFontFace);
    options.TypeSize = sizeof(::g::Fuse::Text::FontFace_type);
    type = (::g::Fuse::Text::FontFace_type*)uClassType::New("Fuse.Text.LazyFontFace", options);
    type->fp_build_ = LazyFontFace_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Text::FontFace*))LazyFontFace__Dispose_fn;
    type->fp_GetOfPixelSizeInternal = (void(*)(::g::Fuse::Text::FontFace*, int*, ::g::Fuse::Text::Font**))LazyFontFace__GetOfPixelSizeInternal_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))LazyFontFace__Dispose_fn;
    return type;
}

// internal LazyFontFace(Fuse.Internal.FontFaceDescriptor descriptor) :1259
void LazyFontFace__ctor_1_fn(LazyFontFace* __this, ::g::Fuse::Internal::FontFaceDescriptor* descriptor)
{
    __this->ctor_1(descriptor);
}

// public override sealed void Dispose() :1264
void LazyFontFace__Dispose_fn(LazyFontFace* __this)
{
    uStackFrame __("Fuse.Text.LazyFontFace", "Dispose()");
    ::g::Fuse::Text::FontFace__Dispose_fn(__this);
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_loadedFontFaceMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[14/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (__this->_loadedFontFace != NULL)
        {
            uPtr(__this->_loadedFontFace)->Dispose();
            __this->_loadedFontFace = NULL;
        }
    }
}

// internal Fuse.Text.FontFace Force() :1282
void LazyFontFace__Force_fn(LazyFontFace* __this, ::g::Fuse::Text::FontFace** __retval)
{
    *__retval = __this->Force();
}

// private override sealed Fuse.Text.Font GetOfPixelSizeInternal(int size) :1277
void LazyFontFace__GetOfPixelSizeInternal_fn(LazyFontFace* __this, int* size, ::g::Fuse::Text::Font** __retval)
{
    uStackFrame __("Fuse.Text.LazyFontFace", "GetOfPixelSizeInternal(int)");
    int size_ = *size;
    return *__retval = ::g::Fuse::Text::LazyFont::New1(__this, size_), void();
}

// internal LazyFontFace New(Fuse.Internal.FontFaceDescriptor descriptor) :1259
void LazyFontFace__New1_fn(::g::Fuse::Internal::FontFaceDescriptor* descriptor, LazyFontFace** __retval)
{
    *__retval = LazyFontFace::New1(descriptor);
}

// internal LazyFontFace(Fuse.Internal.FontFaceDescriptor descriptor) [instance] :1259
void LazyFontFace::ctor_1(::g::Fuse::Internal::FontFaceDescriptor* descriptor)
{
    uStackFrame __("Fuse.Text.LazyFontFace", ".ctor(Fuse.Internal.FontFaceDescriptor)");
    _loadedFontFaceMutex = ::g::Uno::Threading::Mutex::Create();
    ctor_();
    _descriptor = descriptor;
}

// internal Fuse.Text.FontFace Force() [instance] :1282
::g::Fuse::Text::FontFace* LazyFontFace::Force()
{
    uStackFrame __("Fuse.Text.LazyFontFace", "Force()");

    if (_loadedFontFace == NULL)
    {
        uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_loadedFontFaceMutex);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[14/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            if (_loadedFontFace == NULL)
            {
                _loadedFontFace = ::g::Fuse::Text::FontFace::Load1(_descriptor);
                _descriptor = NULL;
            }
        }
    }

    return _loadedFontFace;
}

// internal LazyFontFace New(Fuse.Internal.FontFaceDescriptor descriptor) [static] :1259
LazyFontFace* LazyFontFace::New1(::g::Fuse::Internal::FontFaceDescriptor* descriptor)
{
    LazyFontFace* obj1 = (LazyFontFace*)uNew(LazyFontFace_typeof());
    obj1->ctor_1(descriptor);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// private sealed class Substring.LineEnumerable :2145
// {
static void Substring__LineEnumerable_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Text::Substring_typeof(), NULL), offsetof(Substring__LineEnumerable_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Text::Substring_typeof(), offsetof(::g::Fuse::Text::Substring__LineEnumerable, _text), 0);
}

Substring__LineEnumerable_type* Substring__LineEnumerable_typeof()
{
    static uSStrong<Substring__LineEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Substring__LineEnumerable);
    options.TypeSize = sizeof(Substring__LineEnumerable_type);
    type = (Substring__LineEnumerable_type*)uClassType::New("Fuse.Text.Substring.LineEnumerable", options);
    type->fp_build_ = Substring__LineEnumerable_build;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))Substring__LineEnumerable__GetEnumerator_fn;
    return type;
}

// public LineEnumerable(Fuse.Text.Substring text) :2149
void Substring__LineEnumerable__ctor__fn(Substring__LineEnumerable* __this, ::g::Fuse::Text::Substring* text)
{
    __this->ctor_(text);
}

// public Uno.Collections.IEnumerator<Fuse.Text.Substring> GetEnumerator() :2154
void Substring__LineEnumerable__GetEnumerator_fn(Substring__LineEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public LineEnumerable New(Fuse.Text.Substring text) :2149
void Substring__LineEnumerable__New1_fn(::g::Fuse::Text::Substring* text, Substring__LineEnumerable** __retval)
{
    *__retval = Substring__LineEnumerable::New1(text);
}

// public LineEnumerable(Fuse.Text.Substring text) [instance] :2149
void Substring__LineEnumerable::ctor_(::g::Fuse::Text::Substring* text)
{
    _text = text;
}

// public Uno.Collections.IEnumerator<Fuse.Text.Substring> GetEnumerator() [instance] :2154
uObject* Substring__LineEnumerable::GetEnumerator()
{
    uStackFrame __("Fuse.Text.Substring.LineEnumerable", "GetEnumerator()");
    return (uObject*)::g::Fuse::Text::Substring__LineEnumerator::New1(_text);
}

// public LineEnumerable New(Fuse.Text.Substring text) [static] :2149
Substring__LineEnumerable* Substring__LineEnumerable::New1(::g::Fuse::Text::Substring* text)
{
    Substring__LineEnumerable* obj1 = (Substring__LineEnumerable*)uNew(Substring__LineEnumerable_typeof());
    obj1->ctor_(text);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// private sealed class Substring.LineEnumerator :2160
// {
static void Substring__LineEnumerator_build(uType* type)
{
    ::STRINGS[9] = uString::Const("Calling Current on an invalid LineEnumerator");
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Text::Substring_typeof(), NULL), offsetof(Substring__LineEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Substring__LineEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Substring__LineEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::Substring__LineEnumerator, _lineLength), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::Substring__LineEnumerator, _lineStart), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::Substring__LineEnumerator, _skip), 0,
        ::g::Fuse::Text::Substring_typeof(), offsetof(::g::Fuse::Text::Substring__LineEnumerator, _text), 0);
}

Substring__LineEnumerator_type* Substring__LineEnumerator_typeof()
{
    static uSStrong<Substring__LineEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Substring__LineEnumerator);
    options.TypeSize = sizeof(Substring__LineEnumerator_type);
    type = (Substring__LineEnumerator_type*)uClassType::New("Fuse.Text.Substring.LineEnumerator", options);
    type->fp_build_ = Substring__LineEnumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))Substring__LineEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Substring__LineEnumerator__Dispose_fn;
    type->interface2.fp_Reset = (void(*)(uObject*))Substring__LineEnumerator__Reset_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))Substring__LineEnumerator__MoveNext_fn;
    return type;
}

// public LineEnumerator(Fuse.Text.Substring text) :2168
void Substring__LineEnumerator__ctor__fn(Substring__LineEnumerator* __this, ::g::Fuse::Text::Substring* text)
{
    __this->ctor_(text);
}

// public Fuse.Text.Substring get_Current() :2221
void Substring__LineEnumerator__get_Current_fn(Substring__LineEnumerator* __this, ::g::Fuse::Text::Substring** __retval)
{
    *__retval = __this->Current();
}

// public void Dispose() :2229
void Substring__LineEnumerator__Dispose_fn(Substring__LineEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :2181
void Substring__LineEnumerator__MoveNext_fn(Substring__LineEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public LineEnumerator New(Fuse.Text.Substring text) :2168
void Substring__LineEnumerator__New1_fn(::g::Fuse::Text::Substring* text, Substring__LineEnumerator** __retval)
{
    *__retval = Substring__LineEnumerator::New1(text);
}

// public void Reset() :2174
void Substring__LineEnumerator__Reset_fn(Substring__LineEnumerator* __this)
{
    __this->Reset();
}

// public LineEnumerator(Fuse.Text.Substring text) [instance] :2168
void Substring__LineEnumerator::ctor_(::g::Fuse::Text::Substring* text)
{
    _text = text;
    Reset();
}

// public Fuse.Text.Substring get_Current() [instance] :2221
::g::Fuse::Text::Substring* Substring__LineEnumerator::Current()
{
    uStackFrame __("Fuse.Text.Substring.LineEnumerator", "get_Current()");

    if (_lineLength < 0)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[9/*"Calling Cur...*/]));

    return uPtr(_text)->GetSubstring1(_lineStart, _lineLength);
}

// public void Dispose() [instance] :2229
void Substring__LineEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :2181
bool Substring__LineEnumerator::MoveNext()
{
    uStackFrame __("Fuse.Text.Substring.LineEnumerator", "MoveNext()");

    if (_lineLength >= 0)
    {
        _lineStart = (_lineStart + _lineLength);

        if (_lineStart >= uPtr(_text)->Length)
            return false;
    }

    int i = _lineStart + _skip;

    while (i < uPtr(_text)->Length)
    {
        uChar c = uPtr(_text)->Item(i);

        if (c == 10)
        {
            _skip = 1;
            _lineLength = (i - _lineStart);
            return true;
        }

        if (((c == 13) && ((i + 1) < uPtr(_text)->Length)) && (uPtr(_text)->Item(i + 1) == 10))
        {
            _skip = 2;
            _lineLength = (i - _lineStart);
            return true;
        }

        ++i;
    }

    _skip = 0;
    _lineLength = (uPtr(_text)->Length - _lineStart);
    return true;
}

// public void Reset() [instance] :2174
void Substring__LineEnumerator::Reset()
{
    _lineStart = 0;
    _lineLength = -1;
    _skip = 0;
}

// public LineEnumerator New(Fuse.Text.Substring text) [static] :2168
Substring__LineEnumerator* Substring__LineEnumerator::New1(::g::Fuse::Text::Substring* text)
{
    Substring__LineEnumerator* obj1 = (Substring__LineEnumerator*)uNew(Substring__LineEnumerator_typeof());
    obj1->ctor_(text);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public static class Measure :1365
// {
static void Measure_build(uType* type)
{
    ::TYPES[15] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), NULL);
    ::TYPES[16] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL);
    type->Reflection.SetFunctions(2,
        new uFunction("AlignedRectForSize", NULL, (void*)Measure__AlignedRectForSize_fn, 0, true, ::g::Uno::Rect_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Lines", NULL, (void*)Measure__Lines_fn, 0, true, ::g::Uno::Float2_typeof(), 3, ::g::Fuse::Text::Font_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), NULL)));
}

uClassType* Measure_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Measure", options);
    type->fp_build_ = Measure_build;
    return type;
}

// public static Uno.Rect AlignedRectForSize(float2 size, float pixelWidth, float alignment) :1386
void Measure__AlignedRectForSize_fn(::g::Uno::Float2* size, float* pixelWidth, float* alignment, ::g::Uno::Rect* __retval)
{
    *__retval = Measure::AlignedRectForSize(*size, *pixelWidth, *alignment);
}

// public static float2 Lines(Fuse.Text.Font font, float lineSpacing, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> lines) :1367
void Measure__Lines_fn(::g::Fuse::Text::Font* font, float* lineSpacing, ::g::Uno::Collections::List* lines, ::g::Uno::Float2* __retval)
{
    *__retval = Measure::Lines(font, *lineSpacing, lines);
}

// public static Uno.Rect AlignedRectForSize(float2 size, float pixelWidth, float alignment) [static] :1386
::g::Uno::Rect Measure::AlignedRectForSize(::g::Uno::Float2 size, float pixelWidth, float alignment)
{
    float left = alignment * (pixelWidth - size.X);
    float right = left + size.X;
    return ::g::Uno::Rect__New1(left, 0.0f, right, size.Y);
}

// public static float2 Lines(Fuse.Text.Font font, float lineSpacing, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> lines) [static] :1367
::g::Uno::Float2 Measure::Lines(::g::Fuse::Text::Font* font, float lineSpacing, ::g::Uno::Collections::List* lines)
{
    uStackFrame __("Fuse.Text.Measure", "Lines(Fuse.Text.Font,float,Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > ret3;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Text::ShapedRun*> > ret4;
    float y = 0.0f;
    float maxX = 0.0f;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(lines), &ret3), ret3); enum1.MoveNext(::TYPES[15/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>.Enumerator*/]); )
    {
        ::g::Uno::Collections::List* line = enum1.Current(::TYPES[15/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>.Enumerator*/]);
        ::g::Uno::Float2 lineMeasure = ::g::Uno::Float2__New1(0.0f);

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Text::ShapedRun*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(line), &ret4), ret4); enum2.MoveNext(::TYPES[16/*Uno.Collections.List<Fuse.Text.ShapedRun>.Enumerator*/]); )
        {
            ::g::Fuse::Text::ShapedRun* run = enum2.Current(::TYPES[16/*Uno.Collections.List<Fuse.Text.ShapedRun>.Enumerator*/]);
            lineMeasure = ::g::Uno::Float2__op_Addition2(lineMeasure, uPtr(run)->Measure());
        }

        float x = lineMeasure.X;
        maxX = ::g::Uno::Math::Max1(maxX, x);
        y = y + ((uPtr(font)->LineHeight() + lineSpacing) + lineMeasure.Y);
    }

    return ::g::Uno::Float2__New2(maxX, y);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// private sealed class ShapedRun.PGEnumerator :1943
// {
static void ShapedRun__PGEnumerator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Text::PositionedGlyph_typeof(), NULL), offsetof(ShapedRun__PGEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ShapedRun__PGEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(ShapedRun__PGEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::ShapedRun__PGEnumerator, _index), 0,
        ::g::Fuse::Text::ShapedRun_typeof(), offsetof(::g::Fuse::Text::ShapedRun__PGEnumerator, _shapedRun), 0);
}

ShapedRun__PGEnumerator_type* ShapedRun__PGEnumerator_typeof()
{
    static uSStrong<ShapedRun__PGEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ShapedRun__PGEnumerator);
    options.TypeSize = sizeof(ShapedRun__PGEnumerator_type);
    type = (ShapedRun__PGEnumerator_type*)uClassType::New("Fuse.Text.ShapedRun.PGEnumerator", options);
    type->fp_build_ = ShapedRun__PGEnumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))ShapedRun__PGEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ShapedRun__PGEnumerator__Dispose_fn;
    type->interface2.fp_Reset = (void(*)(uObject*))ShapedRun__PGEnumerator__Reset_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))ShapedRun__PGEnumerator__MoveNext_fn;
    return type;
}

// public PGEnumerator(Fuse.Text.ShapedRun shapedRun) :1948
void ShapedRun__PGEnumerator__ctor__fn(ShapedRun__PGEnumerator* __this, ::g::Fuse::Text::ShapedRun* shapedRun)
{
    __this->ctor_(shapedRun);
}

// public Fuse.Text.PositionedGlyph get_Current() :1967
void ShapedRun__PGEnumerator__get_Current_fn(ShapedRun__PGEnumerator* __this, ::g::Fuse::Text::PositionedGlyph* __retval)
{
    *__retval = __this->Current();
}

// public void Dispose() :1973
void ShapedRun__PGEnumerator__Dispose_fn(ShapedRun__PGEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :1959
void ShapedRun__PGEnumerator__MoveNext_fn(ShapedRun__PGEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public PGEnumerator New(Fuse.Text.ShapedRun shapedRun) :1948
void ShapedRun__PGEnumerator__New1_fn(::g::Fuse::Text::ShapedRun* shapedRun, ShapedRun__PGEnumerator** __retval)
{
    *__retval = ShapedRun__PGEnumerator::New1(shapedRun);
}

// public void Reset() :1954
void ShapedRun__PGEnumerator__Reset_fn(ShapedRun__PGEnumerator* __this)
{
    __this->Reset();
}

// public PGEnumerator(Fuse.Text.ShapedRun shapedRun) [instance] :1948
void ShapedRun__PGEnumerator::ctor_(::g::Fuse::Text::ShapedRun* shapedRun)
{
    _shapedRun = shapedRun;
    Reset();
}

// public Fuse.Text.PositionedGlyph get_Current() [instance] :1967
::g::Fuse::Text::PositionedGlyph ShapedRun__PGEnumerator::Current()
{
    uStackFrame __("Fuse.Text.ShapedRun.PGEnumerator", "get_Current()");
    return uPtr(_shapedRun)->Item(_index);
}

// public void Dispose() [instance] :1973
void ShapedRun__PGEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :1959
bool ShapedRun__PGEnumerator::MoveNext()
{
    uStackFrame __("Fuse.Text.ShapedRun.PGEnumerator", "MoveNext()");
    ++_index;
    return _index < uPtr(_shapedRun)->Count;
}

// public void Reset() [instance] :1954
void ShapedRun__PGEnumerator::Reset()
{
    _index = -1;
}

// public PGEnumerator New(Fuse.Text.ShapedRun shapedRun) [static] :1948
ShapedRun__PGEnumerator* ShapedRun__PGEnumerator::New1(::g::Fuse::Text::ShapedRun* shapedRun)
{
    ShapedRun__PGEnumerator* obj1 = (ShapedRun__PGEnumerator*)uNew(ShapedRun__PGEnumerator_typeof());
    obj1->ctor_(shapedRun);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public struct PositionedGlyph :997
// {
static void PositionedGlyph_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Text::PositionedGlyph, Offset), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::PositionedGlyph, Cluster), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Text::PositionedGlyph, _Advance), 0,
        ::g::Fuse::Text::Glyph_typeof(), offsetof(::g::Fuse::Text::PositionedGlyph, _Glyph), 0);
    type->Reflection.SetFields(2,
        new uField("Cluster", 1),
        new uField("Offset", 0));
    type->Reflection.SetFunctions(2,
        new uFunction("get_Advance", NULL, (void*)PositionedGlyph__get_Advance_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_Glyph", NULL, (void*)PositionedGlyph__get_Glyph_fn, 0, false, ::g::Fuse::Text::Glyph_typeof(), 0));
}

uStructType* PositionedGlyph_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(PositionedGlyph);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Text.PositionedGlyph", options);
    type->fp_build_ = PositionedGlyph_build;
    return type;
}

// internal PositionedGlyph(Fuse.Text.Glyph glyph, float2 advance, float2 offset, int cluster) :1004
void PositionedGlyph__ctor__fn(PositionedGlyph* __this, ::g::Fuse::Text::Glyph* glyph, ::g::Uno::Float2* advance, ::g::Uno::Float2* offset, int* cluster)
{
    __this->ctor_(*glyph, *advance, *offset, *cluster);
}

// public generated float2 get_Advance() :1000
void PositionedGlyph__get_Advance_fn(PositionedGlyph* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Advance();
}

// private generated void set_Advance(float2 value) :1000
void PositionedGlyph__set_Advance_fn(PositionedGlyph* __this, ::g::Uno::Float2* value)
{
    __this->Advance(*value);
}

// public generated Fuse.Text.Glyph get_Glyph() :999
void PositionedGlyph__get_Glyph_fn(PositionedGlyph* __this, ::g::Fuse::Text::Glyph* __retval)
{
    *__retval = __this->Glyph();
}

// private generated void set_Glyph(Fuse.Text.Glyph value) :999
void PositionedGlyph__set_Glyph_fn(PositionedGlyph* __this, ::g::Fuse::Text::Glyph* value)
{
    __this->Glyph(*value);
}

// internal PositionedGlyph New(Fuse.Text.Glyph glyph, float2 advance, float2 offset, int cluster) :1004
void PositionedGlyph__New1_fn(::g::Fuse::Text::Glyph* glyph, ::g::Uno::Float2* advance, ::g::Uno::Float2* offset, int* cluster, PositionedGlyph* __retval)
{
    *__retval = PositionedGlyph__New1(*glyph, *advance, *offset, *cluster);
}

// internal PositionedGlyph(Fuse.Text.Glyph glyph, float2 advance, float2 offset, int cluster) [instance] :1004
void PositionedGlyph::ctor_(::g::Fuse::Text::Glyph glyph, ::g::Uno::Float2 advance, ::g::Uno::Float2 offset, int cluster)
{
    Glyph(glyph);
    Advance(advance);
    Offset = offset;
    Cluster = cluster;
}

// public generated float2 get_Advance() [instance] :1000
::g::Uno::Float2 PositionedGlyph::Advance()
{
    return _Advance;
}

// private generated void set_Advance(float2 value) [instance] :1000
void PositionedGlyph::Advance(::g::Uno::Float2 value)
{
    _Advance = value;
}

// public generated Fuse.Text.Glyph get_Glyph() [instance] :999
::g::Fuse::Text::Glyph PositionedGlyph::Glyph()
{
    return _Glyph;
}

// private generated void set_Glyph(Fuse.Text.Glyph value) [instance] :999
void PositionedGlyph::Glyph(::g::Fuse::Text::Glyph value)
{
    _Glyph = value;
}

// internal PositionedGlyph New(Fuse.Text.Glyph glyph, float2 advance, float2 offset, int cluster) [static] :1004
PositionedGlyph PositionedGlyph__New1(::g::Fuse::Text::Glyph glyph, ::g::Uno::Float2 advance, ::g::Uno::Float2 offset, int cluster)
{
    PositionedGlyph obj1;
    obj1.ctor_(glyph, advance, offset, cluster);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// internal sealed class PositionedRun :1428
// {
static void PositionedRun_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Text::PositionedRun, Measurements), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Text::PositionedRun, Position), 0,
        ::g::Fuse::Text::ShapedRun_typeof(), offsetof(::g::Fuse::Text::PositionedRun, ShapedRun), 0);
}

uType* PositionedRun_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(PositionedRun);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Text.PositionedRun", options);
    type->fp_build_ = PositionedRun_build;
    return type;
}

// public PositionedRun(Fuse.Text.ShapedRun shapedRun, float2 position, float2 measurements) :1435
void PositionedRun__ctor__fn(PositionedRun* __this, ::g::Fuse::Text::ShapedRun* shapedRun, ::g::Uno::Float2* position, ::g::Uno::Float2* measurements)
{
    __this->ctor_(shapedRun, *position, *measurements);
}

// public PositionedRun New(Fuse.Text.ShapedRun shapedRun, float2 position, float2 measurements) :1435
void PositionedRun__New1_fn(::g::Fuse::Text::ShapedRun* shapedRun, ::g::Uno::Float2* position, ::g::Uno::Float2* measurements, PositionedRun** __retval)
{
    *__retval = PositionedRun::New1(shapedRun, *position, *measurements);
}

// public Fuse.Text.Bidirectional.Run get_Run() :1431
void PositionedRun__get_Run_fn(PositionedRun* __this, ::g::Fuse::Text::Bidirectional::Run* __retval)
{
    *__retval = __this->Run();
}

// public static Fuse.Text.PositionedRun Translate(Fuse.Text.PositionedRun positionedRun, float2 translation) :1442
void PositionedRun__Translate_fn(PositionedRun* positionedRun, ::g::Uno::Float2* translation, PositionedRun** __retval)
{
    *__retval = PositionedRun::Translate(positionedRun, *translation);
}

// public PositionedRun(Fuse.Text.ShapedRun shapedRun, float2 position, float2 measurements) [instance] :1435
void PositionedRun::ctor_(::g::Fuse::Text::ShapedRun* shapedRun, ::g::Uno::Float2 position, ::g::Uno::Float2 measurements)
{
    ShapedRun = shapedRun;
    Position = position;
    Measurements = measurements;
}

// public Fuse.Text.Bidirectional.Run get_Run() [instance] :1431
::g::Fuse::Text::Bidirectional::Run PositionedRun::Run()
{
    uStackFrame __("Fuse.Text.PositionedRun", "get_Run()");
    return uPtr(ShapedRun)->Run();
}

// public PositionedRun New(Fuse.Text.ShapedRun shapedRun, float2 position, float2 measurements) [static] :1435
PositionedRun* PositionedRun::New1(::g::Fuse::Text::ShapedRun* shapedRun, ::g::Uno::Float2 position, ::g::Uno::Float2 measurements)
{
    PositionedRun* obj1 = (PositionedRun*)uNew(PositionedRun_typeof());
    obj1->ctor_(shapedRun, position, measurements);
    return obj1;
}

// public static Fuse.Text.PositionedRun Translate(Fuse.Text.PositionedRun positionedRun, float2 translation) [static] :1442
PositionedRun* PositionedRun::Translate(PositionedRun* positionedRun, ::g::Uno::Float2 translation)
{
    uStackFrame __("Fuse.Text.PositionedRun", "Translate(Fuse.Text.PositionedRun,float2)");
    return PositionedRun::New1(uPtr(positionedRun)->ShapedRun, ::g::Uno::Float2__op_Addition2(uPtr(positionedRun)->Position, translation), uPtr(positionedRun)->Measurements);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// internal struct Quad :1451
// {
static void Quad_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Text::Quad, Position), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Text::Quad, TexCoords), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Text::Quad, Scale), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::Text::Quad, Rect), 0);
}

uStructType* Quad_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(Quad);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Text.Quad", options);
    type->fp_build_ = Quad_build;
    return type;
}

// public Quad(float2 position, Uno.Recti texCoords, float scale) :1458
void Quad__ctor__fn(Quad* __this, ::g::Uno::Float2* position, ::g::Uno::Recti* texCoords, float* scale)
{
    __this->ctor_(*position, *texCoords, *scale);
}

// public Quad New(float2 position, Uno.Recti texCoords, float scale) :1458
void Quad__New1_fn(::g::Uno::Float2* position, ::g::Uno::Recti* texCoords, float* scale, Quad* __retval)
{
    *__retval = Quad__New1(*position, *texCoords, *scale);
}

// public Quad(float2 position, Uno.Recti texCoords, float scale) [instance] :1458
void Quad::ctor_(::g::Uno::Float2 position, ::g::Uno::Recti texCoords, float scale)
{
    ::g::Uno::Recti ind1;
    Position = position;
    TexCoords = texCoords;
    Scale = scale;
    Rect = ::g::Uno::Rect__New2(Position, ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Implicit1((ind1 = TexCoords, (&ind1))->Size()), Scale));
}

// public Quad New(float2 position, Uno.Recti texCoords, float scale) [static] :1458
Quad Quad__New1(::g::Uno::Float2 position, ::g::Uno::Recti texCoords, float scale)
{
    Quad obj2;
    obj2.ctor_(position, texCoords, scale);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public struct RenderedGlyph :1013
// {
static void RenderedGlyph_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Content::Images::Bitmap_typeof(), offsetof(::g::Fuse::Text::RenderedGlyph, Bitmap), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Text::RenderedGlyph, Offset), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Text::RenderedGlyph, Scale), 0);
    type->Reflection.SetFields(3,
        new uField("Bitmap", 0),
        new uField("Offset", 1),
        new uField("Scale", 2));
}

uStructType* RenderedGlyph_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(RenderedGlyph);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Text.RenderedGlyph", options);
    type->fp_build_ = RenderedGlyph_build;
    return type;
}

// internal RenderedGlyph(Uno.Content.Images.Bitmap bitmap, float2 offset, float scale) :1019
void RenderedGlyph__ctor__fn(RenderedGlyph* __this, ::g::Uno::Content::Images::Bitmap* bitmap, ::g::Uno::Float2* offset, float* scale)
{
    __this->ctor_(bitmap, *offset, *scale);
}

// internal RenderedGlyph New(Uno.Content.Images.Bitmap bitmap, float2 offset, float scale) :1019
void RenderedGlyph__New1_fn(::g::Uno::Content::Images::Bitmap* bitmap, ::g::Uno::Float2* offset, float* scale, RenderedGlyph* __retval)
{
    *__retval = RenderedGlyph__New1(bitmap, *offset, *scale);
}

// internal RenderedGlyph(Uno.Content.Images.Bitmap bitmap, float2 offset, float scale) [instance] :1019
void RenderedGlyph::ctor_(::g::Uno::Content::Images::Bitmap* bitmap, ::g::Uno::Float2 offset, float scale)
{
    Bitmap = bitmap;
    Offset = offset;
    Scale = scale;
}

// internal RenderedGlyph New(Uno.Content.Images.Bitmap bitmap, float2 offset, float scale) [static] :1019
RenderedGlyph RenderedGlyph__New1(::g::Uno::Content::Images::Bitmap* bitmap, ::g::Uno::Float2 offset, float scale)
{
    RenderedGlyph obj1;
    obj1.ctor_(bitmap, offset, scale);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public sealed class Renderer :1487
// {
// static Renderer() :1487
static void Renderer__cctor__fn(uType* __type)
{
    Renderer::_minimumGlyphAtlasSize_ = ::g::Uno::Int2__New2(512, 512);
    Renderer::_glyphAtlas_ = ::g::Fuse::Text::GlyphAtlas::New1(Renderer::_minimumGlyphAtlasSize_);
    Renderer::_glyphAtlasMutex_ = ::g::Uno::Threading::Mutex::Create();
}

static void Renderer_build(uType* type)
{
    ::TYPES[17] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[18] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Text::Batch_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::IDisposable_typeof();
    ::TYPES[19] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::Batch_typeof(), NULL);
    ::TYPES[20] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::Quad_typeof(), NULL), NULL);
    ::TYPES[21] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::Quad_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL);
    type->SetInterfaces(
        ::TYPES[14/*Uno.IDisposable*/], offsetof(Renderer_type, interface0));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::Renderer, _approximateGlyphCount), 0,
        ::TYPES[19/*Uno.Collections.List<Fuse.Text.Batch>*/], offsetof(::g::Fuse::Text::Renderer, _batches), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Text::Renderer, _draw_5eb093de), 0,
        ::g::Fuse::Text::Font_typeof(), offsetof(::g::Fuse::Text::Renderer, _font), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL), offsetof(::g::Fuse::Text::Renderer, _positionedRuns), 0,
        ::TYPES[20/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.Quad>>*/], offsetof(::g::Fuse::Text::Renderer, _texturedQuads), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::Renderer, _version), 0,
        ::g::Fuse::Text::GlyphAtlas_typeof(), (uintptr_t)&::g::Fuse::Text::Renderer::_glyphAtlas_, uFieldFlagsStatic,
        ::g::Uno::Threading::Mutex_typeof(), (uintptr_t)&::g::Fuse::Text::Renderer::_glyphAtlasMutex_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Text::Renderer::_glyphAtlasVersion_, uFieldFlagsStatic,
        ::g::Uno::Int2_typeof(), (uintptr_t)&::g::Fuse::Text::Renderer::_minimumGlyphAtlasSize_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("Dispose", NULL, (void*)Renderer__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Draw", NULL, (void*)Renderer__Draw_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction(".ctor", NULL, (void*)Renderer__New1_fn, 0, true, type, 3, ::g::Fuse::Text::Font_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL), ::g::Uno::Int_typeof()));
}

Renderer_type* Renderer_typeof()
{
    static uSStrong<Renderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Renderer);
    options.TypeSize = sizeof(Renderer_type);
    type = (Renderer_type*)uClassType::New("Fuse.Text.Renderer", options);
    type->fp_build_ = Renderer_build;
    type->fp_cctor_ = Renderer__cctor__fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Renderer__Dispose_fn;
    return type;
}

// public Renderer(Fuse.Text.Font font, Uno.Collections.List<Fuse.Text.PositionedRun> positionedRuns, int approximateGlyphCount) :1515
void Renderer__ctor__fn(Renderer* __this, ::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* positionedRuns, int* approximateGlyphCount)
{
    __this->ctor_(font, positionedRuns, *approximateGlyphCount);
}

// private static Uno.Buffer CreateIndexBufferData(int length) :1699
void Renderer__CreateIndexBufferData_fn(int* length, ::g::Uno::Buffer** __retval)
{
    *__retval = Renderer::CreateIndexBufferData(*length);
}

// private static Uno.Buffer CreateVertexBufferData(Uno.Collections.List<Fuse.Text.Quad> quads, int2 texSize) :1717
void Renderer__CreateVertexBufferData_fn(::g::Uno::Collections::List* quads, ::g::Uno::Int2* texSize, ::g::Uno::Buffer** __retval)
{
    *__retval = Renderer::CreateVertexBufferData(quads, *texSize);
}

// public void Dispose() :1524
void Renderer__Dispose_fn(Renderer* __this)
{
    __this->Dispose();
}

// private void DisposeBatches() :1531
void Renderer__DisposeBatches_fn(Renderer* __this)
{
    __this->DisposeBatches();
}

// public void Draw(float4 color, float4x4 pixelToClipSpaceMatrix) :1541
void Renderer__Draw_fn(Renderer* __this, ::g::Uno::Float4* color, ::g::Uno::Float4x4* pixelToClipSpaceMatrix)
{
    __this->Draw(*color, *pixelToClipSpaceMatrix);
}

// private Uno.Collections.List<Fuse.Text.Batch> GetBatches() :1586
void Renderer__GetBatches_fn(Renderer* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->GetBatches();
}

// private Uno.Collections.List<Uno.Collections.List<Fuse.Text.Quad>> GetTexturedQuads() :1611
void Renderer__GetTexturedQuads_fn(Renderer* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->GetTexturedQuads();
}

// private generated void init_DrawCalls() :1487
void Renderer__init_DrawCalls_fn(Renderer* __this)
{
    __this->init_DrawCalls();
}

// public Renderer New(Fuse.Text.Font font, Uno.Collections.List<Fuse.Text.PositionedRun> positionedRuns, int approximateGlyphCount) :1515
void Renderer__New1_fn(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* positionedRuns, int* approximateGlyphCount, Renderer** __retval)
{
    *__retval = Renderer::New1(font, positionedRuns, *approximateGlyphCount);
}

// internal static void RecreateGlyphAtlas(int version) :1494
void Renderer__RecreateGlyphAtlas_fn(int* version)
{
    Renderer::RecreateGlyphAtlas(*version);
}

// private static Uno.Collections.List<Uno.Collections.List<Fuse.Text.Quad>> TexturedQuads(Fuse.Text.Font font, Uno.Collections.List<Fuse.Text.PositionedRun> positionedRuns, int approximateGlyphCount) :1622
void Renderer__TexturedQuads_fn(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* positionedRuns, int* approximateGlyphCount, ::g::Uno::Collections::List** __retval)
{
    *__retval = Renderer::TexturedQuads(font, positionedRuns, *approximateGlyphCount);
}

uSStrong< ::g::Fuse::Text::GlyphAtlas*> Renderer::_glyphAtlas_;
uSStrong< ::g::Uno::Threading::Mutex*> Renderer::_glyphAtlasMutex_;
int Renderer::_glyphAtlasVersion_;
::g::Uno::Int2 Renderer::_minimumGlyphAtlasSize_;

// public Renderer(Fuse.Text.Font font, Uno.Collections.List<Fuse.Text.PositionedRun> positionedRuns, int approximateGlyphCount) [instance] :1515
void Renderer::ctor_(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* positionedRuns, int approximateGlyphCount)
{
    _font = font;
    _positionedRuns = positionedRuns;
    _approximateGlyphCount = approximateGlyphCount;
    Renderer__SharedIndexBuffer::Retain();
    init_DrawCalls();
}

// public void Dispose() [instance] :1524
void Renderer::Dispose()
{
    uStackFrame __("Fuse.Text.Renderer", "Dispose()");
    DisposeBatches();
    Renderer__SharedIndexBuffer::Release();
    _texturedQuads = NULL;
}

// private void DisposeBatches() [instance] :1531
void Renderer::DisposeBatches()
{
    uStackFrame __("Fuse.Text.Renderer", "DisposeBatches()");
    ::g::Uno::Collections::List__Enumerator< ::g::Fuse::Text::Batch> ret8;

    if (_batches != NULL)
    {
        for (::g::Uno::Collections::List__Enumerator< ::g::Fuse::Text::Batch> enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_batches), &ret8), ret8); enum1.MoveNext(::TYPES[18/*Uno.Collections.List<Fuse.Text.Batch>.Enumerator*/]); )
        {
            ::g::Fuse::Text::Batch batch = enum1.Current(::TYPES[18/*Uno.Collections.List<Fuse.Text.Batch>.Enumerator*/]);
            batch.Dispose();
        }

        _batches = NULL;
    }
}

// public void Draw(float4 color, float4x4 pixelToClipSpaceMatrix) [instance] :1541
void Renderer::Draw(::g::Uno::Float4 color, ::g::Uno::Float4x4 pixelToClipSpaceMatrix)
{
    uStackFrame __("Fuse.Text.Renderer", "Draw(float4,float4x4)");
    ::g::Uno::Collections::List__Enumerator< ::g::Fuse::Text::Batch> ret9;
    ::g::Uno::Graphics::Texture2D* ret10;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(Renderer::_glyphAtlasMutex());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[14/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List* batches = GetBatches();
        uPtr(Renderer::_glyphAtlas())->Commit();
        ::g::Uno::Collections::List* textures = uPtr(Renderer::_glyphAtlas())->Textures;

        for (::g::Uno::Collections::List__Enumerator< ::g::Fuse::Text::Batch> enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(batches), &ret9), ret9); enum2.MoveNext(::TYPES[18/*Uno.Collections.List<Fuse.Text.Batch>.Enumerator*/]); )
        {
            ::g::Fuse::Text::Batch batch = enum2.Current(::TYPES[18/*Uno.Collections.List<Fuse.Text.Batch>.Enumerator*/]);
            ::g::Uno::Graphics::Texture2D* texture = (::g::Uno::Collections::List__get_Item_fn(uPtr(textures), uCRef<int>(batch.TextureIndex), &ret10), ret10);
            bool grayScale = uPtr(texture)->Format() == 1;
            ::g::Uno::Graphics::IndexBuffer* indexBuffer = Renderer__SharedIndexBuffer::IndexBuffer_;
            _draw_5eb093de.BlendEnabled(true);
            _draw_5eb093de.CullFace(0);
            _draw_5eb093de.BlendSrcAlpha(7);
            _draw_5eb093de.BlendDstRgb(3);
            _draw_5eb093de.Const(0, grayScale);
            _draw_5eb093de.Use();
            _draw_5eb093de.Attrib1(1, 2, batch.VertexBuffer, 12, 0);
            _draw_5eb093de.Attrib1(2, 14, batch.VertexBuffer, 12, 8);
            _draw_5eb093de.Uniform12(3, pixelToClipSpaceMatrix);
            _draw_5eb093de.Uniform10(4, color);
            _draw_5eb093de.Sampler3(5, texture, ::g::Uno::Graphics::SamplerState__LinearClamp());
            _draw_5eb093de.Draw(batch.QuadCount * 6, 2, indexBuffer);
        }
    }
}

// private Uno.Collections.List<Fuse.Text.Batch> GetBatches() [instance] :1586
::g::Uno::Collections::List* Renderer::GetBatches()
{
    uStackFrame __("Fuse.Text.Renderer", "GetBatches()");
    ::g::Uno::Collections::List* ret11;
    ::g::Uno::Graphics::Texture2D* ret12;
    ::g::Uno::Collections::List* texturedQuads = GetTexturedQuads();

    if (_batches != NULL)
        return _batches;

    int len = uPtr(texturedQuads)->Count();
    _batches = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[19/*Uno.Collections.List<Fuse.Text.Batch>*/], len));
    ::g::Uno::Collections::List* textures = uPtr(Renderer::_glyphAtlas())->Textures;

    for (int i = 0; i < len; ++i)
    {
        ::g::Uno::Collections::List* quads = (::g::Uno::Collections::List__get_Item_fn(uPtr(texturedQuads), uCRef<int>(i), &ret11), ret11);
        int quadCount = uPtr(quads)->Count();

        if (quadCount > 0)
        {
            ::g::Uno::Graphics::VertexBuffer* vertexBuffer = ::g::Uno::Graphics::VertexBuffer::New3(2);
            vertexBuffer->Update(Renderer::CreateVertexBufferData(quads, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(textures), uCRef<int>(i), &ret12), ret12))->Size()));
            ::g::Uno::Collections::List__Add_fn(uPtr(_batches), uCRef(::g::Fuse::Text::Batch__New1(i, vertexBuffer, quadCount)));
        }
    }

    return _batches;
}

// private Uno.Collections.List<Uno.Collections.List<Fuse.Text.Quad>> GetTexturedQuads() [instance] :1611
::g::Uno::Collections::List* Renderer::GetTexturedQuads()
{
    uStackFrame __("Fuse.Text.Renderer", "GetTexturedQuads()");

    if ((_texturedQuads == NULL) || (_version != Renderer::_glyphAtlasVersion()))
    {
        DisposeBatches();
        _version = Renderer::_glyphAtlasVersion();
        _texturedQuads = Renderer::TexturedQuads(_font, _positionedRuns, _approximateGlyphCount);
    }

    return _texturedQuads;
}

// private generated void init_DrawCalls() [instance] :1487
void Renderer::init_DrawCalls()
{
    uStackFrame __("Fuse.Text.Renderer", "init_DrawCalls()");
    _draw_5eb093de = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseText_bundle::Renderer0b7f7722());
}

// private static Uno.Buffer CreateIndexBufferData(int length) [static] :1699
::g::Uno::Buffer* Renderer::CreateIndexBufferData(int length)
{
    uStackFrame __("Fuse.Text.Renderer", "CreateIndexBufferData(int)");
    Renderer_typeof()->Init();
    int stride = 12;
    ::g::Uno::Buffer* buffer = ::g::Uno::Buffer::New4(stride * length);

    for (int i = 0; i < length; ++i)
    {
        int bufferPos = i * stride;
        int index = i * 4;
        uPtr(buffer)->Set23(bufferPos, (uint16_t)index, true);
        buffer->Set23(bufferPos + 2, (uint16_t)(index + 1), true);
        buffer->Set23(bufferPos + 4, (uint16_t)(index + 2), true);
        buffer->Set23(bufferPos + 6, (uint16_t)(index + 2), true);
        buffer->Set23(bufferPos + 8, (uint16_t)(index + 3), true);
        buffer->Set23(bufferPos + 10, (uint16_t)index, true);
    }

    return buffer;
}

// private static Uno.Buffer CreateVertexBufferData(Uno.Collections.List<Fuse.Text.Quad> quads, int2 texSize) [static] :1717
::g::Uno::Buffer* Renderer::CreateVertexBufferData(::g::Uno::Collections::List* quads, ::g::Uno::Int2 texSize)
{
    uStackFrame __("Fuse.Text.Renderer", "CreateVertexBufferData(Uno.Collections.List<Fuse.Text.Quad>,int2)");
    Renderer_typeof()->Init();
    ::g::Uno::Recti ind4;
    ::g::Uno::Recti ind5;
    ::g::Fuse::Text::Quad ret7;
    int stride = 12;
    int quadStride = 4 * stride;
    int length = uPtr(quads)->Count();
    uArray* buffer = uArray::New(::TYPES[17/*byte[]*/], quadStride * length);

    for (int i = 0; i < length; ++i)
    {
        ::g::Fuse::Text::Quad quad = (::g::Uno::Collections::List__get_Item_fn(uPtr(quads), uCRef<int>(i), &ret7), ret7);
        int bufferPos = i * quadStride;
        ::g::Uno::Rect rect = quad.Rect;
        float rectLeft = rect.Left;
        float rectTop = rect.Top;
        float rectRight = rect.Right;
        float rectBottom = rect.Bottom;
        ::g::Uno::Int2 texCoord = ::g::Uno::Int2__op_Division1(::g::Uno::Int2__op_Multiply1((ind4 = quad.TexCoords, (&ind4))->Position(), ::g::Uno::Int2__op_Implicit3(::g::Uno::UShort2__New2(65535, 65535))), texSize);
        ::g::Uno::Int2 texCoordSize = ::g::Uno::Int2__op_Division1(::g::Uno::Int2__op_Multiply1((ind5 = quad.TexCoords, (&ind5))->Size(), ::g::Uno::Int2__op_Implicit3(::g::Uno::UShort2__New2(65535, 65535))), texSize);
        uint16_t texLeft = (uint16_t)texCoord.X;
        uint16_t texTop = (uint16_t)texCoord.Y;
        uint16_t texRight = (uint16_t)(texCoord.X + texCoordSize.X);
        uint16_t texBottom = (uint16_t)(texCoord.Y + texCoordSize.Y);
        bool littleEndian = true;
        ::g::Uno::Runtime::Implementation::BufferImpl::SetFloat(buffer, bufferPos, rectLeft, littleEndian);
        bufferPos = bufferPos + 4;
        ::g::Uno::Runtime::Implementation::BufferImpl::SetFloat(buffer, bufferPos, rectTop, littleEndian);
        bufferPos = bufferPos + 4;
        ::g::Uno::Runtime::Implementation::BufferImpl::SetUShort(buffer, bufferPos, texLeft, littleEndian);
        bufferPos = bufferPos + 2;
        ::g::Uno::Runtime::Implementation::BufferImpl::SetUShort(buffer, bufferPos, texTop, littleEndian);
        bufferPos = bufferPos + 2;
        ::g::Uno::Runtime::Implementation::BufferImpl::SetFloat(buffer, bufferPos, rectRight, littleEndian);
        bufferPos = bufferPos + 4;
        ::g::Uno::Runtime::Implementation::BufferImpl::SetFloat(buffer, bufferPos, rectTop, littleEndian);
        bufferPos = bufferPos + 4;
        ::g::Uno::Runtime::Implementation::BufferImpl::SetUShort(buffer, bufferPos, texRight, littleEndian);
        bufferPos = bufferPos + 2;
        ::g::Uno::Runtime::Implementation::BufferImpl::SetUShort(buffer, bufferPos, texTop, littleEndian);
        bufferPos = bufferPos + 2;
        ::g::Uno::Runtime::Implementation::BufferImpl::SetFloat(buffer, bufferPos, rectRight, littleEndian);
        bufferPos = bufferPos + 4;
        ::g::Uno::Runtime::Implementation::BufferImpl::SetFloat(buffer, bufferPos, rectBottom, littleEndian);
        bufferPos = bufferPos + 4;
        ::g::Uno::Runtime::Implementation::BufferImpl::SetUShort(buffer, bufferPos, texRight, littleEndian);
        bufferPos = bufferPos + 2;
        ::g::Uno::Runtime::Implementation::BufferImpl::SetUShort(buffer, bufferPos, texBottom, littleEndian);
        bufferPos = bufferPos + 2;
        ::g::Uno::Runtime::Implementation::BufferImpl::SetFloat(buffer, bufferPos, rectLeft, littleEndian);
        bufferPos = bufferPos + 4;
        ::g::Uno::Runtime::Implementation::BufferImpl::SetFloat(buffer, bufferPos, rectBottom, littleEndian);
        bufferPos = bufferPos + 4;
        ::g::Uno::Runtime::Implementation::BufferImpl::SetUShort(buffer, bufferPos, texLeft, littleEndian);
        bufferPos = bufferPos + 2;
        ::g::Uno::Runtime::Implementation::BufferImpl::SetUShort(buffer, bufferPos, texBottom, littleEndian);
        bufferPos = bufferPos + 2;
    }

    return ::g::Uno::Buffer::New1(buffer);
}

// public Renderer New(Fuse.Text.Font font, Uno.Collections.List<Fuse.Text.PositionedRun> positionedRuns, int approximateGlyphCount) [static] :1515
Renderer* Renderer::New1(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* positionedRuns, int approximateGlyphCount)
{
    Renderer* obj6 = (Renderer*)uNew(Renderer_typeof());
    obj6->ctor_(font, positionedRuns, approximateGlyphCount);
    return obj6;
}

// internal static void RecreateGlyphAtlas(int version) [static] :1494
void Renderer::RecreateGlyphAtlas(int version)
{
    uStackFrame __("Fuse.Text.Renderer", "RecreateGlyphAtlas(int)");
    Renderer_typeof()->Init();
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(Renderer::_glyphAtlasMutex());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[14/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (version == Renderer::_glyphAtlasVersion())
        {
            ++Renderer::_glyphAtlasVersion();
            uPtr(Renderer::_glyphAtlas())->Dispose();
            Renderer::_glyphAtlas() = ::g::Fuse::Text::GlyphAtlas::New1(Renderer::_minimumGlyphAtlasSize());
        }
    }
}

// private static Uno.Collections.List<Uno.Collections.List<Fuse.Text.Quad>> TexturedQuads(Fuse.Text.Font font, Uno.Collections.List<Fuse.Text.PositionedRun> positionedRuns, int approximateGlyphCount) [static] :1622
::g::Uno::Collections::List* Renderer::TexturedQuads(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* positionedRuns, int approximateGlyphCount)
{
    uStackFrame __("Fuse.Text.Renderer", "TexturedQuads(Fuse.Text.Font,Uno.Collections.List<Fuse.Text.PositionedRun>,int)");
    Renderer_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Text::PositionedRun*> > ret13;
    ::g::Uno::Collections::List* ret14;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(Renderer::_glyphAtlasMutex());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[14/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List* textures = uPtr(Renderer::_glyphAtlas())->Textures;
        int textureCount = uPtr(textures)->Count();
        ::g::Uno::Collections::List* textureBatches = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[20/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.Quad>>*/], textureCount + 1);

        for (int i = 0; i < textureCount; ++i)
            ::g::Uno::Collections::List__Add_fn(uPtr(textureBatches), (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[21/*Uno.Collections.List<Fuse.Text.Quad>*/], approximateGlyphCount));

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Text::PositionedRun*> > enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(positionedRuns), &ret13), ret13); enum3.MoveNext(::TYPES[22/*Uno.Collections.List<Fuse.Text.PositionedRun>.Enumerator*/]); )
        {
            ::g::Fuse::Text::PositionedRun* positionedRun = enum3.Current(::TYPES[22/*Uno.Collections.List<Fuse.Text.PositionedRun>.Enumerator*/]);
            ::g::Uno::Float2 position = uPtr(positionedRun)->Position;
            ::g::Fuse::Text::ShapedRun* shapedRun = positionedRun->ShapedRun;
            uArray* positionedGlyphs = uPtr(shapedRun)->_parent;
            int end = shapedRun->_start + shapedRun->Count;

            for (int i1 = shapedRun->_start; i1 < end; ++i1)
            {
                ::g::Fuse::Text::PositionedGlyph positionedGlyph = uPtr(positionedGlyphs)->Item< ::g::Fuse::Text::PositionedGlyph>(i1);
                ::g::Fuse::Text::Glyph glyph = positionedGlyph.Glyph();
                ::g::Fuse::Text::GlyphTexture glyphTexture = uPtr(font)->GetCachedGlyphTexture(glyph, Renderer::_glyphAtlas(), Renderer::_glyphAtlasVersion());

                if (glyphTexture.IsValid())
                {
                    int textureIndex = glyphTexture.SubTexture().TextureIndex;

                    while (textureIndex >= uPtr(textureBatches)->Count())
                        ::g::Uno::Collections::List__Add_fn(uPtr(textureBatches), (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[21/*Uno.Collections.List<Fuse.Text.Quad>*/], approximateGlyphCount));

                    ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(textureBatches), uCRef<int>(glyphTexture.SubTexture().TextureIndex), &ret14), ret14)), uCRef(::g::Fuse::Text::Quad__New1(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(position, positionedGlyph.Offset), glyphTexture.Offset), glyphTexture.SubTexture().Rect, glyphTexture.Scale)));
                }

                position = ::g::Uno::Float2__op_Addition2(position, positionedGlyph.Advance());
            }
        }

        return textureBatches;
    }
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public static class Shape :1798
// {
static void Shape_build(uType* type)
{
    ::TYPES[23] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), NULL);
    ::TYPES[16] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL);
    ::TYPES[24] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), NULL);
    ::TYPES[25] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::Bidirectional::Run_typeof(), NULL), NULL);
    ::TYPES[26] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL);
    ::TYPES[27] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Text::Bidirectional::Run_typeof(), NULL);
    type->Reflection.SetFunctions(2,
        new uFunction("PositionLines", NULL, (void*)Shape__PositionLines_fn, 0, true, ::TYPES[23/*Uno.Collections.List<Fuse.Text.PositionedRun>*/], 5, ::g::Fuse::Text::Font_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::TYPES[24/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>*/]),
        new uFunction("ShapeLines", NULL, (void*)Shape__ShapeLines_fn, 0, true, ::TYPES[24/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>*/], 2, ::g::Fuse::Text::Font_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::Bidirectional::Run_typeof(), NULL), NULL)));
}

uClassType* Shape_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Shape", options);
    type->fp_build_ = Shape_build;
    return type;
}

// public static Uno.Collections.List<Fuse.Text.PositionedRun> PositionLines(Fuse.Text.Font font, float pixelWidth, float lineSpacing, float alignment, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> lines) :1823
void Shape__PositionLines_fn(::g::Fuse::Text::Font* font, float* pixelWidth, float* lineSpacing, float* alignment, ::g::Uno::Collections::List* lines, ::g::Uno::Collections::List** __retval)
{
    *__retval = Shape::PositionLines(font, *pixelWidth, *lineSpacing, *alignment, lines);
}

// public static Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> ShapeLines(Fuse.Text.Font font, Uno.Collections.List<Uno.Collections.List<Fuse.Text.Bidirectional.Run>> lines) :1800
void Shape__ShapeLines_fn(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lines, ::g::Uno::Collections::List** __retval)
{
    *__retval = Shape::ShapeLines(font, lines);
}

// public static Uno.Collections.List<Fuse.Text.PositionedRun> PositionLines(Fuse.Text.Font font, float pixelWidth, float lineSpacing, float alignment, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> lines) [static] :1823
::g::Uno::Collections::List* Shape::PositionLines(::g::Fuse::Text::Font* font, float pixelWidth, float lineSpacing, float alignment, ::g::Uno::Collections::List* lines)
{
    uStackFrame __("Fuse.Text.Shape", "PositionLines(Fuse.Text.Font,float,float,float,Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > ret6;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Text::ShapedRun*> > ret7;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Text::PositionedRun*> > ret8;
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[23/*Uno.Collections.List<Fuse.Text.PositionedRun>*/]);
    float y = 0.0f;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(lines), &ret6), ret6); enum3.MoveNext(::TYPES[15/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>.Enumerator*/]); )
    {
        ::g::Uno::Collections::List* line = enum3.Current(::TYPES[15/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>.Enumerator*/]);
        ::g::Uno::Collections::List* positionedRuns = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[23/*Uno.Collections.List<Fuse.Text.PositionedRun>*/], uPtr(line)->Count());
        ::g::Uno::Float2 lineMeasure = ::g::Uno::Float2__New1(0.0f);

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Text::ShapedRun*> > enum4 = (::g::Uno::Collections::List__GetEnumerator_fn(line, &ret7), ret7); enum4.MoveNext(::TYPES[16/*Uno.Collections.List<Fuse.Text.ShapedRun>.Enumerator*/]); )
        {
            ::g::Fuse::Text::ShapedRun* srun = enum4.Current(::TYPES[16/*Uno.Collections.List<Fuse.Text.ShapedRun>.Enumerator*/]);
            ::g::Uno::Float2 runMeasure = uPtr(srun)->Measure();
            ::g::Uno::Collections::List__Add_fn(uPtr(positionedRuns), ::g::Fuse::Text::PositionedRun::New1(srun, lineMeasure, runMeasure));
            lineMeasure = ::g::Uno::Float2__op_Addition2(lineMeasure, runMeasure);
        }

        float x = ::g::Uno::Math::Round2(alignment * (pixelWidth - lineMeasure.X));
        ::g::Uno::Float2 pos = ::g::Uno::Float2__New2(x, y);

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Text::PositionedRun*> > enum5 = (::g::Uno::Collections::List__GetEnumerator_fn(positionedRuns, &ret8), ret8); enum5.MoveNext(::TYPES[22/*Uno.Collections.List<Fuse.Text.PositionedRun>.Enumerator*/]); )
        {
            ::g::Fuse::Text::PositionedRun* prun = enum5.Current(::TYPES[22/*Uno.Collections.List<Fuse.Text.PositionedRun>.Enumerator*/]);
            ::g::Uno::Collections::List__Add_fn(uPtr(result), ::g::Fuse::Text::PositionedRun::Translate(prun, pos));
        }

        y = ::g::Uno::Math::Round2(((y + uPtr(font)->LineHeight()) + lineSpacing) + lineMeasure.Y);
    }

    return result;
}

// public static Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> ShapeLines(Fuse.Text.Font font, Uno.Collections.List<Uno.Collections.List<Fuse.Text.Bidirectional.Run>> lines) [static] :1800
::g::Uno::Collections::List* Shape::ShapeLines(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lines)
{
    uStackFrame __("Fuse.Text.Shape", "ShapeLines(Fuse.Text.Font,Uno.Collections.List<Uno.Collections.List<Fuse.Text.Bidirectional.Run>>)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > ret9;
    ::g::Uno::Collections::List__Enumerator< ::g::Fuse::Text::Bidirectional::Run> ret10;
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[24/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>*/], uPtr(lines)->Count());

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(lines, &ret9), ret9); enum1.MoveNext(::TYPES[25/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.Bidirectional.Run>>.Enumerator*/]); )
    {
        ::g::Uno::Collections::List* line = enum1.Current(::TYPES[25/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.Bidirectional.Run>>.Enumerator*/]);
        ::g::Uno::Collections::List* sline = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[26/*Uno.Collections.List<Fuse.Text.ShapedRun>*/], uPtr(line)->Count());

        for (::g::Uno::Collections::List__Enumerator< ::g::Fuse::Text::Bidirectional::Run> enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(line, &ret10), ret10); enum2.MoveNext(::TYPES[27/*Uno.Collections.List<Fuse.Text.Bidirectional.Run>.Enumerator*/]); )
        {
            ::g::Fuse::Text::Bidirectional::Run run = enum2.Current(::TYPES[27/*Uno.Collections.List<Fuse.Text.Bidirectional.Run>.Enumerator*/]);
            ::g::Fuse::Text::ShapedRun* srun = ::g::Fuse::Text::ShapedRun::New1(run, uPtr(font)->Shape(uPtr(run.String)->TrimLeadingNewline(), 0, run.Direction()));
            ::g::Uno::Collections::List__Add_fn(uPtr(sline), srun);
        }

        ::g::Uno::Collections::List__Add_fn(uPtr(result), sline);
    }

    return result;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public sealed class ShapedRun :1862
// {
static void ShapedRun_build(uType* type)
{
    ::STRINGS[10] = uString::Const("start");
    ::STRINGS[11] = uString::Const("count");
    ::STRINGS[12] = uString::Const("index");
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Text::PositionedGlyph_typeof(), NULL), offsetof(ShapedRun_type, interface0));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::ShapedRun, _clusterOffset), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Text::ShapedRun, _measureCache), 0,
        ::g::Fuse::Text::PositionedGlyph_typeof()->Array(), offsetof(::g::Fuse::Text::ShapedRun, _parent), 0,
        ::g::Fuse::Text::Bidirectional::Run_typeof(), offsetof(::g::Fuse::Text::ShapedRun, _run), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::ShapedRun, _start), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::ShapedRun, Count), 0);
    type->Reflection.SetFields(1,
        new uField("Count", 5));
    type->Reflection.SetFunctions(7,
        new uFunction("GetEnumerator", NULL, (void*)ShapedRun__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Text::PositionedGlyph_typeof(), NULL), 0),
        new uFunction("get_Item", NULL, (void*)ShapedRun__get_Item_fn, 0, false, ::g::Fuse::Text::PositionedGlyph_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Measure", NULL, (void*)ShapedRun__Measure_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)ShapedRun__New1_fn, 0, true, type, 2, ::g::Fuse::Text::Bidirectional::Run_typeof(), ::g::Fuse::Text::PositionedGlyph_typeof()->Array()),
        new uFunction("get_Run", NULL, (void*)ShapedRun__get_Run_fn, 0, false, ::g::Fuse::Text::Bidirectional::Run_typeof(), 0),
        new uFunction("SubShapedRun", NULL, (void*)ShapedRun__SubShapedRun_fn, 0, false, type, 1, ::g::Uno::Int_typeof()),
        new uFunction("SubShapedRun", NULL, (void*)ShapedRun__SubShapedRun1_fn, 0, false, type, 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
}

ShapedRun_type* ShapedRun_typeof()
{
    static uSStrong<ShapedRun_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ShapedRun);
    options.TypeSize = sizeof(ShapedRun_type);
    type = (ShapedRun_type*)uClassType::New("Fuse.Text.ShapedRun", options);
    type->fp_build_ = ShapedRun_build;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))ShapedRun__GetEnumerator_fn;
    return type;
}

// public ShapedRun(Fuse.Text.Bidirectional.Run run, Fuse.Text.PositionedGlyph[] parent) :1871
void ShapedRun__ctor__fn(ShapedRun* __this, ::g::Fuse::Text::Bidirectional::Run* run, uArray* parent)
{
    __this->ctor_(*run, parent);
}

// private ShapedRun(Fuse.Text.Bidirectional.Run run, Fuse.Text.PositionedGlyph[] parent, int start, int count, int clusterOffset) :1876
void ShapedRun__ctor_1_fn(ShapedRun* __this, ::g::Fuse::Text::Bidirectional::Run* run, uArray* parent, int* start, int* count, int* clusterOffset)
{
    __this->ctor_1(*run, parent, *start, *count, *clusterOffset);
}

// public Uno.Collections.IEnumerator<Fuse.Text.PositionedGlyph> GetEnumerator() :1938
void ShapedRun__GetEnumerator_fn(ShapedRun* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Fuse.Text.PositionedGlyph get_Item(int index) :1929
void ShapedRun__get_Item_fn(ShapedRun* __this, int* index, ::g::Fuse::Text::PositionedGlyph* __retval)
{
    *__retval = __this->Item(*index);
}

// public float2 Measure() :1916
void ShapedRun__Measure_fn(ShapedRun* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Measure();
}

// public ShapedRun New(Fuse.Text.Bidirectional.Run run, Fuse.Text.PositionedGlyph[] parent) :1871
void ShapedRun__New1_fn(::g::Fuse::Text::Bidirectional::Run* run, uArray* parent, ShapedRun** __retval)
{
    *__retval = ShapedRun::New1(*run, parent);
}

// private ShapedRun New(Fuse.Text.Bidirectional.Run run, Fuse.Text.PositionedGlyph[] parent, int start, int count, int clusterOffset) :1876
void ShapedRun__New2_fn(::g::Fuse::Text::Bidirectional::Run* run, uArray* parent, int* start, int* count, int* clusterOffset, ShapedRun** __retval)
{
    *__retval = ShapedRun::New2(*run, parent, *start, *count, *clusterOffset);
}

// public Fuse.Text.Bidirectional.Run get_Run() :1865
void ShapedRun__get_Run_fn(ShapedRun* __this, ::g::Fuse::Text::Bidirectional::Run* __retval)
{
    *__retval = __this->Run();
}

// public Fuse.Text.ShapedRun SubShapedRun(int start) :1909
void ShapedRun__SubShapedRun_fn(ShapedRun* __this, int* start, ShapedRun** __retval)
{
    *__retval = __this->SubShapedRun(*start);
}

// public Fuse.Text.ShapedRun SubShapedRun(int start, int count) :1889
void ShapedRun__SubShapedRun1_fn(ShapedRun* __this, int* start, int* count, ShapedRun** __retval)
{
    *__retval = __this->SubShapedRun1(*start, *count);
}

// public ShapedRun(Fuse.Text.Bidirectional.Run run, Fuse.Text.PositionedGlyph[] parent) [instance] :1871
void ShapedRun::ctor_(::g::Fuse::Text::Bidirectional::Run run, uArray* parent)
{
    uStackFrame __("Fuse.Text.ShapedRun", ".ctor(Fuse.Text.Bidirectional.Run,Fuse.Text.PositionedGlyph[])");
    ctor_1(run, parent, 0, uPtr(parent)->Length(), 0);
}

// private ShapedRun(Fuse.Text.Bidirectional.Run run, Fuse.Text.PositionedGlyph[] parent, int start, int count, int clusterOffset) [instance] :1876
void ShapedRun::ctor_1(::g::Fuse::Text::Bidirectional::Run run, uArray* parent, int start, int count, int clusterOffset)
{
    uStackFrame __("Fuse.Text.ShapedRun", ".ctor(Fuse.Text.Bidirectional.Run,Fuse.Text.PositionedGlyph[],int,int,int)");

    if ((count > 0) && ((start < 0) || (start >= uPtr(parent)->Length())))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[10/*"start"*/]));

    if (((start + count) < 0) || ((start + count) > uPtr(parent)->Length()))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[11/*"count"*/]));

    _run = run;
    _parent = parent;
    _start = start;
    Count = count;
    _clusterOffset = clusterOffset;
}

// public Uno.Collections.IEnumerator<Fuse.Text.PositionedGlyph> GetEnumerator() [instance] :1938
uObject* ShapedRun::GetEnumerator()
{
    uStackFrame __("Fuse.Text.ShapedRun", "GetEnumerator()");
    return (uObject*)ShapedRun__PGEnumerator::New1(this);
}

// public Fuse.Text.PositionedGlyph get_Item(int index) [instance] :1929
::g::Fuse::Text::PositionedGlyph ShapedRun::Item(int index)
{
    uStackFrame __("Fuse.Text.ShapedRun", "get_Item(int)");

    if ((index < 0) || (index >= Count))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[12/*"index"*/]));

    ::g::Fuse::Text::PositionedGlyph pg = uPtr(_parent)->Item< ::g::Fuse::Text::PositionedGlyph>(index + _start);
    return ::g::Fuse::Text::PositionedGlyph__New1(pg.Glyph(), pg.Advance(), pg.Offset, pg.Cluster + _clusterOffset);
}

// public float2 Measure() [instance] :1916
::g::Uno::Float2 ShapedRun::Measure()
{
    uStackFrame __("Fuse.Text.ShapedRun", "Measure()");

    if (::g::Uno::Float2__op_Equality(_measureCache, uDefault< ::g::Uno::Float2>()))
    {
        int end = _start + Count;

        for (int i = _start; i < end; ++i)
            _measureCache = ::g::Uno::Float2__op_Addition2(_measureCache, uPtr(_parent)->Item< ::g::Fuse::Text::PositionedGlyph>(i).Advance());
    }

    return _measureCache;
}

// public Fuse.Text.Bidirectional.Run get_Run() [instance] :1865
::g::Fuse::Text::Bidirectional::Run ShapedRun::Run()
{
    return _run;
}

// public Fuse.Text.ShapedRun SubShapedRun(int start) [instance] :1909
ShapedRun* ShapedRun::SubShapedRun(int start)
{
    uStackFrame __("Fuse.Text.ShapedRun", "SubShapedRun(int)");
    return SubShapedRun1(start, Count - start);
}

// public Fuse.Text.ShapedRun SubShapedRun(int start, int count) [instance] :1889
ShapedRun* ShapedRun::SubShapedRun1(int start, int count)
{
    uStackFrame __("Fuse.Text.ShapedRun", "SubShapedRun(int,int)");

    if ((count > 0) && ((start < 0) || (start >= Count)))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[10/*"start"*/]));

    if (((start + count) < 0) || ((start + count) > Count))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[11/*"count"*/]));

    int firstCluster = (count > 0) ? Item(start).Cluster : 0;
    int lastCluster = (count > 0) ? Item((start + count) - 1).Cluster : 0;
    int smallestCluster = ::g::Uno::Math::Min8(firstCluster, lastCluster);
    int largestCluster = ::g::Uno::Math::Max8(firstCluster, lastCluster);
    int clusterOffset = -smallestCluster;
    ::g::Fuse::Text::Bidirectional::Run newRun = ::g::Fuse::Text::Bidirectional::Run__New1(::g::Fuse::Text::SubstringExtensions::InclusiveRange(Run().String, smallestCluster, largestCluster), Run().Level);
    return ShapedRun::New2(newRun, _parent, _start + start, count, _clusterOffset + clusterOffset);
}

// public ShapedRun New(Fuse.Text.Bidirectional.Run run, Fuse.Text.PositionedGlyph[] parent) [static] :1871
ShapedRun* ShapedRun::New1(::g::Fuse::Text::Bidirectional::Run run, uArray* parent)
{
    ShapedRun* obj1 = (ShapedRun*)uNew(ShapedRun_typeof());
    obj1->ctor_(run, parent);
    return obj1;
}

// private ShapedRun New(Fuse.Text.Bidirectional.Run run, Fuse.Text.PositionedGlyph[] parent, int start, int count, int clusterOffset) [static] :1876
ShapedRun* ShapedRun::New2(::g::Fuse::Text::Bidirectional::Run run, uArray* parent, int start, int count, int clusterOffset)
{
    ShapedRun* obj2 = (ShapedRun*)uNew(ShapedRun_typeof());
    obj2->ctor_1(run, parent, start, count, clusterOffset);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// internal static class Renderer.SharedIndexBuffer :1665
// {
static void Renderer__SharedIndexBuffer_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Text::Renderer__SharedIndexBuffer::_length_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Text::Renderer__SharedIndexBuffer::_refCount_, uFieldFlagsStatic,
        ::g::Uno::Graphics::IndexBuffer_typeof(), (uintptr_t)&::g::Fuse::Text::Renderer__SharedIndexBuffer::IndexBuffer_, uFieldFlagsStatic);
}

uClassType* Renderer__SharedIndexBuffer_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Renderer.SharedIndexBuffer", options);
    type->fp_build_ = Renderer__SharedIndexBuffer_build;
    return type;
}

// public static void EnsureSize(int length) :1678
void Renderer__SharedIndexBuffer__EnsureSize_fn(int* length)
{
    Renderer__SharedIndexBuffer::EnsureSize(*length);
}

// public static void Release() :1687
void Renderer__SharedIndexBuffer__Release_fn()
{
    Renderer__SharedIndexBuffer::Release();
}

// public static void Retain() :1671
void Renderer__SharedIndexBuffer__Retain_fn()
{
    Renderer__SharedIndexBuffer::Retain();
}

int Renderer__SharedIndexBuffer::_length_;
int Renderer__SharedIndexBuffer::_refCount_;
uSStrong< ::g::Uno::Graphics::IndexBuffer*> Renderer__SharedIndexBuffer::IndexBuffer_;

// public static void EnsureSize(int length) [static] :1678
void Renderer__SharedIndexBuffer::EnsureSize(int length)
{
    uStackFrame __("Fuse.Text.Renderer.SharedIndexBuffer", "EnsureSize(int)");

    if (length > Renderer__SharedIndexBuffer::_length_)
    {
        Renderer__SharedIndexBuffer::_length_ = ::g::Uno::Math::Max8(length, Renderer__SharedIndexBuffer::_length_ * 2);
        uPtr(Renderer__SharedIndexBuffer::IndexBuffer_)->Update(::g::Fuse::Text::Renderer::CreateIndexBufferData(Renderer__SharedIndexBuffer::_length_));
    }
}

// public static void Release() [static] :1687
void Renderer__SharedIndexBuffer::Release()
{
    uStackFrame __("Fuse.Text.Renderer.SharedIndexBuffer", "Release()");
    --Renderer__SharedIndexBuffer::_refCount_;

    if ((Renderer__SharedIndexBuffer::_refCount_ == 0) && (Renderer__SharedIndexBuffer::IndexBuffer_ != NULL))
    {
        uPtr(Renderer__SharedIndexBuffer::IndexBuffer_)->Dispose();
        Renderer__SharedIndexBuffer::IndexBuffer_ = NULL;
        Renderer__SharedIndexBuffer::_length_ = 0;
    }
}

// public static void Retain() [static] :1671
void Renderer__SharedIndexBuffer::Retain()
{
    ++Renderer__SharedIndexBuffer::_refCount_;

    if (Renderer__SharedIndexBuffer::IndexBuffer_ == NULL)
        Renderer__SharedIndexBuffer::IndexBuffer_ = ::g::Uno::Graphics::IndexBuffer::New3(2);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/implementation/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed class SinglyLinkedList<T> :1171
// {
static void SinglyLinkedList_build(uType* type)
{
    ::TYPES[28] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[29] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[30] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[31] = SinglyLinkedList__Enumerator_typeof();
    type->SetPrecalc(
        type->T(0),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL),
        SinglyLinkedList__Enumerator_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::TYPES[28/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(0), NULL), offsetof(SinglyLinkedList_type, interface0));
    type->SetFields(0,
        type, offsetof(::g::Fuse::Text::SinglyLinkedList, Next), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

SinglyLinkedList_type* SinglyLinkedList_typeof()
{
    static uSStrong<SinglyLinkedList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(SinglyLinkedList);
    options.TypeSize = sizeof(SinglyLinkedList_type);
    type = (SinglyLinkedList_type*)uClassType::New("Fuse.Text.SinglyLinkedList`1", options);
    type->fp_build_ = SinglyLinkedList_build;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))SinglyLinkedList__GetEnumerator_fn;
    return type;
}

// public SinglyLinkedList(T value, [Fuse.Text.SinglyLinkedList<T> next]) :1176
void SinglyLinkedList__ctor__fn(SinglyLinkedList* __this, void* value, SinglyLinkedList* next)
{
    SinglyLinkedList__set_Value_fn(__this, value);
    __this->Next = next;
}

// public static Fuse.Text.SinglyLinkedList<T> FromEnumerable(Uno.Collections.IEnumerable<T> xs) :1187
void SinglyLinkedList__FromEnumerable_fn(uType* __type, uObject* xs, SinglyLinkedList** __retval)
{
    *__retval = SinglyLinkedList::FromEnumerable(__type, xs);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :1182
void SinglyLinkedList__GetEnumerator_fn(SinglyLinkedList* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public SinglyLinkedList New(T value, [Fuse.Text.SinglyLinkedList<T> next]) :1176
void SinglyLinkedList__New1_fn(uType* __type, void* value, SinglyLinkedList* next, SinglyLinkedList** __retval)
{
    SinglyLinkedList* obj1 = (SinglyLinkedList*)uNew(__type);
    SinglyLinkedList__ctor__fn(obj1, value, next);
    return *__retval = obj1, void();
}

// public generated T get_Value() :1173
void SinglyLinkedList__get_Value_fn(SinglyLinkedList* __this, uTRef __retval)
{
    return __retval.Store(__this->_Value()), void();
}

// private generated void set_Value(T value) :1173
void SinglyLinkedList__set_Value_fn(SinglyLinkedList* __this, void* value)
{
    __this->_Value() = value;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :1182
uObject* SinglyLinkedList::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(3/*Fuse.Text.SinglyLinkedList<T>.Enumerator*/),
    };
    uStackFrame __("Fuse.Text.SinglyLinkedList`1", "GetEnumerator()");
    return (uObject*)SinglyLinkedList__Enumerator::New1(__types[0], this);
}

// public static Fuse.Text.SinglyLinkedList<T> FromEnumerable(Uno.Collections.IEnumerable<T> xs) [static] :1187
SinglyLinkedList* SinglyLinkedList::FromEnumerable(uType* __type, uObject* xs)
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
        __type->Precalced(1/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(2/*Uno.Collections.IEnumerator<T>*/),
    };
    uStackFrame __("Fuse.Text.SinglyLinkedList`1", "FromEnumerable(Uno.Collections.IEnumerable<T>)");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT x(__types[0], U_ALLOCA(__types[0]->ValueSize));
    SinglyLinkedList* ret2;
    SinglyLinkedList* ret4;
    SinglyLinkedList* before = (SinglyLinkedList__New1_fn(__type, uT(__types[0], U_ALLOCA(__types[0]->ValueSize)), NULL, &ret2), ret2);
    SinglyLinkedList* head = before;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(xs), __types[1])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[29/*Uno.Collections.IEnumerator*/])); )
    {
        x = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[2]), &ret3), ret3);
        uPtr(head)->Next = (SinglyLinkedList__New1_fn(__type, x, NULL, &ret4), ret4);
        head = uPtr(head)->Next;
    }

    return before->Next;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public sealed class Substring :1991
// {
static void Substring_build(uType* type)
{
    ::STRINGS[10] = uString::Const("start");
    ::STRINGS[13] = uString::Const("length");
    ::STRINGS[12] = uString::Const("index");
    ::TYPES[32] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(10/*SequenceEqual<char>*/, ::g::Uno::Char_typeof(), NULL);
    ::TYPES[29] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[33] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Char_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Char_typeof(), NULL), offsetof(Substring_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Text::Substring, _parent), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::Substring, _start), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::Substring, Length), 0);
    type->Reflection.SetFields(1,
        new uField("Length", 2));
    type->Reflection.SetFunctions(11,
        new uFunction("Equals", NULL, (void*)Substring__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("GetEnumerator", NULL, (void*)Substring__GetEnumerator_fn, 0, false, ::TYPES[33/*Uno.Collections.IEnumerator<char>*/], 0),
        new uFunction("GetSubstring", NULL, (void*)Substring__GetSubstring_fn, 0, false, type, 1, ::g::Uno::Int_typeof()),
        new uFunction("GetSubstring", NULL, (void*)Substring__GetSubstring1_fn, 0, false, type, 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("get_Item", NULL, (void*)Substring__get_Item_fn, 0, false, ::g::Uno::Char_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Lines", NULL, (void*)Substring__get_Lines_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type, NULL), 0),
        new uFunction(".ctor", NULL, (void*)Substring__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)Substring__New2_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)Substring__New3_fn, 0, true, type, 3, ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("TrimLeadingNewline", NULL, (void*)Substring__TrimLeadingNewline_fn, 0, false, type, 0),
        new uFunction("TrimTrailingNewline", NULL, (void*)Substring__TrimTrailingNewline_fn, 0, false, type, 0));
}

Substring_type* Substring_typeof()
{
    static uSStrong<Substring_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Substring);
    options.TypeSize = sizeof(Substring_type);
    type = (Substring_type*)uClassType::New("Fuse.Text.Substring", options);
    type->fp_build_ = Substring_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Substring__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Substring__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Substring__ToString_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))Substring__GetEnumerator_fn;
    return type;
}

// public Substring(string parent) :1997
void Substring__ctor__fn(Substring* __this, uString* parent)
{
    __this->ctor_(parent);
}

// public Substring(string parent, int start) :2002
void Substring__ctor_1_fn(Substring* __this, uString* parent, int* start)
{
    __this->ctor_1(parent, *start);
}

// public Substring(string parent, int start, int length) :2007
void Substring__ctor_2_fn(Substring* __this, uString* parent, int* start, int* length)
{
    __this->ctor_2(parent, *start, *length);
}

// public bool Equals(Fuse.Text.Substring s) :2031
void Substring__Equals2_fn(Substring* __this, Substring* s, bool* __retval)
{
    *__retval = __this->Equals2(s);
}

// public override sealed bool Equals(object o) :2025
void Substring__Equals_fn(Substring* __this, uObject* o, bool* __retval)
{
    uStackFrame __("Fuse.Text.Substring", "Equals(object)");
    Substring* ss = uAs<Substring*>(o, __this->__type);
    return *__retval = (ss == NULL) ? false : __this->Equals2(ss), void();
}

// public Uno.Collections.IEnumerator<char> GetEnumerator() :2096
void Substring__GetEnumerator_fn(Substring* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public override sealed int GetHashCode() :2040
void Substring__GetHashCode_fn(Substring* __this, int* __retval)
{
    uStackFrame __("Fuse.Text.Substring", "GetHashCode()");
    uChar ret5;
    int hash = 5381;

    for (uObject* enum1 = __this->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[29/*Uno.Collections.IEnumerator*/])); )
    {
        uChar c = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[33/*Uno.Collections.IEnumerator<char>*/]), &ret5), ret5);
        hash = ((hash << 5) + hash) ^ (int)c;
    }

    return *__retval = hash, void();
}

// public Fuse.Text.Substring GetSubstring(int start) :2067
void Substring__GetSubstring_fn(Substring* __this, int* start, Substring** __retval)
{
    *__retval = __this->GetSubstring(*start);
}

// public Fuse.Text.Substring GetSubstring(int start, int length) :2058
void Substring__GetSubstring1_fn(Substring* __this, int* start, int* length, Substring** __retval)
{
    *__retval = __this->GetSubstring1(*start, *length);
}

// public char get_Item(int index) :2050
void Substring__get_Item_fn(Substring* __this, int* index, uChar* __retval)
{
    *__retval = __this->Item(*index);
}

// public Uno.Collections.IEnumerable<Fuse.Text.Substring> get_Lines() :2139
void Substring__get_Lines_fn(Substring* __this, uObject** __retval)
{
    *__retval = __this->Lines();
}

// public Substring New(string parent) :1997
void Substring__New1_fn(uString* parent, Substring** __retval)
{
    *__retval = Substring::New1(parent);
}

// public Substring New(string parent, int start) :2002
void Substring__New2_fn(uString* parent, int* start, Substring** __retval)
{
    *__retval = Substring::New2(parent, *start);
}

// public Substring New(string parent, int start, int length) :2007
void Substring__New3_fn(uString* parent, int* start, int* length, Substring** __retval)
{
    *__retval = Substring::New3(parent, *start, *length);
}

// public override sealed string ToString() :2018
void Substring__ToString_fn(Substring* __this, uString** __retval)
{
    uStackFrame __("Fuse.Text.Substring", "ToString()");

    if ((__this->_start == 0) && (__this->Length == uPtr(__this->_parent)->Length()))
        return *__retval = __this->_parent, void();

    return *__retval = ::g::Uno::String::Substring1(uPtr(__this->_parent), __this->_start, __this->Length), void();
}

// public Fuse.Text.Substring TrimLeadingNewline() :2074
void Substring__TrimLeadingNewline_fn(Substring* __this, Substring** __retval)
{
    *__retval = __this->TrimLeadingNewline();
}

// public Fuse.Text.Substring TrimTrailingNewline() :2084
void Substring__TrimTrailingNewline_fn(Substring* __this, Substring** __retval)
{
    *__retval = __this->TrimTrailingNewline();
}

// public Substring(string parent) [instance] :1997
void Substring::ctor_(uString* parent)
{
    uStackFrame __("Fuse.Text.Substring", ".ctor(string)");
    ctor_1(parent, 0);
}

// public Substring(string parent, int start) [instance] :2002
void Substring::ctor_1(uString* parent, int start)
{
    uStackFrame __("Fuse.Text.Substring", ".ctor(string,int)");
    ctor_2(parent, start, uPtr(parent)->Length() - start);
}

// public Substring(string parent, int start, int length) [instance] :2007
void Substring::ctor_2(uString* parent, int start, int length)
{
    uStackFrame __("Fuse.Text.Substring", ".ctor(string,int,int)");

    if ((length > 0) && ((start < 0) || (start >= uPtr(parent)->Length())))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[10/*"start"*/]));

    if (((start + length) < 0) || ((start + length) > uPtr(parent)->Length()))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[13/*"length"*/]));

    _parent = parent;
    _start = start;
    Length = length;
}

// public bool Equals(Fuse.Text.Substring s) [instance] :2031
bool Substring::Equals2(Substring* s)
{
    uStackFrame __("Fuse.Text.Substring", "Equals(Fuse.Text.Substring)");

    if (::g::Uno::Object::ReferenceEquals(this, s))
        return true;

    if ((::g::Uno::Object::ReferenceEquals(_parent, uPtr(s)->_parent) && (_start == uPtr(s)->_start)) && (Length == uPtr(s)->Length))
        return true;

    return (Length == uPtr(s)->Length) && ::g::Uno::Collections::EnumerableExtensions::SequenceEqual(::TYPES[32/*Uno.Collections.EnumerableExtensions.SequenceEqual<char>*/], (uObject*)this, (uObject*)s);
}

// public Uno.Collections.IEnumerator<char> GetEnumerator() [instance] :2096
uObject* Substring::GetEnumerator()
{
    uStackFrame __("Fuse.Text.Substring", "GetEnumerator()");
    return (uObject*)Substring__CharEnumerator::New1(this);
}

// public Fuse.Text.Substring GetSubstring(int start) [instance] :2067
Substring* Substring::GetSubstring(int start)
{
    uStackFrame __("Fuse.Text.Substring", "GetSubstring(int)");

    if ((Length > 0) && ((start < 0) || (start > Length)))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[10/*"start"*/]));

    return Substring::New3(_parent, _start + start, Length - start);
}

// public Fuse.Text.Substring GetSubstring(int start, int length) [instance] :2058
Substring* Substring::GetSubstring1(int start, int length)
{
    uStackFrame __("Fuse.Text.Substring", "GetSubstring(int,int)");

    if (((Length > 0) && (length > 0)) && ((start < 0) || (start >= Length)))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[10/*"start"*/]));

    if ((length < 0) || ((start + length) > Length))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[13/*"length"*/]));

    return Substring::New3(_parent, _start + start, length);
}

// public char get_Item(int index) [instance] :2050
uChar Substring::Item(int index)
{
    uStackFrame __("Fuse.Text.Substring", "get_Item(int)");

    if ((index < 0) || (index >= Length))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[12/*"index"*/]));

    return uPtr(_parent)->Item(_start + index);
}

// public Uno.Collections.IEnumerable<Fuse.Text.Substring> get_Lines() [instance] :2139
uObject* Substring::Lines()
{
    uStackFrame __("Fuse.Text.Substring", "get_Lines()");
    return (uObject*)Substring__LineEnumerable::New1(this);
}

// public Fuse.Text.Substring TrimLeadingNewline() [instance] :2074
Substring* Substring::TrimLeadingNewline()
{
    uStackFrame __("Fuse.Text.Substring", "TrimLeadingNewline()");

    if ((Length >= 1) && (Item(0) == 10))
        return GetSubstring(1);

    if (((Length >= 2) && (Item(0) == 13)) && (Item(1) == 10))
        return GetSubstring(2);

    return this;
}

// public Fuse.Text.Substring TrimTrailingNewline() [instance] :2084
Substring* Substring::TrimTrailingNewline()
{
    uStackFrame __("Fuse.Text.Substring", "TrimTrailingNewline()");

    if ((Length >= 1) && (Item(Length - 1) == 10))
    {
        if ((Length >= 2) && (Item(Length - 2) == 13))
            return GetSubstring1(0, Length - 2);

        return GetSubstring1(0, Length - 1);
    }

    return this;
}

// public Substring New(string parent) [static] :1997
Substring* Substring::New1(uString* parent)
{
    Substring* obj2 = (Substring*)uNew(Substring_typeof());
    obj2->ctor_(parent);
    return obj2;
}

// public Substring New(string parent, int start) [static] :2002
Substring* Substring::New2(uString* parent, int start)
{
    Substring* obj3 = (Substring*)uNew(Substring_typeof());
    obj3->ctor_1(parent, start);
    return obj3;
}

// public Substring New(string parent, int start, int length) [static] :2007
Substring* Substring::New3(uString* parent, int start, int length)
{
    Substring* obj4 = (Substring*)uNew(Substring_typeof());
    obj4->ctor_2(parent, start, length);
    return obj4;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// internal static class SubstringExtensions :2236
// {
static void SubstringExtensions_build(uType* type)
{
    ::STRINGS[14] = uString::Const("i");
    ::STRINGS[15] = uString::Const("s");
    ::STRINGS[16] = uString::Const("!Fuse.Text.SubstringExtensions.IsTrailingSurrogate(s[start])");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno");
    ::STRINGS[17] = uString::Const("end < s.Length");
    ::STRINGS[18] = uString::Const("");
    ::TYPES[1] = uObject_typeof()->Array();
    ::TYPES[34] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(9/*Select<Fuse.Text.Substring, Fuse.Text.Substring>*/, ::g::Fuse::Text::Substring_typeof(), ::g::Fuse::Text::Substring_typeof(), NULL);
    ::TYPES[35] = ::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Text::Substring_typeof(), ::g::Fuse::Text::Substring_typeof(), NULL);
}

uClassType* SubstringExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.SubstringExtensions", options);
    type->fp_build_ = SubstringExtensions_build;
    return type;
}

// public static int CharStart(Fuse.Text.Substring s, int i) :2250
void SubstringExtensions__CharStart_fn(::g::Fuse::Text::Substring* s, int* i, int* __retval)
{
    *__retval = SubstringExtensions::CharStart(s, *i);
}

// public static int CharStart(string s, int i) :2263
void SubstringExtensions__CharStart1_fn(uString* s, int* i, int* __retval)
{
    *__retval = SubstringExtensions::CharStart1(s, *i);
}

// public static string DeleteAt(string s, int& index) :2324
void SubstringExtensions__DeleteAt_fn(uString* s, int* index, uString** __retval)
{
    *__retval = SubstringExtensions::DeleteAt(s, index);
}

// public static string DeleteSpan(string s, int start, int end) :2339
void SubstringExtensions__DeleteSpan_fn(uString* s, int* start, int* end, uString** __retval)
{
    *__retval = SubstringExtensions::DeleteSpan(s, *start, *end);
}

// public static Fuse.Text.Substring InclusiveRange(Fuse.Text.Substring s, int start, int end) :2276
void SubstringExtensions__InclusiveRange_fn(::g::Fuse::Text::Substring* s, int* start, int* end, ::g::Fuse::Text::Substring** __retval)
{
    *__retval = SubstringExtensions::InclusiveRange(s, *start, *end);
}

// private static bool IsLeadingSurrogate(char c) :2238
void SubstringExtensions__IsLeadingSurrogate_fn(uChar* c, bool* __retval)
{
    *__retval = SubstringExtensions::IsLeadingSurrogate(*c);
}

// private static bool IsTrailingSurrogate(char c) :2244
void SubstringExtensions__IsTrailingSurrogate_fn(uChar* c, bool* __retval)
{
    *__retval = SubstringExtensions::IsTrailingSurrogate(*c);
}

// public static int NextCharIndex(string s, int i) :2286
void SubstringExtensions__NextCharIndex_fn(uString* s, int* i, int* __retval)
{
    *__retval = SubstringExtensions::NextCharIndex(s, *i);
}

// public static int PrevCharIndex(string s, int i) :2298
void SubstringExtensions__PrevCharIndex_fn(uString* s, int* i, int* __retval)
{
    *__retval = SubstringExtensions::PrevCharIndex(s, *i);
}

// public static string SafeSubstring(string s, int start) :2318
void SubstringExtensions__SafeSubstring_fn(uString* s, int* start, uString** __retval)
{
    *__retval = SubstringExtensions::SafeSubstring(s, *start);
}

// public static string SafeSubstring(string s, int start, int length) :2310
void SubstringExtensions__SafeSubstring1_fn(uString* s, int* start, int* length, uString** __retval)
{
    *__retval = SubstringExtensions::SafeSubstring1(s, *start, *length);
}

// private static Fuse.Text.Substring TrimLine(Fuse.Text.Substring line) :2354
void SubstringExtensions__TrimLine_fn(::g::Fuse::Text::Substring* line, ::g::Fuse::Text::Substring** __retval)
{
    *__retval = SubstringExtensions::TrimLine(line);
}

// public static Uno.Collections.IEnumerable<Fuse.Text.Substring> TrimmedLines(Fuse.Text.Substring str) :2349
void SubstringExtensions__TrimmedLines_fn(::g::Fuse::Text::Substring* str, uObject** __retval)
{
    *__retval = SubstringExtensions::TrimmedLines(str);
}

// public static int CharStart(Fuse.Text.Substring s, int i) [static] :2250
int SubstringExtensions::CharStart(::g::Fuse::Text::Substring* s, int i)
{
    uStackFrame __("Fuse.Text.SubstringExtensions", "CharStart(Fuse.Text.Substring,int)");

    if ((i < 0) || (i >= uPtr(s)->Length))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[14/*"i"*/]));

    if (SubstringExtensions::IsTrailingSurrogate(uPtr(s)->Item(i)))
    {
        --i;

        if (i < 0)
            U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[15/*"s"*/]));
    }

    return i;
}

// public static int CharStart(string s, int i) [static] :2263
int SubstringExtensions::CharStart1(uString* s, int i)
{
    uStackFrame __("Fuse.Text.SubstringExtensions", "CharStart(string,int)");

    if ((i < 0) || (i >= uPtr(s)->Length()))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[14/*"i"*/]));

    if (SubstringExtensions::IsTrailingSurrogate(uPtr(s)->Item(i)))
    {
        --i;

        if (i < 0)
            U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[15/*"s"*/]));
    }

    return i;
}

// public static string DeleteAt(string s, int& index) [static] :2324
uString* SubstringExtensions::DeleteAt(uString* s, int* index)
{
    uStackFrame __("Fuse.Text.SubstringExtensions", "DeleteAt(string,int&)");
    int len = 1;

    if (SubstringExtensions::IsLeadingSurrogate(uPtr(s)->Item(*index)))
        len = 2;

    if (SubstringExtensions::IsTrailingSurrogate(uPtr(s)->Item(*index)))
    {
        *index = *index - 1;
        len = 2;
    }

    return ::g::Uno::String::op_Addition2(SubstringExtensions::SafeSubstring1(s, 0, *index), SubstringExtensions::SafeSubstring(s, *index + len));
}

// public static string DeleteSpan(string s, int start, int end) [static] :2339
uString* SubstringExtensions::DeleteSpan(uString* s, int start, int end)
{
    uStackFrame __("Fuse.Text.SubstringExtensions", "DeleteSpan(string,int,int)");

    if (SubstringExtensions::IsTrailingSurrogate(uPtr(s)->Item(start)))
        --start;

    if (SubstringExtensions::IsLeadingSurrogate(uPtr(s)->Item(end)))
        ++end;

    return ::g::Uno::String::op_Addition2(SubstringExtensions::SafeSubstring1(s, 0, start), SubstringExtensions::SafeSubstring(s, end + 1));
}

// public static Fuse.Text.Substring InclusiveRange(Fuse.Text.Substring s, int start, int end) [static] :2276
::g::Fuse::Text::Substring* SubstringExtensions::InclusiveRange(::g::Fuse::Text::Substring* s, int start, int end)
{
    uStackFrame __("Fuse.Text.SubstringExtensions", "InclusiveRange(Fuse.Text.Substring,int,int)");
    bool assert1;
    assert1 = SubstringExtensions::IsTrailingSurrogate(uPtr(s)->Item(start));
    ::g::Uno::Diagnostics::Debug::Assert(!assert1, ::STRINGS[16/*"!Fuse.Text....*/], ::STRINGS[1/*"/Users/most...*/], 2278, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 1, uBox(::g::Uno::Bool_typeof(), assert1)));

    if (SubstringExtensions::IsLeadingSurrogate(s->Item(end)))
        ++end;

    ::g::Uno::Diagnostics::Debug::Assert(end < s->Length, ::STRINGS[17/*"end < s.Len...*/], ::STRINGS[1/*"/Users/most...*/], 2281, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Int_typeof(), end), uBox<int>(::g::Uno::Int_typeof(), s->Length)));
    return s->GetSubstring1(start, (end - start) + 1);
}

// private static bool IsLeadingSurrogate(char c) [static] :2238
bool SubstringExtensions::IsLeadingSurrogate(uChar c)
{
    int codePoint = (int)c;
    return (55296 <= codePoint) && (codePoint <= 56319);
}

// private static bool IsTrailingSurrogate(char c) [static] :2244
bool SubstringExtensions::IsTrailingSurrogate(uChar c)
{
    int codePoint = (int)c;
    return (56320 <= codePoint) && (codePoint <= 57343);
}

// public static int NextCharIndex(string s, int i) [static] :2286
int SubstringExtensions::NextCharIndex(uString* s, int i)
{
    uStackFrame __("Fuse.Text.SubstringExtensions", "NextCharIndex(string,int)");

    if (i < 0)
        i = -1;

    if ((i + 1) >= uPtr(s)->Length())
        return uPtr(s)->Length();

    if (SubstringExtensions::IsTrailingSurrogate(uPtr(s)->Item(i + 1)))
        return i + 2;

    return i + 1;
}

// public static int PrevCharIndex(string s, int i) [static] :2298
int SubstringExtensions::PrevCharIndex(uString* s, int i)
{
    uStackFrame __("Fuse.Text.SubstringExtensions", "PrevCharIndex(string,int)");

    if (i > uPtr(s)->Length())
        i = uPtr(s)->Length();

    if ((i - 1) < 0)
        return 0;

    if (SubstringExtensions::IsTrailingSurrogate(uPtr(s)->Item(i - 1)))
        return i - 2;

    return i - 1;
}

// public static string SafeSubstring(string s, int start) [static] :2318
uString* SubstringExtensions::SafeSubstring(uString* s, int start)
{
    uStackFrame __("Fuse.Text.SubstringExtensions", "SafeSubstring(string,int)");

    if (start >= uPtr(s)->Length())
        return ::STRINGS[18/*""*/];

    return ::g::Uno::String::Substring(uPtr(s), start);
}

// public static string SafeSubstring(string s, int start, int length) [static] :2310
uString* SubstringExtensions::SafeSubstring1(uString* s, int start, int length)
{
    uStackFrame __("Fuse.Text.SubstringExtensions", "SafeSubstring(string,int,int)");

    if (start >= uPtr(s)->Length())
        return ::STRINGS[18/*""*/];

    if (length <= 0)
        return ::STRINGS[18/*""*/];

    length = ::g::Uno::Math::Min8(length, uPtr(s)->Length() - start);
    return ::g::Uno::String::Substring1(s, start, length);
}

// private static Fuse.Text.Substring TrimLine(Fuse.Text.Substring line) [static] :2354
::g::Fuse::Text::Substring* SubstringExtensions::TrimLine(::g::Fuse::Text::Substring* line)
{
    uStackFrame __("Fuse.Text.SubstringExtensions", "TrimLine(Fuse.Text.Substring)");
    ::g::Fuse::Text::Substring* trimmedLine = uPtr(line)->TrimLeadingNewline();

    if (uPtr(trimmedLine)->Length == 0)
        return line;

    return trimmedLine;
}

// public static Uno.Collections.IEnumerable<Fuse.Text.Substring> TrimmedLines(Fuse.Text.Substring str) [static] :2349
uObject* SubstringExtensions::TrimmedLines(::g::Fuse::Text::Substring* str)
{
    uStackFrame __("Fuse.Text.SubstringExtensions", "TrimmedLines(Fuse.Text.Substring)");
    return (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[34/*Uno.Collections.EnumerableExtensions.Select<Fuse.Text.Substring, Fuse.Text.Substring>*/], uPtr(str)->Lines(), uDelegate::New(::TYPES[35/*Uno.Func<Fuse.Text.Substring, Fuse.Text.Substring>*/], (void*)SubstringExtensions__TrimLine_fn));
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public struct SubTexture :2375
// {
static void SubTexture_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::SubTexture, TextureIndex), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Text::SubTexture, Rect), 0);
    type->Reflection.SetFields(2,
        new uField("Rect", 1),
        new uField("TextureIndex", 0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SubTexture__New1_fn, 0, true, type, 2, ::g::Uno::Int_typeof(), ::g::Uno::Recti_typeof()));
}

uStructType* SubTexture_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(SubTexture);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Text.SubTexture", options);
    type->fp_build_ = SubTexture_build;
    return type;
}

// public SubTexture(int textureIndex, Uno.Recti rect) :2381
void SubTexture__ctor__fn(SubTexture* __this, int* textureIndex, ::g::Uno::Recti* rect)
{
    __this->ctor_(*textureIndex, *rect);
}

// public SubTexture New(int textureIndex, Uno.Recti rect) :2381
void SubTexture__New1_fn(int* textureIndex, ::g::Uno::Recti* rect, SubTexture* __retval)
{
    *__retval = SubTexture__New1(*textureIndex, *rect);
}

// public SubTexture(int textureIndex, Uno.Recti rect) [instance] :2381
void SubTexture::ctor_(int textureIndex, ::g::Uno::Recti rect)
{
    TextureIndex = textureIndex;
    Rect = rect;
}

// public SubTexture New(int textureIndex, Uno.Recti rect) [static] :2381
SubTexture SubTexture__New1(int textureIndex, ::g::Uno::Recti rect)
{
    SubTexture obj1;
    obj1.ctor_(textureIndex, rect);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public enum TextDirection :1083
uEnumType* TextDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Text.TextDirection", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "LeftToRight", 0LL,
        "RightToLeft", 1LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public sealed class TextureAtlas :2388
// {
static void TextureAtlas_build(uType* type)
{
    ::STRINGS[19] = uString::Const("bitmap.Format == this._format");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno");
    ::STRINGS[20] = uString::Const("Bitmap too large for the texture atlas size");
    ::STRINGS[21] = uString::Const("(&new Uno.Recti(new int2(0), dst.Size)).Contains(new Uno.Recti(dstPos, src.Size))");
    ::STRINGS[22] = uString::Const("src.Format == dst.Format");
    ::TYPES[1] = uObject_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Content::Images::Bitmap_typeof(), offsetof(::g::Fuse::Text::TextureAtlas, _bitmap), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Text::TextureAtlas, _dirty), 0,
        ::g::Uno::Graphics::Format_typeof(), offsetof(::g::Fuse::Text::TextureAtlas, _format), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::Text::TextureAtlas, _minimumTextureSize), 0,
        ::g::Fuse::Internal::RectPacker_typeof(), offsetof(::g::Fuse::Text::TextureAtlas, _packer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::TextureAtlas, _textureIndex), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), NULL), offsetof(::g::Fuse::Text::TextureAtlas, _textures), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("Add", NULL, (void*)TextureAtlas__Add_fn, 0, false, ::g::Fuse::Text::SubTexture_typeof(), 1, ::g::Uno::Content::Images::Bitmap_typeof()),
        new uFunction("Commit", NULL, (void*)TextureAtlas__Commit_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)TextureAtlas__New1_fn, 0, true, type, 3, ::g::Uno::Int2_typeof(), ::g::Uno::Graphics::Format_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), NULL)));
}

uType* TextureAtlas_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(TextureAtlas);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Text.TextureAtlas", options);
    type->fp_build_ = TextureAtlas_build;
    return type;
}

// public TextureAtlas(int2 minimumTextureSize, Uno.Graphics.Format format, Uno.Collections.List<texture2D> textures) :2400
void TextureAtlas__ctor__fn(TextureAtlas* __this, ::g::Uno::Int2* minimumTextureSize, int* format, ::g::Uno::Collections::List* textures)
{
    __this->ctor_(*minimumTextureSize, *format, textures);
}

// public Fuse.Text.SubTexture Add(Uno.Content.Images.Bitmap bitmap) :2414
void TextureAtlas__Add_fn(TextureAtlas* __this, ::g::Uno::Content::Images::Bitmap* bitmap, ::g::Fuse::Text::SubTexture* __retval)
{
    *__retval = __this->Add(bitmap);
}

// private static void Blit(Uno.Content.Images.Bitmap dst, Uno.Content.Images.Bitmap src, int2 dstPos) :2460
void TextureAtlas__Blit_fn(::g::Uno::Content::Images::Bitmap* dst, ::g::Uno::Content::Images::Bitmap* src, ::g::Uno::Int2* dstPos)
{
    TextureAtlas::Blit(dst, src, *dstPos);
}

// public void Commit() :2441
void TextureAtlas__Commit_fn(TextureAtlas* __this)
{
    __this->Commit();
}

// public TextureAtlas New(int2 minimumTextureSize, Uno.Graphics.Format format, Uno.Collections.List<texture2D> textures) :2400
void TextureAtlas__New1_fn(::g::Uno::Int2* minimumTextureSize, int* format, ::g::Uno::Collections::List* textures, TextureAtlas** __retval)
{
    *__retval = TextureAtlas::New1(*minimumTextureSize, *format, textures);
}

// private void NewTexture(int2 size) :2451
void TextureAtlas__NewTexture_fn(TextureAtlas* __this, ::g::Uno::Int2* size)
{
    __this->NewTexture(*size);
}

// public TextureAtlas(int2 minimumTextureSize, Uno.Graphics.Format format, Uno.Collections.List<texture2D> textures) [instance] :2400
void TextureAtlas::ctor_(::g::Uno::Int2 minimumTextureSize, int format, ::g::Uno::Collections::List* textures)
{
    uStackFrame __("Fuse.Text.TextureAtlas", ".ctor(int2,Uno.Graphics.Format,Uno.Collections.List<texture2D>)");
    _minimumTextureSize = minimumTextureSize;
    _format = format;
    _textures = textures;
    NewTexture(_minimumTextureSize);
}

// public Fuse.Text.SubTexture Add(Uno.Content.Images.Bitmap bitmap) [instance] :2414
::g::Fuse::Text::SubTexture TextureAtlas::Add(::g::Uno::Content::Images::Bitmap* bitmap)
{
    uStackFrame __("Fuse.Text.TextureAtlas", "Add(Uno.Content.Images.Bitmap)");
    int assert1;
    assert1 = uPtr(bitmap)->Format();
    ::g::Uno::Diagnostics::Debug::Assert(assert1 == _format, ::STRINGS[19/*"bitmap.Form...*/], ::STRINGS[1/*"/Users/most...*/], 2416, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Graphics::Format_typeof(), assert1), uBox<int>(::g::Uno::Graphics::Format_typeof(), _format)));
    ::g::Uno::Recti rectWithBorder;
    ::g::Uno::Int2 sizeWithBorder = ::g::Uno::Int2__op_Addition1(bitmap->Size(), ::g::Uno::Int2__New2(1, 1));

    if (!uPtr(_packer)->TryAdd(sizeWithBorder, &rectWithBorder))
    {
        ::g::Uno::Int2 newTextureSize = ::g::Uno::Int2__New2(::g::Uno::Math::NextPow2(sizeWithBorder.X + 1), ::g::Uno::Math::NextPow2(sizeWithBorder.Y + 1));
        NewTexture(::g::Uno::Math::Max10(_minimumTextureSize, newTextureSize));

        if (!uPtr(_packer)->TryAdd(sizeWithBorder, &rectWithBorder))
            U_THROW(::g::Uno::Exception::New2(::STRINGS[20/*"Bitmap too ...*/]));
    }

    ::g::Uno::Recti rect = ::g::Uno::Recti__New2(::g::Uno::Int2__op_Addition1(rectWithBorder.Position(), ::g::Uno::Int2__New2(1, 1)), bitmap->Size());
    TextureAtlas::Blit(_bitmap, bitmap, rect.Position());
    _dirty = true;
    return ::g::Fuse::Text::SubTexture__New1(_textureIndex, rect);
}

// public void Commit() [instance] :2441
void TextureAtlas::Commit()
{
    uStackFrame __("Fuse.Text.TextureAtlas", "Commit()");
    ::g::Uno::Graphics::Texture2D* ret6;

    if (_dirty)
    {
        _dirty = false;
        ::g::Uno::Graphics::Texture2D* texture = (::g::Uno::Collections::List__get_Item_fn(uPtr(_textures), uCRef<int>(_textureIndex), &ret6), ret6);
        uPtr(texture)->Update1(uPtr(_bitmap)->Buffer());
    }
}

// private void NewTexture(int2 size) [instance] :2451
void TextureAtlas::NewTexture(::g::Uno::Int2 size)
{
    uStackFrame __("Fuse.Text.TextureAtlas", "NewTexture(int2)");
    Commit();
    _packer = ::g::Fuse::Internal::RectPacker::New1(::g::Uno::Int2__op_Subtraction1(size, ::g::Uno::Int2__New2(1, 1)));
    _bitmap = ::g::Uno::Content::Images::Bitmap::New1(size, _format, NULL);
    _textureIndex = uPtr(_textures)->Count();
    ::g::Uno::Collections::List__Add_fn(uPtr(_textures), ::g::Uno::Graphics::Texture2D::New1(size, _format, false));
}

// private static void Blit(Uno.Content.Images.Bitmap dst, Uno.Content.Images.Bitmap src, int2 dstPos) [static] :2460
void TextureAtlas::Blit(::g::Uno::Content::Images::Bitmap* dst, ::g::Uno::Content::Images::Bitmap* src, ::g::Uno::Int2 dstPos)
{
    uStackFrame __("Fuse.Text.TextureAtlas", "Blit(Uno.Content.Images.Bitmap,Uno.Content.Images.Bitmap,int2)");
    ::g::Uno::Recti assert2;
    int assert3;
    int assert4;
    assert2 = ::g::Uno::Recti__New2(dstPos, uPtr(src)->Size());
    ::g::Uno::Diagnostics::Debug::Assert(::g::Uno::Recti__New2(::g::Uno::Int2__New1(0), uPtr(dst)->Size()).Contains1(assert2), ::STRINGS[21/*"(&new Uno.R...*/], ::STRINGS[1/*"/Users/most...*/], 2462, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 1, uBox(::g::Uno::Recti_typeof(), assert2)));
    assert3 = src->Format();
    assert4 = dst->Format();
    ::g::Uno::Diagnostics::Debug::Assert(assert3 == assert4, ::STRINGS[22/*"src.Format ...*/], ::STRINGS[1/*"/Users/most...*/], 2463, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Graphics::Format_typeof(), assert3), uBox<int>(::g::Uno::Graphics::Format_typeof(), assert4)));
    int bpp = ::g::Uno::Graphics::FormatHelpers::GetStrideInBytes(src->Format());
    ::g::Uno::Int2 bsrcSize = ::g::Uno::Int2__New2(src->Size().X * bpp, src->Size().Y);
    ::g::Uno::Int2 bdstSize = ::g::Uno::Int2__New2(dst->Size().X * bpp, dst->Size().Y);
    ::g::Uno::Int2 bdstPos = ::g::Uno::Int2__New2(dstPos.X * bpp, dstPos.Y);

    for (int y = 0; y < bsrcSize.Y; ++y)
    {
        int srcRow = y * bsrcSize.X;
        int dstRow = ((bdstPos.Y + y) * bdstSize.X) + bdstPos.X;

        for (int x = 0; x < bsrcSize.X; ++x)
            uPtr(uPtr(dst)->Buffer())->Item(dstRow + x, uPtr(uPtr(src)->Buffer())->Item(srcRow + x));
    }
}

// public TextureAtlas New(int2 minimumTextureSize, Uno.Graphics.Format format, Uno.Collections.List<texture2D> textures) [static] :2400
TextureAtlas* TextureAtlas::New1(::g::Uno::Int2 minimumTextureSize, int format, ::g::Uno::Collections::List* textures)
{
    TextureAtlas* obj5 = (TextureAtlas*)uNew(TextureAtlas_typeof());
    obj5->ctor_(minimumTextureSize, format, textures);
    return obj5;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public static class Truncate :2493
// {
static void Truncate_build(uType* type)
{
    ::TYPES[24] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), NULL);
    ::TYPES[15] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), NULL);
    ::TYPES[26] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL);
    type->Reflection.SetFunctions(2,
        new uFunction("Line", NULL, (void*)Truncate__Line_fn, 0, true, ::TYPES[26/*Uno.Collections.List<Fuse.Text.ShapedRun>*/], 5, ::g::Fuse::Text::Font_typeof(), ::TYPES[26/*Uno.Collections.List<Fuse.Text.ShapedRun>*/], ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()->ByRef(), ::g::Uno::Float_typeof()->ByRef()),
        new uFunction("Lines", NULL, (void*)Truncate__Lines_fn, 0, true, ::TYPES[24/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>*/], 5, ::g::Fuse::Text::Font_typeof(), ::TYPES[24/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>*/], ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()->ByRef(), ::g::Uno::Float_typeof()->ByRef()));
}

uClassType* Truncate_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Truncate", options);
    type->fp_build_ = Truncate_build;
    return type;
}

// public static Uno.Collections.List<Fuse.Text.ShapedRun> Line(Fuse.Text.Font font, Uno.Collections.List<Fuse.Text.ShapedRun> lineRuns, float maxPixelWidth, float& minTolerance, float& maxTolerance) :2510
void Truncate__Line_fn(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lineRuns, float* maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Uno::Collections::List** __retval)
{
    *__retval = Truncate::Line(font, lineRuns, *maxPixelWidth, minTolerance, maxTolerance);
}

// public static Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> Lines(Fuse.Text.Font font, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> lines, float maxPixelWidth, float& minTolerance, float& maxTolerance) :2495
void Truncate__Lines_fn(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lines, float* maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Uno::Collections::List** __retval)
{
    *__retval = Truncate::Lines(font, lines, *maxPixelWidth, minTolerance, maxTolerance);
}

// private static Uno.Collections.List<Fuse.Text.ShapedRun> TruncatedLine(Fuse.Text.Font font, Uno.Collections.List<Fuse.Text.ShapedRun> lineRuns, float maxPixelWidth, float& minTolerance, float& maxTolerance, float2 pos, int runIndex, int i) :2556
void Truncate__TruncatedLine_fn(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lineRuns, float* maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Uno::Float2* pos, int* runIndex, int* i, ::g::Uno::Collections::List** __retval)
{
    *__retval = Truncate::TruncatedLine(font, lineRuns, *maxPixelWidth, minTolerance, maxTolerance, *pos, *runIndex, *i);
}

// public static Uno.Collections.List<Fuse.Text.ShapedRun> Line(Fuse.Text.Font font, Uno.Collections.List<Fuse.Text.ShapedRun> lineRuns, float maxPixelWidth, float& minTolerance, float& maxTolerance) [static] :2510
::g::Uno::Collections::List* Truncate::Line(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lineRuns, float maxPixelWidth, float* minTolerance, float* maxTolerance)
{
    uStackFrame __("Fuse.Text.Truncate", "Line(Fuse.Text.Font,Uno.Collections.List<Fuse.Text.ShapedRun>,float,float&,float&)");
    ::g::Fuse::Text::ShapedRun* ret2;
    ::g::Uno::Float2 pos = ::g::Uno::Float2__New1(0.0f);

    for (int runIndex = 0; runIndex < uPtr(lineRuns)->Count(); ++runIndex)
    {
        ::g::Fuse::Text::ShapedRun* srun = (::g::Uno::Collections::List__get_Item_fn(uPtr(lineRuns), uCRef<int>(runIndex), &ret2), ret2);
        ::g::Uno::Float2 srunMeasurements = uPtr(srun)->Measure();

        if (::g::Uno::Float2__op_Addition2(pos, srunMeasurements).X <= maxPixelWidth)
            pos = ::g::Uno::Float2__op_Addition2(pos, srunMeasurements);
        else
        {
            ::g::Fuse::Text::Substring* text = uPtr(srun)->Run().String;
            bool ltr = srun->Run().IsLeftToRight();
            int i = ltr ? 0 : srun->Count - 1;
            int step = ltr ? 1 : -1;

            for (; (0 <= i) && (i < srun->Count); i = i + step)
            {
                pos = ::g::Uno::Float2__op_Addition2(pos, uPtr(srun)->Item(i).Advance());
                int cluster = srun->Item(i).Cluster;

                if ((pos.X > maxPixelWidth) && ((cluster < uPtr(text)->Length) && (uPtr(text)->Item(cluster) != ' ')))
                    return Truncate::TruncatedLine(font, lineRuns, maxPixelWidth, minTolerance, maxTolerance, pos, runIndex, i);
            }
        }
    }

    *minTolerance = ::g::Uno::Math::Max1(*minTolerance, pos.X);
    return lineRuns;
}

// public static Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> Lines(Fuse.Text.Font font, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> lines, float maxPixelWidth, float& minTolerance, float& maxTolerance) [static] :2495
::g::Uno::Collections::List* Truncate::Lines(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lines, float maxPixelWidth, float* minTolerance, float* maxTolerance)
{
    uStackFrame __("Fuse.Text.Truncate", "Lines(Fuse.Text.Font,Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>,float,float&,float&)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > ret3;
    *minTolerance = 0.0f;
    *maxTolerance = FLT_INF;
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[24/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>*/]);

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(lines), &ret3), ret3); enum1.MoveNext(::TYPES[15/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>.Enumerator*/]); )
    {
        ::g::Uno::Collections::List* line = enum1.Current(::TYPES[15/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>.Enumerator*/]);
        ::g::Uno::Collections::List__Add_fn(uPtr(result), Truncate::Line(font, line, maxPixelWidth, minTolerance, maxTolerance));
    }

    return result;
}

// private static Uno.Collections.List<Fuse.Text.ShapedRun> TruncatedLine(Fuse.Text.Font font, Uno.Collections.List<Fuse.Text.ShapedRun> lineRuns, float maxPixelWidth, float& minTolerance, float& maxTolerance, float2 pos, int runIndex, int i) [static] :2556
::g::Uno::Collections::List* Truncate::TruncatedLine(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lineRuns, float maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Uno::Float2 pos, int runIndex, int i)
{
    uStackFrame __("Fuse.Text.Truncate", "TruncatedLine(Fuse.Text.Font,Uno.Collections.List<Fuse.Text.ShapedRun>,float,float&,float&,float2,int,int)");
    ::g::Fuse::Text::ShapedRun* ret4;
    ::g::Fuse::Text::ShapedRun* ret5;
    float truncationWidth = uPtr(font)->TruncationMeasurements().X;
    float truncationBoundary = maxPixelWidth - truncationWidth;
    bool first = true;
    ::g::Uno::Float2 lastAdvance = ::g::Uno::Float2__New1(0.0f);

    for (; runIndex >= 0; --runIndex)
    {
        ::g::Fuse::Text::ShapedRun* srun = (::g::Uno::Collections::List__get_Item_fn(uPtr(lineRuns), uCRef<int>(runIndex), &ret4), ret4);
        bool ltr = uPtr(srun)->Run().IsLeftToRight();

        if (first)
            first = false;
        else
            i = ltr ? uPtr(srun)->Count - 1 : 0;

        int step = ltr ? -1 : 1;

        for (; (0 <= i) && (i < srun->Count); i = i + step)
        {
            if (pos.X <= truncationBoundary)
            {
                ::g::Fuse::Text::ShapedRun* truncatedSrun = ltr ? (::g::Fuse::Text::ShapedRun*)uPtr(srun)->SubShapedRun1(0, i + 1) : (::g::Fuse::Text::ShapedRun*)uPtr(srun)->SubShapedRun(i);
                ::g::Fuse::Text::ShapedRun* truncationSrun = ::g::Fuse::Text::ShapedRun::New1(::g::Fuse::Text::Bidirectional::Run__New1(::g::Fuse::Text::Substring::New1(::g::Fuse::Text::Font::Truncation()), srun->Run().Level), uPtr(font)->ShapedTruncation());
                float truncStart = ::g::Uno::Math::Min1(maxPixelWidth, pos.X + truncationWidth);
                *minTolerance = ::g::Uno::Math::Max1(*minTolerance, truncStart);
                *maxTolerance = ::g::Uno::Math::Min1(*maxTolerance, truncStart + lastAdvance.X);
                ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[26/*Uno.Collections.List<Fuse.Text.ShapedRun>*/]);

                for (int j = 0; j < runIndex; ++j)
                    ::g::Uno::Collections::List__Add_fn(uPtr(result), (::g::Uno::Collections::List__get_Item_fn(uPtr(lineRuns), uCRef<int>(j), &ret5), ret5));

                ::g::Uno::Collections::List__Add_fn(result, truncatedSrun);
                ::g::Uno::Collections::List__Add_fn(result, truncationSrun);
                return result;
            }

            lastAdvance = uPtr(srun)->Item(i).Advance();
            pos = ::g::Uno::Float2__op_Subtraction2(pos, lastAdvance);
        }
    }

    *minTolerance = ::g::Uno::Math::Max1(*minTolerance, 0.0f);
    *maxTolerance = ::g::Uno::Math::Min1(*maxTolerance, lastAdvance.X);
    ::g::Fuse::Text::ShapedRun* truncationSrun1 = ::g::Fuse::Text::ShapedRun::New1(::g::Fuse::Text::Bidirectional::Run__New1(::g::Fuse::Text::Substring::New1(::g::Fuse::Text::Font::Truncation()), 0), uPtr(font)->ShapedTruncation());
    ::g::Uno::Collections::List* result1 = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[26/*Uno.Collections.List<Fuse.Text.ShapedRun>*/], 1);
    ::g::Uno::Collections::List__Add_fn(result1, truncationSrun1);
    return result1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public static class Wrap :2631
// {
static void Wrap_build(uType* type)
{
    ::TYPES[36] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::Bidirectional::Run_typeof(), NULL), NULL);
    ::TYPES[37] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::Bidirectional::Run_typeof(), NULL);
    ::TYPES[27] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Text::Bidirectional::Run_typeof(), NULL);
    ::TYPES[38] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Text::Substring_typeof(), NULL);
    ::TYPES[29] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[39] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Text::Substring_typeof(), NULL);
    ::TYPES[24] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), NULL);
    ::TYPES[15] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), NULL);
    ::TYPES[26] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL);
    type->Reflection.SetFunctions(2,
        new uFunction("ActualLineBreaks", NULL, (void*)Wrap__ActualLineBreaks_fn, 0, true, ::TYPES[36/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.Bidirectional.Run>>*/], 1, ::TYPES[37/*Uno.Collections.List<Fuse.Text.Bidirectional.Run>*/]),
        new uFunction("Lines", NULL, (void*)Wrap__Lines_fn, 0, true, ::TYPES[24/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>*/], 5, ::g::Fuse::Text::Font_typeof(), ::TYPES[24/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>*/], ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()->ByRef(), ::g::Uno::Float_typeof()->ByRef()));
}

uClassType* Wrap_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Wrap", options);
    type->fp_build_ = Wrap_build;
    return type;
}

// public static Uno.Collections.List<Uno.Collections.List<Fuse.Text.Bidirectional.Run>> ActualLineBreaks(Uno.Collections.List<Fuse.Text.Bidirectional.Run> logicalRuns) :2633
void Wrap__ActualLineBreaks_fn(::g::Uno::Collections::List* logicalRuns, ::g::Uno::Collections::List** __retval)
{
    *__retval = Wrap::ActualLineBreaks(logicalRuns);
}

// public static Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> Lines(Fuse.Text.Font font, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> logicalLineRuns, float maxPixelWidth, float& minTolerance, float& maxTolerance) :2655
void Wrap__Lines_fn(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* logicalLineRuns, float* maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Uno::Collections::List** __retval)
{
    *__retval = Wrap::Lines(font, logicalLineRuns, *maxPixelWidth, minTolerance, maxTolerance);
}

// private static void WrapLine(Fuse.Text.Font font, float maxPixelWidth, float& minTolerance, float& maxTolerance, Uno.Collections.List<Fuse.Text.ShapedRun> line, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> result) :2667
void Wrap__WrapLine_fn(::g::Fuse::Text::Font* font, float* maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Uno::Collections::List* line, ::g::Uno::Collections::List* result)
{
    Wrap::WrapLine(font, *maxPixelWidth, minTolerance, maxTolerance, line, result);
}

// private static void WrapRun(Fuse.Text.Font font, float maxPixelWidth, float& minTolerance, float& maxTolerance, Fuse.Text.ShapedRun srun, float2& pos, Uno.Collections.List<Fuse.Text.ShapedRun>& currentLine, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> result) :2705
void Wrap__WrapRun_fn(::g::Fuse::Text::Font* font, float* maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Fuse::Text::ShapedRun* srun, ::g::Uno::Float2* pos, ::g::Uno::Collections::List** currentLine, ::g::Uno::Collections::List* result)
{
    Wrap::WrapRun(font, *maxPixelWidth, minTolerance, maxTolerance, srun, pos, currentLine, result);
}

// public static Uno.Collections.List<Uno.Collections.List<Fuse.Text.Bidirectional.Run>> ActualLineBreaks(Uno.Collections.List<Fuse.Text.Bidirectional.Run> logicalRuns) [static] :2633
::g::Uno::Collections::List* Wrap::ActualLineBreaks(::g::Uno::Collections::List* logicalRuns)
{
    uStackFrame __("Fuse.Text.Wrap", "ActualLineBreaks(Uno.Collections.List<Fuse.Text.Bidirectional.Run>)");
    ::g::Uno::Collections::List__Enumerator< ::g::Fuse::Text::Bidirectional::Run> ret5;
    ::g::Fuse::Text::Substring* ret6;
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[36/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.Bidirectional.Run>>*/]);
    ::g::Uno::Collections::List* currentLine = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[37/*Uno.Collections.List<Fuse.Text.Bidirectional.Run>*/]);

    for (::g::Uno::Collections::List__Enumerator< ::g::Fuse::Text::Bidirectional::Run> enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(logicalRuns), &ret5), ret5); enum1.MoveNext(::TYPES[27/*Uno.Collections.List<Fuse.Text.Bidirectional.Run>.Enumerator*/]); )
    {
        ::g::Fuse::Text::Bidirectional::Run run = enum1.Current(::TYPES[27/*Uno.Collections.List<Fuse.Text.Bidirectional.Run>.Enumerator*/]);
        bool first = true;

        for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(::g::Fuse::Text::SubstringExtensions::TrimmedLines(run.String)), ::TYPES[38/*Uno.Collections.IEnumerable<Fuse.Text.Substring>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[29/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Text::Substring* line = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[39/*Uno.Collections.IEnumerator<Fuse.Text.Substring>*/]), &ret6), ret6);

            if (!first)
            {
                ::g::Uno::Collections::List__Add_fn(uPtr(result), currentLine);
                currentLine = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[37/*Uno.Collections.List<Fuse.Text.Bidirectional.Run>*/]);
            }

            ::g::Uno::Collections::List__Add_fn(uPtr(currentLine), uCRef(::g::Fuse::Text::Bidirectional::Run__New1(line, run.Level)));
            first = false;
        }
    }

    ::g::Uno::Collections::List__Add_fn(result, currentLine);
    return result;
}

// public static Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> Lines(Fuse.Text.Font font, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> logicalLineRuns, float maxPixelWidth, float& minTolerance, float& maxTolerance) [static] :2655
::g::Uno::Collections::List* Wrap::Lines(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* logicalLineRuns, float maxPixelWidth, float* minTolerance, float* maxTolerance)
{
    uStackFrame __("Fuse.Text.Wrap", "Lines(Fuse.Text.Font,Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>,float,float&,float&)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > ret7;
    *minTolerance = 0.0f;
    *maxTolerance = FLT_INF;
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[24/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>*/], uPtr(logicalLineRuns)->Count());

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(logicalLineRuns, &ret7), ret7); enum3.MoveNext(::TYPES[15/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>.Enumerator*/]); )
    {
        ::g::Uno::Collections::List* line = enum3.Current(::TYPES[15/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>.Enumerator*/]);
        Wrap::WrapLine(font, maxPixelWidth, minTolerance, maxTolerance, line, result);
    }

    return result;
}

// private static void WrapLine(Fuse.Text.Font font, float maxPixelWidth, float& minTolerance, float& maxTolerance, Uno.Collections.List<Fuse.Text.ShapedRun> line, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> result) [static] :2667
void Wrap::WrapLine(::g::Fuse::Text::Font* font, float maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Uno::Collections::List* line, ::g::Uno::Collections::List* result)
{
    uStackFrame __("Fuse.Text.Wrap", "WrapLine(Fuse.Text.Font,float,float&,float&,Uno.Collections.List<Fuse.Text.ShapedRun>,Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Text::ShapedRun*> > ret8;
    ::g::Uno::Collections::List* currentLine = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[26/*Uno.Collections.List<Fuse.Text.ShapedRun>*/], uPtr(line)->Count());
    ::g::Uno::Float2 pos = ::g::Uno::Float2__New1(0.0f);

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Text::ShapedRun*> > enum4 = (::g::Uno::Collections::List__GetEnumerator_fn(line, &ret8), ret8); enum4.MoveNext(::TYPES[16/*Uno.Collections.List<Fuse.Text.ShapedRun>.Enumerator*/]); )
    {
        ::g::Fuse::Text::ShapedRun* srun = enum4.Current(::TYPES[16/*Uno.Collections.List<Fuse.Text.ShapedRun>.Enumerator*/]);

        if (uPtr(srun)->Count == 0)
        {
            if (uPtr(currentLine)->Count() == 0)
                ::g::Uno::Collections::List__Add_fn(uPtr(currentLine), srun);

            continue;
        }

        ::g::Uno::Float2 srunMeasurements = uPtr(srun)->Measure();

        if (::g::Uno::Float2__op_Addition2(pos, srunMeasurements).X <= maxPixelWidth)
        {
            pos = ::g::Uno::Float2__op_Addition2(pos, srunMeasurements);
            ::g::Uno::Collections::List__Add_fn(uPtr(currentLine), srun);
        }
        else
            Wrap::WrapRun(font, maxPixelWidth, minTolerance, maxTolerance, srun, &pos, &currentLine, result);
    }

    ::g::Uno::Collections::List__Add_fn(uPtr(result), currentLine);
}

// private static void WrapRun(Fuse.Text.Font font, float maxPixelWidth, float& minTolerance, float& maxTolerance, Fuse.Text.ShapedRun srun, float2& pos, Uno.Collections.List<Fuse.Text.ShapedRun>& currentLine, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> result) [static] :2705
void Wrap::WrapRun(::g::Fuse::Text::Font* font, float maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Fuse::Text::ShapedRun* srun, ::g::Uno::Float2* pos, ::g::Uno::Collections::List** currentLine, ::g::Uno::Collections::List* result)
{
    uStackFrame __("Fuse.Text.Wrap", "WrapRun(Fuse.Text.Font,float,float&,float&,Fuse.Text.ShapedRun,float2&,Uno.Collections.List<Fuse.Text.ShapedRun>&,Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>)");
    ::g::Fuse::Text::Substring* text = uPtr(srun)->Run().String;
    int textLength = uPtr(text)->Length;
    ::g::Uno::Float2 localPos = ::g::Uno::Float2__New1(0.0f);
    int wrapIndex = -1;
    ::g::Uno::Float2 wrapPos = *pos;
    bool ltr = srun->Run().IsLeftToRight();
    int i = ltr ? 0 : srun->Count - 1;
    int step = ltr ? 1 : -1;

    for (; (0 <= i) && (i < srun->Count); i = i + step)
    {
        ::g::Fuse::Text::PositionedGlyph pg = uPtr(srun)->Item(i);

        if (((pg.Cluster >= 0) && (pg.Cluster < textLength)) && (uPtr(text)->Item(pg.Cluster) == ' '))
        {
            wrapIndex = i;
            wrapPos = *pos;
        }

        *pos = ::g::Uno::Float2__op_Addition2(*pos, pg.Advance());
        localPos = ::g::Uno::Float2__op_Addition2(localPos, pg.Advance());

        if ((*pos).X > maxPixelWidth)
        {
            if (wrapIndex != i)
            {
                *minTolerance = ::g::Uno::Math::Max1(*minTolerance, wrapPos.X);
                *maxTolerance = ::g::Uno::Math::Min1(*maxTolerance, (*pos).X);

                if (wrapIndex == -1)
                {
                    if (uPtr(*currentLine)->Count() > 0)
                    {
                        ::g::Uno::Collections::List__Add_fn(uPtr(result), *currentLine);
                        *currentLine = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[26/*Uno.Collections.List<Fuse.Text.ShapedRun>*/]);
                        *pos = localPos;
                    }
                }
                else
                {
                    ::g::Fuse::Text::ShapedRun* prefixRun = uPtr(srun)->SubShapedRun1(0, wrapIndex);
                    ::g::Fuse::Text::ShapedRun* postfixRun = srun->SubShapedRun(wrapIndex + 1);
                    ::g::Uno::Collections::List__Add_fn(uPtr(*currentLine), ltr ? prefixRun : postfixRun);
                    ::g::Uno::Collections::List__Add_fn(uPtr(result), *currentLine);
                    *currentLine = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[26/*Uno.Collections.List<Fuse.Text.ShapedRun>*/]);
                    *pos = ::g::Uno::Float2__New1(0.0f);
                    Wrap::WrapRun(font, maxPixelWidth, minTolerance, maxTolerance, ltr ? postfixRun : prefixRun, pos, currentLine, result);
                    return;
                }
            }
        }
    }

    ::g::Uno::Collections::List__Add_fn(uPtr(*currentLine), srun);
    *minTolerance = ::g::Uno::Math::Max1(*minTolerance, (*pos).X);
}
// }

}}} // ::g::Fuse::Text
