// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.BinaryOperator.h>
namespace g{namespace Uno{namespace UX{struct LessOrEqualOperator;}}}
namespace g{namespace Uno{namespace UX{struct Value;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class LessOrEqualOperator :505
// {
::g::Uno::UX::BinaryOperator_type* LessOrEqualOperator_typeof();
void LessOrEqualOperator__ctor_3_fn(LessOrEqualOperator* __this);
void LessOrEqualOperator__Compute_fn(LessOrEqualOperator* __this, ::g::Uno::UX::Value* a, ::g::Uno::UX::Value* b, ::g::Uno::UX::Value** __retval);
void LessOrEqualOperator__New2_fn(LessOrEqualOperator** __retval);

struct LessOrEqualOperator : ::g::Uno::UX::BinaryOperator
{
    void ctor_3();
    static LessOrEqualOperator* New2();
};
// }

}}} // ::g::Uno::UX
