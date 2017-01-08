// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.BinaryOperator.h>
namespace g{namespace Uno{namespace UX{struct MultiplyOperator;}}}
namespace g{namespace Uno{namespace UX{struct Value;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class MultiplyOperator :487
// {
::g::Uno::UX::BinaryOperator_type* MultiplyOperator_typeof();
void MultiplyOperator__ctor_3_fn(MultiplyOperator* __this);
void MultiplyOperator__Compute_fn(MultiplyOperator* __this, ::g::Uno::UX::Value* a, ::g::Uno::UX::Value* b, ::g::Uno::UX::Value** __retval);
void MultiplyOperator__New2_fn(MultiplyOperator** __retval);

struct MultiplyOperator : ::g::Uno::UX::BinaryOperator
{
    void ctor_3();
    static MultiplyOperator* New2();
};
// }

}}} // ::g::Uno::UX
