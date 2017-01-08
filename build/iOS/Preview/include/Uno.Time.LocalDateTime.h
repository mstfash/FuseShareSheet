// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Time.Instant.h>
namespace g{namespace Uno{namespace Time{struct CalendarSystem;}}}
namespace g{namespace Uno{namespace Time{struct LocalDateTime;}}}

namespace g{
namespace Uno{
namespace Time{

// public sealed class LocalDateTime :1003
// {
uType* LocalDateTime_typeof();
void LocalDateTime__ctor_1_fn(LocalDateTime* __this, int* year, int* month, int* day, int* hour, int* minute, int* second);
void LocalDateTime__ctor_2_fn(LocalDateTime* __this, int* year, int* month, int* day, int* hour, int* minute, int* second, int* millisecond);
void LocalDateTime__ctor_4_fn(LocalDateTime* __this, int* year, int* month, int* day, int* hour, int* minute, int* second, int* millisecond, int* tickWithinMillisecond, ::g::Uno::Time::CalendarSystem* calendar);
void LocalDateTime__ctor_6_fn(LocalDateTime* __this, int* year, int* month, int* day, int* hour, int* minute, int* second, ::g::Uno::Time::CalendarSystem* calendar);
void LocalDateTime__ctor_7_fn(LocalDateTime* __this, int* year, int* month, int* day, int* hour, int* minute, ::g::Uno::Time::CalendarSystem* calendar);
void LocalDateTime__ctor_8_fn(LocalDateTime* __this, ::g::Uno::Time::Instant* instant);
void LocalDateTime__ctor_9_fn(LocalDateTime* __this, ::g::Uno::Time::Instant* instant, ::g::Uno::Time::CalendarSystem* calendar);
void LocalDateTime__get_Calendar_fn(LocalDateTime* __this, ::g::Uno::Time::CalendarSystem** __retval);
void LocalDateTime__get_Day_fn(LocalDateTime* __this, int* __retval);
void LocalDateTime__Equals_fn(LocalDateTime* __this, uObject* obj, bool* __retval);
void LocalDateTime__Equals2_fn(LocalDateTime* __this, LocalDateTime* other, bool* __retval);
void LocalDateTime__GetHashCode_fn(LocalDateTime* __this, int* __retval);
void LocalDateTime__get_Hour_fn(LocalDateTime* __this, int* __retval);
void LocalDateTime__get_Instant_fn(LocalDateTime* __this, ::g::Uno::Time::Instant* __retval);
void LocalDateTime__get_Millisecond_fn(LocalDateTime* __this, int* __retval);
void LocalDateTime__get_Minute_fn(LocalDateTime* __this, int* __retval);
void LocalDateTime__get_Month_fn(LocalDateTime* __this, int* __retval);
void LocalDateTime__New2_fn(int* year, int* month, int* day, int* hour, int* minute, int* second, LocalDateTime** __retval);
void LocalDateTime__New3_fn(int* year, int* month, int* day, int* hour, int* minute, int* second, int* millisecond, LocalDateTime** __retval);
void LocalDateTime__New8_fn(int* year, int* month, int* day, int* hour, int* minute, ::g::Uno::Time::CalendarSystem* calendar, LocalDateTime** __retval);
void LocalDateTime__New9_fn(::g::Uno::Time::Instant* instant, LocalDateTime** __retval);
void LocalDateTime__New10_fn(::g::Uno::Time::Instant* instant, ::g::Uno::Time::CalendarSystem* calendar, LocalDateTime** __retval);
void LocalDateTime__op_Equality_fn(LocalDateTime* left, LocalDateTime* right, bool* __retval);
void LocalDateTime__get_Second_fn(LocalDateTime* __this, int* __retval);
void LocalDateTime__ToString_fn(LocalDateTime* __this, uString** __retval);
void LocalDateTime__get_Year_fn(LocalDateTime* __this, int* __retval);

struct LocalDateTime : uObject
{
    uStrong< ::g::Uno::Time::CalendarSystem*> _calendar;
    ::g::Uno::Time::Instant _instant;

    void ctor_1(int year, int month, int day, int hour, int minute, int second);
    void ctor_2(int year, int month, int day, int hour, int minute, int second, int millisecond);
    void ctor_4(int year, int month, int day, int hour, int minute, int second, int millisecond, int tickWithinMillisecond, ::g::Uno::Time::CalendarSystem* calendar);
    void ctor_6(int year, int month, int day, int hour, int minute, int second, ::g::Uno::Time::CalendarSystem* calendar);
    void ctor_7(int year, int month, int day, int hour, int minute, ::g::Uno::Time::CalendarSystem* calendar);
    void ctor_8(::g::Uno::Time::Instant instant);
    void ctor_9(::g::Uno::Time::Instant instant, ::g::Uno::Time::CalendarSystem* calendar);
    ::g::Uno::Time::CalendarSystem* Calendar();
    int Day();
    bool Equals2(LocalDateTime* other);
    int Hour();
    ::g::Uno::Time::Instant Instant();
    int Millisecond();
    int Minute();
    int Month();
    int Second();
    int Year();
    static LocalDateTime* New2(int year, int month, int day, int hour, int minute, int second);
    static LocalDateTime* New3(int year, int month, int day, int hour, int minute, int second, int millisecond);
    static LocalDateTime* New8(int year, int month, int day, int hour, int minute, ::g::Uno::Time::CalendarSystem* calendar);
    static LocalDateTime* New9(::g::Uno::Time::Instant instant);
    static LocalDateTime* New10(::g::Uno::Time::Instant instant, ::g::Uno::Time::CalendarSystem* calendar);
    static bool op_Equality(LocalDateTime* left, LocalDateTime* right);
};
// }

}}} // ::g::Uno::Time
