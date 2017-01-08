// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct NoOperation;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Return;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Statement;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public abstract class Statement :871
// {
struct Statement_type : uType
{
    void(*fp_get_StatementId)(::g::Outracks::Simulator::Bytecode::Statement*, uChar*);
    void(*fp_WriteStatement)(::g::Outracks::Simulator::Bytecode::Statement*, ::g::Uno::IO::BinaryWriter*);
};

Statement_type* Statement_typeof();
void Statement__ctor__fn(Statement* __this);
void Statement___Read_fn(::g::Uno::IO::BinaryReader* reader, Statement** __retval);
void Statement__Match_fn(Statement* __this, uDelegate* a1, uDelegate* a3, uDelegate* a4);
void Statement__Match1_fn(Statement* __this, uType* __type, uDelegate* a1, uDelegate* a3, uDelegate* a4, uTRef __retval);
void Statement__Nop_fn(Statement** __retval);
void Statement__op_Addition_fn(Statement* left, Statement* right, uObject** __retval);
void Statement__op_Addition1_fn(Statement* statement, uObject* statements, uObject** __retval);
void Statement__op_Addition2_fn(uObject* statements, Statement* statement, uObject** __retval);
void Statement__Write_fn(Statement* statement, ::g::Uno::IO::BinaryWriter* writer);

struct Statement : uObject
{
    static uSStrong<uDelegate*> Read_;
    static uSStrong<uDelegate*>& Read() { return Statement_typeof()->Init(), Read_; }

    void ctor_();
    void Match(uDelegate* a1, uDelegate* a3, uDelegate* a4);
    template<class T>
    T Match1(uType* __type, uDelegate* a1, uDelegate* a3, uDelegate* a4) { T __retval; return Statement__Match1_fn(this, __type, a1, a3, a4, &__retval), __retval; }
    uChar StatementId() { uChar __retval; return (((Statement_type*)__type)->fp_get_StatementId)(this, &__retval), __retval; }
    void WriteStatement(::g::Uno::IO::BinaryWriter* writer) { (((Statement_type*)__type)->fp_WriteStatement)(this, writer); }
    static Statement* _Read(::g::Uno::IO::BinaryReader* reader);
    static Statement* Nop();
    static uObject* op_Addition(Statement* left, Statement* right);
    static uObject* op_Addition1(Statement* statement, uObject* statements);
    static uObject* op_Addition2(uObject* statements, Statement* statement);
    static void Write(Statement* statement, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
