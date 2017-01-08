// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct ApplySecond;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class ApplySecond<TArg1, TArg2> :120
// {
uType* ApplySecond_typeof();
void ApplySecond__ctor__fn(ApplySecond* __this, uDelegate* action, void* arg2);
void ApplySecond__Execute_fn(ApplySecond* __this, void* arg1);
void ApplySecond__New1_fn(uType* __type, uDelegate* action, void* arg2, ApplySecond** __retval);

struct ApplySecond : uObject
{
    uStrong<uDelegate*> _action;
    uTField _arg2() { return __type->Field(this, 1); }

    template<class TArg2>
    void ctor_(uDelegate* action, TArg2 arg2) { ApplySecond__ctor__fn(this, action, uConstrain(__type->T(1), arg2)); }
    template<class TArg1>
    void Execute(TArg1 arg1) { ApplySecond__Execute_fn(this, uConstrain(__type->T(0), arg1)); }
    template<class TArg2>
    static ApplySecond* New1(uType* __type, uDelegate* action, TArg2 arg2) { ApplySecond* __retval; return ApplySecond__New1_fn(__type, action, uConstrain(__type->T(1), arg2), &__retval), __retval; }
};
// }

}}} // ::g::Outracks::Simulator
