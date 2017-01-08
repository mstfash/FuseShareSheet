// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Experimental.Http/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.IO.Stream.h>
namespace g{namespace Experimental{namespace Cache{struct ProxyStream;}}}

namespace g{
namespace Experimental{
namespace Cache{

// internal sealed class ProxyStream :121
// {
::g::Uno::IO::Stream_type* ProxyStream_typeof();
void ProxyStream__get_CanRead_fn(ProxyStream* __this, bool* __retval);
void ProxyStream__get_CanSeek_fn(ProxyStream* __this, bool* __retval);
void ProxyStream__get_CanTimeout_fn(ProxyStream* __this, bool* __retval);
void ProxyStream__get_CanWrite_fn(ProxyStream* __this, bool* __retval);
void ProxyStream__Close_fn(ProxyStream* __this);
void ProxyStream__Dispose1_fn(ProxyStream* __this, bool* disposing);
void ProxyStream__Flush_fn(ProxyStream* __this);
void ProxyStream__get_Length_fn(ProxyStream* __this, int64_t* __retval);
void ProxyStream__get_Position_fn(ProxyStream* __this, int64_t* __retval);
void ProxyStream__set_Position_fn(ProxyStream* __this, int64_t* value);
void ProxyStream__Read_fn(ProxyStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval);
void ProxyStream__get_ReadTimeout_fn(ProxyStream* __this, int* __retval);
void ProxyStream__set_ReadTimeout_fn(ProxyStream* __this, int* value);
void ProxyStream__Seek_fn(ProxyStream* __this, int64_t* byteOffset, int* origin, int64_t* __retval);
void ProxyStream__SetLength_fn(ProxyStream* __this, int64_t* value);
void ProxyStream__Write_fn(ProxyStream* __this, uArray* src, int* byteOffset, int* byteCount);
void ProxyStream__get_WriteTimeout_fn(ProxyStream* __this, int* __retval);
void ProxyStream__set_WriteTimeout_fn(ProxyStream* __this, int* value);

struct ProxyStream : ::g::Uno::IO::Stream
{
    uStrong< ::g::Uno::IO::Stream*> Backing;
};
// }

}}} // ::g::Experimental::Cache
