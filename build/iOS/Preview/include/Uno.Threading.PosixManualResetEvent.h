// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/implementation/cpp/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Threading.ManualResetEvent.h>
namespace g{namespace Uno{namespace Threading{struct PosixManualResetEvent;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal sealed extern class PosixManualResetEvent :406
// {
::g::Uno::Threading::ManualResetEvent_type* PosixManualResetEvent_typeof();
void PosixManualResetEvent__ctor_1_fn(PosixManualResetEvent* __this, bool* initialState);
void PosixManualResetEvent__Dispose_fn(PosixManualResetEvent* __this);
void PosixManualResetEvent__New1_fn(bool* initialState, PosixManualResetEvent** __retval);
void PosixManualResetEvent__Set_fn(PosixManualResetEvent* __this, bool* __retval);
void PosixManualResetEvent__WaitOne_fn(PosixManualResetEvent* __this, bool* __retval);

struct PosixManualResetEvent : ::g::Uno::Threading::ManualResetEvent
{
    void* _handle;

    void ctor_1(bool initialState);
    static PosixManualResetEvent* New1(bool initialState);
};
// }

}}} // ::g::Uno::Threading
