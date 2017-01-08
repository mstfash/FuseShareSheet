// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextrenderer/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.ITextRenderer.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.Rect.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct DefaultTextRenderer;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct TextRenderer;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct WordWrapInfo;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct WrappedLine;}}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct FontFace;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextRenderer{

// internal sealed class TextRenderer :286
// {
struct TextRenderer_type : uType
{
    ::g::Fuse::Controls::ITextRenderer interface0;
};

TextRenderer_type* TextRenderer_typeof();
void TextRenderer__ctor__fn(TextRenderer* __this, ::g::Fuse::Controls::TextControl* text);
void TextRenderer__Arrange_fn(TextRenderer* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size);
void TextRenderer__Draw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where);
void TextRenderer__GetContentSize_fn(TextRenderer* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void TextRenderer__GetRenderBounds_fn(TextRenderer* __this, ::g::Uno::Rect* __retval);
void TextRenderer__GetTextRenderer_fn(::g::Fuse::Font* f, ::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer** __retval);
void TextRenderer__InitWrap_fn(TextRenderer* __this, float* wrapWidth, uString* value, bool* useMin);
void TextRenderer__Invalidate_fn(TextRenderer* __this);
void TextRenderer__LoadFont_fn(::g::Fuse::Font* font, ::g::Uno::Content::Fonts::FontFace** __retval);
void TextRenderer__New1_fn(::g::Fuse::Controls::TextControl* text, TextRenderer** __retval);
void TextRenderer__SoftDispose_fn(TextRenderer* __this);
void TextRenderer__UpdateArrange_fn(TextRenderer* __this);

struct TextRenderer : uObject
{
    bool _cacheMin;
    uStrong<uString*> _cacheValue;
    int _maxTextLength;
    ::g::Uno::Float2 _position;
    ::g::Uno::Float2 _size;
    ::g::Uno::Rect _textBounds;
    static uSStrong< ::g::Uno::Collections::Dictionary*> _textRenderers_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _textRenderers() { return TextRenderer_typeof()->Init(), _textRenderers_; }
    uStrong< ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo*> _wrapInfo;
    uStrong<uArray*> _wrappedLines;
    float _wrapWidth;
    uStrong< ::g::Fuse::Controls::TextControl*> Control;

    void ctor_(::g::Fuse::Controls::TextControl* text);
    void Arrange(::g::Uno::Float2 position, ::g::Uno::Float2 size);
    void Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where);
    ::g::Uno::Float2 GetContentSize(::g::Fuse::LayoutParams lp);
    ::g::Uno::Rect GetRenderBounds();
    void InitWrap(float wrapWidth, uString* value, bool useMin);
    void Invalidate();
    void SoftDispose();
    void UpdateArrange();
    static ::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer* GetTextRenderer(::g::Fuse::Font* f);
    static ::g::Uno::Content::Fonts::FontFace* LoadFont(::g::Fuse::Font* font);
    static TextRenderer* New1(::g::Fuse::Controls::TextControl* text);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextRenderer
