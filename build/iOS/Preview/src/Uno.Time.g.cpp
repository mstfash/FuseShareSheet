// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Time.Calendars.Era.h>
#include <Uno.Time.Calendars.GregorianYearMonthDayCalculator.h>
#include <Uno.Time.Calendars.TimeOfDayCalculator.h>
#include <Uno.Time.Calendars.WeekYearCalculator.h>
#include <Uno.Time.Calendars.YearMonthDayCalculator.h>
#include <Uno.Time.CalendarSystem.h>
#include <Uno.Time.Constants.h>
#include <Uno.Time.Converter.h>
#include <Uno.Time.DateTimeZone.h>
#include <Uno.Time.DeviceTimeZone.h>
#include <Uno.Time.Duration.h>
#include <Uno.Time.FixedDateTimeZone.h>
#include <Uno.Time.HashCodeHelper.h>
#include <Uno.Time.Instant.h>
#include <Uno.Time.LocalDate.h>
#include <Uno.Time.LocalDateTime.h>
#include <Uno.Time.LocalTime.h>
#include <Uno.Time.Offset.h>
#include <Uno.Time.OffsetDateTime.h>
#include <Uno.Time.Preconditions.h>
#include <Uno.Time.Text.LocalDatePattern.h>
#include <Uno.Time.Text.LocalDateTimePattern.h>
#include <Uno.Time.Text.LocalTimePattern.h>
#include <Uno.Time.Text.OffsetDateTimePattern.h>
#include <Uno.Time.Text.OffsetPattern.h>
#include <Uno.Time.ZonedDateTime.h>
#include <Uno.Type.h>
static uString* STRINGS[13];
static uType* TYPES[11];

namespace g{
namespace Uno{
namespace Time{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/$.uno
// --------------------------------------------------------------------------------------------------

// public sealed class CalendarSystem :8
// {
static void CalendarSystem_build(uType* type)
{
    ::STRINGS[0] = uString::Const("ISO");
    type->SetFields(0,
        ::g::Uno::Time::Calendars::Era_typeof()->Array(), offsetof(::g::Uno::Time::CalendarSystem, _eras), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Time::CalendarSystem, _id), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Uno::Time::CalendarSystem, _maxTicks), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::CalendarSystem, _maxYear), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Uno::Time::CalendarSystem, _minTicks), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Time::CalendarSystem, _minYear), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Time::CalendarSystem, _name), 0,
        ::g::Uno::Time::Calendars::WeekYearCalculator_typeof(), offsetof(::g::Uno::Time::CalendarSystem, _weekYearCalculator), 0,
        ::g::Uno::Time::Calendars::YearMonthDayCalculator_typeof(), offsetof(::g::Uno::Time::CalendarSystem, _yearMonthDayCalculator), 0,
        type, (uintptr_t)&::g::Uno::Time::CalendarSystem::_gregorianCalendarSystem_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Iso", NULL, (void*)CalendarSystem__get_Iso_fn, 0, true, type, 0));
}

uType* CalendarSystem_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(CalendarSystem);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.CalendarSystem", options);
    type->fp_build_ = CalendarSystem_build;
    type->fp_ToString = (void(*)(uObject*, uString**))CalendarSystem__ToString_fn;
    return type;
}

// private CalendarSystem(string id, string name, Uno.Time.Calendars.YearMonthDayCalculator yearMonthDayCalculator, int minDaysInFirstWeek) :41
void CalendarSystem__ctor__fn(CalendarSystem* __this, uString* id, uString* name, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int* minDaysInFirstWeek)
{
    __this->ctor_(id, name, yearMonthDayCalculator, *minDaysInFirstWeek);
}

// internal int GetDayOfMonth(Uno.Time.Instant instant) :210
void CalendarSystem__GetDayOfMonth_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int* __retval)
{
    *__retval = __this->GetDayOfMonth(*instant);
}

// internal int GetHourOfDay(Uno.Time.Instant instant) :190
void CalendarSystem__GetHourOfDay_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int* __retval)
{
    *__retval = __this->GetHourOfDay(*instant);
}

// internal Uno.Time.Instant GetInstant(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour) :77
void CalendarSystem__GetInstant_fn(CalendarSystem* __this, int* year, int* monthOfYear, int* dayOfMonth, int* hourOfDay, int* minuteOfHour, ::g::Uno::Time::Instant* __retval)
{
    *__retval = __this->GetInstant(*year, *monthOfYear, *dayOfMonth, *hourOfDay, *minuteOfHour);
}

// internal Uno.Time.Instant GetInstant(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour, int secondOfMinute) :70
void CalendarSystem__GetInstant1_fn(CalendarSystem* __this, int* year, int* monthOfYear, int* dayOfMonth, int* hourOfDay, int* minuteOfHour, int* secondOfMinute, ::g::Uno::Time::Instant* __retval)
{
    *__retval = __this->GetInstant1(*year, *monthOfYear, *dayOfMonth, *hourOfDay, *minuteOfHour, *secondOfMinute);
}

// internal Uno.Time.Instant GetInstant(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour, int secondOfMinute, int millisecondOfSecond, int tickOfMillisecond) :89
void CalendarSystem__GetInstant2_fn(CalendarSystem* __this, int* year, int* monthOfYear, int* dayOfMonth, int* hourOfDay, int* minuteOfHour, int* secondOfMinute, int* millisecondOfSecond, int* tickOfMillisecond, ::g::Uno::Time::Instant* __retval)
{
    *__retval = __this->GetInstant2(*year, *monthOfYear, *dayOfMonth, *hourOfDay, *minuteOfHour, *secondOfMinute, *millisecondOfSecond, *tickOfMillisecond);
}

// internal int GetMillisecondOfSecond(Uno.Time.Instant instant) :160
void CalendarSystem__GetMillisecondOfSecond_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int* __retval)
{
    *__retval = __this->GetMillisecondOfSecond(*instant);
}

// internal int GetMinuteOfHour(Uno.Time.Instant instant) :180
void CalendarSystem__GetMinuteOfHour_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int* __retval)
{
    *__retval = __this->GetMinuteOfHour(*instant);
}

// internal int GetMonthOfYear(Uno.Time.Instant instant) :230
void CalendarSystem__GetMonthOfYear_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int* __retval)
{
    *__retval = __this->GetMonthOfYear(*instant);
}

// internal int GetSecondOfMinute(Uno.Time.Instant instant) :170
void CalendarSystem__GetSecondOfMinute_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int* __retval)
{
    *__retval = __this->GetSecondOfMinute(*instant);
}

// internal int GetYear(Uno.Time.Instant instant) :235
void CalendarSystem__GetYear_fn(CalendarSystem* __this, ::g::Uno::Time::Instant* instant, int* __retval)
{
    *__retval = __this->GetYear(*instant);
}

// public static Uno.Time.CalendarSystem get_Iso() :16
void CalendarSystem__get_Iso_fn(CalendarSystem** __retval)
{
    *__retval = CalendarSystem::Iso();
}

// private CalendarSystem New(string id, string name, Uno.Time.Calendars.YearMonthDayCalculator yearMonthDayCalculator, int minDaysInFirstWeek) :41
void CalendarSystem__New1_fn(uString* id, uString* name, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int* minDaysInFirstWeek, CalendarSystem** __retval)
{
    *__retval = CalendarSystem::New1(id, name, yearMonthDayCalculator, *minDaysInFirstWeek);
}

// public override sealed string ToString() :101
void CalendarSystem__ToString_fn(CalendarSystem* __this, uString** __retval)
{
    return *__retval = __this->_id, void();
}

uSStrong<CalendarSystem*> CalendarSystem::_gregorianCalendarSystem_;

// private CalendarSystem(string id, string name, Uno.Time.Calendars.YearMonthDayCalculator yearMonthDayCalculator, int minDaysInFirstWeek) [instance] :41
void CalendarSystem::ctor_(uString* id, uString* name, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek)
{
    uStackFrame __("Uno.Time.CalendarSystem", ".ctor(string,string,Uno.Time.Calendars.YearMonthDayCalculator,int)");
    _id = id;
    _name = name;
    _yearMonthDayCalculator = yearMonthDayCalculator;
    _weekYearCalculator = ::g::Uno::Time::Calendars::WeekYearCalculator::New1(yearMonthDayCalculator, minDaysInFirstWeek);
    _eras = uPtr(_yearMonthDayCalculator)->Eras();
    _minYear = uPtr(yearMonthDayCalculator)->MinYear();
    _maxYear = yearMonthDayCalculator->MaxYear();
    _minTicks = yearMonthDayCalculator->GetStartOfYearInTicks(_minYear);
    _maxTicks = (yearMonthDayCalculator->GetStartOfYearInTicks(_maxYear + 1) - 1LL);
}

// internal int GetDayOfMonth(Uno.Time.Instant instant) [instance] :210
int CalendarSystem::GetDayOfMonth(::g::Uno::Time::Instant instant)
{
    uStackFrame __("Uno.Time.CalendarSystem", "GetDayOfMonth(Uno.Time.Instant)");
    return uPtr(_yearMonthDayCalculator)->GetDayOfMonth(instant);
}

// internal int GetHourOfDay(Uno.Time.Instant instant) [instance] :190
int CalendarSystem::GetHourOfDay(::g::Uno::Time::Instant instant)
{
    return ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetHourOfDay(instant);
}

// internal Uno.Time.Instant GetInstant(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour) [instance] :77
::g::Uno::Time::Instant CalendarSystem::GetInstant(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour)
{
    uStackFrame __("Uno.Time.CalendarSystem", "GetInstant(int,int,int,int,int)");
    ::g::Uno::Time::Instant date = uPtr(_yearMonthDayCalculator)->GetInstant(year, monthOfYear, dayOfMonth);
    int64_t timeTicks = ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetTicks(hourOfDay, minuteOfHour);
    return date.PlusTicks(timeTicks);
}

// internal Uno.Time.Instant GetInstant(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour, int secondOfMinute) [instance] :70
::g::Uno::Time::Instant CalendarSystem::GetInstant1(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour, int secondOfMinute)
{
    uStackFrame __("Uno.Time.CalendarSystem", "GetInstant(int,int,int,int,int,int)");
    ::g::Uno::Time::Instant date = uPtr(_yearMonthDayCalculator)->GetInstant(year, monthOfYear, dayOfMonth);
    int64_t timeTicks = ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetTicks1(hourOfDay, minuteOfHour, secondOfMinute);
    return date.PlusTicks(timeTicks);
}

// internal Uno.Time.Instant GetInstant(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour, int secondOfMinute, int millisecondOfSecond, int tickOfMillisecond) [instance] :89
::g::Uno::Time::Instant CalendarSystem::GetInstant2(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour, int secondOfMinute, int millisecondOfSecond, int tickOfMillisecond)
{
    uStackFrame __("Uno.Time.CalendarSystem", "GetInstant(int,int,int,int,int,int,int,int)");
    ::g::Uno::Time::Instant date = uPtr(_yearMonthDayCalculator)->GetInstant(year, monthOfYear, dayOfMonth);
    int64_t timeTicks = ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetTicks2(hourOfDay, minuteOfHour, secondOfMinute, millisecondOfSecond, tickOfMillisecond);
    return date.PlusTicks(timeTicks);
}

// internal int GetMillisecondOfSecond(Uno.Time.Instant instant) [instance] :160
int CalendarSystem::GetMillisecondOfSecond(::g::Uno::Time::Instant instant)
{
    return ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetMillisecondOfSecond(instant);
}

// internal int GetMinuteOfHour(Uno.Time.Instant instant) [instance] :180
int CalendarSystem::GetMinuteOfHour(::g::Uno::Time::Instant instant)
{
    return ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetMinuteOfHour(instant);
}

// internal int GetMonthOfYear(Uno.Time.Instant instant) [instance] :230
int CalendarSystem::GetMonthOfYear(::g::Uno::Time::Instant instant)
{
    uStackFrame __("Uno.Time.CalendarSystem", "GetMonthOfYear(Uno.Time.Instant)");
    return uPtr(_yearMonthDayCalculator)->GetMonthOfYear(instant);
}

// internal int GetSecondOfMinute(Uno.Time.Instant instant) [instance] :170
int CalendarSystem::GetSecondOfMinute(::g::Uno::Time::Instant instant)
{
    return ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetSecondOfMinute(instant);
}

// internal int GetYear(Uno.Time.Instant instant) [instance] :235
int CalendarSystem::GetYear(::g::Uno::Time::Instant instant)
{
    uStackFrame __("Uno.Time.CalendarSystem", "GetYear(Uno.Time.Instant)");
    return uPtr(_yearMonthDayCalculator)->GetYear(instant);
}

// private CalendarSystem New(string id, string name, Uno.Time.Calendars.YearMonthDayCalculator yearMonthDayCalculator, int minDaysInFirstWeek) [static] :41
CalendarSystem* CalendarSystem::New1(uString* id, uString* name, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek)
{
    CalendarSystem* obj2 = (CalendarSystem*)uNew(CalendarSystem_typeof());
    obj2->ctor_(id, name, yearMonthDayCalculator, minDaysInFirstWeek);
    return obj2;
}

// public static Uno.Time.CalendarSystem get_Iso() [static] :16
CalendarSystem* CalendarSystem::Iso()
{
    uStackFrame __("Uno.Time.CalendarSystem", "get_Iso()");

    if (CalendarSystem::_gregorianCalendarSystem_ == NULL)
        CalendarSystem::_gregorianCalendarSystem_ = CalendarSystem::New1(::STRINGS[0/*"ISO"*/], ::STRINGS[0/*"ISO"*/], ::g::Uno::Time::Calendars::GregorianYearMonthDayCalculator::New1(), 4);

    return CalendarSystem::_gregorianCalendarSystem_;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/utilities/$.uno
// ------------------------------------------------------------------------------------------------------------

// public static class Constants :5
// {
// static Constants() :40
static void Constants__cctor__fn(uType* __type)
{
    Constants::UnixEpoch_ = uDefault< ::g::Uno::Time::Instant>();
    Constants::BclEpoch_ = ::g::Uno::Time::Instant__FromUtc(1, 1, 1, 0, 0);
}

static void Constants_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Time::Instant_typeof(), (uintptr_t)&::g::Uno::Time::Constants::BclEpoch_, uFieldFlagsStatic,
        ::g::Uno::Time::Instant_typeof(), (uintptr_t)&::g::Uno::Time::Constants::UnixEpoch_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("BclEpoch", 0),
        new uField("UnixEpoch", 1));
}

uClassType* Constants_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Time.Constants", options);
    type->fp_build_ = Constants_build;
    type->fp_cctor_ = Constants__cctor__fn;
    return type;
}

::g::Uno::Time::Instant Constants::BclEpoch_;
::g::Uno::Time::Instant Constants::UnixEpoch_;
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/utilities/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal static class Converter :53
// {
static void Converter_build(uType* type)
{
}

uClassType* Converter_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Time.Converter", options);
    type->fp_build_ = Converter_build;
    return type;
}

// internal static int TicksToDays(long ticks) :55
void Converter__TicksToDays_fn(int64_t* ticks, int* __retval)
{
    *__retval = Converter::TicksToDays(*ticks);
}

// internal static int TicksToDays(long ticks) [static] :55
int Converter::TicksToDays(int64_t ticks)
{
    if (ticks >= 0LL)
        return (int)((ticks >> 14) / 52734375LL);
    else
        return (int)((ticks - 863999999999LL) / 864000000000LL);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/$.uno
// --------------------------------------------------------------------------------------------------

// public abstract class DateTimeZone :308
// {
// static DateTimeZone() :308
static void DateTimeZone__cctor__fn(uType* __type)
{
    DateTimeZone::UtcZone_ = ::g::Uno::Time::FixedDateTimeZone::New2(::g::Uno::Time::Offset::Zero());
}

static void DateTimeZone_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Time::DateTimeZone, id), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Time::DateTimeZone, isFixed), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Uno::Time::DateTimeZone, maxOffsetTicks), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Uno::Time::DateTimeZone, minOffsetTicks), 0,
        type, (uintptr_t)&::g::Uno::Time::DateTimeZone::UtcZone_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(8,
        new uFunction("AtStrictly", NULL, (void*)DateTimeZone__AtStrictly_fn, 0, false, ::g::Uno::Time::ZonedDateTime_typeof(), 1, ::g::Uno::Time::LocalDateTime_typeof()),
        new uFunction("Equals", NULL, (void*)DateTimeZone__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("ForOffset", NULL, (void*)DateTimeZone__ForOffset_fn, 0, true, type, 1, ::g::Uno::Time::Offset_typeof()),
        new uFunction("GetUtcOffset", NULL, NULL, offsetof(DateTimeZone_type, fp_GetUtcOffset), false, ::g::Uno::Time::Offset_typeof(), 1, ::g::Uno::Time::LocalDateTime_typeof()),
        new uFunction("get_Id", NULL, (void*)DateTimeZone__get_Id_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_MaxOffset", NULL, (void*)DateTimeZone__get_MaxOffset_fn, 0, false, ::g::Uno::Time::Offset_typeof(), 0),
        new uFunction("get_MinOffset", NULL, (void*)DateTimeZone__get_MinOffset_fn, 0, false, ::g::Uno::Time::Offset_typeof(), 0),
        new uFunction("get_Utc", NULL, (void*)DateTimeZone__get_Utc_fn, 0, true, type, 0));
}

DateTimeZone_type* DateTimeZone_typeof()
{
    static uSStrong<DateTimeZone_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(DateTimeZone);
    options.TypeSize = sizeof(DateTimeZone_type);
    type = (DateTimeZone_type*)uClassType::New("Uno.Time.DateTimeZone", options);
    type->fp_build_ = DateTimeZone_build;
    type->fp_cctor_ = DateTimeZone__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))DateTimeZone__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))DateTimeZone__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))DateTimeZone__ToString_fn;
    return type;
}

// protected DateTimeZone(string id, bool isFixed, Uno.Time.Offset minOffset, Uno.Time.Offset maxOffset) :318
void DateTimeZone__ctor__fn(DateTimeZone* __this, uString* id1, bool* isFixed1, ::g::Uno::Time::Offset* minOffset, ::g::Uno::Time::Offset* maxOffset)
{
    __this->ctor_(id1, *isFixed1, *minOffset, *maxOffset);
}

// public Uno.Time.ZonedDateTime AtStrictly(Uno.Time.LocalDateTime localDateTime) :336
void DateTimeZone__AtStrictly_fn(DateTimeZone* __this, ::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = __this->AtStrictly(localDateTime);
}

// public override sealed bool Equals(object obj) :353
void DateTimeZone__Equals_fn(DateTimeZone* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.Time.DateTimeZone", "Equals(object)");
    return *__retval = __this->Equals2(uAs<DateTimeZone*>(obj, DateTimeZone_typeof())), void();
}

// public bool Equals(Uno.Time.DateTimeZone obj) :358
void DateTimeZone__Equals2_fn(DateTimeZone* __this, DateTimeZone* obj, bool* __retval)
{
    *__retval = __this->Equals2(obj);
}

// public static Uno.Time.DateTimeZone ForOffset(Uno.Time.Offset offset) :341
void DateTimeZone__ForOffset_fn(::g::Uno::Time::Offset* offset, DateTimeZone** __retval)
{
    *__retval = DateTimeZone::ForOffset(*offset);
}

// public override int GetHashCode() :367
void DateTimeZone__GetHashCode_fn(DateTimeZone* __this, int* __retval)
{
    int ret1;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret1), ret1), void();
}

// public string get_Id() :330
void DateTimeZone__get_Id_fn(DateTimeZone* __this, uString** __retval)
{
    *__retval = __this->Id();
}

// public Uno.Time.Offset get_MaxOffset() :334
void DateTimeZone__get_MaxOffset_fn(DateTimeZone* __this, ::g::Uno::Time::Offset* __retval)
{
    *__retval = __this->MaxOffset();
}

// public Uno.Time.Offset get_MinOffset() :333
void DateTimeZone__get_MinOffset_fn(DateTimeZone* __this, ::g::Uno::Time::Offset* __retval)
{
    *__retval = __this->MinOffset();
}

// public override string ToString() :348
void DateTimeZone__ToString_fn(DateTimeZone* __this, uString** __retval)
{
    return *__retval = __this->Id(), void();
}

// public static Uno.Time.DateTimeZone get_Utc() :328
void DateTimeZone__get_Utc_fn(DateTimeZone** __retval)
{
    *__retval = DateTimeZone::Utc();
}

uSStrong<DateTimeZone*> DateTimeZone::UtcZone_;

// protected DateTimeZone(string id, bool isFixed, Uno.Time.Offset minOffset, Uno.Time.Offset maxOffset) [instance] :318
void DateTimeZone::ctor_(uString* id1, bool isFixed1, ::g::Uno::Time::Offset minOffset, ::g::Uno::Time::Offset maxOffset)
{
    id = id1;
    isFixed = isFixed1;
    minOffsetTicks = minOffset.Ticks();
    maxOffsetTicks = maxOffset.Ticks();
}

// public Uno.Time.ZonedDateTime AtStrictly(Uno.Time.LocalDateTime localDateTime) [instance] :336
::g::Uno::Time::ZonedDateTime* DateTimeZone::AtStrictly(::g::Uno::Time::LocalDateTime* localDateTime)
{
    return ::g::Uno::Time::ZonedDateTime::New3(localDateTime, this);
}

// public bool Equals(Uno.Time.DateTimeZone obj) [instance] :358
bool DateTimeZone::Equals2(DateTimeZone* obj)
{
    uStackFrame __("Uno.Time.DateTimeZone", "Equals(Uno.Time.DateTimeZone)");

    if (::g::Uno::Object::ReferenceEquals(this, obj))
        return true;

    return (!::g::Uno::Object::ReferenceEquals(obj, NULL) && ::g::Uno::Type::op_Equality(::g::Uno::Object::GetType(uPtr(obj)), ::g::Uno::Object::GetType(this))) && EqualsImpl(obj);
}

// public string get_Id() [instance] :330
uString* DateTimeZone::Id()
{
    return id;
}

// public Uno.Time.Offset get_MaxOffset() [instance] :334
::g::Uno::Time::Offset DateTimeZone::MaxOffset()
{
    return ::g::Uno::Time::Offset__FromTicks(maxOffsetTicks);
}

// public Uno.Time.Offset get_MinOffset() [instance] :333
::g::Uno::Time::Offset DateTimeZone::MinOffset()
{
    return ::g::Uno::Time::Offset__FromTicks(minOffsetTicks);
}

// public static Uno.Time.DateTimeZone ForOffset(Uno.Time.Offset offset) [static] :341
DateTimeZone* DateTimeZone::ForOffset(::g::Uno::Time::Offset offset)
{
    DateTimeZone_typeof()->Init();
    return ::g::Uno::Time::FixedDateTimeZone::New2(offset);
}

// public static Uno.Time.DateTimeZone get_Utc() [static] :328
DateTimeZone* DateTimeZone::Utc()
{
    DateTimeZone_typeof()->Init();
    return DateTimeZone::UtcZone();
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/timezones/$.uno
// ------------------------------------------------------------------------------------------------------------

// public sealed class DeviceTimeZone :7
// {
static void DeviceTimeZone_build(uType* type)
{
    ::STRINGS[1] = uString::Const("UTC");
    ::TYPES[0] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(0/*Hash<string>*/, ::g::Uno::String_typeof(), NULL);
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DeviceTimeZone__New1_fn, 0, true, type, 0));
}

::g::Uno::Time::DateTimeZone_type* DeviceTimeZone_typeof()
{
    static uSStrong< ::g::Uno::Time::DateTimeZone_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Time::DateTimeZone_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(DeviceTimeZone);
    options.TypeSize = sizeof(::g::Uno::Time::DateTimeZone_type);
    type = (::g::Uno::Time::DateTimeZone_type*)uClassType::New("Uno.Time.DeviceTimeZone", options);
    type->fp_build_ = DeviceTimeZone_build;
    type->fp_ctor_ = (void*)DeviceTimeZone__New1_fn;
    type->fp_EqualsImpl = (void(*)(::g::Uno::Time::DateTimeZone*, ::g::Uno::Time::DateTimeZone*, bool*))DeviceTimeZone__EqualsImpl_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))DeviceTimeZone__GetHashCode_fn;
    type->fp_GetUtcOffset = (void(*)(::g::Uno::Time::DateTimeZone*, ::g::Uno::Time::LocalDateTime*, ::g::Uno::Time::Offset*))DeviceTimeZone__GetUtcOffset_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))DeviceTimeZone__ToString_fn;
    return type;
}

// public DeviceTimeZone() :9
void DeviceTimeZone__ctor_1_fn(DeviceTimeZone* __this)
{
    __this->ctor_1();
}

// internal DeviceTimeZone(string id) :13
void DeviceTimeZone__ctor_2_fn(DeviceTimeZone* __this, uString* id1)
{
    __this->ctor_2(id1);
}

// protected override sealed bool EqualsImpl(Uno.Time.DateTimeZone other) :31
void DeviceTimeZone__EqualsImpl_fn(DeviceTimeZone* __this, ::g::Uno::Time::DateTimeZone* other, bool* __retval)
{
    return *__retval = uIs(other, __this->__type), void();
}

// public override sealed int GetHashCode() :36
void DeviceTimeZone__GetHashCode_fn(DeviceTimeZone* __this, int* __retval)
{
    uStackFrame __("Uno.Time.DeviceTimeZone", "GetHashCode()");
    int ret3;
    int hash = ::g::Uno::Time::HashCodeHelper::Initialize();
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[0/*Uno.Time.HashCodeHelper.Hash<string>*/], uCRef<int>(hash), __this->Id(), &ret3), ret3);
    return *__retval = hash, void();
}

// public override sealed Uno.Time.Offset GetUtcOffset(Uno.Time.LocalDateTime dateTime) :18
void DeviceTimeZone__GetUtcOffset_fn(DeviceTimeZone* __this, ::g::Uno::Time::LocalDateTime* dateTime, ::g::Uno::Time::Offset* __retval)
{
    uStackFrame __("Uno.Time.DeviceTimeZone", "GetUtcOffset(Uno.Time.LocalDateTime)");
    int offsetMinutes = ::g::Uno::Diagnostics::Clock::GetTimezoneOffset(uPtr(dateTime)->Year(), uPtr(dateTime)->Month(), uPtr(dateTime)->Day());
    return *__retval = ::g::Uno::Time::Offset__FromHoursAndMinutes(offsetMinutes / 60, offsetMinutes % 60), void();
}

// public DeviceTimeZone New() :9
void DeviceTimeZone__New1_fn(DeviceTimeZone** __retval)
{
    *__retval = DeviceTimeZone::New1();
}

// internal DeviceTimeZone New(string id) :13
void DeviceTimeZone__New2_fn(uString* id1, DeviceTimeZone** __retval)
{
    *__retval = DeviceTimeZone::New2(id1);
}

// public override sealed string ToString() :26
void DeviceTimeZone__ToString_fn(DeviceTimeZone* __this, uString** __retval)
{
    return *__retval = __this->Id(), void();
}

// public DeviceTimeZone() [instance] :9
void DeviceTimeZone::ctor_1()
{
    ctor_2(::STRINGS[1/*"UTC"*/]);
}

// internal DeviceTimeZone(string id) [instance] :13
void DeviceTimeZone::ctor_2(uString* id1)
{
    ctor_(id1, false, ::g::Uno::Time::Offset__FromHours(-12), ::g::Uno::Time::Offset__FromHours(12));
}

// public DeviceTimeZone New() [static] :9
DeviceTimeZone* DeviceTimeZone::New1()
{
    DeviceTimeZone* obj1 = (DeviceTimeZone*)uNew(DeviceTimeZone_typeof());
    obj1->ctor_1();
    return obj1;
}

// internal DeviceTimeZone New(string id) [static] :13
DeviceTimeZone* DeviceTimeZone::New2(uString* id1)
{
    DeviceTimeZone* obj2 = (DeviceTimeZone*)uNew(DeviceTimeZone_typeof());
    obj2->ctor_2(id1);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/$.uno
// --------------------------------------------------------------------------------------------------

// public struct Duration :383
// {
// static Duration() :401
static void Duration__cctor__fn(uType* __type)
{
    Duration::Zero_ = Duration__New1(0LL);
    Duration::Epsilon_ = Duration__New1(1LL);
    Duration::OneStandardWeek_ = Duration__New1(6048000000000LL);
    Duration::OneStandardDay_ = Duration__New1(864000000000LL);
    Duration::OneHour_ = Duration__New1(36000000000LL);
    Duration::OneMinute_ = Duration__New1(600000000LL);
    Duration::OneSecond_ = Duration__New1(10000000LL);
    Duration::OneMillisecond_ = Duration__New1(10000LL);
}

static void Duration_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Long_typeof();
    type->SetFields(0,
        ::TYPES[1/*long*/], offsetof(::g::Uno::Time::Duration, ticks), 0,
        type, (uintptr_t)&::g::Uno::Time::Duration::Zero_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Uno::Time::Duration::Epsilon_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Uno::Time::Duration::OneStandardWeek_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Uno::Time::Duration::OneStandardDay_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Uno::Time::Duration::OneHour_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Uno::Time::Duration::OneMinute_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Uno::Time::Duration::OneSecond_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Uno::Time::Duration::OneMillisecond_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("Epsilon", 2),
        new uField("Zero", 1));
    type->Reflection.SetFunctions(2,
        new uFunction("Equals", NULL, (void*)Duration__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("get_Ticks", NULL, (void*)Duration__get_Ticks_fn, 0, false, ::TYPES[1/*long*/], 0));
}

uStructType* Duration_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ValueSize = sizeof(Duration);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Time.Duration", options);
    type->fp_build_ = Duration_build;
    type->fp_cctor_ = Duration__cctor__fn;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Duration__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Duration__GetHashCode_fn;
    return type;
}

// internal Duration(long ticks) :413
void Duration__ctor__fn(Duration* __this, int64_t* ticks1)
{
    __this->ctor_(*ticks1);
}

// public override sealed bool Equals(object obj) :527
void Duration__Equals_fn(Duration* __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.Time.Duration", "Equals(object)");

    if (uIs(obj, __type))
        return *__retval = __this->Equals2(uUnbox<Duration>(__type, obj)), void();

    return *__retval = false, void();
}

// public bool Equals(Uno.Time.Duration other) :536
void Duration__Equals2_fn(Duration* __this, Duration* other, bool* __retval)
{
    *__retval = __this->Equals2(*other);
}

// public override sealed int GetHashCode() :522
void Duration__GetHashCode_fn(Duration* __this, uType* __type, int* __retval)
{
    uStackFrame __("Uno.Time.Duration", "GetHashCode()");
    return *__retval = ::g::Uno::Long::GetHashCode(__this->Ticks(), ::TYPES[1/*long*/]), void();
}

// internal Duration New(long ticks) :413
void Duration__New1_fn(int64_t* ticks1, Duration* __retval)
{
    *__retval = Duration__New1(*ticks1);
}

// public long get_Ticks() :420
void Duration__get_Ticks_fn(Duration* __this, int64_t* __retval)
{
    *__retval = __this->Ticks();
}

Duration Duration::Zero_;
Duration Duration::Epsilon_;
Duration Duration::OneStandardWeek_;
Duration Duration::OneStandardDay_;
Duration Duration::OneHour_;
Duration Duration::OneMinute_;
Duration Duration::OneSecond_;
Duration Duration::OneMillisecond_;

// internal Duration(long ticks) [instance] :413
void Duration::ctor_(int64_t ticks1)
{
    ticks = ticks1;
}

// public bool Equals(Uno.Time.Duration other) [instance] :536
bool Duration::Equals2(Duration other)
{
    return Ticks() == other.Ticks();
}

// public long get_Ticks() [instance] :420
int64_t Duration::Ticks()
{
    return ticks;
}

// internal Duration New(long ticks) [static] :413
Duration Duration__New1(int64_t ticks1)
{
    Duration obj1;
    obj1.ctor_(ticks1);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/timezones/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal sealed class FixedDateTimeZone :50
// {
static void FixedDateTimeZone_build(uType* type)
{
    ::STRINGS[1] = uString::Const("UTC");
    ::TYPES[2] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(0/*Hash<Uno.Time.Offset>*/, ::g::Uno::Time::Offset_typeof(), NULL);
    ::TYPES[0] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(0/*Hash<string>*/, ::g::Uno::String_typeof(), NULL);
    type->SetFields(4,
        ::g::Uno::Time::Offset_typeof(), offsetof(::g::Uno::Time::FixedDateTimeZone, offset), 0);
}

::g::Uno::Time::DateTimeZone_type* FixedDateTimeZone_typeof()
{
    static uSStrong< ::g::Uno::Time::DateTimeZone_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Time::DateTimeZone_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(FixedDateTimeZone);
    options.TypeSize = sizeof(::g::Uno::Time::DateTimeZone_type);
    type = (::g::Uno::Time::DateTimeZone_type*)uClassType::New("Uno.Time.FixedDateTimeZone", options);
    type->fp_build_ = FixedDateTimeZone_build;
    type->fp_EqualsImpl = (void(*)(::g::Uno::Time::DateTimeZone*, ::g::Uno::Time::DateTimeZone*, bool*))FixedDateTimeZone__EqualsImpl_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))FixedDateTimeZone__GetHashCode_fn;
    type->fp_GetUtcOffset = (void(*)(::g::Uno::Time::DateTimeZone*, ::g::Uno::Time::LocalDateTime*, ::g::Uno::Time::Offset*))FixedDateTimeZone__GetUtcOffset_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))FixedDateTimeZone__ToString_fn;
    return type;
}

// public FixedDateTimeZone(string id, Uno.Time.Offset offset) :58
void FixedDateTimeZone__ctor_1_fn(FixedDateTimeZone* __this, uString* id1, ::g::Uno::Time::Offset* offset1)
{
    __this->ctor_1(id1, *offset1);
}

// public FixedDateTimeZone(Uno.Time.Offset offset) :54
void FixedDateTimeZone__ctor_2_fn(FixedDateTimeZone* __this, ::g::Uno::Time::Offset* offset1)
{
    __this->ctor_2(*offset1);
}

// protected override sealed bool EqualsImpl(Uno.Time.DateTimeZone other) :75
void FixedDateTimeZone__EqualsImpl_fn(FixedDateTimeZone* __this, ::g::Uno::Time::DateTimeZone* other, bool* __retval)
{
    uStackFrame __("Uno.Time.FixedDateTimeZone", "EqualsImpl(Uno.Time.DateTimeZone)");
    FixedDateTimeZone* otherZone = uCast<FixedDateTimeZone*>(other, __this->__type);
    return *__retval = ::g::Uno::Time::Offset__op_Equality(__this->offset, uPtr(otherZone)->offset) && ::g::Uno::String::op_Equality(__this->Id(), uPtr(other)->Id()), void();
}

// public override sealed int GetHashCode() :81
void FixedDateTimeZone__GetHashCode_fn(FixedDateTimeZone* __this, int* __retval)
{
    uStackFrame __("Uno.Time.FixedDateTimeZone", "GetHashCode()");
    int ret3;
    int ret4;
    int hash = ::g::Uno::Time::HashCodeHelper::Initialize();
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[2/*Uno.Time.HashCodeHelper.Hash<Uno.Time.Offset>*/], uCRef<int>(hash), uCRef(__this->offset), &ret3), ret3);
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[0/*Uno.Time.HashCodeHelper.Hash<string>*/], uCRef<int>(hash), __this->Id(), &ret4), ret4);
    return *__retval = hash, void();
}

// public override sealed Uno.Time.Offset GetUtcOffset(Uno.Time.LocalDateTime dateTime) :65
void FixedDateTimeZone__GetUtcOffset_fn(FixedDateTimeZone* __this, ::g::Uno::Time::LocalDateTime* dateTime, ::g::Uno::Time::Offset* __retval)
{
    return *__retval = __this->offset, void();
}

// public FixedDateTimeZone New(Uno.Time.Offset offset) :54
void FixedDateTimeZone__New2_fn(::g::Uno::Time::Offset* offset1, FixedDateTimeZone** __retval)
{
    *__retval = FixedDateTimeZone::New2(*offset1);
}

// public override sealed string ToString() :70
void FixedDateTimeZone__ToString_fn(FixedDateTimeZone* __this, uString** __retval)
{
    return *__retval = __this->Id(), void();
}

// public FixedDateTimeZone(string id, Uno.Time.Offset offset) [instance] :58
void FixedDateTimeZone::ctor_1(uString* id1, ::g::Uno::Time::Offset offset1)
{
    ctor_(id1, true, offset1, offset1);
    offset = offset1;
}

// public FixedDateTimeZone(Uno.Time.Offset offset) [instance] :54
void FixedDateTimeZone::ctor_2(::g::Uno::Time::Offset offset1)
{
    ctor_1(::STRINGS[1/*"UTC"*/], offset1);
}

// public FixedDateTimeZone New(Uno.Time.Offset offset) [static] :54
FixedDateTimeZone* FixedDateTimeZone::New2(::g::Uno::Time::Offset offset1)
{
    FixedDateTimeZone* obj1 = (FixedDateTimeZone*)uNew(FixedDateTimeZone_typeof());
    obj1->ctor_2(offset1);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/utilities/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal static class HashCodeHelper :71
// {
static void HashCodeHelper_build(uType* type)
{
}

uClassType* HashCodeHelper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Time.HashCodeHelper", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0);
    type->fp_build_ = HashCodeHelper_build;
    return type;
}

// internal static int Hash<T>(int code, T value) :82
void HashCodeHelper__Hash_fn(uType* __type, int* code, void* value, int* __retval)
{
    uStackFrame __("Uno.Time.HashCodeHelper", "Hash`1(int,T)");
    int code_ = *code;
    int hash = 0;

    if (!::g::Uno::Object::Equals(uBoxPtr(__type->U(0), uPtr(value), U_ALLOCA(__type->U(0)->ObjectSize)), NULL))
        hash = ::g::Uno::Object::GetHashCode(uBoxPtr(__type->U(0), uPtr(value), U_ALLOCA(__type->U(0)->ObjectSize)));

    return *__retval = HashCodeHelper::MakeHash(code_, hash), void();
}

// internal static int Initialize() :77
void HashCodeHelper__Initialize_fn(int* __retval)
{
    *__retval = HashCodeHelper::Initialize();
}

// private static int MakeHash(int code, int value) :92
void HashCodeHelper__MakeHash_fn(int* code, int* value, int* __retval)
{
    *__retval = HashCodeHelper::MakeHash(*code, *value);
}

// internal static int Initialize() [static] :77
int HashCodeHelper::Initialize()
{
    return 17;
}

// private static int MakeHash(int code, int value) [static] :92
int HashCodeHelper::MakeHash(int code, int value)
{
    return (code * 37) + value;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/$.uno
// --------------------------------------------------------------------------------------------------

// public struct Instant :585
// {
static void Instant_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Long_typeof();
    type->SetFields(0,
        ::TYPES[1/*long*/], offsetof(::g::Uno::Time::Instant, _ticks), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("Equals", NULL, (void*)Instant__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("FromUtc", NULL, (void*)Instant__FromUtc_fn, 0, true, type, 5, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)Instant__New1_fn, 0, true, type, 1, ::TYPES[1/*long*/]),
        new uFunction("PlusTicks", NULL, (void*)Instant__PlusTicks_fn, 0, false, type, 1, ::TYPES[1/*long*/]),
        new uFunction("get_Ticks", NULL, (void*)Instant__get_Ticks_fn, 0, false, ::TYPES[1/*long*/], 0));
}

uStructType* Instant_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(Instant);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Time.Instant", options);
    type->fp_build_ = Instant_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Instant__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Instant__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Instant__ToString_fn;
    return type;
}

// public Instant(long ticks) :591
void Instant__ctor__fn(Instant* __this, int64_t* ticks)
{
    __this->ctor_(*ticks);
}

// public override sealed bool Equals(object obj) :725
void Instant__Equals_fn(Instant* __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.Time.Instant", "Equals(object)");

    if (uIs(obj, __type))
        return *__retval = __this->Equals2(uUnbox<Instant>(__type, obj)), void();

    return *__retval = false, void();
}

// public bool Equals(Uno.Time.Instant other) :720
void Instant__Equals2_fn(Instant* __this, Instant* other, bool* __retval)
{
    *__retval = __this->Equals2(*other);
}

// public static Uno.Time.Instant FromUtc(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour) :700
void Instant__FromUtc_fn(int* year, int* monthOfYear, int* dayOfMonth, int* hourOfDay, int* minuteOfHour, Instant* __retval)
{
    *__retval = Instant__FromUtc(*year, *monthOfYear, *dayOfMonth, *hourOfDay, *minuteOfHour);
}

// public override sealed int GetHashCode() :710
void Instant__GetHashCode_fn(Instant* __this, uType* __type, int* __retval)
{
    uStackFrame __("Uno.Time.Instant", "GetHashCode()");
    return *__retval = ::g::Uno::Long::GetHashCode(__this->Ticks(), ::TYPES[1/*long*/]), void();
}

// internal Uno.Time.Instant Minus(Uno.Time.Offset offset) :626
void Instant__Minus2_fn(Instant* __this, ::g::Uno::Time::Offset* offset, Instant* __retval)
{
    *__retval = __this->Minus2(*offset);
}

// public Instant New(long ticks) :591
void Instant__New1_fn(int64_t* ticks, Instant* __retval)
{
    *__retval = Instant__New1(*ticks);
}

// public static operator ==(Uno.Time.Instant left, Uno.Time.Instant right) :658
void Instant__op_Equality_fn(Instant* left, Instant* right, bool* __retval)
{
    *__retval = Instant__op_Equality(*left, *right);
}

// public static operator -(Uno.Time.Instant left, Uno.Time.Instant right) :648
void Instant__op_Subtraction1_fn(Instant* left, Instant* right, ::g::Uno::Time::Duration* __retval)
{
    *__retval = Instant__op_Subtraction1(*left, *right);
}

// internal Uno.Time.Instant Plus(Uno.Time.Offset offset) :611
void Instant__Plus1_fn(Instant* __this, ::g::Uno::Time::Offset* offset, Instant* __retval)
{
    *__retval = __this->Plus1(*offset);
}

// public Uno.Time.Instant PlusTicks(long ticksToAdd) :596
void Instant__PlusTicks_fn(Instant* __this, int64_t* ticksToAdd, Instant* __retval)
{
    *__retval = __this->PlusTicks(*ticksToAdd);
}

// public long get_Ticks() :589
void Instant__get_Ticks_fn(Instant* __this, int64_t* __retval)
{
    *__retval = __this->Ticks();
}

// public override sealed string ToString() :715
void Instant__ToString_fn(Instant* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Uno.Time.Instant", "ToString()");
    return *__retval = uPtr(::g::Uno::Time::Text::LocalDateTimePattern::GeneralIsoPattern())->Format(::g::Uno::Time::LocalDateTime::New9(*__this)), void();
}

// public Instant(long ticks) [instance] :591
void Instant::ctor_(int64_t ticks)
{
    _ticks = ticks;
}

// public bool Equals(Uno.Time.Instant other) [instance] :720
bool Instant::Equals2(Instant other)
{
    return Ticks() == other.Ticks();
}

// internal Uno.Time.Instant Minus(Uno.Time.Offset offset) [instance] :626
Instant Instant::Minus2(::g::Uno::Time::Offset offset)
{
    return Instant__New1(_ticks - offset.Ticks());
}

// internal Uno.Time.Instant Plus(Uno.Time.Offset offset) [instance] :611
Instant Instant::Plus1(::g::Uno::Time::Offset offset)
{
    return Instant__New1(Ticks() + offset.Ticks());
}

// public Uno.Time.Instant PlusTicks(long ticksToAdd) [instance] :596
Instant Instant::PlusTicks(int64_t ticksToAdd)
{
    return Instant__New1(_ticks + ticksToAdd);
}

// public long get_Ticks() [instance] :589
int64_t Instant::Ticks()
{
    return _ticks;
}

// public static Uno.Time.Instant FromUtc(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour) [static] :700
Instant Instant__FromUtc(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour)
{
    uStackFrame __("Uno.Time.Instant", "FromUtc(int,int,int,int,int)");
    return uPtr(::g::Uno::Time::CalendarSystem::Iso())->GetInstant(year, monthOfYear, dayOfMonth, hourOfDay, minuteOfHour);
}

// public Instant New(long ticks) [static] :591
Instant Instant__New1(int64_t ticks)
{
    Instant obj1;
    obj1.ctor_(ticks);
    return obj1;
}

// public static operator ==(Uno.Time.Instant left, Uno.Time.Instant right) [static] :658
bool Instant__op_Equality(Instant left, Instant right)
{
    return left.Equals2(right);
}

// public static operator -(Uno.Time.Instant left, Uno.Time.Instant right) [static] :648
::g::Uno::Time::Duration Instant__op_Subtraction1(Instant left, Instant right)
{
    return ::g::Uno::Time::Duration__New1(left.Ticks() - right.Ticks());
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/$.uno
// --------------------------------------------------------------------------------------------------

// public sealed class LocalDate :792
// {
static void LocalDate_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Time::LocalDateTime_typeof(), offsetof(::g::Uno::Time::LocalDate, _localTime), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Day", NULL, (void*)LocalDate__get_Day_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Month", NULL, (void*)LocalDate__get_Month_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)LocalDate__New1_fn, 0, true, type, 3, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("get_Year", NULL, (void*)LocalDate__get_Year_fn, 0, false, ::g::Uno::Int_typeof(), 0));
}

uType* LocalDate_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(LocalDate);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.LocalDate", options);
    type->fp_build_ = LocalDate_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))LocalDate__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))LocalDate__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))LocalDate__ToString_fn;
    return type;
}

// public LocalDate(int year, int month, int day) :796
void LocalDate__ctor__fn(LocalDate* __this, int* year, int* month, int* day)
{
    __this->ctor_(*year, *month, *day);
}

// public LocalDate(int year, int month, int day, Uno.Time.CalendarSystem calendar) :801
void LocalDate__ctor_1_fn(LocalDate* __this, int* year, int* month, int* day, ::g::Uno::Time::CalendarSystem* calendar)
{
    __this->ctor_1(*year, *month, *day, calendar);
}

// internal LocalDate(Uno.Time.LocalDateTime localTime) :816
void LocalDate__ctor_4_fn(LocalDate* __this, ::g::Uno::Time::LocalDateTime* localTime)
{
    __this->ctor_4(localTime);
}

// public int get_Day() :827
void LocalDate__get_Day_fn(LocalDate* __this, int* __retval)
{
    *__retval = __this->Day();
}

// public override sealed bool Equals(object obj) :942
void LocalDate__Equals_fn(LocalDate* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.Time.LocalDate", "Equals(object)");

    if (uIs(obj, __this->__type))
        return *__retval = LocalDate::op_Equality(__this, uCast<LocalDate*>(obj, __this->__type)), void();

    return *__retval = false, void();
}

// public override sealed int GetHashCode() :937
void LocalDate__GetHashCode_fn(LocalDate* __this, int* __retval)
{
    uStackFrame __("Uno.Time.LocalDate", "GetHashCode()");
    return *__retval = uPtr(__this->_localTime)->GetHashCode(), void();
}

// public int get_Month() :825
void LocalDate__get_Month_fn(LocalDate* __this, int* __retval)
{
    *__retval = __this->Month();
}

// public LocalDate New(int year, int month, int day) :796
void LocalDate__New1_fn(int* year, int* month, int* day, LocalDate** __retval)
{
    *__retval = LocalDate::New1(*year, *month, *day);
}

// public static operator ==(Uno.Time.LocalDate lhs, Uno.Time.LocalDate rhs) :956
void LocalDate__op_Equality_fn(LocalDate* lhs, LocalDate* rhs, bool* __retval)
{
    *__retval = LocalDate::op_Equality(lhs, rhs);
}

// public override sealed string ToString() :986
void LocalDate__ToString_fn(LocalDate* __this, uString** __retval)
{
    uStackFrame __("Uno.Time.LocalDate", "ToString()");
    return *__retval = uPtr(::g::Uno::Time::Text::LocalDatePattern::GeneralIsoPattern())->Format(__this), void();
}

// public int get_Year() :823
void LocalDate__get_Year_fn(LocalDate* __this, int* __retval)
{
    *__retval = __this->Year();
}

// public LocalDate(int year, int month, int day) [instance] :796
void LocalDate::ctor_(int year, int month, int day)
{
    uStackFrame __("Uno.Time.LocalDate", ".ctor(int,int,int)");
    ctor_1(year, month, day, ::g::Uno::Time::CalendarSystem::Iso());
}

// public LocalDate(int year, int month, int day, Uno.Time.CalendarSystem calendar) [instance] :801
void LocalDate::ctor_1(int year, int month, int day, ::g::Uno::Time::CalendarSystem* calendar)
{
    ctor_4(::g::Uno::Time::LocalDateTime::New8(year, month, day, 0, 0, calendar));
}

// internal LocalDate(Uno.Time.LocalDateTime localTime) [instance] :816
void LocalDate::ctor_4(::g::Uno::Time::LocalDateTime* localTime)
{
    _localTime = localTime;
}

// public int get_Day() [instance] :827
int LocalDate::Day()
{
    uStackFrame __("Uno.Time.LocalDate", "get_Day()");
    return uPtr(_localTime)->Day();
}

// public int get_Month() [instance] :825
int LocalDate::Month()
{
    uStackFrame __("Uno.Time.LocalDate", "get_Month()");
    return uPtr(_localTime)->Month();
}

// public int get_Year() [instance] :823
int LocalDate::Year()
{
    uStackFrame __("Uno.Time.LocalDate", "get_Year()");
    return uPtr(_localTime)->Year();
}

// public LocalDate New(int year, int month, int day) [static] :796
LocalDate* LocalDate::New1(int year, int month, int day)
{
    LocalDate* obj1 = (LocalDate*)uNew(LocalDate_typeof());
    obj1->ctor_(year, month, day);
    return obj1;
}

// public static operator ==(Uno.Time.LocalDate lhs, Uno.Time.LocalDate rhs) [static] :956
bool LocalDate::op_Equality(LocalDate* lhs, LocalDate* rhs)
{
    uStackFrame __("Uno.Time.LocalDate", "==(Uno.Time.LocalDate,Uno.Time.LocalDate)");
    return ::g::Uno::Time::LocalDateTime::op_Equality(uPtr(lhs)->_localTime, uPtr(rhs)->_localTime);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/$.uno
// --------------------------------------------------------------------------------------------------

// public sealed class LocalDateTime :1003
// {
static void LocalDateTime_build(uType* type)
{
    ::STRINGS[2] = uString::Const("calendar");
    ::TYPES[3] = ::g::Uno::Time::Preconditions_typeof()->MakeMethod(0/*CheckNotNull<Uno.Time.CalendarSystem>*/, ::g::Uno::Time::CalendarSystem_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(0/*Hash<Uno.Time.Instant>*/, ::g::Uno::Time::Instant_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(0/*Hash<Uno.Time.CalendarSystem>*/, ::g::Uno::Time::CalendarSystem_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Time::CalendarSystem_typeof(), offsetof(::g::Uno::Time::LocalDateTime, _calendar), 0,
        ::g::Uno::Time::Instant_typeof(), offsetof(::g::Uno::Time::LocalDateTime, _instant), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_Calendar", NULL, (void*)LocalDateTime__get_Calendar_fn, 0, false, ::g::Uno::Time::CalendarSystem_typeof(), 0),
        new uFunction("get_Day", NULL, (void*)LocalDateTime__get_Day_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("Equals", NULL, (void*)LocalDateTime__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("get_Hour", NULL, (void*)LocalDateTime__get_Hour_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Millisecond", NULL, (void*)LocalDateTime__get_Millisecond_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Minute", NULL, (void*)LocalDateTime__get_Minute_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Month", NULL, (void*)LocalDateTime__get_Month_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)LocalDateTime__New2_fn, 0, true, type, 6, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)LocalDateTime__New3_fn, 0, true, type, 7, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)LocalDateTime__New8_fn, 0, true, type, 6, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Time::CalendarSystem_typeof()),
        new uFunction(".ctor", NULL, (void*)LocalDateTime__New10_fn, 0, true, type, 2, ::g::Uno::Time::Instant_typeof(), ::g::Uno::Time::CalendarSystem_typeof()),
        new uFunction("get_Second", NULL, (void*)LocalDateTime__get_Second_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Year", NULL, (void*)LocalDateTime__get_Year_fn, 0, false, ::g::Uno::Int_typeof(), 0));
}

uType* LocalDateTime_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LocalDateTime);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.LocalDateTime", options);
    type->fp_build_ = LocalDateTime_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))LocalDateTime__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))LocalDateTime__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))LocalDateTime__ToString_fn;
    return type;
}

// public LocalDateTime(int year, int month, int day, int hour, int minute, int second) :1032
void LocalDateTime__ctor_1_fn(LocalDateTime* __this, int* year, int* month, int* day, int* hour, int* minute, int* second)
{
    __this->ctor_1(*year, *month, *day, *hour, *minute, *second);
}

// public LocalDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond) :1044
void LocalDateTime__ctor_2_fn(LocalDateTime* __this, int* year, int* month, int* day, int* hour, int* minute, int* second, int* millisecond)
{
    __this->ctor_2(*year, *month, *day, *hour, *minute, *second, *millisecond);
}

// public LocalDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int tickWithinMillisecond, Uno.Time.CalendarSystem calendar) :1059
void LocalDateTime__ctor_4_fn(LocalDateTime* __this, int* year, int* month, int* day, int* hour, int* minute, int* second, int* millisecond, int* tickWithinMillisecond, ::g::Uno::Time::CalendarSystem* calendar)
{
    __this->ctor_4(*year, *month, *day, *hour, *minute, *second, *millisecond, *tickWithinMillisecond, calendar);
}

// public LocalDateTime(int year, int month, int day, int hour, int minute, int second, Uno.Time.CalendarSystem calendar) :1037
void LocalDateTime__ctor_6_fn(LocalDateTime* __this, int* year, int* month, int* day, int* hour, int* minute, int* second, ::g::Uno::Time::CalendarSystem* calendar)
{
    __this->ctor_6(*year, *month, *day, *hour, *minute, *second, calendar);
}

// public LocalDateTime(int year, int month, int day, int hour, int minute, Uno.Time.CalendarSystem calendar) :1025
void LocalDateTime__ctor_7_fn(LocalDateTime* __this, int* year, int* month, int* day, int* hour, int* minute, ::g::Uno::Time::CalendarSystem* calendar)
{
    __this->ctor_7(*year, *month, *day, *hour, *minute, calendar);
}

// internal LocalDateTime(Uno.Time.Instant instant) :1008
void LocalDateTime__ctor_8_fn(LocalDateTime* __this, ::g::Uno::Time::Instant* instant)
{
    __this->ctor_8(*instant);
}

// public LocalDateTime(Uno.Time.Instant instant, Uno.Time.CalendarSystem calendar) :1013
void LocalDateTime__ctor_9_fn(LocalDateTime* __this, ::g::Uno::Time::Instant* instant, ::g::Uno::Time::CalendarSystem* calendar)
{
    __this->ctor_9(*instant, calendar);
}

// public Uno.Time.CalendarSystem get_Calendar() :1070
void LocalDateTime__get_Calendar_fn(LocalDateTime* __this, ::g::Uno::Time::CalendarSystem** __retval)
{
    *__retval = __this->Calendar();
}

// public int get_Day() :1091
void LocalDateTime__get_Day_fn(LocalDateTime* __this, int* __retval)
{
    *__retval = __this->Day();
}

// public override sealed bool Equals(object obj) :1201
void LocalDateTime__Equals_fn(LocalDateTime* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.Time.LocalDateTime", "Equals(object)");

    if (uIs(obj, __this->__type))
        return *__retval = __this->Equals2(uCast<LocalDateTime*>(obj, __this->__type)), void();

    return *__retval = false, void();
}

// public bool Equals(Uno.Time.LocalDateTime other) :1196
void LocalDateTime__Equals2_fn(LocalDateTime* __this, LocalDateTime* other, bool* __retval)
{
    *__retval = __this->Equals2(other);
}

// public override sealed int GetHashCode() :1188
void LocalDateTime__GetHashCode_fn(LocalDateTime* __this, int* __retval)
{
    uStackFrame __("Uno.Time.LocalDateTime", "GetHashCode()");
    int ret21;
    int ret22;
    int hash = ::g::Uno::Time::HashCodeHelper::Initialize();
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[4/*Uno.Time.HashCodeHelper.Hash<Uno.Time.Instant>*/], uCRef<int>(hash), uCRef(__this->Instant()), &ret21), ret21);
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[5/*Uno.Time.HashCodeHelper.Hash<Uno.Time.CalendarSystem>*/], uCRef<int>(hash), __this->Calendar(), &ret22), ret22);
    return *__retval = hash, void();
}

// public int get_Hour() :1097
void LocalDateTime__get_Hour_fn(LocalDateTime* __this, int* __retval)
{
    *__retval = __this->Hour();
}

// internal Uno.Time.Instant get_Instant() :1066
void LocalDateTime__get_Instant_fn(LocalDateTime* __this, ::g::Uno::Time::Instant* __retval)
{
    *__retval = __this->Instant();
}

// public int get_Millisecond() :1105
void LocalDateTime__get_Millisecond_fn(LocalDateTime* __this, int* __retval)
{
    *__retval = __this->Millisecond();
}

// public int get_Minute() :1101
void LocalDateTime__get_Minute_fn(LocalDateTime* __this, int* __retval)
{
    *__retval = __this->Minute();
}

// public int get_Month() :1085
void LocalDateTime__get_Month_fn(LocalDateTime* __this, int* __retval)
{
    *__retval = __this->Month();
}

// public LocalDateTime New(int year, int month, int day, int hour, int minute, int second) :1032
void LocalDateTime__New2_fn(int* year, int* month, int* day, int* hour, int* minute, int* second, LocalDateTime** __retval)
{
    *__retval = LocalDateTime::New2(*year, *month, *day, *hour, *minute, *second);
}

// public LocalDateTime New(int year, int month, int day, int hour, int minute, int second, int millisecond) :1044
void LocalDateTime__New3_fn(int* year, int* month, int* day, int* hour, int* minute, int* second, int* millisecond, LocalDateTime** __retval)
{
    *__retval = LocalDateTime::New3(*year, *month, *day, *hour, *minute, *second, *millisecond);
}

// public LocalDateTime New(int year, int month, int day, int hour, int minute, Uno.Time.CalendarSystem calendar) :1025
void LocalDateTime__New8_fn(int* year, int* month, int* day, int* hour, int* minute, ::g::Uno::Time::CalendarSystem* calendar, LocalDateTime** __retval)
{
    *__retval = LocalDateTime::New8(*year, *month, *day, *hour, *minute, calendar);
}

// internal LocalDateTime New(Uno.Time.Instant instant) :1008
void LocalDateTime__New9_fn(::g::Uno::Time::Instant* instant, LocalDateTime** __retval)
{
    *__retval = LocalDateTime::New9(*instant);
}

// public LocalDateTime New(Uno.Time.Instant instant, Uno.Time.CalendarSystem calendar) :1013
void LocalDateTime__New10_fn(::g::Uno::Time::Instant* instant, ::g::Uno::Time::CalendarSystem* calendar, LocalDateTime** __retval)
{
    *__retval = LocalDateTime::New10(*instant, calendar);
}

// public static operator ==(Uno.Time.LocalDateTime left, Uno.Time.LocalDateTime right) :1126
void LocalDateTime__op_Equality_fn(LocalDateTime* left, LocalDateTime* right, bool* __retval)
{
    *__retval = LocalDateTime::op_Equality(left, right);
}

// public int get_Second() :1103
void LocalDateTime__get_Second_fn(LocalDateTime* __this, int* __retval)
{
    *__retval = __this->Second();
}

// public override sealed string ToString() :1307
void LocalDateTime__ToString_fn(LocalDateTime* __this, uString** __retval)
{
    uStackFrame __("Uno.Time.LocalDateTime", "ToString()");
    return *__retval = uPtr(::g::Uno::Time::Text::LocalDateTimePattern::GeneralIsoPattern())->Format(__this), void();
}

// public int get_Year() :1075
void LocalDateTime__get_Year_fn(LocalDateTime* __this, int* __retval)
{
    *__retval = __this->Year();
}

// public LocalDateTime(int year, int month, int day, int hour, int minute, int second) [instance] :1032
void LocalDateTime::ctor_1(int year, int month, int day, int hour, int minute, int second)
{
    uStackFrame __("Uno.Time.LocalDateTime", ".ctor(int,int,int,int,int,int)");
    ctor_6(year, month, day, hour, minute, second, ::g::Uno::Time::CalendarSystem::Iso());
}

// public LocalDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond) [instance] :1044
void LocalDateTime::ctor_2(int year, int month, int day, int hour, int minute, int second, int millisecond)
{
    uStackFrame __("Uno.Time.LocalDateTime", ".ctor(int,int,int,int,int,int,int)");
    ctor_4(year, month, day, hour, minute, second, millisecond, 0, ::g::Uno::Time::CalendarSystem::Iso());
}

// public LocalDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int tickWithinMillisecond, Uno.Time.CalendarSystem calendar) [instance] :1059
void LocalDateTime::ctor_4(int year, int month, int day, int hour, int minute, int second, int millisecond, int tickWithinMillisecond, ::g::Uno::Time::CalendarSystem* calendar)
{
    uStackFrame __("Uno.Time.LocalDateTime", ".ctor(int,int,int,int,int,int,int,int,Uno.Time.CalendarSystem)");
    ::g::Uno::Time::Preconditions::CheckNotNull(::TYPES[3/*Uno.Time.Preconditions.CheckNotNull<Uno.Time.CalendarSystem>*/], calendar, ::STRINGS[2/*"calendar"*/]);
    _instant = uPtr(calendar)->GetInstant2(year, month, day, hour, minute, second, millisecond, tickWithinMillisecond);
    _calendar = calendar;
}

// public LocalDateTime(int year, int month, int day, int hour, int minute, int second, Uno.Time.CalendarSystem calendar) [instance] :1037
void LocalDateTime::ctor_6(int year, int month, int day, int hour, int minute, int second, ::g::Uno::Time::CalendarSystem* calendar)
{
    uStackFrame __("Uno.Time.LocalDateTime", ".ctor(int,int,int,int,int,int,Uno.Time.CalendarSystem)");
    ::g::Uno::Time::Preconditions::CheckNotNull(::TYPES[3/*Uno.Time.Preconditions.CheckNotNull<Uno.Time.CalendarSystem>*/], calendar, ::STRINGS[2/*"calendar"*/]);
    _instant = uPtr(calendar)->GetInstant1(year, month, day, hour, minute, second);
    _calendar = calendar;
}

// public LocalDateTime(int year, int month, int day, int hour, int minute, Uno.Time.CalendarSystem calendar) [instance] :1025
void LocalDateTime::ctor_7(int year, int month, int day, int hour, int minute, ::g::Uno::Time::CalendarSystem* calendar)
{
    uStackFrame __("Uno.Time.LocalDateTime", ".ctor(int,int,int,int,int,Uno.Time.CalendarSystem)");
    ::g::Uno::Time::Preconditions::CheckNotNull(::TYPES[3/*Uno.Time.Preconditions.CheckNotNull<Uno.Time.CalendarSystem>*/], calendar, ::STRINGS[2/*"calendar"*/]);
    _instant = uPtr(calendar)->GetInstant(year, month, day, hour, minute);
    _calendar = calendar;
}

// internal LocalDateTime(Uno.Time.Instant instant) [instance] :1008
void LocalDateTime::ctor_8(::g::Uno::Time::Instant instant)
{
    uStackFrame __("Uno.Time.LocalDateTime", ".ctor(Uno.Time.Instant)");
    ctor_9(instant, ::g::Uno::Time::CalendarSystem::Iso());
}

// public LocalDateTime(Uno.Time.Instant instant, Uno.Time.CalendarSystem calendar) [instance] :1013
void LocalDateTime::ctor_9(::g::Uno::Time::Instant instant, ::g::Uno::Time::CalendarSystem* calendar)
{
    uStackFrame __("Uno.Time.LocalDateTime", ".ctor(Uno.Time.Instant,Uno.Time.CalendarSystem)");
    ::g::Uno::Time::Preconditions::CheckNotNull(::TYPES[3/*Uno.Time.Preconditions.CheckNotNull<Uno.Time.CalendarSystem>*/], calendar, ::STRINGS[2/*"calendar"*/]);
    _instant = instant;
    _calendar = calendar;
}

// public Uno.Time.CalendarSystem get_Calendar() [instance] :1070
::g::Uno::Time::CalendarSystem* LocalDateTime::Calendar()
{
    uStackFrame __("Uno.Time.LocalDateTime", "get_Calendar()");
    ::g::Uno::Time::CalendarSystem* ind10 = _calendar;
    return (ind10 != NULL) ? ind10 : (::g::Uno::Time::CalendarSystem*)::g::Uno::Time::CalendarSystem::Iso();
}

// public int get_Day() [instance] :1091
int LocalDateTime::Day()
{
    uStackFrame __("Uno.Time.LocalDateTime", "get_Day()");
    return uPtr(Calendar())->GetDayOfMonth(_instant);
}

// public bool Equals(Uno.Time.LocalDateTime other) [instance] :1196
bool LocalDateTime::Equals2(LocalDateTime* other)
{
    uStackFrame __("Uno.Time.LocalDateTime", "Equals(Uno.Time.LocalDateTime)");
    return ::g::Uno::Time::Instant__op_Equality(_instant, uPtr(other)->_instant) && ::g::Uno::Object::Equals(uPtr(Calendar()), uPtr(other)->Calendar());
}

// public int get_Hour() [instance] :1097
int LocalDateTime::Hour()
{
    uStackFrame __("Uno.Time.LocalDateTime", "get_Hour()");
    return uPtr(Calendar())->GetHourOfDay(_instant);
}

// internal Uno.Time.Instant get_Instant() [instance] :1066
::g::Uno::Time::Instant LocalDateTime::Instant()
{
    return _instant;
}

// public int get_Millisecond() [instance] :1105
int LocalDateTime::Millisecond()
{
    uStackFrame __("Uno.Time.LocalDateTime", "get_Millisecond()");
    return uPtr(Calendar())->GetMillisecondOfSecond(_instant);
}

// public int get_Minute() [instance] :1101
int LocalDateTime::Minute()
{
    uStackFrame __("Uno.Time.LocalDateTime", "get_Minute()");
    return uPtr(Calendar())->GetMinuteOfHour(_instant);
}

// public int get_Month() [instance] :1085
int LocalDateTime::Month()
{
    uStackFrame __("Uno.Time.LocalDateTime", "get_Month()");
    return uPtr(Calendar())->GetMonthOfYear(_instant);
}

// public int get_Second() [instance] :1103
int LocalDateTime::Second()
{
    uStackFrame __("Uno.Time.LocalDateTime", "get_Second()");
    return uPtr(Calendar())->GetSecondOfMinute(_instant);
}

// public int get_Year() [instance] :1075
int LocalDateTime::Year()
{
    uStackFrame __("Uno.Time.LocalDateTime", "get_Year()");
    return uPtr(Calendar())->GetYear(_instant);
}

// public LocalDateTime New(int year, int month, int day, int hour, int minute, int second) [static] :1032
LocalDateTime* LocalDateTime::New2(int year, int month, int day, int hour, int minute, int second)
{
    LocalDateTime* obj15 = (LocalDateTime*)uNew(LocalDateTime_typeof());
    obj15->ctor_1(year, month, day, hour, minute, second);
    return obj15;
}

// public LocalDateTime New(int year, int month, int day, int hour, int minute, int second, int millisecond) [static] :1044
LocalDateTime* LocalDateTime::New3(int year, int month, int day, int hour, int minute, int second, int millisecond)
{
    LocalDateTime* obj17 = (LocalDateTime*)uNew(LocalDateTime_typeof());
    obj17->ctor_2(year, month, day, hour, minute, second, millisecond);
    return obj17;
}

// public LocalDateTime New(int year, int month, int day, int hour, int minute, Uno.Time.CalendarSystem calendar) [static] :1025
LocalDateTime* LocalDateTime::New8(int year, int month, int day, int hour, int minute, ::g::Uno::Time::CalendarSystem* calendar)
{
    LocalDateTime* obj14 = (LocalDateTime*)uNew(LocalDateTime_typeof());
    obj14->ctor_7(year, month, day, hour, minute, calendar);
    return obj14;
}

// internal LocalDateTime New(Uno.Time.Instant instant) [static] :1008
LocalDateTime* LocalDateTime::New9(::g::Uno::Time::Instant instant)
{
    LocalDateTime* obj11 = (LocalDateTime*)uNew(LocalDateTime_typeof());
    obj11->ctor_8(instant);
    return obj11;
}

// public LocalDateTime New(Uno.Time.Instant instant, Uno.Time.CalendarSystem calendar) [static] :1013
LocalDateTime* LocalDateTime::New10(::g::Uno::Time::Instant instant, ::g::Uno::Time::CalendarSystem* calendar)
{
    LocalDateTime* obj12 = (LocalDateTime*)uNew(LocalDateTime_typeof());
    obj12->ctor_9(instant, calendar);
    return obj12;
}

// public static operator ==(Uno.Time.LocalDateTime left, Uno.Time.LocalDateTime right) [static] :1126
bool LocalDateTime::op_Equality(LocalDateTime* left, LocalDateTime* right)
{
    uStackFrame __("Uno.Time.LocalDateTime", "==(Uno.Time.LocalDateTime,Uno.Time.LocalDateTime)");
    return uPtr(left)->Equals2(right);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/$.uno
// --------------------------------------------------------------------------------------------------

// public struct LocalTime :1322
// {
// static LocalTime() :1328
static void LocalTime__cctor__fn(uType* __type)
{
    LocalTime::Midnight_ = LocalTime__New2(0, 0, 0);
    LocalTime::Noon_ = LocalTime__New2(12, 0, 0);
}

static void LocalTime_build(uType* type)
{
    ::STRINGS[3] = uString::Const("hour");
    ::STRINGS[4] = uString::Const("minute");
    ::STRINGS[5] = uString::Const("second");
    ::STRINGS[6] = uString::Const("millisecond");
    ::TYPES[1] = ::g::Uno::Long_typeof();
    type->SetFields(0,
        ::TYPES[1/*long*/], offsetof(::g::Uno::Time::LocalTime, _ticks), 0,
        type, (uintptr_t)&::g::Uno::Time::LocalTime::Midnight_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Uno::Time::LocalTime::Noon_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("Midnight", 1),
        new uField("Noon", 2));
    type->Reflection.SetFunctions(6,
        new uFunction("get_Hour", NULL, (void*)LocalTime__get_Hour_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Millisecond", NULL, (void*)LocalTime__get_Millisecond_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Minute", NULL, (void*)LocalTime__get_Minute_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)LocalTime__New2_fn, 0, true, type, 3, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)LocalTime__New3_fn, 0, true, type, 4, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("get_Second", NULL, (void*)LocalTime__get_Second_fn, 0, false, ::g::Uno::Int_typeof(), 0));
}

uStructType* LocalTime_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(LocalTime);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Time.LocalTime", options);
    type->fp_build_ = LocalTime_build;
    type->fp_cctor_ = LocalTime__cctor__fn;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))LocalTime__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))LocalTime__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))LocalTime__ToString_fn;
    return type;
}

// public LocalTime(int hour, int minute, int second) :1343
void LocalTime__ctor_1_fn(LocalTime* __this, int* hour, int* minute, int* second)
{
    __this->ctor_1(*hour, *minute, *second);
}

// public LocalTime(int hour, int minute, int second, int millisecond) :1353
void LocalTime__ctor_2_fn(LocalTime* __this, int* hour, int* minute, int* second, int* millisecond)
{
    __this->ctor_2(*hour, *minute, *second, *millisecond);
}

// public override sealed bool Equals(object obj) :1506
void LocalTime__Equals_fn(LocalTime* __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.Time.LocalTime", "Equals(object)");

    if (uIs(obj, __type))
        return *__retval = LocalTime__op_Equality(*__this, uUnbox<LocalTime>(__type, obj)), void();

    return *__retval = false, void();
}

// public override sealed int GetHashCode() :1500
void LocalTime__GetHashCode_fn(LocalTime* __this, uType* __type, int* __retval)
{
    uStackFrame __("Uno.Time.LocalTime", "GetHashCode()");
    int64_t ticks = __this->_ticks;
    return *__retval = ::g::Uno::Long::GetHashCode(ticks, ::TYPES[1/*long*/]), void();
}

// public int get_Hour() :1420
void LocalTime__get_Hour_fn(LocalTime* __this, int* __retval)
{
    *__retval = __this->Hour();
}

// public int get_Millisecond() :1428
void LocalTime__get_Millisecond_fn(LocalTime* __this, int* __retval)
{
    *__retval = __this->Millisecond();
}

// public int get_Minute() :1424
void LocalTime__get_Minute_fn(LocalTime* __this, int* __retval)
{
    *__retval = __this->Minute();
}

// public LocalTime New(int hour, int minute, int second) :1343
void LocalTime__New2_fn(int* hour, int* minute, int* second, LocalTime* __retval)
{
    *__retval = LocalTime__New2(*hour, *minute, *second);
}

// public LocalTime New(int hour, int minute, int second, int millisecond) :1353
void LocalTime__New3_fn(int* hour, int* minute, int* second, int* millisecond, LocalTime* __retval)
{
    *__retval = LocalTime__New3(*hour, *minute, *second, *millisecond);
}

// public static operator ==(Uno.Time.LocalTime lhs, Uno.Time.LocalTime rhs) :1470
void LocalTime__op_Equality_fn(LocalTime* lhs, LocalTime* rhs, bool* __retval)
{
    *__retval = LocalTime__op_Equality(*lhs, *rhs);
}

// public int get_Second() :1426
void LocalTime__get_Second_fn(LocalTime* __this, int* __retval)
{
    *__retval = __this->Second();
}

// public override sealed string ToString() :1545
void LocalTime__ToString_fn(LocalTime* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Uno.Time.LocalTime", "ToString()");
    return *__retval = uPtr(::g::Uno::Time::Text::LocalTimePattern::GeneralIsoPattern())->Format(*__this), void();
}

LocalTime LocalTime::Midnight_;
LocalTime LocalTime::Noon_;

// public LocalTime(int hour, int minute, int second) [instance] :1343
void LocalTime::ctor_1(int hour, int minute, int second)
{
    uStackFrame __("Uno.Time.LocalTime", ".ctor(int,int,int)");
    ::g::Uno::Time::Preconditions::CheckArgumentRange(::STRINGS[3/*"hour"*/], hour, 0, 23);
    ::g::Uno::Time::Preconditions::CheckArgumentRange(::STRINGS[4/*"minute"*/], minute, 0, 59);
    ::g::Uno::Time::Preconditions::CheckArgumentRange(::STRINGS[5/*"second"*/], second, 0, 59);
    _ticks = ((((int64_t)hour * 36000000000LL) + ((int64_t)minute * 600000000LL)) + ((int64_t)second * 10000000LL));
}

// public LocalTime(int hour, int minute, int second, int millisecond) [instance] :1353
void LocalTime::ctor_2(int hour, int minute, int second, int millisecond)
{
    uStackFrame __("Uno.Time.LocalTime", ".ctor(int,int,int,int)");
    ::g::Uno::Time::Preconditions::CheckArgumentRange(::STRINGS[3/*"hour"*/], hour, 0, 23);
    ::g::Uno::Time::Preconditions::CheckArgumentRange(::STRINGS[4/*"minute"*/], minute, 0, 59);
    ::g::Uno::Time::Preconditions::CheckArgumentRange(::STRINGS[5/*"second"*/], second, 0, 59);
    ::g::Uno::Time::Preconditions::CheckArgumentRange(::STRINGS[6/*"millisecond"*/], millisecond, 0, 999);
    _ticks = (((((int64_t)hour * 36000000000LL) + ((int64_t)minute * 600000000LL)) + ((int64_t)second * 10000000LL)) + ((int64_t)millisecond * 10000LL));
}

// public int get_Hour() [instance] :1420
int LocalTime::Hour()
{
    return ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetHourOfDayFromTickOfDay(_ticks);
}

// public int get_Millisecond() [instance] :1428
int LocalTime::Millisecond()
{
    return ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetMillisecondOfSecondFromTickOfDay(_ticks);
}

// public int get_Minute() [instance] :1424
int LocalTime::Minute()
{
    return ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetMinuteOfHourFromTickOfDay(_ticks);
}

// public int get_Second() [instance] :1426
int LocalTime::Second()
{
    return ::g::Uno::Time::Calendars::TimeOfDayCalculator::GetSecondOfMinuteFromTickOfDay(_ticks);
}

// public LocalTime New(int hour, int minute, int second) [static] :1343
LocalTime LocalTime__New2(int hour, int minute, int second)
{
    LocalTime obj2;
    obj2.ctor_1(hour, minute, second);
    return obj2;
}

// public LocalTime New(int hour, int minute, int second, int millisecond) [static] :1353
LocalTime LocalTime__New3(int hour, int minute, int second, int millisecond)
{
    LocalTime obj3;
    obj3.ctor_2(hour, minute, second, millisecond);
    return obj3;
}

// public static operator ==(Uno.Time.LocalTime lhs, Uno.Time.LocalTime rhs) [static] :1470
bool LocalTime__op_Equality(LocalTime lhs, LocalTime rhs)
{
    LocalTime_typeof()->Init();
    return lhs._ticks == rhs._ticks;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/$.uno
// --------------------------------------------------------------------------------------------------

// public struct Offset :1559
// {
// static Offset() :1567
static void Offset__cctor__fn(uType* __type)
{
    Offset::Zero_ = Offset__FromMilliseconds(0);
    Offset::MinValue_ = Offset__FromMilliseconds(-86399999);
    Offset::MaxValue_ = Offset__FromMilliseconds(86399999);
}

static void Offset_build(uType* type)
{
    ::STRINGS[7] = uString::Const("milliseconds");
    ::TYPES[6] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::TYPES[6/*int*/], offsetof(::g::Uno::Time::Offset, _milliseconds), 0,
        type, (uintptr_t)&::g::Uno::Time::Offset::Zero_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Uno::Time::Offset::MinValue_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Uno::Time::Offset::MaxValue_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("MaxValue", 3),
        new uField("MinValue", 2),
        new uField("Zero", 1));
    type->Reflection.SetFunctions(7,
        new uFunction("Equals", NULL, (void*)Offset__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("FromHours", NULL, (void*)Offset__FromHours_fn, 0, true, type, 1, ::TYPES[6/*int*/]),
        new uFunction("FromHoursAndMinutes", NULL, (void*)Offset__FromHoursAndMinutes_fn, 0, true, type, 2, ::TYPES[6/*int*/], ::TYPES[6/*int*/]),
        new uFunction("FromMilliseconds", NULL, (void*)Offset__FromMilliseconds_fn, 0, true, type, 1, ::TYPES[6/*int*/]),
        new uFunction("FromTicks", NULL, (void*)Offset__FromTicks_fn, 0, true, type, 1, ::g::Uno::Long_typeof()),
        new uFunction("get_Milliseconds", NULL, (void*)Offset__get_Milliseconds_fn, 0, false, ::TYPES[6/*int*/], 0),
        new uFunction("get_Ticks", NULL, (void*)Offset__get_Ticks_fn, 0, false, ::g::Uno::Long_typeof(), 0));
}

uStructType* Offset_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(Offset);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Time.Offset", options);
    type->fp_build_ = Offset_build;
    type->fp_cctor_ = Offset__cctor__fn;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Offset__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Offset__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Offset__ToString_fn;
    return type;
}

// private Offset(int milliseconds) :1574
void Offset__ctor__fn(Offset* __this, int* milliseconds)
{
    __this->ctor_(*milliseconds);
}

// public override sealed bool Equals(object obj) :1676
void Offset__Equals_fn(Offset* __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.Time.Offset", "Equals(object)");

    if (uIs(obj, __type))
        return *__retval = __this->Equals2(uUnbox<Offset>(__type, obj)), void();

    return *__retval = false, void();
}

// public bool Equals(Uno.Time.Offset other) :1685
void Offset__Equals2_fn(Offset* __this, Offset* other, bool* __retval)
{
    *__retval = __this->Equals2(*other);
}

// public static Uno.Time.Offset FromHours(int hours) :1705
void Offset__FromHours_fn(int* hours, Offset* __retval)
{
    *__retval = Offset__FromHours(*hours);
}

// public static Uno.Time.Offset FromHoursAndMinutes(int hours, int minutes) :1710
void Offset__FromHoursAndMinutes_fn(int* hours, int* minutes, Offset* __retval)
{
    *__retval = Offset__FromHoursAndMinutes(*hours, *minutes);
}

// public static Uno.Time.Offset FromMilliseconds(int milliseconds) :1695
void Offset__FromMilliseconds_fn(int* milliseconds, Offset* __retval)
{
    *__retval = Offset__FromMilliseconds(*milliseconds);
}

// public static Uno.Time.Offset FromTicks(long ticks) :1700
void Offset__FromTicks_fn(int64_t* ticks, Offset* __retval)
{
    *__retval = Offset__FromTicks(*ticks);
}

// public override sealed int GetHashCode() :1671
void Offset__GetHashCode_fn(Offset* __this, uType* __type, int* __retval)
{
    uStackFrame __("Uno.Time.Offset", "GetHashCode()");
    return *__retval = ::g::Uno::Int::GetHashCode(__this->Milliseconds(), ::TYPES[6/*int*/]), void();
}

// public int get_Milliseconds() :1582
void Offset__get_Milliseconds_fn(Offset* __this, int* __retval)
{
    *__retval = __this->Milliseconds();
}

// private Offset New(int milliseconds) :1574
void Offset__New1_fn(int* milliseconds, Offset* __retval)
{
    *__retval = Offset__New1(*milliseconds);
}

// public static operator ==(Uno.Time.Offset left, Uno.Time.Offset right) :1641
void Offset__op_Equality_fn(Offset* left, Offset* right, bool* __retval)
{
    *__retval = Offset__op_Equality(*left, *right);
}

// public long get_Ticks() :1584
void Offset__get_Ticks_fn(Offset* __this, int64_t* __retval)
{
    *__retval = __this->Ticks();
}

// public override sealed string ToString() :1690
void Offset__ToString_fn(Offset* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Uno.Time.Offset", "ToString()");
    return *__retval = uPtr(::g::Uno::Time::Text::OffsetPattern::GeneralIsoPattern())->Format(*__this), void();
}

Offset Offset::Zero_;
Offset Offset::MinValue_;
Offset Offset::MaxValue_;

// private Offset(int milliseconds) [instance] :1574
void Offset::ctor_(int milliseconds)
{
    uStackFrame __("Uno.Time.Offset", ".ctor(int)");
    ::g::Uno::Time::Preconditions::CheckArgumentRange(::STRINGS[7/*"milliseconds"*/], milliseconds, -86399999, 86399999);
    _milliseconds = milliseconds;
}

// public bool Equals(Uno.Time.Offset other) [instance] :1685
bool Offset::Equals2(Offset other)
{
    return Milliseconds() == other.Milliseconds();
}

// public int get_Milliseconds() [instance] :1582
int Offset::Milliseconds()
{
    return _milliseconds;
}

// public long get_Ticks() [instance] :1584
int64_t Offset::Ticks()
{
    return (int64_t)Milliseconds() * 10000LL;
}

// public static Uno.Time.Offset FromHours(int hours) [static] :1705
Offset Offset__FromHours(int hours)
{
    Offset_typeof()->Init();
    return Offset__New1(hours * 3600000);
}

// public static Uno.Time.Offset FromHoursAndMinutes(int hours, int minutes) [static] :1710
Offset Offset__FromHoursAndMinutes(int hours, int minutes)
{
    Offset_typeof()->Init();
    return Offset__New1((hours * 3600000) + (minutes * 60000));
}

// public static Uno.Time.Offset FromMilliseconds(int milliseconds) [static] :1695
Offset Offset__FromMilliseconds(int milliseconds)
{
    Offset_typeof()->Init();
    return Offset__New1(milliseconds);
}

// public static Uno.Time.Offset FromTicks(long ticks) [static] :1700
Offset Offset__FromTicks(int64_t ticks)
{
    Offset_typeof()->Init();
    return Offset__New1((int)(ticks / 10000LL));
}

// private Offset New(int milliseconds) [static] :1574
Offset Offset__New1(int milliseconds)
{
    Offset obj1;
    obj1.ctor_(milliseconds);
    return obj1;
}

// public static operator ==(Uno.Time.Offset left, Uno.Time.Offset right) [static] :1641
bool Offset__op_Equality(Offset left, Offset right)
{
    uStackFrame __("Uno.Time.Offset", "==(Uno.Time.Offset,Uno.Time.Offset)");
    Offset_typeof()->Init();
    return ::g::Uno::Int::Equals(left.Milliseconds(), ::TYPES[6/*int*/], uBox<int>(::TYPES[6/*int*/], right.Milliseconds()));
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/$.uno
// --------------------------------------------------------------------------------------------------

// public sealed class OffsetDateTime :1726
// {
static void OffsetDateTime_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(0/*Hash<Uno.Time.LocalDateTime>*/, ::g::Uno::Time::LocalDateTime_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(0/*Hash<Uno.Time.Offset>*/, ::g::Uno::Time::Offset_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Time::LocalDateTime_typeof(), offsetof(::g::Uno::Time::OffsetDateTime, _localDateTime), 0,
        ::g::Uno::Time::Offset_typeof(), offsetof(::g::Uno::Time::OffsetDateTime, _offset), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("get_Day", NULL, (void*)OffsetDateTime__get_Day_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("Equals", NULL, (void*)OffsetDateTime__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("get_Hour", NULL, (void*)OffsetDateTime__get_Hour_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Millisecond", NULL, (void*)OffsetDateTime__get_Millisecond_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Minute", NULL, (void*)OffsetDateTime__get_Minute_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Month", NULL, (void*)OffsetDateTime__get_Month_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)OffsetDateTime__New1_fn, 0, true, type, 2, ::g::Uno::Time::LocalDateTime_typeof(), ::g::Uno::Time::Offset_typeof()),
        new uFunction("get_Offset", NULL, (void*)OffsetDateTime__get_Offset_fn, 0, false, ::g::Uno::Time::Offset_typeof(), 0),
        new uFunction("get_Second", NULL, (void*)OffsetDateTime__get_Second_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Year", NULL, (void*)OffsetDateTime__get_Year_fn, 0, false, ::g::Uno::Int_typeof(), 0));
}

uType* OffsetDateTime_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OffsetDateTime);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.OffsetDateTime", options);
    type->fp_build_ = OffsetDateTime_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))OffsetDateTime__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))OffsetDateTime__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))OffsetDateTime__ToString_fn;
    return type;
}

// public OffsetDateTime(Uno.Time.LocalDateTime localDateTime, Uno.Time.Offset offset) :1731
void OffsetDateTime__ctor__fn(OffsetDateTime* __this, ::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::Offset* offset)
{
    __this->ctor_(localDateTime, *offset);
}

// public int get_Day() :1743
void OffsetDateTime__get_Day_fn(OffsetDateTime* __this, int* __retval)
{
    *__retval = __this->Day();
}

// public override sealed bool Equals(object obj) :1802
void OffsetDateTime__Equals_fn(OffsetDateTime* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.Time.OffsetDateTime", "Equals(object)");

    if (uIs(obj, __this->__type))
        return *__retval = OffsetDateTime::op_Equality(__this, uCast<OffsetDateTime*>(obj, __this->__type)), void();

    return *__retval = false, void();
}

// public bool Equals(Uno.Time.OffsetDateTime other) :1811
void OffsetDateTime__Equals2_fn(OffsetDateTime* __this, OffsetDateTime* other, bool* __retval)
{
    *__retval = __this->Equals2(other);
}

// public override sealed int GetHashCode() :1794
void OffsetDateTime__GetHashCode_fn(OffsetDateTime* __this, int* __retval)
{
    uStackFrame __("Uno.Time.OffsetDateTime", "GetHashCode()");
    int ret2;
    int ret3;
    int hash = ::g::Uno::Time::HashCodeHelper::Initialize();
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[7/*Uno.Time.HashCodeHelper.Hash<Uno.Time.LocalDateTime>*/], uCRef<int>(hash), __this->_localDateTime, &ret2), ret2);
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[2/*Uno.Time.HashCodeHelper.Hash<Uno.Time.Offset>*/], uCRef<int>(hash), uCRef(__this->_offset), &ret3), ret3);
    return *__retval = hash, void();
}

// public int get_Hour() :1761
void OffsetDateTime__get_Hour_fn(OffsetDateTime* __this, int* __retval)
{
    *__retval = __this->Hour();
}

// public int get_Millisecond() :1769
void OffsetDateTime__get_Millisecond_fn(OffsetDateTime* __this, int* __retval)
{
    *__retval = __this->Millisecond();
}

// public int get_Minute() :1765
void OffsetDateTime__get_Minute_fn(OffsetDateTime* __this, int* __retval)
{
    *__retval = __this->Minute();
}

// public int get_Month() :1741
void OffsetDateTime__get_Month_fn(OffsetDateTime* __this, int* __retval)
{
    *__retval = __this->Month();
}

// public OffsetDateTime New(Uno.Time.LocalDateTime localDateTime, Uno.Time.Offset offset) :1731
void OffsetDateTime__New1_fn(::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::Offset* offset, OffsetDateTime** __retval)
{
    *__retval = OffsetDateTime::New1(localDateTime, *offset);
}

// public Uno.Time.Offset get_Offset() :1781
void OffsetDateTime__get_Offset_fn(OffsetDateTime* __this, ::g::Uno::Time::Offset* __retval)
{
    *__retval = __this->Offset();
}

// public static operator ==(Uno.Time.OffsetDateTime left, Uno.Time.OffsetDateTime right) :1821
void OffsetDateTime__op_Equality_fn(OffsetDateTime* left, OffsetDateTime* right, bool* __retval)
{
    *__retval = OffsetDateTime::op_Equality(left, right);
}

// public int get_Second() :1767
void OffsetDateTime__get_Second_fn(OffsetDateTime* __this, int* __retval)
{
    *__retval = __this->Second();
}

// public override sealed string ToString() :1816
void OffsetDateTime__ToString_fn(OffsetDateTime* __this, uString** __retval)
{
    uStackFrame __("Uno.Time.OffsetDateTime", "ToString()");
    return *__retval = uPtr(::g::Uno::Time::Text::OffsetDateTimePattern::GeneralIsoPattern())->Format(__this), void();
}

// public int get_Year() :1739
void OffsetDateTime__get_Year_fn(OffsetDateTime* __this, int* __retval)
{
    *__retval = __this->Year();
}

// public OffsetDateTime(Uno.Time.LocalDateTime localDateTime, Uno.Time.Offset offset) [instance] :1731
void OffsetDateTime::ctor_(::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::Offset offset)
{
    _localDateTime = localDateTime;
    _offset = offset;
}

// public int get_Day() [instance] :1743
int OffsetDateTime::Day()
{
    uStackFrame __("Uno.Time.OffsetDateTime", "get_Day()");
    return uPtr(_localDateTime)->Day();
}

// public bool Equals(Uno.Time.OffsetDateTime other) [instance] :1811
bool OffsetDateTime::Equals2(OffsetDateTime* other)
{
    uStackFrame __("Uno.Time.OffsetDateTime", "Equals(Uno.Time.OffsetDateTime)");
    return ::g::Uno::Time::LocalDateTime::op_Equality(_localDateTime, uPtr(other)->_localDateTime) && ::g::Uno::Time::Offset__op_Equality(_offset, uPtr(other)->_offset);
}

// public int get_Hour() [instance] :1761
int OffsetDateTime::Hour()
{
    uStackFrame __("Uno.Time.OffsetDateTime", "get_Hour()");
    return uPtr(_localDateTime)->Hour();
}

// public int get_Millisecond() [instance] :1769
int OffsetDateTime::Millisecond()
{
    uStackFrame __("Uno.Time.OffsetDateTime", "get_Millisecond()");
    return uPtr(_localDateTime)->Millisecond();
}

// public int get_Minute() [instance] :1765
int OffsetDateTime::Minute()
{
    uStackFrame __("Uno.Time.OffsetDateTime", "get_Minute()");
    return uPtr(_localDateTime)->Minute();
}

// public int get_Month() [instance] :1741
int OffsetDateTime::Month()
{
    uStackFrame __("Uno.Time.OffsetDateTime", "get_Month()");
    return uPtr(_localDateTime)->Month();
}

// public Uno.Time.Offset get_Offset() [instance] :1781
::g::Uno::Time::Offset OffsetDateTime::Offset()
{
    return _offset;
}

// public int get_Second() [instance] :1767
int OffsetDateTime::Second()
{
    uStackFrame __("Uno.Time.OffsetDateTime", "get_Second()");
    return uPtr(_localDateTime)->Second();
}

// public int get_Year() [instance] :1739
int OffsetDateTime::Year()
{
    uStackFrame __("Uno.Time.OffsetDateTime", "get_Year()");
    return uPtr(_localDateTime)->Year();
}

// public OffsetDateTime New(Uno.Time.LocalDateTime localDateTime, Uno.Time.Offset offset) [static] :1731
OffsetDateTime* OffsetDateTime::New1(::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::Offset offset)
{
    OffsetDateTime* obj1 = (OffsetDateTime*)uNew(OffsetDateTime_typeof());
    obj1->ctor_(localDateTime, offset);
    return obj1;
}

// public static operator ==(Uno.Time.OffsetDateTime left, Uno.Time.OffsetDateTime right) [static] :1821
bool OffsetDateTime::op_Equality(OffsetDateTime* left, OffsetDateTime* right)
{
    uStackFrame __("Uno.Time.OffsetDateTime", "==(Uno.Time.OffsetDateTime,Uno.Time.OffsetDateTime)");
    return uPtr(left)->Equals2(right);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/utilities/$.uno
// ------------------------------------------------------------------------------------------------------------

// internal static class Preconditions :104
// {
static void Preconditions_build(uType* type)
{
    ::STRINGS[8] = uString::Const("Value should be in range [");
    ::STRINGS[9] = uString::Const("-");
    ::STRINGS[10] = uString::Const("]");
}

uClassType* Preconditions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Time.Preconditions", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0);
    type->fp_build_ = Preconditions_build;
    return type;
}

// internal static void CheckArgumentRange(string paramName, int value, int minInclusive, int maxInclusive) :124
void Preconditions__CheckArgumentRange_fn(uString* paramName, int* value, int* minInclusive, int* maxInclusive)
{
    Preconditions::CheckArgumentRange(paramName, *value, *minInclusive, *maxInclusive);
}

// internal static void CheckArgumentRange(string paramName, long value, long minInclusive, long maxInclusive) :115
void Preconditions__CheckArgumentRange1_fn(uString* paramName, int64_t* value, int64_t* minInclusive, int64_t* maxInclusive)
{
    Preconditions::CheckArgumentRange1(paramName, *value, *minInclusive, *maxInclusive);
}

// internal static T CheckNotNull<T>(T argument, string paramName) :106
void Preconditions__CheckNotNull_fn(uType* __type, uObject* argument, uString* paramName, uObject** __retval)
{
    *__retval = Preconditions::CheckNotNull(__type, argument, paramName);
}

// internal static void CheckArgumentRange(string paramName, int value, int minInclusive, int maxInclusive) [static] :124
void Preconditions::CheckArgumentRange(uString* paramName, int value, int minInclusive, int maxInclusive)
{
    uStackFrame __("Uno.Time.Preconditions", "CheckArgumentRange(string,int,int,int)");

    if ((value < minInclusive) || (value > maxInclusive))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(paramName, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[8/*"Value shoul...*/], uBox<int>(::TYPES[6/*int*/], minInclusive)), ::STRINGS[9/*"-"*/]), uBox<int>(::TYPES[6/*int*/], maxInclusive)), ::STRINGS[10/*"]"*/])));
}

// internal static void CheckArgumentRange(string paramName, long value, long minInclusive, long maxInclusive) [static] :115
void Preconditions::CheckArgumentRange1(uString* paramName, int64_t value, int64_t minInclusive, int64_t maxInclusive)
{
    uStackFrame __("Uno.Time.Preconditions", "CheckArgumentRange(string,long,long,long)");

    if ((value < minInclusive) || (value > maxInclusive))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(paramName, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[8/*"Value shoul...*/], uBox<int64_t>(::TYPES[1/*long*/], minInclusive)), ::STRINGS[9/*"-"*/]), uBox<int64_t>(::TYPES[1/*long*/], maxInclusive)), ::STRINGS[10/*"]"*/])));
}

// internal static T CheckNotNull<T>(T argument, string paramName) [static] :106
uObject* Preconditions::CheckNotNull(uType* __type, uObject* argument, uString* paramName)
{
    uStackFrame __("Uno.Time.Preconditions", "CheckNotNull`1(T,string)");

    if (argument == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(paramName));

    return argument;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/$.uno
// --------------------------------------------------------------------------------------------------

// public sealed class ZonedDateTime :2191
// {
static void ZonedDateTime_build(uType* type)
{
    ::STRINGS[11] = uString::Const("zone");
    ::STRINGS[2] = uString::Const("calendar");
    ::STRINGS[12] = uString::Const("targetZone");
    ::TYPES[8] = ::g::Uno::Time::Preconditions_typeof()->MakeMethod(0/*CheckNotNull<Uno.Time.DateTimeZone>*/, ::g::Uno::Time::DateTimeZone_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Time::Preconditions_typeof()->MakeMethod(0/*CheckNotNull<Uno.Time.CalendarSystem>*/, ::g::Uno::Time::CalendarSystem_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(0/*Hash<Uno.Time.LocalDateTime>*/, ::g::Uno::Time::LocalDateTime_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(0/*Hash<Uno.Time.Offset>*/, ::g::Uno::Time::Offset_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Time::HashCodeHelper_typeof()->MakeMethod(0/*Hash<Uno.Time.DateTimeZone>*/, ::g::Uno::Time::DateTimeZone_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Time::Offset_typeof();
    type->SetFields(0,
        ::g::Uno::Time::LocalDateTime_typeof(), offsetof(::g::Uno::Time::ZonedDateTime, _localDateTime), 0,
        ::TYPES[10/*Uno.Time.Offset*/], offsetof(::g::Uno::Time::ZonedDateTime, _offset), 0,
        ::g::Uno::Time::DateTimeZone_typeof(), offsetof(::g::Uno::Time::ZonedDateTime, _zone), 0);
    type->Reflection.SetFunctions(16,
        new uFunction("get_Day", NULL, (void*)ZonedDateTime__get_Day_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("Equals", NULL, (void*)ZonedDateTime__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("get_Hour", NULL, (void*)ZonedDateTime__get_Hour_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_LocalDateTime", NULL, (void*)ZonedDateTime__get_LocalDateTime_fn, 0, false, ::g::Uno::Time::LocalDateTime_typeof(), 0),
        new uFunction("get_Minute", NULL, (void*)ZonedDateTime__get_Minute_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Month", NULL, (void*)ZonedDateTime__get_Month_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)ZonedDateTime__New1_fn, 0, true, type, 2, ::g::Uno::Time::Instant_typeof(), ::g::Uno::Time::DateTimeZone_typeof()),
        new uFunction(".ctor", NULL, (void*)ZonedDateTime__New2_fn, 0, true, type, 3, ::g::Uno::Time::Instant_typeof(), ::g::Uno::Time::DateTimeZone_typeof(), ::g::Uno::Time::CalendarSystem_typeof()),
        new uFunction(".ctor", NULL, (void*)ZonedDateTime__New3_fn, 0, true, type, 2, ::g::Uno::Time::LocalDateTime_typeof(), ::g::Uno::Time::DateTimeZone_typeof()),
        new uFunction("get_Now", NULL, (void*)ZonedDateTime__get_Now_fn, 0, true, type, 0),
        new uFunction("get_Offset", NULL, (void*)ZonedDateTime__get_Offset_fn, 0, false, ::TYPES[10/*Uno.Time.Offset*/], 0),
        new uFunction("get_Second", NULL, (void*)ZonedDateTime__get_Second_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("ToInstant", NULL, (void*)ZonedDateTime__ToInstant_fn, 0, false, ::g::Uno::Time::Instant_typeof(), 0),
        new uFunction("WithZone", NULL, (void*)ZonedDateTime__WithZone_fn, 0, false, type, 1, ::g::Uno::Time::DateTimeZone_typeof()),
        new uFunction("get_Year", NULL, (void*)ZonedDateTime__get_Year_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Zone", NULL, (void*)ZonedDateTime__get_Zone_fn, 0, false, ::g::Uno::Time::DateTimeZone_typeof(), 0));
}

uType* ZonedDateTime_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ZonedDateTime);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Time.ZonedDateTime", options);
    type->fp_build_ = ZonedDateTime_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))ZonedDateTime__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))ZonedDateTime__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))ZonedDateTime__ToString_fn;
    return type;
}

// public ZonedDateTime(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone) :2204
void ZonedDateTime__ctor__fn(ZonedDateTime* __this, ::g::Uno::Time::Instant* instant, ::g::Uno::Time::DateTimeZone* zone)
{
    __this->ctor_(*instant, zone);
}

// public ZonedDateTime(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone, Uno.Time.CalendarSystem calendar) :2208
void ZonedDateTime__ctor_1_fn(ZonedDateTime* __this, ::g::Uno::Time::Instant* instant, ::g::Uno::Time::DateTimeZone* zone, ::g::Uno::Time::CalendarSystem* calendar)
{
    __this->ctor_1(*instant, zone, calendar);
}

// public ZonedDateTime(Uno.Time.LocalDateTime localDateTime, Uno.Time.DateTimeZone zone) :2217
void ZonedDateTime__ctor_2_fn(ZonedDateTime* __this, ::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::DateTimeZone* zone)
{
    __this->ctor_2(localDateTime, zone);
}

// public int get_Day() :2267
void ZonedDateTime__get_Day_fn(ZonedDateTime* __this, int* __retval)
{
    *__retval = __this->Day();
}

// public override sealed bool Equals(object obj) :2302
void ZonedDateTime__Equals_fn(ZonedDateTime* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.Time.ZonedDateTime", "Equals(object)");

    if (uIs(obj, __this->__type))
        return *__retval = __this->Equals2(uCast<ZonedDateTime*>(obj, __this->__type)), void();

    return *__retval = false, void();
}

// public bool Equals(Uno.Time.ZonedDateTime other) :2311
void ZonedDateTime__Equals2_fn(ZonedDateTime* __this, ZonedDateTime* other, bool* __retval)
{
    *__retval = __this->Equals2(other);
}

// public override sealed int GetHashCode() :2293
void ZonedDateTime__GetHashCode_fn(ZonedDateTime* __this, int* __retval)
{
    uStackFrame __("Uno.Time.ZonedDateTime", "GetHashCode()");
    int ret7;
    int ret8;
    int ret9;
    int hash = ::g::Uno::Time::HashCodeHelper::Initialize();
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[7/*Uno.Time.HashCodeHelper.Hash<Uno.Time.LocalDateTime>*/], uCRef<int>(hash), __this->_localDateTime, &ret7), ret7);
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[2/*Uno.Time.HashCodeHelper.Hash<Uno.Time.Offset>*/], uCRef<int>(hash), uCRef(__this->_offset), &ret8), ret8);
    hash = (::g::Uno::Time::HashCodeHelper__Hash_fn(::TYPES[9/*Uno.Time.HashCodeHelper.Hash<Uno.Time.DateTimeZone>*/], uCRef<int>(hash), __this->_zone, &ret9), ret9);
    return *__retval = hash, void();
}

// public int get_Hour() :2273
void ZonedDateTime__get_Hour_fn(ZonedDateTime* __this, int* __retval)
{
    *__retval = __this->Hour();
}

// public Uno.Time.LocalDateTime get_LocalDateTime() :2239
void ZonedDateTime__get_LocalDateTime_fn(ZonedDateTime* __this, ::g::Uno::Time::LocalDateTime** __retval)
{
    *__retval = __this->LocalDateTime();
}

// public int get_Minute() :2277
void ZonedDateTime__get_Minute_fn(ZonedDateTime* __this, int* __retval)
{
    *__retval = __this->Minute();
}

// public int get_Month() :2261
void ZonedDateTime__get_Month_fn(ZonedDateTime* __this, int* __retval)
{
    *__retval = __this->Month();
}

// public ZonedDateTime New(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone) :2204
void ZonedDateTime__New1_fn(::g::Uno::Time::Instant* instant, ::g::Uno::Time::DateTimeZone* zone, ZonedDateTime** __retval)
{
    *__retval = ZonedDateTime::New1(*instant, zone);
}

// public ZonedDateTime New(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone, Uno.Time.CalendarSystem calendar) :2208
void ZonedDateTime__New2_fn(::g::Uno::Time::Instant* instant, ::g::Uno::Time::DateTimeZone* zone, ::g::Uno::Time::CalendarSystem* calendar, ZonedDateTime** __retval)
{
    *__retval = ZonedDateTime::New2(*instant, zone, calendar);
}

// public ZonedDateTime New(Uno.Time.LocalDateTime localDateTime, Uno.Time.DateTimeZone zone) :2217
void ZonedDateTime__New3_fn(::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::DateTimeZone* zone, ZonedDateTime** __retval)
{
    *__retval = ZonedDateTime::New3(localDateTime, zone);
}

// public static Uno.Time.ZonedDateTime get_Now() :2227
void ZonedDateTime__get_Now_fn(ZonedDateTime** __retval)
{
    *__retval = ZonedDateTime::Now();
}

// public Uno.Time.Offset get_Offset() :2235
void ZonedDateTime__get_Offset_fn(ZonedDateTime* __this, ::g::Uno::Time::Offset* __retval)
{
    *__retval = __this->Offset();
}

// public int get_Second() :2279
void ZonedDateTime__get_Second_fn(ZonedDateTime* __this, int* __retval)
{
    *__retval = __this->Second();
}

// public Uno.Time.Instant ToInstant() :2386
void ZonedDateTime__ToInstant_fn(ZonedDateTime* __this, ::g::Uno::Time::Instant* __retval)
{
    *__retval = __this->ToInstant();
}

// public override sealed string ToString() :2376
void ZonedDateTime__ToString_fn(ZonedDateTime* __this, uString** __retval)
{
    uStackFrame __("Uno.Time.ZonedDateTime", "ToString()");
    ::g::Uno::Time::Offset ind1;
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uPtr(__this->_localDateTime)->ToString(), uPtr(__this->_zone)->ToString()), (ind1 = __this->_offset, (&ind1))->ToString(::TYPES[10/*Uno.Time.Offset*/])), void();
}

// public Uno.Time.ZonedDateTime WithZone(Uno.Time.DateTimeZone targetZone) :2287
void ZonedDateTime__WithZone_fn(ZonedDateTime* __this, ::g::Uno::Time::DateTimeZone* targetZone, ZonedDateTime** __retval)
{
    *__retval = __this->WithZone(targetZone);
}

// public int get_Year() :2253
void ZonedDateTime__get_Year_fn(ZonedDateTime* __this, int* __retval)
{
    *__retval = __this->Year();
}

// public Uno.Time.DateTimeZone get_Zone() :2237
void ZonedDateTime__get_Zone_fn(ZonedDateTime* __this, ::g::Uno::Time::DateTimeZone** __retval)
{
    *__retval = __this->Zone();
}

// public ZonedDateTime(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone) [instance] :2204
void ZonedDateTime::ctor_(::g::Uno::Time::Instant instant, ::g::Uno::Time::DateTimeZone* zone)
{
    uStackFrame __("Uno.Time.ZonedDateTime", ".ctor(Uno.Time.Instant,Uno.Time.DateTimeZone)");
    ctor_1(instant, zone, ::g::Uno::Time::CalendarSystem::Iso());
}

// public ZonedDateTime(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone, Uno.Time.CalendarSystem calendar) [instance] :2208
void ZonedDateTime::ctor_1(::g::Uno::Time::Instant instant, ::g::Uno::Time::DateTimeZone* zone, ::g::Uno::Time::CalendarSystem* calendar)
{
    uStackFrame __("Uno.Time.ZonedDateTime", ".ctor(Uno.Time.Instant,Uno.Time.DateTimeZone,Uno.Time.CalendarSystem)");
    ::g::Uno::Time::Preconditions::CheckNotNull(::TYPES[8/*Uno.Time.Preconditions.CheckNotNull<Uno.Time.DateTimeZone>*/], zone, ::STRINGS[11/*"zone"*/]);
    ::g::Uno::Time::Preconditions::CheckNotNull(::TYPES[3/*Uno.Time.Preconditions.CheckNotNull<Uno.Time.CalendarSystem>*/], calendar, ::STRINGS[2/*"calendar"*/]);
    _offset = uPtr(zone)->GetUtcOffset(::g::Uno::Time::LocalDateTime::New10(instant, calendar));
    _localDateTime = ::g::Uno::Time::LocalDateTime::New10(instant.Plus1(_offset), calendar);
    _zone = zone;
}

// public ZonedDateTime(Uno.Time.LocalDateTime localDateTime, Uno.Time.DateTimeZone zone) [instance] :2217
void ZonedDateTime::ctor_2(::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::DateTimeZone* zone)
{
    uStackFrame __("Uno.Time.ZonedDateTime", ".ctor(Uno.Time.LocalDateTime,Uno.Time.DateTimeZone)");
    ::g::Uno::Time::Preconditions::CheckNotNull(::TYPES[8/*Uno.Time.Preconditions.CheckNotNull<Uno.Time.DateTimeZone>*/], zone, ::STRINGS[11/*"zone"*/]);
    _offset = uPtr(zone)->GetUtcOffset(localDateTime);
    _localDateTime = localDateTime;
    _zone = zone;
}

// public int get_Day() [instance] :2267
int ZonedDateTime::Day()
{
    uStackFrame __("Uno.Time.ZonedDateTime", "get_Day()");
    return uPtr(_localDateTime)->Day();
}

// public bool Equals(Uno.Time.ZonedDateTime other) [instance] :2311
bool ZonedDateTime::Equals2(ZonedDateTime* other)
{
    uStackFrame __("Uno.Time.ZonedDateTime", "Equals(Uno.Time.ZonedDateTime)");
    return (::g::Uno::Time::LocalDateTime::op_Equality(LocalDateTime(), uPtr(other)->LocalDateTime()) && ::g::Uno::Time::Offset__op_Equality(Offset(), uPtr(other)->Offset())) && uPtr(Zone())->Equals2(uPtr(other)->Zone());
}

// public int get_Hour() [instance] :2273
int ZonedDateTime::Hour()
{
    uStackFrame __("Uno.Time.ZonedDateTime", "get_Hour()");
    return uPtr(_localDateTime)->Hour();
}

// public Uno.Time.LocalDateTime get_LocalDateTime() [instance] :2239
::g::Uno::Time::LocalDateTime* ZonedDateTime::LocalDateTime()
{
    return _localDateTime;
}

// public int get_Minute() [instance] :2277
int ZonedDateTime::Minute()
{
    uStackFrame __("Uno.Time.ZonedDateTime", "get_Minute()");
    return uPtr(_localDateTime)->Minute();
}

// public int get_Month() [instance] :2261
int ZonedDateTime::Month()
{
    uStackFrame __("Uno.Time.ZonedDateTime", "get_Month()");
    return uPtr(_localDateTime)->Month();
}

// public Uno.Time.Offset get_Offset() [instance] :2235
::g::Uno::Time::Offset ZonedDateTime::Offset()
{
    return _offset;
}

// public int get_Second() [instance] :2279
int ZonedDateTime::Second()
{
    uStackFrame __("Uno.Time.ZonedDateTime", "get_Second()");
    return uPtr(_localDateTime)->Second();
}

// public Uno.Time.Instant ToInstant() [instance] :2386
::g::Uno::Time::Instant ZonedDateTime::ToInstant()
{
    uStackFrame __("Uno.Time.ZonedDateTime", "ToInstant()");
    return uPtr(_localDateTime)->Instant().Minus2(_offset);
}

// public Uno.Time.ZonedDateTime WithZone(Uno.Time.DateTimeZone targetZone) [instance] :2287
ZonedDateTime* ZonedDateTime::WithZone(::g::Uno::Time::DateTimeZone* targetZone)
{
    uStackFrame __("Uno.Time.ZonedDateTime", "WithZone(Uno.Time.DateTimeZone)");
    ::g::Uno::Time::Preconditions::CheckNotNull(::TYPES[8/*Uno.Time.Preconditions.CheckNotNull<Uno.Time.DateTimeZone>*/], targetZone, ::STRINGS[12/*"targetZone"*/]);
    return ZonedDateTime::New2(ToInstant(), targetZone, uPtr(_localDateTime)->Calendar());
}

// public int get_Year() [instance] :2253
int ZonedDateTime::Year()
{
    uStackFrame __("Uno.Time.ZonedDateTime", "get_Year()");
    return uPtr(_localDateTime)->Year();
}

// public Uno.Time.DateTimeZone get_Zone() [instance] :2237
::g::Uno::Time::DateTimeZone* ZonedDateTime::Zone()
{
    ::g::Uno::Time::DateTimeZone* ind2 = _zone;
    return (ind2 != NULL) ? ind2 : (::g::Uno::Time::DateTimeZone*)::g::Uno::Time::DateTimeZone::Utc();
}

// public ZonedDateTime New(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone) [static] :2204
ZonedDateTime* ZonedDateTime::New1(::g::Uno::Time::Instant instant, ::g::Uno::Time::DateTimeZone* zone)
{
    ZonedDateTime* obj4 = (ZonedDateTime*)uNew(ZonedDateTime_typeof());
    obj4->ctor_(instant, zone);
    return obj4;
}

// public ZonedDateTime New(Uno.Time.Instant instant, Uno.Time.DateTimeZone zone, Uno.Time.CalendarSystem calendar) [static] :2208
ZonedDateTime* ZonedDateTime::New2(::g::Uno::Time::Instant instant, ::g::Uno::Time::DateTimeZone* zone, ::g::Uno::Time::CalendarSystem* calendar)
{
    ZonedDateTime* obj5 = (ZonedDateTime*)uNew(ZonedDateTime_typeof());
    obj5->ctor_1(instant, zone, calendar);
    return obj5;
}

// public ZonedDateTime New(Uno.Time.LocalDateTime localDateTime, Uno.Time.DateTimeZone zone) [static] :2217
ZonedDateTime* ZonedDateTime::New3(::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::DateTimeZone* zone)
{
    ZonedDateTime* obj6 = (ZonedDateTime*)uNew(ZonedDateTime_typeof());
    obj6->ctor_2(localDateTime, zone);
    return obj6;
}

// public static Uno.Time.ZonedDateTime get_Now() [static] :2227
ZonedDateTime* ZonedDateTime::Now()
{
    uStackFrame __("Uno.Time.ZonedDateTime", "get_Now()");
    int64_t ticks = ::g::Uno::Diagnostics::Clock::GetTicks();
    return ZonedDateTime::New1(::g::Uno::Time::Instant__New1(ticks), ::g::Uno::Time::DeviceTimeZone::New1());
}
// }

}}} // ::g::Uno::Time
