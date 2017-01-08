// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/runtime/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Lambda;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct LambdaClosure;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// internal sealed class LambdaClosure :303
// {
uType* LambdaClosure_typeof();
void LambdaClosure__ctor__fn(LambdaClosure* __this, ::g::Outracks::Simulator::Bytecode::Lambda* lambda, uDelegate* execute);
void LambdaClosure__Action_fn(LambdaClosure* __this);
void LambdaClosure__Action1_fn(LambdaClosure* __this, uObject* a1);
void LambdaClosure__Action2_fn(LambdaClosure* __this, uObject* a1, uObject* a2);
void LambdaClosure__Action3_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3);
void LambdaClosure__Func_fn(LambdaClosure* __this, uObject** __retval);
void LambdaClosure__Func1_fn(LambdaClosure* __this, uObject* a1, uObject** __retval);
void LambdaClosure__Func2_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject** __retval);
void LambdaClosure__Func3_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject** __retval);
void LambdaClosure__New1_fn(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uDelegate* execute, LambdaClosure** __retval);

struct LambdaClosure : uObject
{
    uStrong<uDelegate*> _execute;
    uStrong< ::g::Outracks::Simulator::Bytecode::Lambda*> _lambda;

    void ctor_(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uDelegate* execute);
    void Action();
    void Action1(uObject* a1);
    void Action2(uObject* a1, uObject* a2);
    void Action3(uObject* a1, uObject* a2, uObject* a3);
    uObject* Func();
    uObject* Func1(uObject* a1);
    uObject* Func2(uObject* a1, uObject* a2);
    uObject* Func3(uObject* a1, uObject* a2, uObject* a3);
    static LambdaClosure* New1(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uDelegate* execute);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
