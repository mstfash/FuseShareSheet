// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Net.Sockets/0.42.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Sockets{struct SocketHelpers;}}}}
namespace g{namespace Uno{namespace Net{struct IPEndPoint;}}}

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{

// internal sealed extern class SocketHelpers :639
// {
uType* SocketHelpers_typeof();
void SocketHelpers__Connect_fn(int* sock, int* family, uArray* address, int64_t* scopeId, int* port, int* __retval);
void SocketHelpers__GetFamily_fn(int* addressFamily, int* __retval);
void SocketHelpers__GetLocalEndPoint_fn(int* sock, ::g::Uno::Net::IPEndPoint** __retval);
void SocketHelpers__GetProtocol_fn(int* protocolType, int* __retval);
void SocketHelpers__GetRemoteEndPoint_fn(int* sock, ::g::Uno::Net::IPEndPoint** __retval);
void SocketHelpers__GetSocketShudown_fn(int* socketShutdown, int* __retval);
void SocketHelpers__GetType1_fn(int* socketType, int* __retval);
void SocketHelpers__Poll_fn(int* sock, int* milliseconds, int* mode, int* __retval);
void SocketHelpers__Shutdown_fn(int* sock, int* how, int* __retval);

struct SocketHelpers : uObject
{
    static int Connect(int sock, int family, uArray* address, int64_t scopeId, int port);
    static int GetFamily(int addressFamily);
    static ::g::Uno::Net::IPEndPoint* GetLocalEndPoint(int sock);
    static int GetProtocol(int protocolType);
    static ::g::Uno::Net::IPEndPoint* GetRemoteEndPoint(int sock);
    static int GetSocketShudown(int socketShutdown);
    static int GetType1(int socketType);
    static int Poll(int sock, int milliseconds, int mode);
    static int Shutdown(int sock, int how);
};
// }

}}}} // ::g::Uno::Net::Sockets
