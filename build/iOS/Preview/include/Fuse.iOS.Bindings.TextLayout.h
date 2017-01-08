// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.iOS/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.Rect.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Fuse{namespace iOS{namespace Bindings{struct TextLayout;}}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// public sealed extern class TextLayout :563
// {
uType* TextLayout_typeof();
void TextLayout__ctor__fn(TextLayout* __this);
void TextLayout__AddNSTextContainer_fn(uObject* layoutManager, uObject* textContainer);
void TextLayout__ClearTextContainers_fn(uObject* layoutManager);
void TextLayout__CreateNSTextContainer_fn(float* width, float* height, uObject** __retval);
void TextLayout__CreateNSTextStorage_fn(uString* value, uObject* font, uObject* color, uObject* style, uObject** __retval);
void TextLayout__CreateRect_fn(::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Rect* __retval);
void TextLayout__Invalidate_fn(TextLayout* __this);
void TextLayout__New1_fn(TextLayout** __retval);
void TextLayout__SetNSParagraphStyleProperties_fn(uObject* style, int* alignment, int* wrapping, float* lineSpacing);
void TextLayout__SetNSTextStorage_fn(uObject* layoutManager, uObject* textStorage);
void TextLayout__ToUIColor_fn(::g::Uno::Float4* color, uObject** __retval);
void TextLayout__UpdateLayout_fn(TextLayout* __this, ::g::Fuse::Controls::TextControl* control, ::g::Uno::Float2* size, bool* useMin, bool* __retval);
void TextLayout__UsedRectForTextContainer_fn(uObject* layoutManager, uObject* textContainer, ::g::Uno::Rect* __retval);

struct TextLayout : uObject
{
    uStrong<uObject*> _font;
    bool _layoutMin;
    ::g::Uno::Float2 _layoutSize;
    bool _layoutValid;
    uStrong<uObject*> _style;
    uStrong<uObject*> _textColor;
    uStrong<uObject*> _textStorage;
    uStrong<uObject*> LayoutManager;
    ::g::Uno::Rect PixelBounds;
    uStrong<uObject*> TextContainer;

    void ctor_();
    void Invalidate();
    bool UpdateLayout(::g::Fuse::Controls::TextControl* control, ::g::Uno::Float2 size, bool useMin);
    static void AddNSTextContainer(uObject* layoutManager, uObject* textContainer);
    static void ClearTextContainers(uObject* layoutManager);
    static uObject* CreateNSTextContainer(float width, float height);
    static uObject* CreateNSTextStorage(uString* value, uObject* font, uObject* color, uObject* style);
    static ::g::Uno::Rect CreateRect(::g::Uno::Float2 pos, ::g::Uno::Float2 size);
    static TextLayout* New1();
    static void SetNSParagraphStyleProperties(uObject* style, int alignment, int wrapping, float lineSpacing);
    static void SetNSTextStorage(uObject* layoutManager, uObject* textStorage);
    static uObject* ToUIColor(::g::Uno::Float4 color);
    static ::g::Uno::Rect UsedRectForTextContainer(uObject* layoutManager, uObject* textContainer);
};
// }

}}}} // ::g::Fuse::iOS::Bindings
