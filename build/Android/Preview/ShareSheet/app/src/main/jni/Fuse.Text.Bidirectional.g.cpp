// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Text.Bidirectional.Implementation.JavaRuns.h>
#include <Fuse.Text.Bidirectional.Run.h>
#include <Fuse.Text.Bidirectional.Runs.h>
#include <Fuse.Text.Bidirectional.Runs.Range.h>
#include <Fuse.Text.ShapedRun.h>
#include <Fuse.Text.SinglyLinkedList-1.h>
#include <Fuse.Text.Substring.h>
#include <Fuse.Text.SubstringExtensions.h>
#include <Fuse.Text.TextDirection.h>
#include <Uno.Bool.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.Stack-1.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[4];
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace Text{
namespace Bidirectional{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// private sealed class Runs.Range :166
// {
static void Runs__Range_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Text::SinglyLinkedList_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), offsetof(::g::Fuse::Text::Bidirectional::Runs__Range, Left), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::Bidirectional::Runs__Range, Level), 0,
        ::g::Fuse::Text::SinglyLinkedList_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), offsetof(::g::Fuse::Text::Bidirectional::Runs__Range, Right), 0);
}

uType* Runs__Range_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Runs__Range);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Text.Bidirectional.Runs.Range", options);
    type->fp_build_ = Runs__Range_build;
    return type;
}

// public Range(int level, Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> left, Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> right) :172
void Runs__Range__ctor__fn(Runs__Range* __this, int* level, ::g::Fuse::Text::SinglyLinkedList* left, ::g::Fuse::Text::SinglyLinkedList* right)
{
    __this->ctor_(*level, left, right);
}

// public Range New(int level, Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> left, Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> right) :172
void Runs__Range__New1_fn(int* level, ::g::Fuse::Text::SinglyLinkedList* left, ::g::Fuse::Text::SinglyLinkedList* right, Runs__Range** __retval)
{
    *__retval = Runs__Range::New1(*level, left, right);
}

// public Range(int level, Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> left, Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> right) [instance] :172
void Runs__Range::ctor_(int level, ::g::Fuse::Text::SinglyLinkedList* left, ::g::Fuse::Text::SinglyLinkedList* right)
{
    Level = level;
    Left = left;
    Right = right;
}

// public Range New(int level, Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> left, Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> right) [static] :172
Runs__Range* Runs__Range::New1(int level, ::g::Fuse::Text::SinglyLinkedList* left, ::g::Fuse::Text::SinglyLinkedList* right)
{
    Runs__Range* obj1 = (Runs__Range*)uNew(Runs__Range_typeof());
    obj1->ctor_(level, left, right);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public struct Run :8
// {
static void Run_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Text::Substring_typeof(), offsetof(::g::Fuse::Text::Bidirectional::Run, String), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Text::Bidirectional::Run, Level), 0);
    type->Reflection.SetFields(2,
        new uField("Level", 1),
        new uField("String", 0));
    type->Reflection.SetFunctions(4,
        new uFunction("get_Direction", NULL, (void*)Run__get_Direction_fn, 0, false, ::g::Fuse::Text::TextDirection_typeof(), 0),
        new uFunction("get_IsLeftToRight", NULL, (void*)Run__get_IsLeftToRight_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsRightToLeft", NULL, (void*)Run__get_IsRightToLeft_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Run__New1_fn, 0, true, type, 2, ::g::Fuse::Text::Substring_typeof(), ::g::Uno::Int_typeof()));
}

uStructType* Run_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Run);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Text.Bidirectional.Run", options);
    type->fp_build_ = Run_build;
    return type;
}

// public Run(Fuse.Text.Substring str, int level) :13
void Run__ctor__fn(Run* __this, ::g::Fuse::Text::Substring* str, int* level)
{
    __this->ctor_(str, *level);
}

// public Fuse.Text.TextDirection get_Direction() :21
void Run__get_Direction_fn(Run* __this, int* __retval)
{
    *__retval = __this->Direction();
}

// public bool get_IsLeftToRight() :19
void Run__get_IsLeftToRight_fn(Run* __this, bool* __retval)
{
    *__retval = __this->IsLeftToRight();
}

// public bool get_IsRightToLeft() :20
void Run__get_IsRightToLeft_fn(Run* __this, bool* __retval)
{
    *__retval = __this->IsRightToLeft();
}

// internal int get_LastLogicalIndex() :28
void Run__get_LastLogicalIndex_fn(Run* __this, int* __retval)
{
    *__retval = __this->LastLogicalIndex();
}

// internal int get_LogicalEnd() :24
void Run__get_LogicalEnd_fn(Run* __this, int* __retval)
{
    *__retval = __this->LogicalEnd();
}

// internal int get_LogicalStart() :23
void Run__get_LogicalStart_fn(Run* __this, int* __retval)
{
    *__retval = __this->LogicalStart();
}

// public Run New(Fuse.Text.Substring str, int level) :13
void Run__New1_fn(::g::Fuse::Text::Substring* str, int* level, Run* __retval)
{
    *__retval = Run__New1(str, *level);
}

// internal int get_VisualLeft() :37
void Run__get_VisualLeft_fn(Run* __this, int* __retval)
{
    *__retval = __this->VisualLeft();
}

// internal int get_VisualRight() :38
void Run__get_VisualRight_fn(Run* __this, int* __retval)
{
    *__retval = __this->VisualRight();
}

// public Run(Fuse.Text.Substring str, int level) [instance] :13
void Run::ctor_(::g::Fuse::Text::Substring* str, int level)
{
    String = str;
    Level = level;
}

// public Fuse.Text.TextDirection get_Direction() [instance] :21
int Run::Direction()
{
    return IsLeftToRight() ? 0 : 1;
}

// public bool get_IsLeftToRight() [instance] :19
bool Run::IsLeftToRight()
{
    return (Level % 2) == 0;
}

// public bool get_IsRightToLeft() [instance] :20
bool Run::IsRightToLeft()
{
    return (Level % 2) != 0;
}

// internal int get_LastLogicalIndex() [instance] :28
int Run::LastLogicalIndex()
{
    uStackFrame __("Fuse.Text.Bidirectional.Run", "get_LastLogicalIndex()");
    return uPtr(String)->_start + ((uPtr(String)->Length > 0) ? ::g::Fuse::Text::SubstringExtensions::CharStart(String, uPtr(String)->Length - 1) : 0);
}

// internal int get_LogicalEnd() [instance] :24
int Run::LogicalEnd()
{
    uStackFrame __("Fuse.Text.Bidirectional.Run", "get_LogicalEnd()");
    return uPtr(String)->_start + uPtr(String)->Length;
}

// internal int get_LogicalStart() [instance] :23
int Run::LogicalStart()
{
    uStackFrame __("Fuse.Text.Bidirectional.Run", "get_LogicalStart()");
    return uPtr(String)->_start;
}

// internal int get_VisualLeft() [instance] :37
int Run::VisualLeft()
{
    uStackFrame __("Fuse.Text.Bidirectional.Run", "get_VisualLeft()");
    return IsLeftToRight() ? LogicalStart() : LastLogicalIndex();
}

// internal int get_VisualRight() [instance] :38
int Run::VisualRight()
{
    uStackFrame __("Fuse.Text.Bidirectional.Run", "get_VisualRight()");
    return IsLeftToRight() ? LastLogicalIndex() : LogicalStart();
}

// public Run New(Fuse.Text.Substring str, int level) [static] :13
Run Run__New1(::g::Fuse::Text::Substring* str, int level)
{
    Run obj1;
    obj1.ctor_(str, level);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno
// ------------------------------------------------------------------------------------

// public static class Runs :41
// {
static void Runs_build(uType* type)
{
    ::STRINGS[0] = uString::Const("ranges.Count >= 1");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno");
    ::STRINGS[2] = uString::Const("result.Count == runs.Count");
    ::STRINGS[3] = uString::Const("previous.Level < range.Level");
    ::TYPES[0] = ::g::Uno::Collections::Stack_typeof()->MakeType(Runs__Range_typeof(), NULL);
    ::TYPES[1] = uObject_typeof()->Array();
    ::TYPES[2] = ::g::Fuse::Text::SinglyLinkedList_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(::TYPES[3/*Uno.Collections.List<Fuse.Text.ShapedRun>*/], NULL);
    ::TYPES[5] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[3/*Uno.Collections.List<Fuse.Text.ShapedRun>*/], NULL);
    type->Reflection.SetFunctions(3,
        new uFunction("GetLogical", NULL, (void*)Runs__GetLogical_fn, 0, true, ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::Bidirectional::Run_typeof(), NULL), 1, ::g::Fuse::Text::Substring_typeof()),
        new uFunction("GetVisual", NULL, (void*)Runs__GetVisual1_fn, 0, true, ::TYPES[3/*Uno.Collections.List<Fuse.Text.ShapedRun>*/], 1, ::TYPES[3/*Uno.Collections.List<Fuse.Text.ShapedRun>*/]),
        new uFunction("GetVisual", NULL, (void*)Runs__GetVisual2_fn, 0, true, ::TYPES[4/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>*/], 1, ::TYPES[4/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>*/]));
}

uClassType* Runs_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Bidirectional.Runs", options);
    type->fp_build_ = Runs_build;
    return type;
}

// public static Uno.Collections.List<Fuse.Text.Bidirectional.Run> GetLogical(Fuse.Text.Substring text) :43
void Runs__GetLogical_fn(::g::Fuse::Text::Substring* text, ::g::Uno::Collections::List** __retval)
{
    *__retval = Runs::GetLogical(text);
}

// private static Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> GetVisual(Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> run) :72
void Runs__GetVisual_fn(::g::Fuse::Text::SinglyLinkedList* run, ::g::Fuse::Text::SinglyLinkedList** __retval)
{
    *__retval = Runs::GetVisual(run);
}

// public static Uno.Collections.List<Fuse.Text.ShapedRun> GetVisual(Uno.Collections.List<Fuse.Text.ShapedRun> runs) :52
void Runs__GetVisual1_fn(::g::Uno::Collections::List* runs, ::g::Uno::Collections::List** __retval)
{
    *__retval = Runs::GetVisual1(runs);
}

// public static Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> GetVisual(Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> lines) :62
void Runs__GetVisual2_fn(::g::Uno::Collections::List* lines, ::g::Uno::Collections::List** __retval)
{
    *__retval = Runs::GetVisual2(lines);
}

// private static bool IsRightToLeft(int level) :124
void Runs__IsRightToLeft_fn(int* level, bool* __retval)
{
    *__retval = Runs::IsRightToLeft(*level);
}

// private static void MergeRange(Uno.Collections.Stack<Fuse.Text.Bidirectional.Runs.Range> ranges, Fuse.Text.Bidirectional.Runs.Range range) :129
void Runs__MergeRange_fn(::g::Uno::Collections::Stack* ranges, Runs__Range* range)
{
    Runs::MergeRange(ranges, range);
}

// private static bool TryMergeRangeWithPrevious(Uno.Collections.Stack<Fuse.Text.Bidirectional.Runs.Range> ranges, int runLevel) :149
void Runs__TryMergeRangeWithPrevious_fn(::g::Uno::Collections::Stack* ranges, int* runLevel, bool* __retval)
{
    *__retval = Runs::TryMergeRangeWithPrevious(ranges, *runLevel);
}

// public static Uno.Collections.List<Fuse.Text.Bidirectional.Run> GetLogical(Fuse.Text.Substring text) [static] :43
::g::Uno::Collections::List* Runs::GetLogical(::g::Fuse::Text::Substring* text)
{
    uStackFrame __("Fuse.Text.Bidirectional.Runs", "GetLogical(Fuse.Text.Substring)");
    return ::g::Fuse::Text::Bidirectional::Implementation::JavaRuns::GetLogical(text);
}

// private static Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> GetVisual(Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> run) [static] :72
::g::Fuse::Text::SinglyLinkedList* Runs::GetVisual(::g::Fuse::Text::SinglyLinkedList* run)
{
    uStackFrame __("Fuse.Text.Bidirectional.Runs", "GetVisual(Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun>)");
    int assert4;
    ::g::Fuse::Text::ShapedRun* ret6;
    Runs__Range* ret7;
    Runs__Range* ret8;
    Runs__Range* ret9;
    Runs__Range* ret10;

    if (run == NULL)
        return NULL;

    ::g::Uno::Collections::Stack* ranges = (::g::Uno::Collections::Stack*)::g::Uno::Collections::Stack::New1(::TYPES[0/*Uno.Collections.Stack<Fuse.Text.Bidirectional.Runs.Range>*/]);

    while (run != NULL)
    {
        int runLevel = uPtr((::g::Fuse::Text::SinglyLinkedList__get_Value_fn(uPtr(run), &ret6), ret6))->Run().Level;
        ::g::Fuse::Text::SinglyLinkedList* nextRun = (::g::Fuse::Text::SinglyLinkedList*)run->Next;

        while (Runs::TryMergeRangeWithPrevious(ranges, runLevel))
            ;

        if ((uPtr(ranges)->Count() >= 1) && (uPtr((::g::Uno::Collections::Stack__Peek_fn(uPtr(ranges), &ret7), ret7))->Level >= runLevel))
        {
            Runs__Range* range = (::g::Uno::Collections::Stack__Peek_fn(uPtr(ranges), &ret8), ret8);

            if (Runs::IsRightToLeft(runLevel))
            {
                uPtr(run)->Next = uPtr(range)->Left;
                range->Left = run;
            }
            else
            {
                uPtr(uPtr(range)->Right)->Next = run;
                range->Right = run;
            }

            uPtr(range)->Level = runLevel;
        }
        else
            ::g::Uno::Collections::Stack__Push_fn(uPtr(ranges), Runs__Range::New1(runLevel, run, run));

        run = nextRun;
    }

    assert4 = ranges->Count();
    ::g::Uno::Diagnostics::Debug::Assert(assert4 >= 1, ::STRINGS[0/*"ranges.Coun...*/], ::STRINGS[1/*"/Users/most...*/], 111, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Int_typeof(), assert4), uBox<int>(::g::Uno::Int_typeof(), 1)));

    while (ranges->Count() >= 2)
    {
        Runs__Range* range1 = (::g::Uno::Collections::Stack__Pop_fn(uPtr(ranges), &ret9), ret9);
        Runs::MergeRange(ranges, range1);
    }

    Runs__Range* resultRange = (::g::Uno::Collections::Stack__Pop_fn(ranges, &ret10), ret10);
    uPtr(uPtr(resultRange)->Right)->Next = NULL;
    return resultRange->Left;
}

// public static Uno.Collections.List<Fuse.Text.ShapedRun> GetVisual(Uno.Collections.List<Fuse.Text.ShapedRun> runs) [static] :52
::g::Uno::Collections::List* Runs::GetVisual1(::g::Uno::Collections::List* runs)
{
    uStackFrame __("Fuse.Text.Bidirectional.Runs", "GetVisual(Uno.Collections.List<Fuse.Text.ShapedRun>)");
    int assert1;
    int assert2;
    ::g::Fuse::Text::SinglyLinkedList* resultLinkedList = Runs::GetVisual((::g::Fuse::Text::SinglyLinkedList*)::g::Fuse::Text::SinglyLinkedList::FromEnumerable(::TYPES[2/*Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun>*/], (uObject*)runs));
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[3/*Uno.Collections.List<Fuse.Text.ShapedRun>*/]);

    if (resultLinkedList != NULL)
        uPtr(result)->AddRange((uObject*)resultLinkedList);

    assert1 = result->Count();
    assert2 = uPtr(runs)->Count();
    ::g::Uno::Diagnostics::Debug::Assert(assert1 == assert2, ::STRINGS[2/*"result.Coun...*/], ::STRINGS[1/*"/Users/most...*/], 58, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Int_typeof(), assert1), uBox<int>(::g::Uno::Int_typeof(), assert2)));
    return result;
}

// public static Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> GetVisual(Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> lines) [static] :62
::g::Uno::Collections::List* Runs::GetVisual2(::g::Uno::Collections::List* lines)
{
    uStackFrame __("Fuse.Text.Bidirectional.Runs", "GetVisual(Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > ret11;
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>*/]);

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(lines), &ret11), ret11); enum3.MoveNext(::TYPES[5/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>.Enumerator*/]); )
    {
        ::g::Uno::Collections::List* line = enum3.Current(::TYPES[5/*Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>.Enumerator*/]);
        ::g::Uno::Collections::List__Add_fn(uPtr(result), Runs::GetVisual1(line));
    }

    return result;
}

// private static bool IsRightToLeft(int level) [static] :124
bool Runs::IsRightToLeft(int level)
{
    return (level % 2) != 0;
}

// private static void MergeRange(Uno.Collections.Stack<Fuse.Text.Bidirectional.Runs.Range> ranges, Fuse.Text.Bidirectional.Runs.Range range) [static] :129
void Runs::MergeRange(::g::Uno::Collections::Stack* ranges, Runs__Range* range)
{
    uStackFrame __("Fuse.Text.Bidirectional.Runs", "MergeRange(Uno.Collections.Stack<Fuse.Text.Bidirectional.Runs.Range>,Fuse.Text.Bidirectional.Runs.Range)");
    int assert5;
    Runs__Range* ret12;
    assert5 = uPtr(ranges)->Count();
    ::g::Uno::Diagnostics::Debug::Assert(assert5 >= 1, ::STRINGS[0/*"ranges.Coun...*/], ::STRINGS[1/*"/Users/most...*/], 131, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Int_typeof(), assert5), uBox<int>(::g::Uno::Int_typeof(), 1)));
    Runs__Range* previous = (::g::Uno::Collections::Stack__Peek_fn(ranges, &ret12), ret12);
    ::g::Uno::Diagnostics::Debug::Assert(uPtr(previous)->Level < uPtr(range)->Level, ::STRINGS[3/*"previous.Le...*/], ::STRINGS[1/*"/Users/most...*/], 135, uArray::Init<uObject*>(::TYPES[1/*object[]*/], 2, uBox<int>(::g::Uno::Int_typeof(), uPtr(previous)->Level), uBox<int>(::g::Uno::Int_typeof(), uPtr(range)->Level)));

    if (Runs::IsRightToLeft(previous->Level))
    {
        uPtr(uPtr(range)->Right)->Next = uPtr(previous)->Left;
        previous->Left = range->Left;
    }
    else
    {
        uPtr(uPtr(previous)->Right)->Next = uPtr(range)->Left;
        previous->Right = range->Right;
    }
}

// private static bool TryMergeRangeWithPrevious(Uno.Collections.Stack<Fuse.Text.Bidirectional.Runs.Range> ranges, int runLevel) [static] :149
bool Runs::TryMergeRangeWithPrevious(::g::Uno::Collections::Stack* ranges, int runLevel)
{
    uStackFrame __("Fuse.Text.Bidirectional.Runs", "TryMergeRangeWithPrevious(Uno.Collections.Stack<Fuse.Text.Bidirectional.Runs.Range>,int)");
    Runs__Range* ret13;
    Runs__Range* ret14;
    Runs__Range* ret15;

    if ((uPtr(ranges)->Count() >= 2) && (uPtr((::g::Uno::Collections::Stack__Peek_fn(uPtr(ranges), &ret13), ret13))->Level > runLevel))
    {
        Runs__Range* range = (::g::Uno::Collections::Stack__Pop_fn(uPtr(ranges), &ret14), ret14);

        if (uPtr((::g::Uno::Collections::Stack__Peek_fn(ranges, &ret15), ret15))->Level >= runLevel)
        {
            Runs::MergeRange(ranges, range);
            return true;
        }

        ::g::Uno::Collections::Stack__Push_fn(ranges, range);
    }

    return false;
}
// }

}}}} // ::g::Fuse::Text::Bidirectional
