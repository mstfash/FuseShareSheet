// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.BinaryOperator.h>
namespace g{namespace Uno{namespace UX{struct DivideOperator;}}}
namespace g{namespace Uno{namespace UX{struct Value;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class DivideOperator :493
// {
::g::Uno::UX::BinaryOperator_type* DivideOperator_typeof();
void DivideOperator__ctor_3_fn(DivideOperator* __this);
void DivideOperator__Compute_fn(DivideOperator* __this, ::g::Uno::UX::Value* a, ::g::Uno::UX::Value* b, ::g::Uno::UX::Value** __retval);
void DivideOperator__New2_fn(DivideOperator** __retval);

struct DivideOperator : ::g::Uno::UX::BinaryOperator
{
    void ctor_3();
    static DivideOperator* New2();
};
// }

}}} // ::g::Uno::UX
