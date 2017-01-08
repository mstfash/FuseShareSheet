// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Protocol.MessageToClient.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Lambda;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct Reify;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class Reify :260
// {
uType* Reify_typeof();
void Reify__ctor_1_fn(Reify* __this, ::g::Outracks::Simulator::Bytecode::Lambda* appMutator);
void Reify__get_BinaryFormat_fn(uString** __retval);
void Reify__New1_fn(::g::Outracks::Simulator::Bytecode::Lambda* appMutator, Reify** __retval);
void Reify__Read1_fn(::g::Uno::IO::BinaryReader* reader, Reify** __retval);
void Reify__ToString_fn(Reify* __this, uString** __retval);
void Reify__Write1_fn(Reify* message, ::g::Uno::IO::BinaryWriter* writer);

struct Reify : ::g::Outracks::Simulator::Protocol::MessageToClient
{
    uStrong< ::g::Outracks::Simulator::Bytecode::Lambda*> AppMutator;

    void ctor_1(::g::Outracks::Simulator::Bytecode::Lambda* appMutator);
    static Reify* New1(::g::Outracks::Simulator::Bytecode::Lambda* appMutator);
    static Reify* Read1(::g::Uno::IO::BinaryReader* reader);
    static void Write1(Reify* message, ::g::Uno::IO::BinaryWriter* writer);
    static uString* BinaryFormat();
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
