// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{struct ZonedDateTime;}}}
namespace g{namespace Uno{struct DateTime;}}

namespace g{
namespace Uno{

// public sealed class DateTime :1638
// {
uType* DateTime_typeof();
void DateTime__ctor__fn(DateTime* __this);
void DateTime__New1_fn(DateTime** __retval);
void DateTime__get_Now_fn(::g::Uno::Time::ZonedDateTime** __retval);
void DateTime__get_UtcNow_fn(::g::Uno::Time::ZonedDateTime** __retval);

struct DateTime : uObject
{
    void ctor_();
    static DateTime* New1();
    static ::g::Uno::Time::ZonedDateTime* Now();
    static ::g::Uno::Time::ZonedDateTime* UtcNow();
};
// }

}} // ::g::Uno
