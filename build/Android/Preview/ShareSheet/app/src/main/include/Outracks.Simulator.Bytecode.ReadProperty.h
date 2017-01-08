// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Expression.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct ReadProperty;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeMemberName;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class ReadProperty :544
// {
::g::Outracks::Simulator::Bytecode::Expression_type* ReadProperty_typeof();
void ReadProperty__ctor_2_fn(ReadProperty* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property);
void ReadProperty__get_ExpressionId_fn(ReadProperty* __this, uChar* __retval);
void ReadProperty__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property, ReadProperty** __retval);
void ReadProperty__Read2_fn(::g::Uno::IO::BinaryReader* reader, ReadProperty** __retval);
void ReadProperty__ToString_fn(ReadProperty* __this, uString** __retval);
void ReadProperty__Write2_fn(ReadProperty* o, ::g::Uno::IO::BinaryWriter* writer);
void ReadProperty__WriteExpression_fn(ReadProperty* __this, ::g::Uno::IO::BinaryWriter* writer);

struct ReadProperty : ::g::Outracks::Simulator::Bytecode::Expression
{
    uStrong< ::g::Outracks::Simulator::Bytecode::Expression*> Object;
    uStrong< ::g::Outracks::Simulator::Bytecode::TypeMemberName*> Property;

    void ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property);
    static ReadProperty* New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* property);
    static ReadProperty* Read2(::g::Uno::IO::BinaryReader* reader);
    static void Write2(ReadProperty* o, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
