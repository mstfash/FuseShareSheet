// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Short2;}}

namespace g{
namespace Uno{

// public intrinsic struct Short2 :6510
// {
uStructType* Short2_typeof();
void Short2__ctor_1_fn(Short2* __this, int16_t* x, int16_t* y);
void Short2__Equals_fn(Short2* __this, uType* __type, uObject* o, bool* __retval);
void Short2__GetHashCode_fn(Short2* __this, uType* __type, int* __retval);
void Short2__New2_fn(int16_t* x, int16_t* y, Short2* __retval);
void Short2__ToString_fn(Short2* __this, uType* __type, uString** __retval);

struct Short2
{
    int16_t X;
    int16_t Y;

    void ctor_1(int16_t x, int16_t y);
    bool Equals(uType* __type, uObject* o) { bool __retval; return Short2__Equals_fn(this, __type, o, &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return Short2__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return Short2__ToString_fn(this, __type, &__retval), __retval; }
};

Short2 Short2__New2(int16_t x, int16_t y);
// }

}} // ::g::Uno
