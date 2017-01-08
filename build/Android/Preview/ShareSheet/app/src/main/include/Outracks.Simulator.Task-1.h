// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/concurrency/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct Task;}}}
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class Task<T> :57
// {
uType* Task_typeof();
void Task__ctor__fn(Task* __this, uDelegate* wait);
void Task__get_Exception_fn(Task* __this, ::g::Uno::Exception** __retval);
void Task__set_Exception_fn(Task* __this, ::g::Uno::Exception* value);
void Task__get_IsCompleted_fn(Task* __this, bool* __retval);
void Task__set_IsCompleted_fn(Task* __this, bool* value);
void Task__get_IsFaulted_fn(Task* __this, bool* __retval);
void Task__set_IsFaulted_fn(Task* __this, bool* value);
void Task__New1_fn(uType* __type, uDelegate* wait, Task** __retval);
void Task__get_Result_fn(Task* __this, uTRef __retval);
void Task__set_Result_fn(Task* __this, void* value);

struct Task : uObject
{
    uTField _result() { return __type->Field(this, 0); }
    uStrong<uDelegate*> _wait;
    uStrong< ::g::Uno::Threading::Mutex*> Mutex;
    uStrong< ::g::Uno::Exception*> _Exception;
    bool _IsCompleted;
    bool _IsFaulted;

    void ctor_(uDelegate* wait);
    ::g::Uno::Exception* Exception();
    void Exception(::g::Uno::Exception* value);
    bool IsCompleted();
    void IsCompleted(bool value);
    bool IsFaulted();
    void IsFaulted(bool value);
    template<class T>
    T Result() { T __retval; return Task__get_Result_fn(this, &__retval), __retval; }
    template<class T>
    void Result(T value) { Task__set_Result_fn(this, uConstrain(__type->T(0), value)); }
    static Task* New1(uType* __type, uDelegate* wait);
};
// }

}}} // ::g::Outracks::Simulator
