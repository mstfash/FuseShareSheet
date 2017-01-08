// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Diagnostics.h>
#include <Fuse.GraphicsWorker.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.WrapException.h>
#include <ObjC.Object.h>
#include <Uno.Action.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.Window.h>
#include <Uno.String.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.Threading.Thread.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[4];
static uType* TYPES[5];

namespace g{
namespace Fuse{

// public static class GraphicsWorker :2801
// {
// static GraphicsWorker() :2801
static void GraphicsWorker__cctor__fn(uType* __type)
{
    GraphicsWorker::_exceptionQueue_ = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[0/*Uno.Threading.ConcurrentQueue<Uno.Exception>*/]));
}

static void GraphicsWorker_build(uType* type)
{
    ::STRINGS[0] = uString::Const("_exceptionQueue mismatch");
    ::STRINGS[1] = uString::Const("GraphicsWorker failed");
    ::STRINGS[2] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno");
    ::STRINGS[3] = uString::Const("Run");
    ::TYPES[0] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler_typeof();
    ::TYPES[4] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::TYPES[2/*Uno.Action*/], NULL);
    type->SetFields(0,
        ::TYPES[0/*Uno.Threading.ConcurrentQueue<Uno.Exception>*/], (uintptr_t)&::g::Fuse::GraphicsWorker::_exceptionQueue_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::GraphicsWorker::_terminating_, uFieldFlagsStatic,
        ::g::Uno::Threading::Thread_typeof(), (uintptr_t)&::g::Fuse::GraphicsWorker::_thread_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Threading.ConcurrentQueue<Uno.Action>*/], (uintptr_t)&::g::Fuse::GraphicsWorker::_work_, uFieldFlagsStatic,
        ::g::ObjC::Object_typeof(), (uintptr_t)&::g::Fuse::GraphicsWorker::_workerContext_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("Dispatch", NULL, (void*)GraphicsWorker__Dispatch_fn, 0, true, uVoid_typeof(), 1, ::TYPES[2/*Uno.Action*/]),
        new uFunction("DispatchException", NULL, (void*)GraphicsWorker__DispatchException_fn, 0, true, uVoid_typeof(), 0));
}

uClassType* GraphicsWorker_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.GraphicsWorker", options);
    type->fp_build_ = GraphicsWorker_build;
    type->fp_cctor_ = GraphicsWorker__cctor__fn;
    return type;
}

// private static extern ObjC.Object CreateContext() :2826
void GraphicsWorker__CreateContext_fn(uObject** __retval)
{
    *__retval = GraphicsWorker::CreateContext();
}

// public static void Dispatch(Uno.Action a) :2803
void GraphicsWorker__Dispatch_fn(uDelegate* a)
{
    GraphicsWorker::Dispatch(a);
}

// public static void DispatchException() :2862
void GraphicsWorker__DispatchException_fn()
{
    GraphicsWorker::DispatchException();
}

// private static void OnWindowClosed(object sender, Uno.EventArgs args) :2854
void GraphicsWorker__OnWindowClosed_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    GraphicsWorker::OnWindowClosed(sender, args);
}

// private static void Run() :2870
void GraphicsWorker__Run_fn()
{
    GraphicsWorker::Run();
}

// private static extern void SetCurrentContext(ObjC.Object context) :2832
void GraphicsWorker__SetCurrentContext_fn(uObject* context)
{
    GraphicsWorker::SetCurrentContext(context);
}

// private static void Start() :2837
void GraphicsWorker__Start_fn()
{
    GraphicsWorker::Start();
}

uSStrong< ::g::Uno::Threading::ConcurrentQueue*> GraphicsWorker::_exceptionQueue_;
bool GraphicsWorker::_terminating_;
uSStrong< ::g::Uno::Threading::Thread*> GraphicsWorker::_thread_;
uSStrong< ::g::Uno::Threading::ConcurrentQueue*> GraphicsWorker::_work_;
uSStrong<uObject*> GraphicsWorker::_workerContext_;

// private static extern ObjC.Object CreateContext() [static] :2826
uObject* GraphicsWorker::CreateContext()
{
    GraphicsWorker_typeof()->Init();
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            return [[[EAGLContext alloc] initWithAPI:kEAGLRenderingAPIOpenGLES2 sharegroup:[EAGLContext currentContext].sharegroup] autorelease];
        } ());
        
    }
    
}

// public static void Dispatch(Uno.Action a) [static] :2803
void GraphicsWorker::Dispatch(uDelegate* a)
{
    uStackFrame __("Fuse.GraphicsWorker", "Dispatch(Uno.Action)");
    GraphicsWorker_typeof()->Init();
    GraphicsWorker::Start();
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(GraphicsWorker::_work()), a);
}

// public static void DispatchException() [static] :2862
void GraphicsWorker::DispatchException()
{
    uStackFrame __("Fuse.GraphicsWorker", "DispatchException()");
    GraphicsWorker_typeof()->Init();
    bool ret1;
    ::g::Uno::Exception* e;

    if (!(::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(GraphicsWorker::_exceptionQueue()), (void**)(&e), &ret1), ret1))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"_exceptionQ...*/]));

    U_THROW(::g::Fuse::WrapException::New4(e));
}

// private static void OnWindowClosed(object sender, Uno.EventArgs args) [static] :2854
void GraphicsWorker::OnWindowClosed(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.GraphicsWorker", "OnWindowClosed(object,Uno.EventArgs)");
    GraphicsWorker_typeof()->Init();
    GraphicsWorker::_terminating() = true;
    uPtr(GraphicsWorker::_thread())->Join();
}

// private static void Run() [static] :2870
void GraphicsWorker::Run()
{
    uStackFrame __("Fuse.GraphicsWorker", "Run()");
    GraphicsWorker_typeof()->Init();
    bool ret2;
    GraphicsWorker::SetCurrentContext(GraphicsWorker::_workerContext());

    while (!GraphicsWorker::_terminating())
    {
        uAutoReleasePool ____pool;
        uDelegate* a;

        if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(GraphicsWorker::_work()), (void**)(&a), &ret2), ret2))
        {
            try
            {
                uPtr(a)->InvokeVoid();
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e = __t.Exception;
                ::g::Fuse::Diagnostics::UnknownException(::STRINGS[1/*"GraphicsWor...*/], e, a, ::STRINGS[2/*"/Users/most...*/], 2891, ::STRINGS[3/*"Run"*/]);
                ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(GraphicsWorker::_exceptionQueue()), e);
                ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)GraphicsWorker__DispatchException_fn));
            }

            continue;
        }

        ::g::Uno::Threading::Thread::Sleep(1);
    }

    GraphicsWorker::_workerContext() = NULL;
}

// private static extern void SetCurrentContext(ObjC.Object context) [static] :2832
void GraphicsWorker::SetCurrentContext(uObject* context)
{
    GraphicsWorker_typeof()->Init();
    @autoreleasepool
    {
        [] (::id context) -> void
        {
            [EAGLContext setCurrentContext: context];
        } (::g::ObjC::Helpers::GetHandle(context));
        
    }
    
}

// private static void Start() [static] :2837
void GraphicsWorker::Start()
{
    uStackFrame __("Fuse.GraphicsWorker", "Start()");
    GraphicsWorker_typeof()->Init();

    if (GraphicsWorker::_thread() != NULL)
        return;

    uPtr(uPtr(::g::Uno::Application::Current())->Window())->add_Closed(uDelegate::New(::TYPES[3/*Uno.EventHandler*/], (void*)GraphicsWorker__OnWindowClosed_fn));
    GraphicsWorker::_workerContext() = GraphicsWorker::CreateContext();
    GraphicsWorker::_work() = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[4/*Uno.Threading.ConcurrentQueue<Uno.Action>*/]));
    GraphicsWorker::_thread() = ::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)GraphicsWorker__Run_fn));
    uPtr(GraphicsWorker::_thread())->Start();
}
// }

}} // ::g::Fuse
