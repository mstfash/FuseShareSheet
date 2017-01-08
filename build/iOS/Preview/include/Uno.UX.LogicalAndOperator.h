// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.BinaryOperator.h>
namespace g{namespace Uno{namespace UX{struct LogicalAndOperator;}}}
namespace g{namespace Uno{namespace UX{struct Value;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class LogicalAndOperator :475
// {
::g::Uno::UX::BinaryOperator_type* LogicalAndOperator_typeof();
void LogicalAndOperator__ctor_3_fn(LogicalAndOperator* __this);
void LogicalAndOperator__Compute_fn(LogicalAndOperator* __this, ::g::Uno::UX::Value* a, ::g::Uno::UX::Value* b, ::g::Uno::UX::Value** __retval);
void LogicalAndOperator__New2_fn(LogicalAndOperator** __retval);

struct LogicalAndOperator : ::g::Uno::UX::BinaryOperator
{
    void ctor_3();
    static LogicalAndOperator* New2();
};
// }

}}} // ::g::Uno::UX
