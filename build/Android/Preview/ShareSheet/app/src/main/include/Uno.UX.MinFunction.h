// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.BinaryOperator.h>
namespace g{namespace Uno{namespace UX{struct MinFunction;}}}
namespace g{namespace Uno{namespace UX{struct Value;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class MinFunction :457
// {
::g::Uno::UX::BinaryOperator_type* MinFunction_typeof();
void MinFunction__ctor_3_fn(MinFunction* __this);
void MinFunction__Compute_fn(MinFunction* __this, ::g::Uno::UX::Value* a, ::g::Uno::UX::Value* b, ::g::Uno::UX::Value** __retval);
void MinFunction__New2_fn(MinFunction** __retval);

struct MinFunction : ::g::Uno::UX::BinaryOperator
{
    void ctor_3();
    static MinFunction* New2();
};
// }

}}} // ::g::Uno::UX
