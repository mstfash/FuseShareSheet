// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Protocol.MessageToClient.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct Error;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct ExceptionInfo;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class Error :370
// {
uType* Error_typeof();
void Error__ctor_1_fn(Error* __this, ::g::Outracks::Simulator::Protocol::ExceptionInfo* exception);
void Error__New1_fn(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception, Error** __retval);
void Error__Read1_fn(::g::Uno::IO::BinaryReader* reader, Error** __retval);
void Error__ToString_fn(Error* __this, uString** __retval);
void Error__Write1_fn(Error* e, ::g::Uno::IO::BinaryWriter* writer);

struct Error : ::g::Outracks::Simulator::Protocol::MessageToClient
{
    uStrong< ::g::Outracks::Simulator::Protocol::ExceptionInfo*> Exception;

    void ctor_1(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception);
    static Error* New1(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception);
    static Error* Read1(::g::Uno::IO::BinaryReader* reader);
    static void Write1(Error* e, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
