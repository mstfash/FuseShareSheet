// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.IEquatable-1.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Optional;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public struct Optional<T> :356
// {
struct Optional1_type : uStructType
{
    ::g::Outracks::Simulator::IEquatable interface0;
};

Optional1_type* Optional1_typeof();
void Optional1__ctor__fn(uTRef __this, uType* __type, bool* hasValue, void* value);
void Optional1__Equals_fn(uTRef __this, uType* __type, uObject* obj, bool* __retval);
void Optional1__Equals2_fn(uTRef __this, uType* __type, void* other, bool* __retval);
void Optional1__GetHashCode_fn(uTRef __this, uType* __type, int* __retval);
void Optional1__get_HasValue_fn(uTRef __this, uType* __type, bool* __retval);
void Optional1__New1_fn(uType* __type, bool* hasValue, void* value, uTRef __retval);
void Optional1__op_Equality_fn(uType* __type, void* left, void* right, bool* __retval);
void Optional1__op_Implicit_fn(uType* __type, ::g::Outracks::Simulator::Bytecode::Optional* value, uTRef __retval);
void Optional1__op_Implicit1_fn(uType* __type, void* value, uTRef __retval);
void Optional1__op_Inequality_fn(uType* __type, void* left, void* right, bool* __retval);
void Optional1__ToString_fn(uTRef __this, uType* __type, uString** __retval);
void Optional1__get_Value_fn(uTRef __this, uType* __type, uTRef __retval);

template<class T>
struct Optional1
{
    bool _hasValue;
    T _value;

    void ctor_(uType* __type, bool hasValue, T value) { Optional1__ctor__fn(this, __type, &hasValue, uConstrain(__type->T(0), value)); }
    bool Equals(uType* __type, uObject* obj) { bool __retval; return Optional1__Equals_fn(this, __type, obj, &__retval), __retval; }
    bool Equals2(uType* __type, Optional1<T> other) { bool __retval; return Optional1__Equals2_fn(this, __type, uConstrain(__type, other), &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return Optional1__GetHashCode_fn(this, __type, &__retval), __retval; }
    bool HasValue(uType* __type) { bool __retval; return Optional1__get_HasValue_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return Optional1__ToString_fn(this, __type, &__retval), __retval; }
    T Value(uType* __type) { T __retval; return Optional1__get_Value_fn(this, __type, &__retval), __retval; }
};

template<class T>
Optional1<T> Optional1__New1(uType* __type, bool hasValue, T value) { Optional1<T> __retval; return Optional1__New1_fn(__type, &hasValue, uConstrain(__type->T(0), value), &__retval), __retval; }
template<class T>
bool Optional1__op_Equality(uType* __type, Optional1<T> left, Optional1<T> right) { bool __retval; return Optional1__op_Equality_fn(__type, uConstrain(__type, left), uConstrain(__type, right), &__retval), __retval; }
template<class T>
Optional1<T> Optional1__op_Implicit(uType* __type, ::g::Outracks::Simulator::Bytecode::Optional* value) { Optional1<T> __retval; return Optional1__op_Implicit_fn(__type, value, &__retval), __retval; }
template<class T>
Optional1<T> Optional1__op_Implicit1(uType* __type, T value) { Optional1<T> __retval; return Optional1__op_Implicit1_fn(__type, uConstrain(__type->T(0), value), &__retval), __retval; }
template<class T>
bool Optional1__op_Inequality(uType* __type, Optional1<T> left, Optional1<T> right) { bool __retval; return Optional1__op_Inequality_fn(__type, uConstrain(__type, left), uConstrain(__type, right), &__retval), __retval; }
// }

}}}} // ::g::Outracks::Simulator::Bytecode
