// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Protocol.MessageToClient.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Lambda;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct Execute;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class Execute :293
// {
uType* Execute_typeof();
void Execute__ctor_1_fn(Execute* __this, ::g::Outracks::Simulator::Bytecode::Lambda* function);
void Execute__New1_fn(::g::Outracks::Simulator::Bytecode::Lambda* function, Execute** __retval);
void Execute__Read1_fn(::g::Uno::IO::BinaryReader* reader, Execute** __retval);
void Execute__ToString_fn(Execute* __this, uString** __retval);
void Execute__Write1_fn(Execute* message, ::g::Uno::IO::BinaryWriter* writer);

struct Execute : ::g::Outracks::Simulator::Protocol::MessageToClient
{
    uStrong< ::g::Outracks::Simulator::Bytecode::Lambda*> Function;

    void ctor_1(::g::Outracks::Simulator::Bytecode::Lambda* function);
    static Execute* New1(::g::Outracks::Simulator::Bytecode::Lambda* function);
    static Execute* Read1(::g::Uno::IO::BinaryReader* reader);
    static void Write1(Execute* message, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
