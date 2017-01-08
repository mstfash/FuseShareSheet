// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Expression.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct CallDynamicMethod;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeMemberName;}}}}
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList;}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class CallDynamicMethod :462
// {
::g::Outracks::Simulator::Bytecode::Expression_type* CallDynamicMethod_typeof();
void CallDynamicMethod__ctor_2_fn(CallDynamicMethod* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, uArray* arguments);
void CallDynamicMethod__ctor_3_fn(CallDynamicMethod* __this, ::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, ::g::Outracks::Simulator::ImmutableList* arguments);
void CallDynamicMethod__get_ExpressionId_fn(CallDynamicMethod* __this, uChar* __retval);
void CallDynamicMethod__New1_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, uArray* arguments, CallDynamicMethod** __retval);
void CallDynamicMethod__New2_fn(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, ::g::Outracks::Simulator::ImmutableList* arguments, CallDynamicMethod** __retval);
void CallDynamicMethod__Read2_fn(::g::Uno::IO::BinaryReader* reader, CallDynamicMethod** __retval);
void CallDynamicMethod__ToString_fn(CallDynamicMethod* __this, uString** __retval);
void CallDynamicMethod__Write2_fn(CallDynamicMethod* o, ::g::Uno::IO::BinaryWriter* writer);
void CallDynamicMethod__WriteExpression_fn(CallDynamicMethod* __this, ::g::Uno::IO::BinaryWriter* writer);

struct CallDynamicMethod : ::g::Outracks::Simulator::Bytecode::Expression
{
    uStrong< ::g::Outracks::Simulator::ImmutableList*> Arguments;
    uStrong< ::g::Outracks::Simulator::Bytecode::TypeMemberName*> Method;
    uStrong< ::g::Outracks::Simulator::Bytecode::Expression*> Object;

    void ctor_2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, uArray* arguments);
    void ctor_3(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, ::g::Outracks::Simulator::ImmutableList* arguments);
    static CallDynamicMethod* New1(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, uArray* arguments);
    static CallDynamicMethod* New2(::g::Outracks::Simulator::Bytecode::Expression* o, ::g::Outracks::Simulator::Bytecode::TypeMemberName* method, ::g::Outracks::Simulator::ImmutableList* arguments);
    static CallDynamicMethod* Read2(::g::Uno::IO::BinaryReader* reader);
    static void Write2(CallDynamicMethod* o, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
