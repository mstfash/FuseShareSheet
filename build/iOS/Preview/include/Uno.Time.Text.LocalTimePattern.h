// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct FixedFormatPattern;}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct LocalTimePattern;}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct LocalTimePattern__LocalTimeBucket;}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct ParseResult;}}}}
namespace g{namespace Uno{namespace Time{struct LocalTime;}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// public sealed class LocalTimePattern :336
// {
uType* LocalTimePattern_typeof();
void LocalTimePattern__ctor__fn(LocalTimePattern* __this);
void LocalTimePattern__Format_fn(LocalTimePattern* __this, ::g::Uno::Time::LocalTime* value, uString** __retval);
void LocalTimePattern__get_GeneralIsoPattern_fn(LocalTimePattern** __retval);
void LocalTimePattern__GetHour_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int* __retval);
void LocalTimePattern__GetMillisecond_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int* __retval);
void LocalTimePattern__GetMinute_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int* __retval);
void LocalTimePattern__GetSecond_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int* __retval);
void LocalTimePattern__New1_fn(LocalTimePattern** __retval);
void LocalTimePattern__Parse_fn(LocalTimePattern* __this, uString* text, ::g::Uno::Time::Text::ParseResult** __retval);
void LocalTimePattern__SetHour_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int* hour);
void LocalTimePattern__SetMillisecond_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int* millisecond);
void LocalTimePattern__SetMinute_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int* minute);
void LocalTimePattern__SetSecond_fn(LocalTimePattern* __this, LocalTimePattern__LocalTimeBucket* value, int* second);

struct LocalTimePattern : uObject
{
    uStrong< ::g::Uno::Time::Text::FixedFormatPattern*> _generalPattern;
    static uSStrong<LocalTimePattern*> General_;
    static uSStrong<LocalTimePattern*>& General() { return General_; }

    void ctor_();
    uString* Format(::g::Uno::Time::LocalTime value);
    int GetHour(LocalTimePattern__LocalTimeBucket* value);
    int GetMillisecond(LocalTimePattern__LocalTimeBucket* value);
    int GetMinute(LocalTimePattern__LocalTimeBucket* value);
    int GetSecond(LocalTimePattern__LocalTimeBucket* value);
    ::g::Uno::Time::Text::ParseResult* Parse(uString* text);
    void SetHour(LocalTimePattern__LocalTimeBucket* value, int hour);
    void SetMillisecond(LocalTimePattern__LocalTimeBucket* value, int millisecond);
    void SetMinute(LocalTimePattern__LocalTimeBucket* value, int minute);
    void SetSecond(LocalTimePattern__LocalTimeBucket* value, int second);
    static LocalTimePattern* New1();
    static LocalTimePattern* GeneralIsoPattern();
};
// }

}}}} // ::g::Uno::Time::Text
