// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct GetSimulatorEndpoint;}}}
namespace g{namespace Uno{namespace Net{struct IPEndPoint;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class GetSimulatorEndpoint :62
// {
uType* GetSimulatorEndpoint_typeof();
void GetSimulatorEndpoint__ctor__fn(GetSimulatorEndpoint* __this, ::g::Uno::Net::IPEndPoint* proxy1, uString* project1, uArray* defines1);
void GetSimulatorEndpoint__Execute_fn(GetSimulatorEndpoint* __this, uArray** __retval);
void GetSimulatorEndpoint__New1_fn(::g::Uno::Net::IPEndPoint* proxy1, uString* project1, uArray* defines1, GetSimulatorEndpoint** __retval);

struct GetSimulatorEndpoint : uObject
{
    uStrong<uArray*> defines;
    uStrong<uString*> project;
    uStrong< ::g::Uno::Net::IPEndPoint*> proxy;

    void ctor_(::g::Uno::Net::IPEndPoint* proxy1, uString* project1, uArray* defines1);
    uArray* Execute();
    static GetSimulatorEndpoint* New1(::g::Uno::Net::IPEndPoint* proxy1, uString* project1, uArray* defines1);
};
// }

}}} // ::g::Outracks::Simulator
