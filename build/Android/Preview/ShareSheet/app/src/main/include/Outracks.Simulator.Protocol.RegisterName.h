// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Protocol.MessageFromClient.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct RegisterName;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class RegisterName :97
// {
uType* RegisterName_typeof();
void RegisterName__ctor_1_fn(RegisterName* __this, uString* clientId, uString* clientName);
void RegisterName__New1_fn(uString* clientId, uString* clientName, RegisterName** __retval);
void RegisterName__Read1_fn(::g::Uno::IO::BinaryReader* reader, RegisterName** __retval);
void RegisterName__Write1_fn(RegisterName* message, ::g::Uno::IO::BinaryWriter* writer);

struct RegisterName : ::g::Outracks::Simulator::Protocol::MessageFromClient
{
    uStrong<uString*> ClientId;
    uStrong<uString*> ClientName;

    void ctor_1(uString* clientId, uString* clientName);
    static RegisterName* New1(uString* clientId, uString* clientName);
    static RegisterName* Read1(::g::Uno::IO::BinaryReader* reader);
    static void Write1(RegisterName* message, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
