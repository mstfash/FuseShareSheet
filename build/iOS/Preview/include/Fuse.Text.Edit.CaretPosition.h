// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{struct Run;}}}}
namespace g{namespace Fuse{namespace Text{namespace Edit{struct Caret;}}}}
namespace g{namespace Fuse{namespace Text{namespace Edit{struct CaretPosition;}}}}
namespace g{namespace Fuse{namespace Text{struct PositionedRun;}}}
namespace g{namespace Fuse{namespace Text{struct ShapedRun;}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Text{
namespace Edit{

// public static class CaretPosition :285
// {
uClassType* CaretPosition_typeof();
void CaretPosition__FromRowColumn_fn(::g::Uno::Int2* pos, int* side, ::g::Uno::Collections::List* runs, ::g::Uno::Collections::List* lines, uString* source, ::g::Fuse::Text::Edit::Caret* __retval);
void CaretPosition__GetClosest_fn(::g::Uno::Float2* pos, ::g::Fuse::Text::PositionedRun* run, ::g::Fuse::Text::Edit::Caret* __retval);
void CaretPosition__GetClosest1_fn(::g::Uno::Float2* pos, ::g::Uno::Collections::List* runs, float* lineHeight, uString* source, ::g::Fuse::Text::Edit::Caret* __retval);
void CaretPosition__GetRun_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, ::g::Fuse::Text::PositionedRun** __retval);
void CaretPosition__GetVisualPosition_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, ::g::Uno::Float2* __retval);
void CaretPosition__GetVisualPositionInnerLTR_fn(int* cluster, int* side, int* endCluster, ::g::Uno::Float2* measurements, ::g::Fuse::Text::ShapedRun* glyphs, ::g::Uno::Float2* __retval);
void CaretPosition__GetVisualPositionInnerRTL_fn(int* cluster, int* side, int* endCluster, ::g::Uno::Float2* measurements, ::g::Fuse::Text::ShapedRun* glyphs, ::g::Uno::Float2* __retval);
void CaretPosition__IsNewlineRun_fn(::g::Fuse::Text::Bidirectional::Run* run, bool* __retval);
void CaretPosition__LeftMost_fn(::g::Uno::Collections::List* runs, ::g::Fuse::Text::Edit::Caret* __retval);
void CaretPosition__MoveDown_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, ::g::Fuse::Text::Edit::Caret* __retval);
void CaretPosition__MoveLeft_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, ::g::Fuse::Text::Edit::Caret* __retval);
void CaretPosition__MoveRight_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, ::g::Fuse::Text::Edit::Caret* __retval);
void CaretPosition__MoveUp_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, ::g::Fuse::Text::Edit::Caret* __retval);
void CaretPosition__RightMost_fn(::g::Uno::Collections::List* runs, ::g::Fuse::Text::Edit::Caret* __retval);
void CaretPosition__RunIndices_fn(::g::Uno::Collections::List* runs, uString* source, uArray** __retval);
void CaretPosition__SquaredDist_fn(::g::Uno::Float2* p, ::g::Uno::Float2* q, float* __retval);
void CaretPosition__SquaredDistToLineSegment_fn(::g::Uno::Float2* p, ::g::Uno::Float2* start, ::g::Uno::Float2* end, float* __retval);
void CaretPosition__ToLogical_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, int* __retval);
void CaretPosition__ToRowColumn_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* lines, uString* source, ::g::Uno::Int2* __retval);
void CaretPosition__ValidateCaretPos_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, ::g::Fuse::Text::Edit::Caret* __retval);

struct CaretPosition : uObject
{
    static ::g::Fuse::Text::Edit::Caret FromRowColumn(::g::Uno::Int2 pos, int side, ::g::Uno::Collections::List* runs, ::g::Uno::Collections::List* lines, uString* source);
    static ::g::Fuse::Text::Edit::Caret GetClosest(::g::Uno::Float2 pos, ::g::Fuse::Text::PositionedRun* run);
    static ::g::Fuse::Text::Edit::Caret GetClosest1(::g::Uno::Float2 pos, ::g::Uno::Collections::List* runs, float lineHeight, uString* source);
    static ::g::Fuse::Text::PositionedRun* GetRun(::g::Fuse::Text::Edit::Caret caret, ::g::Uno::Collections::List* runs, uArray* runIndices);
    static ::g::Uno::Float2 GetVisualPosition(::g::Fuse::Text::Edit::Caret caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source);
    static ::g::Uno::Float2 GetVisualPositionInnerLTR(int cluster, int side, int endCluster, ::g::Uno::Float2 measurements, ::g::Fuse::Text::ShapedRun* glyphs);
    static ::g::Uno::Float2 GetVisualPositionInnerRTL(int cluster, int side, int endCluster, ::g::Uno::Float2 measurements, ::g::Fuse::Text::ShapedRun* glyphs);
    static bool IsNewlineRun(::g::Fuse::Text::Bidirectional::Run run);
    static ::g::Fuse::Text::Edit::Caret LeftMost(::g::Uno::Collections::List* runs);
    static ::g::Fuse::Text::Edit::Caret MoveDown(::g::Fuse::Text::Edit::Caret caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source);
    static ::g::Fuse::Text::Edit::Caret MoveLeft(::g::Fuse::Text::Edit::Caret caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source);
    static ::g::Fuse::Text::Edit::Caret MoveRight(::g::Fuse::Text::Edit::Caret caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source);
    static ::g::Fuse::Text::Edit::Caret MoveUp(::g::Fuse::Text::Edit::Caret caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source);
    static ::g::Fuse::Text::Edit::Caret RightMost(::g::Uno::Collections::List* runs);
    static uArray* RunIndices(::g::Uno::Collections::List* runs, uString* source);
    static float SquaredDist(::g::Uno::Float2 p, ::g::Uno::Float2 q);
    static float SquaredDistToLineSegment(::g::Uno::Float2 p, ::g::Uno::Float2 start, ::g::Uno::Float2 end);
    static int ToLogical(::g::Fuse::Text::Edit::Caret caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source);
    static ::g::Uno::Int2 ToRowColumn(::g::Fuse::Text::Edit::Caret caret, ::g::Uno::Collections::List* lines, uString* source);
    static ::g::Fuse::Text::Edit::Caret ValidateCaretPos(::g::Fuse::Text::Edit::Caret caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source);
};
// }

}}}} // ::g::Fuse::Text::Edit
