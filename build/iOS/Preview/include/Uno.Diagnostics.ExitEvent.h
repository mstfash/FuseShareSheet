// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/diagnostics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Diagnostics.ProfileEvent.h>
namespace g{namespace Uno{namespace Diagnostics{struct ExitEvent;}}}

namespace g{
namespace Uno{
namespace Diagnostics{

// public sealed class ExitEvent :215
// {
::g::Uno::Diagnostics::ProfileEvent_type* ExitEvent_typeof();
void ExitEvent__ctor_1_fn(ExitEvent* __this);
void ExitEvent__New1_fn(ExitEvent** __retval);
void ExitEvent__get_Type_fn(ExitEvent* __this, int* __retval);

struct ExitEvent : ::g::Uno::Diagnostics::ProfileEvent
{
    void ctor_1();
    static ExitEvent* New1();
};
// }

}}} // ::g::Uno::Diagnostics
