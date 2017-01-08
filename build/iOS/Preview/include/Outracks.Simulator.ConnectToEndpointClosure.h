// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct ConnectToEndpointClosure;}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}
namespace g{namespace Uno{namespace Net{struct IPEndPoint;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class ConnectToEndpointClosure :918
// {
uType* ConnectToEndpointClosure_typeof();
void ConnectToEndpointClosure__ctor__fn(ConnectToEndpointClosure* __this, ::g::Uno::Net::IPEndPoint* endpoint);
void ConnectToEndpointClosure__Execute_fn(ConnectToEndpointClosure* __this, ::g::Uno::Net::Sockets::Socket** __retval);
void ConnectToEndpointClosure__New1_fn(::g::Uno::Net::IPEndPoint* endpoint, ConnectToEndpointClosure** __retval);

struct ConnectToEndpointClosure : uObject
{
    uStrong< ::g::Uno::Net::IPEndPoint*> _endpoint;

    void ctor_(::g::Uno::Net::IPEndPoint* endpoint);
    ::g::Uno::Net::Sockets::Socket* Execute();
    static ConnectToEndpointClosure* New1(::g::Uno::Net::IPEndPoint* endpoint);
};
// }

}}} // ::g::Outracks::Simulator
