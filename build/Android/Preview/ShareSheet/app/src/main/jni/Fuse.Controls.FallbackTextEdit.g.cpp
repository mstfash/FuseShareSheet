// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.FallbackTextEdit.DegreeSpan.h>
#include <Fuse.Controls.FallbackTextEdit.LineCache.h>
#include <Fuse.Controls.FallbackTextEdit.LineCacheLine.h>
#include <Fuse.Controls.FallbackTextEdit.LineCachePasswordTransform.h>
#include <Fuse.Controls.FallbackTextEdit.LineCacheTransform.h>
#include <Fuse.Controls.FallbackTextEdit.SwipeGestureHelper.h>
#include <Fuse.Controls.FallbackTextEdit.TextPosition.h>
#include <Fuse.Controls.FallbackTextEdit.TextSpan.h>
#include <Fuse.Controls.FallbackTextEdit.TextWindow.h>
#include <Fuse.Controls.FallbackTextRenderer.DefaultTextRenderer.h>
#include <Fuse.Controls.FallbackTextRenderer.WordWrapInfo.h>
#include <Fuse.Controls.FallbackTextRenderer.WordWrapper.h>
#include <Fuse.Controls.FallbackTextRenderer.WrappedLine.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Elements.Internal.ElementDraw.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualBounds.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4x4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.String.h>
#include <Uno.Vector.h>
static uString* STRINGS[2];
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextEdit{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextedit/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------

// internal sealed class DegreeSpan :19
// {
static void DegreeSpan_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::DegreeSpan, _a), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::DegreeSpan, _b), 0);
}

uType* DegreeSpan_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DegreeSpan);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextEdit.DegreeSpan", options);
    type->fp_build_ = DegreeSpan_build;
    return type;
}

// public DegreeSpan(float a, float b) :23
void DegreeSpan__ctor__fn(DegreeSpan* __this, float* a, float* b)
{
    __this->ctor_(*a, *b);
}

// public bool IsWithinBounds(float x) :28
void DegreeSpan__IsWithinBounds_fn(DegreeSpan* __this, float* x, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*x);
}

// public DegreeSpan New(float a, float b) :23
void DegreeSpan__New1_fn(float* a, float* b, DegreeSpan** __retval)
{
    *__retval = DegreeSpan::New1(*a, *b);
}

// public DegreeSpan(float a, float b) [instance] :23
void DegreeSpan::ctor_(float a, float b)
{
    _a = a;
    _b = b;
}

// public bool IsWithinBounds(float x) [instance] :28
bool DegreeSpan::IsWithinBounds(float x)
{
    float angle1 = _a;
    float angle2 = _b;
    float rAngle = ::g::Uno::Math::Mod1(::g::Uno::Math::Mod1(angle2 - angle1, 360.0f) + 360.0f, 360.0f);

    if (rAngle >= 180.0f)
    {
        float a = angle1;
        angle1 = angle2;
        angle2 = a;
    }

    if (angle1 <= angle2)
        return (x >= angle1) && (x <= angle2);
    else
        return (x >= angle2) || (x <= angle2);
}

// public DegreeSpan New(float a, float b) [static] :23
DegreeSpan* DegreeSpan::New1(float a, float b)
{
    DegreeSpan* obj1 = (DegreeSpan*)uNew(DegreeSpan_typeof());
    obj1->ctor_(a, b);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextedit/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------

// internal sealed class LineCache :76
// {
static void LineCache_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("\n"
        "");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(3/*First<Fuse.Controls.FallbackTextEdit.LineCacheLine>*/, ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCache, _invalideLayout), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCache, _isMultiline), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCache, _isTextValid), 0,
        ::TYPES[0/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>*/], offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCache, _lines), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCache, _onTextChanged), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCache, _text), 0,
        ::g::Fuse::Controls::FallbackTextEdit::LineCacheTransform_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCache, _transform), 0);
}

uType* LineCache_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(LineCache);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextEdit.LineCache", options);
    type->fp_build_ = LineCache_build;
    return type;
}

// public LineCache(Uno.Action onTextChanged, Uno.Action invalideLayout, bool isMultiline) :137
void LineCache__ctor__fn(LineCache* __this, uDelegate* onTextChanged, uDelegate* invalideLayout, bool* isMultiline)
{
    __this->ctor_(onTextChanged, invalideLayout, *isMultiline);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition BoundsToTextPos(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Fuse.Controls.TextAlignment textAlignment, float boundsWidth, float2 p) :416
void LineCache__BoundsToTextPos_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int* textAlignment, float* boundsWidth, ::g::Uno::Float2* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->BoundsToTextPos(wrapInfo, *textAlignment, *boundsWidth, *p);
}

// private Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine> DecomposeLines(string text) :498
void LineCache__DecomposeLines_fn(LineCache* __this, uString* text, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->DecomposeLines(text);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition DeleteSpan(Fuse.Controls.FallbackTextEdit.TextSpan s) :206
void LineCache__DeleteSpan_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextSpan* s, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->DeleteSpan(s);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition End(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Fuse.Controls.FallbackTextEdit.TextPosition p) :396
void LineCache__End_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->End(wrapInfo, p);
}

// public float2 GetBoundsSize(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo) :401
void LineCache__GetBoundsSize_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetBoundsSize(wrapInfo);
}

// public Fuse.Controls.FallbackTextEdit.TextSpan GetFullTextSpan() :453
void LineCache__GetFullTextSpan_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextSpan** __retval)
{
    *__retval = __this->GetFullTextSpan();
}

// public Fuse.Controls.FallbackTextEdit.TextPosition GetLastTextPos() :448
void LineCache__GetLastTextPos_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->GetLastTextPos();
}

// public string GetString(Fuse.Controls.FallbackTextEdit.TextSpan s) :458
void LineCache__GetString_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextSpan* s, uString** __retval)
{
    *__retval = __this->GetString(s);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition Home(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Fuse.Controls.FallbackTextEdit.TextPosition p) :391
void LineCache__Home_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->Home(wrapInfo, p);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition InsertChar(Fuse.Controls.FallbackTextEdit.TextPosition p, char c) :146
void LineCache__InsertChar_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, uChar* c, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->InsertChar(p, *c);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition InsertNewline(Fuse.Controls.FallbackTextEdit.TextPosition p) :153
void LineCache__InsertNewline_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->InsertNewline(p);
}

// private void InvalidateLayout() :492
void LineCache__InvalidateLayout_fn(LineCache* __this)
{
    __this->InvalidateLayout();
}

// private void InvalidateText([bool noChange]) :483
void LineCache__InvalidateText_fn(LineCache* __this, bool* noChange)
{
    __this->InvalidateText(*noChange);
}

// public void InvalidateVisual() :477
void LineCache__InvalidateVisual_fn(LineCache* __this)
{
    __this->InvalidateVisual();
}

// private bool IsWordBreaker(char c) :361
void LineCache__IsWordBreaker_fn(LineCache* __this, uChar* c, bool* __retval)
{
    *__retval = __this->IsWordBreaker(*c);
}

// public Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine> get_Lines() :81
void LineCache__get_Lines_fn(LineCache* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->Lines();
}

// public LineCache New(Uno.Action onTextChanged, Uno.Action invalideLayout, bool isMultiline) :137
void LineCache__New1_fn(uDelegate* onTextChanged, uDelegate* invalideLayout, bool* isMultiline, LineCache** __retval)
{
    *__retval = LineCache::New1(onTextChanged, invalideLayout, *isMultiline);
}

// private int NextWordLeft(string str, int startIdx) :281
void LineCache__NextWordLeft_fn(LineCache* __this, uString* str, int* startIdx, int* __retval)
{
    *__retval = __this->NextWordLeft(str, *startIdx);
}

// private int NextWordRight(string str, int startIdx) :328
void LineCache__NextWordRight_fn(LineCache* __this, uString* str, int* startIdx, int* __retval)
{
    *__retval = __this->NextWordRight(str, *startIdx);
}

// public string get_Text() :94
void LineCache__get_Text_fn(LineCache* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value) :107
void LineCache__set_Text_fn(LineCache* __this, uString* value)
{
    __this->Text(value);
}

// public float2 TextPosToBounds(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Fuse.Controls.TextAlignment textAlignment, float boundsWidth, Fuse.Controls.FallbackTextEdit.TextPosition p) :437
void LineCache__TextPosToBounds_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int* textAlignment, float* boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->TextPosToBounds(wrapInfo, *textAlignment, *boundsWidth, p);
}

// public Fuse.Controls.FallbackTextEdit.LineCacheTransform get_Transform() :123
void LineCache__get_Transform_fn(LineCache* __this, uObject** __retval)
{
    *__retval = __this->Transform();
}

// public void set_Transform(Fuse.Controls.FallbackTextEdit.LineCacheTransform value) :124
void LineCache__set_Transform_fn(LineCache* __this, uObject* value)
{
    __this->Transform(value);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryBackspace(Fuse.Controls.FallbackTextEdit.TextPosition p) :185
void LineCache__TryBackspace_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->TryBackspace(p);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryDelete(Fuse.Controls.FallbackTextEdit.TextPosition p) :163
void LineCache__TryDelete_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->TryDelete(p);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveDown(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Fuse.Controls.TextAlignment textAlignment, float boundsWidth, Fuse.Controls.FallbackTextEdit.TextPosition p) :382
void LineCache__TryMoveDown_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int* textAlignment, float* boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->TryMoveDown(wrapInfo, *textAlignment, *boundsWidth, p);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveLeft(Fuse.Controls.FallbackTextEdit.TextPosition p) :241
void LineCache__TryMoveLeft_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->TryMoveLeft(p);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveOneWordLeft(Fuse.Controls.FallbackTextEdit.TextPosition p) :267
void LineCache__TryMoveOneWordLeft_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->TryMoveOneWordLeft(p);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveOneWordRight(Fuse.Controls.FallbackTextEdit.TextPosition p) :314
void LineCache__TryMoveOneWordRight_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->TryMoveOneWordRight(p);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveRight(Fuse.Controls.FallbackTextEdit.TextPosition p) :254
void LineCache__TryMoveRight_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->TryMoveRight(p);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveUp(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Fuse.Controls.TextAlignment textAlignment, float boundsWidth, Fuse.Controls.FallbackTextEdit.TextPosition p) :373
void LineCache__TryMoveUp_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int* textAlignment, float* boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->TryMoveUp(wrapInfo, *textAlignment, *boundsWidth, p);
}

// public LineCache(Uno.Action onTextChanged, Uno.Action invalideLayout, bool isMultiline) [instance] :137
void LineCache::ctor_(uDelegate* onTextChanged, uDelegate* invalideLayout, bool isMultiline)
{
    _isTextValid = true;
    _isMultiline = isMultiline;
    _onTextChanged = onTextChanged;
    _invalideLayout = invalideLayout;
    _lines = NULL;
}

// public Fuse.Controls.FallbackTextEdit.TextPosition BoundsToTextPos(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Fuse.Controls.TextAlignment textAlignment, float boundsWidth, float2 p) [instance] :416
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::BoundsToTextPos(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "BoundsToTextPos(Fuse.Controls.FallbackTextRenderer.WordWrapInfo,Fuse.Controls.TextAlignment,float,float2)");
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret11;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret12;
    int l = 0;
    float startY = 0.0f;

    if (p.Y > 0.0f)

        for (; l < (uPtr(Lines())->Count() - 1); l++)
        {
            float lineHeight = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(l), &ret11), ret11))->GetTotalHeight(wrapInfo);
            float endY = startY + lineHeight;

            if ((p.Y >= startY) && (p.Y < endY))
                break;

            startY = endY;
        }

    int c = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(l), &ret12), ret12))->BoundsToPos(wrapInfo, textAlignment, boundsWidth, ::g::Uno::Float2__New2(p.X, p.Y - startY));
    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(l, c);
}

// private Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine> DecomposeLines(string text) [instance] :498
::g::Uno::Collections::List* LineCache::DecomposeLines(uString* text)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "DecomposeLines(string)");
    uArray* array7;
    int index8;
    int length9;
    ::g::Uno::Collections::List* lines = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>*/]);

    if (::g::Uno::String::op_Inequality(text, NULL))
    {
        if (_isMultiline)

            for (array7 = ::g::Uno::String::Split(uPtr(text), uArray::Init<int>(::TYPES[1/*char[]*/], 1, 10)), index8 = 0, length9 = uPtr(array7)->Length(); index8 < length9; ++index8)
            {
                uString* line = uPtr(array7)->Strong<uString*>(index8);
                ::g::Uno::Collections::List__Add_fn(uPtr(lines), ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine::New1(line, _transform));
            }
        else
            ::g::Uno::Collections::List__Add_fn(uPtr(lines), ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine::New1(text, _transform));
    }

    if (lines->Count() == 0)
        ::g::Uno::Collections::List__Add_fn(uPtr(lines), ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine::New1(::g::Uno::String::Empty(), _transform));

    return lines;
}

// public Fuse.Controls.FallbackTextEdit.TextPosition DeleteSpan(Fuse.Controls.FallbackTextEdit.TextSpan s) [instance] :206
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::DeleteSpan(::g::Fuse::Controls::FallbackTextEdit::TextSpan* s)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "DeleteSpan(Fuse.Controls.FallbackTextEdit.TextSpan)");
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret13;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret14;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret15;

    if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Equality(s, GetFullTextSpan()))
        Text(::STRINGS[0/*""*/]);
    else

        for (int i = uPtr(Lines())->Count() - 1; i >= 0; i--)
        {
            ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* line = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(i), &ret13), ret13);
            ::g::Fuse::Controls::FallbackTextEdit::TextSpan* lineSpan = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::New1(::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(i, 0), ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(i, uPtr(uPtr(line)->Text())->Length()));
            ::g::Fuse::Controls::FallbackTextEdit::TextSpan* intersection = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::Intersection(lineSpan, s);

            if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Equality(intersection, NULL))
                continue;

            if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Equality(intersection, lineSpan))
                uPtr(Lines())->RemoveAt(i);
            else
            {
                uString* text = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(i), &ret14), ret14))->Text();
                uString* start = ::g::Uno::String::Substring1(uPtr(text), 0, uPtr(uPtr(intersection)->Start)->Char);
                uString* end = ::g::Uno::String::Substring1(text, uPtr(intersection->End)->Char, text->Length() - uPtr(intersection->End)->Char);
                uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(i), &ret15), ret15))->Text(::g::Uno::String::op_Addition2(start, end));
            }
        }

    InvalidateText(false);
    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(::g::Uno::Math::Min8(uPtr(uPtr(s)->Start)->Line, uPtr(Lines())->Count() - 1), uPtr(uPtr(s)->Start)->Char);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition End(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :396
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::End(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "End(Fuse.Controls.FallbackTextRenderer.WordWrapInfo,Fuse.Controls.FallbackTextEdit.TextPosition)");
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret16;
    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(uPtr(p)->Line, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret16), ret16))->End(wrapInfo, uPtr(p)->Char));
}

// public float2 GetBoundsSize(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo) [instance] :401
::g::Uno::Float2 LineCache::GetBoundsSize(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "GetBoundsSize(Fuse.Controls.FallbackTextRenderer.WordWrapInfo)");
    uArray* array3;
    int index4;
    int length5;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine*> > ret17;
    float maxWidth = 0.0f;
    float height = 0.0f;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(Lines()), &ret17), ret17); enum2.MoveNext(::TYPES[2/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>.Enumerator*/]); )
    {
        ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* line = enum2.Current(::TYPES[2/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>.Enumerator*/]);

        for (array3 = uPtr(line)->GetWrappedLines(wrapInfo), index4 = 0, length5 = uPtr(array3)->Length(); index4 < length5; ++index4)
        {
            ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine* wrappedLine = uPtr(array3)->Strong< ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine*>(index4);
            maxWidth = ::g::Uno::Math::Max1(maxWidth, uPtr(wrappedLine)->LineWidth);
            height = height + uPtr(wrapInfo)->LineHeight;
        }
    }

    return ::g::Uno::Float2__New2(maxWidth, height);
}

// public Fuse.Controls.FallbackTextEdit.TextSpan GetFullTextSpan() [instance] :453
::g::Fuse::Controls::FallbackTextEdit::TextSpan* LineCache::GetFullTextSpan()
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "GetFullTextSpan()");
    return ::g::Fuse::Controls::FallbackTextEdit::TextSpan::New1(::g::Fuse::Controls::FallbackTextEdit::TextPosition::Default(), GetLastTextPos());
}

// public Fuse.Controls.FallbackTextEdit.TextPosition GetLastTextPos() [instance] :448
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::GetLastTextPos()
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "GetLastTextPos()");
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret18;
    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(uPtr(Lines())->Count() - 1, uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(Lines())->Count() - 1), &ret18), ret18))->Text())->Length());
}

// public string GetString(Fuse.Controls.FallbackTextEdit.TextSpan s) [instance] :458
uString* LineCache::GetString(::g::Fuse::Controls::FallbackTextEdit::TextSpan* s)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "GetString(Fuse.Controls.FallbackTextEdit.TextSpan)");
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret19;
    uString* ret = ::STRINGS[0/*""*/];

    for (int i = uPtr(uPtr(s)->Start)->Line; i <= uPtr(s->End)->Line; i++)
    {
        ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* line = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(i), &ret19), ret19);
        ::g::Fuse::Controls::FallbackTextEdit::TextSpan* lineSpan = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::New1(::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(i, 0), ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(i, uPtr(uPtr(line)->Text())->Length()));
        ::g::Fuse::Controls::FallbackTextEdit::TextSpan* intersection = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::Intersection(lineSpan, s);

        if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Equality(intersection, NULL))
            continue;

        ret = ::g::Uno::String::op_Addition2(ret, ::g::Uno::String::Substring1(uPtr(line->Text()), uPtr(uPtr(intersection)->Start)->Char, uPtr(uPtr(intersection)->End)->Char - uPtr(uPtr(intersection)->Start)->Char));
    }

    return ret;
}

// public Fuse.Controls.FallbackTextEdit.TextPosition Home(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :391
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::Home(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "Home(Fuse.Controls.FallbackTextRenderer.WordWrapInfo,Fuse.Controls.FallbackTextEdit.TextPosition)");
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret20;
    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(uPtr(p)->Line, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret20), ret20))->Home(wrapInfo, uPtr(p)->Char));
}

// public Fuse.Controls.FallbackTextEdit.TextPosition InsertChar(Fuse.Controls.FallbackTextEdit.TextPosition p, char c) [instance] :146
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::InsertChar(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, uChar c)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "InsertChar(Fuse.Controls.FallbackTextEdit.TextPosition,char)");
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret21;
    uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret21), ret21))->InsertChar(uPtr(p)->Char, c);
    InvalidateText(false);
    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(p->Line, p->Char + 1);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition InsertNewline(Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :153
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::InsertNewline(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "InsertNewline(Fuse.Controls.FallbackTextEdit.TextPosition)");
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret22;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* currentLine = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret22), ret22);
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* newLine = ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine::New1(::g::Uno::String::Substring(uPtr(uPtr(currentLine)->Text()), p->Char), _transform);
    currentLine->Text(::g::Uno::String::Substring1(uPtr(currentLine->Text()), 0, p->Char));
    ::g::Uno::Collections::List__Insert_fn(uPtr(Lines()), uCRef<int>(p->Line + 1), newLine);
    InvalidateText(false);
    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(p->Line + 1, 0);
}

// private void InvalidateLayout() [instance] :492
void LineCache::InvalidateLayout()
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "InvalidateLayout()");

    if (::g::Uno::Delegate::op_Inequality(_invalideLayout, NULL))
        uPtr(_invalideLayout)->InvokeVoid();
}

// private void InvalidateText([bool noChange]) [instance] :483
void LineCache::InvalidateText(bool noChange)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "InvalidateText([bool])");
    _text = NULL;
    _isTextValid = false;

    if (!noChange && ::g::Uno::Delegate::op_Inequality(_onTextChanged, NULL))
        uPtr(_onTextChanged)->InvokeVoid();

    InvalidateLayout();
}

// public void InvalidateVisual() [instance] :477
void LineCache::InvalidateVisual()
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "InvalidateVisual()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine*> > ret23;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine*> > enum6 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(Lines()), &ret23), ret23); enum6.MoveNext(::TYPES[2/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>.Enumerator*/]); )
    {
        ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* line = enum6.Current(::TYPES[2/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>.Enumerator*/]);
        uPtr(line)->Invalidate();
    }

    InvalidateLayout();
}

// private bool IsWordBreaker(char c) [instance] :361
bool LineCache::IsWordBreaker(uChar c)
{
    return (((((c == ' ') || (c == 9)) || (c == 10)) || (c == '.')) || (c == ',')) || (c == ';');
}

// public Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine> get_Lines() [instance] :81
::g::Uno::Collections::List* LineCache::Lines()
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "get_Lines()");

    if (_lines == NULL)
        _lines = DecomposeLines(_text);

    return _lines;
}

// private int NextWordLeft(string str, int startIdx) [instance] :281
int LineCache::NextWordLeft(uString* str, int startIdx)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "NextWordLeft(string,int)");
    bool hitWordBreak = false;
    int nextRealChar = -1;
    int i = startIdx - 1;
    bool startsWithRealChar = !IsWordBreaker(uPtr(str)->Item(i));

    for (; i >= 0; --i)
    {
        uChar c = uPtr(str)->Item(i);

        if (IsWordBreaker(c))
        {
            hitWordBreak = true;

            if (startsWithRealChar)
            {
                nextRealChar = i;
                break;
            }
        }
        else if (hitWordBreak)
        {
            startsWithRealChar = true;
            hitWordBreak = false;
        }
    }

    if (i == -1)
        return 0;

    return nextRealChar + 1;
}

// private int NextWordRight(string str, int startIdx) [instance] :328
int LineCache::NextWordRight(uString* str, int startIdx)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "NextWordRight(string,int)");
    bool hitWordBreak = false;
    int nextRealChar = -1;
    int i = startIdx;
    bool startsWithRealChar = !IsWordBreaker(uPtr(str)->Item(i));

    for (; i < str->Length(); ++i)
    {
        uChar c = uPtr(str)->Item(i);

        if (IsWordBreaker(c))
        {
            hitWordBreak = true;

            if (startsWithRealChar)
            {
                nextRealChar = i;
                break;
            }
        }
        else if (hitWordBreak)
        {
            startsWithRealChar = true;
            hitWordBreak = false;
        }
    }

    if (i == str->Length())
        return i;

    return nextRealChar;
}

// public string get_Text() [instance] :94
uString* LineCache::Text()
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "get_Text()");
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret37;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret38;

    if (!_isTextValid)
    {
        _text = uPtr((::g::Uno::Collections::EnumerableExtensions__First_fn(::TYPES[3/*Uno.Collections.EnumerableExtensions.First<Fuse.Controls.FallbackTextEdit.LineCacheLine>*/], (uObject*)Lines(), &ret37), ret37))->Text();

        for (int i = 1; i < uPtr(Lines())->Count(); i++)
            _text = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(_text, ::STRINGS[1/*"\n"*/]), uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(i), &ret38), ret38))->Text());

        _isTextValid = true;
    }

    return _text;
}

// public void set_Text(string value) [instance] :107
void LineCache::Text(uString* value)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "set_Text(string)");

    if (::g::Uno::String::op_Equality(value, Text()))
        return;

    _text = value;
    _isTextValid = true;
    _lines = NULL;
}

// public float2 TextPosToBounds(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Fuse.Controls.TextAlignment textAlignment, float boundsWidth, Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :437
::g::Uno::Float2 LineCache::TextPosToBounds(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "TextPosToBounds(Fuse.Controls.FallbackTextRenderer.WordWrapInfo,Fuse.Controls.TextAlignment,float,Fuse.Controls.FallbackTextEdit.TextPosition)");
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret24;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret25;
    float startY = 0.0f;

    for (int i = 0; i < uPtr(p)->Line; i++)
        startY = startY + uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(i), &ret24), ret24))->GetTotalHeight(wrapInfo);

    ::g::Uno::Float2 linePos = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret25), ret25))->PosToBounds(wrapInfo, textAlignment, boundsWidth, uPtr(p)->Char);
    return ::g::Uno::Float2__New2(linePos.X, startY + linePos.Y);
}

// public Fuse.Controls.FallbackTextEdit.LineCacheTransform get_Transform() [instance] :123
uObject* LineCache::Transform()
{
    return _transform;
}

// public void set_Transform(Fuse.Controls.FallbackTextEdit.LineCacheTransform value) [instance] :124
void LineCache::Transform(uObject* value)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "set_Transform(Fuse.Controls.FallbackTextEdit.LineCacheTransform)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine*> > ret39;
    _transform = value;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(Lines()), &ret39), ret39); enum1.MoveNext(::TYPES[2/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>.Enumerator*/]); )
    {
        ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* line = enum1.Current(::TYPES[2/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>.Enumerator*/]);
        uPtr(line)->Transform(_transform);
    }

    InvalidateText(true);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryBackspace(Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :185
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::TryBackspace(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "TryBackspace(Fuse.Controls.FallbackTextEdit.TextPosition)");
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret26;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret27;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret28;

    if (uPtr(p)->Char == 0)
    {
        if (uPtr(p)->Line == 0)
            return p;

        ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* prevLine = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line - 1), &ret26), ret26);
        ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* currentLine = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(p->Line), &ret27), ret27);
        int newChar = uPtr(uPtr(prevLine)->Text())->Length();
        prevLine->Text(::g::Uno::String::op_Addition2(prevLine->Text(), uPtr(currentLine)->Text()));
        uPtr(Lines())->RemoveAt(p->Line);
        InvalidateText(false);
        return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(p->Line - 1, newChar);
    }

    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* ret = ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(uPtr(p)->Line, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret28), ret28))->Backspace(uPtr(p)->Char));
    InvalidateText(false);
    return ret;
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryDelete(Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :163
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::TryDelete(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "TryDelete(Fuse.Controls.FallbackTextEdit.TextPosition)");
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret29;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret30;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret31;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* line = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret29), ret29);

    if (p->Char == uPtr(uPtr(line)->Text())->Length())
    {
        if (uPtr(p)->Line == (uPtr(Lines())->Count() - 1))
            return p;

        ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* nextLine = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line + 1), &ret30), ret30);
        uPtr(line)->Text(::g::Uno::String::op_Addition2(uPtr(line)->Text(), uPtr(nextLine)->Text()));
        uPtr(Lines())->RemoveAt(p->Line + 1);
        InvalidateText(false);
    }
    else
    {
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret31), ret31))->Delete(uPtr(p)->Char);
        InvalidateText(false);
    }

    return p;
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveDown(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Fuse.Controls.TextAlignment textAlignment, float boundsWidth, Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :382
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::TryMoveDown(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "TryMoveDown(Fuse.Controls.FallbackTextRenderer.WordWrapInfo,Fuse.Controls.TextAlignment,float,Fuse.Controls.FallbackTextEdit.TextPosition)");
    ::g::Uno::Float2 lineBounds = TextPosToBounds(wrapInfo, textAlignment, boundsWidth, p);
    ::g::Uno::Float2 nextLineBounds = ::g::Uno::Float2__New2(lineBounds.X, lineBounds.Y + (uPtr(wrapInfo)->LineHeight * 1.5f));
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* nextLineTextPos = BoundsToTextPos(wrapInfo, textAlignment, boundsWidth, nextLineBounds);
    return nextLineTextPos;
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveLeft(Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :241
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::TryMoveLeft(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "TryMoveLeft(Fuse.Controls.FallbackTextEdit.TextPosition)");
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret32;

    if (uPtr(p)->Char == 0)
    {
        if (uPtr(p)->Line == 0)
            return p;

        ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* prevLine = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line - 1), &ret32), ret32);
        return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(p->Line - 1, uPtr(uPtr(prevLine)->Text())->Length());
    }

    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(uPtr(p)->Line, uPtr(p)->Char - 1);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveOneWordLeft(Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :267
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::TryMoveOneWordLeft(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "TryMoveOneWordLeft(Fuse.Controls.FallbackTextEdit.TextPosition)");
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret33;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret34;

    if (uPtr(p)->Char == 0)
    {
        if (uPtr(p)->Line == 0)
            return p;

        ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* prevLine = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line - 1), &ret33), ret33);
        return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(p->Line - 1, uPtr(uPtr(prevLine)->Text())->Length());
    }

    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(uPtr(p)->Line, NextWordLeft(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret34), ret34))->Text(), uPtr(p)->Char));
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveOneWordRight(Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :314
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::TryMoveOneWordRight(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "TryMoveOneWordRight(Fuse.Controls.FallbackTextEdit.TextPosition)");
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret35;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* line = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret35), ret35);

    if (p->Char >= uPtr(uPtr(line)->Text())->Length())
    {
        if (uPtr(p)->Line == (uPtr(Lines())->Count() - 1))
            return p;

        return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(uPtr(p)->Line + 1, 0);
    }

    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(p->Line, NextWordRight(uPtr(line)->Text(), p->Char));
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveRight(Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :254
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::TryMoveRight(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "TryMoveRight(Fuse.Controls.FallbackTextEdit.TextPosition)");
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret36;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* line = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret36), ret36);

    if (p->Char >= uPtr(uPtr(line)->Text())->Length())
    {
        if (uPtr(p)->Line == (uPtr(Lines())->Count() - 1))
            return p;

        return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(uPtr(p)->Line + 1, 0);
    }

    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(p->Line, p->Char + 1);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveUp(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Fuse.Controls.TextAlignment textAlignment, float boundsWidth, Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :373
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::TryMoveUp(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCache", "TryMoveUp(Fuse.Controls.FallbackTextRenderer.WordWrapInfo,Fuse.Controls.TextAlignment,float,Fuse.Controls.FallbackTextEdit.TextPosition)");
    ::g::Uno::Float2 lineBounds = TextPosToBounds(wrapInfo, textAlignment, boundsWidth, p);
    ::g::Uno::Float2 prevLineBounds = ::g::Uno::Float2__New2(lineBounds.X, lineBounds.Y - (uPtr(wrapInfo)->LineHeight * 0.5f));
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* prevLineTextPos = BoundsToTextPos(wrapInfo, textAlignment, boundsWidth, prevLineBounds);
    return prevLineTextPos;
}

// public LineCache New(Uno.Action onTextChanged, Uno.Action invalideLayout, bool isMultiline) [static] :137
LineCache* LineCache::New1(uDelegate* onTextChanged, uDelegate* invalideLayout, bool isMultiline)
{
    LineCache* obj10 = (LineCache*)uNew(LineCache_typeof());
    obj10->ctor_(onTextChanged, invalideLayout, isMultiline);
    return obj10;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextedit/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------

// internal sealed class LineCacheLine :532
// {
static void LineCacheLine_build(uType* type)
{
    ::TYPES[4] = ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine_typeof()->Array();
    ::TYPES[5] = ::g::Fuse::Controls::FallbackTextEdit::LineCacheTransform_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine, _text), 0,
        ::TYPES[5/*Fuse.Controls.FallbackTextEdit.LineCacheTransform*/], offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine, _transform), 0,
        ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine, _wordWrapInfoCache), 0,
        ::TYPES[4/*Fuse.Controls.FallbackTextRenderer.WrappedLine[]*/], offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine, _wrappedLinesCache), 0);
}

uType* LineCacheLine_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(LineCacheLine);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextEdit.LineCacheLine", options);
    type->fp_build_ = LineCacheLine_build;
    return type;
}

// public LineCacheLine(string text, Fuse.Controls.FallbackTextEdit.LineCacheTransform transform) :588
void LineCacheLine__ctor__fn(LineCacheLine* __this, uString* text, uObject* transform)
{
    __this->ctor_(text, transform);
}

// public int Backspace(int p) :606
void LineCacheLine__Backspace_fn(LineCacheLine* __this, int* p, int* __retval)
{
    *__retval = __this->Backspace(*p);
}

// public int BoundsToPos(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Fuse.Controls.TextAlignment textAlignment, float boundsWidth, float2 p) :622
void LineCacheLine__BoundsToPos_fn(LineCacheLine* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int* textAlignment, float* boundsWidth, ::g::Uno::Float2* p, int* __retval)
{
    *__retval = __this->BoundsToPos(wrapInfo, *textAlignment, *boundsWidth, *p);
}

// private Fuse.Controls.FallbackTextRenderer.WrappedLine BoundsToWrappedLine(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, float2 p) :645
void LineCacheLine__BoundsToWrappedLine_fn(LineCacheLine* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Uno::Float2* p, ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine** __retval)
{
    *__retval = __this->BoundsToWrappedLine(wrapInfo, *p);
}

// public void Delete(int p) :601
void LineCacheLine__Delete_fn(LineCacheLine* __this, int* p)
{
    __this->Delete(*p);
}

// public int End(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, int p) :617
void LineCacheLine__End_fn(LineCacheLine* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int* p, int* __retval)
{
    *__retval = __this->End(wrapInfo, *p);
}

// public float GetTotalHeight(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo) :639
void LineCacheLine__GetTotalHeight_fn(LineCacheLine* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, float* __retval)
{
    *__retval = __this->GetTotalHeight(wrapInfo);
}

// public Fuse.Controls.FallbackTextRenderer.WrappedLine[] GetWrappedLines(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo) :572
void LineCacheLine__GetWrappedLines_fn(LineCacheLine* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, uArray** __retval)
{
    *__retval = __this->GetWrappedLines(wrapInfo);
}

// public int Home(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, int p) :612
void LineCacheLine__Home_fn(LineCacheLine* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int* p, int* __retval)
{
    *__retval = __this->Home(wrapInfo, *p);
}

// public void InsertChar(int p, char c) :594
void LineCacheLine__InsertChar_fn(LineCacheLine* __this, int* p, uChar* c)
{
    __this->InsertChar(*p, *c);
}

// public void Invalidate() :679
void LineCacheLine__Invalidate_fn(LineCacheLine* __this)
{
    __this->Invalidate();
}

// public LineCacheLine New(string text, Fuse.Controls.FallbackTextEdit.LineCacheTransform transform) :588
void LineCacheLine__New1_fn(uString* text, uObject* transform, LineCacheLine** __retval)
{
    *__retval = LineCacheLine::New1(text, transform);
}

// public float2 PosToBounds(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Fuse.Controls.TextAlignment textAlignment, float boundsWidth, int p) :630
void LineCacheLine__PosToBounds_fn(LineCacheLine* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int* textAlignment, float* boundsWidth, int* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PosToBounds(wrapInfo, *textAlignment, *boundsWidth, *p);
}

// private Fuse.Controls.FallbackTextRenderer.WrappedLine PosToWrappedLine(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, int p) :665
void LineCacheLine__PosToWrappedLine_fn(LineCacheLine* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int* p, ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine** __retval)
{
    *__retval = __this->PosToWrappedLine(wrapInfo, *p);
}

// public string get_Text() :537
void LineCacheLine__get_Text_fn(LineCacheLine* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value) :538
void LineCacheLine__set_Text_fn(LineCacheLine* __this, uString* value)
{
    __this->Text(value);
}

// public Fuse.Controls.FallbackTextEdit.LineCacheTransform get_Transform() :551
void LineCacheLine__get_Transform_fn(LineCacheLine* __this, uObject** __retval)
{
    *__retval = __this->Transform();
}

// public void set_Transform(Fuse.Controls.FallbackTextEdit.LineCacheTransform value) :552
void LineCacheLine__set_Transform_fn(LineCacheLine* __this, uObject* value)
{
    __this->Transform(value);
}

// public string get_VisualText() :561
void LineCacheLine__get_VisualText_fn(LineCacheLine* __this, uString** __retval)
{
    *__retval = __this->VisualText();
}

// public LineCacheLine(string text, Fuse.Controls.FallbackTextEdit.LineCacheTransform transform) [instance] :588
void LineCacheLine::ctor_(uString* text, uObject* transform)
{
    _text = text;
    _transform = transform;
}

// public int Backspace(int p) [instance] :606
int LineCacheLine::Backspace(int p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCacheLine", "Backspace(int)");
    Text(::g::Uno::String::op_Addition2(::g::Uno::String::Substring1(uPtr(Text()), 0, p - 1), ::g::Uno::String::Substring(uPtr(Text()), p)));
    return p - 1;
}

// public int BoundsToPos(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Fuse.Controls.TextAlignment textAlignment, float boundsWidth, float2 p) [instance] :622
int LineCacheLine::BoundsToPos(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCacheLine", "BoundsToPos(Fuse.Controls.FallbackTextRenderer.WordWrapInfo,Fuse.Controls.TextAlignment,float,float2)");
    ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine* wrappedLine = BoundsToWrappedLine(wrapInfo, p);
    float xOffset = uPtr(wrappedLine)->GetXOffset(textAlignment, boundsWidth, uPtr(wrapInfo)->AbsoluteZoom);
    return wrappedLine->BoundsToPos(wrapInfo, p.X - xOffset) + wrappedLine->LineTextStartOffset;
}

// private Fuse.Controls.FallbackTextRenderer.WrappedLine BoundsToWrappedLine(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, float2 p) [instance] :645
::g::Fuse::Controls::FallbackTextRenderer::WrappedLine* LineCacheLine::BoundsToWrappedLine(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCacheLine", "BoundsToWrappedLine(Fuse.Controls.FallbackTextRenderer.WordWrapInfo,float2)");
    uArray* wrappedLines = GetWrappedLines(wrapInfo);
    int l = 0;
    float startY = 0.0f;

    if (p.Y > 0.0f)

        for (; l < (uPtr(wrappedLines)->Length() - 1); l++)
        {
            float endY = startY + uPtr(wrapInfo)->LineHeight;

            if ((p.Y >= startY) && (p.Y < endY))
                break;

            startY = endY;
        }

    return uPtr(wrappedLines)->Strong< ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine*>(l);
}

// public void Delete(int p) [instance] :601
void LineCacheLine::Delete(int p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCacheLine", "Delete(int)");
    Text(::g::Uno::String::op_Addition2(::g::Uno::String::Substring1(uPtr(Text()), 0, p), ::g::Uno::String::Substring(uPtr(Text()), p + 1)));
}

// public int End(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, int p) [instance] :617
int LineCacheLine::End(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCacheLine", "End(Fuse.Controls.FallbackTextRenderer.WordWrapInfo,int)");
    return uPtr(PosToWrappedLine(wrapInfo, p))->LineTextEndOffset();
}

// public float GetTotalHeight(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo) [instance] :639
float LineCacheLine::GetTotalHeight(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCacheLine", "GetTotalHeight(Fuse.Controls.FallbackTextRenderer.WordWrapInfo)");
    uArray* wrappedLines = GetWrappedLines(wrapInfo);
    return (float)uPtr(wrappedLines)->Length() * uPtr(wrapInfo)->LineHeight;
}

// public Fuse.Controls.FallbackTextRenderer.WrappedLine[] GetWrappedLines(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo) [instance] :572
uArray* LineCacheLine::GetWrappedLines(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCacheLine", "GetWrappedLines(Fuse.Controls.FallbackTextRenderer.WordWrapInfo)");

    if (((_wrappedLinesCache == NULL) || (_wordWrapInfoCache == NULL)) || !uPtr(_wordWrapInfoCache)->Equals(wrapInfo))
    {
        _wrappedLinesCache = ((uPtr(wrapInfo)->IsEnabled && (uPtr(Text())->Length() > 0)) ? (uArray*)::g::Fuse::Controls::FallbackTextRenderer::WordWrapper::WrapLine(wrapInfo, VisualText()) : uArray::Init< ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine*>(::TYPES[4/*Fuse.Controls.FallbackTextRenderer.WrappedLine[]*/], 1, (::g::Fuse::Controls::FallbackTextRenderer::WrappedLine*)::g::Fuse::Controls::FallbackTextRenderer::WrappedLine::New1(VisualText(), 0, 0.0f, uPtr(uPtr(wrapInfo)->TextRenderer)->MeasureStringVirtual(uPtr(wrapInfo)->FontSize, uPtr(wrapInfo)->AbsoluteZoom, VisualText()).X)));
        _wordWrapInfoCache = wrapInfo;
    }

    return _wrappedLinesCache;
}

// public int Home(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, int p) [instance] :612
int LineCacheLine::Home(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCacheLine", "Home(Fuse.Controls.FallbackTextRenderer.WordWrapInfo,int)");
    return uPtr(PosToWrappedLine(wrapInfo, p))->LineTextStartOffset;
}

// public void InsertChar(int p, char c) [instance] :594
void LineCacheLine::InsertChar(int p, uChar c)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCacheLine", "InsertChar(int,char)");
    Text((p < uPtr(Text())->Length()) ? (uString*)::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::Substring1(uPtr(Text()), 0, p), uBox<uChar>(::g::Uno::Char_typeof(), c)), ::g::Uno::String::Substring(uPtr(Text()), p)) : (uString*)::g::Uno::String::op_Addition1(Text(), uBox<uChar>(::g::Uno::Char_typeof(), c)));
}

// public void Invalidate() [instance] :679
void LineCacheLine::Invalidate()
{
    _wrappedLinesCache = NULL;
}

// public float2 PosToBounds(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Fuse.Controls.TextAlignment textAlignment, float boundsWidth, int p) [instance] :630
::g::Uno::Float2 LineCacheLine::PosToBounds(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, int p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCacheLine", "PosToBounds(Fuse.Controls.FallbackTextRenderer.WordWrapInfo,Fuse.Controls.TextAlignment,float,int)");
    ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine* wrappedLine = PosToWrappedLine(wrapInfo, p);
    float xOffset = uPtr(wrappedLine)->GetXOffset(textAlignment, boundsWidth, uPtr(wrapInfo)->AbsoluteZoom);
    float yOffset = wrappedLine->YOffset;
    return ::g::Uno::Float2__New2(xOffset + wrappedLine->PosToBounds(wrapInfo, p - wrappedLine->LineTextStartOffset), yOffset);
}

// private Fuse.Controls.FallbackTextRenderer.WrappedLine PosToWrappedLine(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, int p) [instance] :665
::g::Fuse::Controls::FallbackTextRenderer::WrappedLine* LineCacheLine::PosToWrappedLine(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCacheLine", "PosToWrappedLine(Fuse.Controls.FallbackTextRenderer.WordWrapInfo,int)");
    uArray* wrappedLines = GetWrappedLines(wrapInfo);

    for (int i = 0; i < (uPtr(wrappedLines)->Length() - 1); i++)
    {
        ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine* wrappedLine = uPtr(wrappedLines)->Strong< ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine*>(i);

        if ((p >= uPtr(wrappedLine)->LineTextStartOffset) && (p < uPtr(wrappedLine)->LineTextEndOffset()))
            return wrappedLine;
    }

    return uPtr(wrappedLines)->Strong< ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine*>(uPtr(wrappedLines)->Length() - 1);
}

// public string get_Text() [instance] :537
uString* LineCacheLine::Text()
{
    return _text;
}

// public void set_Text(string value) [instance] :538
void LineCacheLine::Text(uString* value)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCacheLine", "set_Text(string)");

    if (::g::Uno::String::op_Equality(value, _text))
        return;

    _text = value;
    Invalidate();
}

// public Fuse.Controls.FallbackTextEdit.LineCacheTransform get_Transform() [instance] :551
uObject* LineCacheLine::Transform()
{
    return _transform;
}

// public void set_Transform(Fuse.Controls.FallbackTextEdit.LineCacheTransform value) [instance] :552
void LineCacheLine::Transform(uObject* value)
{
    _transform = value;
    Invalidate();
}

// public string get_VisualText() [instance] :561
uString* LineCacheLine::VisualText()
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCacheLine", "get_VisualText()");

    if (_transform != NULL)
        return ::g::Fuse::Controls::FallbackTextEdit::LineCacheTransform::Transform(uInterface(uPtr(_transform), ::TYPES[5/*Fuse.Controls.FallbackTextEdit.LineCacheTransform*/]), _text);

    return _text;
}

// public LineCacheLine New(string text, Fuse.Controls.FallbackTextEdit.LineCacheTransform transform) [static] :588
LineCacheLine* LineCacheLine::New1(uString* text, uObject* transform)
{
    LineCacheLine* obj1 = (LineCacheLine*)uNew(LineCacheLine_typeof());
    obj1->ctor_(text, transform);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextedit/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------

// internal sealed class LineCachePasswordTransform :702
// {
static void LineCachePasswordTransform_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Char_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::Controls::FallbackTextEdit::LineCacheTransform_typeof(), offsetof(LineCachePasswordTransform_type, interface0));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCachePasswordTransform, _reveal), 0);
}

LineCachePasswordTransform_type* LineCachePasswordTransform_typeof()
{
    static uSStrong<LineCachePasswordTransform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LineCachePasswordTransform);
    options.TypeSize = sizeof(LineCachePasswordTransform_type);
    type = (LineCachePasswordTransform_type*)uClassType::New("Fuse.Controls.FallbackTextEdit.LineCachePasswordTransform", options);
    type->fp_build_ = LineCachePasswordTransform_build;
    type->fp_ctor_ = (void*)LineCachePasswordTransform__New1_fn;
    type->interface0.fp_Transform = (void(*)(uObject*, uString*, uString**))LineCachePasswordTransform__Transform_fn;
    return type;
}

// public generated LineCachePasswordTransform() :702
void LineCachePasswordTransform__ctor__fn(LineCachePasswordTransform* __this)
{
    __this->ctor_();
}

// public generated LineCachePasswordTransform New() :702
void LineCachePasswordTransform__New1_fn(LineCachePasswordTransform** __retval)
{
    *__retval = LineCachePasswordTransform::New1();
}

// public bool SetReveal(int r) :705
void LineCachePasswordTransform__SetReveal_fn(LineCachePasswordTransform* __this, int* r, bool* __retval)
{
    *__retval = __this->SetReveal(*r);
}

// public string Transform(string text) :712
void LineCachePasswordTransform__Transform_fn(LineCachePasswordTransform* __this, uString* text, uString** __retval)
{
    *__retval = __this->Transform(text);
}

// public generated LineCachePasswordTransform() [instance] :702
void LineCachePasswordTransform::ctor_()
{
    _reveal = -1;
}

// public bool SetReveal(int r) [instance] :705
bool LineCachePasswordTransform::SetReveal(int r)
{
    bool b = r != _reveal;
    _reveal = r;
    return b;
}

// public string Transform(string text) [instance] :712
uString* LineCachePasswordTransform::Transform(uString* text)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.LineCachePasswordTransform", "Transform(string)");

    if (::g::Uno::String::IsNullOrEmpty(text))
        return text;

    uChar replacement = 8226;
    uArray* buffer = uArray::New(::TYPES[1/*char[]*/], uPtr(text)->Length());

    for (int i = 0; i < buffer->Length(); ++i)
        uPtr(buffer)->Item<uChar>(i) = replacement;

    if (_reveal != -1)
        uPtr(buffer)->Item<uChar>(_reveal) = uPtr(text)->Item(_reveal);

    return uString::CharArray(buffer);
}

// public generated LineCachePasswordTransform New() [static] :702
LineCachePasswordTransform* LineCachePasswordTransform::New1()
{
    LineCachePasswordTransform* obj1 = (LineCachePasswordTransform*)uNew(LineCachePasswordTransform_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextedit/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------

// internal abstract interface LineCacheTransform :697
// {
uInterfaceType* LineCacheTransform_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.FallbackTextEdit.LineCacheTransform", 0, 0);
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextedit/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------

// internal sealed class SwipeGestureHelper :43
// {
static void SwipeGestureHelper_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::SwipeGestureHelper, _lengthThreshold), 0,
        ::g::Fuse::Controls::FallbackTextEdit::DegreeSpan_typeof()->Array(), offsetof(::g::Fuse::Controls::FallbackTextEdit::SwipeGestureHelper, _spans), 0);
}

uType* SwipeGestureHelper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SwipeGestureHelper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextEdit.SwipeGestureHelper", options);
    type->fp_build_ = SwipeGestureHelper_build;
    return type;
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Controls.FallbackTextEdit.DegreeSpan[] spans) :47
void SwipeGestureHelper__ctor__fn(SwipeGestureHelper* __this, float* lengthThreshold, uArray* spans)
{
    __this->ctor_(*lengthThreshold, spans);
}

// public bool IsWithinBounds(float2 vector) :52
void SwipeGestureHelper__IsWithinBounds_fn(SwipeGestureHelper* __this, ::g::Uno::Float2* vector, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*vector);
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Controls.FallbackTextEdit.DegreeSpan[] spans) :47
void SwipeGestureHelper__New1_fn(float* lengthThreshold, uArray* spans, SwipeGestureHelper** __retval)
{
    *__retval = SwipeGestureHelper::New1(*lengthThreshold, spans);
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Controls.FallbackTextEdit.DegreeSpan[] spans) [instance] :47
void SwipeGestureHelper::ctor_(float lengthThreshold, uArray* spans)
{
    _spans = spans;
    _lengthThreshold = lengthThreshold;
}

// public bool IsWithinBounds(float2 vector) [instance] :52
bool SwipeGestureHelper::IsWithinBounds(::g::Uno::Float2 vector)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.SwipeGestureHelper", "IsWithinBounds(float2)");
    float length = ::g::Uno::Vector::Length(vector);

    if (length < _lengthThreshold)
        return false;

    float angle = ::g::Uno::Math::RadiansToDegrees1(::g::Uno::Math::Atan22(vector.X, vector.Y));

    for (int i = 0; i < uPtr(_spans)->Length(); i++)
        if (uPtr(uPtr(_spans)->Strong< ::g::Fuse::Controls::FallbackTextEdit::DegreeSpan*>(i))->IsWithinBounds(angle))
            return true;

    return false;
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Controls.FallbackTextEdit.DegreeSpan[] spans) [static] :47
SwipeGestureHelper* SwipeGestureHelper::New1(float lengthThreshold, uArray* spans)
{
    SwipeGestureHelper* obj1 = (SwipeGestureHelper*)uNew(SwipeGestureHelper_typeof());
    obj1->ctor_(lengthThreshold, spans);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextedit/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------

// internal sealed class TextPosition :737
// {
// static TextPosition() :737
static void TextPosition__cctor__fn(uType* __type)
{
    TextPosition::Default_ = TextPosition::New1(0, 0);
}

static void TextPosition_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextPosition, Char), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextPosition, Line), 0,
        type, (uintptr_t)&::g::Fuse::Controls::FallbackTextEdit::TextPosition::Default_, uFieldFlagsStatic);
}

uType* TextPosition_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TextPosition);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextEdit.TextPosition", options);
    type->fp_build_ = TextPosition_build;
    type->fp_cctor_ = TextPosition__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))TextPosition__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))TextPosition__GetHashCode_fn;
    return type;
}

// public TextPosition(int l, int c) :816
void TextPosition__ctor__fn(TextPosition* __this, int* l, int* c)
{
    __this->ctor_(*l, *c);
}

// public override sealed bool Equals(object obj) :822
void TextPosition__Equals_fn(TextPosition* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.TextPosition", "Equals(object)");

    if (!uIs(obj, __this->__type))
        return *__retval = false, void();

    TextPosition* other = uCast<TextPosition*>(obj, __this->__type);
    return *__retval = (__this->Line == uPtr(other)->Line) && (__this->Char == uPtr(other)->Char), void();
}

// public override sealed int GetHashCode() :833
void TextPosition__GetHashCode_fn(TextPosition* __this, int* __retval)
{
    return *__retval = __this->Line ^ __this->Char, void();
}

// public static Fuse.Controls.FallbackTextEdit.TextPosition Max(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) :809
void TextPosition__Max_fn(TextPosition* a, TextPosition* b, TextPosition** __retval)
{
    *__retval = TextPosition::Max(a, b);
}

// public static Fuse.Controls.FallbackTextEdit.TextPosition Min(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) :804
void TextPosition__Min_fn(TextPosition* a, TextPosition* b, TextPosition** __retval)
{
    *__retval = TextPosition::Min(a, b);
}

// public TextPosition New(int l, int c) :816
void TextPosition__New1_fn(int* l, int* c, TextPosition** __retval)
{
    *__retval = TextPosition::New1(*l, *c);
}

// public static operator ==(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) :741
void TextPosition__op_Equality_fn(TextPosition* a, TextPosition* b, bool* __retval)
{
    *__retval = TextPosition::op_Equality(a, b);
}

// public static operator >(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) :782
void TextPosition__op_GreaterThan_fn(TextPosition* a, TextPosition* b, bool* __retval)
{
    *__retval = TextPosition::op_GreaterThan(a, b);
}

// public static operator >=(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) :793
void TextPosition__op_GreaterThanOrEqual_fn(TextPosition* a, TextPosition* b, bool* __retval)
{
    *__retval = TextPosition::op_GreaterThanOrEqual(a, b);
}

// public static operator !=(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) :755
void TextPosition__op_Inequality_fn(TextPosition* a, TextPosition* b, bool* __retval)
{
    *__retval = TextPosition::op_Inequality(a, b);
}

// public static operator <(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) :760
void TextPosition__op_LessThan_fn(TextPosition* a, TextPosition* b, bool* __retval)
{
    *__retval = TextPosition::op_LessThan(a, b);
}

// public static operator <=(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) :771
void TextPosition__op_LessThanOrEqual_fn(TextPosition* a, TextPosition* b, bool* __retval)
{
    *__retval = TextPosition::op_LessThanOrEqual(a, b);
}

uSStrong<TextPosition*> TextPosition::Default_;

// public TextPosition(int l, int c) [instance] :816
void TextPosition::ctor_(int l, int c)
{
    Line = l;
    Char = c;
}

// public static Fuse.Controls.FallbackTextEdit.TextPosition Max(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) [static] :809
TextPosition* TextPosition::Max(TextPosition* a, TextPosition* b)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.TextPosition", "Max(Fuse.Controls.FallbackTextEdit.TextPosition,Fuse.Controls.FallbackTextEdit.TextPosition)");
    TextPosition_typeof()->Init();
    return TextPosition::op_GreaterThanOrEqual(a, b) ? a : b;
}

// public static Fuse.Controls.FallbackTextEdit.TextPosition Min(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) [static] :804
TextPosition* TextPosition::Min(TextPosition* a, TextPosition* b)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.TextPosition", "Min(Fuse.Controls.FallbackTextEdit.TextPosition,Fuse.Controls.FallbackTextEdit.TextPosition)");
    TextPosition_typeof()->Init();
    return TextPosition::op_LessThanOrEqual(a, b) ? a : b;
}

// public TextPosition New(int l, int c) [static] :816
TextPosition* TextPosition::New1(int l, int c)
{
    TextPosition* obj1 = (TextPosition*)uNew(TextPosition_typeof());
    obj1->ctor_(l, c);
    return obj1;
}

// public static operator ==(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) [static] :741
bool TextPosition::op_Equality(TextPosition* a, TextPosition* b)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.TextPosition", "==(Fuse.Controls.FallbackTextEdit.TextPosition,Fuse.Controls.FallbackTextEdit.TextPosition)");
    TextPosition_typeof()->Init();
    bool aNull = ::g::Uno::Object::ReferenceEquals(a, NULL);
    bool bNull = ::g::Uno::Object::ReferenceEquals(b, NULL);

    if (aNull && bNull)
        return true;

    if ((aNull && !bNull) || (!aNull && bNull))
        return false;

    return uPtr(a)->Equals(b);
}

// public static operator >(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) [static] :782
bool TextPosition::op_GreaterThan(TextPosition* a, TextPosition* b)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.TextPosition", ">(Fuse.Controls.FallbackTextEdit.TextPosition,Fuse.Controls.FallbackTextEdit.TextPosition)");
    TextPosition_typeof()->Init();

    if (uPtr(a)->Line > uPtr(b)->Line)
        return true;

    if (uPtr(a)->Line < uPtr(b)->Line)
        return false;

    return uPtr(a)->Char > uPtr(b)->Char;
}

// public static operator >=(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) [static] :793
bool TextPosition::op_GreaterThanOrEqual(TextPosition* a, TextPosition* b)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.TextPosition", ">=(Fuse.Controls.FallbackTextEdit.TextPosition,Fuse.Controls.FallbackTextEdit.TextPosition)");
    TextPosition_typeof()->Init();

    if (uPtr(a)->Line > uPtr(b)->Line)
        return true;

    if (uPtr(a)->Line < uPtr(b)->Line)
        return false;

    return uPtr(a)->Char >= uPtr(b)->Char;
}

// public static operator !=(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) [static] :755
bool TextPosition::op_Inequality(TextPosition* a, TextPosition* b)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.TextPosition", "!=(Fuse.Controls.FallbackTextEdit.TextPosition,Fuse.Controls.FallbackTextEdit.TextPosition)");
    TextPosition_typeof()->Init();
    return !TextPosition::op_Equality(a, b);
}

// public static operator <(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) [static] :760
bool TextPosition::op_LessThan(TextPosition* a, TextPosition* b)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.TextPosition", "<(Fuse.Controls.FallbackTextEdit.TextPosition,Fuse.Controls.FallbackTextEdit.TextPosition)");
    TextPosition_typeof()->Init();

    if (uPtr(a)->Line < uPtr(b)->Line)
        return true;

    if (uPtr(a)->Line > uPtr(b)->Line)
        return false;

    return uPtr(a)->Char < uPtr(b)->Char;
}

// public static operator <=(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) [static] :771
bool TextPosition::op_LessThanOrEqual(TextPosition* a, TextPosition* b)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.TextPosition", "<=(Fuse.Controls.FallbackTextEdit.TextPosition,Fuse.Controls.FallbackTextEdit.TextPosition)");
    TextPosition_typeof()->Init();

    if (uPtr(a)->Line < uPtr(b)->Line)
        return true;

    if (uPtr(a)->Line > uPtr(b)->Line)
        return false;

    return uPtr(a)->Char <= uPtr(b)->Char;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextedit/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------

// internal sealed class TextSpan :839
// {
static void TextSpan_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Controls::FallbackTextEdit::TextPosition_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextSpan, End), 0,
        ::g::Fuse::Controls::FallbackTextEdit::TextPosition_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextSpan, Start), 0);
}

uType* TextSpan_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TextSpan);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextEdit.TextSpan", options);
    type->fp_build_ = TextSpan_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))TextSpan__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))TextSpan__GetHashCode_fn;
    return type;
}

// public TextSpan(Fuse.Controls.FallbackTextEdit.TextPosition start, Fuse.Controls.FallbackTextEdit.TextPosition end) :874
void TextSpan__ctor__fn(TextSpan* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* start, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* end)
{
    __this->ctor_(start, end);
}

// public bool Contains(Fuse.Controls.FallbackTextEdit.TextPosition p) :897
void TextSpan__Contains_fn(TextSpan* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, bool* __retval)
{
    *__retval = __this->Contains(p);
}

// public override sealed bool Equals(object obj) :881
void TextSpan__Equals_fn(TextSpan* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.TextSpan", "Equals(object)");

    if (!uIs(obj, __this->__type))
        return *__retval = false, void();

    TextSpan* other = uCast<TextSpan*>(obj, __this->__type);
    return *__retval = ::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_Equality(__this->Start, uPtr(other)->Start) && ::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_Equality(__this->End, uPtr(other)->End), void();
}

// public override sealed int GetHashCode() :892
void TextSpan__GetHashCode_fn(TextSpan* __this, int* __retval)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.TextSpan", "GetHashCode()");
    return *__retval = uPtr(__this->Start)->GetHashCode() ^ uPtr(__this->End)->GetHashCode(), void();
}

// public static Fuse.Controls.FallbackTextEdit.TextSpan Intersection(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) :865
void TextSpan__Intersection_fn(TextSpan* a, TextSpan* b, TextSpan** __retval)
{
    *__retval = TextSpan::Intersection(a, b);
}

// public static bool Intersects(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) :860
void TextSpan__Intersects_fn(TextSpan* a, TextSpan* b, bool* __retval)
{
    *__retval = TextSpan::Intersects(a, b);
}

// public TextSpan New(Fuse.Controls.FallbackTextEdit.TextPosition start, Fuse.Controls.FallbackTextEdit.TextPosition end) :874
void TextSpan__New1_fn(::g::Fuse::Controls::FallbackTextEdit::TextPosition* start, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* end, TextSpan** __retval)
{
    *__retval = TextSpan::New1(start, end);
}

// public static operator ==(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) :841
void TextSpan__op_Equality_fn(TextSpan* a, TextSpan* b, bool* __retval)
{
    *__retval = TextSpan::op_Equality(a, b);
}

// public static operator !=(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) :855
void TextSpan__op_Inequality_fn(TextSpan* a, TextSpan* b, bool* __retval)
{
    *__retval = TextSpan::op_Inequality(a, b);
}

// public TextSpan(Fuse.Controls.FallbackTextEdit.TextPosition start, Fuse.Controls.FallbackTextEdit.TextPosition end) [instance] :874
void TextSpan::ctor_(::g::Fuse::Controls::FallbackTextEdit::TextPosition* start, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* end)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.TextSpan", ".ctor(Fuse.Controls.FallbackTextEdit.TextPosition,Fuse.Controls.FallbackTextEdit.TextPosition)");
    bool isValid = ::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_LessThanOrEqual(start, end);
    Start = (isValid ? start : end);
    End = (isValid ? end : start);
}

// public bool Contains(Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :897
bool TextSpan::Contains(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.TextSpan", "Contains(Fuse.Controls.FallbackTextEdit.TextPosition)");
    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_GreaterThanOrEqual(p, Start) && ::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_LessThan(p, End);
}

// public static Fuse.Controls.FallbackTextEdit.TextSpan Intersection(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) [static] :865
TextSpan* TextSpan::Intersection(TextSpan* a, TextSpan* b)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.TextSpan", "Intersection(Fuse.Controls.FallbackTextEdit.TextSpan,Fuse.Controls.FallbackTextEdit.TextSpan)");
    return TextSpan::Intersects(a, b) ? (TextSpan*)TextSpan::New1(::g::Fuse::Controls::FallbackTextEdit::TextPosition::Max(uPtr(a)->Start, uPtr(b)->Start), ::g::Fuse::Controls::FallbackTextEdit::TextPosition::Min(uPtr(a)->End, uPtr(b)->End)) : NULL;
}

// public static bool Intersects(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) [static] :860
bool TextSpan::Intersects(TextSpan* a, TextSpan* b)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.TextSpan", "Intersects(Fuse.Controls.FallbackTextEdit.TextSpan,Fuse.Controls.FallbackTextEdit.TextSpan)");
    return !(::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_LessThanOrEqual(uPtr(a)->End, uPtr(b)->Start) || ::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_GreaterThanOrEqual(uPtr(a)->Start, uPtr(b)->End));
}

// public TextSpan New(Fuse.Controls.FallbackTextEdit.TextPosition start, Fuse.Controls.FallbackTextEdit.TextPosition end) [static] :874
TextSpan* TextSpan::New1(::g::Fuse::Controls::FallbackTextEdit::TextPosition* start, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* end)
{
    TextSpan* obj1 = (TextSpan*)uNew(TextSpan_typeof());
    obj1->ctor_(start, end);
    return obj1;
}

// public static operator ==(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) [static] :841
bool TextSpan::op_Equality(TextSpan* a, TextSpan* b)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.TextSpan", "==(Fuse.Controls.FallbackTextEdit.TextSpan,Fuse.Controls.FallbackTextEdit.TextSpan)");
    bool aNull = ::g::Uno::Object::ReferenceEquals(a, NULL);
    bool bNull = ::g::Uno::Object::ReferenceEquals(b, NULL);

    if (aNull && bNull)
        return true;

    if ((aNull && !bNull) || (!aNull && bNull))
        return false;

    return uPtr(a)->Equals(b);
}

// public static operator !=(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) [static] :855
bool TextSpan::op_Inequality(TextSpan* a, TextSpan* b)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.TextSpan", "!=(Fuse.Controls.FallbackTextEdit.TextSpan,Fuse.Controls.FallbackTextEdit.TextSpan)");
    return !TextSpan::op_Equality(a, b);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextedit/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------

// internal sealed class TextWindow :913
// {
static void TextWindow_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Elements::Element_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Elements::Element_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Elements::Element_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Elements::Element_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Elements::Element_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Elements::Element_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface12));
    type->SetFields(87,
        ::g::Fuse::Controls::FallbackTextEdit::LineCache_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _lineCache), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _maxTextLength), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _offset), 0,
        ::g::Fuse::Controls::FallbackTextEdit::TextSpan_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _selection), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _selectionColor), 0,
        ::g::Fuse::Controls::TextAlignment_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _textAlignment), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _textBoundsSize), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _textColor), 0,
        ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _wrapInfo), 0);
}

::g::Fuse::Elements::Element_type* TextWindow_typeof()
{
    static uSStrong< ::g::Fuse::Elements::Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::Element_typeof();
    options.FieldCount = 96;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(TextWindow);
    options.TypeSize = sizeof(::g::Fuse::Elements::Element_type);
    type = (::g::Fuse::Elements::Element_type*)uClassType::New("Fuse.Controls.FallbackTextEdit.TextWindow", options);
    type->fp_build_ = TextWindow_build;
    type->fp_CalcRenderBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::VisualBounds**))TextWindow__CalcRenderBounds_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*))TextWindow__OnDraw_fn;
    type->interface8.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface10.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface9.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface12.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface11.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface11.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface11.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface11.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public TextWindow(Fuse.Visual parent, Fuse.Controls.FallbackTextEdit.LineCache lineCache) :917
void TextWindow__ctor_4_fn(TextWindow* __this, ::g::Fuse::Visual* parent, ::g::Fuse::Controls::FallbackTextEdit::LineCache* lineCache)
{
    __this->ctor_4(parent, lineCache);
}

// protected override sealed Fuse.VisualBounds CalcRenderBounds() :933
void TextWindow__CalcRenderBounds_fn(TextWindow* __this, ::g::Fuse::VisualBounds** __retval)
{
    return *__retval = ::g::Fuse::VisualBounds::Rect(::g::Uno::Float2__New1(0.0f), __this->_textBoundsSize), void();
}

// public void Draw(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Fuse.Controls.FallbackTextEdit.TextSpan selection, float4 textColor, float4 selectionColor, int maxTextLength, Fuse.Controls.TextAlignment textAlignment, float2 textBoundsSize, float2 offset, Fuse.DrawContext dc) :938
void TextWindow__Draw1_fn(TextWindow* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextSpan* selection, ::g::Uno::Float4* textColor, ::g::Uno::Float4* selectionColor, int* maxTextLength, int* textAlignment, ::g::Uno::Float2* textBoundsSize, ::g::Uno::Float2* offset, ::g::Fuse::DrawContext* dc)
{
    __this->Draw1(wrapInfo, selection, *textColor, *selectionColor, *maxTextLength, *textAlignment, *textBoundsSize, *offset, dc);
}

// public TextWindow New(Fuse.Visual parent, Fuse.Controls.FallbackTextEdit.LineCache lineCache) :917
void TextWindow__New2_fn(::g::Fuse::Visual* parent, ::g::Fuse::Controls::FallbackTextEdit::LineCache* lineCache, TextWindow** __retval)
{
    *__retval = TextWindow::New2(parent, lineCache);
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :955
void TextWindow__OnDraw_fn(TextWindow* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.TextWindow", "OnDraw(Fuse.DrawContext)");
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret2;
    uPtr(uPtr(__this->_wrapInfo)->TextRenderer)->BeginRendering(uPtr(__this->_wrapInfo)->FontSize, uPtr(__this->_wrapInfo)->AbsoluteZoom, __this->WorldTransform(), __this->ActualSize(), __this->_textColor, __this->_maxTextLength);
    float lineHeight = uPtr(__this->_wrapInfo)->LineHeight * uPtr(__this->_wrapInfo)->AbsoluteZoom;
    ::g::Uno::Float2 scaledOffset = ::g::Uno::Float2__op_Multiply1(__this->_offset, uPtr(__this->_wrapInfo)->AbsoluteZoom);
    float y = 0.0f;
    float selectionY = 0.0f;

    for (int i = 0; i < uPtr(uPtr(__this->_lineCache)->Lines())->Count(); i++)
    {
        uArray* lines = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(__this->_lineCache)->Lines()), uCRef<int>(i), &ret2), ret2))->GetWrappedLines(__this->_wrapInfo);

        for (int j = 0; j < uPtr(lines)->Length(); ++j)
        {
            ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine* wrappedLine = uPtr(lines)->Strong< ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine*>(j);
            float drawY = scaledOffset.Y + y;

            if (drawY >= (__this->ActualSize().Y * uPtr(__this->_wrapInfo)->AbsoluteZoom))
                break;
            else if (drawY >= -lineHeight)
            {
                float x = uPtr(wrappedLine)->GetXOffset(__this->_textAlignment, __this->_textBoundsSize.X, __this->AbsoluteZoom());

                if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Inequality(__this->_selection, NULL))
                {
                    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* start = ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(i, uPtr(wrappedLine)->LineTextStartOffset);
                    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* end = ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(i, wrappedLine->LineTextEndOffset());
                    ::g::Fuse::Controls::FallbackTextEdit::TextSpan* span = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::New1(start, end);
                    ::g::Fuse::Controls::FallbackTextEdit::TextSpan* intersection = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::Intersection(span, __this->_selection);

                    if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Inequality(intersection, NULL))
                    {
                        float startPos = uPtr(wrappedLine)->PosToBounds(__this->_wrapInfo, uPtr(uPtr(intersection)->Start)->Char - uPtr(wrappedLine)->LineTextStartOffset);
                        float endPos = (uPtr(intersection->End)->Char < wrappedLine->LineTextEndOffset()) ? wrappedLine->PosToBounds(__this->_wrapInfo, uPtr(intersection->End)->Char - wrappedLine->LineTextStartOffset) : wrappedLine->LineWidth;
                        uPtr(::g::Fuse::Elements::Internal::ElementDraw::Impl())->Rectangle(dc, __this, ::g::Uno::Math::Floor2(::g::Uno::Float2__New2((__this->_offset.X + x) + startPos, __this->_offset.Y + selectionY)), ::g::Uno::Float2__New2(endPos - startPos, uPtr(__this->_wrapInfo)->LineHeight), __this->_selectionColor);
                    }
                }

                uPtr(uPtr(__this->_wrapInfo)->TextRenderer)->DrawLine(dc, scaledOffset.X + (x * uPtr(__this->_wrapInfo)->AbsoluteZoom), drawY, wrappedLine->Text);
            }

            y = y + lineHeight;
            selectionY = selectionY + (lineHeight / uPtr(__this->_wrapInfo)->AbsoluteZoom);
        }
    }

    uPtr(uPtr(__this->_wrapInfo)->TextRenderer)->EndRendering(dc);
}

// public TextWindow(Fuse.Visual parent, Fuse.Controls.FallbackTextEdit.LineCache lineCache) [instance] :917
void TextWindow::ctor_4(::g::Fuse::Visual* parent, ::g::Fuse::Controls::FallbackTextEdit::LineCache* lineCache)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.TextWindow", ".ctor(Fuse.Visual,Fuse.Controls.FallbackTextEdit.LineCache)");
    ctor_3();
    _lineCache = lineCache;
    ClipToBounds(true);
}

// public void Draw(Fuse.Controls.FallbackTextRenderer.WordWrapInfo wrapInfo, Fuse.Controls.FallbackTextEdit.TextSpan selection, float4 textColor, float4 selectionColor, int maxTextLength, Fuse.Controls.TextAlignment textAlignment, float2 textBoundsSize, float2 offset, Fuse.DrawContext dc) [instance] :938
void TextWindow::Draw1(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextSpan* selection, ::g::Uno::Float4 textColor, ::g::Uno::Float4 selectionColor, int maxTextLength, int textAlignment, ::g::Uno::Float2 textBoundsSize, ::g::Uno::Float2 offset, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Controls.FallbackTextEdit.TextWindow", "Draw(Fuse.Controls.FallbackTextRenderer.WordWrapInfo,Fuse.Controls.FallbackTextEdit.TextSpan,float4,float4,int,Fuse.Controls.TextAlignment,float2,float2,Fuse.DrawContext)");

    if (::g::Uno::Float2__op_Inequality(_textBoundsSize, textBoundsSize))
        InvalidateRenderBounds();

    _wrapInfo = wrapInfo;
    _selection = selection;
    _textColor = textColor;
    _selectionColor = selectionColor;
    _maxTextLength = maxTextLength;
    _textAlignment = textAlignment;
    _textBoundsSize = textBoundsSize;
    _offset = offset;
    OnDraw(dc);
}

// public TextWindow New(Fuse.Visual parent, Fuse.Controls.FallbackTextEdit.LineCache lineCache) [static] :917
TextWindow* TextWindow::New2(::g::Fuse::Visual* parent, ::g::Fuse::Controls::FallbackTextEdit::LineCache* lineCache)
{
    TextWindow* obj1 = (TextWindow*)uNew(TextWindow_typeof());
    obj1->ctor_4(parent, lineCache);
    return obj1;
}
// }

}}}} // ::g::Fuse::Controls::FallbackTextEdit
