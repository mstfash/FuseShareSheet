// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextrenderer/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct DefaultTextRenderer;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct WordWrapInfo;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextRenderer{

// internal sealed class WordWrapInfo :484
// {
uType* WordWrapInfo_typeof();
void WordWrapInfo__ctor__fn(WordWrapInfo* __this, ::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer* textRenderer, bool* isEnabled, float* wrapWidth, float* fontSize, float* lineHeight, float* lineSpacing, float* absoluteZoom);
void WordWrapInfo__Equals_fn(WordWrapInfo* __this, uObject* obj, bool* __retval);
void WordWrapInfo__GetHashCode_fn(WordWrapInfo* __this, int* __retval);
void WordWrapInfo__New1_fn(::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer* textRenderer, bool* isEnabled, float* wrapWidth, float* fontSize, float* lineHeight, float* lineSpacing, float* absoluteZoom, WordWrapInfo** __retval);

struct WordWrapInfo : uObject
{
    float AbsoluteZoom;
    float FontSize;
    bool IsEnabled;
    float LineHeight;
    float LineSpacing;
    uStrong< ::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer*> TextRenderer;
    float WrapWidth;

    void ctor_(::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer* textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom);
    static WordWrapInfo* New1(::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer* textRenderer, bool isEnabled, float wrapWidth, float fontSize, float lineHeight, float lineSpacing, float absoluteZoom);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextRenderer
