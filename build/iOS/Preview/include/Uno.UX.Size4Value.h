// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Size3Value.h>
namespace g{namespace Uno{namespace UX{struct Size4Value;}}}

namespace g{
namespace Uno{
namespace UX{

// internal sealed class Size4Value :1859
// {
::g::Uno::UX::Value_type* Size4Value_typeof();
void Size4Value__ctor_6_fn(Size4Value* __this, double* x, double* y, double* z, double* w, int* ux, int* uy, int* uz, int* uw);
void Size4Value__get_Length_fn(Size4Value* __this, int* __retval);
void Size4Value__New6_fn(double* x, double* y, double* z, double* w, int* ux, int* uy, int* uz, int* uw, Size4Value** __retval);
void Size4Value__get_W_fn(Size4Value* __this, double* __retval);
void Size4Value__get_WUnit_fn(Size4Value* __this, int* __retval);

struct Size4Value : ::g::Uno::UX::Size3Value
{
    int _uw;
    double _w;

    void ctor_6(double x, double y, double z, double w, int ux, int uy, int uz, int uw);
    static Size4Value* New6(double x, double y, double z, double w, int ux, int uy, int uz, int uw);
};
// }

}}} // ::g::Uno::UX
