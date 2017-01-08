// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Reflection.Uno/0.0.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct TypeNotFound;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class TypeNotFound :8
// {
::g::Uno::Exception_type* TypeNotFound_typeof();
void TypeNotFound__ctor_3_fn(TypeNotFound* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName);
void TypeNotFound__New4_fn(::g::Outracks::Simulator::Bytecode::TypeName* typeName, TypeNotFound** __retval);

struct TypeNotFound : ::g::Uno::Exception
{
    void ctor_3(::g::Outracks::Simulator::Bytecode::TypeName* typeName);
    static TypeNotFound* New4(::g::Outracks::Simulator::Bytecode::TypeName* typeName);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
