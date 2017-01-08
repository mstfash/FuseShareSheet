// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Expression.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Instantiate;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList;}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class Instantiate :333
// {
::g::Outracks::Simulator::Bytecode::Expression_type* Instantiate_typeof();
void Instantiate__ctor_2_fn(Instantiate* __this, ::g::Outracks::Simulator::Bytecode::TypeName* type, uArray* arguments);
void Instantiate__ctor_3_fn(Instantiate* __this, ::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::ImmutableList* arguments);
void Instantiate__get_ExpressionId_fn(Instantiate* __this, uChar* __retval);
void Instantiate__New1_fn(::g::Outracks::Simulator::Bytecode::TypeName* type, uArray* arguments, Instantiate** __retval);
void Instantiate__New2_fn(::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::ImmutableList* arguments, Instantiate** __retval);
void Instantiate__Read2_fn(::g::Uno::IO::BinaryReader* reader, Instantiate** __retval);
void Instantiate__ToString_fn(Instantiate* __this, uString** __retval);
void Instantiate__Write2_fn(Instantiate* o, ::g::Uno::IO::BinaryWriter* writer);
void Instantiate__WriteExpression_fn(Instantiate* __this, ::g::Uno::IO::BinaryWriter* writer);

struct Instantiate : ::g::Outracks::Simulator::Bytecode::Expression
{
    uStrong< ::g::Outracks::Simulator::ImmutableList*> Arguments;
    uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> Type;

    void ctor_2(::g::Outracks::Simulator::Bytecode::TypeName* type, uArray* arguments);
    void ctor_3(::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::ImmutableList* arguments);
    static Instantiate* New1(::g::Outracks::Simulator::Bytecode::TypeName* type, uArray* arguments);
    static Instantiate* New2(::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::ImmutableList* arguments);
    static Instantiate* Read2(::g::Uno::IO::BinaryReader* reader);
    static void Write2(Instantiate* o, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
