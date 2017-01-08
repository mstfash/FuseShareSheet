// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Parameter;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Variable;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class Parameter :1850
// {
uType* Parameter_typeof();
void Parameter__ctor__fn(Parameter* __this, ::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::Bytecode::Variable* name);
void Parameter___Read_fn(::g::Uno::IO::BinaryReader* reader, Parameter** __retval);
void Parameter___Write_fn(Parameter* p, ::g::Uno::IO::BinaryWriter* writer);
void Parameter__New1_fn(::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::Bytecode::Variable* name, Parameter** __retval);
void Parameter__ToString_fn(Parameter* __this, uString** __retval);

struct Parameter : uObject
{
    uStrong< ::g::Outracks::Simulator::Bytecode::Variable*> Name;
    static uSStrong<uDelegate*> Read_;
    static uSStrong<uDelegate*>& Read() { return Parameter_typeof()->Init(), Read_; }
    uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> Type;
    static uSStrong<uDelegate*> Write_;
    static uSStrong<uDelegate*>& Write() { return Parameter_typeof()->Init(), Write_; }

    void ctor_(::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::Bytecode::Variable* name);
    static Parameter* _Read(::g::Uno::IO::BinaryReader* reader);
    static void _Write(Parameter* p, ::g::Uno::IO::BinaryWriter* writer);
    static Parameter* New1(::g::Outracks::Simulator::Bytecode::TypeName* type, ::g::Outracks::Simulator::Bytecode::Variable* name);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
