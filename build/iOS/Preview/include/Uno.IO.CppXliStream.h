// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.IO.Stream.h>
namespace g{namespace Uno{namespace IO{struct CppXliStream;}}}
namespace uBase { class Stream; }

namespace g{
namespace Uno{
namespace IO{

// internal sealed extern class CppXliStream :931
// {
::g::Uno::IO::Stream_type* CppXliStream_typeof();
void CppXliStream__ctor_1_fn(CppXliStream* __this, uBase::Stream** handle);
void CppXliStream__get_CanRead_fn(CppXliStream* __this, bool* __retval);
void CppXliStream__get_CanSeek_fn(CppXliStream* __this, bool* __retval);
void CppXliStream__get_CanWrite_fn(CppXliStream* __this, bool* __retval);
void CppXliStream__Dispose1_fn(CppXliStream* __this, bool* disposing);
void CppXliStream__Flush_fn(CppXliStream* __this);
void CppXliStream__get_Length_fn(CppXliStream* __this, int64_t* __retval);
void CppXliStream__New1_fn(uBase::Stream** handle, CppXliStream** __retval);
void CppXliStream__get_Position_fn(CppXliStream* __this, int64_t* __retval);
void CppXliStream__set_Position_fn(CppXliStream* __this, int64_t* value);
void CppXliStream__Read_fn(CppXliStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval);
void CppXliStream__Seek_fn(CppXliStream* __this, int64_t* byteOffset, int* origin, int64_t* __retval);
void CppXliStream__SetLength_fn(CppXliStream* __this, int64_t* value);
void CppXliStream__Write_fn(CppXliStream* __this, uArray* src, int* byteOffset, int* byteCount);

struct CppXliStream : ::g::Uno::IO::Stream
{
    uBase::Stream* _handle;

    void ctor_1(uBase::Stream* handle);
    static CppXliStream* New1(uBase::Stream* handle);
};
// }

}}} // ::g::Uno::IO
