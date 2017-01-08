// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{struct Run;}}}}
namespace g{namespace Fuse{namespace Text{struct PositionedRun;}}}
namespace g{namespace Fuse{namespace Text{struct ShapedRun;}}}

namespace g{
namespace Fuse{
namespace Text{

// internal sealed class PositionedRun :1428
// {
uType* PositionedRun_typeof();
void PositionedRun__ctor__fn(PositionedRun* __this, ::g::Fuse::Text::ShapedRun* shapedRun, ::g::Uno::Float2* position, ::g::Uno::Float2* measurements);
void PositionedRun__New1_fn(::g::Fuse::Text::ShapedRun* shapedRun, ::g::Uno::Float2* position, ::g::Uno::Float2* measurements, PositionedRun** __retval);
void PositionedRun__get_Run_fn(PositionedRun* __this, ::g::Fuse::Text::Bidirectional::Run* __retval);
void PositionedRun__Translate_fn(PositionedRun* positionedRun, ::g::Uno::Float2* translation, PositionedRun** __retval);

struct PositionedRun : uObject
{
    ::g::Uno::Float2 Measurements;
    ::g::Uno::Float2 Position;
    uStrong< ::g::Fuse::Text::ShapedRun*> ShapedRun;

    void ctor_(::g::Fuse::Text::ShapedRun* shapedRun, ::g::Uno::Float2 position, ::g::Uno::Float2 measurements);
    ::g::Fuse::Text::Bidirectional::Run Run();
    static PositionedRun* New1(::g::Fuse::Text::ShapedRun* shapedRun, ::g::Uno::Float2 position, ::g::Uno::Float2 measurements);
    static PositionedRun* Translate(PositionedRun* positionedRun, ::g::Uno::Float2 translation);
};
// }

}}} // ::g::Fuse::Text
