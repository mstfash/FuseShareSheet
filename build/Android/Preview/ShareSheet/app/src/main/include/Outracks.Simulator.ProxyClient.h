// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct ProxyClient;}}}
namespace g{namespace Outracks{namespace Simulator{struct Task;}}}
namespace g{namespace Uno{namespace Net{struct IPEndPoint;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class ProxyClient :42
// {
uType* ProxyClient_typeof();
void ProxyClient__ctor__fn(ProxyClient* __this);
void ProxyClient__GetSimulatorEndpoint_fn(uObject* proxyEndpoints, uString* project, uObject* defines, ::g::Outracks::Simulator::Task** __retval);
void ProxyClient__New1_fn(ProxyClient** __retval);
void ProxyClient__OnNoResult_fn(uObject* exceptions, uArray** __retval);

struct ProxyClient : uObject
{
    void ctor_();
    static ::g::Outracks::Simulator::Task* GetSimulatorEndpoint(uObject* proxyEndpoints, uString* project, uObject* defines);
    static ProxyClient* New1();
    static uArray* OnNoResult(uObject* exceptions);
};
// }

}}} // ::g::Outracks::Simulator
