// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Char.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{struct Substring;}}}
namespace g{namespace Fuse{namespace Text{struct Substring__CharEnumerator;}}}

namespace g{
namespace Fuse{
namespace Text{

// private sealed class Substring.CharEnumerator :2101
// {
struct Substring__CharEnumerator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

Substring__CharEnumerator_type* Substring__CharEnumerator_typeof();
void Substring__CharEnumerator__ctor__fn(Substring__CharEnumerator* __this, ::g::Fuse::Text::Substring* text);
void Substring__CharEnumerator__get_Current_fn(Substring__CharEnumerator* __this, uChar* __retval);
void Substring__CharEnumerator__Dispose_fn(Substring__CharEnumerator* __this);
void Substring__CharEnumerator__MoveNext_fn(Substring__CharEnumerator* __this, bool* __retval);
void Substring__CharEnumerator__New1_fn(::g::Fuse::Text::Substring* text, Substring__CharEnumerator** __retval);
void Substring__CharEnumerator__Reset_fn(Substring__CharEnumerator* __this);

struct Substring__CharEnumerator : uObject
{
    int _index;
    uStrong< ::g::Fuse::Text::Substring*> _text;

    void ctor_(::g::Fuse::Text::Substring* text);
    uChar Current();
    void Dispose();
    bool MoveNext();
    void Reset();
    static Substring__CharEnumerator* New1(::g::Fuse::Text::Substring* text);
};
// }

}}} // ::g::Fuse::Text
