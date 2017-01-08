// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct AutoResetEvent;}}}

namespace g{
namespace Uno{
namespace Threading{

// public abstract class AutoResetEvent :653
// {
struct AutoResetEvent_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Dispose)(::g::Uno::Threading::AutoResetEvent*);
    void(*fp_Set)(::g::Uno::Threading::AutoResetEvent*, bool*);
    void(*fp_WaitOne)(::g::Uno::Threading::AutoResetEvent*, bool*);
};

AutoResetEvent_type* AutoResetEvent_typeof();
void AutoResetEvent__ctor__fn(AutoResetEvent* __this);
void AutoResetEvent__Create_fn(bool* initialState, AutoResetEvent** __retval);

struct AutoResetEvent : uObject
{
    void ctor_();
    void Dispose() { (((AutoResetEvent_type*)__type)->fp_Dispose)(this); }
    bool Set() { bool __retval; return (((AutoResetEvent_type*)__type)->fp_Set)(this, &__retval), __retval; }
    bool WaitOne() { bool __retval; return (((AutoResetEvent_type*)__type)->fp_WaitOne)(this, &__retval), __retval; }
    static AutoResetEvent* Create(bool initialState);
};
// }

}}} // ::g::Uno::Threading
