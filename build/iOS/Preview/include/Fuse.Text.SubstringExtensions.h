// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{struct Substring;}}}
namespace g{namespace Fuse{namespace Text{struct SubstringExtensions;}}}

namespace g{
namespace Fuse{
namespace Text{

// internal static class SubstringExtensions :2236
// {
uClassType* SubstringExtensions_typeof();
void SubstringExtensions__CharStart_fn(::g::Fuse::Text::Substring* s, int* i, int* __retval);
void SubstringExtensions__CharStart1_fn(uString* s, int* i, int* __retval);
void SubstringExtensions__DeleteAt_fn(uString* s, int* index, uString** __retval);
void SubstringExtensions__DeleteSpan_fn(uString* s, int* start, int* end, uString** __retval);
void SubstringExtensions__InclusiveRange_fn(::g::Fuse::Text::Substring* s, int* start, int* end, ::g::Fuse::Text::Substring** __retval);
void SubstringExtensions__IsLeadingSurrogate_fn(uChar* c, bool* __retval);
void SubstringExtensions__IsTrailingSurrogate_fn(uChar* c, bool* __retval);
void SubstringExtensions__NextCharIndex_fn(uString* s, int* i, int* __retval);
void SubstringExtensions__PrevCharIndex_fn(uString* s, int* i, int* __retval);
void SubstringExtensions__SafeSubstring_fn(uString* s, int* start, uString** __retval);
void SubstringExtensions__SafeSubstring1_fn(uString* s, int* start, int* length, uString** __retval);
void SubstringExtensions__TrimLine_fn(::g::Fuse::Text::Substring* line, ::g::Fuse::Text::Substring** __retval);
void SubstringExtensions__TrimmedLines_fn(::g::Fuse::Text::Substring* str, uObject** __retval);

struct SubstringExtensions : uObject
{
    static int CharStart(::g::Fuse::Text::Substring* s, int i);
    static int CharStart1(uString* s, int i);
    static uString* DeleteAt(uString* s, int* index);
    static uString* DeleteSpan(uString* s, int start, int end);
    static ::g::Fuse::Text::Substring* InclusiveRange(::g::Fuse::Text::Substring* s, int start, int end);
    static bool IsLeadingSurrogate(uChar c);
    static bool IsTrailingSurrogate(uChar c);
    static int NextCharIndex(uString* s, int i);
    static int PrevCharIndex(uString* s, int i);
    static uString* SafeSubstring(uString* s, int start);
    static uString* SafeSubstring1(uString* s, int start, int length);
    static ::g::Fuse::Text::Substring* TrimLine(::g::Fuse::Text::Substring* line);
    static uObject* TrimmedLines(::g::Fuse::Text::Substring* str);
};
// }

}}} // ::g::Fuse::Text
