// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{struct ConnectToFirstRespondingEndpoint;}}}
namespace g{namespace Outracks{namespace Simulator{struct Task;}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}
namespace g{namespace Uno{namespace Net{struct IPEndPoint;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{

// public static class ConnectToFirstRespondingEndpoint :901
// {
uClassType* ConnectToFirstRespondingEndpoint_typeof();
void ConnectToFirstRespondingEndpoint__Execute_fn(uObject* simulatorEndpoints, ::g::Outracks::Simulator::Task** __retval);
void ConnectToFirstRespondingEndpoint__OnNoResult_fn(uObject* exceptions, ::g::Uno::Net::Sockets::Socket** __retval);

struct ConnectToFirstRespondingEndpoint : uObject
{
    static ::g::Outracks::Simulator::Task* Execute(uObject* simulatorEndpoints);
    static ::g::Uno::Net::Sockets::Socket* OnNoResult(uObject* exceptions);
};
// }

}}} // ::g::Outracks::Simulator
