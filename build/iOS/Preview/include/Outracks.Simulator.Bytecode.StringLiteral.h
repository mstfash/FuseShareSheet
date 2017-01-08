// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Literal.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct StringLiteral;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class StringLiteral :1527
// {
::g::Outracks::Simulator::Bytecode::Literal_type* StringLiteral_typeof();
void StringLiteral__ctor_3_fn(StringLiteral* __this, uString* stringValue);
void StringLiteral__get_LiteralId_fn(StringLiteral* __this, uChar* __retval);
void StringLiteral__New1_fn(uString* stringValue, StringLiteral** __retval);
void StringLiteral__Read3_fn(::g::Uno::IO::BinaryReader* reader, StringLiteral** __retval);
void StringLiteral__ReadString_fn(::g::Uno::IO::BinaryReader* reader, uString** __retval);
void StringLiteral__ToString_fn(StringLiteral* __this, uString** __retval);
void StringLiteral__Write3_fn(StringLiteral* l, ::g::Uno::IO::BinaryWriter* writer);
void StringLiteral__WriteLiteral_fn(StringLiteral* __this, ::g::Uno::IO::BinaryWriter* writer);
void StringLiteral__WriteString_fn(uString* str, ::g::Uno::IO::BinaryWriter* writer);

struct StringLiteral : ::g::Outracks::Simulator::Bytecode::Literal
{
    uStrong<uString*> StringValue;

    void ctor_3(uString* stringValue);
    static StringLiteral* New1(uString* stringValue);
    static StringLiteral* Read3(::g::Uno::IO::BinaryReader* reader);
    static uString* ReadString(::g::Uno::IO::BinaryReader* reader);
    static void Write3(StringLiteral* l, ::g::Uno::IO::BinaryWriter* writer);
    static void WriteString(uString* str, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
