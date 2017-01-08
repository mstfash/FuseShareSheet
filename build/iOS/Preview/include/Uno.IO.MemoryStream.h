// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.IO.Stream.h>
namespace g{namespace Uno{namespace IO{struct MemoryStream;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class MemoryStream :2470
// {
::g::Uno::IO::Stream_type* MemoryStream_typeof();
void MemoryStream__ctor_1_fn(MemoryStream* __this);
void MemoryStream__ctor_2_fn(MemoryStream* __this, uArray* buffer);
void MemoryStream__ctor_3_fn(MemoryStream* __this, uArray* buffer, bool* writable);
void MemoryStream__get_CanRead_fn(MemoryStream* __this, bool* __retval);
void MemoryStream__get_CanSeek_fn(MemoryStream* __this, bool* __retval);
void MemoryStream__get_CanTimeout_fn(MemoryStream* __this, bool* __retval);
void MemoryStream__get_CanWrite_fn(MemoryStream* __this, bool* __retval);
void MemoryStream__get_Capacity_fn(MemoryStream* __this, int* __retval);
void MemoryStream__EnsureCapacity_fn(MemoryStream* __this, int* byteCount);
void MemoryStream__Flush_fn(MemoryStream* __this);
void MemoryStream__GetBuffer_fn(MemoryStream* __this, uArray** __retval);
void MemoryStream__get_Length_fn(MemoryStream* __this, int64_t* __retval);
void MemoryStream__New1_fn(MemoryStream** __retval);
void MemoryStream__New2_fn(uArray* buffer, MemoryStream** __retval);
void MemoryStream__New3_fn(uArray* buffer, bool* writable, MemoryStream** __retval);
void MemoryStream__get_Position_fn(MemoryStream* __this, int64_t* __retval);
void MemoryStream__set_Position_fn(MemoryStream* __this, int64_t* value);
void MemoryStream__Read_fn(MemoryStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval);
void MemoryStream__ResizeTo_fn(MemoryStream* __this, int* newSize);
void MemoryStream__Seek_fn(MemoryStream* __this, int64_t* byteOffset, int* origin, int64_t* __retval);
void MemoryStream__SetLength_fn(MemoryStream* __this, int64_t* value);
void MemoryStream__Write_fn(MemoryStream* __this, uArray* src, int* byteOffset, int* byteCount);

struct MemoryStream : ::g::Uno::IO::Stream
{
    uStrong<uArray*> _buffer;
    bool _canResize;
    bool _canWrite;
    int64_t _length;
    int _nextIncrease;
    int64_t _Position;

    void ctor_1();
    void ctor_2(uArray* buffer);
    void ctor_3(uArray* buffer, bool writable);
    int Capacity();
    void EnsureCapacity(int byteCount);
    uArray* GetBuffer();
    void ResizeTo(int newSize);
    static MemoryStream* New1();
    static MemoryStream* New2(uArray* buffer);
    static MemoryStream* New3(uArray* buffer, bool writable);
};
// }

}}} // ::g::Uno::IO
