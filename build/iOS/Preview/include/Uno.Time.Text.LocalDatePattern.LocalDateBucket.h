// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct LocalDatePattern__LocalDateBucket;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// private sealed class LocalDatePattern.LocalDateBucket :164
// {
uType* LocalDatePattern__LocalDateBucket_typeof();
void LocalDatePattern__LocalDateBucket__ctor__fn(LocalDatePattern__LocalDateBucket* __this);
void LocalDatePattern__LocalDateBucket__New1_fn(LocalDatePattern__LocalDateBucket** __retval);

struct LocalDatePattern__LocalDateBucket : uObject
{
    int Day;
    int Month;
    int Sign;
    int Year;

    void ctor_();
    static LocalDatePattern__LocalDateBucket* New1();
};
// }

}}}} // ::g::Uno::Time::Text
