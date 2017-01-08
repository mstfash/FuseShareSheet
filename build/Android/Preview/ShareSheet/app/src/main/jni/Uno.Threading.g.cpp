// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <posix_mutex.h>
#include <posix_thread.h>
#include <PosixResetEvent.h>
#include <uBase/Thread.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.AggregateException.h>
#include <Uno.Application.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Dictionary-2.KeyCollection.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Delegate.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.NotImplementedException.h>
#include <Uno.Object.h>
#include <Uno.Platform.Window.h>
#include <Uno.String.h>
#include <Uno.Threading.AutoResetEvent.h>
#include <Uno.Threading.CancellationToken.h>
#include <Uno.Threading.CancellationTokenSource.h>
#include <Uno.Threading.ConcurrentDictionary-2.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.Threading.Future.h>
#include <Uno.Threading.Future-1.Closure-1.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.FutureState.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.IDispatcherExtensions.Arg1Invoke-1.h>
#include <Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc-2.h>
#include <Uno.Threading.IDispatcherExtensions.Arg2Invoke-2.h>
#include <Uno.Threading.IDispatcherExtensions.h>
#include <Uno.Threading.ITaskScheduler.h>
#include <Uno.Threading.LockGuard.h>
#include <Uno.Threading.MainThreadAttribute.h>
#include <Uno.Threading.ManualResetEvent.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Threading.Mutex.h>
#include <Uno.Threading.PosixAutoResetEvent.h>
#include <Uno.Threading.PosixManualResetEvent.h>
#include <Uno.Threading.POSIXMutex.h>
#include <Uno.Threading.POSIXThread.h>
#include <Uno.Threading.POSIXThread.ReleasingLauncher.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Threading.SyncDispatcher.h>
#include <Uno.Threading.Task.h>
#include <Uno.Threading.TaskDelegate.h>
#include <Uno.Threading.TaskFuture-1.h>
#include <Uno.Threading.TaskStatus.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Threading.ThreadPool.DefaultWorkItem.h>
#include <Uno.Threading.ThreadPool.h>
#include <Uno.Threading.ThreadPool.ParameterizedWorkItem-1.h>
#include <Uno.Threading.ThreadPool.WorkItem.h>
#include <Uno.Threading.ThreadPoolTaskScheduler.h>
#include <Uno.ULong.h>
#include <Uno/Support.h>
static uString* STRINGS[8];
static uType* TYPES[23];

namespace g{
namespace Uno{
namespace Threading{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// private sealed class IDispatcherExtensions.Arg1Invoke<T> :222
// {
static void IDispatcherExtensions__Arg1Invoke_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Threading::IDispatcherExtensions__Arg1Invoke, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* IDispatcherExtensions__Arg1Invoke_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(IDispatcherExtensions__Arg1Invoke);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.IDispatcherExtensions.Arg1Invoke`1", options);
    type->fp_build_ = IDispatcherExtensions__Arg1Invoke_build;
    return type;
}

// public Arg1Invoke(Uno.Action<T> action, T arg) :226
void IDispatcherExtensions__Arg1Invoke__ctor__fn(IDispatcherExtensions__Arg1Invoke* __this, uDelegate* action, void* arg)
{
    __this->_action = action;
    __this->_arg() = arg;
}

// public Arg1Invoke New(Uno.Action<T> action, T arg) :226
void IDispatcherExtensions__Arg1Invoke__New1_fn(uType* __type, uDelegate* action, void* arg, IDispatcherExtensions__Arg1Invoke** __retval)
{
    IDispatcherExtensions__Arg1Invoke* obj1 = (IDispatcherExtensions__Arg1Invoke*)uNew(__type);
    IDispatcherExtensions__Arg1Invoke__ctor__fn(obj1, action, arg);
    return *__retval = obj1, void();
}

// public void Run() :231
void IDispatcherExtensions__Arg1Invoke__Run_fn(IDispatcherExtensions__Arg1Invoke* __this)
{
    __this->Run();
}

// public void Run() [instance] :231
void IDispatcherExtensions__Arg1Invoke::Run()
{
    uStackFrame __("Uno.Threading.IDispatcherExtensions.Arg1Invoke`1", "Run()");
    uPtr(_action)->InvokeVoid(_arg());
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// private sealed class IDispatcherExtensions.Arg1InvokeFunc<T, TResult> :294
// {
static void IDispatcherExtensions__Arg1InvokeFunc_build(uType* type)
{
    type->SetPrecalc(
        type->T(1));
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Uno::Threading::IDispatcherExtensions__Arg1InvokeFunc, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* IDispatcherExtensions__Arg1InvokeFunc_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(IDispatcherExtensions__Arg1InvokeFunc);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc`2", options);
    type->fp_build_ = IDispatcherExtensions__Arg1InvokeFunc_build;
    return type;
}

// public Arg1InvokeFunc(Uno.Func<T, TResult> action, T arg) :298
void IDispatcherExtensions__Arg1InvokeFunc__ctor__fn(IDispatcherExtensions__Arg1InvokeFunc* __this, uDelegate* action, void* arg)
{
    __this->_action = action;
    __this->_arg() = arg;
}

// public Arg1InvokeFunc New(Uno.Func<T, TResult> action, T arg) :298
void IDispatcherExtensions__Arg1InvokeFunc__New1_fn(uType* __type, uDelegate* action, void* arg, IDispatcherExtensions__Arg1InvokeFunc** __retval)
{
    IDispatcherExtensions__Arg1InvokeFunc* obj1 = (IDispatcherExtensions__Arg1InvokeFunc*)uNew(__type);
    IDispatcherExtensions__Arg1InvokeFunc__ctor__fn(obj1, action, arg);
    return *__retval = obj1, void();
}

// public void Run() :303
void IDispatcherExtensions__Arg1InvokeFunc__Run_fn(IDispatcherExtensions__Arg1InvokeFunc* __this)
{
    __this->Run();
}

// public void Run() [instance] :303
void IDispatcherExtensions__Arg1InvokeFunc::Run()
{
    uType* __types[] = {
        __type->Precalced(0/*TResult*/),
    };
    uStackFrame __("Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc`2", "Run()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uPtr(_action)->Invoke(&ret2, 1, (void*)_arg());
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// private sealed class IDispatcherExtensions.Arg2Invoke<T1, T2> :234
// {
static void IDispatcherExtensions__Arg2Invoke_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Uno::Threading::IDispatcherExtensions__Arg2Invoke, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* IDispatcherExtensions__Arg2Invoke_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(IDispatcherExtensions__Arg2Invoke);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.IDispatcherExtensions.Arg2Invoke`2", options);
    type->fp_build_ = IDispatcherExtensions__Arg2Invoke_build;
    return type;
}

// public Arg2Invoke(Uno.Action<T1, T2> action, T1 arg1, T2 arg2) :239
void IDispatcherExtensions__Arg2Invoke__ctor__fn(IDispatcherExtensions__Arg2Invoke* __this, uDelegate* action, void* arg1, void* arg2)
{
    __this->_action = action;
    __this->_arg1() = arg1;
    __this->_arg2() = arg2;
}

// public Arg2Invoke New(Uno.Action<T1, T2> action, T1 arg1, T2 arg2) :239
void IDispatcherExtensions__Arg2Invoke__New1_fn(uType* __type, uDelegate* action, void* arg1, void* arg2, IDispatcherExtensions__Arg2Invoke** __retval)
{
    IDispatcherExtensions__Arg2Invoke* obj1 = (IDispatcherExtensions__Arg2Invoke*)uNew(__type);
    IDispatcherExtensions__Arg2Invoke__ctor__fn(obj1, action, arg1, arg2);
    return *__retval = obj1, void();
}

// public void Run() :245
void IDispatcherExtensions__Arg2Invoke__Run_fn(IDispatcherExtensions__Arg2Invoke* __this)
{
    __this->Run();
}

// public void Run() [instance] :245
void IDispatcherExtensions__Arg2Invoke::Run()
{
    uStackFrame __("Uno.Threading.IDispatcherExtensions.Arg2Invoke`2", "Run()");
    uPtr(_action)->Invoke(2, (void*)_arg1(), (void*)_arg2());
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// public abstract class AutoResetEvent :653
// {
static void AutoResetEvent_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Feature not supported in this backend");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(AutoResetEvent_type, interface0));
    type->Reflection.SetFunctions(4,
        new uFunction("Create", NULL, (void*)AutoResetEvent__Create_fn, 0, true, type, 1, ::g::Uno::Bool_typeof()),
        new uFunction("Dispose", NULL, NULL, offsetof(AutoResetEvent_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("Set", NULL, NULL, offsetof(AutoResetEvent_type, fp_Set), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("WaitOne", NULL, NULL, offsetof(AutoResetEvent_type, fp_WaitOne), false, ::g::Uno::Bool_typeof(), 0));
}

AutoResetEvent_type* AutoResetEvent_typeof()
{
    static uSStrong<AutoResetEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AutoResetEvent);
    options.TypeSize = sizeof(AutoResetEvent_type);
    type = (AutoResetEvent_type*)uClassType::New("Uno.Threading.AutoResetEvent", options);
    type->fp_build_ = AutoResetEvent_build;
    return type;
}

// protected generated AutoResetEvent() :653
void AutoResetEvent__ctor__fn(AutoResetEvent* __this)
{
    __this->ctor_();
}

// public static Uno.Threading.AutoResetEvent Create(bool initialState) :655
void AutoResetEvent__Create_fn(bool* initialState, AutoResetEvent** __retval)
{
    *__retval = AutoResetEvent::Create(*initialState);
}

// protected generated AutoResetEvent() [instance] :653
void AutoResetEvent::ctor_()
{
}

// public static Uno.Threading.AutoResetEvent Create(bool initialState) [static] :655
AutoResetEvent* AutoResetEvent::Create(bool initialState)
{
    uStackFrame __("Uno.Threading.AutoResetEvent", "Create(bool)");
    return ::g::Uno::Threading::PosixAutoResetEvent::New1(initialState);
    return NULL;
    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Feature not...*/]));
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/tasks/$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class CancellationToken :34
// {
static void CancellationToken_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Threading::CancellationToken, _IsCancellationRequested), 0);
}

uType* CancellationToken_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(CancellationToken);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.CancellationToken", options);
    type->fp_build_ = CancellationToken_build;
    type->fp_ctor_ = (void*)CancellationToken__New1_fn;
    return type;
}

// public CancellationToken() :41
void CancellationToken__ctor__fn(CancellationToken* __this)
{
    __this->ctor_();
}

// public generated bool get_IsCancellationRequested() :38
void CancellationToken__get_IsCancellationRequested_fn(CancellationToken* __this, bool* __retval)
{
    *__retval = __this->IsCancellationRequested();
}

// private generated void set_IsCancellationRequested(bool value) :38
void CancellationToken__set_IsCancellationRequested_fn(CancellationToken* __this, bool* value)
{
    __this->IsCancellationRequested(*value);
}

// public CancellationToken New() :41
void CancellationToken__New1_fn(CancellationToken** __retval)
{
    *__retval = CancellationToken::New1();
}

// internal void SetCancellationRequested() :46
void CancellationToken__SetCancellationRequested_fn(CancellationToken* __this)
{
    __this->SetCancellationRequested();
}

// public CancellationToken() [instance] :41
void CancellationToken::ctor_()
{
    IsCancellationRequested(false);
}

// public generated bool get_IsCancellationRequested() [instance] :38
bool CancellationToken::IsCancellationRequested()
{
    return _IsCancellationRequested;
}

// private generated void set_IsCancellationRequested(bool value) [instance] :38
void CancellationToken::IsCancellationRequested(bool value)
{
    _IsCancellationRequested = value;
}

// internal void SetCancellationRequested() [instance] :46
void CancellationToken::SetCancellationRequested()
{
    IsCancellationRequested(true);
}

// public CancellationToken New() [static] :41
CancellationToken* CancellationToken::New1()
{
    CancellationToken* obj1 = (CancellationToken*)uNew(CancellationToken_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/tasks/$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class CancellationTokenSource :9
// {
static void CancellationTokenSource_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Threading::CancellationToken_typeof(), offsetof(::g::Uno::Threading::CancellationTokenSource, _token), 0);
}

uType* CancellationTokenSource_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(CancellationTokenSource);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.CancellationTokenSource", options);
    type->fp_build_ = CancellationTokenSource_build;
    type->fp_ctor_ = (void*)CancellationTokenSource__New1_fn;
    return type;
}

// public CancellationTokenSource() :23
void CancellationTokenSource__ctor__fn(CancellationTokenSource* __this)
{
    __this->ctor_();
}

// public void Cancel() :28
void CancellationTokenSource__Cancel_fn(CancellationTokenSource* __this)
{
    __this->Cancel();
}

// public CancellationTokenSource New() :23
void CancellationTokenSource__New1_fn(CancellationTokenSource** __retval)
{
    *__retval = CancellationTokenSource::New1();
}

// public Uno.Threading.CancellationToken get_Token() :18
void CancellationTokenSource__get_Token_fn(CancellationTokenSource* __this, ::g::Uno::Threading::CancellationToken** __retval)
{
    *__retval = __this->Token();
}

// public CancellationTokenSource() [instance] :23
void CancellationTokenSource::ctor_()
{
    _token = ::g::Uno::Threading::CancellationToken::New1();
}

// public void Cancel() [instance] :28
void CancellationTokenSource::Cancel()
{
    uStackFrame __("Uno.Threading.CancellationTokenSource", "Cancel()");
    uPtr(_token)->SetCancellationRequested();
}

// public Uno.Threading.CancellationToken get_Token() [instance] :18
::g::Uno::Threading::CancellationToken* CancellationTokenSource::Token()
{
    return _token;
}

// public CancellationTokenSource New() [static] :23
CancellationTokenSource* CancellationTokenSource::New1()
{
    CancellationTokenSource* obj1 = (CancellationTokenSource*)uNew(CancellationTokenSource_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// private sealed class Future<T>.Closure<T> :160
// {
static void Future1__Closure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(1), NULL), offsetof(::g::Uno::Threading::Future1__Closure, _action), 0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* Future1__Closure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(Future1__Closure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.Future`1.Closure`1", options);
    type->fp_build_ = Future1__Closure_build;
    return type;
}

// public Closure(Uno.Action<T> action, T result) :165
void Future1__Closure__ctor__fn(Future1__Closure* __this, uDelegate* action, void* result)
{
    __this->_action = action;
    __this->_result() = result;
}

// public Closure New(Uno.Action<T> action, T result) :165
void Future1__Closure__New1_fn(uType* __type, uDelegate* action, void* result, Future1__Closure** __retval)
{
    Future1__Closure* obj1 = (Future1__Closure*)uNew(__type);
    Future1__Closure__ctor__fn(obj1, action, result);
    return *__retval = obj1, void();
}

// public void Run() :171
void Future1__Closure__Run_fn(Future1__Closure* __this)
{
    __this->Run();
}

// public void Run() [instance] :171
void Future1__Closure::Run()
{
    uStackFrame __("Uno.Threading.Future`1.Closure`1", "Run()");
    uPtr(_action)->InvokeVoid(_result());
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class ConcurrentDictionary<TKey, TValue> :922
// {
static void ConcurrentDictionary_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[1] = ::g::Uno::IDisposable_typeof();
    ::TYPES[2] = ::g::Uno::Collections::KeyValuePair_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof();
    ::TYPES[4] = ::g::Uno::Collections::List__Enumerator_typeof();
    ::TYPES[5] = ::g::Uno::Collections::List_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), type->T(1), NULL),
        ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1), NULL),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1), NULL), NULL),
        type->T(1),
        ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1), NULL), NULL),
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1), NULL), NULL),
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(1), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IDictionary_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(ConcurrentDictionary_type, interface0),
        ::TYPES[3/*Uno.Collections.ICollection`1*/]->MakeType(::TYPES[2/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1), NULL), NULL), offsetof(ConcurrentDictionary_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[2/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1), NULL), NULL), offsetof(ConcurrentDictionary_type, interface2));
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.Dictionary`2*/]->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Uno::Threading::ConcurrentDictionary, _dictionary), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Uno::Threading::ConcurrentDictionary, _mutex), 0);
    type->Reflection.SetFunctions(16,
        new uFunction("Add", NULL, (void*)ConcurrentDictionary__Add_fn, 0, false, uVoid_typeof(), 2, type->T(0), type->T(1)),
        new uFunction("Add", NULL, (void*)ConcurrentDictionary__Add1_fn, 0, false, uVoid_typeof(), 1, ::TYPES[2/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1), NULL)),
        new uFunction("AddOrUpdate", NULL, (void*)ConcurrentDictionary__AddOrUpdate_fn, 0, false, uVoid_typeof(), 3, type->T(0), type->T(1), ::g::Uno::Func2_typeof()->MakeType(type->T(0), type->T(1), type->T(1), NULL)),
        new uFunction("Clear", NULL, (void*)ConcurrentDictionary__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Contains", NULL, (void*)ConcurrentDictionary__Contains_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::TYPES[2/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1), NULL)),
        new uFunction("ContainsKey", NULL, (void*)ConcurrentDictionary__ContainsKey_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("get_Count", NULL, (void*)ConcurrentDictionary__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetEnumerator", NULL, (void*)ConcurrentDictionary__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::TYPES[2/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1), NULL), NULL), 0),
        new uFunction("get_Item", NULL, (void*)ConcurrentDictionary__get_Item_fn, 0, false, type->T(1), 1, type->T(0)),
        new uFunction("set_Item", NULL, (void*)ConcurrentDictionary__set_Item_fn, 0, false, uVoid_typeof(), 2, type->T(0), type->T(1)),
        new uFunction("get_Keys", NULL, (void*)ConcurrentDictionary__get_Keys_fn, 0, false, ::TYPES[3/*Uno.Collections.ICollection`1*/]->MakeType(type->T(0), NULL), 0),
        new uFunction(".ctor", type, (void*)ConcurrentDictionary__New1_fn, 0, true, type, 0),
        new uFunction("Remove", NULL, (void*)ConcurrentDictionary__Remove_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("Remove", NULL, (void*)ConcurrentDictionary__Remove1_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::TYPES[2/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1), NULL)),
        new uFunction("TryGetValue", NULL, (void*)ConcurrentDictionary__TryGetValue_fn, 0, false, ::g::Uno::Bool_typeof(), 2, type->T(0), type->T(1)->ByRef()),
        new uFunction("get_Values", NULL, (void*)ConcurrentDictionary__get_Values_fn, 0, false, ::TYPES[3/*Uno.Collections.ICollection`1*/]->MakeType(type->T(1), NULL), 0));
}

ConcurrentDictionary_type* ConcurrentDictionary_typeof()
{
    static uSStrong<ConcurrentDictionary_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 8;
    options.ObjectSize = sizeof(ConcurrentDictionary);
    options.TypeSize = sizeof(ConcurrentDictionary_type);
    type = (ConcurrentDictionary_type*)uClassType::New("Uno.Threading.ConcurrentDictionary`2", options);
    type->fp_build_ = ConcurrentDictionary_build;
    type->fp_ctor_ = (void*)ConcurrentDictionary__New1_fn;
    type->interface0.fp_TryGetValue = (void(*)(uObject*, void*, uTRef, bool*))ConcurrentDictionary__TryGetValue_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))ConcurrentDictionary__Clear_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))ConcurrentDictionary__Add1_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))ConcurrentDictionary__Remove1_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))ConcurrentDictionary__Contains_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))ConcurrentDictionary__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))ConcurrentDictionary__GetEnumerator_fn;
    return type;
}

// public generated ConcurrentDictionary() :922
void ConcurrentDictionary__ctor__fn(ConcurrentDictionary* __this)
{
    __this->ctor_();
}

// public void Add(TKey key, TValue value) :966
void ConcurrentDictionary__Add_fn(ConcurrentDictionary* __this, void* key, void* value)
{
    uStackFrame __("Uno.Threading.ConcurrentDictionary`2", "Add(TKey,TValue)");
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(__this->_dictionary), key, value);
    }
}

// public void Add(Uno.Collections.KeyValuePair<TKey, TValue> keyValue) :1046
void ConcurrentDictionary__Add1_fn(ConcurrentDictionary* __this, void* keyValue)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __this->__type->Precalced(2/*Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>*/),
    };
    uStackFrame __("Uno.Threading.ConcurrentDictionary`2", "Add(Uno.Collections.KeyValuePair<TKey, TValue>)");
    uT keyValue_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    keyValue_ = keyValue;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr((uObject*)__this->_dictionary), __types[1]), keyValue_);
    }
}

// public void AddOrUpdate(TKey key, TValue addValue, Uno.Func<TKey, TValue, TValue> updateFun) :1016
void ConcurrentDictionary__AddOrUpdate_fn(ConcurrentDictionary* __this, void* key, void* addValue, uDelegate* updateFun)
{
    uType* __types[] = {
        __this->__type->Precalced(3/*TValue*/),
    };
    uStackFrame __("Uno.Threading.ConcurrentDictionary`2", "AddOrUpdate(TKey,TValue,Uno.Func<TKey, TValue, TValue>)");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT oldValue(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret2;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        oldValue = uT(__types[0], U_ALLOCA(__types[0]->ValueSize));
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(__this->_dictionary), key, (::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_dictionary), key, &oldValue, &ret2), ret2) ? (uPtr(updateFun)->Invoke(&ret3, 2, key, (void*)oldValue), (void*)ret3) : addValue);
    }
}

// public void Clear() :1027
void ConcurrentDictionary__Clear_fn(ConcurrentDictionary* __this)
{
    __this->Clear();
}

// public bool Contains(Uno.Collections.KeyValuePair<TKey, TValue> keyValue) :1062
void ConcurrentDictionary__Contains_fn(ConcurrentDictionary* __this, void* keyValue, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __this->__type->Precalced(2/*Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>*/),
    };
    uStackFrame __("Uno.Threading.ConcurrentDictionary`2", "Contains(Uno.Collections.KeyValuePair<TKey, TValue>)");
    uT keyValue_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret4;
    keyValue_ = keyValue;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return *__retval = (::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr((uObject*)__this->_dictionary), __types[1]), keyValue_, &ret4), ret4), void();
    }
}

// public bool ContainsKey(TKey key) :990
void ConcurrentDictionary__ContainsKey_fn(ConcurrentDictionary* __this, void* key, bool* __retval)
{
    uStackFrame __("Uno.Threading.ConcurrentDictionary`2", "ContainsKey(TKey)");
    bool ret5;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return *__retval = (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(__this->_dictionary), key, &ret5), ret5), void();
    }
}

// public int get_Count() :1037
void ConcurrentDictionary__get_Count_fn(ConcurrentDictionary* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<TKey, TValue>> GetEnumerator() :928
void ConcurrentDictionary__GetEnumerator_fn(ConcurrentDictionary* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public TValue get_Item(TKey key) :1000
void ConcurrentDictionary__get_Item_fn(ConcurrentDictionary* __this, void* key, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(3/*TValue*/),
    };
    uStackFrame __("Uno.Threading.ConcurrentDictionary`2", "get_Item(TKey)");
    uT ret10(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return __retval.Store((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(__this->_dictionary), key, &ret10), ret10)), void();
    }
}

// public void set_Item(TKey key, TValue value) :1007
void ConcurrentDictionary__set_Item_fn(ConcurrentDictionary* __this, void* key, void* value)
{
    uStackFrame __("Uno.Threading.ConcurrentDictionary`2", "set_Item(TKey,TValue)");
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(__this->_dictionary), key, value);
    }
}

// public Uno.Collections.ICollection<TKey> get_Keys() :941
void ConcurrentDictionary__get_Keys_fn(ConcurrentDictionary* __this, uObject** __retval)
{
    *__retval = __this->Keys();
}

// public generated ConcurrentDictionary New() :922
void ConcurrentDictionary__New1_fn(uType* __type, ConcurrentDictionary** __retval)
{
    *__retval = ConcurrentDictionary::New1(__type);
}

// public bool Remove(TKey key) :982
void ConcurrentDictionary__Remove_fn(ConcurrentDictionary* __this, void* key, bool* __retval)
{
    uStackFrame __("Uno.Threading.ConcurrentDictionary`2", "Remove(TKey)");
    bool ret7;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return *__retval = (::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->_dictionary), key, &ret7), ret7), void();
    }
}

// public bool Remove(Uno.Collections.KeyValuePair<TKey, TValue> keyValue) :1054
void ConcurrentDictionary__Remove1_fn(ConcurrentDictionary* __this, void* keyValue, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __this->__type->Precalced(2/*Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>*/),
    };
    uStackFrame __("Uno.Threading.ConcurrentDictionary`2", "Remove(Uno.Collections.KeyValuePair<TKey, TValue>)");
    uT keyValue_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret8;
    keyValue_ = keyValue;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return *__retval = (::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr((uObject*)__this->_dictionary), __types[1]), keyValue_, &ret8), ret8), void();
    }
}

// public bool TryGetValue(TKey key, TValue& value) :974
void ConcurrentDictionary__TryGetValue_fn(ConcurrentDictionary* __this, void* key, uTRef value, bool* __retval)
{
    uStackFrame __("Uno.Threading.ConcurrentDictionary`2", "TryGetValue(TKey,TValue&)");
    bool ret9;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return *__retval = (::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_dictionary), key, value, &ret9), ret9), void();
    }
}

// public Uno.Collections.ICollection<TValue> get_Values() :955
void ConcurrentDictionary__get_Values_fn(ConcurrentDictionary* __this, uObject** __retval)
{
    *__retval = __this->Values();
}

// public generated ConcurrentDictionary() [instance] :922
void ConcurrentDictionary::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>*/),
    };
    uStackFrame __("Uno.Threading.ConcurrentDictionary`2", ".ctor()");
    _dictionary = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[0]));
    _mutex = ::g::Uno::Threading::Mutex::Create();
}

// public void Clear() [instance] :1027
void ConcurrentDictionary::Clear()
{
    uStackFrame __("Uno.Threading.ConcurrentDictionary`2", "Clear()");
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uPtr(_dictionary)->Clear();
    }
}

// public int get_Count() [instance] :1037
int ConcurrentDictionary::Count()
{
    uStackFrame __("Uno.Threading.ConcurrentDictionary`2", "get_Count()");
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return uPtr(_dictionary)->Count();
    }
}

// public Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<TKey, TValue>> GetEnumerator() [instance] :928
uObject* ConcurrentDictionary::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(4/*Uno.Collections.List<Uno.Collections.KeyValuePair<TKey, TValue>>.Enumerator*/),
        __type->Precalced(5/*Uno.Collections.List<Uno.Collections.KeyValuePair<TKey, TValue>>*/),
    };
    uStackFrame __("Uno.Threading.ConcurrentDictionary`2", "GetEnumerator()");
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(__types[1], uPtr(_dictionary)->Count());
        result->AddRange((uObject*)_dictionary);
        return uBoxPtr(__types[0], (::g::Uno::Collections::List__GetEnumerator_fn(result, &ret6), ret6));
    }
}

// public Uno.Collections.ICollection<TKey> get_Keys() [instance] :941
uObject* ConcurrentDictionary::Keys()
{
    uType* __types[] = {
        __type->Precalced(6/*Uno.Collections.List<TKey>*/),
    };
    uStackFrame __("Uno.Threading.ConcurrentDictionary`2", "get_Keys()");
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(__types[0], uPtr(_dictionary)->Count());
        result->AddRange((uObject*)((::g::Uno::Collections::Dictionary__KeyCollection*)uPtr(_dictionary)->Keys()));
        return (uObject*)result;
    }
}

// public Uno.Collections.ICollection<TValue> get_Values() [instance] :955
uObject* ConcurrentDictionary::Values()
{
    uType* __types[] = {
        __type->Precalced(7/*Uno.Collections.List<TValue>*/),
    };
    uStackFrame __("Uno.Threading.ConcurrentDictionary`2", "get_Values()");
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(__types[0], uPtr(_dictionary)->Count());
        result->AddRange((uObject*)((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(_dictionary)->Values()));
        return (uObject*)result;
    }
}

// public generated ConcurrentDictionary New() [static] :922
ConcurrentDictionary* ConcurrentDictionary::New1(uType* __type)
{
    ConcurrentDictionary* obj1 = (ConcurrentDictionary*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class ConcurrentQueue<T> :1081
// {
static void ConcurrentQueue_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::Collections::Queue_typeof();
    ::TYPES[1] = ::g::Uno::IDisposable_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::Queue_typeof()->MakeType(type->T(0), NULL),
        type->T(0));
    type->SetInterfaces(
        ::TYPES[1/*Uno.IDisposable*/], offsetof(ConcurrentQueue_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Uno::Threading::ConcurrentQueue, _mutex), 0,
        ::TYPES[6/*Uno.Collections.Queue`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Uno::Threading::ConcurrentQueue, _queue), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("get_Count", NULL, (void*)ConcurrentQueue__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("Dispose", NULL, (void*)ConcurrentQueue__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Enqueue", NULL, (void*)ConcurrentQueue__Enqueue_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_IsEmpty", NULL, (void*)ConcurrentQueue__get_IsEmpty_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", type, (void*)ConcurrentQueue__New1_fn, 0, true, type, 0),
        new uFunction("TryDequeue", NULL, (void*)ConcurrentQueue__TryDequeue_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)->ByRef()));
}

ConcurrentQueue_type* ConcurrentQueue_typeof()
{
    static uSStrong<ConcurrentQueue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ConcurrentQueue);
    options.TypeSize = sizeof(ConcurrentQueue_type);
    type = (ConcurrentQueue_type*)uClassType::New("Uno.Threading.ConcurrentQueue`1", options);
    type->fp_build_ = ConcurrentQueue_build;
    type->fp_ctor_ = (void*)ConcurrentQueue__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ConcurrentQueue__Dispose_fn;
    return type;
}

// public ConcurrentQueue() :1086
void ConcurrentQueue__ctor__fn(ConcurrentQueue* __this)
{
    __this->ctor_();
}

// public int get_Count() :1117
void ConcurrentQueue__get_Count_fn(ConcurrentQueue* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public void Dispose() :1132
void ConcurrentQueue__Dispose_fn(ConcurrentQueue* __this)
{
    __this->Dispose();
}

// public void Enqueue(T item) :1092
void ConcurrentQueue__Enqueue_fn(ConcurrentQueue* __this, void* item)
{
    uStackFrame __("Uno.Threading.ConcurrentQueue`1", "Enqueue(T)");
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(__this->_queue), item);
    }
}

// public bool get_IsEmpty() :1129
void ConcurrentQueue__get_IsEmpty_fn(ConcurrentQueue* __this, bool* __retval)
{
    *__retval = __this->IsEmpty();
}

// public ConcurrentQueue New() :1086
void ConcurrentQueue__New1_fn(uType* __type, ConcurrentQueue** __retval)
{
    *__retval = ConcurrentQueue::New1(__type);
}

// public bool TryDequeue(T& item) :1098
void ConcurrentQueue__TryDequeue_fn(ConcurrentQueue* __this, uTRef item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uStackFrame __("Uno.Threading.ConcurrentQueue`1", "TryDequeue(T&)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret = false;
    item.Default(__types[0]);
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (uPtr(__this->_queue)->Count() > 0)
        {
            item.Store((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_queue), &ret2), ret2));
            ret = true;
        }
    }

    return *__retval = ret, void();
}

// public ConcurrentQueue() [instance] :1086
void ConcurrentQueue::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Queue<T>*/),
    };
    uStackFrame __("Uno.Threading.ConcurrentQueue`1", ".ctor()");
    _queue = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[0]));
    _mutex = ::g::Uno::Threading::Mutex::Create();
}

// public int get_Count() [instance] :1117
int ConcurrentQueue::Count()
{
    uStackFrame __("Uno.Threading.ConcurrentQueue`1", "get_Count()");
    int count = 0;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        count = uPtr(_queue)->Count();
    }

    return count;
}

// public void Dispose() [instance] :1132
void ConcurrentQueue::Dispose()
{
    uStackFrame __("Uno.Threading.ConcurrentQueue`1", "Dispose()");
    uPtr(_mutex)->Dispose();
}

// public bool get_IsEmpty() [instance] :1129
bool ConcurrentQueue::IsEmpty()
{
    uStackFrame __("Uno.Threading.ConcurrentQueue`1", "get_IsEmpty()");
    return Count() == 0;
}

// public ConcurrentQueue New() [static] :1086
ConcurrentQueue* ConcurrentQueue::New1(uType* __type)
{
    ConcurrentQueue* obj1 = (ConcurrentQueue*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// private sealed class ThreadPool.DefaultWorkItem :784
// {
static void ThreadPool__DefaultWorkItem_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Uno::Threading::ThreadPool__DefaultWorkItem, _action), 0);
}

::g::Uno::Threading::ThreadPool__WorkItem_type* ThreadPool__DefaultWorkItem_typeof()
{
    static uSStrong< ::g::Uno::Threading::ThreadPool__WorkItem_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::ThreadPool__WorkItem_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ThreadPool__DefaultWorkItem);
    options.TypeSize = sizeof(::g::Uno::Threading::ThreadPool__WorkItem_type);
    type = (::g::Uno::Threading::ThreadPool__WorkItem_type*)uClassType::New("Uno.Threading.ThreadPool.DefaultWorkItem", options);
    type->fp_build_ = ThreadPool__DefaultWorkItem_build;
    type->fp_Invoke = (void(*)(::g::Uno::Threading::ThreadPool__WorkItem*))ThreadPool__DefaultWorkItem__Invoke_fn;
    return type;
}

// public DefaultWorkItem(Uno.Action action) :788
void ThreadPool__DefaultWorkItem__ctor_1_fn(ThreadPool__DefaultWorkItem* __this, uDelegate* action)
{
    __this->ctor_1(action);
}

// public override sealed void Invoke() :793
void ThreadPool__DefaultWorkItem__Invoke_fn(ThreadPool__DefaultWorkItem* __this)
{
    uStackFrame __("Uno.Threading.ThreadPool.DefaultWorkItem", "Invoke()");

    if (::g::Uno::Delegate::op_Inequality(__this->_action, NULL))
        uPtr(__this->_action)->InvokeVoid();
}

// public DefaultWorkItem New(Uno.Action action) :788
void ThreadPool__DefaultWorkItem__New1_fn(uDelegate* action, ThreadPool__DefaultWorkItem** __retval)
{
    *__retval = ThreadPool__DefaultWorkItem::New1(action);
}

// public DefaultWorkItem(Uno.Action action) [instance] :788
void ThreadPool__DefaultWorkItem::ctor_1(uDelegate* action)
{
    ctor_();
    _action = action;
}

// public DefaultWorkItem New(Uno.Action action) [static] :788
ThreadPool__DefaultWorkItem* ThreadPool__DefaultWorkItem::New1(uDelegate* action)
{
    ThreadPool__DefaultWorkItem* obj1 = (ThreadPool__DefaultWorkItem*)uNew(ThreadPool__DefaultWorkItem_typeof());
    obj1->ctor_1(action);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// public abstract class Future :9
// {
static void Future_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Future_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::FutureState_typeof(), offsetof(::g::Uno::Threading::Future, _State), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("Cancel", NULL, NULL, offsetof(Future_type, fp_Cancel), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Dispose", NULL, NULL, offsetof(Future_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("get_State", NULL, (void*)Future__get_State_fn, 0, false, ::g::Uno::Threading::FutureState_typeof(), 0),
        new uFunction("Wait", NULL, NULL, offsetof(Future_type, fp_Wait), false, uVoid_typeof(), 0));
}

Future_type* Future_typeof()
{
    static uSStrong<Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Future);
    options.TypeSize = sizeof(Future_type);
    type = (Future_type*)uClassType::New("Uno.Threading.Future", options);
    type->fp_build_ = Future_build;
    return type;
}

// protected generated Future() :9
void Future__ctor__fn(Future* __this)
{
    __this->ctor_();
}

// public generated Uno.Threading.FutureState get_State() :11
void Future__get_State_fn(Future* __this, int* __retval)
{
    *__retval = __this->State();
}

// protected generated void set_State(Uno.Threading.FutureState value) :11
void Future__set_State_fn(Future* __this, int* value)
{
    __this->State(*value);
}

// protected generated Future() [instance] :9
void Future::ctor_()
{
}

// public generated Uno.Threading.FutureState get_State() [instance] :11
int Future::State()
{
    return _State;
}

// protected generated void set_State(Uno.Threading.FutureState value) [instance] :11
void Future::State(int value)
{
    _State = value;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// public abstract class Future<T> :17
// {
static void Future1_build(uType* type)
{
    ::STRINGS[1] = uString::Const("dispatcher");
    ::STRINGS[2] = uString::Const("This promise is already resolved or rejected");
    ::TYPES[7] = ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL), NULL);
    ::TYPES[6] = ::g::Uno::Collections::Queue_typeof();
    ::TYPES[8] = ::g::Uno::Exception_typeof();
    ::TYPES[9] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[10] = ::g::Uno::Action_typeof();
    ::TYPES[11] = Future1__Closure_typeof();
    ::TYPES[12] = ::g::Uno::Threading::Promise_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0), NULL), NULL),
        ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), NULL),
        type->MakeMethod(0/*Invoke<Uno.Exception>*/, ::g::Uno::Exception_typeof(), NULL),
        type->MakeMethod(0/*Invoke<T>*/, type->T(0), NULL),
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0), NULL));
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[11/*Uno.Threading.Future`1.Closure`1*/]->MakeType(type->T(0), type->MethodTypes[0]->U(0), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(1,
        ::TYPES[7/*Uno.Collections.Queue<Uno.Action<Uno.Exception>>*/], offsetof(::g::Uno::Threading::Future1, _catchables), 0,
        ::TYPES[6/*Uno.Collections.Queue`1*/]->MakeType(::TYPES[12/*Uno.Threading.Promise`1*/]->MakeType(type->T(0), NULL), NULL), offsetof(::g::Uno::Threading::Future1, _chainables), 0,
        ::TYPES[9/*Uno.Threading.IDispatcher*/], offsetof(::g::Uno::Threading::Future1, _dispatcher), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Threading::Future1, _isDisposed), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Uno::Threading::Future1, _mutex), 0,
        ::TYPES[6/*Uno.Collections.Queue`1*/]->MakeType(::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), NULL), offsetof(::g::Uno::Threading::Future1, _thenables), 0,
        ::TYPES[8/*Uno.Exception*/], offsetof(::g::Uno::Threading::Future1, Reason), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("Catch", NULL, (void*)Future1__Catch_fn, 0, false, type, 1, ::g::Uno::Action1_typeof()->MakeType(::TYPES[8/*Uno.Exception*/], NULL)),
        new uFunction("Then", NULL, (void*)Future1__Then_fn, 0, false, type, 1, ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL)),
        new uFunction("Then", NULL, (void*)Future1__Then1_fn, 0, false, type, 2, ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[8/*Uno.Exception*/], NULL)));
}

::g::Uno::Threading::Future_type* Future1_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Future_typeof();
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.PrecalcCount = 5;
    options.ObjectSize = sizeof(Future1);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Uno.Threading.Future`1", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->fp_build_ = Future1_build;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))Future1__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Future1__Dispose_fn;
    return type;
}

// protected Future() :40
void Future1__ctor_1_fn(Future1* __this)
{
    __this->ctor_1();
}

// protected Future(Uno.Threading.IDispatcher dispatcher) :28
void Future1__ctor_2_fn(Future1* __this, uObject* dispatcher)
{
    __this->ctor_2(dispatcher);
}

// public Uno.Threading.Future<T> Catch(Uno.Action<Uno.Exception> failure) :155
void Future1__Catch_fn(Future1* __this, uDelegate* failure, Future1** __retval)
{
    *__retval = __this->Catch(failure);
}

// public override void Dispose() :43
void Future1__Dispose_fn(Future1* __this)
{
    uStackFrame __("Uno.Threading.Future`1", "Dispose()");

    if (!__this->_isDisposed)
    {
        uPtr(__this->_mutex)->Dispose();
        __this->_isDisposed = true;
    }
}

// protected void InternalReject(Uno.Exception reason) :81
void Future1__InternalReject_fn(Future1* __this, ::g::Uno::Exception* reason)
{
    __this->InternalReject(reason);
}

// protected void InternalResolve(T result) :52
void Future1__InternalResolve_fn(Future1* __this, void* result)
{
    uType* __types[] = {
        __this->__type->GetBase(Future1_typeof())->Precalced(3/*Uno.Threading.Future<T>.Invoke<T>*/),
    };
    uStackFrame __("Uno.Threading.Future`1", "InternalResolve(T)");
    uDelegate* ret4;
    ::g::Uno::Threading::Promise* ret5;
    ::g::Uno::Threading::Promise* ret6;
    uPtr(__this->_mutex)->Lock();

    if (__this->State() != 0)
    {
        uPtr(__this->_mutex)->Unlock();
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"This promis...*/]));
    }

    __this->State(1);
    __this->Result() = result;

    try
    {
        while (uPtr(__this->_thenables)->Count() != 0)
            Future1__Invoke_fn(__this, __types[0], (::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_thenables), &ret4), ret4), result);

        while (uPtr(__this->_chainables)->Count() != 0)
            ::g::Uno::Threading::Promise__Resolve_fn(uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_chainables), &ret5), ret5)), result);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception = __t.Exception;

        while (uPtr(__this->_chainables)->Count() != 0)
            uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_chainables), &ret6), ret6))->Reject(exception);
    }

    uPtr(__this->_mutex)->Unlock();
}

// private void Invoke<T1>(Uno.Action<T1> action, T1 arg) :110
void Future1__Invoke_fn(Future1* __this, uType* __type, uDelegate* action, void* arg)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.Future<T>.Closure<T1>*/),
    };
    uStackFrame __("Uno.Threading.Future`1", "Invoke`1(Uno.Action<T1>,T1)");
    Future1__Closure* ret7;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(__this->_dispatcher), ::TYPES[9/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)Future1__Closure__Run_fn, (Future1__Closure__New1_fn(__types[0], action, arg, &ret7), ret7)));
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> action) :115
void Future1__Then_fn(Future1* __this, uDelegate* action, Future1** __retval)
{
    *__retval = __this->Then(action);
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> fulfilled, Uno.Action<Uno.Exception> rejected) :120
void Future1__Then1_fn(Future1* __this, uDelegate* fulfilled, uDelegate* rejected, Future1** __retval)
{
    *__retval = __this->Then1(fulfilled, rejected);
}

// protected Future() [instance] :40
void Future1::ctor_1()
{
    uStackFrame __("Uno.Threading.Future`1", ".ctor()");
    _mutex = ::g::Uno::Threading::Mutex::Create();
    ctor_2((uObject*)::g::Uno::Threading::SyncDispatcher::New1());
}

// protected Future(Uno.Threading.IDispatcher dispatcher) [instance] :28
void Future1::ctor_2(uObject* dispatcher)
{
    uType* __types[] = {
        __type->GetBase(Future1_typeof())->Precalced(0/*Uno.Collections.Queue<Uno.Threading.Promise<T>>*/),
        __type->GetBase(Future1_typeof())->Precalced(1/*Uno.Collections.Queue<Uno.Action<T>>*/),
    };
    uStackFrame __("Uno.Threading.Future`1", ".ctor(Uno.Threading.IDispatcher)");
    _mutex = ::g::Uno::Threading::Mutex::Create();
    ctor_();

    if (dispatcher == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[1/*"dispatcher"*/]));

    _dispatcher = dispatcher;
    State(0);
    _catchables = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(::TYPES[7/*Uno.Collections.Queue<Uno.Action<Uno.Exception>>*/]));
    _chainables = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[0]));
    _thenables = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[1]));
}

// public Uno.Threading.Future<T> Catch(Uno.Action<Uno.Exception> failure) [instance] :155
Future1* Future1::Catch(uDelegate* failure)
{
    uStackFrame __("Uno.Threading.Future`1", "Catch(Uno.Action<Uno.Exception>)");
    return Then1(NULL, failure);
}

// protected void InternalReject(Uno.Exception reason) [instance] :81
void Future1::InternalReject(::g::Uno::Exception* reason)
{
    uType* __types[] = {
        __type->GetBase(Future1_typeof())->Precalced(2/*Uno.Threading.Future<T>.Invoke<Uno.Exception>*/),
    };
    uStackFrame __("Uno.Threading.Future`1", "InternalReject(Uno.Exception)");
    uDelegate* ret1;
    ::g::Uno::Threading::Promise* ret2;
    ::g::Uno::Threading::Promise* ret3;
    uPtr(_mutex)->Lock();

    if (State() != 0)
    {
        uPtr(_mutex)->Unlock();
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"This promis...*/]));
    }

    State(2);
    Reason = reason;

    try
    {
        while (uPtr(_catchables)->Count() != 0)
            Future1__Invoke_fn(this, __types[0], (::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_catchables), &ret1), ret1), reason);

        while (uPtr(_chainables)->Count() != 0)
            uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_chainables), &ret2), ret2))->Reject(reason);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception = __t.Exception;

        while (uPtr(_chainables)->Count() != 0)
            uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_chainables), &ret3), ret3))->Reject(exception);
    }

    uPtr(_mutex)->Unlock();
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> action) [instance] :115
Future1* Future1::Then(uDelegate* action)
{
    uStackFrame __("Uno.Threading.Future`1", "Then(Uno.Action<T>)");
    return Then1(action, NULL);
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> fulfilled, Uno.Action<Uno.Exception> rejected) [instance] :120
Future1* Future1::Then1(uDelegate* fulfilled, uDelegate* rejected)
{
    uType* __types[] = {
        __type->GetBase(Future1_typeof())->Precalced(4/*Uno.Threading.Promise<T>*/),
        __type->GetBase(Future1_typeof())->Precalced(3/*Uno.Threading.Future<T>.Invoke<T>*/),
        __type->GetBase(Future1_typeof())->Precalced(2/*Uno.Threading.Future<T>.Invoke<Uno.Exception>*/),
    };
    uStackFrame __("Uno.Threading.Future`1", "Then(Uno.Action<T>,Uno.Action<Uno.Exception>)");
    ::g::Uno::Threading::Promise* chainable = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(__types[0]);
    uPtr(_mutex)->Lock();

    try
    {
        if (State() == 1)
        {
            if (::g::Uno::Delegate::op_Inequality(fulfilled, NULL))
                Future1__Invoke_fn(this, __types[1], fulfilled, Result());
        }
        else if (State() == 2)
        {
            if (::g::Uno::Delegate::op_Inequality(rejected, NULL))
                Future1__Invoke_fn(this, __types[2], rejected, Reason);
        }
        else
        {
            ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_chainables), chainable);

            if (::g::Uno::Delegate::op_Inequality(fulfilled, NULL))
                ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_thenables), fulfilled);

            if (::g::Uno::Delegate::op_Inequality(rejected, NULL))
                ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_catchables), rejected);
        }
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception = __t.Exception;
        uPtr(chainable)->Reject(exception);
    }

    uPtr(_mutex)->Unlock();
    return chainable;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// public enum FutureState :185
uEnumType* FutureState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Threading.FutureState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Pending", 0LL,
        "Resolved", 1LL,
        "Rejected", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// public abstract interface IDispatcher :200
// {
uInterfaceType* IDispatcher_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Threading.IDispatcher", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Invoke", NULL, NULL, offsetof(IDispatcher, fp_Invoke), false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()));
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// public static class IDispatcherExtensions :205
// {
static void IDispatcherExtensions_build(uType* type)
{
    ::TYPES[9] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[10] = ::g::Uno::Action_typeof();
    ::TYPES[13] = IDispatcherExtensions__Arg1Invoke_typeof();
    ::TYPES[14] = IDispatcherExtensions__Arg1InvokeFunc_typeof();
    ::TYPES[15] = IDispatcherExtensions__Arg2Invoke_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[13/*Uno.Threading.IDispatcherExtensions.Arg1Invoke`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[14/*Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc`2*/]->MakeType(type->MethodTypes[1]->U(0), type->MethodTypes[1]->U(1), NULL));
    type->MethodTypes[2]->SetPrecalc(
        ::TYPES[15/*Uno.Threading.IDispatcherExtensions.Arg2Invoke`2*/]->MakeType(type->MethodTypes[2]->U(0), type->MethodTypes[2]->U(1), NULL));
    type->Reflection.SetFunctions(3,
        new uFunction("Invoke1`1", type->MethodTypes[0], (void*)IDispatcherExtensions__Invoke1_fn, 0, true, uVoid_typeof(), 3, ::TYPES[9/*Uno.Threading.IDispatcher*/], ::g::Uno::Action1_typeof()->MakeType(type->MethodTypes[0]->U(0), NULL), type->MethodTypes[0]->U(0)),
        new uFunction("Invoke1`2", type->MethodTypes[1], (void*)IDispatcherExtensions__Invoke11_fn, 0, true, uVoid_typeof(), 3, ::TYPES[9/*Uno.Threading.IDispatcher*/], ::g::Uno::Func1_typeof()->MakeType(type->MethodTypes[1]->U(0), type->MethodTypes[1]->U(1), NULL), type->MethodTypes[1]->U(0)),
        new uFunction("Invoke2`2", type->MethodTypes[2], (void*)IDispatcherExtensions__Invoke2_fn, 0, true, uVoid_typeof(), 4, ::TYPES[9/*Uno.Threading.IDispatcher*/], ::g::Uno::Action2_typeof()->MakeType(type->MethodTypes[2]->U(0), type->MethodTypes[2]->U(1), NULL), type->MethodTypes[2]->U(0), type->MethodTypes[2]->U(1)));
}

uClassType* IDispatcherExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Threading.IDispatcherExtensions", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->MethodTypes[1] = type->NewMethodType(2, 1);
    type->MethodTypes[2] = type->NewMethodType(2, 1);
    type->fp_build_ = IDispatcherExtensions_build;
    return type;
}

// public static void Invoke1<T>(Uno.Threading.IDispatcher dispatcher, Uno.Action<T> action, T arg) :207
void IDispatcherExtensions__Invoke1_fn(uType* __type, uObject* dispatcher, uDelegate* action, void* arg)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.IDispatcherExtensions.Arg1Invoke<T>*/),
    };
    uStackFrame __("Uno.Threading.IDispatcherExtensions", "Invoke1`1(Uno.Threading.IDispatcher,Uno.Action<T>,T)");
    IDispatcherExtensions__Arg1Invoke* ret1;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(dispatcher), ::TYPES[9/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)IDispatcherExtensions__Arg1Invoke__Run_fn, (IDispatcherExtensions__Arg1Invoke__New1_fn(__types[0], action, arg, &ret1), ret1)));
}

// public static void Invoke1<T, TResult>(Uno.Threading.IDispatcher dispatcher, Uno.Func<T, TResult> func, T arg) :269
void IDispatcherExtensions__Invoke11_fn(uType* __type, uObject* dispatcher, uDelegate* func, void* arg)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc<T, TResult>*/),
    };
    uStackFrame __("Uno.Threading.IDispatcherExtensions", "Invoke1`2(Uno.Threading.IDispatcher,Uno.Func<T, TResult>,T)");
    IDispatcherExtensions__Arg1InvokeFunc* ret2;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(dispatcher), ::TYPES[9/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)IDispatcherExtensions__Arg1InvokeFunc__Run_fn, (IDispatcherExtensions__Arg1InvokeFunc__New1_fn(__types[0], func, arg, &ret2), ret2)));
}

// public static void Invoke2<T1, T2>(Uno.Threading.IDispatcher dispatcher, Uno.Action<T1, T2> action, T1 arg1, T2 arg2) :212
void IDispatcherExtensions__Invoke2_fn(uType* __type, uObject* dispatcher, uDelegate* action, void* arg1, void* arg2)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.IDispatcherExtensions.Arg2Invoke<T1, T2>*/),
    };
    uStackFrame __("Uno.Threading.IDispatcherExtensions", "Invoke2`2(Uno.Threading.IDispatcher,Uno.Action<T1, T2>,T1,T2)");
    IDispatcherExtensions__Arg2Invoke* ret3;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(dispatcher), ::TYPES[9/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)IDispatcherExtensions__Arg2Invoke__Run_fn, (IDispatcherExtensions__Arg2Invoke__New1_fn(__types[0], action, arg1, arg2, &ret3), ret3)));
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/tasks/$.uno
// ----------------------------------------------------------------------------------------------

// internal abstract interface ITaskScheduler :206
// {
uInterfaceType* ITaskScheduler_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Threading.ITaskScheduler", 0, 0);
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class LockGuard :746
// {
static void LockGuard_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(LockGuard_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Uno::Threading::LockGuard, _mutex), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Acquire", NULL, (void*)LockGuard__Acquire_fn, 0, true, ::g::Uno::IDisposable_typeof(), 1, ::g::Uno::Threading::Mutex_typeof()));
}

LockGuard_type* LockGuard_typeof()
{
    static uSStrong<LockGuard_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LockGuard);
    options.TypeSize = sizeof(LockGuard_type);
    type = (LockGuard_type*)uClassType::New("Uno.Threading.LockGuard", options);
    type->fp_build_ = LockGuard_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))LockGuard__UnoIDisposableDispose_fn;
    return type;
}

// private LockGuard(Uno.Threading.Mutex mutex) :750
void LockGuard__ctor__fn(LockGuard* __this, ::g::Uno::Threading::Mutex* mutex)
{
    __this->ctor_(mutex);
}

// public static Uno.IDisposable Acquire(Uno.Threading.Mutex mutex) :756
void LockGuard__Acquire_fn(::g::Uno::Threading::Mutex* mutex, uObject** __retval)
{
    *__retval = LockGuard::Acquire(mutex);
}

// private LockGuard New(Uno.Threading.Mutex mutex) :750
void LockGuard__New1_fn(::g::Uno::Threading::Mutex* mutex, LockGuard** __retval)
{
    *__retval = LockGuard::New1(mutex);
}

// private void Uno.IDisposable.Dispose() :761
void LockGuard__UnoIDisposableDispose_fn(LockGuard* __this)
{
    uStackFrame __("Uno.Threading.LockGuard", "Uno.IDisposable.Dispose()");
    uPtr(__this->_mutex)->Unlock();
}

// private LockGuard(Uno.Threading.Mutex mutex) [instance] :750
void LockGuard::ctor_(::g::Uno::Threading::Mutex* mutex)
{
    uStackFrame __("Uno.Threading.LockGuard", ".ctor(Uno.Threading.Mutex)");
    _mutex = mutex;
    uPtr(_mutex)->Lock();
}

// public static Uno.IDisposable Acquire(Uno.Threading.Mutex mutex) [static] :756
uObject* LockGuard::Acquire(::g::Uno::Threading::Mutex* mutex)
{
    uStackFrame __("Uno.Threading.LockGuard", "Acquire(Uno.Threading.Mutex)");
    return (uObject*)LockGuard::New1(mutex);
}

// private LockGuard New(Uno.Threading.Mutex mutex) [static] :750
LockGuard* LockGuard::New1(::g::Uno::Threading::Mutex* mutex)
{
    LockGuard* obj1 = (LockGuard*)uNew(LockGuard_typeof());
    obj1->ctor_(mutex);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/threading/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class MainThreadAttribute :8
// {
static void MainThreadAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainThreadAttribute__New1_fn, 0, true, type, 0));
}

uType* MainThreadAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(MainThreadAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.MainThreadAttribute", options);
    type->fp_build_ = MainThreadAttribute_build;
    type->fp_ctor_ = (void*)MainThreadAttribute__New1_fn;
    return type;
}

// public generated MainThreadAttribute() :8
void MainThreadAttribute__ctor_1_fn(MainThreadAttribute* __this)
{
    __this->ctor_1();
}

// public generated MainThreadAttribute New() :8
void MainThreadAttribute__New1_fn(MainThreadAttribute** __retval)
{
    *__retval = MainThreadAttribute::New1();
}

// public generated MainThreadAttribute() [instance] :8
void MainThreadAttribute::ctor_1()
{
    ctor_();
}

// public generated MainThreadAttribute New() [static] :8
MainThreadAttribute* MainThreadAttribute::New1()
{
    MainThreadAttribute* obj1 = (MainThreadAttribute*)uNew(MainThreadAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// public abstract class ManualResetEvent :700
// {
static void ManualResetEvent_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Feature not supported in this backend");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ManualResetEvent_type, interface0));
    type->Reflection.SetFunctions(4,
        new uFunction("Create", NULL, (void*)ManualResetEvent__Create_fn, 0, true, type, 1, ::g::Uno::Bool_typeof()),
        new uFunction("Dispose", NULL, NULL, offsetof(ManualResetEvent_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("Set", NULL, NULL, offsetof(ManualResetEvent_type, fp_Set), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("WaitOne", NULL, NULL, offsetof(ManualResetEvent_type, fp_WaitOne), false, ::g::Uno::Bool_typeof(), 0));
}

ManualResetEvent_type* ManualResetEvent_typeof()
{
    static uSStrong<ManualResetEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ManualResetEvent);
    options.TypeSize = sizeof(ManualResetEvent_type);
    type = (ManualResetEvent_type*)uClassType::New("Uno.Threading.ManualResetEvent", options);
    type->fp_build_ = ManualResetEvent_build;
    return type;
}

// protected generated ManualResetEvent() :700
void ManualResetEvent__ctor__fn(ManualResetEvent* __this)
{
    __this->ctor_();
}

// public static Uno.Threading.ManualResetEvent Create(bool initialState) :702
void ManualResetEvent__Create_fn(bool* initialState, ManualResetEvent** __retval)
{
    *__retval = ManualResetEvent::Create(*initialState);
}

// protected generated ManualResetEvent() [instance] :700
void ManualResetEvent::ctor_()
{
}

// public static Uno.Threading.ManualResetEvent Create(bool initialState) [static] :702
ManualResetEvent* ManualResetEvent::Create(bool initialState)
{
    uStackFrame __("Uno.Threading.ManualResetEvent", "Create(bool)");
    return ::g::Uno::Threading::PosixManualResetEvent::New1(initialState);
    return NULL;
    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Feature not...*/]));
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/threading/$.uno
// -------------------------------------------------------------------------------------------------------

// public static class Monitor :23
// {
static void Monitor_build(uType* type)
{
    type->Reflection.SetFunctions(2,
        new uFunction("Enter", NULL, (void*)Monitor__Enter_fn, 0, true, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("Exit", NULL, (void*)Monitor__Exit_fn, 0, true, uVoid_typeof(), 1, uObject_typeof()));
}

uClassType* Monitor_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Threading.Monitor", options);
    type->fp_build_ = Monitor_build;
    return type;
}

// public static void Enter(object obj) :25
void Monitor__Enter_fn(uObject* obj)
{
    Monitor::Enter(obj);
}

// public static void Exit(object obj) :48
void Monitor__Exit_fn(uObject* obj)
{
    Monitor::Exit(obj);
}

// public static void Enter(object obj) [static] :25
void Monitor::Enter(uObject* obj)
{
    if (uEnterCriticalIfNull(&obj->__lockptr))
                    {
                        obj->__lockptr = uBase::CreateMutex();
                        uExitCritical();
                    }
    
                    uBase::LockMutex(obj->__lockptr);
}

// public static void Exit(object obj) [static] :48
void Monitor::Exit(uObject* obj)
{
    uBase::UnlockMutex(obj->__lockptr);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// public abstract class Mutex :473
// {
static void Mutex_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Feature not supported in this backend");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Mutex_type, interface0));
    type->Reflection.SetFunctions(4,
        new uFunction("Create", NULL, (void*)Mutex__Create_fn, 0, true, type, 0),
        new uFunction("Dispose", NULL, NULL, offsetof(Mutex_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("Lock", NULL, NULL, offsetof(Mutex_type, fp_Lock), false, uVoid_typeof(), 0),
        new uFunction("Unlock", NULL, NULL, offsetof(Mutex_type, fp_Unlock), false, uVoid_typeof(), 0));
}

Mutex_type* Mutex_typeof()
{
    static uSStrong<Mutex_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Mutex);
    options.TypeSize = sizeof(Mutex_type);
    type = (Mutex_type*)uClassType::New("Uno.Threading.Mutex", options);
    type->fp_build_ = Mutex_build;
    return type;
}

// protected generated Mutex() :473
void Mutex__ctor__fn(Mutex* __this)
{
    __this->ctor_();
}

// public static Uno.Threading.Mutex Create() :475
void Mutex__Create_fn(Mutex** __retval)
{
    *__retval = Mutex::Create();
}

// protected generated Mutex() [instance] :473
void Mutex::ctor_()
{
}

// public static Uno.Threading.Mutex Create() [static] :475
Mutex* Mutex::Create()
{
    uStackFrame __("Uno.Threading.Mutex", "Create()");
    return ::g::Uno::Threading::POSIXMutex::New1();
    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Feature not...*/]));
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// private sealed class ThreadPool.ParameterizedWorkItem<TState> :800
// {
static void ThreadPool__ParameterizedWorkItem_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Threading::ThreadPool__ParameterizedWorkItem, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

::g::Uno::Threading::ThreadPool__WorkItem_type* ThreadPool__ParameterizedWorkItem_typeof()
{
    static uSStrong< ::g::Uno::Threading::ThreadPool__WorkItem_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::ThreadPool__WorkItem_typeof();
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ThreadPool__ParameterizedWorkItem);
    options.TypeSize = sizeof(::g::Uno::Threading::ThreadPool__WorkItem_type);
    type = (::g::Uno::Threading::ThreadPool__WorkItem_type*)uClassType::New("Uno.Threading.ThreadPool.ParameterizedWorkItem`1", options);
    type->fp_build_ = ThreadPool__ParameterizedWorkItem_build;
    type->fp_Invoke = (void(*)(::g::Uno::Threading::ThreadPool__WorkItem*))ThreadPool__ParameterizedWorkItem__Invoke_fn;
    return type;
}

// public override sealed void Invoke() :811
void ThreadPool__ParameterizedWorkItem__Invoke_fn(ThreadPool__ParameterizedWorkItem* __this)
{
    uStackFrame __("Uno.Threading.ThreadPool.ParameterizedWorkItem`1", "Invoke()");

    if (::g::Uno::Delegate::op_Inequality(__this->_action, NULL))
        uPtr(__this->_action)->InvokeVoid(__this->_state());
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/implementation/cpp/$.uno
// -----------------------------------------------------------------------------------------------------------

// internal sealed extern class PosixAutoResetEvent :370
// {
static void PosixAutoResetEvent_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::AutoResetEvent_type, interface0));
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Uno::Threading::PosixAutoResetEvent, _handle), 0);
}

::g::Uno::Threading::AutoResetEvent_type* PosixAutoResetEvent_typeof()
{
    static uSStrong< ::g::Uno::Threading::AutoResetEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::AutoResetEvent_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PosixAutoResetEvent);
    options.TypeSize = sizeof(::g::Uno::Threading::AutoResetEvent_type);
    type = (::g::Uno::Threading::AutoResetEvent_type*)uClassType::New("Uno.Threading.PosixAutoResetEvent", options);
    type->fp_build_ = PosixAutoResetEvent_build;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::AutoResetEvent*))PosixAutoResetEvent__Dispose_fn;
    type->fp_Set = (void(*)(::g::Uno::Threading::AutoResetEvent*, bool*))PosixAutoResetEvent__Set_fn;
    type->fp_WaitOne = (void(*)(::g::Uno::Threading::AutoResetEvent*, bool*))PosixAutoResetEvent__WaitOne_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))PosixAutoResetEvent__Dispose_fn;
    return type;
}

// public PosixAutoResetEvent(bool initialState) :374
void PosixAutoResetEvent__ctor_1_fn(PosixAutoResetEvent* __this, bool* initialState)
{
    __this->ctor_1(*initialState);
}

// public override sealed void Dispose() :399
void PosixAutoResetEvent__Dispose_fn(PosixAutoResetEvent* __this)
{
    FreeState( __this->_handle );
}

// public PosixAutoResetEvent New(bool initialState) :374
void PosixAutoResetEvent__New1_fn(bool* initialState, PosixAutoResetEvent** __retval)
{
    *__retval = PosixAutoResetEvent::New1(*initialState);
}

// public override sealed bool Set() :394
void PosixAutoResetEvent__Set_fn(PosixAutoResetEvent* __this, bool* __retval)
{
    return *__retval = ResetEvent_Set( __this->_handle ), void();
}

// public override sealed bool WaitOne() :379
void PosixAutoResetEvent__WaitOne_fn(PosixAutoResetEvent* __this, bool* __retval)
{
    return *__retval = ResetEvent_WaitOne( __this->_handle ), void();
}

// public PosixAutoResetEvent(bool initialState) [instance] :374
void PosixAutoResetEvent::ctor_1(bool initialState)
{
    _handle = ::g::Uno::IntPtr::Zero_;
    ctor_();
    _handle = AllocateState( initialState, true );
}

// public PosixAutoResetEvent New(bool initialState) [static] :374
PosixAutoResetEvent* PosixAutoResetEvent::New1(bool initialState)
{
    PosixAutoResetEvent* obj1 = (PosixAutoResetEvent*)uNew(PosixAutoResetEvent_typeof());
    obj1->ctor_1(initialState);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/implementation/cpp/$.uno
// -----------------------------------------------------------------------------------------------------------

// internal sealed extern class PosixManualResetEvent :406
// {
static void PosixManualResetEvent_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::ManualResetEvent_type, interface0));
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Uno::Threading::PosixManualResetEvent, _handle), 0);
}

::g::Uno::Threading::ManualResetEvent_type* PosixManualResetEvent_typeof()
{
    static uSStrong< ::g::Uno::Threading::ManualResetEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::ManualResetEvent_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PosixManualResetEvent);
    options.TypeSize = sizeof(::g::Uno::Threading::ManualResetEvent_type);
    type = (::g::Uno::Threading::ManualResetEvent_type*)uClassType::New("Uno.Threading.PosixManualResetEvent", options);
    type->fp_build_ = PosixManualResetEvent_build;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::ManualResetEvent*))PosixManualResetEvent__Dispose_fn;
    type->fp_Set = (void(*)(::g::Uno::Threading::ManualResetEvent*, bool*))PosixManualResetEvent__Set_fn;
    type->fp_WaitOne = (void(*)(::g::Uno::Threading::ManualResetEvent*, bool*))PosixManualResetEvent__WaitOne_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))PosixManualResetEvent__Dispose_fn;
    return type;
}

// public PosixManualResetEvent(bool initialState) :410
void PosixManualResetEvent__ctor_1_fn(PosixManualResetEvent* __this, bool* initialState)
{
    __this->ctor_1(*initialState);
}

// public override sealed void Dispose() :435
void PosixManualResetEvent__Dispose_fn(PosixManualResetEvent* __this)
{
    FreeState( __this->_handle );
}

// public PosixManualResetEvent New(bool initialState) :410
void PosixManualResetEvent__New1_fn(bool* initialState, PosixManualResetEvent** __retval)
{
    *__retval = PosixManualResetEvent::New1(*initialState);
}

// public override sealed bool Set() :430
void PosixManualResetEvent__Set_fn(PosixManualResetEvent* __this, bool* __retval)
{
    return *__retval = ResetEvent_Set( __this->_handle ), void();
}

// public override sealed bool WaitOne() :415
void PosixManualResetEvent__WaitOne_fn(PosixManualResetEvent* __this, bool* __retval)
{
    return *__retval = ResetEvent_WaitOne( __this->_handle ), void();
}

// public PosixManualResetEvent(bool initialState) [instance] :410
void PosixManualResetEvent::ctor_1(bool initialState)
{
    _handle = ::g::Uno::IntPtr::Zero_;
    ctor_();
    _handle = AllocateState( initialState, false );
}

// public PosixManualResetEvent New(bool initialState) [static] :410
PosixManualResetEvent* PosixManualResetEvent::New1(bool initialState)
{
    PosixManualResetEvent* obj1 = (PosixManualResetEvent*)uNew(PosixManualResetEvent_typeof());
    obj1->ctor_1(initialState);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/implementation/cpp/$.uno
// -----------------------------------------------------------------------------------------------------------

// internal sealed extern class POSIXMutex :77
// {
static void POSIXMutex_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Failed to create mutex");
    ::STRINGS[4] = uString::Const("Cannot lock a disposed mutex");
    ::STRINGS[5] = uString::Const("Cannot unlock a disposed mutex");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Mutex_type, interface0));
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Uno::Threading::POSIXMutex, _handle), 0);
}

::g::Uno::Threading::Mutex_type* POSIXMutex_typeof()
{
    static uSStrong< ::g::Uno::Threading::Mutex_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Mutex_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(POSIXMutex);
    options.TypeSize = sizeof(::g::Uno::Threading::Mutex_type);
    type = (::g::Uno::Threading::Mutex_type*)uClassType::New("Uno.Threading.POSIXMutex", options);
    type->fp_build_ = POSIXMutex_build;
    type->fp_ctor_ = (void*)POSIXMutex__New1_fn;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Mutex*))POSIXMutex__Dispose_fn;
    type->fp_Lock = (void(*)(::g::Uno::Threading::Mutex*))POSIXMutex__Lock_fn;
    type->fp_Unlock = (void(*)(::g::Uno::Threading::Mutex*))POSIXMutex__Unlock_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))POSIXMutex__Dispose_fn;
    return type;
}

// public POSIXMutex() :81
void POSIXMutex__ctor_1_fn(POSIXMutex* __this)
{
    __this->ctor_1();
}

// public override sealed void Dispose() :112
void POSIXMutex__Dispose_fn(POSIXMutex* __this)
{
    if (::g::Uno::IntPtr::op_Inequality(__this->_handle, ::g::Uno::IntPtr::Zero_))
    {
        free_mutex(__this->_handle);
        __this->_handle = ::g::Uno::IntPtr::Zero_;
    }
}

// public override sealed void Lock() :88
void POSIXMutex__Lock_fn(POSIXMutex* __this)
{
    uStackFrame __("Uno.Threading.POSIXMutex", "Lock()");

    if (::g::Uno::IntPtr::op_Equality(__this->_handle, ::g::Uno::IntPtr::Zero_))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"Cannot lock...*/]));

    pthread_mutex_lock( (pthread_mutex_t*)__this->_handle );
}

// public POSIXMutex New() :81
void POSIXMutex__New1_fn(POSIXMutex** __retval)
{
    *__retval = POSIXMutex::New1();
}

// public override sealed void Unlock() :104
void POSIXMutex__Unlock_fn(POSIXMutex* __this)
{
    uStackFrame __("Uno.Threading.POSIXMutex", "Unlock()");

    if (::g::Uno::IntPtr::op_Equality(__this->_handle, ::g::Uno::IntPtr::Zero_))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[5/*"Cannot unlo...*/]));

    pthread_mutex_unlock( (pthread_mutex_t*)__this->_handle );
}

// public POSIXMutex() [instance] :81
void POSIXMutex::ctor_1()
{
    uStackFrame __("Uno.Threading.POSIXMutex", ".ctor()");
    ctor_();
    _handle = init_mutex();

    if (::g::Uno::IntPtr::op_Equality(_handle, ::g::Uno::IntPtr::Zero_))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"Failed to c...*/]));
}

// public POSIXMutex New() [static] :81
POSIXMutex* POSIXMutex::New1()
{
    POSIXMutex* obj1 = (POSIXMutex*)uNew(POSIXMutex_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/implementation/cpp/$.uno
// -----------------------------------------------------------------------------------------------------------

// internal sealed extern class POSIXThread :262
// {
static void POSIXThread_build(uType* type)
{
    ::STRINGS[6] = uString::Const("Cannot join unstarted thread");
    ::STRINGS[7] = uString::Const("Cannot start throw more than once");
    ::TYPES[10] = ::g::Uno::Action_typeof();
    type->SetFields(1,
        ::g::Uno::ULong_typeof(), offsetof(::g::Uno::Threading::POSIXThread, _posixHandle), 0);
}

::g::Uno::Threading::Thread_type* POSIXThread_typeof()
{
    static uSStrong< ::g::Uno::Threading::Thread_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Thread_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(POSIXThread);
    options.TypeSize = sizeof(::g::Uno::Threading::Thread_type);
    type = (::g::Uno::Threading::Thread_type*)uClassType::New("Uno.Threading.POSIXThread", options);
    type->fp_build_ = POSIXThread_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))POSIXThread__Equals_fn;
    type->fp_Join = (void(*)(::g::Uno::Threading::Thread*))POSIXThread__Join_fn;
    type->fp_Join1 = (void(*)(::g::Uno::Threading::Thread*, int*, bool*))POSIXThread__Join1_fn;
    type->fp_Start = (void(*)(::g::Uno::Threading::Thread*))POSIXThread__Start_fn;
    return type;
}

// private POSIXThread(ulong handle) :292
void POSIXThread__ctor_1_fn(POSIXThread* __this, uint64_t* handle)
{
    __this->ctor_1(*handle);
}

// public POSIXThread(Uno.Action callback) :298
void POSIXThread__ctor_2_fn(POSIXThread* __this, uDelegate* callback)
{
    __this->ctor_2(callback);
}

// public static Uno.Threading.POSIXThread get_CurrentThread() :287
void POSIXThread__get_CurrentThread1_fn(POSIXThread** __retval)
{
    *__retval = POSIXThread::CurrentThread1();
}

// public override sealed bool Equals(object o) :350
void POSIXThread__Equals_fn(POSIXThread* __this, uObject* o, bool* __retval)
{
    uStackFrame __("Uno.Threading.POSIXThread", "Equals(object)");
    return *__retval = uIs(o, __this->__type) ? pthread_equal((pthread_t)__this->_posixHandle, (pthread_t)uPtr(uCast<POSIXThread*>(o, __this->__type))->_posixHandle) != 0 : false, void();
}

// public override sealed void Join() :326
void POSIXThread__Join_fn(POSIXThread* __this)
{
    uStackFrame __("Uno.Threading.POSIXThread", "Join()");

    if (__this->_posixHandle == 0ULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[6/*"Cannot join...*/]));

    pthread_join(((pthread_t)__this->_posixHandle), NULL);
}

// public override sealed bool Join(int timeoutMillis) :334
void POSIXThread__Join1_fn(POSIXThread* __this, int* timeoutMillis, bool* __retval)
{
    uStackFrame __("Uno.Threading.POSIXThread", "Join(int)");
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// private POSIXThread New(ulong handle) :292
void POSIXThread__New1_fn(uint64_t* handle, POSIXThread** __retval)
{
    *__retval = POSIXThread::New1(*handle);
}

// public POSIXThread New(Uno.Action callback) :298
void POSIXThread__New2_fn(uDelegate* callback, POSIXThread** __retval)
{
    *__retval = POSIXThread::New2(callback);
}

// public static void Sleep(int millis) :344
void POSIXThread__Sleep1_fn(int* millis)
{
    POSIXThread::Sleep1(*millis);
}

// public override sealed void Start() :317
void POSIXThread__Start_fn(POSIXThread* __this)
{
    uStackFrame __("Uno.Threading.POSIXThread", "Start()");
    uRetain(__this->_callback);

    if (__this->_posixHandle != 0ULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[7/*"Cannot star...*/]));

    thread_start( &__this->_posixHandle, __this->_callback );
}

// private POSIXThread(ulong handle) [instance] :292
void POSIXThread::ctor_1(uint64_t handle)
{
    _posixHandle = 0ULL;
    ctor_(NULL);
    _posixHandle = handle;
}

// public POSIXThread(Uno.Action callback) [instance] :298
void POSIXThread::ctor_2(uDelegate* callback)
{
    _posixHandle = 0ULL;
    ctor_(callback);
    POSIXThread__ReleasingLauncher* l = POSIXThread__ReleasingLauncher::New1(callback);
    _callback = uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)POSIXThread__ReleasingLauncher__Run_fn, l);
}

// private POSIXThread New(ulong handle) [static] :292
POSIXThread* POSIXThread::New1(uint64_t handle)
{
    POSIXThread* obj1 = (POSIXThread*)uNew(POSIXThread_typeof());
    obj1->ctor_1(handle);
    return obj1;
}

// public POSIXThread New(Uno.Action callback) [static] :298
POSIXThread* POSIXThread::New2(uDelegate* callback)
{
    POSIXThread* obj2 = (POSIXThread*)uNew(POSIXThread_typeof());
    obj2->ctor_2(callback);
    return obj2;
}

// public static void Sleep(int millis) [static] :344
void POSIXThread::Sleep1(int millis)
{
    uint64_t microSeconds = (uint64_t)millis * 1000ULL;
    thread_sleep( microSeconds );
}

// public static Uno.Threading.POSIXThread get_CurrentThread() [static] :287
POSIXThread* POSIXThread::CurrentThread1()
{
    return POSIXThread::New1((uint64_t)pthread_self());
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// public class Promise<T> :366
// {
static void Promise_build(uType* type)
{
    ::TYPES[16] = ::g::Uno::Threading::TaskFuture_typeof();
    type->SetBase(::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0), NULL));
    type->SetPrecalc(
        ::g::Uno::Threading::TaskFuture_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9);
    type->Reflection.SetFunctions(8,
        new uFunction(".ctor", type, (void*)Promise__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", type, (void*)Promise__New2_fn, 0, true, type, 1, type->T(0)),
        new uFunction(".ctor", type, (void*)Promise__New3_fn, 0, true, type, 1, ::g::Uno::Threading::IDispatcher_typeof()),
        new uFunction(".ctor", type, (void*)Promise__New4_fn, 0, true, type, 2, ::g::Uno::Threading::IDispatcher_typeof(), type->T(0)),
        new uFunction("Reject", NULL, (void*)Promise__Reject_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Exception_typeof()),
        new uFunction("Resolve", NULL, (void*)Promise__Resolve_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("Run", type, (void*)Promise__Run_fn, 0, true, ::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0), NULL), 1, ::g::Uno::Func_typeof()->MakeType(type->T(0), NULL)),
        new uFunction("Run", type, (void*)Promise__Run1_fn, 0, true, ::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0), NULL), 2, ::g::Uno::Threading::IDispatcher_typeof(), ::g::Uno::Func_typeof()->MakeType(type->T(0), NULL)));
}

::g::Uno::Threading::Future_type* Promise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Future1_typeof();
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Promise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Uno.Threading.Promise`1", options);
    type->fp_build_ = Promise_build;
    type->fp_ctor_ = (void*)Promise__New1_fn;
    type->fp_Cancel = (void(*)(::g::Uno::Threading::Future*, bool*))Promise__Cancel_fn;
    type->fp_Wait = (void(*)(::g::Uno::Threading::Future*))Promise__Wait_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public Promise() :388
void Promise__ctor_3_fn(Promise* __this)
{
    __this->ctor_3();
}

// public Promise(T result) :376
void Promise__ctor_4_fn(Promise* __this, void* result)
{
    uStackFrame __("Uno.Threading.Promise`1", ".ctor(T)");
    __this->ctor_1();
    Promise__Resolve_fn(__this, result);
}

// public Promise(Uno.Threading.IDispatcher dispatcher) :386
void Promise__ctor_5_fn(Promise* __this, uObject* dispatcher)
{
    __this->ctor_5(dispatcher);
}

// public Promise(Uno.Threading.IDispatcher dispatcher, T result) :381
void Promise__ctor_6_fn(Promise* __this, uObject* dispatcher, void* result)
{
    uStackFrame __("Uno.Threading.Promise`1", ".ctor(Uno.Threading.IDispatcher,T)");
    __this->ctor_2(dispatcher);
    Promise__Resolve_fn(__this, result);
}

// public override void Cancel([bool shutdownGracefully]) :372
void Promise__Cancel_fn(Promise* __this, bool* shutdownGracefully)
{
}

// public Promise New() :388
void Promise__New1_fn(uType* __type, Promise** __retval)
{
    *__retval = Promise::New1(__type);
}

// public Promise New(T result) :376
void Promise__New2_fn(uType* __type, void* result, Promise** __retval)
{
    Promise* obj1 = (Promise*)uNew(__type);
    Promise__ctor_4_fn(obj1, result);
    return *__retval = obj1, void();
}

// public Promise New(Uno.Threading.IDispatcher dispatcher) :386
void Promise__New3_fn(uType* __type, uObject* dispatcher, Promise** __retval)
{
    *__retval = Promise::New3(__type, dispatcher);
}

// public Promise New(Uno.Threading.IDispatcher dispatcher, T result) :381
void Promise__New4_fn(uType* __type, uObject* dispatcher, void* result, Promise** __retval)
{
    Promise* obj2 = (Promise*)uNew(__type);
    Promise__ctor_6_fn(obj2, dispatcher, result);
    return *__retval = obj2, void();
}

// public void Reject(Uno.Exception reason) :395
void Promise__Reject_fn(Promise* __this, ::g::Uno::Exception* reason)
{
    __this->Reject(reason);
}

// public void Resolve(T result) :390
void Promise__Resolve_fn(Promise* __this, void* result)
{
    uStackFrame __("Uno.Threading.Promise`1", "Resolve(T)");
    ::g::Uno::Threading::Future1__InternalResolve_fn(__this, result);
}

// public static Uno.Threading.Future<T> Run(Uno.Func<T> func) :405
void Promise__Run_fn(uType* __type, uDelegate* func, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Promise::Run(__type, func);
}

// public static Uno.Threading.Future<T> Run(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) :400
void Promise__Run1_fn(uType* __type, uObject* dispatcher, uDelegate* func, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Promise::Run1(__type, dispatcher, func);
}

// public override sealed void Wait() :368
void Promise__Wait_fn(Promise* __this)
{
}

// public Promise() [instance] :388
void Promise::ctor_3()
{
    uStackFrame __("Uno.Threading.Promise`1", ".ctor()");
    ctor_1();
}

// public Promise(Uno.Threading.IDispatcher dispatcher) [instance] :386
void Promise::ctor_5(uObject* dispatcher)
{
    uStackFrame __("Uno.Threading.Promise`1", ".ctor(Uno.Threading.IDispatcher)");
    ctor_2(dispatcher);
}

// public void Reject(Uno.Exception reason) [instance] :395
void Promise::Reject(::g::Uno::Exception* reason)
{
    uStackFrame __("Uno.Threading.Promise`1", "Reject(Uno.Exception)");
    InternalReject(reason);
}

// public Promise New() [static] :388
Promise* Promise::New1(uType* __type)
{
    Promise* obj4 = (Promise*)uNew(__type);
    obj4->ctor_3();
    return obj4;
}

// public Promise New(Uno.Threading.IDispatcher dispatcher) [static] :386
Promise* Promise::New3(uType* __type, uObject* dispatcher)
{
    Promise* obj3 = (Promise*)uNew(__type);
    obj3->ctor_5(dispatcher);
    return obj3;
}

// public static Uno.Threading.Future<T> Run(Uno.Func<T> func) [static] :405
::g::Uno::Threading::Future1* Promise::Run(uType* __type, uDelegate* func)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.TaskFuture<T>*/),
    };
    return (::g::Uno::Threading::TaskFuture*)::g::Uno::Threading::TaskFuture::New1(__types[0], func);
}

// public static Uno.Threading.Future<T> Run(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) [static] :400
::g::Uno::Threading::Future1* Promise::Run1(uType* __type, uObject* dispatcher, uDelegate* func)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.TaskFuture<T>*/),
    };
    return (::g::Uno::Threading::TaskFuture*)::g::Uno::Threading::TaskFuture::New2(__types[0], dispatcher, func);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/implementation/cpp/$.uno
// -----------------------------------------------------------------------------------------------------------

// private sealed class POSIXThread.ReleasingLauncher :264
// {
static void POSIXThread__ReleasingLauncher_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Uno::Threading::POSIXThread__ReleasingLauncher, _callback), 0);
}

uType* POSIXThread__ReleasingLauncher_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(POSIXThread__ReleasingLauncher);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.POSIXThread.ReleasingLauncher", options);
    type->fp_build_ = POSIXThread__ReleasingLauncher_build;
    return type;
}

// public ReleasingLauncher(Uno.Action callback) :267
void POSIXThread__ReleasingLauncher__ctor__fn(POSIXThread__ReleasingLauncher* __this, uDelegate* callback)
{
    __this->ctor_(callback);
}

// public ReleasingLauncher New(Uno.Action callback) :267
void POSIXThread__ReleasingLauncher__New1_fn(uDelegate* callback, POSIXThread__ReleasingLauncher** __retval)
{
    *__retval = POSIXThread__ReleasingLauncher::New1(callback);
}

// public void Run() :272
void POSIXThread__ReleasingLauncher__Run_fn(POSIXThread__ReleasingLauncher* __this)
{
    __this->Run();
}

// public ReleasingLauncher(Uno.Action callback) [instance] :267
void POSIXThread__ReleasingLauncher::ctor_(uDelegate* callback)
{
    _callback = callback;
}

// public void Run() [instance] :272
void POSIXThread__ReleasingLauncher::Run()
{
    uStackFrame __("Uno.Threading.POSIXThread.ReleasingLauncher", "Run()");

    {
        const auto __finally_fun = [&]()
        {
            uRelease(this);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uPtr(_callback)->InvokeVoid();
    }
}

// public ReleasingLauncher New(Uno.Action callback) [static] :267
POSIXThread__ReleasingLauncher* POSIXThread__ReleasingLauncher::New1(uDelegate* callback)
{
    POSIXThread__ReleasingLauncher* obj1 = (POSIXThread__ReleasingLauncher*)uNew(POSIXThread__ReleasingLauncher_typeof());
    obj1->ctor_(callback);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// internal sealed class SyncDispatcher :347
// {
static void SyncDispatcher_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(SyncDispatcher_type, interface0));
}

SyncDispatcher_type* SyncDispatcher_typeof()
{
    static uSStrong<SyncDispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SyncDispatcher);
    options.TypeSize = sizeof(SyncDispatcher_type);
    type = (SyncDispatcher_type*)uClassType::New("Uno.Threading.SyncDispatcher", options);
    type->fp_build_ = SyncDispatcher_build;
    type->fp_ctor_ = (void*)SyncDispatcher__New1_fn;
    type->interface0.fp_Invoke = (void(*)(uObject*, uDelegate*))SyncDispatcher__Invoke_fn;
    return type;
}

// public generated SyncDispatcher() :347
void SyncDispatcher__ctor__fn(SyncDispatcher* __this)
{
    __this->ctor_();
}

// public void Invoke(Uno.Action action) :349
void SyncDispatcher__Invoke_fn(SyncDispatcher* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public generated SyncDispatcher New() :347
void SyncDispatcher__New1_fn(SyncDispatcher** __retval)
{
    *__retval = SyncDispatcher::New1();
}

// public generated SyncDispatcher() [instance] :347
void SyncDispatcher::ctor_()
{
}

// public void Invoke(Uno.Action action) [instance] :349
void SyncDispatcher::Invoke(uDelegate* action)
{
    uStackFrame __("Uno.Threading.SyncDispatcher", "Invoke(Uno.Action)");
    uPtr(action)->InvokeVoid();
}

// public generated SyncDispatcher New() [static] :347
SyncDispatcher* SyncDispatcher::New1()
{
    SyncDispatcher* obj1 = (SyncDispatcher*)uNew(SyncDispatcher_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/tasks/$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class Task :65
// {
static void Task_build(uType* type)
{
    ::TYPES[8] = ::g::Uno::Exception_typeof();
    ::TYPES[17] = ::TYPES[8/*Uno.Exception*/]->Array();
    ::TYPES[18] = ::g::Uno::Threading::ITaskScheduler_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Task_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::CancellationTokenSource_typeof(), offsetof(::g::Uno::Threading::Task, _cancellationTokenSource), 0,
        ::g::Uno::AggregateException_typeof(), offsetof(::g::Uno::Threading::Task, _exception), 0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(::g::Uno::Threading::Task, _manualResetEvent), 0,
        ::g::Uno::Threading::TaskDelegate_typeof(), offsetof(::g::Uno::Threading::Task, _taskDelegate), 0,
        ::g::Uno::Threading::TaskStatus_typeof(), offsetof(::g::Uno::Threading::Task, _taskStatus), 0);
}

Task_type* Task_typeof()
{
    static uSStrong<Task_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Task);
    options.TypeSize = sizeof(Task_type);
    type = (Task_type*)uClassType::New("Uno.Threading.Task", options);
    type->fp_build_ = Task_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Task__Dispose_fn;
    return type;
}

// public Task(Uno.Threading.TaskDelegate taskDelegate) :106
void Task__ctor__fn(Task* __this, uDelegate* taskDelegate)
{
    __this->ctor_(taskDelegate);
}

// public Uno.Threading.CancellationTokenSource get_CancellationTokenSource() :92
void Task__get_CancellationTokenSource_fn(Task* __this, ::g::Uno::Threading::CancellationTokenSource** __retval)
{
    *__retval = __this->CancellationTokenSource();
}

// public void Dispose() :121
void Task__Dispose_fn(Task* __this)
{
    __this->Dispose();
}

// public Uno.AggregateException get_Exception() :86
void Task__get_Exception_fn(Task* __this, ::g::Uno::AggregateException** __retval)
{
    *__retval = __this->Exception();
}

// protected void set_Exception(Uno.AggregateException value) :87
void Task__set_Exception_fn(Task* __this, ::g::Uno::AggregateException* value)
{
    __this->Exception(value);
}

// internal void Execute() :126
void Task__Execute_fn(Task* __this)
{
    __this->Execute();
}

// protected void InvokeTaskDelegate() :145
void Task__InvokeTaskDelegate_fn(Task* __this)
{
    __this->InvokeTaskDelegate();
}

// public Task New(Uno.Threading.TaskDelegate taskDelegate) :106
void Task__New1_fn(uDelegate* taskDelegate, Task** __retval)
{
    *__retval = Task::New1(taskDelegate);
}

// public static Uno.Threading.Task Run(Uno.Threading.TaskDelegate taskDelegate) :165
void Task__Run_fn(uDelegate* taskDelegate, Task** __retval)
{
    *__retval = Task::Run(taskDelegate);
}

// public static Uno.Threading.Task Run(Uno.Threading.TaskDelegate taskDelegate, Uno.Threading.ITaskScheduler scheduler) :151
void Task__Run1_fn(uDelegate* taskDelegate, uObject* scheduler, Task** __retval)
{
    *__retval = Task::Run1(taskDelegate, scheduler);
}

// public Uno.Threading.TaskStatus get_Status() :80
void Task__get_Status_fn(Task* __this, int* __retval)
{
    *__retval = __this->Status();
}

// protected void set_Status(Uno.Threading.TaskStatus value) :81
void Task__set_Status_fn(Task* __this, int* value)
{
    __this->Status(*value);
}

// public void Wait() :111
void Task__Wait_fn(Task* __this)
{
    __this->Wait();
}

// public Task(Uno.Threading.TaskDelegate taskDelegate) [instance] :106
void Task::ctor_(uDelegate* taskDelegate)
{
    uStackFrame __("Uno.Threading.Task", ".ctor(Uno.Threading.TaskDelegate)");
    _cancellationTokenSource = ::g::Uno::Threading::CancellationTokenSource::New1();
    _manualResetEvent = ::g::Uno::Threading::ManualResetEvent::Create(false);
    _taskDelegate = taskDelegate;
}

// public Uno.Threading.CancellationTokenSource get_CancellationTokenSource() [instance] :92
::g::Uno::Threading::CancellationTokenSource* Task::CancellationTokenSource()
{
    return _cancellationTokenSource;
}

// public void Dispose() [instance] :121
void Task::Dispose()
{
    uStackFrame __("Uno.Threading.Task", "Dispose()");
    uPtr(_manualResetEvent)->Dispose();
}

// public Uno.AggregateException get_Exception() [instance] :86
::g::Uno::AggregateException* Task::Exception()
{
    return _exception;
}

// protected void set_Exception(Uno.AggregateException value) [instance] :87
void Task::Exception(::g::Uno::AggregateException* value)
{
    _exception = value;
}

// internal void Execute() [instance] :126
void Task::Execute()
{
    uStackFrame __("Uno.Threading.Task", "Execute()");

    {
        const auto __finally_fun = [&]()
        {
            uPtr(_manualResetEvent)->Set();
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        try
        {
            Status(3);
            InvokeTaskDelegate();
            Status(2);
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            Status(1);
            Exception(::g::Uno::AggregateException::New7(uArray::Init< ::g::Uno::Exception*>(::TYPES[17/*Uno.Exception[]*/], 1, e)));
        }
    }
}

// protected void InvokeTaskDelegate() [instance] :145
void Task::InvokeTaskDelegate()
{
    uStackFrame __("Uno.Threading.Task", "InvokeTaskDelegate()");

    if (::g::Uno::Delegate::op_Inequality(_taskDelegate, NULL))
        uPtr(_taskDelegate)->InvokeVoid(uPtr(CancellationTokenSource())->Token());
}

// public Uno.Threading.TaskStatus get_Status() [instance] :80
int Task::Status()
{
    return _taskStatus;
}

// protected void set_Status(Uno.Threading.TaskStatus value) [instance] :81
void Task::Status(int value)
{
    _taskStatus = value;
}

// public void Wait() [instance] :111
void Task::Wait()
{
    uStackFrame __("Uno.Threading.Task", "Wait()");
    uPtr(_manualResetEvent)->WaitOne();
}

// public Task New(Uno.Threading.TaskDelegate taskDelegate) [static] :106
Task* Task::New1(uDelegate* taskDelegate)
{
    Task* obj1 = (Task*)uNew(Task_typeof());
    obj1->ctor_(taskDelegate);
    return obj1;
}

// public static Uno.Threading.Task Run(Uno.Threading.TaskDelegate taskDelegate) [static] :165
Task* Task::Run(uDelegate* taskDelegate)
{
    uStackFrame __("Uno.Threading.Task", "Run(Uno.Threading.TaskDelegate)");
    return Task::Run1(taskDelegate, (uObject*)::g::Uno::Threading::ThreadPoolTaskScheduler::Default());
}

// public static Uno.Threading.Task Run(Uno.Threading.TaskDelegate taskDelegate, Uno.Threading.ITaskScheduler scheduler) [static] :151
Task* Task::Run1(uDelegate* taskDelegate, uObject* scheduler)
{
    uStackFrame __("Uno.Threading.Task", "Run(Uno.Threading.TaskDelegate,Uno.Threading.ITaskScheduler)");
    Task* task = Task::New1(taskDelegate);
    ::g::Uno::Threading::ITaskScheduler::ScheduleTask(uInterface(uPtr(scheduler), ::TYPES[18/*Uno.Threading.ITaskScheduler*/]), task);
    return task;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/tasks/$.uno
// ----------------------------------------------------------------------------------------------

// internal delegate void TaskDelegate(Uno.Threading.CancellationToken cancellationToken) :61
uDelegateType* TaskDelegate_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Threading.TaskDelegate", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Threading::CancellationToken_typeof());
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// internal sealed class TaskFuture<T> :411
// {
static void TaskFuture_build(uType* type)
{
    ::TYPES[19] = ::g::Uno::Threading::TaskDelegate_typeof();
    ::TYPES[8] = ::g::Uno::Exception_typeof();
    type->SetBase(::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0), NULL));
    type->SetPrecalc(
        type->T(0));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::g::Uno::Func_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Threading::TaskFuture, _func), 0,
        ::g::Uno::Threading::Task_typeof(), offsetof(::g::Uno::Threading::TaskFuture, _task), 0);
}

::g::Uno::Threading::Future_type* TaskFuture_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Future1_typeof();
    options.FieldCount = 11;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(TaskFuture);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Uno.Threading.TaskFuture`1", options);
    type->fp_build_ = TaskFuture_build;
    type->fp_Cancel = (void(*)(::g::Uno::Threading::Future*, bool*))TaskFuture__Cancel_fn;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))TaskFuture__Dispose_fn;
    type->fp_Wait = (void(*)(::g::Uno::Threading::Future*))TaskFuture__Wait_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TaskFuture__Dispose_fn;
    return type;
}

// public TaskFuture(Uno.Func<T> func) :423
void TaskFuture__ctor_3_fn(TaskFuture* __this, uDelegate* func)
{
    __this->ctor_3(func);
}

// public TaskFuture(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) :417
void TaskFuture__ctor_4_fn(TaskFuture* __this, uObject* dispatcher, uDelegate* func)
{
    __this->ctor_4(dispatcher, func);
}

// public override sealed void Cancel([bool shutdownGracefully]) :449
void TaskFuture__Cancel_fn(TaskFuture* __this, bool* shutdownGracefully)
{
    uStackFrame __("Uno.Threading.TaskFuture`1", "Cancel([bool])");
    uPtr(uPtr(__this->_task)->CancellationTokenSource())->Cancel();
}

// public override sealed void Dispose() :454
void TaskFuture__Dispose_fn(TaskFuture* __this)
{
    uStackFrame __("Uno.Threading.TaskFuture`1", "Dispose()");
    ::g::Uno::Threading::Future1__Dispose_fn(__this);
    uPtr(__this->_task)->Dispose();
}

// private void Invoke(Uno.Threading.CancellationToken cancellationToken) :429
void TaskFuture__Invoke1_fn(TaskFuture* __this, ::g::Uno::Threading::CancellationToken* cancellationToken)
{
    __this->Invoke1(cancellationToken);
}

// public TaskFuture New(Uno.Func<T> func) :423
void TaskFuture__New1_fn(uType* __type, uDelegate* func, TaskFuture** __retval)
{
    *__retval = TaskFuture::New1(__type, func);
}

// public TaskFuture New(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) :417
void TaskFuture__New2_fn(uType* __type, uObject* dispatcher, uDelegate* func, TaskFuture** __retval)
{
    *__retval = TaskFuture::New2(__type, dispatcher, func);
}

// public override sealed void Wait() :444
void TaskFuture__Wait_fn(TaskFuture* __this)
{
    uStackFrame __("Uno.Threading.TaskFuture`1", "Wait()");
    uPtr(__this->_task)->Wait();
}

// public TaskFuture(Uno.Func<T> func) [instance] :423
void TaskFuture::ctor_3(uDelegate* func)
{
    uStackFrame __("Uno.Threading.TaskFuture`1", ".ctor(Uno.Func<T>)");
    ctor_1();
    _func = func;
    _task = ::g::Uno::Threading::Task::Run(uDelegate::New(::TYPES[19/*Uno.Threading.TaskDelegate*/], (void*)TaskFuture__Invoke1_fn, this));
}

// public TaskFuture(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) [instance] :417
void TaskFuture::ctor_4(uObject* dispatcher, uDelegate* func)
{
    uStackFrame __("Uno.Threading.TaskFuture`1", ".ctor(Uno.Threading.IDispatcher,Uno.Func<T>)");
    ctor_2(dispatcher);
    _func = func;
    _task = ::g::Uno::Threading::Task::Run(uDelegate::New(::TYPES[19/*Uno.Threading.TaskDelegate*/], (void*)TaskFuture__Invoke1_fn, this));
}

// private void Invoke(Uno.Threading.CancellationToken cancellationToken) [instance] :429
void TaskFuture::Invoke1(::g::Uno::Threading::CancellationToken* cancellationToken)
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
    };
    uStackFrame __("Uno.Threading.TaskFuture`1", "Invoke(Uno.Threading.CancellationToken)");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT result(__types[0], U_ALLOCA(__types[0]->ValueSize));

    try
    {
        result = uT(__types[0], U_ALLOCA(__types[0]->ValueSize));

        if (::g::Uno::Delegate::op_Inequality(_func, NULL))
            result = (uPtr(_func)->Invoke(&ret3), ret3);

        ::g::Uno::Threading::Future1__InternalResolve_fn(this, result);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        InternalReject(e);
    }
}

// public TaskFuture New(Uno.Func<T> func) [static] :423
TaskFuture* TaskFuture::New1(uType* __type, uDelegate* func)
{
    TaskFuture* obj2 = (TaskFuture*)uNew(__type);
    obj2->ctor_3(func);
    return obj2;
}

// public TaskFuture New(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) [static] :417
TaskFuture* TaskFuture::New2(uType* __type, uObject* dispatcher, uDelegate* func)
{
    TaskFuture* obj1 = (TaskFuture*)uNew(__type);
    obj1->ctor_4(dispatcher, func);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/tasks/$.uno
// ----------------------------------------------------------------------------------------------

// internal enum TaskStatus :52
uEnumType* TaskStatus_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Threading.TaskStatus", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Created", 0LL,
        "Faulted", 1LL,
        "RanToCompletion", 2LL,
        "Running", 3LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// public abstract class Thread :515
// {
static void Thread_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Feature not supported in this backend");
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Uno::Threading::Thread, _callback), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("Create", NULL, (void*)Thread__Create_fn, 0, true, type, 1, ::g::Uno::Action_typeof()),
        new uFunction("get_CurrentThread", NULL, (void*)Thread__get_CurrentThread_fn, 0, true, type, 0),
        new uFunction("Join", NULL, NULL, offsetof(Thread_type, fp_Join), false, uVoid_typeof(), 0),
        new uFunction("Join", NULL, NULL, offsetof(Thread_type, fp_Join1), false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Sleep", NULL, (void*)Thread__Sleep_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Start", NULL, NULL, offsetof(Thread_type, fp_Start), false, uVoid_typeof(), 0));
}

Thread_type* Thread_typeof()
{
    static uSStrong<Thread_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Thread);
    options.TypeSize = sizeof(Thread_type);
    type = (Thread_type*)uClassType::New("Uno.Threading.Thread", options);
    type->fp_build_ = Thread_build;
    return type;
}

// protected Thread(Uno.Action callback) :541
void Thread__ctor__fn(Thread* __this, uDelegate* callback)
{
    __this->ctor_(callback);
}

// public static Uno.Threading.Thread Create(Uno.Action callback) :518
void Thread__Create_fn(uDelegate* callback, Thread** __retval)
{
    *__retval = Thread::Create(callback);
}

// public static Uno.Threading.Thread get_CurrentThread() :554
void Thread__get_CurrentThread_fn(Thread** __retval)
{
    *__retval = Thread::CurrentThread();
}

// public static void Sleep(int millis) :569
void Thread__Sleep_fn(int* millis)
{
    Thread::Sleep(*millis);
}

// protected Thread(Uno.Action callback) [instance] :541
void Thread::ctor_(uDelegate* callback)
{
    _callback = callback;
}

// public static Uno.Threading.Thread Create(Uno.Action callback) [static] :518
Thread* Thread::Create(uDelegate* callback)
{
    uStackFrame __("Uno.Threading.Thread", "Create(Uno.Action)");
    return ::g::Uno::Threading::POSIXThread::New2(callback);
    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Feature not...*/]));
}

// public static void Sleep(int millis) [static] :569
void Thread::Sleep(int millis)
{
    uStackFrame __("Uno.Threading.Thread", "Sleep(int)");
    ::g::Uno::Threading::POSIXThread::Sleep1(millis);
    return;
    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Feature not...*/]));
}

// public static Uno.Threading.Thread get_CurrentThread() [static] :554
Thread* Thread::CurrentThread()
{
    uStackFrame __("Uno.Threading.Thread", "get_CurrentThread()");
    return ::g::Uno::Threading::POSIXThread::CurrentThread1();
    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Feature not...*/]));
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// public sealed class ThreadPool :776
// {
static void ThreadPool_build(uType* type)
{
    ::TYPES[20] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(ThreadPool__WorkItem_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Threading::Thread_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadPool_type, interface0));
    type->SetFields(0,
        ::TYPES[21/*Uno.Threading.ConcurrentQueue<Uno.Threading.Thread>*/], offsetof(::g::Uno::Threading::ThreadPool, _disposeQueue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Threading::ThreadPool, _isDisposed), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Threading::ThreadPool, _poolSize), 0,
        ::g::Uno::Threading::AutoResetEvent_typeof(), offsetof(::g::Uno::Threading::ThreadPool, _resetEvent), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Threading::ThreadPool, _running), 0,
        ::TYPES[20/*Uno.Threading.ConcurrentQueue<Uno.Threading.ThreadPool.WorkItem>*/], offsetof(::g::Uno::Threading::ThreadPool, _taskQueue), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("Dispose", NULL, (void*)ThreadPool__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)ThreadPool__New1_fn, 0, true, type, 1, ::g::Uno::Int_typeof()),
        new uFunction("QueueAction", NULL, (void*)ThreadPool__QueueAction_fn, 0, false, uVoid_typeof(), 1, ::TYPES[10/*Uno.Action*/]));
}

ThreadPool_type* ThreadPool_typeof()
{
    static uSStrong<ThreadPool_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ThreadPool);
    options.TypeSize = sizeof(ThreadPool_type);
    type = (ThreadPool_type*)uClassType::New("Uno.Threading.ThreadPool", options);
    type->fp_build_ = ThreadPool_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))ThreadPool__Dispose_fn;
    return type;
}

// public ThreadPool([int poolSize]) :827
void ThreadPool__ctor__fn(ThreadPool* __this, int* poolSize)
{
    __this->ctor_(*poolSize);
}

// public void Dispose() :882
void ThreadPool__Dispose_fn(ThreadPool* __this)
{
    __this->Dispose();
}

// private bool DoTask() :855
void ThreadPool__DoTask_fn(ThreadPool* __this, bool* __retval)
{
    *__retval = __this->DoTask();
}

// public ThreadPool New([int poolSize]) :827
void ThreadPool__New1_fn(int* poolSize, ThreadPool** __retval)
{
    *__retval = ThreadPool::New1(*poolSize);
}

// public void QueueAction(Uno.Action action) :866
void ThreadPool__QueueAction_fn(ThreadPool* __this, uDelegate* action)
{
    __this->QueueAction(action);
}

// private void WorkerEntrypoint() :842
void ThreadPool__WorkerEntrypoint_fn(ThreadPool* __this)
{
    __this->WorkerEntrypoint();
}

// public ThreadPool([int poolSize]) [instance] :827
void ThreadPool::ctor_(int poolSize)
{
    uStackFrame __("Uno.Threading.ThreadPool", ".ctor([int])");
    _resetEvent = ::g::Uno::Threading::AutoResetEvent::Create(false);
    _taskQueue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[20/*Uno.Threading.ConcurrentQueue<Uno.Threading.ThreadPool.WorkItem>*/]));
    _running = true;
    _disposeQueue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[21/*Uno.Threading.ConcurrentQueue<Uno.Threading.Thread>*/]));
    _poolSize = poolSize;

    for (int i = 0; i < _poolSize; i++)
    {
        ::g::Uno::Threading::Thread* t = ::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)ThreadPool__WorkerEntrypoint_fn, this));
        uPtr(t)->Start();
    }
}

// public void Dispose() [instance] :882
void ThreadPool::Dispose()
{
    uStackFrame __("Uno.Threading.ThreadPool", "Dispose()");
    bool ret2;

    if (_isDisposed)
        return;

    _isDisposed = true;

    while (!uPtr(_taskQueue)->IsEmpty())
        ::g::Uno::Threading::Thread::Sleep(1);

    _running = false;
    int disposeCount = 0;

    while (disposeCount != _poolSize)
    {
        uPtr(_resetEvent)->Set();
        ::g::Uno::Threading::Thread* thread;

        if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_disposeQueue), (void**)(&thread), &ret2), ret2))
        {
            uPtr(thread)->Join();
            disposeCount++;
        }
    }

    uPtr(_resetEvent)->Dispose();
    uPtr(_taskQueue)->Dispose();
    uPtr(_disposeQueue)->Dispose();
}

// private bool DoTask() [instance] :855
bool ThreadPool::DoTask()
{
    uStackFrame __("Uno.Threading.ThreadPool", "DoTask()");
    bool ret3;
    ThreadPool__WorkItem* workItem;

    if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_taskQueue), (void**)(&workItem), &ret3), ret3))
    {
        uPtr(workItem)->Invoke();
        return true;
    }

    return false;
}

// public void QueueAction(Uno.Action action) [instance] :866
void ThreadPool::QueueAction(uDelegate* action)
{
    uStackFrame __("Uno.Threading.ThreadPool", "QueueAction(Uno.Action)");
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_taskQueue), ThreadPool__DefaultWorkItem::New1(action));
    uPtr(_resetEvent)->Set();
}

// private void WorkerEntrypoint() [instance] :842
void ThreadPool::WorkerEntrypoint()
{
    uStackFrame __("Uno.Threading.ThreadPool", "WorkerEntrypoint()");

    while (_running)
    {
        uAutoReleasePool ____pool;

        if (DoTask())
            continue;

        uPtr(_resetEvent)->WaitOne();
    }

    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_disposeQueue), ::g::Uno::Threading::Thread::CurrentThread());
}

// public ThreadPool New([int poolSize]) [static] :827
ThreadPool* ThreadPool::New1(int poolSize)
{
    ThreadPool* obj1 = (ThreadPool*)uNew(ThreadPool_typeof());
    obj1->ctor_(poolSize);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/tasks/$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class ThreadPoolTaskScheduler :211
// {
static void ThreadPoolTaskScheduler_build(uType* type)
{
    ::TYPES[10] = ::g::Uno::Action_typeof();
    ::TYPES[22] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Threading::ITaskScheduler_typeof(), offsetof(ThreadPoolTaskScheduler_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadPoolTaskScheduler_type, interface1));
    type->SetFields(0,
        ::g::Uno::Threading::ThreadPool_typeof(), offsetof(::g::Uno::Threading::ThreadPoolTaskScheduler, _threadPool), 0,
        type, (uintptr_t)&::g::Uno::Threading::ThreadPoolTaskScheduler::_default_, uFieldFlagsStatic);
}

ThreadPoolTaskScheduler_type* ThreadPoolTaskScheduler_typeof()
{
    static uSStrong<ThreadPoolTaskScheduler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ThreadPoolTaskScheduler);
    options.TypeSize = sizeof(ThreadPoolTaskScheduler_type);
    type = (ThreadPoolTaskScheduler_type*)uClassType::New("Uno.Threading.ThreadPoolTaskScheduler", options);
    type->fp_build_ = ThreadPoolTaskScheduler_build;
    type->fp_ctor_ = (void*)ThreadPoolTaskScheduler__New1_fn;
    type->interface0.fp_ScheduleTask = (void(*)(uObject*, ::g::Uno::Threading::Task*))ThreadPoolTaskScheduler__ScheduleTask_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ThreadPoolTaskScheduler__Dispose_fn;
    return type;
}

// public ThreadPoolTaskScheduler() :239
void ThreadPoolTaskScheduler__ctor__fn(ThreadPoolTaskScheduler* __this)
{
    __this->ctor_();
}

// public static Uno.Threading.ThreadPoolTaskScheduler get_Default() :217
void ThreadPoolTaskScheduler__get_Default_fn(ThreadPoolTaskScheduler** __retval)
{
    *__retval = ThreadPoolTaskScheduler::Default();
}

// public void Dispose() :249
void ThreadPoolTaskScheduler__Dispose_fn(ThreadPoolTaskScheduler* __this)
{
    __this->Dispose();
}

// public ThreadPoolTaskScheduler New() :239
void ThreadPoolTaskScheduler__New1_fn(ThreadPoolTaskScheduler** __retval)
{
    *__retval = ThreadPoolTaskScheduler::New1();
}

// private static void OnWindowClosed(object sender, Uno.EventArgs args) :231
void ThreadPoolTaskScheduler__OnWindowClosed_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    ThreadPoolTaskScheduler::OnWindowClosed(sender, args);
}

// public void ScheduleTask(Uno.Threading.Task task) :244
void ThreadPoolTaskScheduler__ScheduleTask_fn(ThreadPoolTaskScheduler* __this, ::g::Uno::Threading::Task* task)
{
    __this->ScheduleTask(task);
}

uSStrong<ThreadPoolTaskScheduler*> ThreadPoolTaskScheduler::_default_;

// public ThreadPoolTaskScheduler() [instance] :239
void ThreadPoolTaskScheduler::ctor_()
{
    uStackFrame __("Uno.Threading.ThreadPoolTaskScheduler", ".ctor()");
    _threadPool = ::g::Uno::Threading::ThreadPool::New1(4);
}

// public void Dispose() [instance] :249
void ThreadPoolTaskScheduler::Dispose()
{
    uStackFrame __("Uno.Threading.ThreadPoolTaskScheduler", "Dispose()");
    uPtr(_threadPool)->Dispose();
}

// public void ScheduleTask(Uno.Threading.Task task) [instance] :244
void ThreadPoolTaskScheduler::ScheduleTask(::g::Uno::Threading::Task* task)
{
    uStackFrame __("Uno.Threading.ThreadPoolTaskScheduler", "ScheduleTask(Uno.Threading.Task)");
    uPtr(_threadPool)->QueueAction(uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)::g::Uno::Threading::Task__Execute_fn, uPtr(task)));
}

// public ThreadPoolTaskScheduler New() [static] :239
ThreadPoolTaskScheduler* ThreadPoolTaskScheduler::New1()
{
    ThreadPoolTaskScheduler* obj1 = (ThreadPoolTaskScheduler*)uNew(ThreadPoolTaskScheduler_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void OnWindowClosed(object sender, Uno.EventArgs args) [static] :231
void ThreadPoolTaskScheduler::OnWindowClosed(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Uno.Threading.ThreadPoolTaskScheduler", "OnWindowClosed(object,Uno.EventArgs)");
    uPtr(ThreadPoolTaskScheduler::_default_)->Dispose();
    ThreadPoolTaskScheduler::_default_ = NULL;
}

// public static Uno.Threading.ThreadPoolTaskScheduler get_Default() [static] :217
ThreadPoolTaskScheduler* ThreadPoolTaskScheduler::Default()
{
    uStackFrame __("Uno.Threading.ThreadPoolTaskScheduler", "get_Default()");

    if (ThreadPoolTaskScheduler::_default_ == NULL)
    {
        ThreadPoolTaskScheduler::_default_ = ThreadPoolTaskScheduler::New1();
        uPtr(uPtr(::g::Uno::Application::Current())->Window())->add_Closed(uDelegate::New(::TYPES[22/*Uno.EventHandler*/], (void*)ThreadPoolTaskScheduler__OnWindowClosed_fn));
    }

    return ThreadPoolTaskScheduler::_default_;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno
// ----------------------------------------------------------------------------------------

// private abstract class ThreadPool.WorkItem :779
// {
static void ThreadPool__WorkItem_build(uType* type)
{
}

ThreadPool__WorkItem_type* ThreadPool__WorkItem_typeof()
{
    static uSStrong<ThreadPool__WorkItem_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ThreadPool__WorkItem);
    options.TypeSize = sizeof(ThreadPool__WorkItem_type);
    type = (ThreadPool__WorkItem_type*)uClassType::New("Uno.Threading.ThreadPool.WorkItem", options);
    type->fp_build_ = ThreadPool__WorkItem_build;
    return type;
}

// protected generated WorkItem() :779
void ThreadPool__WorkItem__ctor__fn(ThreadPool__WorkItem* __this)
{
    __this->ctor_();
}

// protected generated WorkItem() [instance] :779
void ThreadPool__WorkItem::ctor_()
{
}
// }

}}} // ::g::Uno::Threading
