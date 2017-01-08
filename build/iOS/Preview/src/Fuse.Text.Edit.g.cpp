// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Text.Bidirectional.Run.h>
#include <Fuse.Text.Edit.Caret.h>
#include <Fuse.Text.Edit.CaretPosition.h>
#include <Fuse.Text.Edit.CaretSide.h>
#include <Fuse.Text.Edit.Edit.h>
#include <Fuse.Text.Edit.Selection.h>
#include <Fuse.Text.Edit.Span.h>
#include <Fuse.Text.PositionedGlyph.h>
#include <Fuse.Text.PositionedRun.h>
#include <Fuse.Text.ShapedRun.h>
#include <Fuse.Text.Substring.h>
#include <Fuse.Text.SubstringExtensions.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Geometry.Collision.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
static uString* STRINGS[4];
static uType* TYPES[8];

namespace g{
namespace Fuse{
namespace Text{
namespace Edit{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public struct Caret :198
// {
static void Caret_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Caret(");
    ::STRINGS[1] = uString::Const(", ");
    ::STRINGS[2] = uString::Const(")");
    ::TYPES[0] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::TYPES[0/*int*/], offsetof(::g::Fuse::Text::Edit::Caret, Pos), 0,
        ::g::Fuse::Text::Edit::CaretSide_typeof(), offsetof(::g::Fuse::Text::Edit::Caret, Side), 0);
    type->Reflection.SetFields(2,
        new uField("Pos", 0),
        new uField("Side", 1));
    type->Reflection.SetFunctions(3,
        new uFunction("Max", NULL, (void*)Caret__Max_fn, 0, true, type, 2, type, type),
        new uFunction("Min", NULL, (void*)Caret__Min_fn, 0, true, type, 2, type, type),
        new uFunction(".ctor", NULL, (void*)Caret__New1_fn, 0, true, type, 2, ::TYPES[0/*int*/], ::g::Fuse::Text::Edit::CaretSide_typeof()));
}

uStructType* Caret_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Caret);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Text.Edit.Caret", options);
    type->fp_build_ = Caret_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Caret__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Caret__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Caret__ToString_fn;
    return type;
}

// public Caret(int pos, Fuse.Text.Edit.CaretSide side) :203
void Caret__ctor__fn(Caret* __this, int* pos, int* side)
{
    __this->ctor_(*pos, *side);
}

// public override sealed bool Equals(object o) :209
void Caret__Equals_fn(Caret* __this, uType* __type, uObject* o, bool* __retval)
{
    uStackFrame __("Fuse.Text.Edit.Caret", "Equals(object)");
    return *__retval = uIs(o, __type) ? Caret__op_Equality(*__this, uUnbox<Caret>(__type, o)) : false, void();
}

// public override sealed int GetHashCode() :216
void Caret__GetHashCode_fn(Caret* __this, uType* __type, int* __retval)
{
    uStackFrame __("Fuse.Text.Edit.Caret", "GetHashCode()");
    int ind1;
    int ind2;
    int hash = 17;
    hash = (hash * 23) + ::g::Uno::Int::GetHashCode((ind1 = __this->Pos, ind1), ::TYPES[0/*int*/]);
    hash = (hash * 23) + ::g::Uno::Int::GetHashCode((ind2 = __this->Side, ind2), ::TYPES[0/*int*/]);
    return *__retval = hash, void();
}

// public static Fuse.Text.Edit.Caret Max(Fuse.Text.Edit.Caret a, Fuse.Text.Edit.Caret b) :247
void Caret__Max_fn(Caret* a, Caret* b, Caret* __retval)
{
    *__retval = Caret__Max(*a, *b);
}

// public static Fuse.Text.Edit.Caret Min(Fuse.Text.Edit.Caret a, Fuse.Text.Edit.Caret b) :246
void Caret__Min_fn(Caret* a, Caret* b, Caret* __retval)
{
    *__retval = Caret__Min(*a, *b);
}

// public Caret New(int pos, Fuse.Text.Edit.CaretSide side) :203
void Caret__New1_fn(int* pos, int* side, Caret* __retval)
{
    *__retval = Caret__New1(*pos, *side);
}

// public static operator ==(Fuse.Text.Edit.Caret a, Fuse.Text.Edit.Caret b) :224
void Caret__op_Equality_fn(Caret* a, Caret* b, bool* __retval)
{
    *__retval = Caret__op_Equality(*a, *b);
}

// public static operator >(Fuse.Text.Edit.Caret a, Fuse.Text.Edit.Caret b) :244
void Caret__op_GreaterThan_fn(Caret* a, Caret* b, bool* __retval)
{
    *__retval = Caret__op_GreaterThan(*a, *b);
}

// public static operator >=(Fuse.Text.Edit.Caret a, Fuse.Text.Edit.Caret b) :245
void Caret__op_GreaterThanOrEqual_fn(Caret* a, Caret* b, bool* __retval)
{
    *__retval = Caret__op_GreaterThanOrEqual(*a, *b);
}

// public static operator !=(Fuse.Text.Edit.Caret a, Fuse.Text.Edit.Caret b) :242
void Caret__op_Inequality_fn(Caret* a, Caret* b, bool* __retval)
{
    *__retval = Caret__op_Inequality(*a, *b);
}

// public static operator <(Fuse.Text.Edit.Caret a, Fuse.Text.Edit.Caret b) :229
void Caret__op_LessThan_fn(Caret* a, Caret* b, bool* __retval)
{
    *__retval = Caret__op_LessThan(*a, *b);
}

// public static operator <=(Fuse.Text.Edit.Caret a, Fuse.Text.Edit.Caret b) :243
void Caret__op_LessThanOrEqual_fn(Caret* a, Caret* b, bool* __retval)
{
    *__retval = Caret__op_LessThanOrEqual(*a, *b);
}

// public override sealed string ToString() :236
void Caret__ToString_fn(Caret* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Fuse.Text.Edit.Caret", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Caret("*/], uBox<int>(::TYPES[0/*int*/], __this->Pos)), ::STRINGS[1/*", "*/]), uBox<int>(::g::Fuse::Text::Edit::CaretSide_typeof(), __this->Side)), ::STRINGS[2/*")"*/]), void();
}

// public Caret(int pos, Fuse.Text.Edit.CaretSide side) [instance] :203
void Caret::ctor_(int pos, int side)
{
    Pos = pos;
    Side = side;
}

// public static Fuse.Text.Edit.Caret Max(Fuse.Text.Edit.Caret a, Fuse.Text.Edit.Caret b) [static] :247
Caret Caret__Max(Caret a, Caret b)
{
    return Caret__op_LessThan(b, a) ? a : b;
}

// public static Fuse.Text.Edit.Caret Min(Fuse.Text.Edit.Caret a, Fuse.Text.Edit.Caret b) [static] :246
Caret Caret__Min(Caret a, Caret b)
{
    return Caret__op_LessThan(a, b) ? a : b;
}

// public Caret New(int pos, Fuse.Text.Edit.CaretSide side) [static] :203
Caret Caret__New1(int pos, int side)
{
    Caret obj3;
    obj3.ctor_(pos, side);
    return obj3;
}

// public static operator ==(Fuse.Text.Edit.Caret a, Fuse.Text.Edit.Caret b) [static] :224
bool Caret__op_Equality(Caret a, Caret b)
{
    return (a.Pos == b.Pos) && (a.Side == b.Side);
}

// public static operator >(Fuse.Text.Edit.Caret a, Fuse.Text.Edit.Caret b) [static] :244
bool Caret__op_GreaterThan(Caret a, Caret b)
{
    return Caret__op_LessThan(b, a);
}

// public static operator >=(Fuse.Text.Edit.Caret a, Fuse.Text.Edit.Caret b) [static] :245
bool Caret__op_GreaterThanOrEqual(Caret a, Caret b)
{
    return Caret__op_Equality(a, b) || Caret__op_GreaterThan(a, b);
}

// public static operator !=(Fuse.Text.Edit.Caret a, Fuse.Text.Edit.Caret b) [static] :242
bool Caret__op_Inequality(Caret a, Caret b)
{
    return !Caret__op_Equality(a, b);
}

// public static operator <(Fuse.Text.Edit.Caret a, Fuse.Text.Edit.Caret b) [static] :229
bool Caret__op_LessThan(Caret a, Caret b)
{
    return (a.Pos == b.Pos) ? a.Side < b.Side : a.Pos < b.Pos;
}

// public static operator <=(Fuse.Text.Edit.Caret a, Fuse.Text.Edit.Caret b) [static] :243
bool Caret__op_LessThanOrEqual(Caret a, Caret b)
{
    return Caret__op_Equality(a, b) || Caret__op_LessThan(a, b);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public static class CaretPosition :285
// {
static void CaretPosition_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[2] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Text::PositionedGlyph_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(12/*ToList<Fuse.Text.Substring>*/, ::g::Fuse::Text::Substring_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Int_typeof()->Array();
    type->Reflection.SetFunctions(9,
        new uFunction("GetClosest", NULL, (void*)CaretPosition__GetClosest1_fn, 0, true, ::g::Fuse::Text::Edit::Caret_typeof(), 4, ::g::Uno::Float2_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL), ::g::Uno::Float_typeof(), ::g::Uno::String_typeof()),
        new uFunction("GetVisualPosition", NULL, (void*)CaretPosition__GetVisualPosition_fn, 0, true, ::g::Uno::Float2_typeof(), 4, ::g::Fuse::Text::Edit::Caret_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL), ::TYPES[4/*int[]*/], ::g::Uno::String_typeof()),
        new uFunction("LeftMost", NULL, (void*)CaretPosition__LeftMost_fn, 0, true, ::g::Fuse::Text::Edit::Caret_typeof(), 1, ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL)),
        new uFunction("MoveDown", NULL, (void*)CaretPosition__MoveDown_fn, 0, true, ::g::Fuse::Text::Edit::Caret_typeof(), 4, ::g::Fuse::Text::Edit::Caret_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL), ::TYPES[4/*int[]*/], ::g::Uno::String_typeof()),
        new uFunction("MoveLeft", NULL, (void*)CaretPosition__MoveLeft_fn, 0, true, ::g::Fuse::Text::Edit::Caret_typeof(), 4, ::g::Fuse::Text::Edit::Caret_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL), ::TYPES[4/*int[]*/], ::g::Uno::String_typeof()),
        new uFunction("MoveRight", NULL, (void*)CaretPosition__MoveRight_fn, 0, true, ::g::Fuse::Text::Edit::Caret_typeof(), 4, ::g::Fuse::Text::Edit::Caret_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL), ::TYPES[4/*int[]*/], ::g::Uno::String_typeof()),
        new uFunction("MoveUp", NULL, (void*)CaretPosition__MoveUp_fn, 0, true, ::g::Fuse::Text::Edit::Caret_typeof(), 4, ::g::Fuse::Text::Edit::Caret_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL), ::TYPES[4/*int[]*/], ::g::Uno::String_typeof()),
        new uFunction("RightMost", NULL, (void*)CaretPosition__RightMost_fn, 0, true, ::g::Fuse::Text::Edit::Caret_typeof(), 1, ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL)),
        new uFunction("RunIndices", NULL, (void*)CaretPosition__RunIndices_fn, 0, true, ::TYPES[4/*int[]*/], 2, ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL), ::g::Uno::String_typeof()));
}

uClassType* CaretPosition_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Edit.CaretPosition", options);
    type->fp_build_ = CaretPosition_build;
    return type;
}

// private static Fuse.Text.Edit.Caret FromRowColumn(int2 pos, Fuse.Text.Edit.CaretSide side, Uno.Collections.List<Fuse.Text.PositionedRun> runs, Uno.Collections.List<Fuse.Text.Substring> lines, string source) :430
void CaretPosition__FromRowColumn_fn(::g::Uno::Int2* pos, int* side, ::g::Uno::Collections::List* runs, ::g::Uno::Collections::List* lines, uString* source, ::g::Fuse::Text::Edit::Caret* __retval)
{
    *__retval = CaretPosition::FromRowColumn(*pos, *side, runs, lines, source);
}

// private static Fuse.Text.Edit.Caret GetClosest(float2 pos, Fuse.Text.PositionedRun run) :654
void CaretPosition__GetClosest_fn(::g::Uno::Float2* pos, ::g::Fuse::Text::PositionedRun* run, ::g::Fuse::Text::Edit::Caret* __retval)
{
    *__retval = CaretPosition::GetClosest(*pos, run);
}

// public static Fuse.Text.Edit.Caret GetClosest(float2 pos, Uno.Collections.List<Fuse.Text.PositionedRun> runs, float lineHeight, string source) :613
void CaretPosition__GetClosest1_fn(::g::Uno::Float2* pos, ::g::Uno::Collections::List* runs, float* lineHeight, uString* source, ::g::Fuse::Text::Edit::Caret* __retval)
{
    *__retval = CaretPosition::GetClosest1(*pos, runs, *lineHeight, source);
}

// internal static Fuse.Text.PositionedRun GetRun(Fuse.Text.Edit.Caret caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices) :485
void CaretPosition__GetRun_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, ::g::Fuse::Text::PositionedRun** __retval)
{
    *__retval = CaretPosition::GetRun(*caret, runs, runIndices);
}

// public static float2 GetVisualPosition(Fuse.Text.Edit.Caret caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) :499
void CaretPosition__GetVisualPosition_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, ::g::Uno::Float2* __retval)
{
    *__retval = CaretPosition::GetVisualPosition(*caret, runs, runIndices, source);
}

// private static float2 GetVisualPositionInnerLTR(int cluster, Fuse.Text.Edit.CaretSide side, int endCluster, float2 measurements, Fuse.Text.ShapedRun glyphs) :529
void CaretPosition__GetVisualPositionInnerLTR_fn(int* cluster, int* side, int* endCluster, ::g::Uno::Float2* measurements, ::g::Fuse::Text::ShapedRun* glyphs, ::g::Uno::Float2* __retval)
{
    *__retval = CaretPosition::GetVisualPositionInnerLTR(*cluster, *side, *endCluster, *measurements, glyphs);
}

// private static float2 GetVisualPositionInnerRTL(int cluster, Fuse.Text.Edit.CaretSide side, int endCluster, float2 measurements, Fuse.Text.ShapedRun glyphs) :571
void CaretPosition__GetVisualPositionInnerRTL_fn(int* cluster, int* side, int* endCluster, ::g::Uno::Float2* measurements, ::g::Fuse::Text::ShapedRun* glyphs, ::g::Uno::Float2* __retval)
{
    *__retval = CaretPosition::GetVisualPositionInnerRTL(*cluster, *side, *endCluster, *measurements, glyphs);
}

// private static bool IsNewlineRun(Fuse.Text.Bidirectional.Run run) :445
void CaretPosition__IsNewlineRun_fn(::g::Fuse::Text::Bidirectional::Run* run, bool* __retval)
{
    *__retval = CaretPosition::IsNewlineRun(*run);
}

// public static Fuse.Text.Edit.Caret LeftMost(Uno.Collections.List<Fuse.Text.PositionedRun> runs) :304
void CaretPosition__LeftMost_fn(::g::Uno::Collections::List* runs, ::g::Fuse::Text::Edit::Caret* __retval)
{
    *__retval = CaretPosition::LeftMost(runs);
}

// public static Fuse.Text.Edit.Caret MoveDown(Fuse.Text.Edit.Caret caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) :410
void CaretPosition__MoveDown_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, ::g::Fuse::Text::Edit::Caret* __retval)
{
    *__retval = CaretPosition::MoveDown(*caret, runs, runIndices, source);
}

// public static Fuse.Text.Edit.Caret MoveLeft(Fuse.Text.Edit.Caret caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) :368
void CaretPosition__MoveLeft_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, ::g::Fuse::Text::Edit::Caret* __retval)
{
    *__retval = CaretPosition::MoveLeft(*caret, runs, runIndices, source);
}

// public static Fuse.Text.Edit.Caret MoveRight(Fuse.Text.Edit.Caret caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) :335
void CaretPosition__MoveRight_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, ::g::Fuse::Text::Edit::Caret* __retval)
{
    *__retval = CaretPosition::MoveRight(*caret, runs, runIndices, source);
}

// public static Fuse.Text.Edit.Caret MoveUp(Fuse.Text.Edit.Caret caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) :401
void CaretPosition__MoveUp_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, ::g::Fuse::Text::Edit::Caret* __retval)
{
    *__retval = CaretPosition::MoveUp(*caret, runs, runIndices, source);
}

// public static Fuse.Text.Edit.Caret RightMost(Uno.Collections.List<Fuse.Text.PositionedRun> runs) :311
void CaretPosition__RightMost_fn(::g::Uno::Collections::List* runs, ::g::Fuse::Text::Edit::Caret* __retval)
{
    *__retval = CaretPosition::RightMost(runs);
}

// public static int[] RunIndices(Uno.Collections.List<Fuse.Text.PositionedRun> runs, string source) :287
void CaretPosition__RunIndices_fn(::g::Uno::Collections::List* runs, uString* source, uArray** __retval)
{
    *__retval = CaretPosition::RunIndices(runs, source);
}

// private static float SquaredDist(float2 p, float2 q) :704
void CaretPosition__SquaredDist_fn(::g::Uno::Float2* p, ::g::Uno::Float2* q, float* __retval)
{
    *__retval = CaretPosition::SquaredDist(*p, *q);
}

// private static float SquaredDistToLineSegment(float2 p, float2 start, float2 end) :689
void CaretPosition__SquaredDistToLineSegment_fn(::g::Uno::Float2* p, ::g::Uno::Float2* start, ::g::Uno::Float2* end, float* __retval)
{
    *__retval = CaretPosition::SquaredDistToLineSegment(*p, *start, *end);
}

// internal static int ToLogical(Fuse.Text.Edit.Caret caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) :318
void CaretPosition__ToLogical_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, int* __retval)
{
    *__retval = CaretPosition::ToLogical(*caret, runs, runIndices, source);
}

// private static int2 ToRowColumn(Fuse.Text.Edit.Caret caret, Uno.Collections.List<Fuse.Text.Substring> lines, string source) :419
void CaretPosition__ToRowColumn_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* lines, uString* source, ::g::Uno::Int2* __retval)
{
    *__retval = CaretPosition::ToRowColumn(*caret, lines, source);
}

// internal static Fuse.Text.Edit.Caret ValidateCaretPos(Fuse.Text.Edit.Caret caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) :451
void CaretPosition__ValidateCaretPos_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, ::g::Fuse::Text::Edit::Caret* __retval)
{
    *__retval = CaretPosition::ValidateCaretPos(*caret, runs, runIndices, source);
}

// private static Fuse.Text.Edit.Caret FromRowColumn(int2 pos, Fuse.Text.Edit.CaretSide side, Uno.Collections.List<Fuse.Text.PositionedRun> runs, Uno.Collections.List<Fuse.Text.Substring> lines, string source) [static] :430
::g::Fuse::Text::Edit::Caret CaretPosition::FromRowColumn(::g::Uno::Int2 pos, int side, ::g::Uno::Collections::List* runs, ::g::Uno::Collections::List* lines, uString* source)
{
    uStackFrame __("Fuse.Text.Edit.CaretPosition", "FromRowColumn(int2,Fuse.Text.Edit.CaretSide,Uno.Collections.List<Fuse.Text.PositionedRun>,Uno.Collections.List<Fuse.Text.Substring>,string)");
    ::g::Fuse::Text::Substring* ret3;

    if (pos.Y < 0)
        return CaretPosition::LeftMost(runs);

    if (pos.Y >= uPtr(lines)->Count())
        return CaretPosition::RightMost(runs);

    ::g::Fuse::Text::Substring* line = (::g::Uno::Collections::List__get_Item_fn(uPtr(lines), uCRef<int>(pos.Y), &ret3), ret3);

    if (pos.X < 0)
        return ::g::Fuse::Text::Edit::Caret__New1(uPtr(line)->_start, 0);

    if (pos.X >= uPtr(line)->Length)
        return ::g::Fuse::Text::Edit::Caret__New1(::g::Fuse::Text::SubstringExtensions::PrevCharIndex(source, uPtr(line)->_start + uPtr(line)->Length), 1);

    return ::g::Fuse::Text::Edit::Caret__New1(::g::Fuse::Text::SubstringExtensions::CharStart1(source, uPtr(line)->_start + pos.X), side);
}

// private static Fuse.Text.Edit.Caret GetClosest(float2 pos, Fuse.Text.PositionedRun run) [static] :654
::g::Fuse::Text::Edit::Caret CaretPosition::GetClosest(::g::Uno::Float2 pos, ::g::Fuse::Text::PositionedRun* run)
{
    uStackFrame __("Fuse.Text.Edit.CaretPosition", "GetClosest(float2,Fuse.Text.PositionedRun)");
    ::g::Fuse::Text::PositionedGlyph ret4;
    ::g::Fuse::Text::PositionedGlyph ret5;
    ::g::Uno::Float2 position = uPtr(run)->Position;
    float minDist = 3.402823e+38f;
    int result = 0;

    if (run->Run().IsLeftToRight())
    {
        for (uObject* enum1 = uPtr(uPtr(run)->ShapedRun)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[1/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Text::PositionedGlyph glyph = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[2/*Uno.Collections.IEnumerator<Fuse.Text.PositionedGlyph>*/]), &ret4), ret4);
            float dist = CaretPosition::SquaredDist(pos, position);

            if (dist < minDist)
            {
                minDist = dist;
                result = uPtr(run)->Run().LogicalStart() + glyph.Cluster;
            }

            position = ::g::Uno::Float2__op_Addition2(position, glyph.Advance());
        }

        return ::g::Fuse::Text::Edit::Caret__New1(result, 0);
    }
    else
    {
        for (uObject* enum2 = uPtr(uPtr(run)->ShapedRun)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[1/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Text::PositionedGlyph glyph1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[2/*Uno.Collections.IEnumerator<Fuse.Text.PositionedGlyph>*/]), &ret5), ret5);
            position = ::g::Uno::Float2__op_Addition2(position, glyph1.Advance());
            float dist1 = CaretPosition::SquaredDist(pos, position);

            if (dist1 < minDist)
            {
                minDist = dist1;
                result = uPtr(run)->Run().LogicalStart() + glyph1.Cluster;
            }
        }

        return ::g::Fuse::Text::Edit::Caret__New1(result, 1);
    }
}

// public static Fuse.Text.Edit.Caret GetClosest(float2 pos, Uno.Collections.List<Fuse.Text.PositionedRun> runs, float lineHeight, string source) [static] :613
::g::Fuse::Text::Edit::Caret CaretPosition::GetClosest1(::g::Uno::Float2 pos, ::g::Uno::Collections::List* runs, float lineHeight, uString* source)
{
    uStackFrame __("Fuse.Text.Edit.CaretPosition", "GetClosest(float2,Uno.Collections.List<Fuse.Text.PositionedRun>,float,string)");
    ::g::Fuse::Text::PositionedRun* ret6;
    ::g::Fuse::Text::PositionedRun* ret7;

    if (uPtr(runs)->Count() == 0)
        return ::g::Fuse::Text::Edit::Caret__New1(0, 0);

    pos = ::g::Uno::Float2__op_Subtraction2(pos, ::g::Uno::Float2__New2(0.0f, lineHeight / 2.0f));
    int closestRunIndex = 0;
    float minDist = 3.402823e+38f;

    for (int i = 0; i < uPtr(runs)->Count(); ++i)
    {
        ::g::Fuse::Text::PositionedRun* run = (::g::Uno::Collections::List__get_Item_fn(uPtr(runs), uCRef<int>(i), &ret6), ret6);
        float dist = CaretPosition::SquaredDistToLineSegment(pos, uPtr(run)->Position, ::g::Uno::Float2__op_Addition2(uPtr(run)->Position, uPtr(run)->Measurements));

        if (dist < minDist)
        {
            closestRunIndex = i;
            minDist = dist;
        }
    }

    ::g::Fuse::Text::PositionedRun* closestRun = (::g::Uno::Collections::List__get_Item_fn(uPtr(runs), uCRef<int>(closestRunIndex), &ret7), ret7);
    ::g::Uno::Float2 runPosition = uPtr(closestRun)->Position;

    if (pos.X < runPosition.X)
        return ::g::Fuse::Text::Edit::Caret__New1(uPtr(closestRun)->Run().VisualLeft(), 0);

    ::g::Uno::Float2 runMeasurements = closestRun->Measurements;

    if (pos.X > (runPosition.X + runMeasurements.X))
        return ::g::Fuse::Text::Edit::Caret__New1(uPtr(closestRun)->Run().VisualRight(), 1);

    return CaretPosition::GetClosest(pos, closestRun);
}

// internal static Fuse.Text.PositionedRun GetRun(Fuse.Text.Edit.Caret caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices) [static] :485
::g::Fuse::Text::PositionedRun* CaretPosition::GetRun(::g::Fuse::Text::Edit::Caret caret, ::g::Uno::Collections::List* runs, uArray* runIndices)
{
    uStackFrame __("Fuse.Text.Edit.CaretPosition", "GetRun(Fuse.Text.Edit.Caret,Uno.Collections.List<Fuse.Text.PositionedRun>,int[])");
    ::g::Fuse::Text::PositionedRun* ret8;

    if ((caret.Pos >= 0) && (caret.Pos < uPtr(runIndices)->Length()))
    {
        int runIndex = uPtr(runIndices)->Item<int>(caret.Pos);

        if ((runIndex >= 0) && (runIndex < uPtr(runs)->Count()))
            return (::g::Uno::Collections::List__get_Item_fn(uPtr(runs), uCRef<int>(runIndex), &ret8), ret8);
    }

    return NULL;
}

// public static float2 GetVisualPosition(Fuse.Text.Edit.Caret caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) [static] :499
::g::Uno::Float2 CaretPosition::GetVisualPosition(::g::Fuse::Text::Edit::Caret caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source)
{
    uStackFrame __("Fuse.Text.Edit.CaretPosition", "GetVisualPosition(Fuse.Text.Edit.Caret,Uno.Collections.List<Fuse.Text.PositionedRun>,int[],string)");
    caret = CaretPosition::ValidateCaretPos(caret, runs, runIndices, source);
    ::g::Fuse::Text::PositionedRun* prun = CaretPosition::GetRun(caret, runs, runIndices);

    if (prun == NULL)
        return ::g::Uno::Float2__New1(0.0f);

    ::g::Fuse::Text::Bidirectional::Run run = uPtr(prun)->Run();
    int cluster = caret.Pos - run.LogicalStart();
    int endCluster = run.LastLogicalIndex() - run.LogicalStart();
    return ::g::Uno::Float2__op_Addition2(prun->Position, run.IsLeftToRight() ? CaretPosition::GetVisualPositionInnerLTR(cluster, caret.Side, endCluster, prun->Measurements, prun->ShapedRun) : CaretPosition::GetVisualPositionInnerRTL(cluster, caret.Side, endCluster, prun->Measurements, prun->ShapedRun));
}

// private static float2 GetVisualPositionInnerLTR(int cluster, Fuse.Text.Edit.CaretSide side, int endCluster, float2 measurements, Fuse.Text.ShapedRun glyphs) [static] :529
::g::Uno::Float2 CaretPosition::GetVisualPositionInnerLTR(int cluster, int side, int endCluster, ::g::Uno::Float2 measurements, ::g::Fuse::Text::ShapedRun* glyphs)
{
    uStackFrame __("Fuse.Text.Edit.CaretPosition", "GetVisualPositionInnerLTR(int,Fuse.Text.Edit.CaretSide,int,float2,Fuse.Text.ShapedRun)");
    int leftCluster = 0;
    ::g::Uno::Float2 leftClusterPos = ::g::Uno::Float2__New1(0.0f);
    int rightCluster = endCluster;
    ::g::Uno::Float2 rightClusterPos = measurements;
    ::g::Uno::Float2 pos = ::g::Uno::Float2__New1(0.0f);

    for (int i = 0; i < uPtr(glyphs)->Count; ++i)
    {
        ::g::Fuse::Text::PositionedGlyph glyph = uPtr(glyphs)->Item(i);
        ::g::Uno::Float2 thisPos = (side == 1) ? ::g::Uno::Float2__op_Addition2(pos, glyph.Advance()) : pos;

        if (cluster == glyph.Cluster)
            return thisPos;

        if ((glyph.Cluster < cluster) && (glyph.Cluster > leftCluster))
        {
            leftCluster = glyph.Cluster;
            leftClusterPos = thisPos;
        }

        if ((glyph.Cluster > cluster) && (glyph.Cluster < rightCluster))
        {
            rightCluster = glyph.Cluster;
            rightClusterPos = thisPos;
        }

        pos = ::g::Uno::Float2__op_Addition2(pos, glyph.Advance());
    }

    return ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition2(leftClusterPos, rightClusterPos), 2.0f);
}

// private static float2 GetVisualPositionInnerRTL(int cluster, Fuse.Text.Edit.CaretSide side, int endCluster, float2 measurements, Fuse.Text.ShapedRun glyphs) [static] :571
::g::Uno::Float2 CaretPosition::GetVisualPositionInnerRTL(int cluster, int side, int endCluster, ::g::Uno::Float2 measurements, ::g::Fuse::Text::ShapedRun* glyphs)
{
    uStackFrame __("Fuse.Text.Edit.CaretPosition", "GetVisualPositionInnerRTL(int,Fuse.Text.Edit.CaretSide,int,float2,Fuse.Text.ShapedRun)");
    int leftCluster = endCluster;
    ::g::Uno::Float2 leftClusterPos = ::g::Uno::Float2__New1(0.0f);
    int rightCluster = 0;
    ::g::Uno::Float2 rightClusterPos = measurements;
    ::g::Uno::Float2 pos = measurements;

    for (int i = uPtr(glyphs)->Count - 1; i >= 0; --i)
    {
        ::g::Fuse::Text::PositionedGlyph glyph = uPtr(glyphs)->Item(i);
        ::g::Uno::Float2 thisPos = (side == 0) ? ::g::Uno::Float2__op_Subtraction2(pos, glyph.Advance()) : pos;

        if (cluster == glyph.Cluster)
            return thisPos;

        if ((glyph.Cluster > cluster) && (glyph.Cluster < leftCluster))
        {
            leftCluster = glyph.Cluster;
            leftClusterPos = thisPos;
        }

        if ((glyph.Cluster < cluster) && (glyph.Cluster > rightCluster))
        {
            rightCluster = glyph.Cluster;
            rightClusterPos = thisPos;
        }

        pos = ::g::Uno::Float2__op_Subtraction2(pos, glyph.Advance());
    }

    return ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition2(leftClusterPos, rightClusterPos), 2.0f);
}

// private static bool IsNewlineRun(Fuse.Text.Bidirectional.Run run) [static] :445
bool CaretPosition::IsNewlineRun(::g::Fuse::Text::Bidirectional::Run run)
{
    uStackFrame __("Fuse.Text.Edit.CaretPosition", "IsNewlineRun(Fuse.Text.Bidirectional.Run)");
    return ((uPtr(run.String)->Length == 1) && (uPtr(run.String)->Item(0) == 10)) || (((uPtr(run.String)->Length == 2) && (uPtr(run.String)->Item(0) == 13)) && (uPtr(run.String)->Item(1) == 10));
}

// public static Fuse.Text.Edit.Caret LeftMost(Uno.Collections.List<Fuse.Text.PositionedRun> runs) [static] :304
::g::Fuse::Text::Edit::Caret CaretPosition::LeftMost(::g::Uno::Collections::List* runs)
{
    uStackFrame __("Fuse.Text.Edit.CaretPosition", "LeftMost(Uno.Collections.List<Fuse.Text.PositionedRun>)");
    ::g::Fuse::Text::PositionedRun* ret9;

    if (uPtr(runs)->Count() == 0)
        return ::g::Fuse::Text::Edit::Caret__New1(0, 0);

    return ::g::Fuse::Text::Edit::Caret__New1(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(runs), uCRef<int>(0), &ret9), ret9))->Run().VisualLeft(), 0);
}

// public static Fuse.Text.Edit.Caret MoveDown(Fuse.Text.Edit.Caret caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) [static] :410
::g::Fuse::Text::Edit::Caret CaretPosition::MoveDown(::g::Fuse::Text::Edit::Caret caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source)
{
    uStackFrame __("Fuse.Text.Edit.CaretPosition", "MoveDown(Fuse.Text.Edit.Caret,Uno.Collections.List<Fuse.Text.PositionedRun>,int[],string)");
    caret = CaretPosition::ValidateCaretPos(caret, runs, runIndices, source);
    ::g::Uno::Collections::List* lines = (::g::Uno::Collections::List*)::g::Uno::Collections::EnumerableExtensions::ToList(::TYPES[3/*Uno.Collections.EnumerableExtensions.ToList<Fuse.Text.Substring>*/], ::g::Fuse::Text::SubstringExtensions::TrimmedLines(::g::Fuse::Text::Substring::New1(source)));
    ::g::Uno::Int2 pos = CaretPosition::ToRowColumn(caret, lines, source);
    ::g::Fuse::Text::Edit::Caret newCaret = CaretPosition::FromRowColumn(::g::Uno::Int2__New2(pos.X, pos.Y + 1), caret.Side, runs, lines, source);
    return CaretPosition::ValidateCaretPos(newCaret, runs, runIndices, source);
}

// public static Fuse.Text.Edit.Caret MoveLeft(Fuse.Text.Edit.Caret caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) [static] :368
::g::Fuse::Text::Edit::Caret CaretPosition::MoveLeft(::g::Fuse::Text::Edit::Caret caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source)
{
    uStackFrame __("Fuse.Text.Edit.CaretPosition", "MoveLeft(Fuse.Text.Edit.Caret,Uno.Collections.List<Fuse.Text.PositionedRun>,int[],string)");
    ::g::Fuse::Text::PositionedRun* ret10;
    ::g::Fuse::Text::PositionedRun* ret11;
    caret = CaretPosition::ValidateCaretPos(caret, runs, runIndices, source);
    int i = (caret.Pos < uPtr(runIndices)->Length()) ? uPtr(runIndices)->Item<int>(caret.Pos) : -1;

    if ((i < 0) || (i >= uPtr(runs)->Count()))
        return caret;

    ::g::Fuse::Text::Bidirectional::Run run = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(runs), uCRef<int>(i), &ret10), ret10))->Run();

    if ((run.IsLeftToRight() && !CaretPosition::IsNewlineRun(run)) && (caret.Side == 1))
        return ::g::Fuse::Text::Edit::Caret__New1(caret.Pos, 0);

    if (caret.Pos == run.VisualLeft())
    {
        if ((caret.Side == 1) && !CaretPosition::IsNewlineRun(run))
            return ::g::Fuse::Text::Edit::Caret__New1(caret.Pos, 0);
        else if ((i - 1) >= 0)
            return ::g::Fuse::Text::Edit::Caret__New1(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(runs), uCRef<int>(i - 1), &ret11), ret11))->Run().VisualRight(), 1);
        else
            return ::g::Fuse::Text::Edit::Caret__New1(run.VisualLeft(), 0);
    }
    else
        return run.IsLeftToRight() ? ::g::Fuse::Text::Edit::Caret__New1(::g::Fuse::Text::SubstringExtensions::PrevCharIndex(source, caret.Pos), 0) : ::g::Fuse::Text::Edit::Caret__New1(::g::Fuse::Text::SubstringExtensions::NextCharIndex(source, caret.Pos), 1);
}

// public static Fuse.Text.Edit.Caret MoveRight(Fuse.Text.Edit.Caret caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) [static] :335
::g::Fuse::Text::Edit::Caret CaretPosition::MoveRight(::g::Fuse::Text::Edit::Caret caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source)
{
    uStackFrame __("Fuse.Text.Edit.CaretPosition", "MoveRight(Fuse.Text.Edit.Caret,Uno.Collections.List<Fuse.Text.PositionedRun>,int[],string)");
    ::g::Fuse::Text::PositionedRun* ret12;
    ::g::Fuse::Text::PositionedRun* ret13;
    caret = CaretPosition::ValidateCaretPos(caret, runs, runIndices, source);
    int i = (caret.Pos < uPtr(runIndices)->Length()) ? uPtr(runIndices)->Item<int>(caret.Pos) : -1;

    if ((i < 0) || (i >= uPtr(runs)->Count()))
        return caret;

    ::g::Fuse::Text::Bidirectional::Run run = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(runs), uCRef<int>(i), &ret12), ret12))->Run();

    if (run.IsRightToLeft() && (caret.Side == 0))
        return ::g::Fuse::Text::Edit::Caret__New1(caret.Pos, 1);

    if (caret.Pos == run.VisualRight())
    {
        if (caret.Side == 0)
            return ::g::Fuse::Text::Edit::Caret__New1(caret.Pos, 1);
        else if ((i + 1) < uPtr(runs)->Count())
            return ::g::Fuse::Text::Edit::Caret__New1(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(runs), uCRef<int>(i + 1), &ret13), ret13))->Run().VisualLeft(), 0);
        else
            return ::g::Fuse::Text::Edit::Caret__New1(run.VisualRight(), 1);
    }
    else
        return run.IsLeftToRight() ? ::g::Fuse::Text::Edit::Caret__New1(::g::Fuse::Text::SubstringExtensions::NextCharIndex(source, caret.Pos), 0) : ::g::Fuse::Text::Edit::Caret__New1(::g::Fuse::Text::SubstringExtensions::PrevCharIndex(source, caret.Pos), 1);
}

// public static Fuse.Text.Edit.Caret MoveUp(Fuse.Text.Edit.Caret caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) [static] :401
::g::Fuse::Text::Edit::Caret CaretPosition::MoveUp(::g::Fuse::Text::Edit::Caret caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source)
{
    uStackFrame __("Fuse.Text.Edit.CaretPosition", "MoveUp(Fuse.Text.Edit.Caret,Uno.Collections.List<Fuse.Text.PositionedRun>,int[],string)");
    caret = CaretPosition::ValidateCaretPos(caret, runs, runIndices, source);
    ::g::Uno::Collections::List* lines = (::g::Uno::Collections::List*)::g::Uno::Collections::EnumerableExtensions::ToList(::TYPES[3/*Uno.Collections.EnumerableExtensions.ToList<Fuse.Text.Substring>*/], ::g::Fuse::Text::SubstringExtensions::TrimmedLines(::g::Fuse::Text::Substring::New1(source)));
    ::g::Uno::Int2 pos = CaretPosition::ToRowColumn(caret, lines, source);
    ::g::Fuse::Text::Edit::Caret newCaret = CaretPosition::FromRowColumn(::g::Uno::Int2__New2(pos.X, pos.Y - 1), caret.Side, runs, lines, source);
    return CaretPosition::ValidateCaretPos(newCaret, runs, runIndices, source);
}

// public static Fuse.Text.Edit.Caret RightMost(Uno.Collections.List<Fuse.Text.PositionedRun> runs) [static] :311
::g::Fuse::Text::Edit::Caret CaretPosition::RightMost(::g::Uno::Collections::List* runs)
{
    uStackFrame __("Fuse.Text.Edit.CaretPosition", "RightMost(Uno.Collections.List<Fuse.Text.PositionedRun>)");
    ::g::Fuse::Text::PositionedRun* ret14;

    if (uPtr(runs)->Count() == 0)
        return ::g::Fuse::Text::Edit::Caret__New1(0, 0);

    return ::g::Fuse::Text::Edit::Caret__New1(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(runs), uCRef<int>(uPtr(runs)->Count() - 1), &ret14), ret14))->Run().VisualRight(), 1);
}

// public static int[] RunIndices(Uno.Collections.List<Fuse.Text.PositionedRun> runs, string source) [static] :287
uArray* CaretPosition::RunIndices(::g::Uno::Collections::List* runs, uString* source)
{
    uStackFrame __("Fuse.Text.Edit.CaretPosition", "RunIndices(Uno.Collections.List<Fuse.Text.PositionedRun>,string)");
    ::g::Fuse::Text::PositionedRun* ret15;
    uArray* result = uArray::New(::TYPES[4/*int[]*/], uPtr(source)->Length());

    for (int i = 0; i < source->Length(); i++)
        uPtr(result)->Item<int>(i) = -1;

    for (int runIndex = 0; runIndex < uPtr(runs)->Count(); ++runIndex)
    {
        ::g::Fuse::Text::Bidirectional::Run run = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(runs), uCRef<int>(runIndex), &ret15), ret15))->Run();

        for (int i1 = run.LogicalStart(); i1 < run.LogicalEnd(); ++i1)
            if ((i1 >= 0) && (i1 < uPtr(source)->Length()))
                uPtr(result)->Item<int>(i1) = runIndex;
    }

    return result;
}

// private static float SquaredDist(float2 p, float2 q) [static] :704
float CaretPosition::SquaredDist(::g::Uno::Float2 p, ::g::Uno::Float2 q)
{
    float x = p.X - q.X;
    float y = p.Y - q.Y;
    return (x * x) + (y * y);
}

// private static float SquaredDistToLineSegment(float2 p, float2 start, float2 end) [static] :689
float CaretPosition::SquaredDistToLineSegment(::g::Uno::Float2 p, ::g::Uno::Float2 start, ::g::Uno::Float2 end)
{
    if (::g::Uno::Float2__op_Equality(start, end))
        return CaretPosition::SquaredDist(p, start);

    ::g::Uno::Float3 closestPoint;
    ::g::Uno::Geometry::Collision::ClosestPointOnSegmentToPoint(::g::Uno::Float3__New4(start, 0.0f), ::g::Uno::Float3__New4(end, 0.0f), ::g::Uno::Float3__New4(p, 0.0f), &closestPoint);
    return CaretPosition::SquaredDist(p, ::g::Uno::Float2__New2(closestPoint.X, closestPoint.Y));
}

// internal static int ToLogical(Fuse.Text.Edit.Caret caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) [static] :318
int CaretPosition::ToLogical(::g::Fuse::Text::Edit::Caret caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source)
{
    uStackFrame __("Fuse.Text.Edit.CaretPosition", "ToLogical(Fuse.Text.Edit.Caret,Uno.Collections.List<Fuse.Text.PositionedRun>,int[],string)");
    ::g::Fuse::Text::PositionedRun* ret16;
    int i = (caret.Pos < uPtr(runIndices)->Length()) ? uPtr(runIndices)->Item<int>(caret.Pos) : -1;

    if ((i < 0) || (i >= uPtr(runs)->Count()))
        return caret.Pos;

    ::g::Fuse::Text::Bidirectional::Run run = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(runs), uCRef<int>(i), &ret16), ret16))->Run();

    if (run.IsLeftToRight() && (caret.Side == 1))
        return ::g::Fuse::Text::SubstringExtensions::NextCharIndex(source, caret.Pos);

    if (run.IsRightToLeft() && (caret.Side == 0))
        return ::g::Fuse::Text::SubstringExtensions::PrevCharIndex(source, caret.Pos);

    return caret.Pos;
}

// private static int2 ToRowColumn(Fuse.Text.Edit.Caret caret, Uno.Collections.List<Fuse.Text.Substring> lines, string source) [static] :419
::g::Uno::Int2 CaretPosition::ToRowColumn(::g::Fuse::Text::Edit::Caret caret, ::g::Uno::Collections::List* lines, uString* source)
{
    uStackFrame __("Fuse.Text.Edit.CaretPosition", "ToRowColumn(Fuse.Text.Edit.Caret,Uno.Collections.List<Fuse.Text.Substring>,string)");
    ::g::Fuse::Text::Substring* ret17;

    for (int y = 0; y < uPtr(lines)->Count(); ++y)
    {
        ::g::Fuse::Text::Substring* line = (::g::Uno::Collections::List__get_Item_fn(uPtr(lines), uCRef<int>(y), &ret17), ret17);

        if ((caret.Pos >= uPtr(line)->_start) && (caret.Pos < (uPtr(line)->_start + uPtr(line)->Length)))
            return ::g::Uno::Int2__New2(caret.Pos - uPtr(line)->_start, y);
    }

    return ::g::Uno::Int2__New2(0, 0);
}

// internal static Fuse.Text.Edit.Caret ValidateCaretPos(Fuse.Text.Edit.Caret caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) [static] :451
::g::Fuse::Text::Edit::Caret CaretPosition::ValidateCaretPos(::g::Fuse::Text::Edit::Caret caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source)
{
    uStackFrame __("Fuse.Text.Edit.CaretPosition", "ValidateCaretPos(Fuse.Text.Edit.Caret,Uno.Collections.List<Fuse.Text.PositionedRun>,int[],string)");

    if (caret.Pos < 0)
        return CaretPosition::LeftMost(runs);

    if (caret.Pos >= uPtr(source)->Length())
        return CaretPosition::RightMost(runs);

    ::g::Fuse::Text::PositionedRun* prun = CaretPosition::GetRun(caret, runs, runIndices);

    if (prun == NULL)
        return CaretPosition::LeftMost(runs);

    ::g::Fuse::Text::Bidirectional::Run run = uPtr(prun)->Run();

    if (CaretPosition::IsNewlineRun(run) && (caret.Side == 0))
        return ::g::Fuse::Text::Edit::Caret__New1(caret.Pos, 1);

    if (((caret.Side == 1) && run.IsLeftToRight()) && (caret.Pos != run.VisualRight()))
        return CaretPosition::MoveRight(::g::Fuse::Text::Edit::Caret__New1(caret.Pos, 0), runs, runIndices, source);

    if (((caret.Side == 0) && run.IsRightToLeft()) && (caret.Pos != run.VisualLeft()))
        return CaretPosition::MoveLeft(::g::Fuse::Text::Edit::Caret__New1(caret.Pos, 1), runs, runIndices, source);

    return caret;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public enum CaretSide :192
uEnumType* CaretSide_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Text.Edit.CaretSide", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public static class Edit :712
// {
static void Edit_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::Char_typeof();
    type->Reflection.SetFunctions(4,
        new uFunction("Backspace", NULL, (void*)Edit__Backspace_fn, 0, true, ::g::Uno::String_typeof(), 4, ::g::Fuse::Text::Edit::Caret_typeof()->ByRef(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL), ::g::Uno::Int_typeof()->Array(), ::g::Uno::String_typeof()),
        new uFunction("Delete", NULL, (void*)Edit__Delete_fn, 0, true, ::g::Uno::String_typeof(), 4, ::g::Fuse::Text::Edit::Caret_typeof()->ByRef(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL), ::g::Uno::Int_typeof()->Array(), ::g::Uno::String_typeof()),
        new uFunction("DeleteSpan", NULL, (void*)Edit__DeleteSpan_fn, 0, true, ::g::Uno::String_typeof(), 5, ::g::Fuse::Text::Edit::Caret_typeof(), ::g::Fuse::Text::Edit::Caret_typeof()->ByRef(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL), ::g::Uno::Int_typeof()->Array(), ::g::Uno::String_typeof()),
        new uFunction("Insert", NULL, (void*)Edit__Insert_fn, 0, true, ::g::Uno::String_typeof(), 5, ::TYPES[5/*char*/], ::g::Fuse::Text::Edit::Caret_typeof()->ByRef(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL), ::g::Uno::Int_typeof()->Array(), ::g::Uno::String_typeof()));
}

uClassType* Edit_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Edit.Edit", options);
    type->fp_build_ = Edit_build;
    return type;
}

// public static string Backspace(Fuse.Text.Edit.Caret& caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) :744
void Edit__Backspace_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, uString** __retval)
{
    *__retval = Edit::Backspace(caret, runs, runIndices, source);
}

// public static string Delete(Fuse.Text.Edit.Caret& caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) :729
void Edit__Delete_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, uString** __retval)
{
    *__retval = Edit::Delete(caret, runs, runIndices, source);
}

// public static string DeleteSpan(Fuse.Text.Edit.Caret start, Fuse.Text.Edit.Caret& caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) :761
void Edit__DeleteSpan_fn(::g::Fuse::Text::Edit::Caret* start, ::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, uString** __retval)
{
    *__retval = Edit::DeleteSpan(*start, caret, runs, runIndices, source);
}

// public static string Insert(char c, Fuse.Text.Edit.Caret& caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) :714
void Edit__Insert_fn(uChar* c, ::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, uString** __retval)
{
    *__retval = Edit::Insert(*c, caret, runs, runIndices, source);
}

// public static string Backspace(Fuse.Text.Edit.Caret& caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) [static] :744
uString* Edit::Backspace(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source)
{
    uStackFrame __("Fuse.Text.Edit.Edit", "Backspace(Fuse.Text.Edit.Caret&,Uno.Collections.List<Fuse.Text.PositionedRun>,int[],string)");
    *caret = ::g::Fuse::Text::Edit::CaretPosition::ValidateCaretPos(*caret, runs, runIndices, source);
    int logicalPos = ::g::Fuse::Text::Edit::CaretPosition::ToLogical(*caret, runs, runIndices, source);

    if ((logicalPos <= 0) || (logicalPos > uPtr(source)->Length()))
        return source;

    int deletionPos = ::g::Fuse::Text::SubstringExtensions::PrevCharIndex(source, logicalPos);
    uString* result = ::g::Fuse::Text::SubstringExtensions::DeleteAt(source, &deletionPos);
    *caret = ::g::Fuse::Text::Edit::Caret__New1(::g::Fuse::Text::SubstringExtensions::PrevCharIndex(source, (*caret).Pos), (*caret).Side);
    return result;
}

// public static string Delete(Fuse.Text.Edit.Caret& caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) [static] :729
uString* Edit::Delete(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source)
{
    uStackFrame __("Fuse.Text.Edit.Edit", "Delete(Fuse.Text.Edit.Caret&,Uno.Collections.List<Fuse.Text.PositionedRun>,int[],string)");
    *caret = ::g::Fuse::Text::Edit::CaretPosition::ValidateCaretPos(*caret, runs, runIndices, source);
    int deletionPos = ::g::Fuse::Text::Edit::CaretPosition::ToLogical(*caret, runs, runIndices, source);

    if ((deletionPos < 0) || (deletionPos >= uPtr(source)->Length()))
        return source;

    return ::g::Fuse::Text::SubstringExtensions::DeleteAt(source, &deletionPos);
}

// public static string DeleteSpan(Fuse.Text.Edit.Caret start, Fuse.Text.Edit.Caret& caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) [static] :761
uString* Edit::DeleteSpan(::g::Fuse::Text::Edit::Caret start, ::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source)
{
    uStackFrame __("Fuse.Text.Edit.Edit", "DeleteSpan(Fuse.Text.Edit.Caret,Fuse.Text.Edit.Caret&,Uno.Collections.List<Fuse.Text.PositionedRun>,int[],string)");
    start = ::g::Fuse::Text::Edit::CaretPosition::ValidateCaretPos(start, runs, runIndices, source);
    *caret = ::g::Fuse::Text::Edit::CaretPosition::ValidateCaretPos(*caret, runs, runIndices, source);
    ::g::Fuse::Text::Edit::Span span = ::g::Fuse::Text::Edit::Span__New1(start, *caret);
    *caret = span.Start;
    int deletionStart = ::g::Fuse::Text::Edit::CaretPosition::ToLogical(span.Start, runs, runIndices, source);
    int deletionEnd = ::g::Fuse::Text::SubstringExtensions::PrevCharIndex(source, ::g::Fuse::Text::Edit::CaretPosition::ToLogical(span.End, runs, runIndices, source));

    if ((((deletionStart < 0) || (deletionStart >= uPtr(source)->Length())) || (deletionEnd < 0)) || (deletionEnd >= uPtr(source)->Length()))
        return source;

    return ::g::Fuse::Text::SubstringExtensions::DeleteSpan(source, deletionStart, deletionEnd);
}

// public static string Insert(char c, Fuse.Text.Edit.Caret& caret, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source) [static] :714
uString* Edit::Insert(uChar c, ::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source)
{
    uStackFrame __("Fuse.Text.Edit.Edit", "Insert(char,Fuse.Text.Edit.Caret&,Uno.Collections.List<Fuse.Text.PositionedRun>,int[],string)");
    *caret = ::g::Fuse::Text::Edit::CaretPosition::ValidateCaretPos(*caret, runs, runIndices, source);
    int insertionPos = ::g::Fuse::Text::Edit::CaretPosition::ToLogical(*caret, runs, runIndices, source);
    uString* result = ::g::Uno::String::Insert(uPtr(source), insertionPos, ::g::Uno::Char::ToString(c, ::TYPES[5/*char*/]));
    *caret = ::g::Fuse::Text::Edit::Caret__New1(::g::Fuse::Text::SubstringExtensions::NextCharIndex(result, (*caret).Pos), (*caret).Side);
    return result;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public static class Selection :783
// {
static void Selection_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Rect_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL);
    type->Reflection.SetFunctions(1,
        new uFunction("GetVisualRects", NULL, (void*)Selection__GetVisualRects_fn, 0, true, ::TYPES[6/*Uno.Collections.List<Uno.Rect>*/], 5, ::g::Fuse::Text::Edit::Span_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL), ::g::Uno::Int_typeof()->Array(), ::g::Uno::String_typeof(), ::g::Uno::Float_typeof()));
}

uClassType* Selection_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Edit.Selection", options);
    type->fp_build_ = Selection_build;
    return type;
}

// public static Uno.Collections.List<Uno.Rect> GetVisualRects(Fuse.Text.Edit.Span selection, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source, float lineHeight) :785
void Selection__GetVisualRects_fn(::g::Fuse::Text::Edit::Span* selection, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, float* lineHeight, ::g::Uno::Collections::List** __retval)
{
    *__retval = Selection::GetVisualRects(*selection, runs, runIndices, source, *lineHeight);
}

// public static Uno.Collections.List<Uno.Rect> GetVisualRects(Fuse.Text.Edit.Span selection, Uno.Collections.List<Fuse.Text.PositionedRun> runs, int[] runIndices, string source, float lineHeight) [static] :785
::g::Uno::Collections::List* Selection::GetVisualRects(::g::Fuse::Text::Edit::Span selection, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, float lineHeight)
{
    uStackFrame __("Fuse.Text.Edit.Selection", "GetVisualRects(Fuse.Text.Edit.Span,Uno.Collections.List<Fuse.Text.PositionedRun>,int[],string,float)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Text::PositionedRun*> > ret2;
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[6/*Uno.Collections.List<Uno.Rect>*/]);

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Text::PositionedRun*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(runs), &ret2), ret2); enum1.MoveNext(::TYPES[7/*Uno.Collections.List<Fuse.Text.PositionedRun>.Enumerator*/]); )
    {
        ::g::Fuse::Text::PositionedRun* prun = enum1.Current(::TYPES[7/*Uno.Collections.List<Fuse.Text.PositionedRun>.Enumerator*/]);
        ::g::Fuse::Text::Bidirectional::Run run = uPtr(prun)->Run();
        ::g::Fuse::Text::Edit::Caret runStart = ::g::Fuse::Text::Edit::Caret__New1(run.LogicalStart(), run.IsLeftToRight() ? 0 : 1);
        ::g::Fuse::Text::Edit::Caret runEnd = ::g::Fuse::Text::Edit::Caret__New1(run.LastLogicalIndex(), run.IsLeftToRight() ? 1 : 0);
        ::g::Fuse::Text::Edit::Span runSpan = ::g::Fuse::Text::Edit::Span__New1(runStart, runEnd);

        if (selection.Contains1(runSpan))
            ::g::Uno::Collections::List__Add_fn(uPtr(result), uCRef(::g::Uno::Rect__New2(uPtr(prun)->Position, ::g::Uno::Float2__op_Addition2(uPtr(prun)->Measurements, ::g::Uno::Float2__New2(0.0f, lineHeight)))));
        else
        {
            bool containsStart = runSpan.Contains(selection.Start);
            bool containsEnd = runSpan.Contains(selection.End);

            if (containsStart || containsEnd)
            {
                ::g::Uno::Float2 pos1 = ::g::Fuse::Text::Edit::CaretPosition::GetVisualPosition(containsStart ? selection.Start : runSpan.Start, runs, runIndices, source);
                ::g::Uno::Float2 pos2 = ::g::Fuse::Text::Edit::CaretPosition::GetVisualPosition(containsEnd ? selection.End : runSpan.End, runs, runIndices, source);
                ::g::Uno::Collections::List__Add_fn(uPtr(result), uCRef(::g::Uno::Rect__New2(::g::Uno::Math::Min3(pos1, pos2), ::g::Uno::Float2__op_Addition2(::g::Uno::Math::Abs2(::g::Uno::Float2__op_Subtraction2(pos1, pos2)), ::g::Uno::Float2__New2(0.0f, lineHeight)))));
            }
        }
    }

    return result;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public struct Span :250
// {
static void Span_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Span(");
    ::STRINGS[1] = uString::Const(", ");
    ::STRINGS[2] = uString::Const(")");
    type->SetFields(0,
        ::g::Fuse::Text::Edit::Caret_typeof(), offsetof(::g::Fuse::Text::Edit::Span, Start), 0,
        ::g::Fuse::Text::Edit::Caret_typeof(), offsetof(::g::Fuse::Text::Edit::Span, End), 0);
    type->Reflection.SetFields(2,
        new uField("End", 1),
        new uField("Start", 0));
    type->Reflection.SetFunctions(3,
        new uFunction("Contains", NULL, (void*)Span__Contains_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Fuse::Text::Edit::Caret_typeof()),
        new uFunction("Contains", NULL, (void*)Span__Contains1_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction(".ctor", NULL, (void*)Span__New1_fn, 0, true, type, 2, ::g::Fuse::Text::Edit::Caret_typeof(), ::g::Fuse::Text::Edit::Caret_typeof()));
}

uStructType* Span_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Span);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Text.Edit.Span", options);
    type->fp_build_ = Span_build;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Span__ToString_fn;
    return type;
}

// public Span(Fuse.Text.Edit.Caret a, Fuse.Text.Edit.Caret b) :255
void Span__ctor__fn(Span* __this, ::g::Fuse::Text::Edit::Caret* a, ::g::Fuse::Text::Edit::Caret* b)
{
    __this->ctor_(*a, *b);
}

// public bool Contains(Fuse.Text.Edit.Caret c) :279
void Span__Contains_fn(Span* __this, ::g::Fuse::Text::Edit::Caret* c, bool* __retval)
{
    *__retval = __this->Contains(*c);
}

// public bool Contains(Fuse.Text.Edit.Span that) :274
void Span__Contains1_fn(Span* __this, Span* that, bool* __retval)
{
    *__retval = __this->Contains1(*that);
}

// public Span New(Fuse.Text.Edit.Caret a, Fuse.Text.Edit.Caret b) :255
void Span__New1_fn(::g::Fuse::Text::Edit::Caret* a, ::g::Fuse::Text::Edit::Caret* b, Span* __retval)
{
    *__retval = Span__New1(*a, *b);
}

// public override sealed string ToString() :269
void Span__ToString_fn(Span* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Fuse.Text.Edit.Span", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[3/*"Span("*/], uBox(::g::Fuse::Text::Edit::Caret_typeof(), __this->Start)), ::STRINGS[1/*", "*/]), uBox(::g::Fuse::Text::Edit::Caret_typeof(), __this->End)), ::STRINGS[2/*")"*/]), void();
}

// public Span(Fuse.Text.Edit.Caret a, Fuse.Text.Edit.Caret b) [instance] :255
void Span::ctor_(::g::Fuse::Text::Edit::Caret a, ::g::Fuse::Text::Edit::Caret b)
{
    if (::g::Fuse::Text::Edit::Caret__op_LessThan(a, b))
    {
        Start = a;
        End = b;
    }
    else
    {
        Start = b;
        End = a;
    }
}

// public bool Contains(Fuse.Text.Edit.Caret c) [instance] :279
bool Span::Contains(::g::Fuse::Text::Edit::Caret c)
{
    return ::g::Fuse::Text::Edit::Caret__op_LessThanOrEqual(Start, c) && ::g::Fuse::Text::Edit::Caret__op_LessThanOrEqual(c, End);
}

// public bool Contains(Fuse.Text.Edit.Span that) [instance] :274
bool Span::Contains1(Span that)
{
    return ::g::Fuse::Text::Edit::Caret__op_LessThanOrEqual(Start, that.Start) && ::g::Fuse::Text::Edit::Caret__op_LessThanOrEqual(that.End, End);
}

// public Span New(Fuse.Text.Edit.Caret a, Fuse.Text.Edit.Caret b) [static] :255
Span Span__New1(::g::Fuse::Text::Edit::Caret a, ::g::Fuse::Text::Edit::Caret b)
{
    Span obj1;
    obj1.ctor_(a, b);
    return obj1;
}
// }

}}}} // ::g::Fuse::Text::Edit
