// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Paths/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct Util;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class Util :1077
// {
uType* Util_typeof();
void Util__ctor__fn(Util* __this);
void Util__New1_fn(Util** __retval);
void Util__ValidateFloat_fn(float* v);
void Util__ValidateFloat2_fn(::g::Uno::Float2* v);

struct Util : uObject
{
    void ctor_();
    static Util* New1();
    static void ValidateFloat(float v);
    static void ValidateFloat2(::g::Uno::Float2 v);
};
// }

}}} // ::g::Fuse::Drawing
