// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/diagnostics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Diagnostics{struct ProfileEvent;}}}

namespace g{
namespace Uno{
namespace Diagnostics{

// public abstract class ProfileEvent :397
// {
struct ProfileEvent_type : uType
{
    void(*fp_get_Type)(::g::Uno::Diagnostics::ProfileEvent*, int*);
};

ProfileEvent_type* ProfileEvent_typeof();
void ProfileEvent__ctor__fn(ProfileEvent* __this);

struct ProfileEvent : uObject
{
    double TimeStamp;

    void ctor_();
    int Type() { int __retval; return (((ProfileEvent_type*)__type)->fp_get_Type)(this, &__retval), __retval; }
};
// }

}}} // ::g::Uno::Diagnostics
