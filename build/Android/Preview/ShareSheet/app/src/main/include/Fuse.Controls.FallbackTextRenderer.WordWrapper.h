// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextrenderer/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct WordWrapInfo;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct WordWrapper;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct WordWrapperWord;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct WrappedLine;}}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextRenderer{

// internal static class WordWrapper :566
// {
uClassType* WordWrapper_typeof();
void WordWrapper__GetWords_fn(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, uString* text, ::g::Uno::Collections::List** __retval);
void WordWrapper__SplitWord_fn(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Uno::Collections::List* wrappedLines, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord* word, int* lineStartIndex, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord** __retval);
void WordWrapper__WrapLine_fn(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, uString* text, uArray** __retval);

struct WordWrapper : uObject
{
    static ::g::Uno::Collections::List* GetWords(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, uString* text);
    static ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord* SplitWord(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Uno::Collections::List* wrappedLines, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord* word, int* lineStartIndex);
    static uArray* WrapLine(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, uString* text);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextRenderer
