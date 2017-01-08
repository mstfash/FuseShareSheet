// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct UShort4;}}

namespace g{
namespace Uno{

// public intrinsic struct UShort4 :8539
// {
uStructType* UShort4_typeof();
void UShort4__ctor_1_fn(UShort4* __this, uint16_t* x, uint16_t* y, uint16_t* z, uint16_t* w);
void UShort4__Equals_fn(UShort4* __this, uType* __type, uObject* o, bool* __retval);
void UShort4__GetHashCode_fn(UShort4* __this, uType* __type, int* __retval);
void UShort4__New2_fn(uint16_t* x, uint16_t* y, uint16_t* z, uint16_t* w, UShort4* __retval);
void UShort4__ToString_fn(UShort4* __this, uType* __type, uString** __retval);

struct UShort4
{
    uint16_t X;
    uint16_t Y;
    uint16_t Z;
    uint16_t W;

    void ctor_1(uint16_t x, uint16_t y, uint16_t z, uint16_t w);
    bool Equals(uType* __type, uObject* o) { bool __retval; return UShort4__Equals_fn(this, __type, o, &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return UShort4__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return UShort4__ToString_fn(this, __type, &__retval), __retval; }
};

UShort4 UShort4__New2(uint16_t x, uint16_t y, uint16_t z, uint16_t w);
// }

}} // ::g::Uno
