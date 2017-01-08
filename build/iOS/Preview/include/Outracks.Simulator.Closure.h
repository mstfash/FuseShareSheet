// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{struct Closure;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public static class Closure :9
// {
uClassType* Closure_typeof();
void Closure__Apply_fn(uType* __type, uDelegate* action, void* arg, uDelegate** __retval);
void Closure__ApplyFirst_fn(uType* __type, uDelegate* action, void* arg1, uDelegate** __retval);
void Closure__ApplySecond_fn(uType* __type, uDelegate* action, void* arg2, uDelegate** __retval);
void Closure__Forget_fn(uType* __type, uDelegate* action, uDelegate** __retval);
void Closure__Return_fn(uType* __type, void* result, uDelegate** __retval);
void Closure__ToEventHandler_fn(uDelegate* action, uDelegate** __retval);

struct Closure : uObject
{
    template<class T>
    static uDelegate* Apply(uType* __type, uDelegate* action, T arg) { uDelegate* __retval; return Closure__Apply_fn(__type, action, uConstrain(__type->U(0), arg), &__retval), __retval; }
    template<class TArg1>
    static uDelegate* ApplyFirst(uType* __type, uDelegate* action, TArg1 arg1) { uDelegate* __retval; return Closure__ApplyFirst_fn(__type, action, uConstrain(__type->U(0), arg1), &__retval), __retval; }
    template<class TArg2>
    static uDelegate* ApplySecond(uType* __type, uDelegate* action, TArg2 arg2) { uDelegate* __retval; return Closure__ApplySecond_fn(__type, action, uConstrain(__type->U(1), arg2), &__retval), __retval; }
    static uDelegate* Forget(uType* __type, uDelegate* action);
    template<class TResult>
    static uDelegate* Return(uType* __type, TResult result) { uDelegate* __retval; return Closure__Return_fn(__type, uConstrain(__type->U(1), result), &__retval), __retval; }
    static uDelegate* ToEventHandler(uDelegate* action);
};
// }

}}} // ::g::Outracks::Simulator
