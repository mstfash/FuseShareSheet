// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct SByte2;}}

namespace g{
namespace Uno{

// public intrinsic struct SByte2 :6259
// {
uStructType* SByte2_typeof();
void SByte2__Equals_fn(SByte2* __this, uType* __type, uObject* o, bool* __retval);
void SByte2__GetHashCode_fn(SByte2* __this, uType* __type, int* __retval);
void SByte2__ToString_fn(SByte2* __this, uType* __type, uString** __retval);

struct SByte2
{
    int8_t X;
    int8_t Y;

    bool Equals(uType* __type, uObject* o) { bool __retval; return SByte2__Equals_fn(this, __type, o, &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return SByte2__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return SByte2__ToString_fn(this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
