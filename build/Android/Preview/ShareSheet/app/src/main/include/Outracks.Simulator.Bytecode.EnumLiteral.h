// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Literal.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct EnumLiteral;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct StaticMemberName;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class EnumLiteral :1624
// {
::g::Outracks::Simulator::Bytecode::Literal_type* EnumLiteral_typeof();
void EnumLiteral__ctor_3_fn(EnumLiteral* __this, ::g::Outracks::Simulator::Bytecode::StaticMemberName* value);
void EnumLiteral__get_LiteralId_fn(EnumLiteral* __this, uChar* __retval);
void EnumLiteral__New1_fn(::g::Outracks::Simulator::Bytecode::StaticMemberName* value, EnumLiteral** __retval);
void EnumLiteral__Read3_fn(::g::Uno::IO::BinaryReader* reader, EnumLiteral** __retval);
void EnumLiteral__ToString_fn(EnumLiteral* __this, uString** __retval);
void EnumLiteral__Write3_fn(EnumLiteral* l, ::g::Uno::IO::BinaryWriter* writer);
void EnumLiteral__WriteLiteral_fn(EnumLiteral* __this, ::g::Uno::IO::BinaryWriter* writer);

struct EnumLiteral : ::g::Outracks::Simulator::Bytecode::Literal
{
    uStrong< ::g::Outracks::Simulator::Bytecode::StaticMemberName*> Value;

    void ctor_3(::g::Outracks::Simulator::Bytecode::StaticMemberName* value);
    static EnumLiteral* New1(::g::Outracks::Simulator::Bytecode::StaticMemberName* value);
    static EnumLiteral* Read3(::g::Uno::IO::BinaryReader* reader);
    static void Write3(EnumLiteral* l, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
