// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Net.Sockets/0.42.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Net.EndPoint.h>
namespace g{namespace Uno{namespace Net{struct IPAddress;}}}
namespace g{namespace Uno{namespace Net{struct IPEndPoint;}}}

namespace g{
namespace Uno{
namespace Net{

// public sealed class IPEndPoint :193
// {
uType* IPEndPoint_typeof();
void IPEndPoint__ctor_1_fn(IPEndPoint* __this, ::g::Uno::Net::IPAddress* address, int* port);
void IPEndPoint__get_Address_fn(IPEndPoint* __this, ::g::Uno::Net::IPAddress** __retval);
void IPEndPoint__set_Address_fn(IPEndPoint* __this, ::g::Uno::Net::IPAddress* value);
void IPEndPoint__New1_fn(::g::Uno::Net::IPAddress* address, int* port, IPEndPoint** __retval);
void IPEndPoint__get_Port_fn(IPEndPoint* __this, int* __retval);
void IPEndPoint__set_Port_fn(IPEndPoint* __this, int* value);
void IPEndPoint__ToString_fn(IPEndPoint* __this, uString** __retval);

struct IPEndPoint : ::g::Uno::Net::EndPoint
{
    uStrong< ::g::Uno::Net::IPAddress*> _Address;
    int _Port;

    void ctor_1(::g::Uno::Net::IPAddress* address, int port);
    ::g::Uno::Net::IPAddress* Address();
    void Address(::g::Uno::Net::IPAddress* value);
    int Port();
    void Port(int value);
    static IPEndPoint* New1(::g::Uno::Net::IPAddress* address, int port);
};
// }

}}} // ::g::Uno::Net
