// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.PositionedGlyph.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{struct ShapedRun;}}}
namespace g{namespace Fuse{namespace Text{struct ShapedRun__PGEnumerator;}}}

namespace g{
namespace Fuse{
namespace Text{

// private sealed class ShapedRun.PGEnumerator :1943
// {
struct ShapedRun__PGEnumerator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

ShapedRun__PGEnumerator_type* ShapedRun__PGEnumerator_typeof();
void ShapedRun__PGEnumerator__ctor__fn(ShapedRun__PGEnumerator* __this, ::g::Fuse::Text::ShapedRun* shapedRun);
void ShapedRun__PGEnumerator__get_Current_fn(ShapedRun__PGEnumerator* __this, ::g::Fuse::Text::PositionedGlyph* __retval);
void ShapedRun__PGEnumerator__Dispose_fn(ShapedRun__PGEnumerator* __this);
void ShapedRun__PGEnumerator__MoveNext_fn(ShapedRun__PGEnumerator* __this, bool* __retval);
void ShapedRun__PGEnumerator__New1_fn(::g::Fuse::Text::ShapedRun* shapedRun, ShapedRun__PGEnumerator** __retval);
void ShapedRun__PGEnumerator__Reset_fn(ShapedRun__PGEnumerator* __this);

struct ShapedRun__PGEnumerator : uObject
{
    int _index;
    uStrong< ::g::Fuse::Text::ShapedRun*> _shapedRun;

    void ctor_(::g::Fuse::Text::ShapedRun* shapedRun);
    ::g::Fuse::Text::PositionedGlyph Current();
    void Dispose();
    bool MoveNext();
    void Reset();
    static ShapedRun__PGEnumerator* New1(::g::Fuse::Text::ShapedRun* shapedRun);
};
// }

}}} // ::g::Fuse::Text
