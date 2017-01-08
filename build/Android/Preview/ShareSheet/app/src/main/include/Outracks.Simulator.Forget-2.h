// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct Forget;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class Forget<TArg, TResult> :43
// {
uType* Forget_typeof();
void Forget__ctor__fn(Forget* __this, void* result);
void Forget__Execute_fn(Forget* __this, void* _, uTRef __retval);
void Forget__New1_fn(uType* __type, void* result, Forget** __retval);

struct Forget : uObject
{
    uTField _result() { return __type->Field(this, 0); }

    template<class TResult>
    void ctor_(TResult result) { Forget__ctor__fn(this, uConstrain(__type->T(1), result)); }
    template<class TArg, class TResult>
    TResult Execute(TArg _) { TResult __retval; return Forget__Execute_fn(this, uConstrain(__type->T(0), _), &__retval), __retval; }
    template<class TResult>
    static Forget* New1(uType* __type, TResult result) { Forget* __retval; return Forget__New1_fn(__type, uConstrain(__type->T(1), result), &__retval), __retval; }
};
// }

}}} // ::g::Outracks::Simulator
