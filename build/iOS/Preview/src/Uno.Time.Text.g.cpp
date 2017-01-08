// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Delegate.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.FormatException.h>
#include <Uno.Func-2.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Time.LocalDate.h>
#include <Uno.Time.LocalDateTime.h>
#include <Uno.Time.LocalTime.h>
#include <Uno.Time.Offset.h>
#include <Uno.Time.OffsetDateTime.h>
#include <Uno.Time.Text.FixedFormatPattern-1.h>
#include <Uno.Time.Text.IPatternPart-1.h>
#include <Uno.Time.Text.LocalDatePattern.h>
#include <Uno.Time.Text.LocalDatePattern.LocalDateBucket.h>
#include <Uno.Time.Text.LocalDateTimePattern.h>
#include <Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket.h>
#include <Uno.Time.Text.LocalTimePattern.h>
#include <Uno.Time.Text.LocalTimePattern.LocalTimeBucket.h>
#include <Uno.Time.Text.NumberPart-1.h>
#include <Uno.Time.Text.OffsetDateTimePattern.h>
#include <Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket.h>
#include <Uno.Time.Text.OffsetPattern.h>
#include <Uno.Time.Text.OffsetPattern.OffsetBucket.h>
#include <Uno.Time.Text.OffsetPatternPart-1.h>
#include <Uno.Time.Text.ParseResult-1.h>
#include <Uno.Time.Text.PatternPart-2.h>
#include <Uno.Time.Text.RangeNumberPart-1.h>
#include <Uno.Time.Text.SeparatorPart-1.h>
#include <Uno.Time.Text.SignPart-1.h>
static uString* STRINGS[10];
static uType* TYPES[48];

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno
// -------------------------------------------------------------------------------------------------------

// internal sealed class FixedFormatPattern<T> :7
// {
static void FixedFormatPattern_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Line is too long");
    ::TYPES[0] = ::g::Uno::Time::Text::IPatternPart_typeof();
    type->SetPrecalc(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(0,
        ::TYPES[0/*Uno.Time.Text.IPatternPart`1*/]->MakeType(type->T(0), NULL)->Array(), offsetof(::g::Uno::Time::Text::FixedFormatPattern, _parts), 0);
}

uType* FixedFormatPattern_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(FixedFormatPattern);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.FixedFormatPattern`1", options);
    type->fp_build_ = FixedFormatPattern_build;
    return type;
}

// public FixedFormatPattern(Uno.Time.Text.IPatternPart<T>[] parts) :11
void FixedFormatPattern__ctor__fn(FixedFormatPattern* __this, uArray* parts)
{
    __this->ctor_(parts);
}

// public string Format(T bucket) :35
void FixedFormatPattern__Format_fn(FixedFormatPattern* __this, void* bucket, uString** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Time.Text.IPatternPart<T>*/),
    };
    uStackFrame __("Uno.Time.Text.FixedFormatPattern`1", "Format(T)");
    uArray* array1;
    int index2;
    int length3;
    uString* ret2;
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();

    for (array1 = __this->_parts, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        uObject* part = uPtr(array1)->Strong<uObject*>(index2);
        uPtr(sb)->Append2((::g::Uno::Time::Text::IPatternPart::Write_ex(uInterface(uPtr(part), __types[0]), bucket, &ret2), ret2));
    }

    return *__retval = sb->ToString(), void();
}

// public FixedFormatPattern New(Uno.Time.Text.IPatternPart<T>[] parts) :11
void FixedFormatPattern__New1_fn(uType* __type, uArray* parts, FixedFormatPattern** __retval)
{
    *__retval = FixedFormatPattern::New1(__type, parts);
}

// public void Parse(string line, T bucket) :16
void FixedFormatPattern__Parse_fn(FixedFormatPattern* __this, uString* line, void* bucket)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Time.Text.IPatternPart<T>*/),
    };
    uStackFrame __("Uno.Time.Text.FixedFormatPattern`1", "Parse(string,T)");
    int ret3;
    int position = 0;

    for (int i = 0; i < uPtr(__this->_parts)->Length(); i++)
    {
        uObject* part = uPtr(__this->_parts)->Strong<uObject*>(i);
        int readCount = (::g::Uno::Time::Text::IPatternPart::Read_ex(uInterface(uPtr(part), __types[0]), line, uCRef<int>(position), bucket, &ret3), ret3);
        position = position + readCount;

        if (readCount == 0)
            i = i + ::g::Uno::Time::Text::IPatternPart::SkipNextPartsCountIfThisNotSpecified(uInterface(uPtr(part), __types[0]));
    }

    if (position != uPtr(line)->Length())
        U_THROW(::g::Uno::FormatException::New4(::STRINGS[0/*"Line is too...*/]));
}

// public FixedFormatPattern(Uno.Time.Text.IPatternPart<T>[] parts) [instance] :11
void FixedFormatPattern::ctor_(uArray* parts)
{
    _parts = parts;
}

// public FixedFormatPattern New(Uno.Time.Text.IPatternPart<T>[] parts) [static] :11
FixedFormatPattern* FixedFormatPattern::New1(uType* __type, uArray* parts)
{
    FixedFormatPattern* obj1 = (FixedFormatPattern*)uNew(__type);
    obj1->ctor_(parts);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno
// -------------------------------------------------------------------------------------------------------

// internal abstract interface IPatternPart<T> :820
// {
uInterfaceType* IPatternPart_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Time.Text.IPatternPart`1", 1, 0);
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno
// -------------------------------------------------------------------------------------------------------

// private sealed class LocalDatePattern.LocalDateBucket :164
// {
static void LocalDatePattern__LocalDateBucket_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalDatePattern__LocalDateBucket, Day), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalDatePattern__LocalDateBucket, Month), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalDatePattern__LocalDateBucket, Sign), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalDatePattern__LocalDateBucket, Year), 0);
}

uType* LocalDatePattern__LocalDateBucket_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(LocalDatePattern__LocalDateBucket);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.LocalDatePattern.LocalDateBucket", options);
    type->fp_build_ = LocalDatePattern__LocalDateBucket_build;
    type->fp_ctor_ = (void*)LocalDatePattern__LocalDateBucket__New1_fn;
    return type;
}

// public generated LocalDateBucket() :164
void LocalDatePattern__LocalDateBucket__ctor__fn(LocalDatePattern__LocalDateBucket* __this)
{
    __this->ctor_();
}

// public generated LocalDateBucket New() :164
void LocalDatePattern__LocalDateBucket__New1_fn(LocalDatePattern__LocalDateBucket** __retval)
{
    *__retval = LocalDatePattern__LocalDateBucket::New1();
}

// public generated LocalDateBucket() [instance] :164
void LocalDatePattern__LocalDateBucket::ctor_()
{
}

// public generated LocalDateBucket New() [static] :164
LocalDatePattern__LocalDateBucket* LocalDatePattern__LocalDateBucket::New1()
{
    LocalDatePattern__LocalDateBucket* obj1 = (LocalDatePattern__LocalDateBucket*)uNew(LocalDatePattern__LocalDateBucket_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class LocalDatePattern :65
// {
static void LocalDatePattern_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), NULL)->Array();
    ::TYPES[3] = ::g::Uno::Time::Text::SignPart_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Action2_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Func1_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(LocalDatePattern__LocalDateBucket_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Exception_typeof();
    ::TYPES[9] = ::g::Uno::Time::Text::ParseResult_typeof()->MakeType(::g::Uno::Time::LocalDate_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[1/*Uno.Time.Text.FixedFormatPattern<Uno.Time.Text.LocalDatePattern.LocalDateBucket>*/], offsetof(::g::Uno::Time::Text::LocalDatePattern, _generalPattern), 0,
        type, (uintptr_t)&::g::Uno::Time::Text::LocalDatePattern::General_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("Format", NULL, (void*)LocalDatePattern__Format_fn, 0, false, ::g::Uno::String_typeof(), 1, ::g::Uno::Time::LocalDate_typeof()),
        new uFunction("get_GeneralIsoPattern", NULL, (void*)LocalDatePattern__get_GeneralIsoPattern_fn, 0, true, type, 0),
        new uFunction("Parse", NULL, (void*)LocalDatePattern__Parse_fn, 0, false, ::TYPES[9/*Uno.Time.Text.ParseResult<Uno.Time.LocalDate>*/], 1, ::g::Uno::String_typeof()));
}

uType* LocalDatePattern_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LocalDatePattern);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.LocalDatePattern", options);
    type->fp_build_ = LocalDatePattern_build;
    type->fp_ctor_ = (void*)LocalDatePattern__New1_fn;
    return type;
}

// private LocalDatePattern() :83
void LocalDatePattern__ctor__fn(LocalDatePattern* __this)
{
    __this->ctor_();
}

// public string Format(Uno.Time.LocalDate value) :112
void LocalDatePattern__Format_fn(LocalDatePattern* __this, ::g::Uno::Time::LocalDate* value, uString** __retval)
{
    *__retval = __this->Format(value);
}

// public static Uno.Time.Text.LocalDatePattern get_GeneralIsoPattern() :71
void LocalDatePattern__get_GeneralIsoPattern_fn(LocalDatePattern** __retval)
{
    *__retval = LocalDatePattern::GeneralIsoPattern();
}

// private int GetDay(Uno.Time.Text.LocalDatePattern.LocalDateBucket value) :159
void LocalDatePattern__GetDay_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int* __retval)
{
    *__retval = __this->GetDay(value);
}

// private int GetMonth(Uno.Time.Text.LocalDatePattern.LocalDateBucket value) :154
void LocalDatePattern__GetMonth_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int* __retval)
{
    *__retval = __this->GetMonth(value);
}

// private int GetSign(Uno.Time.Text.LocalDatePattern.LocalDateBucket value) :144
void LocalDatePattern__GetSign_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int* __retval)
{
    *__retval = __this->GetSign(value);
}

// private int GetYear(Uno.Time.Text.LocalDatePattern.LocalDateBucket value) :149
void LocalDatePattern__GetYear_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int* __retval)
{
    *__retval = __this->GetYear(value);
}

// private LocalDatePattern New() :83
void LocalDatePattern__New1_fn(LocalDatePattern** __retval)
{
    *__retval = LocalDatePattern::New1();
}

// public Uno.Time.Text.ParseResult<Uno.Time.LocalDate> Parse(string text) :96
void LocalDatePattern__Parse_fn(LocalDatePattern* __this, uString* text, ::g::Uno::Time::Text::ParseResult** __retval)
{
    *__retval = __this->Parse(text);
}

// private void SetDay(Uno.Time.Text.LocalDatePattern.LocalDateBucket value, int day) :139
void LocalDatePattern__SetDay_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int* day)
{
    __this->SetDay(value, *day);
}

// private void SetMonth(Uno.Time.Text.LocalDatePattern.LocalDateBucket value, int month) :134
void LocalDatePattern__SetMonth_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int* month)
{
    __this->SetMonth(value, *month);
}

// private void SetSign(Uno.Time.Text.LocalDatePattern.LocalDateBucket value, int sign) :124
void LocalDatePattern__SetSign_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int* sign)
{
    __this->SetSign(value, *sign);
}

// private void SetYear(Uno.Time.Text.LocalDatePattern.LocalDateBucket value, int year) :129
void LocalDatePattern__SetYear_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int* year)
{
    __this->SetYear(value, *year);
}

uSStrong<LocalDatePattern*> LocalDatePattern::General_;

// private LocalDatePattern() [instance] :83
void LocalDatePattern::ctor_()
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", ".ctor()");
    _generalPattern = ((::g::Uno::Time::Text::FixedFormatPattern*)::g::Uno::Time::Text::FixedFormatPattern::New1(::TYPES[1/*Uno.Time.Text.FixedFormatPattern<Uno.Time.Text.LocalDatePattern.LocalDateBucket>*/], uArray::Init<uObject*>(::TYPES[2/*Uno.Time.Text.IPatternPart<Uno.Time.Text.LocalDatePattern.LocalDateBucket>[]*/], 6, (uObject*)((::g::Uno::Time::Text::SignPart*)::g::Uno::Time::Text::SignPart::New2(::TYPES[3/*Uno.Time.Text.SignPart<Uno.Time.Text.LocalDatePattern.LocalDateBucket>*/], uDelegate::New(::TYPES[4/*Uno.Action<Uno.Time.Text.LocalDatePattern.LocalDateBucket, int>*/], (void*)LocalDatePattern__SetSign_fn, this), uDelegate::New(::TYPES[5/*Uno.Func<Uno.Time.Text.LocalDatePattern.LocalDateBucket, int>*/], (void*)LocalDatePattern__GetSign_fn, this))), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[6/*Uno.Time.Text.NumberPart<Uno.Time.Text.LocalDatePattern.LocalDateBucket>*/], 4, true, uDelegate::New(::TYPES[4/*Uno.Action<Uno.Time.Text.LocalDatePattern.LocalDateBucket, int>*/], (void*)LocalDatePattern__SetYear_fn, this), uDelegate::New(::TYPES[5/*Uno.Func<Uno.Time.Text.LocalDatePattern.LocalDateBucket, int>*/], (void*)LocalDatePattern__GetYear_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::TYPES[7/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.LocalDatePattern.LocalDateBucket>*/], true, '-', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[6/*Uno.Time.Text.NumberPart<Uno.Time.Text.LocalDatePattern.LocalDateBucket>*/], 2, true, uDelegate::New(::TYPES[4/*Uno.Action<Uno.Time.Text.LocalDatePattern.LocalDateBucket, int>*/], (void*)LocalDatePattern__SetMonth_fn, this), uDelegate::New(::TYPES[5/*Uno.Func<Uno.Time.Text.LocalDatePattern.LocalDateBucket, int>*/], (void*)LocalDatePattern__GetMonth_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::TYPES[7/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.LocalDatePattern.LocalDateBucket>*/], true, '-', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[6/*Uno.Time.Text.NumberPart<Uno.Time.Text.LocalDatePattern.LocalDateBucket>*/], 2, true, uDelegate::New(::TYPES[4/*Uno.Action<Uno.Time.Text.LocalDatePattern.LocalDateBucket, int>*/], (void*)LocalDatePattern__SetDay_fn, this), uDelegate::New(::TYPES[5/*Uno.Func<Uno.Time.Text.LocalDatePattern.LocalDateBucket, int>*/], (void*)LocalDatePattern__GetDay_fn, this))))));
}

// public string Format(Uno.Time.LocalDate value) [instance] :112
uString* LocalDatePattern::Format(::g::Uno::Time::LocalDate* value)
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "Format(Uno.Time.LocalDate)");
    LocalDatePattern__LocalDateBucket* collection1;
    uString* ret3;
    collection1 = LocalDatePattern__LocalDateBucket::New1();
    uPtr(collection1)->Sign = ((uPtr(value)->Year() < 0) ? -1 : 1);
    uPtr(collection1)->Year = uPtr(value)->Year();
    uPtr(collection1)->Month = uPtr(value)->Month();
    uPtr(collection1)->Day = uPtr(value)->Day();
    LocalDatePattern__LocalDateBucket* bucket = collection1;
    return (::g::Uno::Time::Text::FixedFormatPattern__Format_fn(uPtr(_generalPattern), bucket, &ret3), ret3);
}

// private int GetDay(Uno.Time.Text.LocalDatePattern.LocalDateBucket value) [instance] :159
int LocalDatePattern::GetDay(LocalDatePattern__LocalDateBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "GetDay(Uno.Time.Text.LocalDatePattern.LocalDateBucket)");
    return uPtr(value)->Day;
}

// private int GetMonth(Uno.Time.Text.LocalDatePattern.LocalDateBucket value) [instance] :154
int LocalDatePattern::GetMonth(LocalDatePattern__LocalDateBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "GetMonth(Uno.Time.Text.LocalDatePattern.LocalDateBucket)");
    return uPtr(value)->Month;
}

// private int GetSign(Uno.Time.Text.LocalDatePattern.LocalDateBucket value) [instance] :144
int LocalDatePattern::GetSign(LocalDatePattern__LocalDateBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "GetSign(Uno.Time.Text.LocalDatePattern.LocalDateBucket)");
    return uPtr(value)->Sign;
}

// private int GetYear(Uno.Time.Text.LocalDatePattern.LocalDateBucket value) [instance] :149
int LocalDatePattern::GetYear(LocalDatePattern__LocalDateBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "GetYear(Uno.Time.Text.LocalDatePattern.LocalDateBucket)");
    return uPtr(value)->Year;
}

// public Uno.Time.Text.ParseResult<Uno.Time.LocalDate> Parse(string text) [instance] :96
::g::Uno::Time::Text::ParseResult* LocalDatePattern::Parse(uString* text)
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "Parse(string)");
    ::g::Uno::Time::Text::ParseResult* ret4;

    try
    {
        LocalDatePattern__LocalDateBucket* bucket = LocalDatePattern__LocalDateBucket::New1();
        ::g::Uno::Time::Text::FixedFormatPattern__Parse_fn(uPtr(_generalPattern), text, bucket);
        ::g::Uno::Time::LocalDate* ld = ::g::Uno::Time::LocalDate::New1(bucket->Sign * bucket->Year, bucket->Month, bucket->Day);
        return (::g::Uno::Time::Text::ParseResult__ForValue_fn(::TYPES[9/*Uno.Time.Text.ParseResult<Uno.Time.LocalDate>*/], ld, &ret4), ret4);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* ex = __t.Exception;
        return (::g::Uno::Time::Text::ParseResult*)::g::Uno::Time::Text::ParseResult::ForException(::TYPES[9/*Uno.Time.Text.ParseResult<Uno.Time.LocalDate>*/], ex);
    }
}

// private void SetDay(Uno.Time.Text.LocalDatePattern.LocalDateBucket value, int day) [instance] :139
void LocalDatePattern::SetDay(LocalDatePattern__LocalDateBucket* value, int day)
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "SetDay(Uno.Time.Text.LocalDatePattern.LocalDateBucket,int)");
    uPtr(value)->Day = day;
}

// private void SetMonth(Uno.Time.Text.LocalDatePattern.LocalDateBucket value, int month) [instance] :134
void LocalDatePattern::SetMonth(LocalDatePattern__LocalDateBucket* value, int month)
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "SetMonth(Uno.Time.Text.LocalDatePattern.LocalDateBucket,int)");
    uPtr(value)->Month = month;
}

// private void SetSign(Uno.Time.Text.LocalDatePattern.LocalDateBucket value, int sign) [instance] :124
void LocalDatePattern::SetSign(LocalDatePattern__LocalDateBucket* value, int sign)
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "SetSign(Uno.Time.Text.LocalDatePattern.LocalDateBucket,int)");
    uPtr(value)->Sign = sign;
}

// private void SetYear(Uno.Time.Text.LocalDatePattern.LocalDateBucket value, int year) [instance] :129
void LocalDatePattern::SetYear(LocalDatePattern__LocalDateBucket* value, int year)
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "SetYear(Uno.Time.Text.LocalDatePattern.LocalDateBucket,int)");
    uPtr(value)->Year = year;
}

// private LocalDatePattern New() [static] :83
LocalDatePattern* LocalDatePattern::New1()
{
    LocalDatePattern* obj2 = (LocalDatePattern*)uNew(LocalDatePattern_typeof());
    obj2->ctor_();
    return obj2;
}

// public static Uno.Time.Text.LocalDatePattern get_GeneralIsoPattern() [static] :71
LocalDatePattern* LocalDatePattern::GeneralIsoPattern()
{
    uStackFrame __("Uno.Time.Text.LocalDatePattern", "get_GeneralIsoPattern()");

    if (LocalDatePattern::General_ == NULL)
        LocalDatePattern::General_ = LocalDatePattern::New1();

    return LocalDatePattern::General_;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno
// -------------------------------------------------------------------------------------------------------

// private sealed class LocalDateTimePattern.LocalDateTimeBucket :318
// {
static void LocalDateTimePattern__LocalDateTimeBucket_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalDateTimePattern__LocalDateTimeBucket, Day), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalDateTimePattern__LocalDateTimeBucket, Hour), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalDateTimePattern__LocalDateTimeBucket, Minute), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalDateTimePattern__LocalDateTimeBucket, Month), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalDateTimePattern__LocalDateTimeBucket, Second), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalDateTimePattern__LocalDateTimeBucket, Sign), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalDateTimePattern__LocalDateTimeBucket, Year), 0);
}

uType* LocalDateTimePattern__LocalDateTimeBucket_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(LocalDateTimePattern__LocalDateTimeBucket);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket", options);
    type->fp_build_ = LocalDateTimePattern__LocalDateTimeBucket_build;
    type->fp_ctor_ = (void*)LocalDateTimePattern__LocalDateTimeBucket__New1_fn;
    return type;
}

// public generated LocalDateTimeBucket() :318
void LocalDateTimePattern__LocalDateTimeBucket__ctor__fn(LocalDateTimePattern__LocalDateTimeBucket* __this)
{
    __this->ctor_();
}

// public generated LocalDateTimeBucket New() :318
void LocalDateTimePattern__LocalDateTimeBucket__New1_fn(LocalDateTimePattern__LocalDateTimeBucket** __retval)
{
    *__retval = LocalDateTimePattern__LocalDateTimeBucket::New1();
}

// public generated LocalDateTimeBucket() [instance] :318
void LocalDateTimePattern__LocalDateTimeBucket::ctor_()
{
}

// public generated LocalDateTimeBucket New() [static] :318
LocalDateTimePattern__LocalDateTimeBucket* LocalDateTimePattern__LocalDateTimeBucket::New1()
{
    LocalDateTimePattern__LocalDateTimeBucket* obj1 = (LocalDateTimePattern__LocalDateTimeBucket*)uNew(LocalDateTimePattern__LocalDateTimeBucket_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class LocalDateTimePattern :179
// {
static void LocalDateTimePattern_build(uType* type)
{
    ::TYPES[10] = ::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL)->Array();
    ::TYPES[12] = ::g::Uno::Time::Text::SignPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::Action2_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Func1_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(LocalDateTimePattern__LocalDateTimeBucket_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Exception_typeof();
    ::TYPES[17] = ::g::Uno::Time::Text::ParseResult_typeof()->MakeType(::g::Uno::Time::LocalDateTime_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[10/*Uno.Time.Text.FixedFormatPattern<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], offsetof(::g::Uno::Time::Text::LocalDateTimePattern, _generalPattern), 0,
        type, (uintptr_t)&::g::Uno::Time::Text::LocalDateTimePattern::General_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("Format", NULL, (void*)LocalDateTimePattern__Format_fn, 0, false, ::g::Uno::String_typeof(), 1, ::g::Uno::Time::LocalDateTime_typeof()),
        new uFunction("get_GeneralIsoPattern", NULL, (void*)LocalDateTimePattern__get_GeneralIsoPattern_fn, 0, true, type, 0),
        new uFunction("Parse", NULL, (void*)LocalDateTimePattern__Parse_fn, 0, false, ::TYPES[17/*Uno.Time.Text.ParseResult<Uno.Time.LocalDateTime>*/], 1, ::g::Uno::String_typeof()));
}

uType* LocalDateTimePattern_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LocalDateTimePattern);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.LocalDateTimePattern", options);
    type->fp_build_ = LocalDateTimePattern_build;
    type->fp_ctor_ = (void*)LocalDateTimePattern__New1_fn;
    return type;
}

// private LocalDateTimePattern() :197
void LocalDateTimePattern__ctor__fn(LocalDateTimePattern* __this)
{
    __this->ctor_();
}

// public string Format(Uno.Time.LocalDateTime value) :233
void LocalDateTimePattern__Format_fn(LocalDateTimePattern* __this, ::g::Uno::Time::LocalDateTime* value, uString** __retval)
{
    *__retval = __this->Format(value);
}

// public static Uno.Time.Text.LocalDateTimePattern get_GeneralIsoPattern() :185
void LocalDateTimePattern__get_GeneralIsoPattern_fn(LocalDateTimePattern** __retval)
{
    *__retval = LocalDateTimePattern::GeneralIsoPattern();
}

// private int GetDay(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :283
void LocalDateTimePattern__GetDay_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetDay(value);
}

// private int GetHour(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :293
void LocalDateTimePattern__GetHour_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetHour(value);
}

// private int GetMinute(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :303
void LocalDateTimePattern__GetMinute_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetMinute(value);
}

// private int GetMonth(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :273
void LocalDateTimePattern__GetMonth_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetMonth(value);
}

// private int GetSecond(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :313
void LocalDateTimePattern__GetSecond_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetSecond(value);
}

// private int GetSign(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :253
void LocalDateTimePattern__GetSign_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetSign(value);
}

// private int GetYear(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) :263
void LocalDateTimePattern__GetYear_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetYear(value);
}

// private LocalDateTimePattern New() :197
void LocalDateTimePattern__New1_fn(LocalDateTimePattern** __retval)
{
    *__retval = LocalDateTimePattern::New1();
}

// public Uno.Time.Text.ParseResult<Uno.Time.LocalDateTime> Parse(string text) :216
void LocalDateTimePattern__Parse_fn(LocalDateTimePattern* __this, uString* text, ::g::Uno::Time::Text::ParseResult** __retval)
{
    *__retval = __this->Parse(text);
}

// private void SetDay(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int day) :278
void LocalDateTimePattern__SetDay_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* day)
{
    __this->SetDay(value, *day);
}

// private void SetHour(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int hour) :288
void LocalDateTimePattern__SetHour_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* hour)
{
    __this->SetHour(value, *hour);
}

// private void SetMinute(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int minute) :298
void LocalDateTimePattern__SetMinute_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* minute)
{
    __this->SetMinute(value, *minute);
}

// private void SetMonth(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int month) :268
void LocalDateTimePattern__SetMonth_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* month)
{
    __this->SetMonth(value, *month);
}

// private void SetSecond(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int second) :308
void LocalDateTimePattern__SetSecond_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* second)
{
    __this->SetSecond(value, *second);
}

// private void SetSign(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int sign) :248
void LocalDateTimePattern__SetSign_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* sign)
{
    __this->SetSign(value, *sign);
}

// private void SetYear(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int year) :258
void LocalDateTimePattern__SetYear_fn(LocalDateTimePattern* __this, LocalDateTimePattern__LocalDateTimeBucket* value, int* year)
{
    __this->SetYear(value, *year);
}

uSStrong<LocalDateTimePattern*> LocalDateTimePattern::General_;

// private LocalDateTimePattern() [instance] :197
void LocalDateTimePattern::ctor_()
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", ".ctor()");
    _generalPattern = ((::g::Uno::Time::Text::FixedFormatPattern*)::g::Uno::Time::Text::FixedFormatPattern::New1(::TYPES[10/*Uno.Time.Text.FixedFormatPattern<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], uArray::Init<uObject*>(::TYPES[11/*Uno.Time.Text.IPatternPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>[]*/], 12, (uObject*)((::g::Uno::Time::Text::SignPart*)::g::Uno::Time::Text::SignPart::New2(::TYPES[12/*Uno.Time.Text.SignPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], uDelegate::New(::TYPES[13/*Uno.Action<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__SetSign_fn, this), uDelegate::New(::TYPES[14/*Uno.Func<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__GetSign_fn, this))), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[15/*Uno.Time.Text.NumberPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], 4, true, uDelegate::New(::TYPES[13/*Uno.Action<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__SetYear_fn, this), uDelegate::New(::TYPES[14/*Uno.Func<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__GetYear_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::TYPES[16/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], true, '-', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[15/*Uno.Time.Text.NumberPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], 2, true, uDelegate::New(::TYPES[13/*Uno.Action<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__SetMonth_fn, this), uDelegate::New(::TYPES[14/*Uno.Func<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__GetMonth_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::TYPES[16/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], true, '-', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[15/*Uno.Time.Text.NumberPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], 2, true, uDelegate::New(::TYPES[13/*Uno.Action<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__SetDay_fn, this), uDelegate::New(::TYPES[14/*Uno.Func<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__GetDay_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::TYPES[16/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], true, 'T', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[15/*Uno.Time.Text.NumberPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], 2, true, uDelegate::New(::TYPES[13/*Uno.Action<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__SetHour_fn, this), uDelegate::New(::TYPES[14/*Uno.Func<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__GetHour_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::TYPES[16/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[15/*Uno.Time.Text.NumberPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], 2, true, uDelegate::New(::TYPES[13/*Uno.Action<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__SetMinute_fn, this), uDelegate::New(::TYPES[14/*Uno.Func<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__GetMinute_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::TYPES[16/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[15/*Uno.Time.Text.NumberPart<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket>*/], 2, true, uDelegate::New(::TYPES[13/*Uno.Action<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__SetSecond_fn, this), uDelegate::New(::TYPES[14/*Uno.Func<Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket, int>*/], (void*)LocalDateTimePattern__GetSecond_fn, this))))));
}

// public string Format(Uno.Time.LocalDateTime value) [instance] :233
uString* LocalDateTimePattern::Format(::g::Uno::Time::LocalDateTime* value)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "Format(Uno.Time.LocalDateTime)");
    LocalDateTimePattern__LocalDateTimeBucket* collection1;
    uString* ret3;
    collection1 = LocalDateTimePattern__LocalDateTimeBucket::New1();
    uPtr(collection1)->Sign = ((uPtr(value)->Year() < 0) ? -1 : 1);
    uPtr(collection1)->Year = uPtr(value)->Year();
    uPtr(collection1)->Month = uPtr(value)->Month();
    uPtr(collection1)->Day = uPtr(value)->Day();
    uPtr(collection1)->Hour = uPtr(value)->Hour();
    uPtr(collection1)->Minute = uPtr(value)->Minute();
    uPtr(collection1)->Second = uPtr(value)->Second();
    LocalDateTimePattern__LocalDateTimeBucket* bucket = collection1;
    return (::g::Uno::Time::Text::FixedFormatPattern__Format_fn(uPtr(_generalPattern), bucket, &ret3), ret3);
}

// private int GetDay(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :283
int LocalDateTimePattern::GetDay(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "GetDay(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket)");
    return uPtr(value)->Day;
}

// private int GetHour(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :293
int LocalDateTimePattern::GetHour(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "GetHour(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket)");
    return uPtr(value)->Hour;
}

// private int GetMinute(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :303
int LocalDateTimePattern::GetMinute(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "GetMinute(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket)");
    return uPtr(value)->Minute;
}

// private int GetMonth(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :273
int LocalDateTimePattern::GetMonth(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "GetMonth(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket)");
    return uPtr(value)->Month;
}

// private int GetSecond(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :313
int LocalDateTimePattern::GetSecond(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "GetSecond(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket)");
    return uPtr(value)->Second;
}

// private int GetSign(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :253
int LocalDateTimePattern::GetSign(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "GetSign(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket)");
    return uPtr(value)->Sign;
}

// private int GetYear(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value) [instance] :263
int LocalDateTimePattern::GetYear(LocalDateTimePattern__LocalDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "GetYear(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket)");
    return uPtr(value)->Year;
}

// public Uno.Time.Text.ParseResult<Uno.Time.LocalDateTime> Parse(string text) [instance] :216
::g::Uno::Time::Text::ParseResult* LocalDateTimePattern::Parse(uString* text)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "Parse(string)");
    ::g::Uno::Time::Text::ParseResult* ret4;

    try
    {
        LocalDateTimePattern__LocalDateTimeBucket* bucket = LocalDateTimePattern__LocalDateTimeBucket::New1();
        ::g::Uno::Time::Text::FixedFormatPattern__Parse_fn(uPtr(_generalPattern), text, bucket);
        ::g::Uno::Time::LocalDateTime* ldt = ::g::Uno::Time::LocalDateTime::New2(bucket->Sign * bucket->Year, bucket->Month, bucket->Day, bucket->Hour, bucket->Minute, bucket->Second);
        return (::g::Uno::Time::Text::ParseResult__ForValue_fn(::TYPES[17/*Uno.Time.Text.ParseResult<Uno.Time.LocalDateTime>*/], ldt, &ret4), ret4);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* ex = __t.Exception;
        return (::g::Uno::Time::Text::ParseResult*)::g::Uno::Time::Text::ParseResult::ForException(::TYPES[17/*Uno.Time.Text.ParseResult<Uno.Time.LocalDateTime>*/], ex);
    }
}

// private void SetDay(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int day) [instance] :278
void LocalDateTimePattern::SetDay(LocalDateTimePattern__LocalDateTimeBucket* value, int day)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "SetDay(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket,int)");
    uPtr(value)->Day = day;
}

// private void SetHour(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int hour) [instance] :288
void LocalDateTimePattern::SetHour(LocalDateTimePattern__LocalDateTimeBucket* value, int hour)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "SetHour(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket,int)");
    uPtr(value)->Hour = hour;
}

// private void SetMinute(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int minute) [instance] :298
void LocalDateTimePattern::SetMinute(LocalDateTimePattern__LocalDateTimeBucket* value, int minute)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "SetMinute(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket,int)");
    uPtr(value)->Minute = minute;
}

// private void SetMonth(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int month) [instance] :268
void LocalDateTimePattern::SetMonth(LocalDateTimePattern__LocalDateTimeBucket* value, int month)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "SetMonth(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket,int)");
    uPtr(value)->Month = month;
}

// private void SetSecond(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int second) [instance] :308
void LocalDateTimePattern::SetSecond(LocalDateTimePattern__LocalDateTimeBucket* value, int second)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "SetSecond(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket,int)");
    uPtr(value)->Second = second;
}

// private void SetSign(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int sign) [instance] :248
void LocalDateTimePattern::SetSign(LocalDateTimePattern__LocalDateTimeBucket* value, int sign)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "SetSign(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket,int)");
    uPtr(value)->Sign = sign;
}

// private void SetYear(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket value, int year) [instance] :258
void LocalDateTimePattern::SetYear(LocalDateTimePattern__LocalDateTimeBucket* value, int year)
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "SetYear(Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket,int)");
    uPtr(value)->Year = year;
}

// private LocalDateTimePattern New() [static] :197
LocalDateTimePattern* LocalDateTimePattern::New1()
{
    LocalDateTimePattern* obj2 = (LocalDateTimePattern*)uNew(LocalDateTimePattern_typeof());
    obj2->ctor_();
    return obj2;
}

// public static Uno.Time.Text.LocalDateTimePattern get_GeneralIsoPattern() [static] :185
LocalDateTimePattern* LocalDateTimePattern::GeneralIsoPattern()
{
    uStackFrame __("Uno.Time.Text.LocalDateTimePattern", "get_GeneralIsoPattern()");

    if (LocalDateTimePattern::General_ == NULL)
        LocalDateTimePattern::General_ = LocalDateTimePattern::New1();

    return LocalDateTimePattern::General_;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno
// -------------------------------------------------------------------------------------------------------

// private sealed class LocalTimePattern.LocalTimeBucket :436
// {
static void LocalTimePattern__LocalTimeBucket_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalTimePattern__LocalTimeBucket, Hour), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalTimePattern__LocalTimeBucket, Millisecond), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalTimePattern__LocalTimeBucket, Minute), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::LocalTimePattern__LocalTimeBucket, Second), 0);
}

uType* LocalTimePattern__LocalTimeBucket_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(LocalTimePattern__LocalTimeBucket);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.LocalTimePattern.LocalTimeBucket", options);
    type->fp_build_ = LocalTimePattern__LocalTimeBucket_build;
    type->fp_ctor_ = (void*)LocalTimePattern__LocalTimeBucket__New1_fn;
    return type;
}

// public generated LocalTimeBucket() :436
void LocalTimePattern__LocalTimeBucket__ctor__fn(LocalTimePattern__LocalTimeBucket* __this)
{
    __this->ctor_();
}

// public generated LocalTimeBucket New() :436
void LocalTimePattern__LocalTimeBucket__New1_fn(LocalTimePattern__LocalTimeBucket** __retval)
{
    *__retval = LocalTimePattern__LocalTimeBucket::New1();
}

// public generated LocalTimeBucket() [instance] :436
void LocalTimePattern__LocalTimeBucket::ctor_()
{
}

// public generated LocalTimeBucket New() [static] :436
LocalTimePattern__LocalTimeBucket* LocalTimePattern__LocalTimeBucket::New1()
{
    LocalTimePattern__LocalTimeBucket* obj1 = (LocalTimePattern__LocalTimeBucket*)uNew(LocalTimePattern__LocalTimeBucket_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class LocalTimePattern :336
// {
static void LocalTimePattern_build(uType* type)
{
    ::TYPES[18] = ::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), NULL)->Array();
    ::TYPES[20] = ::g::Uno::Time::Text::NumberPart_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Action2_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::Func1_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[23] = ::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), NULL);
    ::TYPES[24] = ::g::Uno::Time::Text::RangeNumberPart_typeof()->MakeType(LocalTimePattern__LocalTimeBucket_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Exception_typeof();
    ::TYPES[25] = ::g::Uno::Time::Text::ParseResult_typeof()->MakeType(::g::Uno::Time::LocalTime_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[18/*Uno.Time.Text.FixedFormatPattern<Uno.Time.Text.LocalTimePattern.LocalTimeBucket>*/], offsetof(::g::Uno::Time::Text::LocalTimePattern, _generalPattern), 0,
        type, (uintptr_t)&::g::Uno::Time::Text::LocalTimePattern::General_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("Format", NULL, (void*)LocalTimePattern__Format_fn, 0, false, ::g::Uno::String_typeof(), 1, ::g::Uno::Time::LocalTime_typeof()),
        new uFunction("get_GeneralIsoPattern", NULL, (void*)LocalTimePattern__get_GeneralIsoPattern_fn, 0, true, type, 0),
        new uFunction("Parse", NULL, (void*)LocalTimePattern__Parse_fn, 0, false, ::TYPES[25/*Uno.Time.Text.ParseResult<Uno.Time.LocalTime>*/], 1, ::g::Uno::String_typeof()));
}

uType* LocalTimePattern_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LocalTimePattern);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.LocalTimePattern", options);
    type->fp_build_ = LocalTimePattern_build;
    type->fp_ctor_ = (void*)LocalTimePattern__New1_fn;
    return type;
}

// private LocalTimePattern() :354
void LocalTimePattern__ctor__fn(LocalTimePattern* __this)
{
    __this->ctor_();
}

// public string Format(Uno.Time.LocalTime value) :384
void LocalTimePattern__Format_fn(LocalTimePattern* __this, ::g::Uno::Time::LocalTime* value, uString** __retval)
{
    *__retval = __this->Format(*value);
}

// public static Uno.Time.Text.LocalTimePattern get_GeneralIsoPattern() :342
void LocalTimePattern__get_GeneralIsoPattern_fn(LocalTimePattern** __retval)
{
    *__retval = LocalTimePattern::GeneralIsoPattern();
}

// private int GetHour(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value) :401
void LocalTimePattern__GetHour_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int* __retval)
{
    *__retval = __this->GetHour(value);
}

// private int GetMillisecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value) :431
void LocalTimePattern__GetMillisecond_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int* __retval)
{
    *__retval = __this->GetMillisecond(value);
}

// private int GetMinute(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value) :411
void LocalTimePattern__GetMinute_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int* __retval)
{
    *__retval = __this->GetMinute(value);
}

// private int GetSecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value) :421
void LocalTimePattern__GetSecond_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int* __retval)
{
    *__retval = __this->GetSecond(value);
}

// private LocalTimePattern New() :354
void LocalTimePattern__New1_fn(LocalTimePattern** __retval)
{
    *__retval = LocalTimePattern::New1();
}

// public Uno.Time.Text.ParseResult<Uno.Time.LocalTime> Parse(string text) :368
void LocalTimePattern__Parse_fn(LocalTimePattern* __this, uString* text, ::g::Uno::Time::Text::ParseResult** __retval)
{
    *__retval = __this->Parse(text);
}

// private void SetHour(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value, int hour) :396
void LocalTimePattern__SetHour_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int* hour)
{
    __this->SetHour(value, *hour);
}

// private void SetMillisecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value, int millisecond) :426
void LocalTimePattern__SetMillisecond_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int* millisecond)
{
    __this->SetMillisecond(value, *millisecond);
}

// private void SetMinute(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value, int minute) :406
void LocalTimePattern__SetMinute_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int* minute)
{
    __this->SetMinute(value, *minute);
}

// private void SetSecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value, int second) :416
void LocalTimePattern__SetSecond_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int* second)
{
    __this->SetSecond(value, *second);
}

uSStrong<LocalTimePattern*> LocalTimePattern::General_;

// private LocalTimePattern() [instance] :354
void LocalTimePattern::ctor_()
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", ".ctor()");
    _generalPattern = ((::g::Uno::Time::Text::FixedFormatPattern*)::g::Uno::Time::Text::FixedFormatPattern::New1(::TYPES[18/*Uno.Time.Text.FixedFormatPattern<Uno.Time.Text.LocalTimePattern.LocalTimeBucket>*/], uArray::Init<uObject*>(::TYPES[19/*Uno.Time.Text.IPatternPart<Uno.Time.Text.LocalTimePattern.LocalTimeBucket>[]*/], 7, (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[20/*Uno.Time.Text.NumberPart<Uno.Time.Text.LocalTimePattern.LocalTimeBucket>*/], 2, true, uDelegate::New(::TYPES[21/*Uno.Action<Uno.Time.Text.LocalTimePattern.LocalTimeBucket, int>*/], (void*)LocalTimePattern__SetHour_fn, this), uDelegate::New(::TYPES[22/*Uno.Func<Uno.Time.Text.LocalTimePattern.LocalTimeBucket, int>*/], (void*)LocalTimePattern__GetHour_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::TYPES[23/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.LocalTimePattern.LocalTimeBucket>*/], true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[20/*Uno.Time.Text.NumberPart<Uno.Time.Text.LocalTimePattern.LocalTimeBucket>*/], 2, true, uDelegate::New(::TYPES[21/*Uno.Action<Uno.Time.Text.LocalTimePattern.LocalTimeBucket, int>*/], (void*)LocalTimePattern__SetMinute_fn, this), uDelegate::New(::TYPES[22/*Uno.Func<Uno.Time.Text.LocalTimePattern.LocalTimeBucket, int>*/], (void*)LocalTimePattern__GetMinute_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::TYPES[23/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.LocalTimePattern.LocalTimeBucket>*/], true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[20/*Uno.Time.Text.NumberPart<Uno.Time.Text.LocalTimePattern.LocalTimeBucket>*/], 2, true, uDelegate::New(::TYPES[21/*Uno.Action<Uno.Time.Text.LocalTimePattern.LocalTimeBucket, int>*/], (void*)LocalTimePattern__SetSecond_fn, this), uDelegate::New(::TYPES[22/*Uno.Func<Uno.Time.Text.LocalTimePattern.LocalTimeBucket, int>*/], (void*)LocalTimePattern__GetSecond_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::TYPES[23/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.LocalTimePattern.LocalTimeBucket>*/], false, '.', 0)), (uObject*)((::g::Uno::Time::Text::RangeNumberPart*)::g::Uno::Time::Text::RangeNumberPart::New1(::TYPES[24/*Uno.Time.Text.RangeNumberPart<Uno.Time.Text.LocalTimePattern.LocalTimeBucket>*/], 3, 7, uDelegate::New(::TYPES[21/*Uno.Action<Uno.Time.Text.LocalTimePattern.LocalTimeBucket, int>*/], (void*)LocalTimePattern__SetMillisecond_fn, this), uDelegate::New(::TYPES[22/*Uno.Func<Uno.Time.Text.LocalTimePattern.LocalTimeBucket, int>*/], (void*)LocalTimePattern__GetMillisecond_fn, this))))));
}

// public string Format(Uno.Time.LocalTime value) [instance] :384
uString* LocalTimePattern::Format(::g::Uno::Time::LocalTime value)
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "Format(Uno.Time.LocalTime)");
    LocalTimePattern__LocalTimeBucket* collection1;
    uString* ret3;
    collection1 = LocalTimePattern__LocalTimeBucket::New1();
    uPtr(collection1)->Hour = value.Hour();
    uPtr(collection1)->Minute = value.Minute();
    uPtr(collection1)->Second = value.Second();
    uPtr(collection1)->Millisecond = value.Millisecond();
    LocalTimePattern__LocalTimeBucket* bucket = collection1;
    return (::g::Uno::Time::Text::FixedFormatPattern__Format_fn(uPtr(_generalPattern), bucket, &ret3), ret3);
}

// private int GetHour(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value) [instance] :401
int LocalTimePattern::GetHour(LocalTimePattern__LocalTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "GetHour(Uno.Time.Text.LocalTimePattern.LocalTimeBucket)");
    return uPtr(value)->Hour;
}

// private int GetMillisecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value) [instance] :431
int LocalTimePattern::GetMillisecond(LocalTimePattern__LocalTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "GetMillisecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket)");
    return uPtr(value)->Millisecond;
}

// private int GetMinute(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value) [instance] :411
int LocalTimePattern::GetMinute(LocalTimePattern__LocalTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "GetMinute(Uno.Time.Text.LocalTimePattern.LocalTimeBucket)");
    return uPtr(value)->Minute;
}

// private int GetSecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value) [instance] :421
int LocalTimePattern::GetSecond(LocalTimePattern__LocalTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "GetSecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket)");
    return uPtr(value)->Second;
}

// public Uno.Time.Text.ParseResult<Uno.Time.LocalTime> Parse(string text) [instance] :368
::g::Uno::Time::Text::ParseResult* LocalTimePattern::Parse(uString* text)
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "Parse(string)");
    ::g::Uno::Time::Text::ParseResult* ret4;

    try
    {
        LocalTimePattern__LocalTimeBucket* bucket = LocalTimePattern__LocalTimeBucket::New1();
        ::g::Uno::Time::Text::FixedFormatPattern__Parse_fn(uPtr(_generalPattern), text, bucket);
        ::g::Uno::Time::LocalTime lt = ::g::Uno::Time::LocalTime__New3(bucket->Hour, bucket->Minute, bucket->Second, bucket->Millisecond);
        return (::g::Uno::Time::Text::ParseResult__ForValue_fn(::TYPES[25/*Uno.Time.Text.ParseResult<Uno.Time.LocalTime>*/], uCRef(lt), &ret4), ret4);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* ex = __t.Exception;
        return (::g::Uno::Time::Text::ParseResult*)::g::Uno::Time::Text::ParseResult::ForException(::TYPES[25/*Uno.Time.Text.ParseResult<Uno.Time.LocalTime>*/], ex);
    }
}

// private void SetHour(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value, int hour) [instance] :396
void LocalTimePattern::SetHour(LocalTimePattern__LocalTimeBucket* value, int hour)
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "SetHour(Uno.Time.Text.LocalTimePattern.LocalTimeBucket,int)");
    uPtr(value)->Hour = hour;
}

// private void SetMillisecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value, int millisecond) [instance] :426
void LocalTimePattern::SetMillisecond(LocalTimePattern__LocalTimeBucket* value, int millisecond)
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "SetMillisecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket,int)");
    uPtr(value)->Millisecond = millisecond;
}

// private void SetMinute(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value, int minute) [instance] :406
void LocalTimePattern::SetMinute(LocalTimePattern__LocalTimeBucket* value, int minute)
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "SetMinute(Uno.Time.Text.LocalTimePattern.LocalTimeBucket,int)");
    uPtr(value)->Minute = minute;
}

// private void SetSecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket value, int second) [instance] :416
void LocalTimePattern::SetSecond(LocalTimePattern__LocalTimeBucket* value, int second)
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "SetSecond(Uno.Time.Text.LocalTimePattern.LocalTimeBucket,int)");
    uPtr(value)->Second = second;
}

// private LocalTimePattern New() [static] :354
LocalTimePattern* LocalTimePattern::New1()
{
    LocalTimePattern* obj2 = (LocalTimePattern*)uNew(LocalTimePattern_typeof());
    obj2->ctor_();
    return obj2;
}

// public static Uno.Time.Text.LocalTimePattern get_GeneralIsoPattern() [static] :342
LocalTimePattern* LocalTimePattern::GeneralIsoPattern()
{
    uStackFrame __("Uno.Time.Text.LocalTimePattern", "get_GeneralIsoPattern()");

    if (LocalTimePattern::General_ == NULL)
        LocalTimePattern::General_ = LocalTimePattern::New1();

    return LocalTimePattern::General_;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno
// -------------------------------------------------------------------------------------------------------

// internal sealed class NumberPart<T> :862
// {
static void NumberPart_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Not enough symbols at ");
    ::STRINGS[2] = uString::Const("Not found number at ");
    ::STRINGS[3] = uString::Const("{0:D");
    ::STRINGS[4] = uString::Const("}");
    ::TYPES[26] = uObject_typeof()->Array();
    type->SetBase(::g::Uno::Time::Text::PatternPart_typeof()->MakeType(type->T(0), ::g::Uno::Int_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Time::Text::PatternPart_type, interface0));
    type->SetFields(5);
}

::g::Uno::Time::Text::PatternPart_type* NumberPart_typeof()
{
    static uSStrong< ::g::Uno::Time::Text::PatternPart_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Time::Text::PatternPart_typeof();
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NumberPart);
    options.TypeSize = sizeof(::g::Uno::Time::Text::PatternPart_type);
    type = (::g::Uno::Time::Text::PatternPart_type*)uClassType::New("Uno.Time.Text.NumberPart`1", options);
    type->fp_build_ = NumberPart_build;
    type->fp_Read = (void(*)(::g::Uno::Time::Text::PatternPart*, uString*, int*, void*, int*))NumberPart__Read_fn;
    type->fp_Write = (void(*)(::g::Uno::Time::Text::PatternPart*, void*, uString**))NumberPart__Write_fn;
    type->interface0.fp_Read = (void(*)(uObject*, uString*, int*, void*, int*))NumberPart__Read_fn;
    type->interface0.fp_Write = (void(*)(uObject*, void*, uString**))NumberPart__Write_fn;
    type->interface0.fp_get_SkipNextPartsCountIfThisNotSpecified = (void(*)(uObject*, int*))::g::Uno::Time::Text::PatternPart__get_SkipNextPartsCountIfThisNotSpecified_fn;
    return type;
}

// public NumberPart(int size, bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) :864
void NumberPart__ctor_1_fn(NumberPart* __this, int* size, bool* obligatory, uDelegate* setter, uDelegate* getter)
{
    __this->ctor_1(*size, *obligatory, setter, getter);
}

// private string GetPart(string line, int index) :885
void NumberPart__GetPart_fn(NumberPart* __this, uString* line, int* index, uString** __retval)
{
    *__retval = __this->GetPart(line, *index);
}

// public NumberPart New(int size, bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) :864
void NumberPart__New1_fn(uType* __type, int* size, bool* obligatory, uDelegate* setter, uDelegate* getter, NumberPart** __retval)
{
    *__retval = NumberPart::New1(__type, *size, *obligatory, setter, getter);
}

// public override sealed int Read(string line, int position, T value) :872
void NumberPart__Read_fn(NumberPart* __this, uString* line, int* position, void* value, int* __retval)
{
    uStackFrame __("Uno.Time.Text.NumberPart`1", "Read(string,int,T)");
    int position_ = *position;
    uString* part = __this->GetPart(line, position_);

    if (::g::Uno::String::IsNullOrEmpty(part))
    {
        if (__this->Obligatory())
            U_THROW(::g::Uno::FormatException::New4(::g::Uno::String::op_Addition1(::STRINGS[2/*"Not found n...*/], uBox<int>(::g::Uno::Int_typeof(), position_))));

        return *__retval = 0, void();
    }

    ::g::Uno::Time::Text::PatternPart__Set_fn(__this, value, uCRef<int>(::g::Uno::Int::Parse(part)));
    return *__retval = __this->ExpectedSize(), void();
}

// public override sealed string Write(T value) :896
void NumberPart__Write_fn(NumberPart* __this, void* value, uString** __retval)
{
    uStackFrame __("Uno.Time.Text.NumberPart`1", "Write(T)");
    int ret2;
    return *__retval = ::g::Uno::String::Format(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[3/*"{0:D"*/], uBox<int>(::g::Uno::Int_typeof(), __this->ExpectedSize())), ::STRINGS[4/*"}"*/]), uArray::Init<uObject*>(::TYPES[26/*object[]*/], 1, uBox<int>(::g::Uno::Int_typeof(), ::g::Uno::Math::Abs5((::g::Uno::Time::Text::PatternPart__Get_fn(__this, value, &ret2), ret2))))), void();
}

// public NumberPart(int size, bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) [instance] :864
void NumberPart::ctor_1(int size, bool obligatory, uDelegate* setter, uDelegate* getter)
{
    ctor_();
    Setter(setter);
    Getter(getter);
    ExpectedSize(size);
    Obligatory(obligatory);
}

// private string GetPart(string line, int index) [instance] :885
uString* NumberPart::GetPart(uString* line, int index)
{
    uStackFrame __("Uno.Time.Text.NumberPart`1", "GetPart(string,int)");

    if ((index + ExpectedSize()) > uPtr(line)->Length())
    {
        if (Obligatory())
            U_THROW(::g::Uno::FormatException::New4(::g::Uno::String::op_Addition1(::STRINGS[1/*"Not enough ...*/], uBox<int>(::g::Uno::Int_typeof(), index))));

        return ::g::Uno::String::Empty();
    }

    return ::g::Uno::String::Substring1(uPtr(line), index, ExpectedSize());
}

// public NumberPart New(int size, bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) [static] :864
NumberPart* NumberPart::New1(uType* __type, int size, bool obligatory, uDelegate* setter, uDelegate* getter)
{
    NumberPart* obj1 = (NumberPart*)uNew(__type);
    obj1->ctor_1(size, obligatory, setter, getter);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno
// -------------------------------------------------------------------------------------------------------

// private sealed class OffsetPattern.OffsetBucket :741
// {
static void OffsetPattern__OffsetBucket_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::OffsetPattern__OffsetBucket, Hour), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::OffsetPattern__OffsetBucket, Minute), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::OffsetPattern__OffsetBucket, Second), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::OffsetPattern__OffsetBucket, Sign), 0);
}

uType* OffsetPattern__OffsetBucket_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(OffsetPattern__OffsetBucket);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.OffsetPattern.OffsetBucket", options);
    type->fp_build_ = OffsetPattern__OffsetBucket_build;
    type->fp_ctor_ = (void*)OffsetPattern__OffsetBucket__New1_fn;
    return type;
}

// public generated OffsetBucket() :741
void OffsetPattern__OffsetBucket__ctor__fn(OffsetPattern__OffsetBucket* __this)
{
    __this->ctor_();
}

// public generated OffsetBucket New() :741
void OffsetPattern__OffsetBucket__New1_fn(OffsetPattern__OffsetBucket** __retval)
{
    *__retval = OffsetPattern__OffsetBucket::New1();
}

// public generated OffsetBucket() [instance] :741
void OffsetPattern__OffsetBucket::ctor_()
{
}

// public generated OffsetBucket New() [static] :741
OffsetPattern__OffsetBucket* OffsetPattern__OffsetBucket::New1()
{
    OffsetPattern__OffsetBucket* obj1 = (OffsetPattern__OffsetBucket*)uNew(OffsetPattern__OffsetBucket_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno
// -------------------------------------------------------------------------------------------------------

// private sealed class OffsetDateTimePattern.OffsetDateTimeBucket :617
// {
static void OffsetDateTimePattern__OffsetDateTimeBucket_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::OffsetDateTimePattern__OffsetDateTimeBucket, Day), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::OffsetDateTimePattern__OffsetDateTimeBucket, Hour), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::OffsetDateTimePattern__OffsetDateTimeBucket, Millisecond), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::OffsetDateTimePattern__OffsetDateTimeBucket, Minute), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::OffsetDateTimePattern__OffsetDateTimeBucket, Month), 0,
        ::g::Uno::Time::Offset_typeof(), offsetof(::g::Uno::Time::Text::OffsetDateTimePattern__OffsetDateTimeBucket, Offset), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::OffsetDateTimePattern__OffsetDateTimeBucket, Second), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::OffsetDateTimePattern__OffsetDateTimeBucket, Sign), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::OffsetDateTimePattern__OffsetDateTimeBucket, Year), 0);
}

uType* OffsetDateTimePattern__OffsetDateTimeBucket_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(OffsetDateTimePattern__OffsetDateTimeBucket);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket", options);
    type->fp_build_ = OffsetDateTimePattern__OffsetDateTimeBucket_build;
    type->fp_ctor_ = (void*)OffsetDateTimePattern__OffsetDateTimeBucket__New1_fn;
    return type;
}

// public generated OffsetDateTimeBucket() :617
void OffsetDateTimePattern__OffsetDateTimeBucket__ctor__fn(OffsetDateTimePattern__OffsetDateTimeBucket* __this)
{
    __this->ctor_();
}

// public generated OffsetDateTimeBucket New() :617
void OffsetDateTimePattern__OffsetDateTimeBucket__New1_fn(OffsetDateTimePattern__OffsetDateTimeBucket** __retval)
{
    *__retval = OffsetDateTimePattern__OffsetDateTimeBucket::New1();
}

// public generated OffsetDateTimeBucket() [instance] :617
void OffsetDateTimePattern__OffsetDateTimeBucket::ctor_()
{
}

// public generated OffsetDateTimeBucket New() [static] :617
OffsetDateTimePattern__OffsetDateTimeBucket* OffsetDateTimePattern__OffsetDateTimeBucket::New1()
{
    OffsetDateTimePattern__OffsetDateTimeBucket* obj1 = (OffsetDateTimePattern__OffsetDateTimeBucket*)uNew(OffsetDateTimePattern__OffsetDateTimeBucket_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class OffsetDateTimePattern :451
// {
static void OffsetDateTimePattern_build(uType* type)
{
    ::TYPES[27] = ::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL);
    ::TYPES[28] = ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL)->Array();
    ::TYPES[29] = ::g::Uno::Time::Text::SignPart_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL);
    ::TYPES[30] = ::g::Uno::Action2_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[31] = ::g::Uno::Func1_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[32] = ::g::Uno::Time::Text::NumberPart_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL);
    ::TYPES[33] = ::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL);
    ::TYPES[34] = ::g::Uno::Time::Text::RangeNumberPart_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL);
    ::TYPES[35] = ::g::Uno::Time::Text::OffsetPatternPart_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), NULL);
    ::TYPES[36] = ::g::Uno::Action2_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Time::Offset_typeof(), NULL);
    ::TYPES[37] = ::g::Uno::Func1_typeof()->MakeType(OffsetDateTimePattern__OffsetDateTimeBucket_typeof(), ::g::Uno::Time::Offset_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Exception_typeof();
    ::TYPES[38] = ::g::Uno::Time::Text::ParseResult_typeof()->MakeType(::g::Uno::Time::OffsetDateTime_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[27/*Uno.Time.Text.FixedFormatPattern<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket>*/], offsetof(::g::Uno::Time::Text::OffsetDateTimePattern, _generalPattern), 0,
        type, (uintptr_t)&::g::Uno::Time::Text::OffsetDateTimePattern::General_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("Format", NULL, (void*)OffsetDateTimePattern__Format_fn, 0, false, ::g::Uno::String_typeof(), 1, ::g::Uno::Time::OffsetDateTime_typeof()),
        new uFunction("get_GeneralIsoPattern", NULL, (void*)OffsetDateTimePattern__get_GeneralIsoPattern_fn, 0, true, type, 0),
        new uFunction("Parse", NULL, (void*)OffsetDateTimePattern__Parse_fn, 0, false, ::TYPES[38/*Uno.Time.Text.ParseResult<Uno.Time.OffsetDateTime>*/], 1, ::g::Uno::String_typeof()));
}

uType* OffsetDateTimePattern_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OffsetDateTimePattern);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.OffsetDateTimePattern", options);
    type->fp_build_ = OffsetDateTimePattern_build;
    type->fp_ctor_ = (void*)OffsetDateTimePattern__New1_fn;
    return type;
}

// private OffsetDateTimePattern() :469
void OffsetDateTimePattern__ctor__fn(OffsetDateTimePattern* __this)
{
    __this->ctor_();
}

// public string Format(Uno.Time.OffsetDateTime value) :510
void OffsetDateTimePattern__Format_fn(OffsetDateTimePattern* __this, ::g::Uno::Time::OffsetDateTime* value, uString** __retval)
{
    *__retval = __this->Format(value);
}

// public static Uno.Time.Text.OffsetDateTimePattern get_GeneralIsoPattern() :457
void OffsetDateTimePattern__get_GeneralIsoPattern_fn(OffsetDateTimePattern** __retval)
{
    *__retval = OffsetDateTimePattern::GeneralIsoPattern();
}

// private int GetDay(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) :562
void OffsetDateTimePattern__GetDay_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetDay(value);
}

// private int GetHour(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) :572
void OffsetDateTimePattern__GetHour_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetHour(value);
}

// private int GetMillisecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) :602
void OffsetDateTimePattern__GetMillisecond_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetMillisecond(value);
}

// private int GetMinute(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) :582
void OffsetDateTimePattern__GetMinute_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetMinute(value);
}

// private int GetMonth(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) :552
void OffsetDateTimePattern__GetMonth_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetMonth(value);
}

// private Uno.Time.Offset GetOffset(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) :612
void OffsetDateTimePattern__GetOffset_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, ::g::Uno::Time::Offset* __retval)
{
    *__retval = __this->GetOffset(value);
}

// private int GetSecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) :592
void OffsetDateTimePattern__GetSecond_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetSecond(value);
}

// private int GetSign(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) :532
void OffsetDateTimePattern__GetSign_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetSign(value);
}

// private int GetYear(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) :542
void OffsetDateTimePattern__GetYear_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* __retval)
{
    *__retval = __this->GetYear(value);
}

// private OffsetDateTimePattern New() :469
void OffsetDateTimePattern__New1_fn(OffsetDateTimePattern** __retval)
{
    *__retval = OffsetDateTimePattern::New1();
}

// public Uno.Time.Text.ParseResult<Uno.Time.OffsetDateTime> Parse(string text) :492
void OffsetDateTimePattern__Parse_fn(OffsetDateTimePattern* __this, uString* text, ::g::Uno::Time::Text::ParseResult** __retval)
{
    *__retval = __this->Parse(text);
}

// private void SetDay(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int day) :557
void OffsetDateTimePattern__SetDay_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* day)
{
    __this->SetDay(value, *day);
}

// private void SetHour(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int hour) :567
void OffsetDateTimePattern__SetHour_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* hour)
{
    __this->SetHour(value, *hour);
}

// private void SetMillisecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int millisecond) :597
void OffsetDateTimePattern__SetMillisecond_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* millisecond)
{
    __this->SetMillisecond(value, *millisecond);
}

// private void SetMinute(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int minute) :577
void OffsetDateTimePattern__SetMinute_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* minute)
{
    __this->SetMinute(value, *minute);
}

// private void SetMonth(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int month) :547
void OffsetDateTimePattern__SetMonth_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* month)
{
    __this->SetMonth(value, *month);
}

// private void SetOffset(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, Uno.Time.Offset offset) :607
void OffsetDateTimePattern__SetOffset_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, ::g::Uno::Time::Offset* offset)
{
    __this->SetOffset(value, *offset);
}

// private void SetSecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int second) :587
void OffsetDateTimePattern__SetSecond_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* second)
{
    __this->SetSecond(value, *second);
}

// private void SetSign(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int sign) :527
void OffsetDateTimePattern__SetSign_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* sign)
{
    __this->SetSign(value, *sign);
}

// private void SetYear(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int year) :537
void OffsetDateTimePattern__SetYear_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* year)
{
    __this->SetYear(value, *year);
}

uSStrong<OffsetDateTimePattern*> OffsetDateTimePattern::General_;

// private OffsetDateTimePattern() [instance] :469
void OffsetDateTimePattern::ctor_()
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", ".ctor()");
    _generalPattern = ((::g::Uno::Time::Text::FixedFormatPattern*)::g::Uno::Time::Text::FixedFormatPattern::New1(::TYPES[27/*Uno.Time.Text.FixedFormatPattern<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket>*/], uArray::Init<uObject*>(::TYPES[28/*Uno.Time.Text.IPatternPart<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket>[]*/], 15, (uObject*)((::g::Uno::Time::Text::SignPart*)::g::Uno::Time::Text::SignPart::New2(::TYPES[29/*Uno.Time.Text.SignPart<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket>*/], uDelegate::New(::TYPES[30/*Uno.Action<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket, int>*/], (void*)OffsetDateTimePattern__SetSign_fn, this), uDelegate::New(::TYPES[31/*Uno.Func<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket, int>*/], (void*)OffsetDateTimePattern__GetSign_fn, this))), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[32/*Uno.Time.Text.NumberPart<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket>*/], 4, true, uDelegate::New(::TYPES[30/*Uno.Action<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket, int>*/], (void*)OffsetDateTimePattern__SetYear_fn, this), uDelegate::New(::TYPES[31/*Uno.Func<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket, int>*/], (void*)OffsetDateTimePattern__GetYear_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::TYPES[33/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket>*/], true, '-', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[32/*Uno.Time.Text.NumberPart<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket>*/], 2, true, uDelegate::New(::TYPES[30/*Uno.Action<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket, int>*/], (void*)OffsetDateTimePattern__SetMonth_fn, this), uDelegate::New(::TYPES[31/*Uno.Func<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket, int>*/], (void*)OffsetDateTimePattern__GetMonth_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::TYPES[33/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket>*/], true, '-', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[32/*Uno.Time.Text.NumberPart<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket>*/], 2, true, uDelegate::New(::TYPES[30/*Uno.Action<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket, int>*/], (void*)OffsetDateTimePattern__SetDay_fn, this), uDelegate::New(::TYPES[31/*Uno.Func<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket, int>*/], (void*)OffsetDateTimePattern__GetDay_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::TYPES[33/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket>*/], true, 'T', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[32/*Uno.Time.Text.NumberPart<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket>*/], 2, true, uDelegate::New(::TYPES[30/*Uno.Action<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket, int>*/], (void*)OffsetDateTimePattern__SetHour_fn, this), uDelegate::New(::TYPES[31/*Uno.Func<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket, int>*/], (void*)OffsetDateTimePattern__GetHour_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::TYPES[33/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket>*/], true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[32/*Uno.Time.Text.NumberPart<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket>*/], 2, true, uDelegate::New(::TYPES[30/*Uno.Action<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket, int>*/], (void*)OffsetDateTimePattern__SetMinute_fn, this), uDelegate::New(::TYPES[31/*Uno.Func<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket, int>*/], (void*)OffsetDateTimePattern__GetMinute_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::TYPES[33/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket>*/], true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[32/*Uno.Time.Text.NumberPart<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket>*/], 2, true, uDelegate::New(::TYPES[30/*Uno.Action<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket, int>*/], (void*)OffsetDateTimePattern__SetSecond_fn, this), uDelegate::New(::TYPES[31/*Uno.Func<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket, int>*/], (void*)OffsetDateTimePattern__GetSecond_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New2(::TYPES[33/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket>*/], false, '.', 1)), (uObject*)((::g::Uno::Time::Text::RangeNumberPart*)::g::Uno::Time::Text::RangeNumberPart::New1(::TYPES[34/*Uno.Time.Text.RangeNumberPart<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket>*/], 3, 3, uDelegate::New(::TYPES[30/*Uno.Action<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket, int>*/], (void*)OffsetDateTimePattern__SetMillisecond_fn, this), uDelegate::New(::TYPES[31/*Uno.Func<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket, int>*/], (void*)OffsetDateTimePattern__GetMillisecond_fn, this))), (uObject*)((::g::Uno::Time::Text::OffsetPatternPart*)::g::Uno::Time::Text::OffsetPatternPart::New1(::TYPES[35/*Uno.Time.Text.OffsetPatternPart<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket>*/], uDelegate::New(::TYPES[36/*Uno.Action<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket, Uno.Time.Offset>*/], (void*)OffsetDateTimePattern__SetOffset_fn, this), uDelegate::New(::TYPES[37/*Uno.Func<Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket, Uno.Time.Offset>*/], (void*)OffsetDateTimePattern__GetOffset_fn, this))))));
}

// public string Format(Uno.Time.OffsetDateTime value) [instance] :510
uString* OffsetDateTimePattern::Format(::g::Uno::Time::OffsetDateTime* value)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "Format(Uno.Time.OffsetDateTime)");
    OffsetDateTimePattern__OffsetDateTimeBucket* collection1;
    uString* ret3;
    collection1 = OffsetDateTimePattern__OffsetDateTimeBucket::New1();
    uPtr(collection1)->Sign = ((uPtr(value)->Year() < 0) ? -1 : 1);
    uPtr(collection1)->Year = uPtr(value)->Year();
    uPtr(collection1)->Month = uPtr(value)->Month();
    uPtr(collection1)->Day = uPtr(value)->Day();
    uPtr(collection1)->Hour = uPtr(value)->Hour();
    uPtr(collection1)->Minute = uPtr(value)->Minute();
    uPtr(collection1)->Second = uPtr(value)->Second();
    uPtr(collection1)->Millisecond = uPtr(value)->Millisecond();
    uPtr(collection1)->Offset = uPtr(value)->Offset();
    OffsetDateTimePattern__OffsetDateTimeBucket* bucket = collection1;
    return (::g::Uno::Time::Text::FixedFormatPattern__Format_fn(uPtr(_generalPattern), bucket, &ret3), ret3);
}

// private int GetDay(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) [instance] :562
int OffsetDateTimePattern::GetDay(OffsetDateTimePattern__OffsetDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "GetDay(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket)");
    return uPtr(value)->Day;
}

// private int GetHour(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) [instance] :572
int OffsetDateTimePattern::GetHour(OffsetDateTimePattern__OffsetDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "GetHour(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket)");
    return uPtr(value)->Hour;
}

// private int GetMillisecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) [instance] :602
int OffsetDateTimePattern::GetMillisecond(OffsetDateTimePattern__OffsetDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "GetMillisecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket)");
    return uPtr(value)->Millisecond;
}

// private int GetMinute(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) [instance] :582
int OffsetDateTimePattern::GetMinute(OffsetDateTimePattern__OffsetDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "GetMinute(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket)");
    return uPtr(value)->Minute;
}

// private int GetMonth(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) [instance] :552
int OffsetDateTimePattern::GetMonth(OffsetDateTimePattern__OffsetDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "GetMonth(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket)");
    return uPtr(value)->Month;
}

// private Uno.Time.Offset GetOffset(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) [instance] :612
::g::Uno::Time::Offset OffsetDateTimePattern::GetOffset(OffsetDateTimePattern__OffsetDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "GetOffset(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket)");
    return uPtr(value)->Offset;
}

// private int GetSecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) [instance] :592
int OffsetDateTimePattern::GetSecond(OffsetDateTimePattern__OffsetDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "GetSecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket)");
    return uPtr(value)->Second;
}

// private int GetSign(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) [instance] :532
int OffsetDateTimePattern::GetSign(OffsetDateTimePattern__OffsetDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "GetSign(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket)");
    return uPtr(value)->Sign;
}

// private int GetYear(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value) [instance] :542
int OffsetDateTimePattern::GetYear(OffsetDateTimePattern__OffsetDateTimeBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "GetYear(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket)");
    return uPtr(value)->Year;
}

// public Uno.Time.Text.ParseResult<Uno.Time.OffsetDateTime> Parse(string text) [instance] :492
::g::Uno::Time::Text::ParseResult* OffsetDateTimePattern::Parse(uString* text)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "Parse(string)");
    ::g::Uno::Time::Text::ParseResult* ret4;

    try
    {
        OffsetDateTimePattern__OffsetDateTimeBucket* bucket = OffsetDateTimePattern__OffsetDateTimeBucket::New1();
        ::g::Uno::Time::Text::FixedFormatPattern__Parse_fn(uPtr(_generalPattern), text, bucket);
        ::g::Uno::Time::LocalDateTime* ldt = ::g::Uno::Time::LocalDateTime::New3(bucket->Sign * bucket->Year, bucket->Month, bucket->Day, bucket->Hour, bucket->Minute, bucket->Second, bucket->Millisecond);
        ::g::Uno::Time::OffsetDateTime* result = ::g::Uno::Time::OffsetDateTime::New1(ldt, bucket->Offset);
        return (::g::Uno::Time::Text::ParseResult__ForValue_fn(::TYPES[38/*Uno.Time.Text.ParseResult<Uno.Time.OffsetDateTime>*/], result, &ret4), ret4);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* ex = __t.Exception;
        return (::g::Uno::Time::Text::ParseResult*)::g::Uno::Time::Text::ParseResult::ForException(::TYPES[38/*Uno.Time.Text.ParseResult<Uno.Time.OffsetDateTime>*/], ex);
    }
}

// private void SetDay(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int day) [instance] :557
void OffsetDateTimePattern::SetDay(OffsetDateTimePattern__OffsetDateTimeBucket* value, int day)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "SetDay(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket,int)");
    uPtr(value)->Day = day;
}

// private void SetHour(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int hour) [instance] :567
void OffsetDateTimePattern::SetHour(OffsetDateTimePattern__OffsetDateTimeBucket* value, int hour)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "SetHour(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket,int)");
    uPtr(value)->Hour = hour;
}

// private void SetMillisecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int millisecond) [instance] :597
void OffsetDateTimePattern::SetMillisecond(OffsetDateTimePattern__OffsetDateTimeBucket* value, int millisecond)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "SetMillisecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket,int)");
    uPtr(value)->Millisecond = millisecond;
}

// private void SetMinute(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int minute) [instance] :577
void OffsetDateTimePattern::SetMinute(OffsetDateTimePattern__OffsetDateTimeBucket* value, int minute)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "SetMinute(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket,int)");
    uPtr(value)->Minute = minute;
}

// private void SetMonth(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int month) [instance] :547
void OffsetDateTimePattern::SetMonth(OffsetDateTimePattern__OffsetDateTimeBucket* value, int month)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "SetMonth(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket,int)");
    uPtr(value)->Month = month;
}

// private void SetOffset(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, Uno.Time.Offset offset) [instance] :607
void OffsetDateTimePattern::SetOffset(OffsetDateTimePattern__OffsetDateTimeBucket* value, ::g::Uno::Time::Offset offset)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "SetOffset(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket,Uno.Time.Offset)");
    uPtr(value)->Offset = offset;
}

// private void SetSecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int second) [instance] :587
void OffsetDateTimePattern::SetSecond(OffsetDateTimePattern__OffsetDateTimeBucket* value, int second)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "SetSecond(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket,int)");
    uPtr(value)->Second = second;
}

// private void SetSign(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int sign) [instance] :527
void OffsetDateTimePattern::SetSign(OffsetDateTimePattern__OffsetDateTimeBucket* value, int sign)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "SetSign(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket,int)");
    uPtr(value)->Sign = sign;
}

// private void SetYear(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket value, int year) [instance] :537
void OffsetDateTimePattern::SetYear(OffsetDateTimePattern__OffsetDateTimeBucket* value, int year)
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "SetYear(Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket,int)");
    uPtr(value)->Year = year;
}

// private OffsetDateTimePattern New() [static] :469
OffsetDateTimePattern* OffsetDateTimePattern::New1()
{
    OffsetDateTimePattern* obj2 = (OffsetDateTimePattern*)uNew(OffsetDateTimePattern_typeof());
    obj2->ctor_();
    return obj2;
}

// public static Uno.Time.Text.OffsetDateTimePattern get_GeneralIsoPattern() [static] :457
OffsetDateTimePattern* OffsetDateTimePattern::GeneralIsoPattern()
{
    uStackFrame __("Uno.Time.Text.OffsetDateTimePattern", "get_GeneralIsoPattern()");

    if (OffsetDateTimePattern::General_ == NULL)
        OffsetDateTimePattern::General_ = OffsetDateTimePattern::New1();

    return OffsetDateTimePattern::General_;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class OffsetPattern :638
// {
static void OffsetPattern_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Z");
    ::TYPES[39] = ::g::Uno::Time::Text::FixedFormatPattern_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL);
    ::TYPES[40] = ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL)->Array();
    ::TYPES[41] = ::g::Uno::Time::Text::SignPart_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL);
    ::TYPES[42] = ::g::Uno::Action2_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[43] = ::g::Uno::Func1_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[44] = ::g::Uno::Time::Text::NumberPart_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL);
    ::TYPES[45] = ::g::Uno::Time::Text::SeparatorPart_typeof()->MakeType(OffsetPattern__OffsetBucket_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Exception_typeof();
    ::TYPES[46] = ::g::Uno::Time::Text::ParseResult_typeof()->MakeType(::g::Uno::Time::Offset_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[39/*Uno.Time.Text.FixedFormatPattern<Uno.Time.Text.OffsetPattern.OffsetBucket>*/], offsetof(::g::Uno::Time::Text::OffsetPattern, _generalPattern), 0,
        type, (uintptr_t)&::g::Uno::Time::Text::OffsetPattern::General_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("Format", NULL, (void*)OffsetPattern__Format_fn, 0, false, ::g::Uno::String_typeof(), 1, ::g::Uno::Time::Offset_typeof()),
        new uFunction("get_GeneralIsoPattern", NULL, (void*)OffsetPattern__get_GeneralIsoPattern_fn, 0, true, type, 0),
        new uFunction("Parse", NULL, (void*)OffsetPattern__Parse_fn, 0, false, ::TYPES[46/*Uno.Time.Text.ParseResult<Uno.Time.Offset>*/], 1, ::g::Uno::String_typeof()));
}

uType* OffsetPattern_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OffsetPattern);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.OffsetPattern", options);
    type->fp_build_ = OffsetPattern_build;
    type->fp_ctor_ = (void*)OffsetPattern__New1_fn;
    return type;
}

// private OffsetPattern() :656
void OffsetPattern__ctor__fn(OffsetPattern* __this)
{
    __this->ctor_();
}

// public string Format(Uno.Time.Offset value) :689
void OffsetPattern__Format_fn(OffsetPattern* __this, ::g::Uno::Time::Offset* value, uString** __retval)
{
    *__retval = __this->Format(*value);
}

// public static Uno.Time.Text.OffsetPattern get_GeneralIsoPattern() :644
void OffsetPattern__get_GeneralIsoPattern_fn(OffsetPattern** __retval)
{
    *__retval = OffsetPattern::GeneralIsoPattern();
}

// private int GetHour(Uno.Time.Text.OffsetPattern.OffsetBucket value) :716
void OffsetPattern__GetHour_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* __retval)
{
    *__retval = __this->GetHour(value);
}

// private int GetMinute(Uno.Time.Text.OffsetPattern.OffsetBucket value) :726
void OffsetPattern__GetMinute_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* __retval)
{
    *__retval = __this->GetMinute(value);
}

// private int GetSecond(Uno.Time.Text.OffsetPattern.OffsetBucket value) :736
void OffsetPattern__GetSecond_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* __retval)
{
    *__retval = __this->GetSecond(value);
}

// private int GetSign(Uno.Time.Text.OffsetPattern.OffsetBucket value) :706
void OffsetPattern__GetSign_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* __retval)
{
    *__retval = __this->GetSign(value);
}

// private OffsetPattern New() :656
void OffsetPattern__New1_fn(OffsetPattern** __retval)
{
    *__retval = OffsetPattern::New1();
}

// public Uno.Time.Text.ParseResult<Uno.Time.Offset> Parse(string text) :669
void OffsetPattern__Parse_fn(OffsetPattern* __this, uString* text, ::g::Uno::Time::Text::ParseResult** __retval)
{
    *__retval = __this->Parse(text);
}

// private void SetHour(Uno.Time.Text.OffsetPattern.OffsetBucket value, int hour) :711
void OffsetPattern__SetHour_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* hour)
{
    __this->SetHour(value, *hour);
}

// private void SetMinute(Uno.Time.Text.OffsetPattern.OffsetBucket value, int minute) :721
void OffsetPattern__SetMinute_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* minute)
{
    __this->SetMinute(value, *minute);
}

// private void SetSecond(Uno.Time.Text.OffsetPattern.OffsetBucket value, int second) :731
void OffsetPattern__SetSecond_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* second)
{
    __this->SetSecond(value, *second);
}

// private void SetSign(Uno.Time.Text.OffsetPattern.OffsetBucket value, int sign) :701
void OffsetPattern__SetSign_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int* sign)
{
    __this->SetSign(value, *sign);
}

uSStrong<OffsetPattern*> OffsetPattern::General_;

// private OffsetPattern() [instance] :656
void OffsetPattern::ctor_()
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", ".ctor()");
    _generalPattern = ((::g::Uno::Time::Text::FixedFormatPattern*)::g::Uno::Time::Text::FixedFormatPattern::New1(::TYPES[39/*Uno.Time.Text.FixedFormatPattern<Uno.Time.Text.OffsetPattern.OffsetBucket>*/], uArray::Init<uObject*>(::TYPES[40/*Uno.Time.Text.IPatternPart<Uno.Time.Text.OffsetPattern.OffsetBucket>[]*/], 6, (uObject*)((::g::Uno::Time::Text::SignPart*)::g::Uno::Time::Text::SignPart::New1(::TYPES[41/*Uno.Time.Text.SignPart<Uno.Time.Text.OffsetPattern.OffsetBucket>*/], true, uDelegate::New(::TYPES[42/*Uno.Action<Uno.Time.Text.OffsetPattern.OffsetBucket, int>*/], (void*)OffsetPattern__SetSign_fn, this), uDelegate::New(::TYPES[43/*Uno.Func<Uno.Time.Text.OffsetPattern.OffsetBucket, int>*/], (void*)OffsetPattern__GetSign_fn, this))), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[44/*Uno.Time.Text.NumberPart<Uno.Time.Text.OffsetPattern.OffsetBucket>*/], 2, true, uDelegate::New(::TYPES[42/*Uno.Action<Uno.Time.Text.OffsetPattern.OffsetBucket, int>*/], (void*)OffsetPattern__SetHour_fn, this), uDelegate::New(::TYPES[43/*Uno.Func<Uno.Time.Text.OffsetPattern.OffsetBucket, int>*/], (void*)OffsetPattern__GetHour_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New1(::TYPES[45/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.OffsetPattern.OffsetBucket>*/], false, true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[44/*Uno.Time.Text.NumberPart<Uno.Time.Text.OffsetPattern.OffsetBucket>*/], 2, false, uDelegate::New(::TYPES[42/*Uno.Action<Uno.Time.Text.OffsetPattern.OffsetBucket, int>*/], (void*)OffsetPattern__SetMinute_fn, this), uDelegate::New(::TYPES[43/*Uno.Func<Uno.Time.Text.OffsetPattern.OffsetBucket, int>*/], (void*)OffsetPattern__GetMinute_fn, this))), (uObject*)((::g::Uno::Time::Text::SeparatorPart*)::g::Uno::Time::Text::SeparatorPart::New1(::TYPES[45/*Uno.Time.Text.SeparatorPart<Uno.Time.Text.OffsetPattern.OffsetBucket>*/], false, true, ':', 0)), (uObject*)((::g::Uno::Time::Text::NumberPart*)::g::Uno::Time::Text::NumberPart::New1(::TYPES[44/*Uno.Time.Text.NumberPart<Uno.Time.Text.OffsetPattern.OffsetBucket>*/], 2, false, uDelegate::New(::TYPES[42/*Uno.Action<Uno.Time.Text.OffsetPattern.OffsetBucket, int>*/], (void*)OffsetPattern__SetSecond_fn, this), uDelegate::New(::TYPES[43/*Uno.Func<Uno.Time.Text.OffsetPattern.OffsetBucket, int>*/], (void*)OffsetPattern__GetSecond_fn, this))))));
}

// public string Format(Uno.Time.Offset value) [instance] :689
uString* OffsetPattern::Format(::g::Uno::Time::Offset value)
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "Format(Uno.Time.Offset)");
    uString* ret2;
    OffsetPattern__OffsetBucket* bucket = OffsetPattern__OffsetBucket::New1();
    bucket->Sign = ((value.Milliseconds() < 0) ? -1 : 1);
    bucket->Hour = (value.Milliseconds() / 3600000);
    int remaining = value.Milliseconds() % 3600000;
    bucket->Minute = (remaining / 60000);
    remaining = remaining % 60000;
    bucket->Second = (remaining / 1000);
    return (::g::Uno::Time::Text::FixedFormatPattern__Format_fn(uPtr(_generalPattern), bucket, &ret2), ret2);
}

// private int GetHour(Uno.Time.Text.OffsetPattern.OffsetBucket value) [instance] :716
int OffsetPattern::GetHour(OffsetPattern__OffsetBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "GetHour(Uno.Time.Text.OffsetPattern.OffsetBucket)");
    return uPtr(value)->Hour;
}

// private int GetMinute(Uno.Time.Text.OffsetPattern.OffsetBucket value) [instance] :726
int OffsetPattern::GetMinute(OffsetPattern__OffsetBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "GetMinute(Uno.Time.Text.OffsetPattern.OffsetBucket)");
    return uPtr(value)->Minute;
}

// private int GetSecond(Uno.Time.Text.OffsetPattern.OffsetBucket value) [instance] :736
int OffsetPattern::GetSecond(OffsetPattern__OffsetBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "GetSecond(Uno.Time.Text.OffsetPattern.OffsetBucket)");
    return uPtr(value)->Second;
}

// private int GetSign(Uno.Time.Text.OffsetPattern.OffsetBucket value) [instance] :706
int OffsetPattern::GetSign(OffsetPattern__OffsetBucket* value)
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "GetSign(Uno.Time.Text.OffsetPattern.OffsetBucket)");
    return uPtr(value)->Sign;
}

// public Uno.Time.Text.ParseResult<Uno.Time.Offset> Parse(string text) [instance] :669
::g::Uno::Time::Text::ParseResult* OffsetPattern::Parse(uString* text)
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "Parse(string)");
    ::g::Uno::Time::Text::ParseResult* ret3;
    ::g::Uno::Time::Text::ParseResult* ret4;

    try
    {
        if (::g::Uno::String::op_Equality(text, ::STRINGS[5/*"Z"*/]))
            return (::g::Uno::Time::Text::ParseResult__ForValue_fn(::TYPES[46/*Uno.Time.Text.ParseResult<Uno.Time.Offset>*/], uCRef(::g::Uno::Time::Offset::Zero()), &ret3), ret3);

        OffsetPattern__OffsetBucket* bucket = OffsetPattern__OffsetBucket::New1();
        ::g::Uno::Time::Text::FixedFormatPattern__Parse_fn(uPtr(_generalPattern), text, bucket);
        ::g::Uno::Time::Offset offset = ::g::Uno::Time::Offset__FromHoursAndMinutes(bucket->Sign * bucket->Hour, bucket->Sign * bucket->Minute);
        return (::g::Uno::Time::Text::ParseResult__ForValue_fn(::TYPES[46/*Uno.Time.Text.ParseResult<Uno.Time.Offset>*/], uCRef(offset), &ret4), ret4);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* ex = __t.Exception;
        return (::g::Uno::Time::Text::ParseResult*)::g::Uno::Time::Text::ParseResult::ForException(::TYPES[46/*Uno.Time.Text.ParseResult<Uno.Time.Offset>*/], ex);
    }
}

// private void SetHour(Uno.Time.Text.OffsetPattern.OffsetBucket value, int hour) [instance] :711
void OffsetPattern::SetHour(OffsetPattern__OffsetBucket* value, int hour)
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "SetHour(Uno.Time.Text.OffsetPattern.OffsetBucket,int)");
    uPtr(value)->Hour = hour;
}

// private void SetMinute(Uno.Time.Text.OffsetPattern.OffsetBucket value, int minute) [instance] :721
void OffsetPattern::SetMinute(OffsetPattern__OffsetBucket* value, int minute)
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "SetMinute(Uno.Time.Text.OffsetPattern.OffsetBucket,int)");
    uPtr(value)->Minute = minute;
}

// private void SetSecond(Uno.Time.Text.OffsetPattern.OffsetBucket value, int second) [instance] :731
void OffsetPattern::SetSecond(OffsetPattern__OffsetBucket* value, int second)
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "SetSecond(Uno.Time.Text.OffsetPattern.OffsetBucket,int)");
    uPtr(value)->Second = second;
}

// private void SetSign(Uno.Time.Text.OffsetPattern.OffsetBucket value, int sign) [instance] :701
void OffsetPattern::SetSign(OffsetPattern__OffsetBucket* value, int sign)
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "SetSign(Uno.Time.Text.OffsetPattern.OffsetBucket,int)");
    uPtr(value)->Sign = sign;
}

// private OffsetPattern New() [static] :656
OffsetPattern* OffsetPattern::New1()
{
    OffsetPattern* obj1 = (OffsetPattern*)uNew(OffsetPattern_typeof());
    obj1->ctor_();
    return obj1;
}

// public static Uno.Time.Text.OffsetPattern get_GeneralIsoPattern() [static] :644
OffsetPattern* OffsetPattern::GeneralIsoPattern()
{
    uStackFrame __("Uno.Time.Text.OffsetPattern", "get_GeneralIsoPattern()");

    if (OffsetPattern::General_ == NULL)
        OffsetPattern::General_ = OffsetPattern::New1();

    return OffsetPattern::General_;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno
// -------------------------------------------------------------------------------------------------------

// internal sealed class OffsetPatternPart<T> :1057
// {
static void OffsetPatternPart_build(uType* type)
{
    type->SetBase(::g::Uno::Time::Text::PatternPart_typeof()->MakeType(type->T(0), ::g::Uno::Time::Offset_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Time::Text::PatternPart_type, interface0));
    type->SetFields(5);
}

::g::Uno::Time::Text::PatternPart_type* OffsetPatternPart_typeof()
{
    static uSStrong< ::g::Uno::Time::Text::PatternPart_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Time::Text::PatternPart_typeof();
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(OffsetPatternPart);
    options.TypeSize = sizeof(::g::Uno::Time::Text::PatternPart_type);
    type = (::g::Uno::Time::Text::PatternPart_type*)uClassType::New("Uno.Time.Text.OffsetPatternPart`1", options);
    type->fp_build_ = OffsetPatternPart_build;
    type->fp_Read = (void(*)(::g::Uno::Time::Text::PatternPart*, uString*, int*, void*, int*))OffsetPatternPart__Read_fn;
    type->fp_Write = (void(*)(::g::Uno::Time::Text::PatternPart*, void*, uString**))OffsetPatternPart__Write_fn;
    type->interface0.fp_Read = (void(*)(uObject*, uString*, int*, void*, int*))OffsetPatternPart__Read_fn;
    type->interface0.fp_Write = (void(*)(uObject*, void*, uString**))OffsetPatternPart__Write_fn;
    type->interface0.fp_get_SkipNextPartsCountIfThisNotSpecified = (void(*)(uObject*, int*))::g::Uno::Time::Text::PatternPart__get_SkipNextPartsCountIfThisNotSpecified_fn;
    return type;
}

// public OffsetPatternPart(Uno.Action<T, Uno.Time.Offset> setter, Uno.Func<T, Uno.Time.Offset> getter) :1059
void OffsetPatternPart__ctor_1_fn(OffsetPatternPart* __this, uDelegate* setter, uDelegate* getter)
{
    __this->ctor_1(setter, getter);
}

// public OffsetPatternPart New(Uno.Action<T, Uno.Time.Offset> setter, Uno.Func<T, Uno.Time.Offset> getter) :1059
void OffsetPatternPart__New1_fn(uType* __type, uDelegate* setter, uDelegate* getter, OffsetPatternPart** __retval)
{
    *__retval = OffsetPatternPart::New1(__type, setter, getter);
}

// public override sealed int Read(string line, int position, T value) :1065
void OffsetPatternPart__Read_fn(OffsetPatternPart* __this, uString* line, int* position, void* value, int* __retval)
{
    uStackFrame __("Uno.Time.Text.OffsetPatternPart`1", "Read(string,int,T)");
    int position_ = *position;
    ::g::Uno::Time::Offset ret2;
    ::g::Uno::Time::Text::ParseResult* parse = uPtr(::g::Uno::Time::Text::OffsetPattern::GeneralIsoPattern())->Parse(::g::Uno::String::Substring(uPtr(line), position_));
    ::g::Uno::Time::Text::PatternPart__Set_fn(__this, value, uCRef((::g::Uno::Time::Text::ParseResult__GetValueOrThrow_fn(uPtr(parse), &ret2), ret2)));
    return *__retval = line->Length() - position_, void();
}

// public override sealed string Write(T value) :1072
void OffsetPatternPart__Write_fn(OffsetPatternPart* __this, void* value, uString** __retval)
{
    uStackFrame __("Uno.Time.Text.OffsetPatternPart`1", "Write(T)");
    ::g::Uno::Time::Offset ret3;
    return *__retval = uPtr(::g::Uno::Time::Text::OffsetPattern::GeneralIsoPattern())->Format((::g::Uno::Time::Text::PatternPart__Get_fn(__this, value, &ret3), ret3)), void();
}

// public OffsetPatternPart(Uno.Action<T, Uno.Time.Offset> setter, Uno.Func<T, Uno.Time.Offset> getter) [instance] :1059
void OffsetPatternPart::ctor_1(uDelegate* setter, uDelegate* getter)
{
    ctor_();
    Setter(setter);
    Getter(getter);
}

// public OffsetPatternPart New(Uno.Action<T, Uno.Time.Offset> setter, Uno.Func<T, Uno.Time.Offset> getter) [static] :1059
OffsetPatternPart* OffsetPatternPart::New1(uType* __type, uDelegate* setter, uDelegate* getter)
{
    OffsetPatternPart* obj1 = (OffsetPatternPart*)uNew(__type);
    obj1->ctor_1(setter, getter);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class ParseResult<T> :756
// {
static void ParseResult_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Exception_typeof(), offsetof(::g::Uno::Time::Text::ParseResult, _exception), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(1,
        new uFunction("GetValueOrThrow", NULL, (void*)ParseResult__GetValueOrThrow_fn, 0, false, type->T(0), 0));
}

uType* ParseResult_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ParseResult);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.Text.ParseResult`1", options);
    type->fp_build_ = ParseResult_build;
    return type;
}

// private ParseResult(T value) :766
void ParseResult__ctor__fn(ParseResult* __this, void* value)
{
    __this->_value() = value;
}

// private ParseResult(Uno.Exception exception) :761
void ParseResult__ctor_1_fn(ParseResult* __this, ::g::Uno::Exception* exception)
{
    __this->ctor_1(exception);
}

// internal static Uno.Time.Text.ParseResult<T> ForException(Uno.Exception exception) :808
void ParseResult__ForException_fn(uType* __type, ::g::Uno::Exception* exception, ParseResult** __retval)
{
    *__retval = ParseResult::ForException(__type, exception);
}

// internal static Uno.Time.Text.ParseResult<T> ForValue(T value) :803
void ParseResult__ForValue_fn(uType* __type, void* value, ParseResult** __retval)
{
    ParseResult* ret3;
    return *__retval = (ParseResult__New1_fn(__type, value, &ret3), ret3), void();
}

// public T GetValueOrThrow() :787
void ParseResult__GetValueOrThrow_fn(ParseResult* __this, uTRef __retval)
{
    uStackFrame __("Uno.Time.Text.ParseResult`1", "GetValueOrThrow()");

    if (__this->_exception == NULL)
        return __retval.Store(__this->_value()), void();

    U_THROW(__this->_exception);
}

// private ParseResult New(T value) :766
void ParseResult__New1_fn(uType* __type, void* value, ParseResult** __retval)
{
    ParseResult* obj2 = (ParseResult*)uNew(__type);
    ParseResult__ctor__fn(obj2, value);
    return *__retval = obj2, void();
}

// private ParseResult New(Uno.Exception exception) :761
void ParseResult__New2_fn(uType* __type, ::g::Uno::Exception* exception, ParseResult** __retval)
{
    *__retval = ParseResult::New2(__type, exception);
}

// private ParseResult(Uno.Exception exception) [instance] :761
void ParseResult::ctor_1(::g::Uno::Exception* exception)
{
    _exception = exception;
}

// internal static Uno.Time.Text.ParseResult<T> ForException(Uno.Exception exception) [static] :808
ParseResult* ParseResult::ForException(uType* __type, ::g::Uno::Exception* exception)
{
    return ParseResult::New2(__type, exception);
}

// private ParseResult New(Uno.Exception exception) [static] :761
ParseResult* ParseResult::New2(uType* __type, ::g::Uno::Exception* exception)
{
    ParseResult* obj1 = (ParseResult*)uNew(__type);
    obj1->ctor_1(exception);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno
// -------------------------------------------------------------------------------------------------------

// internal abstract class PatternPart<TBucket, T> :829
// {
static void PatternPart_build(uType* type)
{
    type->SetPrecalc(
        type->T(1));
    type->SetInterfaces(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0), NULL), offsetof(PatternPart_type, interface0));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::PatternPart, _ExpectedSize), 0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Uno::Time::Text::PatternPart, _Getter), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Time::Text::PatternPart, _Obligatory), 0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Uno::Time::Text::PatternPart, _Setter), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::PatternPart, _SkipNextPartsCountIfThisNotSpecified), 0);
}

PatternPart_type* PatternPart_typeof()
{
    static uSStrong<PatternPart_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.GenericCount = 2;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(PatternPart);
    options.TypeSize = sizeof(PatternPart_type);
    type = (PatternPart_type*)uClassType::New("Uno.Time.Text.PatternPart`2", options);
    type->fp_build_ = PatternPart_build;
    type->fp_Write = PatternPart__Write_fn;
    type->interface0.fp_Write = (void(*)(uObject*, void*, uString**))PatternPart__Write_fn;
    type->interface0.fp_get_SkipNextPartsCountIfThisNotSpecified = (void(*)(uObject*, int*))PatternPart__get_SkipNextPartsCountIfThisNotSpecified_fn;
    return type;
}

// protected generated PatternPart() :829
void PatternPart__ctor__fn(PatternPart* __this)
{
    __this->ctor_();
}

// public generated int get_ExpectedSize() :835
void PatternPart__get_ExpectedSize_fn(PatternPart* __this, int* __retval)
{
    *__retval = __this->ExpectedSize();
}

// protected generated void set_ExpectedSize(int value) :835
void PatternPart__set_ExpectedSize_fn(PatternPart* __this, int* value)
{
    __this->ExpectedSize(*value);
}

// protected T Get(TBucket bucket) :854
void PatternPart__Get_fn(PatternPart* __this, void* bucket, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(PatternPart_typeof())->Precalced(0/*T*/),
    };
    uStackFrame __("Uno.Time.Text.PatternPart`2", "Get(TBucket)");
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (::g::Uno::Delegate::op_Inequality(__this->Getter(), NULL))
        return __retval.Store((uPtr(__this->Getter())->Invoke(&ret1, 1, bucket), ret1)), void();

    return __retval.Store(__types[0], uT(__types[0], U_ALLOCA(__types[0]->ValueSize))), void();
}

// public generated Uno.Func<TBucket, T> get_Getter() :833
void PatternPart__get_Getter_fn(PatternPart* __this, uDelegate** __retval)
{
    *__retval = __this->Getter();
}

// protected generated void set_Getter(Uno.Func<TBucket, T> value) :833
void PatternPart__set_Getter_fn(PatternPart* __this, uDelegate* value)
{
    __this->Getter(value);
}

// public generated bool get_Obligatory() :839
void PatternPart__get_Obligatory_fn(PatternPart* __this, bool* __retval)
{
    *__retval = __this->Obligatory();
}

// protected generated void set_Obligatory(bool value) :839
void PatternPart__set_Obligatory_fn(PatternPart* __this, bool* value)
{
    __this->Obligatory(*value);
}

// protected void Set(TBucket bucket, T val) :848
void PatternPart__Set_fn(PatternPart* __this, void* bucket, void* val)
{
    uStackFrame __("Uno.Time.Text.PatternPart`2", "Set(TBucket,T)");

    if (::g::Uno::Delegate::op_Inequality(__this->Setter(), NULL))
        uPtr(__this->Setter())->Invoke(2, bucket, val);
}

// public generated Uno.Action<TBucket, T> get_Setter() :831
void PatternPart__get_Setter_fn(PatternPart* __this, uDelegate** __retval)
{
    *__retval = __this->Setter();
}

// protected generated void set_Setter(Uno.Action<TBucket, T> value) :831
void PatternPart__set_Setter_fn(PatternPart* __this, uDelegate* value)
{
    __this->Setter(value);
}

// public generated int get_SkipNextPartsCountIfThisNotSpecified() :837
void PatternPart__get_SkipNextPartsCountIfThisNotSpecified_fn(PatternPart* __this, int* __retval)
{
    *__retval = __this->SkipNextPartsCountIfThisNotSpecified();
}

// protected generated void set_SkipNextPartsCountIfThisNotSpecified(int value) :837
void PatternPart__set_SkipNextPartsCountIfThisNotSpecified_fn(PatternPart* __this, int* value)
{
    __this->SkipNextPartsCountIfThisNotSpecified(*value);
}

// public virtual string Write(TBucket value) :843
void PatternPart__Write_fn(PatternPart* __this, void* value, uString** __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(PatternPart_typeof())->Precalced(0/*T*/),
    };
    uStackFrame __("Uno.Time.Text.PatternPart`2", "Write(TBucket)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return *__retval = ::g::Uno::Object::ToString(uBoxPtr(__types[0], uPtr((PatternPart__Get_fn(__this, value, &ret2), ret2)), U_ALLOCA(__types[0]->ObjectSize))), void();
}

// protected generated PatternPart() [instance] :829
void PatternPart::ctor_()
{
}

// public generated int get_ExpectedSize() [instance] :835
int PatternPart::ExpectedSize()
{
    return _ExpectedSize;
}

// protected generated void set_ExpectedSize(int value) [instance] :835
void PatternPart::ExpectedSize(int value)
{
    _ExpectedSize = value;
}

// public generated Uno.Func<TBucket, T> get_Getter() [instance] :833
uDelegate* PatternPart::Getter()
{
    return _Getter;
}

// protected generated void set_Getter(Uno.Func<TBucket, T> value) [instance] :833
void PatternPart::Getter(uDelegate* value)
{
    _Getter = value;
}

// public generated bool get_Obligatory() [instance] :839
bool PatternPart::Obligatory()
{
    return _Obligatory;
}

// protected generated void set_Obligatory(bool value) [instance] :839
void PatternPart::Obligatory(bool value)
{
    _Obligatory = value;
}

// public generated Uno.Action<TBucket, T> get_Setter() [instance] :831
uDelegate* PatternPart::Setter()
{
    return _Setter;
}

// protected generated void set_Setter(Uno.Action<TBucket, T> value) [instance] :831
void PatternPart::Setter(uDelegate* value)
{
    _Setter = value;
}

// public generated int get_SkipNextPartsCountIfThisNotSpecified() [instance] :837
int PatternPart::SkipNextPartsCountIfThisNotSpecified()
{
    return _SkipNextPartsCountIfThisNotSpecified;
}

// protected generated void set_SkipNextPartsCountIfThisNotSpecified(int value) [instance] :837
void PatternPart::SkipNextPartsCountIfThisNotSpecified(int value)
{
    _SkipNextPartsCountIfThisNotSpecified = value;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno
// -------------------------------------------------------------------------------------------------------

// internal sealed class RangeNumberPart<T> :902
// {
static void RangeNumberPart_build(uType* type)
{
    type->SetBase(::g::Uno::Time::Text::PatternPart_typeof()->MakeType(type->T(0), ::g::Uno::Int_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Time::Text::PatternPart_type, interface0));
    type->SetFields(5,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::Text::RangeNumberPart, _maxSize), 0);
}

::g::Uno::Time::Text::PatternPart_type* RangeNumberPart_typeof()
{
    static uSStrong< ::g::Uno::Time::Text::PatternPart_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Time::Text::PatternPart_typeof();
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(RangeNumberPart);
    options.TypeSize = sizeof(::g::Uno::Time::Text::PatternPart_type);
    type = (::g::Uno::Time::Text::PatternPart_type*)uClassType::New("Uno.Time.Text.RangeNumberPart`1", options);
    type->fp_build_ = RangeNumberPart_build;
    type->fp_Read = (void(*)(::g::Uno::Time::Text::PatternPart*, uString*, int*, void*, int*))RangeNumberPart__Read_fn;
    type->fp_Write = (void(*)(::g::Uno::Time::Text::PatternPart*, void*, uString**))RangeNumberPart__Write_fn;
    type->interface0.fp_Read = (void(*)(uObject*, uString*, int*, void*, int*))RangeNumberPart__Read_fn;
    type->interface0.fp_Write = (void(*)(uObject*, void*, uString**))RangeNumberPart__Write_fn;
    type->interface0.fp_get_SkipNextPartsCountIfThisNotSpecified = (void(*)(uObject*, int*))::g::Uno::Time::Text::PatternPart__get_SkipNextPartsCountIfThisNotSpecified_fn;
    return type;
}

// public RangeNumberPart(int size, int maxSize, Uno.Action<T, int> setter, Uno.Func<T, int> getter) :915
void RangeNumberPart__ctor_1_fn(RangeNumberPart* __this, int* size, int* maxSize, uDelegate* setter, uDelegate* getter)
{
    __this->ctor_1(*size, *maxSize, setter, getter);
}

// public RangeNumberPart New(int size, int maxSize, Uno.Action<T, int> setter, Uno.Func<T, int> getter) :915
void RangeNumberPart__New1_fn(uType* __type, int* size, int* maxSize, uDelegate* setter, uDelegate* getter, RangeNumberPart** __retval)
{
    *__retval = RangeNumberPart::New1(__type, *size, *maxSize, setter, getter);
}

// public override sealed int Read(string line, int position, T value) :923
void RangeNumberPart__Read_fn(RangeNumberPart* __this, uString* line, int* position, void* value, int* __retval)
{
    uStackFrame __("Uno.Time.Text.RangeNumberPart`1", "Read(string,int,T)");
    int position_ = *position;
    int numberCount = 0;

    for (int i = position_; i < uPtr(line)->Length(); i++)
    {
        if (!::g::Uno::Char::IsDigit(uPtr(line)->Item(i)))
            break;

        numberCount++;

        if (numberCount >= __this->_maxSize)
            break;
    }

    if (numberCount == 0)
        return *__retval = 0, void();

    int number = ::g::Uno::Int::Parse(::g::Uno::String::Substring1(uPtr(line), position_, (numberCount > __this->ExpectedSize()) ? __this->ExpectedSize() : numberCount));

    if (numberCount < __this->ExpectedSize())
        number = number * (int)::g::Uno::Math::Pow1(10.0f, (float)(__this->ExpectedSize() - numberCount));

    ::g::Uno::Time::Text::PatternPart__Set_fn(__this, value, uCRef<int>(number));
    return *__retval = numberCount, void();
}

// public override sealed string Write(T value) :954
void RangeNumberPart__Write_fn(RangeNumberPart* __this, void* value, uString** __retval)
{
    return *__retval = ::g::Uno::String::Empty(), void();
}

// public RangeNumberPart(int size, int maxSize, Uno.Action<T, int> setter, Uno.Func<T, int> getter) [instance] :915
void RangeNumberPart::ctor_1(int size, int maxSize, uDelegate* setter, uDelegate* getter)
{
    ctor_();
    Setter(setter);
    Getter(getter);
    _maxSize = maxSize;
    ExpectedSize(size);
}

// public RangeNumberPart New(int size, int maxSize, Uno.Action<T, int> setter, Uno.Func<T, int> getter) [static] :915
RangeNumberPart* RangeNumberPart::New1(uType* __type, int size, int maxSize, uDelegate* setter, uDelegate* getter)
{
    RangeNumberPart* obj2 = (RangeNumberPart*)uNew(__type);
    obj2->ctor_1(size, maxSize, setter, getter);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno
// -------------------------------------------------------------------------------------------------------

// internal sealed class SeparatorPart<T> :1009
// {
static void SeparatorPart_build(uType* type)
{
    ::STRINGS[6] = uString::Const("Separator at the end");
    ::STRINGS[7] = uString::Const("Wrong number format");
    ::TYPES[47] = ::g::Uno::Char_typeof();
    type->SetBase(::g::Uno::Time::Text::PatternPart_typeof()->MakeType(type->T(0), ::g::Uno::Char_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Time::Text::PatternPart_type, interface0));
    type->SetFields(5,
        ::TYPES[47/*char*/], offsetof(::g::Uno::Time::Text::SeparatorPart, _separator), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Time::Text::SeparatorPart, _show), 0);
}

::g::Uno::Time::Text::PatternPart_type* SeparatorPart_typeof()
{
    static uSStrong< ::g::Uno::Time::Text::PatternPart_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Time::Text::PatternPart_typeof();
    options.FieldCount = 7;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SeparatorPart);
    options.TypeSize = sizeof(::g::Uno::Time::Text::PatternPart_type);
    type = (::g::Uno::Time::Text::PatternPart_type*)uClassType::New("Uno.Time.Text.SeparatorPart`1", options);
    type->fp_build_ = SeparatorPart_build;
    type->fp_Read = (void(*)(::g::Uno::Time::Text::PatternPart*, uString*, int*, void*, int*))SeparatorPart__Read_fn;
    type->fp_Write = (void(*)(::g::Uno::Time::Text::PatternPart*, void*, uString**))SeparatorPart__Write_fn;
    type->interface0.fp_Read = (void(*)(uObject*, uString*, int*, void*, int*))SeparatorPart__Read_fn;
    type->interface0.fp_Write = (void(*)(uObject*, void*, uString**))SeparatorPart__Write_fn;
    type->interface0.fp_get_SkipNextPartsCountIfThisNotSpecified = (void(*)(uObject*, int*))::g::Uno::Time::Text::PatternPart__get_SkipNextPartsCountIfThisNotSpecified_fn;
    return type;
}

// public SeparatorPart(bool obligatory, bool show, char separator, [int skipNextPartsCountIfThisNotSpecified]) :1024
void SeparatorPart__ctor_1_fn(SeparatorPart* __this, bool* obligatory, bool* show, uChar* separator, int* skipNextPartsCountIfThisNotSpecified)
{
    __this->ctor_1(*obligatory, *show, *separator, *skipNextPartsCountIfThisNotSpecified);
}

// public SeparatorPart(bool obligatory, char separator, [int skipNextPartsCountIfThisNotSpecified]) :1015
void SeparatorPart__ctor_2_fn(SeparatorPart* __this, bool* obligatory, uChar* separator, int* skipNextPartsCountIfThisNotSpecified)
{
    __this->ctor_2(*obligatory, *separator, *skipNextPartsCountIfThisNotSpecified);
}

// public SeparatorPart New(bool obligatory, bool show, char separator, [int skipNextPartsCountIfThisNotSpecified]) :1024
void SeparatorPart__New1_fn(uType* __type, bool* obligatory, bool* show, uChar* separator, int* skipNextPartsCountIfThisNotSpecified, SeparatorPart** __retval)
{
    *__retval = SeparatorPart::New1(__type, *obligatory, *show, *separator, *skipNextPartsCountIfThisNotSpecified);
}

// public SeparatorPart New(bool obligatory, char separator, [int skipNextPartsCountIfThisNotSpecified]) :1015
void SeparatorPart__New2_fn(uType* __type, bool* obligatory, uChar* separator, int* skipNextPartsCountIfThisNotSpecified, SeparatorPart** __retval)
{
    *__retval = SeparatorPart::New2(__type, *obligatory, *separator, *skipNextPartsCountIfThisNotSpecified);
}

// public override sealed int Read(string line, int position, T value) :1033
void SeparatorPart__Read_fn(SeparatorPart* __this, uString* line, int* position, void* value, int* __retval)
{
    uStackFrame __("Uno.Time.Text.SeparatorPart`1", "Read(string,int,T)");
    int position_ = *position;

    if ((position_ + __this->ExpectedSize()) >= uPtr(line)->Length())
    {
        if (__this->Obligatory() && ((position_ + __this->ExpectedSize()) == uPtr(line)->Length()))
            U_THROW(::g::Uno::FormatException::New4(::STRINGS[6/*"Separator a...*/]));

        return *__retval = 0, void();
    }

    if (uPtr(line)->Item(position_) == __this->_separator)
    {
        ::g::Uno::Time::Text::PatternPart__Set_fn(__this, value, uCRef<uChar>(__this->_separator));
        return *__retval = 1, void();
    }

    if (__this->Obligatory())
        U_THROW(::g::Uno::FormatException::New4(::STRINGS[7/*"Wrong numbe...*/]));

    return *__retval = 0, void();
}

// public override sealed string Write(T value) :1051
void SeparatorPart__Write_fn(SeparatorPart* __this, void* value, uString** __retval)
{
    uStackFrame __("Uno.Time.Text.SeparatorPart`1", "Write(T)");
    return *__retval = (__this->Obligatory() || __this->_show) ? (uString*)::g::Uno::Char::ToString(__this->_separator, ::TYPES[47/*char*/]) : (uString*)::g::Uno::String::Empty(), void();
}

// public SeparatorPart(bool obligatory, bool show, char separator, [int skipNextPartsCountIfThisNotSpecified]) [instance] :1024
void SeparatorPart::ctor_1(bool obligatory, bool show, uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    ctor_();
    ExpectedSize(1);
    Obligatory(obligatory);
    SkipNextPartsCountIfThisNotSpecified(skipNextPartsCountIfThisNotSpecified);
    _separator = separator;
    _show = show;
}

// public SeparatorPart(bool obligatory, char separator, [int skipNextPartsCountIfThisNotSpecified]) [instance] :1015
void SeparatorPart::ctor_2(bool obligatory, uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    ctor_();
    ExpectedSize(1);
    Obligatory(obligatory);
    SkipNextPartsCountIfThisNotSpecified(skipNextPartsCountIfThisNotSpecified);
    _separator = separator;
    _show = false;
}

// public SeparatorPart New(bool obligatory, bool show, char separator, [int skipNextPartsCountIfThisNotSpecified]) [static] :1024
SeparatorPart* SeparatorPart::New1(uType* __type, bool obligatory, bool show, uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    SeparatorPart* obj2 = (SeparatorPart*)uNew(__type);
    obj2->ctor_1(obligatory, show, separator, skipNextPartsCountIfThisNotSpecified);
    return obj2;
}

// public SeparatorPart New(bool obligatory, char separator, [int skipNextPartsCountIfThisNotSpecified]) [static] :1015
SeparatorPart* SeparatorPart::New2(uType* __type, bool obligatory, uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    SeparatorPart* obj1 = (SeparatorPart*)uNew(__type);
    obj1->ctor_2(obligatory, separator, skipNextPartsCountIfThisNotSpecified);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno
// -------------------------------------------------------------------------------------------------------

// internal sealed class SignPart<T> :960
// {
static void SignPart_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Wrong number format");
    ::STRINGS[8] = uString::Const("+");
    ::STRINGS[9] = uString::Const("-");
    type->SetBase(::g::Uno::Time::Text::PatternPart_typeof()->MakeType(type->T(0), ::g::Uno::Int_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Time::Text::IPatternPart_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Time::Text::PatternPart_type, interface0));
    type->SetFields(5);
}

::g::Uno::Time::Text::PatternPart_type* SignPart_typeof()
{
    static uSStrong< ::g::Uno::Time::Text::PatternPart_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Time::Text::PatternPart_typeof();
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SignPart);
    options.TypeSize = sizeof(::g::Uno::Time::Text::PatternPart_type);
    type = (::g::Uno::Time::Text::PatternPart_type*)uClassType::New("Uno.Time.Text.SignPart`1", options);
    type->fp_build_ = SignPart_build;
    type->fp_Read = (void(*)(::g::Uno::Time::Text::PatternPart*, uString*, int*, void*, int*))SignPart__Read_fn;
    type->fp_Write = (void(*)(::g::Uno::Time::Text::PatternPart*, void*, uString**))SignPart__Write_fn;
    type->interface0.fp_Read = (void(*)(uObject*, uString*, int*, void*, int*))SignPart__Read_fn;
    type->interface0.fp_Write = (void(*)(uObject*, void*, uString**))SignPart__Write_fn;
    type->interface0.fp_get_SkipNextPartsCountIfThisNotSpecified = (void(*)(uObject*, int*))::g::Uno::Time::Text::PatternPart__get_SkipNextPartsCountIfThisNotSpecified_fn;
    return type;
}

// public SignPart(bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) :971
void SignPart__ctor_1_fn(SignPart* __this, bool* obligatory, uDelegate* setter, uDelegate* getter)
{
    __this->ctor_1(*obligatory, setter, getter);
}

// public SignPart(Uno.Action<T, int> setter, Uno.Func<T, int> getter) :963
void SignPart__ctor_2_fn(SignPart* __this, uDelegate* setter, uDelegate* getter)
{
    __this->ctor_2(setter, getter);
}

// public SignPart New(bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) :971
void SignPart__New1_fn(uType* __type, bool* obligatory, uDelegate* setter, uDelegate* getter, SignPart** __retval)
{
    *__retval = SignPart::New1(__type, *obligatory, setter, getter);
}

// public SignPart New(Uno.Action<T, int> setter, Uno.Func<T, int> getter) :963
void SignPart__New2_fn(uType* __type, uDelegate* setter, uDelegate* getter, SignPart** __retval)
{
    *__retval = SignPart::New2(__type, setter, getter);
}

// public override sealed int Read(string line, int position, T value) :979
void SignPart__Read_fn(SignPart* __this, uString* line, int* position, void* value, int* __retval)
{
    uStackFrame __("Uno.Time.Text.SignPart`1", "Read(string,int,T)");
    int position_ = *position;

    if ((position_ + 1) >= uPtr(line)->Length())
    {
        if (__this->Obligatory())
            U_THROW(::g::Uno::FormatException::New4(::STRINGS[7/*"Wrong numbe...*/]));

        return *__retval = 0, void();
    }

    uChar character = uPtr(line)->Item(position_);

    switch (character)
    {
        case '-':
        case '+':
        {
            ::g::Uno::Time::Text::PatternPart__Set_fn(__this, value, uCRef<int>((character == '-') ? -1 : 1));
            return *__retval = 1, void();
        }
    }

    if (__this->Obligatory())
        U_THROW(::g::Uno::FormatException::New4(::STRINGS[7/*"Wrong numbe...*/]));

    ::g::Uno::Time::Text::PatternPart__Set_fn(__this, value, uCRef<int>(1));
    return *__retval = 0, void();
}

// public override sealed string Write(T value) :1001
void SignPart__Write_fn(SignPart* __this, void* value, uString** __retval)
{
    uStackFrame __("Uno.Time.Text.SignPart`1", "Write(T)");
    int ret3;

    if ((::g::Uno::Time::Text::PatternPart__Get_fn(__this, value, &ret3), ret3) == 1)
        return *__retval = __this->Obligatory() ? ::STRINGS[8/*"+"*/] : (uString*)::g::Uno::String::Empty(), void();

    return *__retval = ::STRINGS[9/*"-"*/], void();
}

// public SignPart(bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) [instance] :971
void SignPart::ctor_1(bool obligatory, uDelegate* setter, uDelegate* getter)
{
    ctor_();
    Setter(setter);
    Getter(getter);
    ExpectedSize(1);
    Obligatory(obligatory);
}

// public SignPart(Uno.Action<T, int> setter, Uno.Func<T, int> getter) [instance] :963
void SignPart::ctor_2(uDelegate* setter, uDelegate* getter)
{
    ctor_();
    Setter(setter);
    Getter(getter);
    ExpectedSize(1);
    Obligatory(false);
}

// public SignPart New(bool obligatory, Uno.Action<T, int> setter, Uno.Func<T, int> getter) [static] :971
SignPart* SignPart::New1(uType* __type, bool obligatory, uDelegate* setter, uDelegate* getter)
{
    SignPart* obj2 = (SignPart*)uNew(__type);
    obj2->ctor_1(obligatory, setter, getter);
    return obj2;
}

// public SignPart New(Uno.Action<T, int> setter, Uno.Func<T, int> getter) [static] :963
SignPart* SignPart::New2(uType* __type, uDelegate* setter, uDelegate* getter)
{
    SignPart* obj1 = (SignPart*)uNew(__type);
    obj1->ctor_2(setter, getter);
    return obj1;
}
// }

}}}} // ::g::Uno::Time::Text
