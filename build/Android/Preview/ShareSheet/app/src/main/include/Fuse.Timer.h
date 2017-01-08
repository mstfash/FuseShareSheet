// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Timer;}}

namespace g{
namespace Fuse{

// public sealed class Timer :9388
// {
uType* Timer_typeof();
void Timer__ctor__fn(Timer* __this, double* interval, uDelegate* callback);
void Timer__New1_fn(double* interval, uDelegate* callback, Timer** __retval);
void Timer__Start_fn(Timer* __this);
void Timer__Stop_fn(Timer* __this);
void Timer__Update_fn(Timer* __this);
void Timer__Wait_fn(double* duration, uDelegate* callback);

struct Timer : uObject
{
    uStrong<uDelegate*> _callback;
    double _interval;
    bool _once;
    bool _running;
    double _startTime;

    void ctor_(double interval, uDelegate* callback);
    void Start();
    void Stop();
    void Update();
    static Timer* New1(double interval, uDelegate* callback);
    static void Wait(double duration, uDelegate* callback);
};
// }

}} // ::g::Fuse
