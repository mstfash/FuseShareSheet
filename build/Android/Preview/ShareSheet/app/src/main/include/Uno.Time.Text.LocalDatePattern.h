// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct FixedFormatPattern;}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct LocalDatePattern;}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct LocalDatePattern__LocalDateBucket;}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct ParseResult;}}}}
namespace g{namespace Uno{namespace Time{struct LocalDate;}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// public sealed class LocalDatePattern :65
// {
uType* LocalDatePattern_typeof();
void LocalDatePattern__ctor__fn(LocalDatePattern* __this);
void LocalDatePattern__Format_fn(LocalDatePattern* __this, ::g::Uno::Time::LocalDate* value, uString** __retval);
void LocalDatePattern__get_GeneralIsoPattern_fn(LocalDatePattern** __retval);
void LocalDatePattern__GetDay_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int* __retval);
void LocalDatePattern__GetMonth_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int* __retval);
void LocalDatePattern__GetSign_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int* __retval);
void LocalDatePattern__GetYear_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int* __retval);
void LocalDatePattern__New1_fn(LocalDatePattern** __retval);
void LocalDatePattern__Parse_fn(LocalDatePattern* __this, uString* text, ::g::Uno::Time::Text::ParseResult** __retval);
void LocalDatePattern__SetDay_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int* day);
void LocalDatePattern__SetMonth_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int* month);
void LocalDatePattern__SetSign_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int* sign);
void LocalDatePattern__SetYear_fn(LocalDatePattern* __this, LocalDatePattern__LocalDateBucket* value, int* year);

struct LocalDatePattern : uObject
{
    uStrong< ::g::Uno::Time::Text::FixedFormatPattern*> _generalPattern;
    static uSStrong<LocalDatePattern*> General_;
    static uSStrong<LocalDatePattern*>& General() { return General_; }

    void ctor_();
    uString* Format(::g::Uno::Time::LocalDate* value);
    int GetDay(LocalDatePattern__LocalDateBucket* value);
    int GetMonth(LocalDatePattern__LocalDateBucket* value);
    int GetSign(LocalDatePattern__LocalDateBucket* value);
    int GetYear(LocalDatePattern__LocalDateBucket* value);
    ::g::Uno::Time::Text::ParseResult* Parse(uString* text);
    void SetDay(LocalDatePattern__LocalDateBucket* value, int day);
    void SetMonth(LocalDatePattern__LocalDateBucket* value, int month);
    void SetSign(LocalDatePattern__LocalDateBucket* value, int sign);
    void SetYear(LocalDatePattern__LocalDateBucket* value, int year);
    static LocalDatePattern* New1();
    static LocalDatePattern* GeneralIsoPattern();
};
// }

}}}} // ::g::Uno::Time::Text
