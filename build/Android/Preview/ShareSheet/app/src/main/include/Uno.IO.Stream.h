// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace Uno{
namespace IO{

// public abstract class Stream :2865
// {
struct Stream_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_get_CanRead)(::g::Uno::IO::Stream*, bool*);
    void(*fp_get_CanSeek)(::g::Uno::IO::Stream*, bool*);
    void(*fp_get_CanTimeout)(::g::Uno::IO::Stream*, bool*);
    void(*fp_get_CanWrite)(::g::Uno::IO::Stream*, bool*);
    void(*fp_Close)(::g::Uno::IO::Stream*);
    void(*fp_Dispose1)(::g::Uno::IO::Stream*, bool*);
    void(*fp_Flush)(::g::Uno::IO::Stream*);
    void(*fp_get_Length)(::g::Uno::IO::Stream*, int64_t*);
    void(*fp_get_Position)(::g::Uno::IO::Stream*, int64_t*);
    void(*fp_set_Position)(::g::Uno::IO::Stream*, int64_t*);
    void(*fp_Read)(::g::Uno::IO::Stream*, uArray*, int*, int*, int*);
    void(*fp_get_ReadTimeout)(::g::Uno::IO::Stream*, int*);
    void(*fp_set_ReadTimeout)(::g::Uno::IO::Stream*, int*);
    void(*fp_Seek)(::g::Uno::IO::Stream*, int64_t*, int*, int64_t*);
    void(*fp_SetLength)(::g::Uno::IO::Stream*, int64_t*);
    void(*fp_Write)(::g::Uno::IO::Stream*, uArray*, int*, int*);
    void(*fp_get_WriteTimeout)(::g::Uno::IO::Stream*, int*);
    void(*fp_set_WriteTimeout)(::g::Uno::IO::Stream*, int*);
};

Stream_type* Stream_typeof();
void Stream__ctor__fn(Stream* __this);
void Stream__get_CanTimeout_fn(Stream* __this, bool* __retval);
void Stream__Close_fn(Stream* __this);
void Stream__Dispose_fn(Stream* __this);
void Stream__Dispose1_fn(Stream* __this, bool* disposing);
void Stream__get_ReadTimeout_fn(Stream* __this, int* __retval);
void Stream__set_ReadTimeout_fn(Stream* __this, int* value);
void Stream__get_WriteTimeout_fn(Stream* __this, int* __retval);
void Stream__set_WriteTimeout_fn(Stream* __this, int* value);

struct Stream : uObject
{
    void ctor_();
    bool CanRead() { bool __retval; return (((Stream_type*)__type)->fp_get_CanRead)(this, &__retval), __retval; }
    bool CanSeek() { bool __retval; return (((Stream_type*)__type)->fp_get_CanSeek)(this, &__retval), __retval; }
    bool CanTimeout() { bool __retval; return (((Stream_type*)__type)->fp_get_CanTimeout)(this, &__retval), __retval; }
    bool CanWrite() { bool __retval; return (((Stream_type*)__type)->fp_get_CanWrite)(this, &__retval), __retval; }
    void Close() { (((Stream_type*)__type)->fp_Close)(this); }
    void Dispose();
    void Dispose1(bool disposing) { (((Stream_type*)__type)->fp_Dispose1)(this, &disposing); }
    void Flush() { (((Stream_type*)__type)->fp_Flush)(this); }
    int64_t Length() { int64_t __retval; return (((Stream_type*)__type)->fp_get_Length)(this, &__retval), __retval; }
    int64_t Position() { int64_t __retval; return (((Stream_type*)__type)->fp_get_Position)(this, &__retval), __retval; }
    void Position(int64_t value) { (((Stream_type*)__type)->fp_set_Position)(this, &value); }
    int Read(uArray* dst, int byteOffset, int byteCount) { int __retval; return (((Stream_type*)__type)->fp_Read)(this, dst, &byteOffset, &byteCount, &__retval), __retval; }
    int ReadTimeout() { int __retval; return (((Stream_type*)__type)->fp_get_ReadTimeout)(this, &__retval), __retval; }
    void ReadTimeout(int value) { (((Stream_type*)__type)->fp_set_ReadTimeout)(this, &value); }
    int64_t Seek(int64_t byteOffset, int origin) { int64_t __retval; return (((Stream_type*)__type)->fp_Seek)(this, &byteOffset, &origin, &__retval), __retval; }
    void SetLength(int64_t value) { (((Stream_type*)__type)->fp_SetLength)(this, &value); }
    void Write(uArray* src, int byteOffset, int byteCount) { (((Stream_type*)__type)->fp_Write)(this, src, &byteOffset, &byteCount); }
    int WriteTimeout() { int __retval; return (((Stream_type*)__type)->fp_get_WriteTimeout)(this, &__retval), __retval; }
    void WriteTimeout(int value) { (((Stream_type*)__type)->fp_set_WriteTimeout)(this, &value); }
    static void Close(Stream* __this) { Stream__Close_fn(__this); }
    static void Dispose1(Stream* __this, bool disposing) { Stream__Dispose1_fn(__this, &disposing); }
    static bool CanTimeout(Stream* __this) { bool __retval; return Stream__get_CanTimeout_fn(__this, &__retval), __retval; }
    static int ReadTimeout(Stream* __this) { int __retval; return Stream__get_ReadTimeout_fn(__this, &__retval), __retval; }
    static void ReadTimeout(Stream* __this, int value) { Stream__set_ReadTimeout_fn(__this, &value); }
    static int WriteTimeout(Stream* __this) { int __retval; return Stream__get_WriteTimeout_fn(__this, &__retval), __retval; }
    static void WriteTimeout(Stream* __this, int value) { Stream__set_WriteTimeout_fn(__this, &value); }
};
// }

}}} // ::g::Uno::IO
