// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Expression.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct IsType;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class IsType :260
// {
::g::Outracks::Simulator::Bytecode::Expression_type* IsType_typeof();
void IsType__ctor_2_fn(IsType* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeName* type, bool* includeSubtypes);
void IsType__get_ExpressionId_fn(IsType* __this, uChar* __retval);
void IsType__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeName* type, bool* includeSubtypes, IsType** __retval);
void IsType__Read2_fn(::g::Uno::IO::BinaryReader* reader, IsType** __retval);
void IsType__Write2_fn(IsType* o, ::g::Uno::IO::BinaryWriter* writer);
void IsType__WriteExpression_fn(IsType* __this, ::g::Uno::IO::BinaryWriter* writer);

struct IsType : ::g::Outracks::Simulator::Bytecode::Expression
{
    bool IncludeSubtypes;
    uStrong< ::g::Outracks::Simulator::Bytecode::Expression*> Object;
    uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> Type;

    void ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeName* type, bool includeSubtypes);
    static IsType* New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeName* type, bool includeSubtypes);
    static IsType* Read2(::g::Uno::IO::BinaryReader* reader);
    static void Write2(IsType* o, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
