// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextedit/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextPosition;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextSpan;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextEdit{

// internal sealed class TextSpan :839
// {
uType* TextSpan_typeof();
void TextSpan__ctor__fn(TextSpan* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* start, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* end);
void TextSpan__Contains_fn(TextSpan* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, bool* __retval);
void TextSpan__Equals_fn(TextSpan* __this, uObject* obj, bool* __retval);
void TextSpan__GetHashCode_fn(TextSpan* __this, int* __retval);
void TextSpan__Intersection_fn(TextSpan* a, TextSpan* b, TextSpan** __retval);
void TextSpan__Intersects_fn(TextSpan* a, TextSpan* b, bool* __retval);
void TextSpan__New1_fn(::g::Fuse::Controls::FallbackTextEdit::TextPosition* start, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* end, TextSpan** __retval);
void TextSpan__op_Equality_fn(TextSpan* a, TextSpan* b, bool* __retval);
void TextSpan__op_Inequality_fn(TextSpan* a, TextSpan* b, bool* __retval);

struct TextSpan : uObject
{
    uStrong< ::g::Fuse::Controls::FallbackTextEdit::TextPosition*> End;
    uStrong< ::g::Fuse::Controls::FallbackTextEdit::TextPosition*> Start;

    void ctor_(::g::Fuse::Controls::FallbackTextEdit::TextPosition* start, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* end);
    bool Contains(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p);
    static TextSpan* Intersection(TextSpan* a, TextSpan* b);
    static bool Intersects(TextSpan* a, TextSpan* b);
    static TextSpan* New1(::g::Fuse::Controls::FallbackTextEdit::TextPosition* start, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* end);
    static bool op_Equality(TextSpan* a, TextSpan* b);
    static bool op_Inequality(TextSpan* a, TextSpan* b);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextEdit
