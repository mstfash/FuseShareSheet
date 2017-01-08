// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Size2Value.h>
namespace g{namespace Uno{namespace UX{struct Size3Value;}}}

namespace g{
namespace Uno{
namespace UX{

// internal class Size3Value :1847
// {
::g::Uno::UX::Value_type* Size3Value_typeof();
void Size3Value__ctor_5_fn(Size3Value* __this, double* x, double* y, double* z, int* ux, int* uy, int* uz);
void Size3Value__get_Length_fn(Size3Value* __this, int* __retval);
void Size3Value__New5_fn(double* x, double* y, double* z, int* ux, int* uy, int* uz, Size3Value** __retval);
void Size3Value__get_W_fn(Size3Value* __this, double* __retval);
void Size3Value__get_WUnit_fn(Size3Value* __this, int* __retval);
void Size3Value__get_Z_fn(Size3Value* __this, double* __retval);
void Size3Value__get_ZUnit_fn(Size3Value* __this, int* __retval);

struct Size3Value : ::g::Uno::UX::Size2Value
{
    int _uz;
    double _z;

    void ctor_5(double x, double y, double z, int ux, int uy, int uz);
    static Size3Value* New5(double x, double y, double z, int ux, int uy, int uz);
};
// }

}}} // ::g::Uno::UX
