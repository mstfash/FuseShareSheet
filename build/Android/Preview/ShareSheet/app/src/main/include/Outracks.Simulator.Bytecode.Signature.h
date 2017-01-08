// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Optional-1.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Parameter;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Signature;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Variable;}}}}
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList;}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class Signature :1783
// {
uType* Signature_typeof();
void Signature__ctor__fn(Signature* __this, ::g::Outracks::Simulator::ImmutableList* parameters, ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> >* returnType);
void Signature___Read_fn(::g::Uno::IO::BinaryReader* reader, Signature** __retval);
void Signature__Action_fn(uArray* variables, Signature** __retval);
void Signature__Func_fn(::g::Outracks::Simulator::Bytecode::TypeName* returnType, uArray* variables, Signature** __retval);
void Signature__New1_fn(::g::Outracks::Simulator::ImmutableList* parameters, ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> >* returnType, Signature** __retval);
void Signature__ToString_fn(Signature* __this, uString** __retval);
void Signature__Write_fn(Signature* s, ::g::Uno::IO::BinaryWriter* writer);

struct Signature : uObject
{
    uStrong< ::g::Outracks::Simulator::ImmutableList*> Parameters;
    static uSStrong<uDelegate*> Read_;
    static uSStrong<uDelegate*>& Read() { return Signature_typeof()->Init(), Read_; }
    uTField ReturnType() { return __type->Field(this, 1); }

    void ctor_(::g::Outracks::Simulator::ImmutableList* parameters, ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > returnType);
    static Signature* _Read(::g::Uno::IO::BinaryReader* reader);
    static Signature* Action(uArray* variables);
    static Signature* Func(::g::Outracks::Simulator::Bytecode::TypeName* returnType, uArray* variables);
    static Signature* New1(::g::Outracks::Simulator::ImmutableList* parameters, ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > returnType);
    static void Write(Signature* s, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
