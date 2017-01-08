// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.UnaryOperator.h>
namespace g{namespace Uno{namespace UX{struct NegateOperator;}}}
namespace g{namespace Uno{namespace UX{struct Value;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class NegateOperator :320
// {
::g::Uno::UX::UnaryOperator_type* NegateOperator_typeof();
void NegateOperator__ctor_3_fn(NegateOperator* __this);
void NegateOperator__Compute_fn(NegateOperator* __this, ::g::Uno::UX::Value* a, ::g::Uno::UX::Value** __retval);
void NegateOperator__New2_fn(NegateOperator** __retval);

struct NegateOperator : ::g::Uno::UX::UnaryOperator
{
    void ctor_3();
    static NegateOperator* New2();
};
// }

}}} // ::g::Uno::UX
