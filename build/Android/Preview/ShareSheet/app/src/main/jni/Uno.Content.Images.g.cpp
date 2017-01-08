// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Content.Images.Bitmap.h>
#include <Uno.Exception.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.FormatHelpers.h>
#include <Uno.Int.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{
namespace Uno{
namespace Content{
namespace Images{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/images/$.uno
// ------------------------------------------------------------------------------------------------------------

// public sealed class Bitmap :9
// {
static void Bitmap_build(uType* type)
{
    ::STRINGS[0] = uString::Const("size: Cannot be negative");
    ::STRINGS[1] = uString::Const("optionalBuffer: Invalid buffer size");
    type->SetFields(0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Uno::Content::Images::Bitmap, _Buffer), 0,
        ::g::Uno::Graphics::Format_typeof(), offsetof(::g::Uno::Content::Images::Bitmap, _Format), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Uno::Content::Images::Bitmap, _Size), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Buffer", NULL, (void*)Bitmap__get_Buffer_fn, 0, false, ::g::Uno::Buffer_typeof(), 0),
        new uFunction("get_Format", NULL, (void*)Bitmap__get_Format_fn, 0, false, ::g::Uno::Graphics::Format_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Bitmap__New1_fn, 0, true, type, 3, ::g::Uno::Int2_typeof(), ::g::Uno::Graphics::Format_typeof(), ::g::Uno::Buffer_typeof()),
        new uFunction("get_Size", NULL, (void*)Bitmap__get_Size_fn, 0, false, ::g::Uno::Int2_typeof(), 0));
}

uType* Bitmap_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Bitmap);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Images.Bitmap", options);
    type->fp_build_ = Bitmap_build;
    return type;
}

// public Bitmap(int2 size, Uno.Graphics.Format format, [Uno.Buffer optionalBuffer]) :29
void Bitmap__ctor__fn(Bitmap* __this, ::g::Uno::Int2* size, int* format, ::g::Uno::Buffer* optionalBuffer)
{
    __this->ctor_(*size, *format, optionalBuffer);
}

// public generated Uno.Buffer get_Buffer() :25
void Bitmap__get_Buffer_fn(Bitmap* __this, ::g::Uno::Buffer** __retval)
{
    *__retval = __this->Buffer();
}

// private generated void set_Buffer(Uno.Buffer value) :26
void Bitmap__set_Buffer_fn(Bitmap* __this, ::g::Uno::Buffer* value)
{
    __this->Buffer(value);
}

// public generated Uno.Graphics.Format get_Format() :19
void Bitmap__get_Format_fn(Bitmap* __this, int* __retval)
{
    *__retval = __this->Format();
}

// private generated void set_Format(Uno.Graphics.Format value) :20
void Bitmap__set_Format_fn(Bitmap* __this, int* value)
{
    __this->Format(*value);
}

// public Bitmap New(int2 size, Uno.Graphics.Format format, [Uno.Buffer optionalBuffer]) :29
void Bitmap__New1_fn(::g::Uno::Int2* size, int* format, ::g::Uno::Buffer* optionalBuffer, Bitmap** __retval)
{
    *__retval = Bitmap::New1(*size, *format, optionalBuffer);
}

// public generated int2 get_Size() :13
void Bitmap__get_Size_fn(Bitmap* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// private generated void set_Size(int2 value) :14
void Bitmap__set_Size_fn(Bitmap* __this, ::g::Uno::Int2* value)
{
    __this->Size(*value);
}

// public Bitmap(int2 size, Uno.Graphics.Format format, [Uno.Buffer optionalBuffer]) [instance] :29
void Bitmap::ctor_(::g::Uno::Int2 size, int format, ::g::Uno::Buffer* optionalBuffer)
{
    uStackFrame __("Uno.Content.Images.Bitmap", ".ctor(int2,Uno.Graphics.Format,[Uno.Buffer])");
    Size(size);
    Format(format);
    int bpp = ::g::Uno::Graphics::FormatHelpers::GetStrideInBytes(Format());
    int byteCount = (Size().X * Size().Y) * bpp;

    if (byteCount < 0)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"size: Canno...*/]));

    if (optionalBuffer != NULL)
    {
        if (uPtr(optionalBuffer)->SizeInBytes() != byteCount)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"optionalBuf...*/]));

        Buffer(optionalBuffer);
    }
    else
        Buffer(::g::Uno::Buffer::New4(byteCount));
}

// public generated Uno.Buffer get_Buffer() [instance] :25
::g::Uno::Buffer* Bitmap::Buffer()
{
    return _Buffer;
}

// private generated void set_Buffer(Uno.Buffer value) [instance] :26
void Bitmap::Buffer(::g::Uno::Buffer* value)
{
    _Buffer = value;
}

// public generated Uno.Graphics.Format get_Format() [instance] :19
int Bitmap::Format()
{
    return _Format;
}

// private generated void set_Format(Uno.Graphics.Format value) [instance] :20
void Bitmap::Format(int value)
{
    _Format = value;
}

// public generated int2 get_Size() [instance] :13
::g::Uno::Int2 Bitmap::Size()
{
    return _Size;
}

// private generated void set_Size(int2 value) [instance] :14
void Bitmap::Size(::g::Uno::Int2 value)
{
    _Size = value;
}

// public Bitmap New(int2 size, Uno.Graphics.Format format, [Uno.Buffer optionalBuffer]) [static] :29
Bitmap* Bitmap::New1(::g::Uno::Int2 size, int format, ::g::Uno::Buffer* optionalBuffer)
{
    Bitmap* obj1 = (Bitmap*)uNew(Bitmap_typeof());
    obj1->ctor_(size, format, optionalBuffer);
    return obj1;
}
// }

}}}} // ::g::Uno::Content::Images
