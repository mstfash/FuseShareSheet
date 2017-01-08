// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Statement.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct AddEventHandler;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct CallDynamicMethod;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct CallLambda;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct CallStaticMethod;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Instantiate;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct IsType;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Lambda;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Literal;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct LogicalOr;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct MethodGroup;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct ReadProperty;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct ReadStaticField;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct ReadVariable;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct RemoveEventHandler;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct WriteProperty;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public abstract class Expression :67
// {
struct Expression_type : ::g::Outracks::Simulator::Bytecode::Statement_type
{
    void(*fp_get_ExpressionId)(::g::Outracks::Simulator::Bytecode::Expression*, uChar*);
    void(*fp_WriteExpression)(::g::Outracks::Simulator::Bytecode::Expression*, ::g::Uno::IO::BinaryWriter*);
};

Expression_type* Expression_typeof();
void Expression__ctor_1_fn(Expression* __this);
void Expression___Read1_fn(::g::Uno::IO::BinaryReader* reader, Expression** __retval);
void Expression__Match2_fn(Expression* __this, uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5, uDelegate* a6, uDelegate* a7, uDelegate* a8, uDelegate* a9, uDelegate* a10, uDelegate* a11, uDelegate* a12, uDelegate* a13, uDelegate* a15, uDelegate* a16);
void Expression__Match3_fn(Expression* __this, uType* __type, uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5, uDelegate* a6, uDelegate* a7, uDelegate* a8, uDelegate* a9, uDelegate* a10, uDelegate* a11, uDelegate* a12, uDelegate* a13, uDelegate* a15, uDelegate* a16, uTRef __retval);
void Expression__get_StatementId_fn(Expression* __this, uChar* __retval);
void Expression__Throw_fn(::g::Uno::Exception* e, Expression** __retval);
void Expression__Write1_fn(Expression* expression, ::g::Uno::IO::BinaryWriter* writer);
void Expression__WriteStatement_fn(Expression* __this, ::g::Uno::IO::BinaryWriter* writer);

struct Expression : ::g::Outracks::Simulator::Bytecode::Statement
{
    static uSStrong<uDelegate*> Read1_;
    static uSStrong<uDelegate*>& Read1() { return Expression_typeof()->Init(), Read1_; }

    void ctor_1();
    uChar ExpressionId() { uChar __retval; return (((Expression_type*)__type)->fp_get_ExpressionId)(this, &__retval), __retval; }
    void Match2(uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5, uDelegate* a6, uDelegate* a7, uDelegate* a8, uDelegate* a9, uDelegate* a10, uDelegate* a11, uDelegate* a12, uDelegate* a13, uDelegate* a15, uDelegate* a16);
    template<class T>
    T Match3(uType* __type, uDelegate* a1, uDelegate* a2, uDelegate* a3, uDelegate* a4, uDelegate* a5, uDelegate* a6, uDelegate* a7, uDelegate* a8, uDelegate* a9, uDelegate* a10, uDelegate* a11, uDelegate* a12, uDelegate* a13, uDelegate* a15, uDelegate* a16) { T __retval; return Expression__Match3_fn(this, __type, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a15, a16, &__retval), __retval; }
    void WriteExpression(::g::Uno::IO::BinaryWriter* writer) { (((Expression_type*)__type)->fp_WriteExpression)(this, writer); }
    static Expression* _Read1(::g::Uno::IO::BinaryReader* reader);
    static Expression* Throw(::g::Uno::Exception* e);
    static void Write1(Expression* expression, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
