// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/runtime/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct AddEventHandler;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct BlobLiteral;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct BooleanLiteral;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct CallDynamicMethod;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct CallLambda;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct CallStaticMethod;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct EnumLiteral;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Instantiate;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct IsType;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Lambda;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Literal;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct LogicalOr;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct MethodGroup;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct NumberLiteral;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct ReadProperty;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct ReadStaticField;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct ReadVariable;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct RemoveEventHandler;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Statement;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct StringLiteral;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct WriteProperty;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct Environment;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct ScopeClosure;}}}}
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class ScopeClosure :82
// {
uType* ScopeClosure_typeof();
void ScopeClosure__ctor__fn(ScopeClosure* __this, ::g::Outracks::Simulator::Runtime::Environment* scope, uObject* reflection);
void ScopeClosure__Evaluate_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::AddEventHandler* e, uObject** __retval);
void ScopeClosure__Evaluate1_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::BlobLiteral* e, uObject** __retval);
void ScopeClosure__Evaluate2_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::BooleanLiteral* e, uObject** __retval);
void ScopeClosure__Evaluate3_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::CallDynamicMethod* m, uObject** __retval);
void ScopeClosure__Evaluate4_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::CallLambda* i, uObject** __retval);
void ScopeClosure__Evaluate5_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::CallStaticMethod* m, uObject** __retval);
void ScopeClosure__Evaluate6_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::EnumLiteral* i, uObject** __retval);
void ScopeClosure__Evaluate7_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::Expression* expression, uObject** __retval);
void ScopeClosure__Evaluate8_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::Instantiate* i, uObject** __retval);
void ScopeClosure__Evaluate9_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::IsType* t, uObject** __retval);
void ScopeClosure__Evaluate10_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::Lambda* p, uObject** __retval);
void ScopeClosure__Evaluate11_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::Literal* e, uObject** __retval);
void ScopeClosure__Evaluate12_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::LogicalOr* o, uObject** __retval);
void ScopeClosure__Evaluate13_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::MethodGroup* g, uObject** __retval);
void ScopeClosure__Evaluate14_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::NumberLiteral* l, uObject** __retval);
void ScopeClosure__Evaluate15_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::ReadProperty* e, uObject** __retval);
void ScopeClosure__Evaluate16_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::ReadStaticField* e, uObject** __retval);
void ScopeClosure__Evaluate17_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::ReadVariable* e, uObject** __retval);
void ScopeClosure__Evaluate18_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::RemoveEventHandler* e, uObject** __retval);
void ScopeClosure__Evaluate19_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::StringLiteral* e, uObject** __retval);
void ScopeClosure__Evaluate20_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::WriteProperty* p, uObject** __retval);
void ScopeClosure__Evaluate21_fn(ScopeClosure* __this, ::g::Outracks::Simulator::ImmutableList* arguments, uArray** __retval);
void ScopeClosure__Execute_fn(ScopeClosure* __this, uObject* lambda, uArray* arguments, uObject** __retval);
void ScopeClosure__Execute1_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments, uObject** __retval);
void ScopeClosure__Execute2_fn(ScopeClosure* __this, uObject* statements, uObject** __retval);
void ScopeClosure__New1_fn(::g::Outracks::Simulator::Runtime::Environment* scope, uObject* reflection, ScopeClosure** __retval);

struct ScopeClosure : uObject
{
    uStrong<uObject*> _reflection;
    uStrong< ::g::Outracks::Simulator::Runtime::Environment*> _scope;

    void ctor_(::g::Outracks::Simulator::Runtime::Environment* scope, uObject* reflection);
    uObject* Evaluate(::g::Outracks::Simulator::Bytecode::AddEventHandler* e);
    uObject* Evaluate1(::g::Outracks::Simulator::Bytecode::BlobLiteral* e);
    uObject* Evaluate2(::g::Outracks::Simulator::Bytecode::BooleanLiteral* e);
    uObject* Evaluate3(::g::Outracks::Simulator::Bytecode::CallDynamicMethod* m);
    uObject* Evaluate4(::g::Outracks::Simulator::Bytecode::CallLambda* i);
    uObject* Evaluate5(::g::Outracks::Simulator::Bytecode::CallStaticMethod* m);
    uObject* Evaluate6(::g::Outracks::Simulator::Bytecode::EnumLiteral* i);
    uObject* Evaluate7(::g::Outracks::Simulator::Bytecode::Expression* expression);
    uObject* Evaluate8(::g::Outracks::Simulator::Bytecode::Instantiate* i);
    uObject* Evaluate9(::g::Outracks::Simulator::Bytecode::IsType* t);
    uObject* Evaluate10(::g::Outracks::Simulator::Bytecode::Lambda* p);
    uObject* Evaluate11(::g::Outracks::Simulator::Bytecode::Literal* e);
    uObject* Evaluate12(::g::Outracks::Simulator::Bytecode::LogicalOr* o);
    uObject* Evaluate13(::g::Outracks::Simulator::Bytecode::MethodGroup* g);
    uObject* Evaluate14(::g::Outracks::Simulator::Bytecode::NumberLiteral* l);
    uObject* Evaluate15(::g::Outracks::Simulator::Bytecode::ReadProperty* e);
    uObject* Evaluate16(::g::Outracks::Simulator::Bytecode::ReadStaticField* e);
    uObject* Evaluate17(::g::Outracks::Simulator::Bytecode::ReadVariable* e);
    uObject* Evaluate18(::g::Outracks::Simulator::Bytecode::RemoveEventHandler* e);
    uObject* Evaluate19(::g::Outracks::Simulator::Bytecode::StringLiteral* e);
    uObject* Evaluate20(::g::Outracks::Simulator::Bytecode::WriteProperty* p);
    uArray* Evaluate21(::g::Outracks::Simulator::ImmutableList* arguments);
    uObject* Execute(uObject* lambda, uArray* arguments);
    uObject* Execute1(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments);
    uObject* Execute2(uObject* statements);
    static ScopeClosure* New1(::g::Outracks::Simulator::Runtime::Environment* scope, uObject* reflection);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
