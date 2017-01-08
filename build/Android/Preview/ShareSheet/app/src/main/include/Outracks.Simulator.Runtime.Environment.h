// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/runtime/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Optional-1.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Parameter;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Variable;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct Environment;}}}}
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class Environment :11
// {
uType* Environment_typeof();
void Environment__ctor__fn(Environment* __this, ::g::Outracks::Simulator::Bytecode::Optional1<uStrong<Environment*> >* parent);
void Environment__Bind_fn(Environment* __this, ::g::Outracks::Simulator::Bytecode::Variable* variable, uObject* value);
void Environment__Bind1_fn(Environment* __this, ::g::Outracks::Simulator::ImmutableList* parameters, uArray* arguments);
void Environment__GetValue_fn(Environment* __this, ::g::Outracks::Simulator::Bytecode::Variable* variable, uObject** __retval);
void Environment__New1_fn(::g::Outracks::Simulator::Bytecode::Optional1<uStrong<Environment*> >* parent, Environment** __retval);

struct Environment : uObject
{
    uTField _parent() { return __type->Field(this, 0); }
    uStrong< ::g::Uno::Collections::Dictionary*> _variableBindings;

    void ctor_(::g::Outracks::Simulator::Bytecode::Optional1<uStrong<Environment*> > parent);
    void Bind(::g::Outracks::Simulator::Bytecode::Variable* variable, uObject* value);
    void Bind1(::g::Outracks::Simulator::ImmutableList* parameters, uArray* arguments);
    uObject* GetValue(::g::Outracks::Simulator::Bytecode::Variable* variable);
    static Environment* New1(::g::Outracks::Simulator::Bytecode::Optional1<uStrong<Environment*> > parent);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
