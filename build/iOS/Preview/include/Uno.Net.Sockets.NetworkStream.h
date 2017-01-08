// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Net.Sockets/0.42.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.IO.Stream.h>
namespace g{namespace Uno{namespace Net{namespace Sockets{struct NetworkStream;}}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{

// public sealed class NetworkStream :515
// {
::g::Uno::IO::Stream_type* NetworkStream_typeof();
void NetworkStream__ctor_1_fn(NetworkStream* __this, ::g::Uno::Net::Sockets::Socket* socket);
void NetworkStream__get_CanRead_fn(NetworkStream* __this, bool* __retval);
void NetworkStream__get_CanSeek_fn(NetworkStream* __this, bool* __retval);
void NetworkStream__get_CanWrite_fn(NetworkStream* __this, bool* __retval);
void NetworkStream__Flush_fn(NetworkStream* __this);
void NetworkStream__get_Length_fn(NetworkStream* __this, int64_t* __retval);
void NetworkStream__New1_fn(::g::Uno::Net::Sockets::Socket* socket, NetworkStream** __retval);
void NetworkStream__get_Position_fn(NetworkStream* __this, int64_t* __retval);
void NetworkStream__set_Position_fn(NetworkStream* __this, int64_t* value);
void NetworkStream__Read_fn(NetworkStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval);
void NetworkStream__Seek_fn(NetworkStream* __this, int64_t* byteOffset, int* origin, int64_t* __retval);
void NetworkStream__SetLength_fn(NetworkStream* __this, int64_t* value);
void NetworkStream__Write_fn(NetworkStream* __this, uArray* src, int* byteOffset, int* byteCount);

struct NetworkStream : ::g::Uno::IO::Stream
{
    uStrong< ::g::Uno::Net::Sockets::Socket*> _socket;

    void ctor_1(::g::Uno::Net::Sockets::Socket* socket);
    static NetworkStream* New1(::g::Uno::Net::Sockets::Socket* socket);
};
// }

}}}} // ::g::Uno::Net::Sockets
