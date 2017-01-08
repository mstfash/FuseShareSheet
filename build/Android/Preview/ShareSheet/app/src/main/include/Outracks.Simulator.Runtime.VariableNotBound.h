// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/runtime/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Variable;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct VariableNotBound;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class VariableNotBound :46
// {
::g::Uno::Exception_type* VariableNotBound_typeof();
void VariableNotBound__ctor_3_fn(VariableNotBound* __this, ::g::Outracks::Simulator::Bytecode::Variable* variable);
void VariableNotBound__New4_fn(::g::Outracks::Simulator::Bytecode::Variable* variable, VariableNotBound** __retval);

struct VariableNotBound : ::g::Uno::Exception
{
    uStrong< ::g::Outracks::Simulator::Bytecode::Variable*> Variable;

    void ctor_3(::g::Outracks::Simulator::Bytecode::Variable* variable);
    static VariableNotBound* New4(::g::Outracks::Simulator::Bytecode::Variable* variable);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
