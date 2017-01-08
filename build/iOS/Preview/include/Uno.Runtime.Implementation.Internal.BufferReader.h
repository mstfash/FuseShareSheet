// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/runtime/implementation/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct BufferReader;}}}}}
namespace g{namespace Uno{struct Buffer;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace Internal{

// public sealed class BufferReader :576
// {
uType* BufferReader_typeof();
void BufferReader__ctor__fn(BufferReader* __this, ::g::Uno::Buffer* buffer);
void BufferReader__New1_fn(::g::Uno::Buffer* buffer, BufferReader** __retval);
void BufferReader__ReadByte_fn(BufferReader* __this, uint8_t* __retval);
void BufferReader__ReadBytes_fn(BufferReader* __this, int* count, uArray** __retval);
void BufferReader__ReadCompressedInt_fn(BufferReader* __this, int* __retval);
void BufferReader__ReadFloat_fn(BufferReader* __this, bool* littleEndian, float* __retval);
void BufferReader__ReadFloat2_fn(BufferReader* __this, bool* littleEndian, ::g::Uno::Float2* __retval);
void BufferReader__ReadString_fn(BufferReader* __this, uString** __retval);
void BufferReader__ReadUInt_fn(BufferReader* __this, bool* littleEndian, uint32_t* __retval);

struct BufferReader : uObject
{
    uStrong< ::g::Uno::Buffer*> _buffer;
    int _position;

    void ctor_(::g::Uno::Buffer* buffer);
    uint8_t ReadByte();
    uArray* ReadBytes(int count);
    int ReadCompressedInt();
    float ReadFloat(bool littleEndian);
    ::g::Uno::Float2 ReadFloat2(bool littleEndian);
    uString* ReadString();
    uint32_t ReadUInt(bool littleEndian);
    static BufferReader* New1(::g::Uno::Buffer* buffer);
};
// }

}}}}} // ::g::Uno::Runtime::Implementation::Internal
