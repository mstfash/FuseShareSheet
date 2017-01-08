// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct FixedFormatPattern;}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct OffsetDateTimePattern;}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct OffsetDateTimePattern__OffsetDateTimeBucket;}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct ParseResult;}}}}
namespace g{namespace Uno{namespace Time{struct Offset;}}}
namespace g{namespace Uno{namespace Time{struct OffsetDateTime;}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// public sealed class OffsetDateTimePattern :451
// {
uType* OffsetDateTimePattern_typeof();
void OffsetDateTimePattern__ctor__fn(OffsetDateTimePattern* __this);
void OffsetDateTimePattern__Format_fn(OffsetDateTimePattern* __this, ::g::Uno::Time::OffsetDateTime* value, uString** __retval);
void OffsetDateTimePattern__get_GeneralIsoPattern_fn(OffsetDateTimePattern** __retval);
void OffsetDateTimePattern__GetDay_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* __retval);
void OffsetDateTimePattern__GetHour_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* __retval);
void OffsetDateTimePattern__GetMillisecond_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* __retval);
void OffsetDateTimePattern__GetMinute_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* __retval);
void OffsetDateTimePattern__GetMonth_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* __retval);
void OffsetDateTimePattern__GetOffset_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, ::g::Uno::Time::Offset* __retval);
void OffsetDateTimePattern__GetSecond_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* __retval);
void OffsetDateTimePattern__GetSign_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* __retval);
void OffsetDateTimePattern__GetYear_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* __retval);
void OffsetDateTimePattern__New1_fn(OffsetDateTimePattern** __retval);
void OffsetDateTimePattern__Parse_fn(OffsetDateTimePattern* __this, uString* text, ::g::Uno::Time::Text::ParseResult** __retval);
void OffsetDateTimePattern__SetDay_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* day);
void OffsetDateTimePattern__SetHour_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* hour);
void OffsetDateTimePattern__SetMillisecond_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* millisecond);
void OffsetDateTimePattern__SetMinute_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* minute);
void OffsetDateTimePattern__SetMonth_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* month);
void OffsetDateTimePattern__SetOffset_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, ::g::Uno::Time::Offset* offset);
void OffsetDateTimePattern__SetSecond_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* second);
void OffsetDateTimePattern__SetSign_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* sign);
void OffsetDateTimePattern__SetYear_fn(OffsetDateTimePattern* __this, OffsetDateTimePattern__OffsetDateTimeBucket* value, int* year);

struct OffsetDateTimePattern : uObject
{
    uStrong< ::g::Uno::Time::Text::FixedFormatPattern*> _generalPattern;
    static uSStrong<OffsetDateTimePattern*> General_;
    static uSStrong<OffsetDateTimePattern*>& General() { return General_; }

    void ctor_();
    uString* Format(::g::Uno::Time::OffsetDateTime* value);
    int GetDay(OffsetDateTimePattern__OffsetDateTimeBucket* value);
    int GetHour(OffsetDateTimePattern__OffsetDateTimeBucket* value);
    int GetMillisecond(OffsetDateTimePattern__OffsetDateTimeBucket* value);
    int GetMinute(OffsetDateTimePattern__OffsetDateTimeBucket* value);
    int GetMonth(OffsetDateTimePattern__OffsetDateTimeBucket* value);
    ::g::Uno::Time::Offset GetOffset(OffsetDateTimePattern__OffsetDateTimeBucket* value);
    int GetSecond(OffsetDateTimePattern__OffsetDateTimeBucket* value);
    int GetSign(OffsetDateTimePattern__OffsetDateTimeBucket* value);
    int GetYear(OffsetDateTimePattern__OffsetDateTimeBucket* value);
    ::g::Uno::Time::Text::ParseResult* Parse(uString* text);
    void SetDay(OffsetDateTimePattern__OffsetDateTimeBucket* value, int day);
    void SetHour(OffsetDateTimePattern__OffsetDateTimeBucket* value, int hour);
    void SetMillisecond(OffsetDateTimePattern__OffsetDateTimeBucket* value, int millisecond);
    void SetMinute(OffsetDateTimePattern__OffsetDateTimeBucket* value, int minute);
    void SetMonth(OffsetDateTimePattern__OffsetDateTimeBucket* value, int month);
    void SetOffset(OffsetDateTimePattern__OffsetDateTimeBucket* value, ::g::Uno::Time::Offset offset);
    void SetSecond(OffsetDateTimePattern__OffsetDateTimeBucket* value, int second);
    void SetSign(OffsetDateTimePattern__OffsetDateTimeBucket* value, int sign);
    void SetYear(OffsetDateTimePattern__OffsetDateTimeBucket* value, int year);
    static OffsetDateTimePattern* New1();
    static OffsetDateTimePattern* GeneralIsoPattern();
};
// }

}}}} // ::g::Uno::Time::Text
