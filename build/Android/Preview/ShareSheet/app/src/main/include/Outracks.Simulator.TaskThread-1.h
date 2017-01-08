// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/concurrency/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct Task;}}}
namespace g{namespace Outracks{namespace Simulator{struct TaskThread;}}}
namespace g{namespace Uno{namespace Threading{struct Thread;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class TaskThread<T> :114
// {
uType* TaskThread_typeof();
void TaskThread__ctor__fn(TaskThread* __this, uDelegate* func);
void TaskThread__New1_fn(uType* __type, uDelegate* func, TaskThread** __retval);
void TaskThread__Run_fn(TaskThread* __this);

struct TaskThread : uObject
{
    uStrong<uDelegate*> _func;
    uStrong< ::g::Outracks::Simulator::Task*> Task;
    uStrong< ::g::Uno::Threading::Thread*> Thread;

    void ctor_(uDelegate* func);
    void Run();
    static TaskThread* New1(uType* __type, uDelegate* func);
};
// }

}}} // ::g::Outracks::Simulator
