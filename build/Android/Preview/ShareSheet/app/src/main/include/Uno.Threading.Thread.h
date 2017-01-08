// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct Thread;}}}

namespace g{
namespace Uno{
namespace Threading{

// public abstract class Thread :515
// {
struct Thread_type : uType
{
    void(*fp_Join)(::g::Uno::Threading::Thread*);
    void(*fp_Join1)(::g::Uno::Threading::Thread*, int*, bool*);
    void(*fp_Start)(::g::Uno::Threading::Thread*);
};

Thread_type* Thread_typeof();
void Thread__ctor__fn(Thread* __this, uDelegate* callback);
void Thread__Create_fn(uDelegate* callback, Thread** __retval);
void Thread__get_CurrentThread_fn(Thread** __retval);
void Thread__Sleep_fn(int* millis);

struct Thread : uObject
{
    uStrong<uDelegate*> _callback;

    void ctor_(uDelegate* callback);
    void Join() { (((Thread_type*)__type)->fp_Join)(this); }
    bool Join1(int timeoutMillis) { bool __retval; return (((Thread_type*)__type)->fp_Join1)(this, &timeoutMillis, &__retval), __retval; }
    void Start() { (((Thread_type*)__type)->fp_Start)(this); }
    static Thread* Create(uDelegate* callback);
    static void Sleep(int millis);
    static Thread* CurrentThread();
};
// }

}}} // ::g::Uno::Threading
