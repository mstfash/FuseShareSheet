// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Threading/0.42.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Threading{struct IDispatcherExtensions;}}}

namespace g{
namespace Uno{
namespace Threading{

// public static class IDispatcherExtensions :205
// {
uClassType* IDispatcherExtensions_typeof();
void IDispatcherExtensions__Invoke1_fn(uType* __type, uObject* dispatcher, uDelegate* action, void* arg);
void IDispatcherExtensions__Invoke11_fn(uType* __type, uObject* dispatcher, uDelegate* func, void* arg);
void IDispatcherExtensions__Invoke2_fn(uType* __type, uObject* dispatcher, uDelegate* action, void* arg1, void* arg2);

struct IDispatcherExtensions : uObject
{
    template<class T>
    static void Invoke1(uType* __type, uObject* dispatcher, uDelegate* action, T arg) { IDispatcherExtensions__Invoke1_fn(__type, dispatcher, action, uConstrain(__type->U(0), arg)); }
    template<class T>
    static void Invoke11(uType* __type, uObject* dispatcher, uDelegate* func, T arg) { IDispatcherExtensions__Invoke11_fn(__type, dispatcher, func, uConstrain(__type->U(0), arg)); }
    template<class T1, class T2>
    static void Invoke2(uType* __type, uObject* dispatcher, uDelegate* action, T1 arg1, T2 arg2) { IDispatcherExtensions__Invoke2_fn(__type, dispatcher, action, uConstrain(__type->U(0), arg1), uConstrain(__type->U(1), arg2)); }
};
// }

}}} // ::g::Uno::Threading
