// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.BinaryOperator.h>
namespace g{namespace Uno{namespace UX{struct NotEqualOperator;}}}
namespace g{namespace Uno{namespace UX{struct Value;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class NotEqualOperator :529
// {
::g::Uno::UX::BinaryOperator_type* NotEqualOperator_typeof();
void NotEqualOperator__ctor_3_fn(NotEqualOperator* __this);
void NotEqualOperator__Compute_fn(NotEqualOperator* __this, ::g::Uno::UX::Value* a, ::g::Uno::UX::Value* b, ::g::Uno::UX::Value** __retval);
void NotEqualOperator__New2_fn(NotEqualOperator** __retval);

struct NotEqualOperator : ::g::Uno::UX::BinaryOperator
{
    void ctor_3();
    static NotEqualOperator* New2();
};
// }

}}} // ::g::Uno::UX
