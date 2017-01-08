// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct LocalDateTimePattern__LocalDateTimeBucket;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// private sealed class LocalDateTimePattern.LocalDateTimeBucket :318
// {
uType* LocalDateTimePattern__LocalDateTimeBucket_typeof();
void LocalDateTimePattern__LocalDateTimeBucket__ctor__fn(LocalDateTimePattern__LocalDateTimeBucket* __this);
void LocalDateTimePattern__LocalDateTimeBucket__New1_fn(LocalDateTimePattern__LocalDateTimeBucket** __retval);

struct LocalDateTimePattern__LocalDateTimeBucket : uObject
{
    int Day;
    int Hour;
    int Minute;
    int Month;
    int Second;
    int Sign;
    int Year;

    void ctor_();
    static LocalDateTimePattern__LocalDateTimeBucket* New1();
};
// }

}}}} // ::g::Uno::Time::Text
