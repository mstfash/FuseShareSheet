// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/splines/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Content{
namespace Splines{

// public struct KeyframedSpline<TValue, TData>.Key :50
// {
uStructType* KeyframedSpline__Key_typeof();
void KeyframedSpline__Key__ctor__fn(uTRef __this, uType* __type, double* time, void* value);
void KeyframedSpline__Key__New1_fn(uType* __type, double* time, void* value, uTRef __retval);

template<class TData>
struct KeyframedSpline__Key
{
    double Time;
    TData Value;

    void ctor_(uType* __type, double time, TData value) { KeyframedSpline__Key__ctor__fn(this, __type, &time, uConstrain(__type->T(1), value)); }
};

template<class TData>
KeyframedSpline__Key<TData> KeyframedSpline__Key__New1(uType* __type, double time, TData value) { KeyframedSpline__Key<TData> __retval; return KeyframedSpline__Key__New1_fn(__type, &time, uConstrain(__type->T(1), value), &__retval), __retval; }
// }

}}}} // ::g::Uno::Content::Splines
