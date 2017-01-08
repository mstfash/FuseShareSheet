// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Net.Sockets/0.42.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}
namespace g{namespace Uno{namespace Net{struct EndPoint;}}}

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{

// public sealed class Socket :844
// {
struct Socket_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Socket_type* Socket_typeof();
void Socket__ctor__fn(Socket* __this, int* addressFamily, int* socketType, int* protocolType);
void Socket__ctor_1_fn(Socket* __this, int* handle, bool* connected);
void Socket__Accept_fn(Socket* __this, Socket** __retval);
void Socket__Bind_fn(Socket* __this, ::g::Uno::Net::EndPoint* endPoint);
void Socket__Close_fn(Socket* __this);
void Socket__Connect1_fn(Socket* __this, ::g::Uno::Net::EndPoint* endPoint);
void Socket__Dispose_fn(Socket* __this);
void Socket__Dispose1_fn(Socket* __this, bool* disposing);
void Socket__Listen_fn(Socket* __this, int* backlog);
void Socket__New1_fn(int* addressFamily, int* socketType, int* protocolType, Socket** __retval);
void Socket__New2_fn(int* handle, bool* connected, Socket** __retval);
void Socket__Poll_fn(Socket* __this, int* milliseconds, int* mode, bool* __retval);
void Socket__Receive2_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* flags, int* __retval);
void Socket__Send1_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* __retval);
void Socket__Shutdown_fn(Socket* __this, int* how);
void Socket__UpdateRemoteEndPoint_fn(Socket* __this);

struct Socket : uObject
{
    bool _connected;
    int _handle;
    uStrong< ::g::Uno::Net::EndPoint*> _localEndPoint;
    uStrong< ::g::Uno::Net::EndPoint*> _remoteEndPoint;

    void ctor_(int addressFamily, int socketType, int protocolType);
    void ctor_1(int handle, bool connected);
    Socket* Accept();
    void Bind(::g::Uno::Net::EndPoint* endPoint);
    void Close();
    void Connect1(::g::Uno::Net::EndPoint* endPoint);
    void Dispose();
    void Dispose1(bool disposing);
    void Listen(int backlog);
    bool Poll(int milliseconds, int mode);
    int Receive2(uArray* buffer, int offset, int length, int flags);
    int Send1(uArray* buffer, int offset, int length);
    void Shutdown(int how);
    void UpdateRemoteEndPoint();
    static Socket* New1(int addressFamily, int socketType, int protocolType);
    static Socket* New2(int handle, bool connected);
};
// }

}}}} // ::g::Uno::Net::Sockets
