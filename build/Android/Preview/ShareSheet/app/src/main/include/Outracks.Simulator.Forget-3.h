// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct Forget1;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class Forget<TArg1, TArg2, TResult> :73
// {
uType* Forget1_typeof();
void Forget1__ctor__fn(Forget1* __this, void* result);
void Forget1__Execute_fn(Forget1* __this, void* arg1, void* arg2, uTRef __retval);
void Forget1__New1_fn(uType* __type, void* result, Forget1** __retval);

struct Forget1 : uObject
{
    uTField _result() { return __type->Field(this, 0); }

    template<class TResult>
    void ctor_(TResult result) { Forget1__ctor__fn(this, uConstrain(__type->T(2), result)); }
    template<class TArg1, class TArg2, class TResult>
    TResult Execute(TArg1 arg1, TArg2 arg2) { TResult __retval; return Forget1__Execute_fn(this, uConstrain(__type->T(0), arg1), uConstrain(__type->T(1), arg2), &__retval), __retval; }
    template<class TResult>
    static Forget1* New1(uType* __type, TResult result) { Forget1* __retval; return Forget1__New1_fn(__type, uConstrain(__type->T(2), result), &__retval), __retval; }
};
// }

}}} // ::g::Outracks::Simulator
