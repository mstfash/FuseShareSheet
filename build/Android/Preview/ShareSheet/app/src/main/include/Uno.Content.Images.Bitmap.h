// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/images/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Int2.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Content{namespace Images{struct Bitmap;}}}}
namespace g{namespace Uno{struct Buffer;}}

namespace g{
namespace Uno{
namespace Content{
namespace Images{

// public sealed class Bitmap :9
// {
uType* Bitmap_typeof();
void Bitmap__ctor__fn(Bitmap* __this, ::g::Uno::Int2* size, int* format, ::g::Uno::Buffer* optionalBuffer);
void Bitmap__get_Buffer_fn(Bitmap* __this, ::g::Uno::Buffer** __retval);
void Bitmap__set_Buffer_fn(Bitmap* __this, ::g::Uno::Buffer* value);
void Bitmap__get_Format_fn(Bitmap* __this, int* __retval);
void Bitmap__set_Format_fn(Bitmap* __this, int* value);
void Bitmap__New1_fn(::g::Uno::Int2* size, int* format, ::g::Uno::Buffer* optionalBuffer, Bitmap** __retval);
void Bitmap__get_Size_fn(Bitmap* __this, ::g::Uno::Int2* __retval);
void Bitmap__set_Size_fn(Bitmap* __this, ::g::Uno::Int2* value);

struct Bitmap : uObject
{
    uStrong< ::g::Uno::Buffer*> _Buffer;
    int _Format;
    ::g::Uno::Int2 _Size;

    void ctor_(::g::Uno::Int2 size, int format, ::g::Uno::Buffer* optionalBuffer);
    ::g::Uno::Buffer* Buffer();
    void Buffer(::g::Uno::Buffer* value);
    int Format();
    void Format(int value);
    ::g::Uno::Int2 Size();
    void Size(::g::Uno::Int2 value);
    static Bitmap* New1(::g::Uno::Int2 size, int format, ::g::Uno::Buffer* optionalBuffer);
};
// }

}}}} // ::g::Uno::Content::Images
