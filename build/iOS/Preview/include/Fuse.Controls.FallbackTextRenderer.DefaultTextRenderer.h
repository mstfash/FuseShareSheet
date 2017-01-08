// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextrenderer/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct DefaultTextRenderer;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct DefaultTextRenderer__FontKey;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct BitmapFont;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct FontFace;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextRenderer;}}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextRenderer{

// internal sealed class DefaultTextRenderer :11
// {
uType* DefaultTextRenderer_typeof();
void DefaultTextRenderer__ctor__fn(DefaultTextRenderer* __this, ::g::Uno::Content::Fonts::FontFace* fontFace);
void DefaultTextRenderer__BeginRendering_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, ::g::Uno::Float4x4* transform, ::g::Uno::Float2* bounds, ::g::Uno::Float4* textColor, int* maxTextLength);
void DefaultTextRenderer__DrawLine_fn(DefaultTextRenderer* __this, ::g::Fuse::DrawContext* dc, float* x, float* y, uString* line);
void DefaultTextRenderer__EndRendering_fn(DefaultTextRenderer* __this, ::g::Fuse::DrawContext* dc);
void DefaultTextRenderer__EnsureRendererCapacity_fn(int* maxCharCount);
void DefaultTextRenderer__get_FontFace_fn(DefaultTextRenderer* __this, ::g::Uno::Content::Fonts::FontFace** __retval);
void DefaultTextRenderer__set_FontFace_fn(DefaultTextRenderer* __this, ::g::Uno::Content::Fonts::FontFace* value);
void DefaultTextRenderer__GetBitmapFont_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, bool* includeZoom, ::g::Uno::Content::Fonts::BitmapFont** __retval);
void DefaultTextRenderer__GetLineHeight_fn(DefaultTextRenderer* __this, float* fontSize, float* __retval);
void DefaultTextRenderer__GetLineHeightVirtual_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, float* __retval);
void DefaultTextRenderer__MeasureString_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, uString* s, ::g::Uno::Float2* __retval);
void DefaultTextRenderer__MeasureStringVirtual_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, uString* s, ::g::Uno::Float2* __retval);
void DefaultTextRenderer__New1_fn(::g::Uno::Content::Fonts::FontFace* fontFace, DefaultTextRenderer** __retval);
void DefaultTextRenderer__get_renderer_fn(::g::Uno::Content::Fonts::TextRenderer** __retval);

struct DefaultTextRenderer : uObject
{
    float _absoluteZoom;
    uStrong< ::g::Uno::Content::Fonts::BitmapFont*> _bitmapFont;
    static uSStrong< ::g::Uno::Collections::Dictionary*> _bitmapFonts_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _bitmapFonts() { return _bitmapFonts_; }
    float _fontSize;
    static int _maxCharCount_;
    static int& _maxCharCount() { return _maxCharCount_; }
    static uSStrong< ::g::Uno::Content::Fonts::TextRenderer*> _renderer_;
    static uSStrong< ::g::Uno::Content::Fonts::TextRenderer*>& _renderer() { return _renderer_; }
    ::g::Uno::Float4x4 _transform;
    uStrong< ::g::Uno::Content::Fonts::FontFace*> _FontFace;

    void ctor_(::g::Uno::Content::Fonts::FontFace* fontFace);
    void BeginRendering(float fontSize, float absoluteZoom, ::g::Uno::Float4x4 transform, ::g::Uno::Float2 bounds, ::g::Uno::Float4 textColor, int maxTextLength);
    void DrawLine(::g::Fuse::DrawContext* dc, float x, float y, uString* line);
    void EndRendering(::g::Fuse::DrawContext* dc);
    ::g::Uno::Content::Fonts::FontFace* FontFace();
    void FontFace(::g::Uno::Content::Fonts::FontFace* value);
    ::g::Uno::Content::Fonts::BitmapFont* GetBitmapFont(float fontSize, float absoluteZoom, bool includeZoom);
    float GetLineHeight(float fontSize);
    float GetLineHeightVirtual(float fontSize, float absoluteZoom);
    ::g::Uno::Float2 MeasureString(float fontSize, float absoluteZoom, uString* s);
    ::g::Uno::Float2 MeasureStringVirtual(float fontSize, float absoluteZoom, uString* s);
    static void EnsureRendererCapacity(int maxCharCount);
    static DefaultTextRenderer* New1(::g::Uno::Content::Fonts::FontFace* fontFace);
    static ::g::Uno::Content::Fonts::TextRenderer* renderer();
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextRenderer
