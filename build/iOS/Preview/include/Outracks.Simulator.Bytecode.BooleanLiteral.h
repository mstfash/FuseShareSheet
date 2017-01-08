// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Literal.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct BooleanLiteral;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class BooleanLiteral :1494
// {
::g::Outracks::Simulator::Bytecode::Literal_type* BooleanLiteral_typeof();
void BooleanLiteral__ctor_3_fn(BooleanLiteral* __this, bool* booleanValue);
void BooleanLiteral__get_LiteralId_fn(BooleanLiteral* __this, uChar* __retval);
void BooleanLiteral__New1_fn(bool* booleanValue, BooleanLiteral** __retval);
void BooleanLiteral__Read3_fn(::g::Uno::IO::BinaryReader* reader, BooleanLiteral** __retval);
void BooleanLiteral__ToString_fn(BooleanLiteral* __this, uString** __retval);
void BooleanLiteral__Write3_fn(BooleanLiteral* l, ::g::Uno::IO::BinaryWriter* writer);
void BooleanLiteral__WriteLiteral_fn(BooleanLiteral* __this, ::g::Uno::IO::BinaryWriter* writer);

struct BooleanLiteral : ::g::Outracks::Simulator::Bytecode::Literal
{
    bool BooleanValue;

    void ctor_3(bool booleanValue);
    static BooleanLiteral* New1(bool booleanValue);
    static BooleanLiteral* Read3(::g::Uno::IO::BinaryReader* reader);
    static void Write3(BooleanLiteral* l, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
