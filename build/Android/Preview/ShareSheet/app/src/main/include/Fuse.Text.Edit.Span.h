// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.Edit.Caret.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{namespace Edit{struct Span;}}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Edit{

// public struct Span :250
// {
uStructType* Span_typeof();
void Span__ctor__fn(Span* __this, ::g::Fuse::Text::Edit::Caret* a, ::g::Fuse::Text::Edit::Caret* b);
void Span__Contains_fn(Span* __this, ::g::Fuse::Text::Edit::Caret* c, bool* __retval);
void Span__Contains1_fn(Span* __this, Span* that, bool* __retval);
void Span__New1_fn(::g::Fuse::Text::Edit::Caret* a, ::g::Fuse::Text::Edit::Caret* b, Span* __retval);
void Span__ToString_fn(Span* __this, uType* __type, uString** __retval);

struct Span
{
    ::g::Fuse::Text::Edit::Caret Start;
    ::g::Fuse::Text::Edit::Caret End;

    void ctor_(::g::Fuse::Text::Edit::Caret a, ::g::Fuse::Text::Edit::Caret b);
    bool Contains(::g::Fuse::Text::Edit::Caret c);
    bool Contains1(Span that);
    uString* ToString(uType* __type) { uString* __retval; return Span__ToString_fn(this, __type, &__retval), __retval; }
};

Span Span__New1(::g::Fuse::Text::Edit::Caret a, ::g::Fuse::Text::Edit::Caret b);
// }

}}}} // ::g::Fuse::Text::Edit
