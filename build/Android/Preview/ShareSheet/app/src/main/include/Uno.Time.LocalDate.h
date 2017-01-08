// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{struct CalendarSystem;}}}
namespace g{namespace Uno{namespace Time{struct LocalDate;}}}
namespace g{namespace Uno{namespace Time{struct LocalDateTime;}}}

namespace g{
namespace Uno{
namespace Time{

// public sealed class LocalDate :792
// {
uType* LocalDate_typeof();
void LocalDate__ctor__fn(LocalDate* __this, int* year, int* month, int* day);
void LocalDate__ctor_1_fn(LocalDate* __this, int* year, int* month, int* day, ::g::Uno::Time::CalendarSystem* calendar);
void LocalDate__ctor_4_fn(LocalDate* __this, ::g::Uno::Time::LocalDateTime* localTime);
void LocalDate__get_Day_fn(LocalDate* __this, int* __retval);
void LocalDate__Equals_fn(LocalDate* __this, uObject* obj, bool* __retval);
void LocalDate__GetHashCode_fn(LocalDate* __this, int* __retval);
void LocalDate__get_Month_fn(LocalDate* __this, int* __retval);
void LocalDate__New1_fn(int* year, int* month, int* day, LocalDate** __retval);
void LocalDate__op_Equality_fn(LocalDate* lhs, LocalDate* rhs, bool* __retval);
void LocalDate__ToString_fn(LocalDate* __this, uString** __retval);
void LocalDate__get_Year_fn(LocalDate* __this, int* __retval);

struct LocalDate : uObject
{
    uStrong< ::g::Uno::Time::LocalDateTime*> _localTime;

    void ctor_(int year, int month, int day);
    void ctor_1(int year, int month, int day, ::g::Uno::Time::CalendarSystem* calendar);
    void ctor_4(::g::Uno::Time::LocalDateTime* localTime);
    int Day();
    int Month();
    int Year();
    static LocalDate* New1(int year, int month, int day);
    static bool op_Equality(LocalDate* lhs, LocalDate* rhs);
};
// }

}}} // ::g::Uno::Time
