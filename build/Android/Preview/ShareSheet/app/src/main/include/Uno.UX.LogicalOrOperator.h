// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.BinaryOperator.h>
namespace g{namespace Uno{namespace UX{struct LogicalOrOperator;}}}
namespace g{namespace Uno{namespace UX{struct Value;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class LogicalOrOperator :469
// {
::g::Uno::UX::BinaryOperator_type* LogicalOrOperator_typeof();
void LogicalOrOperator__ctor_3_fn(LogicalOrOperator* __this);
void LogicalOrOperator__Compute_fn(LogicalOrOperator* __this, ::g::Uno::UX::Value* a, ::g::Uno::UX::Value* b, ::g::Uno::UX::Value** __retval);
void LogicalOrOperator__New2_fn(LogicalOrOperator** __retval);

struct LogicalOrOperator : ::g::Uno::UX::BinaryOperator
{
    void ctor_3();
    static LogicalOrOperator* New2();
};
// }

}}} // ::g::Uno::UX
