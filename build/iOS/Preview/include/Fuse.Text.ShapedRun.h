// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.Bidirectional.Run.h>
#include <Fuse.Text.PositionedGlyph.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{struct ShapedRun;}}}

namespace g{
namespace Fuse{
namespace Text{

// public sealed class ShapedRun :1862
// {
struct ShapedRun_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

ShapedRun_type* ShapedRun_typeof();
void ShapedRun__ctor__fn(ShapedRun* __this, ::g::Fuse::Text::Bidirectional::Run* run, uArray* parent);
void ShapedRun__ctor_1_fn(ShapedRun* __this, ::g::Fuse::Text::Bidirectional::Run* run, uArray* parent, int* start, int* count, int* clusterOffset);
void ShapedRun__GetEnumerator_fn(ShapedRun* __this, uObject** __retval);
void ShapedRun__get_Item_fn(ShapedRun* __this, int* index, ::g::Fuse::Text::PositionedGlyph* __retval);
void ShapedRun__Measure_fn(ShapedRun* __this, ::g::Uno::Float2* __retval);
void ShapedRun__New1_fn(::g::Fuse::Text::Bidirectional::Run* run, uArray* parent, ShapedRun** __retval);
void ShapedRun__New2_fn(::g::Fuse::Text::Bidirectional::Run* run, uArray* parent, int* start, int* count, int* clusterOffset, ShapedRun** __retval);
void ShapedRun__get_Run_fn(ShapedRun* __this, ::g::Fuse::Text::Bidirectional::Run* __retval);
void ShapedRun__SubShapedRun_fn(ShapedRun* __this, int* start, ShapedRun** __retval);
void ShapedRun__SubShapedRun1_fn(ShapedRun* __this, int* start, int* count, ShapedRun** __retval);

struct ShapedRun : uObject
{
    int _clusterOffset;
    ::g::Uno::Float2 _measureCache;
    uStrong<uArray*> _parent;
    ::g::Fuse::Text::Bidirectional::Run _run;
    int _start;
    int Count;

    void ctor_(::g::Fuse::Text::Bidirectional::Run run, uArray* parent);
    void ctor_1(::g::Fuse::Text::Bidirectional::Run run, uArray* parent, int start, int count, int clusterOffset);
    uObject* GetEnumerator();
    ::g::Fuse::Text::PositionedGlyph Item(int index);
    ::g::Uno::Float2 Measure();
    ::g::Fuse::Text::Bidirectional::Run Run();
    ShapedRun* SubShapedRun(int start);
    ShapedRun* SubShapedRun1(int start, int count);
    static ShapedRun* New1(::g::Fuse::Text::Bidirectional::Run run, uArray* parent);
    static ShapedRun* New2(::g::Fuse::Text::Bidirectional::Run run, uArray* parent, int start, int count, int clusterOffset);
};
// }

}}} // ::g::Fuse::Text
