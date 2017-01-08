// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/splines/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Content.Splines.KeyframedSpline-2.Key.h>
#include <Uno.Content.Splines.Spline-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Content{namespace Splines{struct KeyframedSpline;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Splines{

// public abstract class KeyframedSpline<TValue, TData> :46
// {
::g::Uno::Content::Splines::Spline_type* KeyframedSpline_typeof();
void KeyframedSpline__ctor_1_fn(KeyframedSpline* __this);
void KeyframedSpline__ctor_2_fn(KeyframedSpline* __this, uArray* keys1);
void KeyframedSpline__AddKey_fn(KeyframedSpline* __this, double* time, void* value, int* __retval);
void KeyframedSpline__ClearKeys_fn(KeyframedSpline* __this);
void KeyframedSpline__get_End_fn(KeyframedSpline* __this, double* __retval);
void KeyframedSpline__FindLeftIndex_fn(KeyframedSpline* __this, double* time, int* __retval);
void KeyframedSpline__FindNearestIndex_fn(KeyframedSpline* __this, double* time, int* __retval);
void KeyframedSpline__FindValue_fn(KeyframedSpline* __this, double* time, uTRef __retval);
void KeyframedSpline__FindValues_fn(KeyframedSpline* __this, double* time, uTRef a, uTRef b, float* p);
void KeyframedSpline__FindValues1_fn(KeyframedSpline* __this, double* time, uTRef a, uTRef b, uTRef c, uTRef d, float* p);
void KeyframedSpline__GetTime_fn(KeyframedSpline* __this, int* index, double* __retval);
void KeyframedSpline__GetValue_fn(KeyframedSpline* __this, int* index, uTRef __retval);
void KeyframedSpline__get_KeyCount_fn(KeyframedSpline* __this, int* __retval);
void KeyframedSpline__Map_fn(uType* __type, double* a, double* b, double* t, float* __retval);
void KeyframedSpline__RemoveKey_fn(KeyframedSpline* __this, int* index);
void KeyframedSpline__SetTime_fn(KeyframedSpline* __this, int* index, double* time, int* __retval);
void KeyframedSpline__SetValue_fn(KeyframedSpline* __this, int* index, void* value);
void KeyframedSpline__get_Start_fn(KeyframedSpline* __this, double* __retval);

struct KeyframedSpline : ::g::Uno::Content::Splines::Spline
{
    int cache;
    uStrong< ::g::Uno::Collections::List*> keys;

    void ctor_1();
    void ctor_2(uArray* keys1);
    template<class TData>
    int AddKey(double time, TData value) { int __retval; return KeyframedSpline__AddKey_fn(this, &time, uConstrain(__type->GetBase(KeyframedSpline_typeof())->T(1), value), &__retval), __retval; }
    void ClearKeys();
    int FindLeftIndex(double time);
    int FindNearestIndex(double time);
    template<class TData>
    TData FindValue(double time) { TData __retval; return KeyframedSpline__FindValue_fn(this, &time, &__retval), __retval; }
    template<class TData>
    void FindValues(double time, TData* a, TData* b, float* p) { KeyframedSpline__FindValues_fn(this, &time, uConstrain(__type->GetBase(KeyframedSpline_typeof())->T(1), a), uConstrain(__type->GetBase(KeyframedSpline_typeof())->T(1), b), p); }
    template<class TData>
    void FindValues1(double time, TData* a, TData* b, TData* c, TData* d, float* p) { KeyframedSpline__FindValues1_fn(this, &time, uConstrain(__type->GetBase(KeyframedSpline_typeof())->T(1), a), uConstrain(__type->GetBase(KeyframedSpline_typeof())->T(1), b), uConstrain(__type->GetBase(KeyframedSpline_typeof())->T(1), c), uConstrain(__type->GetBase(KeyframedSpline_typeof())->T(1), d), p); }
    double GetTime(int index);
    template<class TData>
    TData GetValue(int index) { TData __retval; return KeyframedSpline__GetValue_fn(this, &index, &__retval), __retval; }
    int KeyCount();
    void RemoveKey(int index);
    int SetTime(int index, double time);
    template<class TData>
    void SetValue(int index, TData value) { KeyframedSpline__SetValue_fn(this, &index, uConstrain(__type->GetBase(KeyframedSpline_typeof())->T(1), value)); }
    static float Map(uType* __type, double a, double b, double t);
};
// }

}}}} // ::g::Uno::Content::Splines
