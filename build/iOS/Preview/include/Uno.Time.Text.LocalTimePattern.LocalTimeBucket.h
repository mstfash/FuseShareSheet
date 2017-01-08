// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct LocalTimePattern__LocalTimeBucket;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// private sealed class LocalTimePattern.LocalTimeBucket :436
// {
uType* LocalTimePattern__LocalTimeBucket_typeof();
void LocalTimePattern__LocalTimeBucket__ctor__fn(LocalTimePattern__LocalTimeBucket* __this);
void LocalTimePattern__LocalTimeBucket__New1_fn(LocalTimePattern__LocalTimeBucket** __retval);

struct LocalTimePattern__LocalTimeBucket : uObject
{
    int Hour;
    int Millisecond;
    int Minute;
    int Second;

    void ctor_();
    static LocalTimePattern__LocalTimeBucket* New1();
};
// }

}}}} // ::g::Uno::Time::Text
