// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/splines/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Content{namespace Splines{struct Spline;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Splines{

// public abstract class Spline<T> :378
// {
struct Spline_type : uType
{
    void(*fp_get_End)(::g::Uno::Content::Splines::Spline*, double*);
    void(*fp_Sample1)(::g::Uno::Content::Splines::Spline*, double*, uTRef);
    void(*fp_get_Start)(::g::Uno::Content::Splines::Spline*, double*);
};

Spline_type* Spline_typeof();
void Spline__ctor__fn(Spline* __this);
void Spline__get_First_fn(Spline* __this, uTRef __retval);
void Spline__get_Last_fn(Spline* __this, uTRef __retval);
void Spline__Sample_fn(Spline* __this, double* time, uTRef __retval);

struct Spline : uObject
{
    void ctor_();
    double End() { double __retval; return (((Spline_type*)__type)->fp_get_End)(this, &__retval), __retval; }
    template<class T>
    T First() { T __retval; return Spline__get_First_fn(this, &__retval), __retval; }
    template<class T>
    T Last() { T __retval; return Spline__get_Last_fn(this, &__retval), __retval; }
    template<class T>
    T Sample(double time) { T __retval; return Spline__Sample_fn(this, &time, &__retval), __retval; }
    template<class T>
    void Sample1(double time, T* result) { (((Spline_type*)__type)->fp_Sample1)(this, &time, uConstrain(__type->GetBase(Spline_typeof())->T(0), result)); }
    void Sample1_ex(double* time, uTRef result) { (((Spline_type*)__type)->fp_Sample1)(this, time, result); }
    double Start() { double __retval; return (((Spline_type*)__type)->fp_get_Start)(this, &__retval), __retval; }
};
// }

}}}} // ::g::Uno::Content::Splines
