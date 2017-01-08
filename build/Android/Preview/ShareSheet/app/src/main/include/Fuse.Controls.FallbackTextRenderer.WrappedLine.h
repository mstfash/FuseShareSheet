// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextrenderer/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct WordWrapInfo;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct WrappedLine;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextRenderer{

// internal sealed class WrappedLine :673
// {
uType* WrappedLine_typeof();
void WrappedLine__ctor__fn(WrappedLine* __this, uString* text, int* lineTextStartOffset, float* yOffset, float* lineWidth);
void WrappedLine__BoundsToPos_fn(WrappedLine* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, float* p, int* __retval);
void WrappedLine__GetXOffset_fn(WrappedLine* __this, int* textAlignment, float* boundsWidth, float* absoluteZoom, float* __retval);
void WrappedLine__get_LineTextEndOffset_fn(WrappedLine* __this, int* __retval);
void WrappedLine__New1_fn(uString* text, int* lineTextStartOffset, float* yOffset, float* lineWidth, WrappedLine** __retval);
void WrappedLine__PosToBounds_fn(WrappedLine* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int* p, float* __retval);

struct WrappedLine : uObject
{
    int LineTextStartOffset;
    float LineWidth;
    uStrong<uString*> Text;
    float YOffset;

    void ctor_(uString* text, int lineTextStartOffset, float yOffset, float lineWidth);
    int BoundsToPos(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, float p);
    float GetXOffset(int textAlignment, float boundsWidth, float absoluteZoom);
    int LineTextEndOffset();
    float PosToBounds(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int p);
    static WrappedLine* New1(uString* text, int lineTextStartOffset, float yOffset, float lineWidth);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextRenderer
