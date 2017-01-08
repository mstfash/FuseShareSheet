// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{namespace Edit{struct Caret;}}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Edit{

// public struct Caret :198
// {
uStructType* Caret_typeof();
void Caret__ctor__fn(Caret* __this, int* pos, int* side);
void Caret__Equals_fn(Caret* __this, uType* __type, uObject* o, bool* __retval);
void Caret__GetHashCode_fn(Caret* __this, uType* __type, int* __retval);
void Caret__Max_fn(Caret* a, Caret* b, Caret* __retval);
void Caret__Min_fn(Caret* a, Caret* b, Caret* __retval);
void Caret__New1_fn(int* pos, int* side, Caret* __retval);
void Caret__op_Equality_fn(Caret* a, Caret* b, bool* __retval);
void Caret__op_GreaterThan_fn(Caret* a, Caret* b, bool* __retval);
void Caret__op_GreaterThanOrEqual_fn(Caret* a, Caret* b, bool* __retval);
void Caret__op_Inequality_fn(Caret* a, Caret* b, bool* __retval);
void Caret__op_LessThan_fn(Caret* a, Caret* b, bool* __retval);
void Caret__op_LessThanOrEqual_fn(Caret* a, Caret* b, bool* __retval);
void Caret__ToString_fn(Caret* __this, uType* __type, uString** __retval);

struct Caret
{
    int Pos;
    int Side;

    void ctor_(int pos, int side);
    bool Equals(uType* __type, uObject* o) { bool __retval; return Caret__Equals_fn(this, __type, o, &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return Caret__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return Caret__ToString_fn(this, __type, &__retval), __retval; }
};

Caret Caret__Max(Caret a, Caret b);
Caret Caret__Min(Caret a, Caret b);
Caret Caret__New1(int pos, int side);
bool Caret__op_Equality(Caret a, Caret b);
bool Caret__op_GreaterThan(Caret a, Caret b);
bool Caret__op_GreaterThanOrEqual(Caret a, Caret b);
bool Caret__op_Inequality(Caret a, Caret b);
bool Caret__op_LessThan(Caret a, Caret b);
bool Caret__op_LessThanOrEqual(Caret a, Caret b);
// }

}}}} // ::g::Fuse::Text::Edit
