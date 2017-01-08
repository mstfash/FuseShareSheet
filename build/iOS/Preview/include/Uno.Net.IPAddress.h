// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Net.Sockets/0.42.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{struct IPAddress;}}}

namespace g{
namespace Uno{
namespace Net{

// public sealed class IPAddress :216
// {
uType* IPAddress_typeof();
void IPAddress__ctor__fn(IPAddress* __this, uArray* octets);
void IPAddress__ctor_1_fn(IPAddress* __this, uArray* address, int64_t* scopeId);
void IPAddress__get_AddressFamily_fn(IPAddress* __this, int* __retval);
void IPAddress__Equals_fn(IPAddress* __this, uObject* obj, bool* __retval);
void IPAddress__GetAddressBytes_fn(IPAddress* __this, uArray** __retval);
void IPAddress__GetHashCode_fn(IPAddress* __this, int* __retval);
void IPAddress__IPv6AddressToString_fn(uArray* bytes, uString** __retval);
void IPAddress__New1_fn(uArray* octets, IPAddress** __retval);
void IPAddress__New2_fn(uArray* address, int64_t* scopeId, IPAddress** __retval);
void IPAddress__Parse_fn(uString* address, IPAddress** __retval);
void IPAddress__ParseIPv6Address_fn(uString* address, uArray** __retval);
void IPAddress__get_ScopeId_fn(IPAddress* __this, int64_t* __retval);
void IPAddress__ToString_fn(IPAddress* __this, uString** __retval);

struct IPAddress : uObject
{
    uStrong<uArray*> _address;
    int _addressFamily;
    uint32_t _scopeId;
    static uSStrong<IPAddress*> Any_;
    static uSStrong<IPAddress*>& Any() { return IPAddress_typeof()->Init(), Any_; }
    static uSStrong<IPAddress*> Broadcast_;
    static uSStrong<IPAddress*>& Broadcast() { return IPAddress_typeof()->Init(), Broadcast_; }
    static uSStrong<IPAddress*> IPv6Any_;
    static uSStrong<IPAddress*>& IPv6Any() { return IPAddress_typeof()->Init(), IPv6Any_; }
    static uSStrong<IPAddress*> IPv6Loopback_;
    static uSStrong<IPAddress*>& IPv6Loopback() { return IPAddress_typeof()->Init(), IPv6Loopback_; }
    static uSStrong<IPAddress*> IPv6None_;
    static uSStrong<IPAddress*>& IPv6None() { return IPAddress_typeof()->Init(), IPv6None_; }
    static uSStrong<IPAddress*> Loopback_;
    static uSStrong<IPAddress*>& Loopback() { return IPAddress_typeof()->Init(), Loopback_; }

    void ctor_(uArray* octets);
    void ctor_1(uArray* address, int64_t scopeId);
    int AddressFamily();
    uArray* GetAddressBytes();
    int64_t ScopeId();
    static uString* IPv6AddressToString(uArray* bytes);
    static IPAddress* New1(uArray* octets);
    static IPAddress* New2(uArray* address, int64_t scopeId);
    static IPAddress* Parse(uString* address);
    static uArray* ParseIPv6Address(uString* address);
};
// }

}}} // ::g::Uno::Net
