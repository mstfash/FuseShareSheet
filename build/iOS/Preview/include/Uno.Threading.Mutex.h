// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}

namespace g{
namespace Uno{
namespace Threading{

// public abstract class Mutex :473
// {
struct Mutex_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Dispose)(::g::Uno::Threading::Mutex*);
    void(*fp_Lock)(::g::Uno::Threading::Mutex*);
    void(*fp_Unlock)(::g::Uno::Threading::Mutex*);
};

Mutex_type* Mutex_typeof();
void Mutex__ctor__fn(Mutex* __this);
void Mutex__Create_fn(Mutex** __retval);

struct Mutex : uObject
{
    void ctor_();
    void Dispose() { (((Mutex_type*)__type)->fp_Dispose)(this); }
    void Lock() { (((Mutex_type*)__type)->fp_Lock)(this); }
    void Unlock() { (((Mutex_type*)__type)->fp_Unlock)(this); }
    static Mutex* Create();
};
// }

}}} // ::g::Uno::Threading
