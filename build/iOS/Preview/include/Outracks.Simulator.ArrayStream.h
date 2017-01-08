// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.IO.Stream.h>
namespace g{namespace Outracks{namespace Simulator{struct ArrayStream;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class ArrayStream :1077
// {
::g::Uno::IO::Stream_type* ArrayStream_typeof();
void ArrayStream__ctor_1_fn(ArrayStream* __this, uArray* buffer);
void ArrayStream__get_CanRead_fn(ArrayStream* __this, bool* __retval);
void ArrayStream__get_CanSeek_fn(ArrayStream* __this, bool* __retval);
void ArrayStream__get_CanTimeout_fn(ArrayStream* __this, bool* __retval);
void ArrayStream__get_CanWrite_fn(ArrayStream* __this, bool* __retval);
void ArrayStream__get_Capacity_fn(ArrayStream* __this, int* __retval);
void ArrayStream__EnsureCapacity_fn(ArrayStream* __this, int* byteCount);
void ArrayStream__Flush_fn(ArrayStream* __this);
void ArrayStream__GetBuffer_fn(ArrayStream* __this, uArray** __retval);
void ArrayStream__get_Length_fn(ArrayStream* __this, int64_t* __retval);
void ArrayStream__New1_fn(uArray* buffer, ArrayStream** __retval);
void ArrayStream__get_Position_fn(ArrayStream* __this, int64_t* __retval);
void ArrayStream__set_Position_fn(ArrayStream* __this, int64_t* value);
void ArrayStream__Read_fn(ArrayStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval);
void ArrayStream__ResizeTo_fn(ArrayStream* __this, int* newSize);
void ArrayStream__Seek_fn(ArrayStream* __this, int64_t* byteOffset, int* origin, int64_t* __retval);
void ArrayStream__SetLength_fn(ArrayStream* __this, int64_t* value);
void ArrayStream__Write_fn(ArrayStream* __this, uArray* src, int* byteOffset, int* byteCount);

struct ArrayStream : ::g::Uno::IO::Stream
{
    uStrong<uArray*> _buffer;
    int64_t _length;
    int _nextIncrease;
    int64_t _Position;

    void ctor_1(uArray* buffer);
    int Capacity();
    void EnsureCapacity(int byteCount);
    uArray* GetBuffer();
    void ResizeTo(int newSize);
    static ArrayStream* New1(uArray* buffer);
};
// }

}}} // ::g::Outracks::Simulator
