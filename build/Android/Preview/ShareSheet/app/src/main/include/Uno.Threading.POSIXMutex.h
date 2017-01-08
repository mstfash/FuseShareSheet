// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/implementation/cpp/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Threading.Mutex.h>
namespace g{namespace Uno{namespace Threading{struct POSIXMutex;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal sealed extern class POSIXMutex :77
// {
::g::Uno::Threading::Mutex_type* POSIXMutex_typeof();
void POSIXMutex__ctor_1_fn(POSIXMutex* __this);
void POSIXMutex__Dispose_fn(POSIXMutex* __this);
void POSIXMutex__Lock_fn(POSIXMutex* __this);
void POSIXMutex__New1_fn(POSIXMutex** __retval);
void POSIXMutex__Unlock_fn(POSIXMutex* __this);

struct POSIXMutex : ::g::Uno::Threading::Mutex
{
    void* _handle;

    void ctor_1();
    static POSIXMutex* New1();
};
// }

}}} // ::g::Uno::Threading
