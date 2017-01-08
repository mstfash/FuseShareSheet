// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct ApplyFirst;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class ApplyFirst<TArg1, TArg2> :104
// {
uType* ApplyFirst_typeof();
void ApplyFirst__ctor__fn(ApplyFirst* __this, uDelegate* action, void* arg1);
void ApplyFirst__Execute_fn(ApplyFirst* __this, void* arg2);
void ApplyFirst__New1_fn(uType* __type, uDelegate* action, void* arg1, ApplyFirst** __retval);

struct ApplyFirst : uObject
{
    uStrong<uDelegate*> _action;
    uTField _arg1() { return __type->Field(this, 1); }

    template<class TArg1>
    void ctor_(uDelegate* action, TArg1 arg1) { ApplyFirst__ctor__fn(this, action, uConstrain(__type->T(0), arg1)); }
    template<class TArg2>
    void Execute(TArg2 arg2) { ApplyFirst__Execute_fn(this, uConstrain(__type->T(1), arg2)); }
    template<class TArg1>
    static ApplyFirst* New1(uType* __type, uDelegate* action, TArg1 arg1) { ApplyFirst* __retval; return ApplyFirst__New1_fn(__type, action, uConstrain(__type->T(0), arg1), &__retval), __retval; }
};
// }

}}} // ::g::Outracks::Simulator
