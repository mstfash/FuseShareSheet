// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.Substring.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{struct Substring__LineEnumerable;}}}

namespace g{
namespace Fuse{
namespace Text{

// private sealed class Substring.LineEnumerable :2145
// {
struct Substring__LineEnumerable_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

Substring__LineEnumerable_type* Substring__LineEnumerable_typeof();
void Substring__LineEnumerable__ctor__fn(Substring__LineEnumerable* __this, ::g::Fuse::Text::Substring* text);
void Substring__LineEnumerable__GetEnumerator_fn(Substring__LineEnumerable* __this, uObject** __retval);
void Substring__LineEnumerable__New1_fn(::g::Fuse::Text::Substring* text, Substring__LineEnumerable** __retval);

struct Substring__LineEnumerable : uObject
{
    uStrong< ::g::Fuse::Text::Substring*> _text;

    void ctor_(::g::Fuse::Text::Substring* text);
    uObject* GetEnumerator();
    static Substring__LineEnumerable* New1(::g::Fuse::Text::Substring* text);
};
// }

}}} // ::g::Fuse::Text
