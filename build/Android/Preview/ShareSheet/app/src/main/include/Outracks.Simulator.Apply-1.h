// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct Apply;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class Apply<TArg1> :87
// {
uType* Apply_typeof();
void Apply__ctor__fn(Apply* __this, uDelegate* action, void* arg1);
void Apply__Execute_fn(Apply* __this);
void Apply__New1_fn(uType* __type, uDelegate* action, void* arg1, Apply** __retval);

struct Apply : uObject
{
    uStrong<uDelegate*> _action;
    uTField _arg1() { return __type->Field(this, 1); }

    template<class TArg1>
    void ctor_(uDelegate* action, TArg1 arg1) { Apply__ctor__fn(this, action, uConstrain(__type->T(0), arg1)); }
    void Execute();
    template<class TArg1>
    static Apply* New1(uType* __type, uDelegate* action, TArg1 arg1) { Apply* __retval; return Apply__New1_fn(__type, action, uConstrain(__type->T(0), arg1), &__retval), __retval; }
};
// }

}}} // ::g::Outracks::Simulator
