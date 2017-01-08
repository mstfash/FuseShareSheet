// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct SByte4;}}

namespace g{
namespace Uno{

// public intrinsic struct SByte4 :6317
// {
uStructType* SByte4_typeof();
void SByte4__ctor_1_fn(SByte4* __this, int8_t* x, int8_t* y, int8_t* z, int8_t* w);
void SByte4__Equals_fn(SByte4* __this, uType* __type, uObject* o, bool* __retval);
void SByte4__GetHashCode_fn(SByte4* __this, uType* __type, int* __retval);
void SByte4__New2_fn(int8_t* x, int8_t* y, int8_t* z, int8_t* w, SByte4* __retval);
void SByte4__ToString_fn(SByte4* __this, uType* __type, uString** __retval);

struct SByte4
{
    int8_t X;
    int8_t Y;
    int8_t Z;
    int8_t W;

    void ctor_1(int8_t x, int8_t y, int8_t z, int8_t w);
    bool Equals(uType* __type, uObject* o) { bool __retval; return SByte4__Equals_fn(this, __type, o, &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return SByte4__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return SByte4__ToString_fn(this, __type, &__retval), __retval; }
};

SByte4 SByte4__New2(int8_t x, int8_t y, int8_t z, int8_t w);
// }

}} // ::g::Uno
