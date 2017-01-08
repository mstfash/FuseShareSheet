// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.BinaryOperator.h>
namespace g{namespace Uno{namespace UX{struct AddOperator;}}}
namespace g{namespace Uno{namespace UX{struct Value;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class AddOperator :463
// {
::g::Uno::UX::BinaryOperator_type* AddOperator_typeof();
void AddOperator__ctor_3_fn(AddOperator* __this);
void AddOperator__Compute_fn(AddOperator* __this, ::g::Uno::UX::Value* a, ::g::Uno::UX::Value* b, ::g::Uno::UX::Value** __retval);
void AddOperator__New2_fn(AddOperator** __retval);

struct AddOperator : ::g::Uno::UX::BinaryOperator
{
    void ctor_3();
    static AddOperator* New2();
};
// }

}}} // ::g::Uno::UX
