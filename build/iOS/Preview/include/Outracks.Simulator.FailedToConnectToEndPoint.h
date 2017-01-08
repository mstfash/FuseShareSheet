// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Outracks{namespace Simulator{struct FailedToConnectToEndPoint;}}}
namespace g{namespace Uno{namespace Net{struct IPEndPoint;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class FailedToConnectToEndPoint :13
// {
::g::Uno::Exception_type* FailedToConnectToEndPoint_typeof();
void FailedToConnectToEndPoint__ctor_3_fn(FailedToConnectToEndPoint* __this, ::g::Uno::Net::IPEndPoint* endpoint, ::g::Uno::Exception* e);
void FailedToConnectToEndPoint__New4_fn(::g::Uno::Net::IPEndPoint* endpoint, ::g::Uno::Exception* e, FailedToConnectToEndPoint** __retval);

struct FailedToConnectToEndPoint : ::g::Uno::Exception
{
    void ctor_3(::g::Uno::Net::IPEndPoint* endpoint, ::g::Uno::Exception* e);
    static FailedToConnectToEndPoint* New4(::g::Uno::Net::IPEndPoint* endpoint, ::g::Uno::Exception* e);
};
// }

}}} // ::g::Outracks::Simulator
