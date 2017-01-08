// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{struct DateTimeZone;}}}
namespace g{namespace Uno{namespace Time{struct LocalDateTime;}}}
namespace g{namespace Uno{namespace Time{struct Offset;}}}
namespace g{namespace Uno{namespace Time{struct ZonedDateTime;}}}

namespace g{
namespace Uno{
namespace Time{

// public abstract class DateTimeZone :308
// {
struct DateTimeZone_type : uType
{
    void(*fp_EqualsImpl)(::g::Uno::Time::DateTimeZone*, ::g::Uno::Time::DateTimeZone*, bool*);
    void(*fp_GetUtcOffset)(::g::Uno::Time::DateTimeZone*, ::g::Uno::Time::LocalDateTime*, ::g::Uno::Time::Offset*);
};

DateTimeZone_type* DateTimeZone_typeof();
void DateTimeZone__ctor__fn(DateTimeZone* __this, uString* id1, bool* isFixed1, ::g::Uno::Time::Offset* minOffset, ::g::Uno::Time::Offset* maxOffset);
void DateTimeZone__AtStrictly_fn(DateTimeZone* __this, ::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::ZonedDateTime** __retval);
void DateTimeZone__Equals_fn(DateTimeZone* __this, uObject* obj, bool* __retval);
void DateTimeZone__Equals2_fn(DateTimeZone* __this, DateTimeZone* obj, bool* __retval);
void DateTimeZone__ForOffset_fn(::g::Uno::Time::Offset* offset, DateTimeZone** __retval);
void DateTimeZone__GetHashCode_fn(DateTimeZone* __this, int* __retval);
void DateTimeZone__get_Id_fn(DateTimeZone* __this, uString** __retval);
void DateTimeZone__get_MaxOffset_fn(DateTimeZone* __this, ::g::Uno::Time::Offset* __retval);
void DateTimeZone__get_MinOffset_fn(DateTimeZone* __this, ::g::Uno::Time::Offset* __retval);
void DateTimeZone__ToString_fn(DateTimeZone* __this, uString** __retval);
void DateTimeZone__get_Utc_fn(DateTimeZone** __retval);

struct DateTimeZone : uObject
{
    uStrong<uString*> id;
    bool isFixed;
    int64_t maxOffsetTicks;
    int64_t minOffsetTicks;
    static uSStrong<DateTimeZone*> UtcZone_;
    static uSStrong<DateTimeZone*>& UtcZone() { return DateTimeZone_typeof()->Init(), UtcZone_; }

    void ctor_(uString* id1, bool isFixed1, ::g::Uno::Time::Offset minOffset, ::g::Uno::Time::Offset maxOffset);
    ::g::Uno::Time::ZonedDateTime* AtStrictly(::g::Uno::Time::LocalDateTime* localDateTime);
    bool Equals2(DateTimeZone* obj);
    bool EqualsImpl(DateTimeZone* zone) { bool __retval; return (((DateTimeZone_type*)__type)->fp_EqualsImpl)(this, zone, &__retval), __retval; }
    ::g::Uno::Time::Offset GetUtcOffset(::g::Uno::Time::LocalDateTime* dateTime);
    uString* Id();
    ::g::Uno::Time::Offset MaxOffset();
    ::g::Uno::Time::Offset MinOffset();
    static DateTimeZone* ForOffset(::g::Uno::Time::Offset offset);
    static DateTimeZone* Utc();
};

}}} // ::g::Uno::Time

#include <Uno.Time.Offset.h>

namespace g{
namespace Uno{
namespace Time{

inline ::g::Uno::Time::Offset DateTimeZone::GetUtcOffset(::g::Uno::Time::LocalDateTime* dateTime) { ::g::Uno::Time::Offset __retval; return (((DateTimeZone_type*)__type)->fp_GetUtcOffset)(this, dateTime, &__retval), __retval; }
// }

}}} // ::g::Uno::Time
