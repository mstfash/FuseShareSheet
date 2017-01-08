// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct TwoFinger__Point;}}}}

namespace g{
namespace Fuse{
namespace Gestures{
namespace Internal{

// private sealed class TwoFinger.Point :1321
// {
uType* TwoFinger__Point_typeof();
void TwoFinger__Point__ctor__fn(TwoFinger__Point* __this);
void TwoFinger__Point__New1_fn(TwoFinger__Point** __retval);

struct TwoFinger__Point : uObject
{
    ::g::Uno::Float2 Current;
    int Down;
    ::g::Uno::Float2 Previous;
    ::g::Uno::Float2 Start;

    void ctor_();
    static TwoFinger__Point* New1();
};
// }

}}}} // ::g::Fuse::Gestures::Internal
