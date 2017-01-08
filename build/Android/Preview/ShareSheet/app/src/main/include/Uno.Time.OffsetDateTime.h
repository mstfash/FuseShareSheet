// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Time.Offset.h>
namespace g{namespace Uno{namespace Time{struct LocalDateTime;}}}
namespace g{namespace Uno{namespace Time{struct OffsetDateTime;}}}

namespace g{
namespace Uno{
namespace Time{

// public sealed class OffsetDateTime :1726
// {
uType* OffsetDateTime_typeof();
void OffsetDateTime__ctor__fn(OffsetDateTime* __this, ::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::Offset* offset);
void OffsetDateTime__get_Day_fn(OffsetDateTime* __this, int* __retval);
void OffsetDateTime__Equals_fn(OffsetDateTime* __this, uObject* obj, bool* __retval);
void OffsetDateTime__Equals2_fn(OffsetDateTime* __this, OffsetDateTime* other, bool* __retval);
void OffsetDateTime__GetHashCode_fn(OffsetDateTime* __this, int* __retval);
void OffsetDateTime__get_Hour_fn(OffsetDateTime* __this, int* __retval);
void OffsetDateTime__get_Millisecond_fn(OffsetDateTime* __this, int* __retval);
void OffsetDateTime__get_Minute_fn(OffsetDateTime* __this, int* __retval);
void OffsetDateTime__get_Month_fn(OffsetDateTime* __this, int* __retval);
void OffsetDateTime__New1_fn(::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::Offset* offset, OffsetDateTime** __retval);
void OffsetDateTime__get_Offset_fn(OffsetDateTime* __this, ::g::Uno::Time::Offset* __retval);
void OffsetDateTime__op_Equality_fn(OffsetDateTime* left, OffsetDateTime* right, bool* __retval);
void OffsetDateTime__get_Second_fn(OffsetDateTime* __this, int* __retval);
void OffsetDateTime__ToString_fn(OffsetDateTime* __this, uString** __retval);
void OffsetDateTime__get_Year_fn(OffsetDateTime* __this, int* __retval);

struct OffsetDateTime : uObject
{
    uStrong< ::g::Uno::Time::LocalDateTime*> _localDateTime;
    ::g::Uno::Time::Offset _offset;

    void ctor_(::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::Offset offset);
    int Day();
    bool Equals2(OffsetDateTime* other);
    int Hour();
    int Millisecond();
    int Minute();
    int Month();
    ::g::Uno::Time::Offset Offset();
    int Second();
    int Year();
    static OffsetDateTime* New1(::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::Offset offset);
    static bool op_Equality(OffsetDateTime* left, OffsetDateTime* right);
};
// }

}}} // ::g::Uno::Time
