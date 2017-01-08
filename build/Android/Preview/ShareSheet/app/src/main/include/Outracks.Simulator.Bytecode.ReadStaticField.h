// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Expression.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct ReadStaticField;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct StaticMemberName;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class ReadStaticField :510
// {
::g::Outracks::Simulator::Bytecode::Expression_type* ReadStaticField_typeof();
void ReadStaticField__ctor_2_fn(ReadStaticField* __this, ::g::Outracks::Simulator::Bytecode::StaticMemberName* field);
void ReadStaticField__get_ExpressionId_fn(ReadStaticField* __this, uChar* __retval);
void ReadStaticField__New1_fn(::g::Outracks::Simulator::Bytecode::StaticMemberName* field, ReadStaticField** __retval);
void ReadStaticField__Read2_fn(::g::Uno::IO::BinaryReader* reader, ReadStaticField** __retval);
void ReadStaticField__ToString_fn(ReadStaticField* __this, uString** __retval);
void ReadStaticField__Write2_fn(ReadStaticField* o, ::g::Uno::IO::BinaryWriter* writer);
void ReadStaticField__WriteExpression_fn(ReadStaticField* __this, ::g::Uno::IO::BinaryWriter* writer);

struct ReadStaticField : ::g::Outracks::Simulator::Bytecode::Expression
{
    uStrong< ::g::Outracks::Simulator::Bytecode::StaticMemberName*> Field;

    void ctor_2(::g::Outracks::Simulator::Bytecode::StaticMemberName* field);
    static ReadStaticField* New1(::g::Outracks::Simulator::Bytecode::StaticMemberName* field);
    static ReadStaticField* Read2(::g::Uno::IO::BinaryReader* reader);
    static void Write2(ReadStaticField* o, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
