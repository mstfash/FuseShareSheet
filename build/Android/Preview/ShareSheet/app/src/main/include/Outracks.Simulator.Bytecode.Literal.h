// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Expression.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct BlobLiteral;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct BooleanLiteral;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct EnumLiteral;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Literal;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct NumberLiteral;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct StringLiteral;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public abstract class Literal :725
// {
struct Literal_type : ::g::Outracks::Simulator::Bytecode::Expression_type
{
    void(*fp_get_LiteralId)(::g::Outracks::Simulator::Bytecode::Literal*, uChar*);
    void(*fp_WriteLiteral)(::g::Outracks::Simulator::Bytecode::Literal*, ::g::Uno::IO::BinaryWriter*);
};

Literal_type* Literal_typeof();
void Literal__ctor_2_fn(Literal* __this);
void Literal__get_ExpressionId_fn(Literal* __this, uChar* __retval);
void Literal__Match4_fn(Literal* __this, uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5);
void Literal__Match5_fn(Literal* __this, uType* __type, uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5, uTRef __retval);
void Literal__Read2_fn(::g::Uno::IO::BinaryReader* reader, Literal** __retval);
void Literal__Write2_fn(Literal* literal, ::g::Uno::IO::BinaryWriter* writer);
void Literal__WriteExpression_fn(Literal* __this, ::g::Uno::IO::BinaryWriter* writer);

struct Literal : ::g::Outracks::Simulator::Bytecode::Expression
{
    void ctor_2();
    uChar LiteralId() { uChar __retval; return (((Literal_type*)__type)->fp_get_LiteralId)(this, &__retval), __retval; }
    void Match4(uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5);
    template<class T>
    T Match5(uType* __type, uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5) { T __retval; return Literal__Match5_fn(this, __type, a1, a2, a3, a4, a5, &__retval), __retval; }
    void WriteLiteral(::g::Uno::IO::BinaryWriter* writer) { (((Literal_type*)__type)->fp_WriteLiteral)(this, writer); }
    static Literal* Read2(::g::Uno::IO::BinaryReader* reader);
    static void Write2(Literal* literal, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
