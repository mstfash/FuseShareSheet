// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct GraphicsWorker;}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentQueue;}}}
namespace g{namespace Uno{namespace Threading{struct Thread;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{

// public static class GraphicsWorker :2801
// {
uClassType* GraphicsWorker_typeof();
void GraphicsWorker__CreateContext_fn(uObject** __retval);
void GraphicsWorker__Dispatch_fn(uDelegate* a);
void GraphicsWorker__DispatchException_fn();
void GraphicsWorker__OnWindowClosed_fn(uObject* sender, ::g::Uno::EventArgs* args);
void GraphicsWorker__Run_fn();
void GraphicsWorker__SetCurrentContext_fn(uObject* context);
void GraphicsWorker__Start_fn();

struct GraphicsWorker : uObject
{
    static uSStrong< ::g::Uno::Threading::ConcurrentQueue*> _exceptionQueue_;
    static uSStrong< ::g::Uno::Threading::ConcurrentQueue*>& _exceptionQueue() { return GraphicsWorker_typeof()->Init(), _exceptionQueue_; }
    static bool _terminating_;
    static bool& _terminating() { return GraphicsWorker_typeof()->Init(), _terminating_; }
    static uSStrong< ::g::Uno::Threading::Thread*> _thread_;
    static uSStrong< ::g::Uno::Threading::Thread*>& _thread() { return GraphicsWorker_typeof()->Init(), _thread_; }
    static uSStrong< ::g::Uno::Threading::ConcurrentQueue*> _work_;
    static uSStrong< ::g::Uno::Threading::ConcurrentQueue*>& _work() { return GraphicsWorker_typeof()->Init(), _work_; }
    static uSStrong<uObject*> _workerContext_;
    static uSStrong<uObject*>& _workerContext() { return GraphicsWorker_typeof()->Init(), _workerContext_; }

    static uObject* CreateContext();
    static void Dispatch(uDelegate* a);
    static void DispatchException();
    static void OnWindowClosed(uObject* sender, ::g::Uno::EventArgs* args);
    static void Run();
    static void SetCurrentContext(uObject* context);
    static void Start();
};
// }

}} // ::g::Fuse
