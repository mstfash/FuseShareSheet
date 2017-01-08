// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/concurrency/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct ConcurrentQueue;}}}
namespace g{namespace Uno{namespace Collections{struct Queue;}}}
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class ConcurrentQueue<T> :10
// {
uType* ConcurrentQueue_typeof();
void ConcurrentQueue__ctor__fn(ConcurrentQueue* __this);
void ConcurrentQueue__Enqueue_fn(ConcurrentQueue* __this, void* data);
void ConcurrentQueue__New1_fn(uType* __type, ConcurrentQueue** __retval);
void ConcurrentQueue__TryDequeue_fn(ConcurrentQueue* __this, uTRef data, bool* __retval);

struct ConcurrentQueue : uObject
{
    uStrong< ::g::Uno::Threading::Mutex*> _mutex;
    uStrong< ::g::Uno::Collections::Queue*> _queue;

    void ctor_();
    template<class T>
    void Enqueue(T data) { ConcurrentQueue__Enqueue_fn(this, uConstrain(__type->T(0), data)); }
    template<class T>
    bool TryDequeue(T* data) { bool __retval; return ConcurrentQueue__TryDequeue_fn(this, uConstrain(__type->T(0), data), &__retval), __retval; }
    static ConcurrentQueue* New1(uType* __type);
};
// }

}}} // ::g::Outracks::Simulator
