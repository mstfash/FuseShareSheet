// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/implementation/cpp/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Threading.Thread.h>
namespace g{namespace Uno{namespace Threading{struct POSIXThread;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal sealed extern class POSIXThread :262
// {
::g::Uno::Threading::Thread_type* POSIXThread_typeof();
void POSIXThread__ctor_1_fn(POSIXThread* __this, uint64_t* handle);
void POSIXThread__ctor_2_fn(POSIXThread* __this, uDelegate* callback);
void POSIXThread__get_CurrentThread1_fn(POSIXThread** __retval);
void POSIXThread__Equals_fn(POSIXThread* __this, uObject* o, bool* __retval);
void POSIXThread__Join_fn(POSIXThread* __this);
void POSIXThread__New1_fn(uint64_t* handle, POSIXThread** __retval);
void POSIXThread__New2_fn(uDelegate* callback, POSIXThread** __retval);
void POSIXThread__Sleep1_fn(int* millis);
void POSIXThread__Start_fn(POSIXThread* __this);

struct POSIXThread : ::g::Uno::Threading::Thread
{
    uint64_t _posixHandle;

    void ctor_1(uint64_t handle);
    void ctor_2(uDelegate* callback);
    static POSIXThread* New1(uint64_t handle);
    static POSIXThread* New2(uDelegate* callback);
    static void Sleep1(int millis);
    static POSIXThread* CurrentThread1();
};
// }

}}} // ::g::Uno::Threading
