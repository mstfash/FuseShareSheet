// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextedit/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct LineCache;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextSpan;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextWindow;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct WordWrapInfo;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct VisualBounds;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextEdit{

// internal sealed class TextWindow :913
// {
::g::Fuse::Elements::Element_type* TextWindow_typeof();
void TextWindow__ctor_4_fn(TextWindow* __this, ::g::Fuse::Visual* parent, ::g::Fuse::Controls::FallbackTextEdit::LineCache* lineCache);
void TextWindow__CalcRenderBounds_fn(TextWindow* __this, ::g::Fuse::VisualBounds** __retval);
void TextWindow__Draw1_fn(TextWindow* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextSpan* selection, ::g::Uno::Float4* textColor, ::g::Uno::Float4* selectionColor, int* maxTextLength, int* textAlignment, ::g::Uno::Float2* textBoundsSize, ::g::Uno::Float2* offset, ::g::Fuse::DrawContext* dc);
void TextWindow__New2_fn(::g::Fuse::Visual* parent, ::g::Fuse::Controls::FallbackTextEdit::LineCache* lineCache, TextWindow** __retval);
void TextWindow__OnDraw_fn(TextWindow* __this, ::g::Fuse::DrawContext* dc);

struct TextWindow : ::g::Fuse::Elements::Element
{
    uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCache*> _lineCache;
    int _maxTextLength;
    ::g::Uno::Float2 _offset;
    uStrong< ::g::Fuse::Controls::FallbackTextEdit::TextSpan*> _selection;
    ::g::Uno::Float4 _selectionColor;
    int _textAlignment;
    ::g::Uno::Float2 _textBoundsSize;
    ::g::Uno::Float4 _textColor;
    uStrong< ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo*> _wrapInfo;

    void ctor_4(::g::Fuse::Visual* parent, ::g::Fuse::Controls::FallbackTextEdit::LineCache* lineCache);
    void Draw1(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextSpan* selection, ::g::Uno::Float4 textColor, ::g::Uno::Float4 selectionColor, int maxTextLength, int textAlignment, ::g::Uno::Float2 textBoundsSize, ::g::Uno::Float2 offset, ::g::Fuse::DrawContext* dc);
    static TextWindow* New2(::g::Fuse::Visual* parent, ::g::Fuse::Controls::FallbackTextEdit::LineCache* lineCache);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextEdit
