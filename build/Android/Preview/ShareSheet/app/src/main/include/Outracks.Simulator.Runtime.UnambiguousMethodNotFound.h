// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Reflection.Uno/0.0.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeMemberName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct UnambiguousMethodNotFound;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class UnambiguousMethodNotFound :22
// {
::g::Uno::Exception_type* UnambiguousMethodNotFound_typeof();
void UnambiguousMethodNotFound__ctor_3_fn(UnambiguousMethodNotFound* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName);
void UnambiguousMethodNotFound__New4_fn(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, UnambiguousMethodNotFound** __retval);

struct UnambiguousMethodNotFound : ::g::Uno::Exception
{
    void ctor_3(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName);
    static UnambiguousMethodNotFound* New4(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
