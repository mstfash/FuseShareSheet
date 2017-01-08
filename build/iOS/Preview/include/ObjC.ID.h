// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/exporttargetinterop/foreign/objc/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <objc/objc.h>
#include <Uno.Object.h>

namespace g{
namespace ObjC{

// public extern struct ID :9
// {
uStructType* ID_typeof();
void ID__Equals_fn(::id* __this, uType* __type, uObject* o, bool* __retval);
void ID__GetHashCode_fn(::id* __this, uType* __type, int* __retval);
void ID__op_Equality_fn(::id* a, ::id* b, bool* __retval);

struct ID
{
    static ::id Null_;
    static ::id& Null() { return Null_; }

    static bool Equals(::id __this, uType* __type, uObject* o) { bool __retval; return ID__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int GetHashCode(::id __this, uType* __type) { int __retval; return ID__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static bool op_Equality(::id a, ::id b);
};
// }

}} // ::g::ObjC
