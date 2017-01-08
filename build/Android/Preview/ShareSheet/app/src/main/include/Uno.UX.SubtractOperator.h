// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.BinaryOperator.h>
namespace g{namespace Uno{namespace UX{struct SubtractOperator;}}}
namespace g{namespace Uno{namespace UX{struct Value;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class SubtractOperator :481
// {
::g::Uno::UX::BinaryOperator_type* SubtractOperator_typeof();
void SubtractOperator__ctor_3_fn(SubtractOperator* __this);
void SubtractOperator__Compute_fn(SubtractOperator* __this, ::g::Uno::UX::Value* a, ::g::Uno::UX::Value* b, ::g::Uno::UX::Value** __retval);
void SubtractOperator__New2_fn(SubtractOperator** __retval);

struct SubtractOperator : ::g::Uno::UX::BinaryOperator
{
    void ctor_3();
    static SubtractOperator* New2();
};
// }

}}} // ::g::Uno::UX
