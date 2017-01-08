// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/implementation/cpp/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Threading.AutoResetEvent.h>
namespace g{namespace Uno{namespace Threading{struct PosixAutoResetEvent;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal sealed extern class PosixAutoResetEvent :370
// {
::g::Uno::Threading::AutoResetEvent_type* PosixAutoResetEvent_typeof();
void PosixAutoResetEvent__ctor_1_fn(PosixAutoResetEvent* __this, bool* initialState);
void PosixAutoResetEvent__Dispose_fn(PosixAutoResetEvent* __this);
void PosixAutoResetEvent__New1_fn(bool* initialState, PosixAutoResetEvent** __retval);
void PosixAutoResetEvent__Set_fn(PosixAutoResetEvent* __this, bool* __retval);
void PosixAutoResetEvent__WaitOne_fn(PosixAutoResetEvent* __this, bool* __retval);

struct PosixAutoResetEvent : ::g::Uno::Threading::AutoResetEvent
{
    void* _handle;

    void ctor_1(bool initialState);
    static PosixAutoResetEvent* New1(bool initialState);
};
// }

}}} // ::g::Uno::Threading
