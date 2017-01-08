// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Reflection.Uno/0.0.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeMemberName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct MemberNotFound;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class MemberNotFound :15
// {
::g::Uno::Exception_type* MemberNotFound_typeof();
void MemberNotFound__ctor_3_fn(MemberNotFound* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName);
void MemberNotFound__New4_fn(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, MemberNotFound** __retval);

struct MemberNotFound : ::g::Uno::Exception
{
    void ctor_3(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName);
    static MemberNotFound* New4(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
