// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer.FontKey.h>
#include <Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer.h>
#include <Fuse.Controls.FallbackTextRenderer.ProperTextTransform.h>
#include <Fuse.Controls.FallbackTextRenderer.RectExtensions.h>
#include <Fuse.Controls.FallbackTextRenderer.TextRenderer.h>
#include <Fuse.Controls.FallbackTextRenderer.WordWrapInfo.h>
#include <Fuse.Controls.FallbackTextRenderer.WordWrapper.h>
#include <Fuse.Controls.FallbackTextRenderer.WordWrapperWord.h>
#include <Fuse.Controls.FallbackTextRenderer.WrappedLine.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Font.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Visual.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Content.Fonts.BitmapFont.h>
#include <Uno.Content.Fonts.FontFace.h>
#include <Uno.Content.Fonts.FontFaceHelpers.h>
#include <Uno.Content.Fonts.SpriteFontShader.h>
#include <Uno.Content.Fonts.TextRenderer.h>
#include <Uno.Content.Fonts.TextShader.h>
#include <Uno.Content.Fonts.TextTransform.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Rect.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
static uString* STRINGS[4];
static uType* TYPES[11];

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextRenderer{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextrenderer/$.uno
// -------------------------------------------------------------------------------------------------------------------------------------

// internal sealed class DefaultTextRenderer :11
// {
static void DefaultTextRenderer_build(uType* type)
{
    ::STRINGS[0] = uString::Const("!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ\303\206\303\230\303\205[\\]^_`abcdefghijklmnopqrstuvwxyz\303\246\303\270\303\245\302\250{|}~\302\260\342\200\242");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(DefaultTextRenderer__FontKey_typeof(), ::g::Uno::Content::Fonts::BitmapFont_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Controls::FallbackTextRenderer::ProperTextTransform_typeof();
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer, _absoluteZoom), 0,
        ::g::Uno::Content::Fonts::BitmapFont_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer, _bitmapFont), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer, _fontSize), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer, _transform), 0,
        ::g::Uno::Content::Fonts::FontFace_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer, _FontFace), 0,
        ::TYPES[0/*Uno.Collections.Dictionary<Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer.FontKey, Uno.Content.Fonts.BitmapFont>*/], (uintptr_t)&::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer::_bitmapFonts_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer::_maxCharCount_, uFieldFlagsStatic,
        ::g::Uno::Content::Fonts::TextRenderer_typeof(), (uintptr_t)&::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer::_renderer_, uFieldFlagsStatic);
}

uType* DefaultTextRenderer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(DefaultTextRenderer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer", options);
    type->fp_build_ = DefaultTextRenderer_build;
    return type;
}

// public DefaultTextRenderer(Uno.Content.Fonts.FontFace fontFace) :60
void DefaultTextRenderer__ctor__fn(DefaultTextRenderer* __this, ::g::Uno::Content::Fonts::FontFace* fontFace)
{
    __this->ctor_(fontFace);
}

// public void BeginRendering(float fontSize, float absoluteZoom, float4x4 transform, float2 bounds, float4 textColor, int maxTextLength) :115
void DefaultTextRenderer__BeginRendering_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, ::g::Uno::Float4x4* transform, ::g::Uno::Float2* bounds, ::g::Uno::Float4* textColor, int* maxTextLength)
{
    __this->BeginRendering(*fontSize, *absoluteZoom, *transform, *bounds, *textColor, *maxTextLength);
}

// public void DrawLine(Fuse.DrawContext dc, float x, float y, string line) :136
void DefaultTextRenderer__DrawLine_fn(DefaultTextRenderer* __this, ::g::Fuse::DrawContext* dc, float* x, float* y, uString* line)
{
    __this->DrawLine(dc, *x, *y, line);
}

// public void EndRendering(Fuse.DrawContext dc) :130
void DefaultTextRenderer__EndRendering_fn(DefaultTextRenderer* __this, ::g::Fuse::DrawContext* dc)
{
    __this->EndRendering(dc);
}

// private static void EnsureRendererCapacity(int maxCharCount) :173
void DefaultTextRenderer__EnsureRendererCapacity_fn(int* maxCharCount)
{
    DefaultTextRenderer::EnsureRendererCapacity(*maxCharCount);
}

// public generated Uno.Content.Fonts.FontFace get_FontFace() :72
void DefaultTextRenderer__get_FontFace_fn(DefaultTextRenderer* __this, ::g::Uno::Content::Fonts::FontFace** __retval)
{
    *__retval = __this->FontFace();
}

// public generated void set_FontFace(Uno.Content.Fonts.FontFace value) :72
void DefaultTextRenderer__set_FontFace_fn(DefaultTextRenderer* __this, ::g::Uno::Content::Fonts::FontFace* value)
{
    __this->FontFace(value);
}

// private Uno.Content.Fonts.BitmapFont GetBitmapFont(float fontSize, float absoluteZoom, bool includeZoom) :158
void DefaultTextRenderer__GetBitmapFont_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, bool* includeZoom, ::g::Uno::Content::Fonts::BitmapFont** __retval)
{
    *__retval = __this->GetBitmapFont(*fontSize, *absoluteZoom, *includeZoom);
}

// public float GetLineHeight(float fontSize) :74
void DefaultTextRenderer__GetLineHeight_fn(DefaultTextRenderer* __this, float* fontSize, float* __retval)
{
    *__retval = __this->GetLineHeight(*fontSize);
}

// public float GetLineHeightVirtual(float fontSize, float absoluteZoom) :83
void DefaultTextRenderer__GetLineHeightVirtual_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, float* __retval)
{
    *__retval = __this->GetLineHeightVirtual(*fontSize, *absoluteZoom);
}

// public float2 MeasureString(float fontSize, float absoluteZoom, string s) :88
void DefaultTextRenderer__MeasureString_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, uString* s, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MeasureString(*fontSize, *absoluteZoom, s);
}

// public float2 MeasureStringVirtual(float fontSize, float absoluteZoom, string s) :105
void DefaultTextRenderer__MeasureStringVirtual_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, uString* s, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MeasureStringVirtual(*fontSize, *absoluteZoom, s);
}

// public DefaultTextRenderer New(Uno.Content.Fonts.FontFace fontFace) :60
void DefaultTextRenderer__New1_fn(::g::Uno::Content::Fonts::FontFace* fontFace, DefaultTextRenderer** __retval)
{
    *__retval = DefaultTextRenderer::New1(fontFace);
}

// private static Uno.Content.Fonts.TextRenderer get_renderer() :49
void DefaultTextRenderer__get_renderer_fn(::g::Uno::Content::Fonts::TextRenderer** __retval)
{
    *__retval = DefaultTextRenderer::renderer();
}

uSStrong< ::g::Uno::Collections::Dictionary*> DefaultTextRenderer::_bitmapFonts_;
int DefaultTextRenderer::_maxCharCount_;
uSStrong< ::g::Uno::Content::Fonts::TextRenderer*> DefaultTextRenderer::_renderer_;

// public DefaultTextRenderer(Uno.Content.Fonts.FontFace fontFace) [instance] :60
void DefaultTextRenderer::ctor_(::g::Uno::Content::Fonts::FontFace* fontFace)
{
    if (DefaultTextRenderer::_bitmapFonts_ == NULL)
    {
        DefaultTextRenderer::_maxCharCount_ = 100;
        DefaultTextRenderer::_bitmapFonts_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer.FontKey, Uno.Content.Fonts.BitmapFont>*/]));
    }

    FontFace(fontFace);
}

// public void BeginRendering(float fontSize, float absoluteZoom, float4x4 transform, float2 bounds, float4 textColor, int maxTextLength) [instance] :115
void DefaultTextRenderer::BeginRendering(float fontSize, float absoluteZoom, ::g::Uno::Float4x4 transform, ::g::Uno::Float2 bounds, ::g::Uno::Float4 textColor, int maxTextLength)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer", "BeginRendering(float,float,float4x4,float2,float4,int)");
    _fontSize = fontSize;
    _absoluteZoom = absoluteZoom;
    _transform = transform;
    _bitmapFont = GetBitmapFont(_fontSize, _absoluteZoom, true);
    DefaultTextRenderer::EnsureRendererCapacity(maxTextLength);
    uPtr(DefaultTextRenderer::renderer())->Begin(_bitmapFont);
    uPtr(DefaultTextRenderer::renderer())->Color(textColor);
}

// public void DrawLine(Fuse.DrawContext dc, float x, float y, string line) [instance] :136
void DefaultTextRenderer::DrawLine(::g::Fuse::DrawContext* dc, float x, float y, uString* line)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer", "DrawLine(Fuse.DrawContext,float,float,string)");
    float lineHeight = uPtr(_bitmapFont)->LineHeight;
    float lineOffsetY = lineHeight - uPtr(_bitmapFont)->Descent;
    ::g::Uno::Float2 p = ::g::Uno::Float2__New2(x, y + lineOffsetY);

    if (uPtr(dc)->ViewportPixelsPerPoint() != 1.0f)
    {
        ::g::Uno::Float4x4 scale = ::g::Uno::Matrix::Scaling(1.0f / uPtr(dc)->ViewportPixelsPerPoint());
        uPtr(uPtr(DefaultTextRenderer::renderer())->Transform())->Matrix(::g::Uno::Matrix::Mul8(scale, _transform));
    }
    else
        uPtr(uPtr(DefaultTextRenderer::renderer())->Transform())->Matrix(_transform);

    uPtr(uAs< ::g::Fuse::Controls::FallbackTextRenderer::ProperTextTransform*>(uPtr(DefaultTextRenderer::renderer())->Transform(), ::TYPES[1/*Fuse.Controls.FallbackTextRenderer.ProperTextTransform*/]))->DrawContext = dc;
    uPtr(DefaultTextRenderer::renderer())->WriteString(p, line);
}

// public void EndRendering(Fuse.DrawContext dc) [instance] :130
void DefaultTextRenderer::EndRendering(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer", "EndRendering(Fuse.DrawContext)");
    uPtr(DefaultTextRenderer::renderer())->End();
}

// public generated Uno.Content.Fonts.FontFace get_FontFace() [instance] :72
::g::Uno::Content::Fonts::FontFace* DefaultTextRenderer::FontFace()
{
    return _FontFace;
}

// public generated void set_FontFace(Uno.Content.Fonts.FontFace value) [instance] :72
void DefaultTextRenderer::FontFace(::g::Uno::Content::Fonts::FontFace* value)
{
    _FontFace = value;
}

// private Uno.Content.Fonts.BitmapFont GetBitmapFont(float fontSize, float absoluteZoom, bool includeZoom) [instance] :158
::g::Uno::Content::Fonts::BitmapFont* DefaultTextRenderer::GetBitmapFont(float fontSize, float absoluteZoom, bool includeZoom)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer", "GetBitmapFont(float,float,bool)");
    bool ret2;
    int size = (int)::g::Uno::Math::Floor1(::g::Uno::Math::Clamp1(fontSize * (includeZoom ? absoluteZoom : 1.0f), 4.0f, 400.0f));
    DefaultTextRenderer__FontKey* key = DefaultTextRenderer__FontKey::New1(FontFace(), size);
    ::g::Uno::Content::Fonts::BitmapFont* bmpfont;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(DefaultTextRenderer::_bitmapFonts_), key, (void**)(&bmpfont), &ret2), ret2))
    {
        bmpfont = ::g::Uno::Content::Fonts::FontFaceHelpers::RenderSpriteFont(FontFace(), (float)size, ::STRINGS[0/*"!\"#$%&'()*...*/]);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(DefaultTextRenderer::_bitmapFonts_), key, bmpfont);
    }

    return bmpfont;
}

// public float GetLineHeight(float fontSize) [instance] :74
float DefaultTextRenderer::GetLineHeight(float fontSize)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer", "GetLineHeight(float)");

    if (FontFace() == NULL)
        return 0.0f;

    float size = ::g::Uno::Math::Clamp1(fontSize, 4.0f, 400.0f);
    return uPtr(FontFace())->GetLineHeight(size);
}

// public float GetLineHeightVirtual(float fontSize, float absoluteZoom) [instance] :83
float DefaultTextRenderer::GetLineHeightVirtual(float fontSize, float absoluteZoom)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer", "GetLineHeightVirtual(float,float)");
    return GetLineHeight(fontSize) / absoluteZoom;
}

// public float2 MeasureString(float fontSize, float absoluteZoom, string s) [instance] :88
::g::Uno::Float2 DefaultTextRenderer::MeasureString(float fontSize, float absoluteZoom, uString* s)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer", "MeasureString(float,float,string)");

    if (::g::Uno::String::op_Equality(s, NULL))
        return ::g::Uno::Float2__New1(0.0f);

    ::g::Uno::Content::Fonts::BitmapFont* bitmapFont = GetBitmapFont(fontSize, absoluteZoom, true);
    bool hasBegun = uPtr(DefaultTextRenderer::renderer())->HasBegun();

    if (!hasBegun)
        uPtr(DefaultTextRenderer::renderer())->Begin(bitmapFont);

    ::g::Uno::Float2 ret = uPtr(DefaultTextRenderer::renderer())->MeasureString(s);

    if (!hasBegun)
        uPtr(DefaultTextRenderer::renderer())->End();

    return ret;
}

// public float2 MeasureStringVirtual(float fontSize, float absoluteZoom, string s) [instance] :105
::g::Uno::Float2 DefaultTextRenderer::MeasureStringVirtual(float fontSize, float absoluteZoom, uString* s)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer", "MeasureStringVirtual(float,float,string)");
    return ::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Division1(MeasureString(fontSize, absoluteZoom, s), absoluteZoom));
}

// private static void EnsureRendererCapacity(int maxCharCount) [static] :173
void DefaultTextRenderer::EnsureRendererCapacity(int maxCharCount)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer", "EnsureRendererCapacity(int)");

    if (maxCharCount <= DefaultTextRenderer::_maxCharCount_)
        return;

    DefaultTextRenderer::_maxCharCount_ = ::g::Uno::Math::Max8(DefaultTextRenderer::_maxCharCount_ * 2, maxCharCount);
    DefaultTextRenderer::_renderer_ = ::g::Uno::Content::Fonts::TextRenderer::New1(DefaultTextRenderer::_maxCharCount_, ::g::Uno::Content::Fonts::SpriteFontShader::New1(), NULL);
    uPtr(DefaultTextRenderer::_renderer_)->Transform(::g::Fuse::Controls::FallbackTextRenderer::ProperTextTransform::New1());
}

// public DefaultTextRenderer New(Uno.Content.Fonts.FontFace fontFace) [static] :60
DefaultTextRenderer* DefaultTextRenderer::New1(::g::Uno::Content::Fonts::FontFace* fontFace)
{
    DefaultTextRenderer* obj1 = (DefaultTextRenderer*)uNew(DefaultTextRenderer_typeof());
    obj1->ctor_(fontFace);
    return obj1;
}

// private static Uno.Content.Fonts.TextRenderer get_renderer() [static] :49
::g::Uno::Content::Fonts::TextRenderer* DefaultTextRenderer::renderer()
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer", "get_renderer()");

    if (DefaultTextRenderer::_renderer_ == NULL)
    {
        DefaultTextRenderer::_renderer_ = ::g::Uno::Content::Fonts::TextRenderer::New1(100, ::g::Uno::Content::Fonts::SpriteFontShader::New1(), NULL);
        uPtr(DefaultTextRenderer::_renderer_)->Transform(::g::Fuse::Controls::FallbackTextRenderer::ProperTextTransform::New1());
    }

    return DefaultTextRenderer::_renderer_;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextrenderer/$.uno
// -------------------------------------------------------------------------------------------------------------------------------------

// private sealed class DefaultTextRenderer.FontKey :13
// {
static void DefaultTextRenderer__FontKey_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Content::Fonts::FontFace_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer__FontKey, FontFace), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer__FontKey, Size), 0);
}

uType* DefaultTextRenderer__FontKey_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DefaultTextRenderer__FontKey);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer.FontKey", options);
    type->fp_build_ = DefaultTextRenderer__FontKey_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))DefaultTextRenderer__FontKey__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))DefaultTextRenderer__FontKey__GetHashCode_fn;
    return type;
}

// public FontKey(Uno.Content.Fonts.FontFace fontFace, int size) :33
void DefaultTextRenderer__FontKey__ctor__fn(DefaultTextRenderer__FontKey* __this, ::g::Uno::Content::Fonts::FontFace* fontFace, int* size)
{
    __this->ctor_(fontFace, *size);
}

// public override sealed bool Equals(object obj) :23
void DefaultTextRenderer__FontKey__Equals_fn(DefaultTextRenderer__FontKey* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer.FontKey", "Equals(object)");

    if (uIs(obj, __this->__type))
    {
        DefaultTextRenderer__FontKey* fk = uCast<DefaultTextRenderer__FontKey*>(obj, __this->__type);
        return *__retval = (uPtr(fk)->Size == __this->Size) && (uPtr(fk)->FontFace == __this->FontFace), void();
    }

    return *__retval = false, void();
}

// public override sealed int GetHashCode() :18
void DefaultTextRenderer__FontKey__GetHashCode_fn(DefaultTextRenderer__FontKey* __this, int* __retval)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer.FontKey", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->FontFace)) + __this->Size, void();
}

// public FontKey New(Uno.Content.Fonts.FontFace fontFace, int size) :33
void DefaultTextRenderer__FontKey__New1_fn(::g::Uno::Content::Fonts::FontFace* fontFace, int* size, DefaultTextRenderer__FontKey** __retval)
{
    *__retval = DefaultTextRenderer__FontKey::New1(fontFace, *size);
}

// public FontKey(Uno.Content.Fonts.FontFace fontFace, int size) [instance] :33
void DefaultTextRenderer__FontKey::ctor_(::g::Uno::Content::Fonts::FontFace* fontFace, int size)
{
    FontFace = fontFace;
    Size = size;
}

// public FontKey New(Uno.Content.Fonts.FontFace fontFace, int size) [static] :33
DefaultTextRenderer__FontKey* DefaultTextRenderer__FontKey::New1(::g::Uno::Content::Fonts::FontFace* fontFace, int size)
{
    DefaultTextRenderer__FontKey* obj1 = (DefaultTextRenderer__FontKey*)uNew(DefaultTextRenderer__FontKey_typeof());
    obj1->ctor_(fontFace, size);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextrenderer/$.uno
// -------------------------------------------------------------------------------------------------------------------------------------

// internal sealed class ProperTextTransform :184
// {
static void ProperTextTransform_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::IRenderViewport_typeof();
    type->SetFields(0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::ProperTextTransform, _matrix), 0,
        ::g::Fuse::DrawContext_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::ProperTextTransform, DrawContext), 0);
}

::g::Uno::Content::Fonts::TextTransform_type* ProperTextTransform_typeof()
{
    static uSStrong< ::g::Uno::Content::Fonts::TextTransform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Content::Fonts::TextTransform_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ProperTextTransform);
    options.TypeSize = sizeof(::g::Uno::Content::Fonts::TextTransform_type);
    type = (::g::Uno::Content::Fonts::TextTransform_type*)uClassType::New("Fuse.Controls.FallbackTextRenderer.ProperTextTransform", options);
    type->fp_build_ = ProperTextTransform_build;
    type->fp_ctor_ = (void*)ProperTextTransform__New1_fn;
    type->fp_get_CullFace = (void(*)(::g::Uno::Content::Fonts::TextTransform*, int*))ProperTextTransform__get_CullFace_fn;
    type->fp_get_Matrix = (void(*)(::g::Uno::Content::Fonts::TextTransform*, ::g::Uno::Float4x4*))ProperTextTransform__get_Matrix_fn;
    type->fp_set_Matrix = (void(*)(::g::Uno::Content::Fonts::TextTransform*, ::g::Uno::Float4x4*))ProperTextTransform__set_Matrix_fn;
    type->fp_ResolveClipSpaceMatrix = (void(*)(::g::Uno::Content::Fonts::TextTransform*, ::g::Uno::Float4x4*))ProperTextTransform__ResolveClipSpaceMatrix_fn;
    return type;
}

// public generated ProperTextTransform() :184
void ProperTextTransform__ctor_1_fn(ProperTextTransform* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.Graphics.PolygonFace get_CullFace() :203
void ProperTextTransform__get_CullFace_fn(ProperTextTransform* __this, int* __retval)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.ProperTextTransform", "get_CullFace()");
    return *__retval = uPtr(__this->DrawContext)->CullFace(), void();
}

// public override sealed float4x4 get_Matrix() :192
void ProperTextTransform__get_Matrix_fn(ProperTextTransform* __this, ::g::Uno::Float4x4* __retval)
{
    return *__retval = __this->_matrix, void();
}

// public override sealed void set_Matrix(float4x4 value) :193
void ProperTextTransform__set_Matrix_fn(ProperTextTransform* __this, ::g::Uno::Float4x4* value)
{
    ::g::Uno::Float4x4 value_ = *value;
    __this->_matrix = value_;
}

// public generated ProperTextTransform New() :184
void ProperTextTransform__New1_fn(ProperTextTransform** __retval)
{
    *__retval = ProperTextTransform::New1();
}

// public override sealed float4x4 ResolveClipSpaceMatrix() :196
void ProperTextTransform__ResolveClipSpaceMatrix_fn(ProperTextTransform* __this, ::g::Uno::Float4x4* __retval)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.ProperTextTransform", "ResolveClipSpaceMatrix()");
    return *__retval = ::g::Uno::Matrix::Mul8(__this->Matrix(), ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(uPtr(__this->DrawContext)->Viewport()), ::TYPES[2/*Fuse.IRenderViewport*/]))), void();
}

// public generated ProperTextTransform() [instance] :184
void ProperTextTransform::ctor_1()
{
    _matrix = ::g::Uno::Float4x4__Identity();
    ctor_();
}

// public generated ProperTextTransform New() [static] :184
ProperTextTransform* ProperTextTransform::New1()
{
    ProperTextTransform* obj1 = (ProperTextTransform*)uNew(ProperTextTransform_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextrenderer/$.uno
// -------------------------------------------------------------------------------------------------------------------------------------

// internal static class RectExtensions :216
// {
static void RectExtensions_build(uType* type)
{
}

uClassType* RectExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.FallbackTextRenderer.RectExtensions", options);
    type->fp_build_ = RectExtensions_build;
    return type;
}

// public static Uno.Rect MoveRectInsideRect(Uno.Rect a, Uno.Rect b) :245
void RectExtensions__MoveRectInsideRect_fn(::g::Uno::Rect* a, ::g::Uno::Rect* b, ::g::Uno::Rect* __retval)
{
    *__retval = RectExtensions::MoveRectInsideRect(*a, *b);
}

// public static Uno.Rect MoveRectToContainRect(Uno.Rect a, Uno.Rect b) :218
void RectExtensions__MoveRectToContainRect_fn(::g::Uno::Rect* a, ::g::Uno::Rect* b, ::g::Uno::Rect* __retval)
{
    *__retval = RectExtensions::MoveRectToContainRect(*a, *b);
}

// public static Uno.Rect MoveRectInsideRect(Uno.Rect a, Uno.Rect b) [static] :245
::g::Uno::Rect RectExtensions::MoveRectInsideRect(::g::Uno::Rect a, ::g::Uno::Rect b)
{
    ::g::Uno::Float2 pos = a.Position();
    float newX = pos.X;
    float newY = pos.Y;

    if (b.Left > a.Left)
        newX = b.Left;
    else if (b.Right < a.Right)
        newX = newX - (a.Right - b.Right);

    if (b.Top > a.Top)
        newY = b.Left;
    else if (b.Bottom < a.Bottom)
        newY = newY - (a.Bottom - b.Bottom);

    return ::g::Uno::Rect__New2(::g::Uno::Float2__New2(newX, newY), a.Size());
}

// public static Uno.Rect MoveRectToContainRect(Uno.Rect a, Uno.Rect b) [static] :218
::g::Uno::Rect RectExtensions::MoveRectToContainRect(::g::Uno::Rect a, ::g::Uno::Rect b)
{
    ::g::Uno::Float2 pos = a.Position();
    float newX = pos.X;
    float newY = pos.Y;

    if ((a.Size().X < b.Size().X) || (b.Left < a.Left))
        newX = b.Left;
    else if (b.Right > a.Right)
        newX = newX + (b.Right - a.Right);

    if ((a.Size().Y < b.Size().Y) || (b.Top < a.Top))
        newY = b.Top;
    else if (b.Bottom > a.Bottom)
        newY = newY + (b.Bottom - a.Bottom);

    return ::g::Uno::Rect__New2(::g::Uno::Float2__New2(newX, newY), a.Size());
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextrenderer/$.uno
// -------------------------------------------------------------------------------------------------------------------------------------

// internal sealed class TextRenderer :286
// {
// static TextRenderer() :286
static void TextRenderer__cctor__fn(uType* __type)
{
    TextRenderer::_textRenderers_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<Fuse.Font, Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer>*/]));
}

static void TextRenderer_build(uType* type)
{
    ::STRINGS[1] = uString::Const("");
    ::TYPES[3] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Font_typeof(), ::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::FallbackTextRenderer::WrappedLine_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Fuse::Controls::FallbackTextRenderer::WrappedLine_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::UX::BundleFileSource_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::ITextRenderer_typeof(), offsetof(TextRenderer_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::TextRenderer, _cacheMin), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::TextRenderer, _cacheValue), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::TextRenderer, _maxTextLength), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::TextRenderer, _position), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::TextRenderer, _size), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::TextRenderer, _textBounds), 0,
        ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::TextRenderer, _wrapInfo), 0,
        ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine_typeof()->Array(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::TextRenderer, _wrappedLines), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::TextRenderer, _wrapWidth), 0,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::TextRenderer, Control), 0,
        ::TYPES[3/*Uno.Collections.Dictionary<Fuse.Font, Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer>*/], (uintptr_t)&::g::Fuse::Controls::FallbackTextRenderer::TextRenderer::_textRenderers_, uFieldFlagsStatic);
}

TextRenderer_type* TextRenderer_typeof()
{
    static uSStrong<TextRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(TextRenderer_type);
    type = (TextRenderer_type*)uClassType::New("Fuse.Controls.FallbackTextRenderer.TextRenderer", options);
    type->fp_build_ = TextRenderer_build;
    type->fp_cctor_ = TextRenderer__cctor__fn;
    type->interface0.fp_GetContentSize = (void(*)(uObject*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextRenderer__GetContentSize_fn;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Fuse::DrawContext*, ::g::Fuse::Visual*))TextRenderer__Draw_fn;
    type->interface0.fp_Arrange = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Float2*))TextRenderer__Arrange_fn;
    type->interface0.fp_Invalidate = (void(*)(uObject*))TextRenderer__Invalidate_fn;
    type->interface0.fp_GetRenderBounds = (void(*)(uObject*, ::g::Uno::Rect*))TextRenderer__GetRenderBounds_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))TextRenderer__SoftDispose_fn;
    return type;
}

// public TextRenderer(Fuse.Controls.TextControl text) :289
void TextRenderer__ctor__fn(TextRenderer* __this, ::g::Fuse::Controls::TextControl* text)
{
    __this->ctor_(text);
}

// public void Arrange(float2 position, float2 size) :443
void TextRenderer__Arrange_fn(TextRenderer* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size)
{
    __this->Arrange(*position, *size);
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual where) :423
void TextRenderer__Draw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where)
{
    __this->Draw(dc, where);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) :333
void TextRenderer__GetContentSize_fn(TextRenderer* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetContentSize(*lp);
}

// public Uno.Rect GetRenderBounds() :465
void TextRenderer__GetRenderBounds_fn(TextRenderer* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetRenderBounds();
}

// internal static Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer GetTextRenderer(Fuse.Font f) :296
void TextRenderer__GetTextRenderer_fn(::g::Fuse::Font* f, ::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer** __retval)
{
    *__retval = TextRenderer::GetTextRenderer(f);
}

// private void InitWrap(float wrapWidth, string value, bool useMin) :350
void TextRenderer__InitWrap_fn(TextRenderer* __this, float* wrapWidth, uString* value, bool* useMin)
{
    __this->InitWrap(*wrapWidth, value, *useMin);
}

// public void Invalidate() :460
void TextRenderer__Invalidate_fn(TextRenderer* __this)
{
    __this->Invalidate();
}

// private static Uno.Content.Fonts.FontFace LoadFont(Fuse.Font font) :310
void TextRenderer__LoadFont_fn(::g::Fuse::Font* font, ::g::Uno::Content::Fonts::FontFace** __retval)
{
    *__retval = TextRenderer::LoadFont(font);
}

// public TextRenderer New(Fuse.Controls.TextControl text) :289
void TextRenderer__New1_fn(::g::Fuse::Controls::TextControl* text, TextRenderer** __retval)
{
    *__retval = TextRenderer::New1(text);
}

// public void SoftDispose() :470
void TextRenderer__SoftDispose_fn(TextRenderer* __this)
{
    __this->SoftDispose();
}

// private void UpdateArrange() :451
void TextRenderer__UpdateArrange_fn(TextRenderer* __this)
{
    __this->UpdateArrange();
}

uSStrong< ::g::Uno::Collections::Dictionary*> TextRenderer::_textRenderers_;

// public TextRenderer(Fuse.Controls.TextControl text) [instance] :289
void TextRenderer::ctor_(::g::Fuse::Controls::TextControl* text)
{
    Control = text;
}

// public void Arrange(float2 position, float2 size) [instance] :443
void TextRenderer::Arrange(::g::Uno::Float2 position, ::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.TextRenderer", "Arrange(float2,float2)");
    _position = position;
    _size = size;
    Invalidate();
    UpdateArrange();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual where) [instance] :423
void TextRenderer::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.TextRenderer", "Draw(Fuse.DrawContext,Fuse.Visual)");
    uArray* array10;
    int index11;
    int length12;
    UpdateArrange();
    uPtr(uPtr(_wrapInfo)->TextRenderer)->BeginRendering(uPtr(_wrapInfo)->FontSize, uPtr(_wrapInfo)->AbsoluteZoom, uPtr(where)->WorldTransform(), _size, uPtr(Control)->RenderColor(), _maxTextLength);
    float y = _position.Y;

    for (array10 = _wrappedLines, index11 = 0, length12 = uPtr(array10)->Length(); index11 < length12; ++index11)
    {
        ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine* wrappedLine = uPtr(array10)->Strong< ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine*>(index11);
        float x = uPtr(wrappedLine)->GetXOffset(uPtr(Control)->TextAlignment(), _size.X, uPtr(where)->AbsoluteZoom());
        x = x + _position.X;
        uPtr(uPtr(_wrapInfo)->TextRenderer)->DrawLine(dc, x * uPtr(_wrapInfo)->AbsoluteZoom, y, wrappedLine->Text);
        y = y + (uPtr(_wrapInfo)->LineHeight * uPtr(_wrapInfo)->AbsoluteZoom);
    }

    uPtr(uPtr(_wrapInfo)->TextRenderer)->EndRendering(dc);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) [instance] :333
::g::Uno::Float2 TextRenderer::GetContentSize(::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.TextRenderer", "GetContentSize(Fuse.LayoutParams)");
    uString* ind13;

    if (Control == NULL)
        return ::g::Uno::Float2__New1(0.0f);

    float wrapWidth = FLT_INF;

    if (uPtr(Control)->TextWrapping() == 1)
    {
        if (lp.HasX())
            wrapWidth = lp.X();

        if (lp.HasMaxX() && (lp.MaxX() < wrapWidth))
            wrapWidth = lp.MaxX();
    }

    InitWrap(wrapWidth, (ind13 = uPtr(Control)->RenderValue(), (ind13 != NULL) ? ind13 : ::STRINGS[1/*""*/]), true);
    return _textBounds.Size();
}

// public Uno.Rect GetRenderBounds() [instance] :465
::g::Uno::Rect TextRenderer::GetRenderBounds()
{
    return ::g::Uno::Rect__Translate(_textBounds, _position);
}

// private void InitWrap(float wrapWidth, string value, bool useMin) [instance] :350
void TextRenderer::InitWrap(float wrapWidth, uString* value, bool useMin)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.TextRenderer", "InitWrap(float,string,bool)");
    uArray* array7;
    int index8;
    int length9;

    if ((((_wrapInfo != NULL) && (_wrapWidth == wrapWidth)) && ::g::Uno::String::op_Equality(_cacheValue, value)) && (_cacheMin == useMin))
        return;

    _wrapWidth = wrapWidth;
    _cacheValue = value;
    _cacheMin = useMin;
    ::g::Fuse::Font* font = uPtr(Control)->Font();
    ::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer* renderer = TextRenderer::GetTextRenderer(font);
    float fontSize = uPtr(Control)->FontSize();
    _wrapInfo = ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo::New1(renderer, uPtr(Control)->TextWrapping() == 1, wrapWidth, fontSize, uPtr(renderer)->GetLineHeight(fontSize), uPtr(Control)->LineSpacing(), uPtr(Control)->AbsoluteZoom());
    uArray* lines = ::g::Uno::String::Split(uPtr(value), uArray::Init<int>(::TYPES[4/*char[]*/], 1, 10));
    ::g::Uno::Collections::List* wrappedLines = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[5/*Uno.Collections.List<Fuse.Controls.FallbackTextRenderer.WrappedLine>*/]);

    if (uPtr(Control)->TextWrapping() == 1)

        for (int index2 = 0, length3 = uPtr(lines)->Length(); index2 < length3; ++index2)
        {
            uString* line = uPtr(lines)->Strong<uString*>(index2);
            uPtr(wrappedLines)->AddRange((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[6/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Controls.FallbackTextRenderer.WrappedLine>*/], ::g::Fuse::Controls::FallbackTextRenderer::WordWrapper::WrapLine(_wrapInfo, line))));
        }
    else
    {
        int y = 0;

        for (int index5 = 0, length6 = uPtr(lines)->Length(); index5 < length6; ++index5)
        {
            uString* line1 = uPtr(lines)->Strong<uString*>(index5);
            ::g::Uno::Float2 lineSize = uPtr(uPtr(_wrapInfo)->TextRenderer)->MeasureStringVirtual(uPtr(_wrapInfo)->FontSize, uPtr(_wrapInfo)->AbsoluteZoom, line1);
            ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine* wrappedLine = ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine::New1(line1, 0, (float)(y++), lineSize.X);
            ::g::Uno::Collections::List__Add_fn(uPtr(wrappedLines), wrappedLine);
        }
    }

    _wrappedLines = ((uArray*)wrappedLines->ToArray());
    float maxX = 0.0f;
    float minX = 0.0f;
    float height = 0.0f;
    int maxTextLength = 0;

    for (array7 = _wrappedLines, index8 = 0, length9 = uPtr(array7)->Length(); index8 < length9; ++index8)
    {
        ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine* wrappedLine1 = uPtr(array7)->Strong< ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine*>(index8);
        ::g::Uno::Float2 extent = ::g::Uno::Float2__New2(0.0f, uPtr(wrappedLine1)->LineWidth);

        if (!useMin)

            switch (uPtr(Control)->TextAlignment())
            {
                case 0:
                {
                    extent = ::g::Uno::Float2__New2(0.0f, uPtr(wrappedLine1)->LineWidth);
                    break;
                }
                case 2:
                {
                    extent = ::g::Uno::Float2__New2(wrapWidth - uPtr(wrappedLine1)->LineWidth, wrapWidth);
                    break;
                }
                case 1:
                {
                    extent = ::g::Uno::Float2__New2((wrapWidth / 2.0f) - (uPtr(wrappedLine1)->LineWidth / 2.0f), (wrapWidth / 2.0f) + (uPtr(wrappedLine1)->LineWidth / 2.0f));
                    break;
                }
            }

        minX = ::g::Uno::Math::Min1(minX, extent.Item(0));
        maxX = ::g::Uno::Math::Max1(maxX, extent.Item(1));
        maxTextLength = maxTextLength + uPtr(wrappedLine1->Text)->Length();
        height = height + uPtr(_wrapInfo)->LineHeight;
    }

    _textBounds = ::g::Uno::Rect__New2(::g::Uno::Float2__New2(minX, 0.0f), ::g::Uno::Float2__New2(maxX, height));
    _maxTextLength = maxTextLength;
}

// public void Invalidate() [instance] :460
void TextRenderer::Invalidate()
{
    _wrapInfo = NULL;
}

// public void SoftDispose() [instance] :470
void TextRenderer::SoftDispose()
{
    _wrapInfo = NULL;
}

// private void UpdateArrange() [instance] :451
void TextRenderer::UpdateArrange()
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.TextRenderer", "UpdateArrange()");

    if (_wrapInfo != NULL)
        return;

    uString* ind14 = uPtr(Control)->RenderValue();
    uString* v = (ind14 != NULL) ? ind14 : ::STRINGS[1/*""*/];
    InitWrap(_size.X, v, false);
}

// internal static Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer GetTextRenderer(Fuse.Font f) [static] :296
::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer* TextRenderer::GetTextRenderer(::g::Fuse::Font* f)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.TextRenderer", "GetTextRenderer(Fuse.Font)");
    TextRenderer_typeof()->Init();
    bool ret16;
    ::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer* tr;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(TextRenderer::_textRenderers()), f, (void**)(&tr), &ret16), ret16))
    {
        tr = ::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer::New1(TextRenderer::LoadFont(f));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TextRenderer::_textRenderers()), f, tr);
    }

    return tr;
}

// private static Uno.Content.Fonts.FontFace LoadFont(Fuse.Font font) [static] :310
::g::Uno::Content::Fonts::FontFace* TextRenderer::LoadFont(::g::Fuse::Font* font)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.TextRenderer", "LoadFont(Fuse.Font)");
    TextRenderer_typeof()->Init();
    ::g::Uno::UX::BundleFileSource* bfs = uAs< ::g::Uno::UX::BundleFileSource*>(uPtr(font)->FileSource(), ::TYPES[7/*Uno.UX.BundleFileSource*/]);

    if (bfs != NULL)
        return ::g::Uno::Content::Fonts::FontFace::Load1(uPtr(bfs)->BundleFile);
    else
    {
        uArray* data = uPtr(uPtr(font)->FileSource())->ReadAllBytes();
        return ::g::Uno::Content::Fonts::FontFace::Load(uPtr(font->FileSource())->Name, data, 0, uPtr(data)->Length());
    }
}

// public TextRenderer New(Fuse.Controls.TextControl text) [static] :289
TextRenderer* TextRenderer::New1(::g::Fuse::Controls::TextControl* text)
{
    TextRenderer* obj15 = (TextRenderer*)uNew(TextRenderer_typeof());
    obj15->ctor_(text);
    return obj15;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextrenderer/$.uno
// -------------------------------------------------------------------------------------------------------------------------------------

// internal sealed class WordWrapInfo :484
// {
static void WordWrapInfo_build(uType* type)
{
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::TYPES[9/*float*/], offsetof(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo, AbsoluteZoom), 0,
        ::TYPES[9/*float*/], offsetof(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo, FontSize), 0,
        ::TYPES[8/*bool*/], offsetof(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo, IsEnabled), 0,
        ::TYPES[9/*float*/], offsetof(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo, LineHeight), 0,
        ::TYPES[9/*float*/], offsetof(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo, LineSpacing), 0,
        ::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo, TextRenderer), 0,
        ::TYPES[9/*float*/], offsetof(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo, WrapWidth), 0);
}

uType* WordWrapInfo_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(WordWrapInfo);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextRenderer.WordWrapInfo", options);
    type->fp_build_ = WordWrapInfo_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))WordWrapInfo__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))WordWrapInfo__GetHashCode_fn;
    return type;
}

// public WordWrapInfo(Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom) :494
void WordWrapInfo__ctor__fn(WordWrapInfo* __this, ::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer* textRenderer, bool* isEnabled, float* wrapWidth, float* fontSize, float* lineHeight, float* lineSpacing, float* absoluteZoom)
{
    __this->ctor_(textRenderer, *isEnabled, *wrapWidth, *fontSize, *lineHeight, *lineSpacing, *absoluteZoom);
}

// public override sealed bool Equals(object obj) :506
void WordWrapInfo__Equals_fn(WordWrapInfo* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.WordWrapInfo", "Equals(object)");

    if (!uIs(obj, __this->__type))
        return *__retval = false, void();

    WordWrapInfo* other = uCast<WordWrapInfo*>(obj, __this->__type);
    return *__retval = ((((((__this->TextRenderer == uPtr(other)->TextRenderer) && (__this->IsEnabled == uPtr(other)->IsEnabled)) && (__this->WrapWidth == uPtr(other)->WrapWidth)) && (__this->FontSize == uPtr(other)->FontSize)) && (__this->LineHeight == uPtr(other)->LineHeight)) && (__this->LineSpacing == uPtr(other)->LineSpacing)) && (__this->AbsoluteZoom == uPtr(other)->AbsoluteZoom), void();
}

// public override sealed int GetHashCode() :522
void WordWrapInfo__GetHashCode_fn(WordWrapInfo* __this, int* __retval)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.WordWrapInfo", "GetHashCode()");
    bool ind1;
    float ind2;
    float ind3;
    float ind4;
    float ind5;
    float ind6;
    return *__retval = (((((::g::Uno::Object::GetHashCode(uPtr(__this->TextRenderer)) ^ ::g::Uno::Bool::GetHashCode((ind1 = __this->IsEnabled, ind1), ::TYPES[8/*bool*/])) ^ ::g::Uno::Float::GetHashCode((ind2 = __this->WrapWidth, ind2), ::TYPES[9/*float*/])) ^ ::g::Uno::Float::GetHashCode((ind3 = __this->FontSize, ind3), ::TYPES[9/*float*/])) ^ ::g::Uno::Float::GetHashCode((ind4 = __this->LineHeight, ind4), ::TYPES[9/*float*/])) ^ ::g::Uno::Float::GetHashCode((ind5 = __this->LineSpacing, ind5), ::TYPES[9/*float*/])) ^ ::g::Uno::Float::GetHashCode((ind6 = __this->AbsoluteZoom, ind6), ::TYPES[9/*float*/]), void();
}

// public WordWrapInfo New(Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom) :494
void WordWrapInfo__New1_fn(::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer* textRenderer, bool* isEnabled, float* wrapWidth, float* fontSize, float* lineHeight, float* lineSpacing, float* absoluteZoom, WordWrapInfo** __retval)
{
    *__retval = WordWrapInfo::New1(textRenderer, *isEnabled, *wrapWidth, *fontSize, *lineHeight, *lineSpacing, *absoluteZoom);
}

// public WordWrapInfo(Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom) [instance] :494
void WordWrapInfo::ctor_(::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer* textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom)
{
    AbsoluteZoom = absoluteZoom;
    TextRenderer = textRenderer;
    IsEnabled = isEnabled;
    WrapWidth = wrapWidth;
    FontSize = fontSize;
    LineHeight = (::g::Uno::Math::Ceil1(lineHeight * absoluteZoom) / absoluteZoom);
    LineHeight = (LineHeight + (lineSpacing * absoluteZoom));
    LineSpacing = (lineSpacing * absoluteZoom);
}

// public WordWrapInfo New(Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom) [static] :494
WordWrapInfo* WordWrapInfo::New1(::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer* textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom)
{
    WordWrapInfo* obj7 = (WordWrapInfo*)uNew(WordWrapInfo_typeof());
    obj7->ctor_(textRenderer, isEnabled, wrapWidth, fontSize, lineHeight, lineSpacing, absoluteZoom);
    return obj7;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextrenderer/$.uno
// -------------------------------------------------------------------------------------------------------------------------------------

// internal static class WordWrapper :566
// {
static void WordWrapper_build(uType* type)
{
    ::TYPES[10] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::FallbackTextRenderer::WrappedLine_typeof(), NULL);
}

uClassType* WordWrapper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.FallbackTextRenderer.WordWrapper", options);
    type->fp_build_ = WordWrapper_build;
    return type;
}

// private static Uno.Collections.List<Fuse.Controls.FallbackTextRenderer.WordWrapperWord> GetWords(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, string text) :607
void WordWrapper__GetWords_fn(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, uString* text, ::g::Uno::Collections::List** __retval)
{
    *__retval = WordWrapper::GetWords(wrapInfo, text);
}

// private static Fuse.Controls.FallbackTextRenderer.WordWrapperWord SplitWord(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Uno.Collections.List<Fuse.Controls.FallbackTextRenderer.WrappedLine> wrappedLines, Fuse.Controls.FallbackTextRenderer.WordWrapperWord word, int& lineStartIndex) :634
void WordWrapper__SplitWord_fn(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Uno::Collections::List* wrappedLines, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord* word, int* lineStartIndex, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord** __retval)
{
    *__retval = WordWrapper::SplitWord(wrapInfo, wrappedLines, word, lineStartIndex);
}

// public static Fuse.Controls.FallbackTextRenderer.WrappedLine[] WrapLine(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, string text) :568
void WordWrapper__WrapLine_fn(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, uString* text, uArray** __retval)
{
    *__retval = WordWrapper::WrapLine(wrapInfo, text);
}

// private static Uno.Collections.List<Fuse.Controls.FallbackTextRenderer.WordWrapperWord> GetWords(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, string text) [static] :607
::g::Uno::Collections::List* WordWrapper::GetWords(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, uString* text)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.WordWrapper", "GetWords(Fuse.Controls.FallbackTextRenderer.WordWrapInfo,string)");
    ::g::Uno::Collections::List* ret = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[10/*Uno.Collections.List<Fuse.Controls.FallbackTextRenderer.WordWrapperWord>*/]);

    for (int i = 0; i < uPtr(text)->Length(); )
    {
        int contentsIndex = i;
        int contentsLength = 0;

        for (; (i < uPtr(text)->Length()) && !::g::Uno::Char::IsWhiteSpace(uPtr(text)->Item(i)); i++)
            contentsLength++;

        uString* contents = ::g::Uno::String::Substring1(uPtr(text), contentsIndex, contentsLength);
        int whitespaceIndex = i;
        int whitespaceLength = 0;

        for (; (i < text->Length()) && ::g::Uno::Char::IsWhiteSpace(text->Item(i)); i++)
            whitespaceLength++;

        uString* whitespace = ::g::Uno::String::Substring1(text, whitespaceIndex, whitespaceLength);
        ::g::Uno::Collections::List__Add_fn(uPtr(ret), ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord::New1(contents, whitespace, contentsIndex, uPtr(uPtr(wrapInfo)->TextRenderer)->MeasureStringVirtual(uPtr(wrapInfo)->FontSize, uPtr(wrapInfo)->AbsoluteZoom, contents).X, uPtr(uPtr(wrapInfo)->TextRenderer)->MeasureStringVirtual(uPtr(wrapInfo)->FontSize, uPtr(wrapInfo)->AbsoluteZoom, ::g::Uno::String::op_Addition2(contents, whitespace)).X));
    }

    return ret;
}

// private static Fuse.Controls.FallbackTextRenderer.WordWrapperWord SplitWord(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Uno.Collections.List<Fuse.Controls.FallbackTextRenderer.WrappedLine> wrappedLines, Fuse.Controls.FallbackTextRenderer.WordWrapperWord word, int& lineStartIndex) [static] :634
::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord* WordWrapper::SplitWord(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Uno::Collections::List* wrappedLines, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord* word, int* lineStartIndex)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.WordWrapper", "SplitWord(Fuse.Controls.FallbackTextRenderer.WordWrapInfo,Uno.Collections.List<Fuse.Controls.FallbackTextRenderer.WrappedLine>,Fuse.Controls.FallbackTextRenderer.WordWrapperWord,int&)");

    while ((uPtr(uPtr(word)->Contents)->Length() > 1) && (uPtr(word)->ContentsWidth > uPtr(wrapInfo)->WrapWidth))
    {
        int c = 1;

        for (; c < uPtr(uPtr(word)->Contents)->Length(); c++)
        {
            uString* leftString = ::g::Uno::String::Substring1(uPtr(uPtr(word)->Contents), 0, c);
            float startX = uPtr(uPtr(wrapInfo)->TextRenderer)->MeasureStringVirtual(uPtr(wrapInfo)->FontSize, uPtr(wrapInfo)->AbsoluteZoom, leftString).X;

            if (startX >= wrapInfo->WrapWidth)
                return word;

            float endX = startX + uPtr(wrapInfo->TextRenderer)->MeasureStringVirtual(wrapInfo->FontSize, wrapInfo->AbsoluteZoom, ::g::Uno::String::Substring1(uPtr(word->Contents), c, 1)).X;

            if ((startX < wrapInfo->WrapWidth) && (endX >= wrapInfo->WrapWidth))
            {
                ::g::Uno::Collections::List__Add_fn(uPtr(wrappedLines), ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine::New1(leftString, uPtr(word)->StartIndex, (float)uPtr(wrappedLines)->Count() * uPtr(wrapInfo)->LineHeight, startX));
                uString* newWordContents = ::g::Uno::String::Substring(uPtr(word->Contents), c);
                *lineStartIndex = word->StartIndex + c;
                word = ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord::New1(newWordContents, word->Whitespace, *lineStartIndex, uPtr(wrapInfo->TextRenderer)->MeasureStringVirtual(wrapInfo->FontSize, wrapInfo->AbsoluteZoom, newWordContents).X, uPtr(wrapInfo->TextRenderer)->MeasureStringVirtual(wrapInfo->FontSize, wrapInfo->AbsoluteZoom, ::g::Uno::String::op_Addition2(newWordContents, word->Whitespace)).X);
                break;
            }
        }
    }

    return word;
}

// public static Fuse.Controls.FallbackTextRenderer.WrappedLine[] WrapLine(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, string text) [static] :568
uArray* WordWrapper::WrapLine(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, uString* text)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.WordWrapper", "WrapLine(Fuse.Controls.FallbackTextRenderer.WordWrapInfo,string)");
    ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord* ret1;
    ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord* ret2;
    ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord* ret3;
    ::g::Uno::Collections::List* words = WordWrapper::GetWords(wrapInfo, text);
    ::g::Uno::Collections::List* ret = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[5/*Uno.Collections.List<Fuse.Controls.FallbackTextRenderer.WrappedLine>*/]);

    if (uPtr(words)->Count() == 0)
        return (uArray*)uPtr(ret)->ToArray();

    int lineStartIndex = 0;
    uString* lineText = ::g::Uno::String::Empty();
    float lineWidth = 0.0f;

    for (int i = 0; i < (uPtr(words)->Count() - 1); i++)
    {
        ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord* word = WordWrapper::SplitWord(wrapInfo, ret, (::g::Uno::Collections::List__get_Item_fn(uPtr(words), uCRef<int>(i), &ret1), ret1), &lineStartIndex);
        ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord* nextWord = (::g::Uno::Collections::List__get_Item_fn(words, uCRef<int>(i + 1), &ret2), ret2);

        if (((lineWidth + uPtr(word)->TotalContentsWidth) + uPtr(nextWord)->ContentsWidth) <= uPtr(wrapInfo)->WrapWidth)
        {
            lineText = ::g::Uno::String::op_Addition2(lineText, uPtr(word)->TotalContents);
            lineWidth = lineWidth + word->TotalContentsWidth;
        }
        else
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(ret), ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine::New1(::g::Uno::String::op_Addition2(lineText, uPtr(word)->TotalContents), lineStartIndex, (float)uPtr(ret)->Count() * uPtr(wrapInfo)->LineHeight, lineWidth + uPtr(word)->ContentsWidth));
            lineStartIndex = uPtr(nextWord)->StartIndex;
            lineText = ::g::Uno::String::Empty();
            lineWidth = 0.0f;
        }
    }

    ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord* lastWord = WordWrapper::SplitWord(wrapInfo, ret, (::g::Uno::Collections::List__get_Item_fn(uPtr(words), uCRef<int>(uPtr(words)->Count() - 1), &ret3), ret3), &lineStartIndex);
    ::g::Uno::Collections::List__Add_fn(ret, ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine::New1(::g::Uno::String::op_Addition2(lineText, uPtr(lastWord)->TotalContents), lineStartIndex, (float)ret->Count() * uPtr(wrapInfo)->LineHeight, lineWidth + uPtr(lastWord)->TotalContentsWidth));
    return (uArray*)ret->ToArray();
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextrenderer/$.uno
// -------------------------------------------------------------------------------------------------------------------------------------

// internal sealed class WordWrapperWord :544
// {
static void WordWrapperWord_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord, Contents), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord, ContentsWidth), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord, StartIndex), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord, TotalContents), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord, TotalContentsWidth), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord, Whitespace), 0);
}

uType* WordWrapperWord_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(WordWrapperWord);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextRenderer.WordWrapperWord", options);
    type->fp_build_ = WordWrapperWord_build;
    return type;
}

// public WordWrapperWord(string contents, string whitespace, int startIndex, float contentsWidth, float totalContentsWidth) :555
void WordWrapperWord__ctor__fn(WordWrapperWord* __this, uString* contents, uString* whitespace, int* startIndex, float* contentsWidth, float* totalContentsWidth)
{
    __this->ctor_(contents, whitespace, *startIndex, *contentsWidth, *totalContentsWidth);
}

// public int get_EndIndex() :553
void WordWrapperWord__get_EndIndex_fn(WordWrapperWord* __this, int* __retval)
{
    *__retval = __this->EndIndex();
}

// public WordWrapperWord New(string contents, string whitespace, int startIndex, float contentsWidth, float totalContentsWidth) :555
void WordWrapperWord__New1_fn(uString* contents, uString* whitespace, int* startIndex, float* contentsWidth, float* totalContentsWidth, WordWrapperWord** __retval)
{
    *__retval = WordWrapperWord::New1(contents, whitespace, *startIndex, *contentsWidth, *totalContentsWidth);
}

// public WordWrapperWord(string contents, string whitespace, int startIndex, float contentsWidth, float totalContentsWidth) [instance] :555
void WordWrapperWord::ctor_(uString* contents, uString* whitespace, int startIndex, float contentsWidth, float totalContentsWidth)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.WordWrapperWord", ".ctor(string,string,int,float,float)");
    Contents = contents;
    Whitespace = whitespace;
    TotalContents = ::g::Uno::String::op_Addition2(Contents, Whitespace);
    StartIndex = startIndex;
    ContentsWidth = contentsWidth;
    TotalContentsWidth = totalContentsWidth;
}

// public int get_EndIndex() [instance] :553
int WordWrapperWord::EndIndex()
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.WordWrapperWord", "get_EndIndex()");
    return StartIndex + uPtr(TotalContents)->Length();
}

// public WordWrapperWord New(string contents, string whitespace, int startIndex, float contentsWidth, float totalContentsWidth) [static] :555
WordWrapperWord* WordWrapperWord::New1(uString* contents, uString* whitespace, int startIndex, float contentsWidth, float totalContentsWidth)
{
    WordWrapperWord* obj1 = (WordWrapperWord*)uNew(WordWrapperWord_typeof());
    obj1->ctor_(contents, whitespace, startIndex, contentsWidth, totalContentsWidth);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextrenderer/$.uno
// -------------------------------------------------------------------------------------------------------------------------------------

// internal sealed class WrappedLine :673
// {
static void WrappedLine_build(uType* type)
{
    ::STRINGS[2] = uString::Const("unsupported enum-value");
    ::STRINGS[3] = uString::Const("textAlignment");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::WrappedLine, LineTextStartOffset), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::WrappedLine, LineWidth), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::WrappedLine, Text), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FallbackTextRenderer::WrappedLine, YOffset), 0);
}

uType* WrappedLine_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(WrappedLine);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextRenderer.WrappedLine", options);
    type->fp_build_ = WrappedLine_build;
    return type;
}

// public WrappedLine(string text, int lineTextStartOffset, float yOffset, float lineWidth) :682
void WrappedLine__ctor__fn(WrappedLine* __this, uString* text, int* lineTextStartOffset, float* yOffset, float* lineWidth)
{
    __this->ctor_(text, *lineTextStartOffset, *yOffset, *lineWidth);
}

// public int BoundsToPos(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, float p) :707
void WrappedLine__BoundsToPos_fn(WrappedLine* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, float* p, int* __retval)
{
    *__retval = __this->BoundsToPos(wrapInfo, *p);
}

// public float GetXOffset(Fuse.Controls.TextAlignment textAlignment, float boundsWidth, float absoluteZoom) :690
void WrappedLine__GetXOffset_fn(WrappedLine* __this, int* textAlignment, float* boundsWidth, float* absoluteZoom, float* __retval)
{
    *__retval = __this->GetXOffset(*textAlignment, *boundsWidth, *absoluteZoom);
}

// public int get_LineTextEndOffset() :680
void WrappedLine__get_LineTextEndOffset_fn(WrappedLine* __this, int* __retval)
{
    *__retval = __this->LineTextEndOffset();
}

// public WrappedLine New(string text, int lineTextStartOffset, float yOffset, float lineWidth) :682
void WrappedLine__New1_fn(uString* text, int* lineTextStartOffset, float* yOffset, float* lineWidth, WrappedLine** __retval)
{
    *__retval = WrappedLine::New1(text, *lineTextStartOffset, *yOffset, *lineWidth);
}

// public float PosToBounds(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, int p) :733
void WrappedLine__PosToBounds_fn(WrappedLine* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int* p, float* __retval)
{
    *__retval = __this->PosToBounds(wrapInfo, *p);
}

// public WrappedLine(string text, int lineTextStartOffset, float yOffset, float lineWidth) [instance] :682
void WrappedLine::ctor_(uString* text, int lineTextStartOffset, float yOffset, float lineWidth)
{
    Text = text;
    LineTextStartOffset = lineTextStartOffset;
    YOffset = yOffset;
    LineWidth = lineWidth;
}

// public int BoundsToPos(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, float p) [instance] :707
int WrappedLine::BoundsToPos(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, float p)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.WrappedLine", "BoundsToPos(Fuse.Controls.FallbackTextRenderer.WordWrapInfo,float)");
    int c = 0;

    if (p > 0.0f)

        for (; c < uPtr(Text)->Length(); c++)
        {
            float startX = uPtr(uPtr(wrapInfo)->TextRenderer)->MeasureStringVirtual(uPtr(wrapInfo)->FontSize, uPtr(wrapInfo)->AbsoluteZoom, ::g::Uno::String::Substring1(uPtr(Text), 0, c)).X;

            if (p >= startX)
            {
                float charWidth = uPtr(uPtr(wrapInfo)->TextRenderer)->MeasureStringVirtual(uPtr(wrapInfo)->FontSize, uPtr(wrapInfo)->AbsoluteZoom, ::g::Uno::String::Substring1(uPtr(Text), c, 1)).X;
                float endX = startX + charWidth;

                if (p < endX)
                {
                    float charPos = (p - startX) / charWidth;

                    if (charPos >= 0.5f)
                        c = ::g::Uno::Math::Clamp8(c + 1, 0, uPtr(Text)->Length() - 1);

                    break;
                }
            }
        }

    return c;
}

// public float GetXOffset(Fuse.Controls.TextAlignment textAlignment, float boundsWidth, float absoluteZoom) [instance] :690
float WrappedLine::GetXOffset(int textAlignment, float boundsWidth, float absoluteZoom)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.WrappedLine", "GetXOffset(Fuse.Controls.TextAlignment,float,float)");

    switch (textAlignment)
    {
        case 0:
            return 0.0f;
        case 1:
            return ::g::Uno::Math::Round2(((boundsWidth - LineWidth) / 2.0f) * absoluteZoom) / absoluteZoom;
        case 2:
            return boundsWidth - LineWidth;
    }

    U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[2/*"unsupported...*/], ::STRINGS[3/*"textAlignment"*/]));
}

// public int get_LineTextEndOffset() [instance] :680
int WrappedLine::LineTextEndOffset()
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.WrappedLine", "get_LineTextEndOffset()");
    return LineTextStartOffset + uPtr(Text)->Length();
}

// public float PosToBounds(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, int p) [instance] :733
float WrappedLine::PosToBounds(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int p)
{
    uStackFrame __("Fuse.Controls.FallbackTextRenderer.WrappedLine", "PosToBounds(Fuse.Controls.FallbackTextRenderer.WordWrapInfo,int)");
    return uPtr(uPtr(wrapInfo)->TextRenderer)->MeasureStringVirtual(uPtr(wrapInfo)->FontSize, uPtr(wrapInfo)->AbsoluteZoom, ::g::Uno::String::Substring1(uPtr(Text), 0, p)).X;
}

// public WrappedLine New(string text, int lineTextStartOffset, float yOffset, float lineWidth) [static] :682
WrappedLine* WrappedLine::New1(uString* text, int lineTextStartOffset, float yOffset, float lineWidth)
{
    WrappedLine* obj1 = (WrappedLine*)uNew(WrappedLine_typeof());
    obj1->ctor_(text, lineTextStartOffset, yOffset, lineWidth);
    return obj1;
}
// }

}}}} // ::g::Fuse::Controls::FallbackTextRenderer
