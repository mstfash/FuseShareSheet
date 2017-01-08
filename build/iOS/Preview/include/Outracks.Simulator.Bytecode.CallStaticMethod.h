// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Expression.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct CallStaticMethod;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct StaticMemberName;}}}}
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList;}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class CallStaticMethod :419
// {
::g::Outracks::Simulator::Bytecode::Expression_type* CallStaticMethod_typeof();
void CallStaticMethod__ctor_2_fn(CallStaticMethod* __this, ::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, uArray* arguments);
void CallStaticMethod__ctor_3_fn(CallStaticMethod* __this, ::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::g::Outracks::Simulator::ImmutableList* arguments);
void CallStaticMethod__get_ExpressionId_fn(CallStaticMethod* __this, uChar* __retval);
void CallStaticMethod__New1_fn(::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, uArray* arguments, CallStaticMethod** __retval);
void CallStaticMethod__New2_fn(::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::g::Outracks::Simulator::ImmutableList* arguments, CallStaticMethod** __retval);
void CallStaticMethod__Read2_fn(::g::Uno::IO::BinaryReader* reader, CallStaticMethod** __retval);
void CallStaticMethod__ToString_fn(CallStaticMethod* __this, uString** __retval);
void CallStaticMethod__Write2_fn(CallStaticMethod* o, ::g::Uno::IO::BinaryWriter* writer);
void CallStaticMethod__WriteExpression_fn(CallStaticMethod* __this, ::g::Uno::IO::BinaryWriter* writer);

struct CallStaticMethod : ::g::Outracks::Simulator::Bytecode::Expression
{
    uStrong< ::g::Outracks::Simulator::ImmutableList*> Arguments;
    uStrong< ::g::Outracks::Simulator::Bytecode::StaticMemberName*> StaticMethod;

    void ctor_2(::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, uArray* arguments);
    void ctor_3(::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::g::Outracks::Simulator::ImmutableList* arguments);
    static CallStaticMethod* New1(::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, uArray* arguments);
    static CallStaticMethod* New2(::g::Outracks::Simulator::Bytecode::StaticMemberName* staticMethod, ::g::Outracks::Simulator::ImmutableList* arguments);
    static CallStaticMethod* Read2(::g::Uno::IO::BinaryReader* reader);
    static void Write2(CallStaticMethod* o, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
