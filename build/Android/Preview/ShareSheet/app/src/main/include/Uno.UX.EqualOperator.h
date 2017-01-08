// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.BinaryOperator.h>
namespace g{namespace Uno{namespace UX{struct EqualOperator;}}}
namespace g{namespace Uno{namespace UX{struct Value;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class EqualOperator :523
// {
::g::Uno::UX::BinaryOperator_type* EqualOperator_typeof();
void EqualOperator__ctor_3_fn(EqualOperator* __this);
void EqualOperator__Compute_fn(EqualOperator* __this, ::g::Uno::UX::Value* a, ::g::Uno::UX::Value* b, ::g::Uno::UX::Value** __retval);
void EqualOperator__New2_fn(EqualOperator** __retval);

struct EqualOperator : ::g::Uno::UX::BinaryOperator
{
    void ctor_3();
    static EqualOperator* New2();
};
// }

}}} // ::g::Uno::UX
