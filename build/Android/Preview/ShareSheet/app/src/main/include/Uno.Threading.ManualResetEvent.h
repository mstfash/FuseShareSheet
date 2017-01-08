// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct ManualResetEvent;}}}

namespace g{
namespace Uno{
namespace Threading{

// public abstract class ManualResetEvent :700
// {
struct ManualResetEvent_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Dispose)(::g::Uno::Threading::ManualResetEvent*);
    void(*fp_Set)(::g::Uno::Threading::ManualResetEvent*, bool*);
    void(*fp_WaitOne)(::g::Uno::Threading::ManualResetEvent*, bool*);
};

ManualResetEvent_type* ManualResetEvent_typeof();
void ManualResetEvent__ctor__fn(ManualResetEvent* __this);
void ManualResetEvent__Create_fn(bool* initialState, ManualResetEvent** __retval);

struct ManualResetEvent : uObject
{
    void ctor_();
    void Dispose() { (((ManualResetEvent_type*)__type)->fp_Dispose)(this); }
    bool Set() { bool __retval; return (((ManualResetEvent_type*)__type)->fp_Set)(this, &__retval), __retval; }
    bool WaitOne() { bool __retval; return (((ManualResetEvent_type*)__type)->fp_WaitOne)(this, &__retval), __retval; }
    static ManualResetEvent* Create(bool initialState);
};
// }

}}} // ::g::Uno::Threading
