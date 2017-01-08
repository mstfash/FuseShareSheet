// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.BinaryOperator.h>
namespace g{namespace Uno{namespace UX{struct MaxFunction;}}}
namespace g{namespace Uno{namespace UX{struct Value;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class MaxFunction :450
// {
::g::Uno::UX::BinaryOperator_type* MaxFunction_typeof();
void MaxFunction__ctor_3_fn(MaxFunction* __this);
void MaxFunction__Compute_fn(MaxFunction* __this, ::g::Uno::UX::Value* a, ::g::Uno::UX::Value* b, ::g::Uno::UX::Value** __retval);
void MaxFunction__New2_fn(MaxFunction** __retval);

struct MaxFunction : ::g::Uno::UX::BinaryOperator
{
    void ctor_3();
    static MaxFunction* New2();
};
// }

}}} // ::g::Uno::UX
