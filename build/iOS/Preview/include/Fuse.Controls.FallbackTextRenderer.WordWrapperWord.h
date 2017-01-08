// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextrenderer/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct WordWrapperWord;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextRenderer{

// internal sealed class WordWrapperWord :544
// {
uType* WordWrapperWord_typeof();
void WordWrapperWord__ctor__fn(WordWrapperWord* __this, uString* contents, uString* whitespace, int* startIndex, float* contentsWidth, float* totalContentsWidth);
void WordWrapperWord__get_EndIndex_fn(WordWrapperWord* __this, int* __retval);
void WordWrapperWord__New1_fn(uString* contents, uString* whitespace, int* startIndex, float* contentsWidth, float* totalContentsWidth, WordWrapperWord** __retval);

struct WordWrapperWord : uObject
{
    uStrong<uString*> Contents;
    float ContentsWidth;
    int StartIndex;
    uStrong<uString*> TotalContents;
    float TotalContentsWidth;
    uStrong<uString*> Whitespace;

    void ctor_(uString* contents, uString* whitespace, int startIndex, float contentsWidth, float totalContentsWidth);
    int EndIndex();
    static WordWrapperWord* New1(uString* contents, uString* whitespace, int startIndex, float contentsWidth, float totalContentsWidth);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextRenderer
