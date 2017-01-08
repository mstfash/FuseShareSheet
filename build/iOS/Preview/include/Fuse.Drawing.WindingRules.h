// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Drawing{struct WindingRules;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public static class WindingRules :573
// {
uClassType* WindingRules_typeof();
void WindingRules__AbsoluteGreaterOrEqualsTwo_fn(int* n, bool* __retval);
void WindingRules__Negative_fn(int* n, bool* __retval);
void WindingRules__NonZero_fn(int* n, bool* __retval);
void WindingRules__Odd_fn(int* n, bool* __retval);
void WindingRules__Positive_fn(int* n, bool* __retval);

struct WindingRules : uObject
{
    static bool AbsoluteGreaterOrEqualsTwo(int n);
    static bool Negative(int n);
    static bool NonZero(int n);
    static bool Odd(int n);
    static bool Positive(int n);
};
// }

}}} // ::g::Fuse::Drawing
