// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Protocol.MessageFromClient.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct UnhandledException;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class UnhandledException :152
// {
uType* UnhandledException_typeof();
void UnhandledException__ctor_1_fn(UnhandledException* __this, uString* clientId, uString* clientName, uString* message, uString* stackTrace, uString* type);
void UnhandledException__New1_fn(uString* clientId, uString* clientName, uString* message, uString* stackTrace, uString* type, UnhandledException** __retval);
void UnhandledException__Read1_fn(::g::Uno::IO::BinaryReader* reader, UnhandledException** __retval);
void UnhandledException__Write1_fn(UnhandledException* message, ::g::Uno::IO::BinaryWriter* writer);

struct UnhandledException : ::g::Outracks::Simulator::Protocol::MessageFromClient
{
    uStrong<uString*> ClientId;
    uStrong<uString*> ClientName;
    uStrong<uString*> Message;
    uStrong<uString*> StackTrace;
    uStrong<uString*> Type;

    void ctor_1(uString* clientId, uString* clientName, uString* message, uString* stackTrace, uString* type);
    static UnhandledException* New1(uString* clientId, uString* clientName, uString* message, uString* stackTrace, uString* type);
    static UnhandledException* Read1(::g::Uno::IO::BinaryReader* reader);
    static void Write1(UnhandledException* message, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
