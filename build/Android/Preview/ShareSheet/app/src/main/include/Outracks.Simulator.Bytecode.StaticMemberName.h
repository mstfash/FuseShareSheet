// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.IEquatable-1.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct StaticMemberName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeMemberName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class StaticMemberName :954
// {
struct StaticMemberName_type : uType
{
    ::g::Outracks::Simulator::IEquatable interface0;
};

StaticMemberName_type* StaticMemberName_typeof();
void StaticMemberName__ctor__fn(StaticMemberName* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName);
void StaticMemberName__Equals_fn(StaticMemberName* __this, uObject* obj, bool* __retval);
void StaticMemberName__Equals2_fn(StaticMemberName* __this, StaticMemberName* other, bool* __retval);
void StaticMemberName__GetHashCode_fn(StaticMemberName* __this, int* __retval);
void StaticMemberName__New1_fn(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, StaticMemberName** __retval);
void StaticMemberName__op_Equality_fn(StaticMemberName* left, StaticMemberName* right, bool* __retval);
void StaticMemberName__op_Inequality_fn(StaticMemberName* left, StaticMemberName* right, bool* __retval);
void StaticMemberName__Parse_fn(uString* value, StaticMemberName** __retval);
void StaticMemberName__Read_fn(::g::Uno::IO::BinaryReader* reader, StaticMemberName** __retval);
void StaticMemberName__ToString_fn(StaticMemberName* __this, uString** __retval);
void StaticMemberName__Write_fn(StaticMemberName* m, ::g::Uno::IO::BinaryWriter* writer);

struct StaticMemberName : uObject
{
    uStrong< ::g::Outracks::Simulator::Bytecode::TypeMemberName*> MemberName;
    uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> TypeName;

    void ctor_(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName);
    bool Equals2(StaticMemberName* other);
    static StaticMemberName* New1(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName);
    static bool op_Equality(StaticMemberName* left, StaticMemberName* right);
    static bool op_Inequality(StaticMemberName* left, StaticMemberName* right);
    static StaticMemberName* Parse(uString* value);
    static StaticMemberName* Read(::g::Uno::IO::BinaryReader* reader);
    static void Write(StaticMemberName* m, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
