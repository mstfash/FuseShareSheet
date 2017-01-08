// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <uBase/Array.h>
#include <uBase/Buffer.h>
#include <uBase/Bundle.h>
#include <uBase/Console.h>
#include <uBase/Disk.h>
#include <uBase/Memory.h>
#include <uBase/Text.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.FormatException.h>
#include <Uno.GC.h>
#include <Uno.Int.h>
#include <Uno.IO.BinaryReader.h>
#include <Uno.IO.BinaryWriter.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.CppXliStream.h>
#include <Uno.IO.CppXliStreamHandle.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.EndOfStreamException.h>
#include <Uno.IO.File.h>
#include <Uno.IO.FileMode.h>
#include <Uno.IO.FileSystemEnumerable.h>
#include <Uno.IO.FileSystemEnumerator.h>
#include <Uno.IO.FileSystemEnumeratorHandle.h>
#include <Uno.IO.FileSystemEnumeratorImpl.h>
#include <Uno.IO.FileSystemEnumeratorMode.h>
#include <Uno.IO.FileSystemImpl.h>
#include <Uno.IO.IOException.h>
#include <Uno.IO.MemoryStream.h>
#include <Uno.IO.Path.h>
#include <Uno.IO.SeekOrigin.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.StreamReader.h>
#include <Uno.IO.StreamWriter.h>
#include <Uno.IO.StringReader.h>
#include <Uno.IO.StringWriter.h>
#include <Uno.IO.TextReader.h>
#include <Uno.IO.TextWriter.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Long.h>
#include <Uno.NotImplementedException.h>
#include <Uno.NotSupportedException.h>
#include <Uno.Object.h>
#include <Uno.ObjectDisposedException.h>
#include <Uno.Runtime.Implementation.BufferImpl.h>
#include <Uno.Runtime.Implementation.TextEncodingImpl.h>
#include <Uno.String.h>
#include <Uno.Text.Decoder.h>
#include <Uno.Text.Encoding.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.UInt.h>
#include <Uno.ULong.h>
#include <Uno/Support.h>
static uString* STRINGS[16];
static uType* TYPES[18];

namespace g{
namespace Uno{
namespace IO{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// public sealed class BinaryReader :8
// {
static void BinaryReader_build(uType* type)
{
    ::STRINGS[0] = uString::Const("byteCount");
    ::STRINGS[1] = uString::Const("Invalid 7 bit encoded int");
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Byte_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(BinaryReader_type, interface0));
    type->SetFields(0,
        ::TYPES[0/*byte[]*/], offsetof(::g::Uno::IO::BinaryReader, _buffer), 0,
        ::g::Uno::IO::Stream_typeof(), offsetof(::g::Uno::IO::BinaryReader, _stream), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::IO::BinaryReader, _LittleEndian), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("Dispose", NULL, (void*)BinaryReader__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_LittleEndian", NULL, (void*)BinaryReader__get_LittleEndian_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_LittleEndian", NULL, (void*)BinaryReader__set_LittleEndian_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)BinaryReader__New1_fn, 0, true, type, 1, ::g::Uno::IO::Stream_typeof()),
        new uFunction("ReadBoolean", NULL, (void*)BinaryReader__ReadBoolean_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("ReadByte", NULL, (void*)BinaryReader__ReadByte_fn, 0, false, ::g::Uno::Byte_typeof(), 0),
        new uFunction("ReadBytes", NULL, (void*)BinaryReader__ReadBytes_fn, 0, false, ::TYPES[0/*byte[]*/], 1, ::g::Uno::Int_typeof()),
        new uFunction("ReadChar", NULL, (void*)BinaryReader__ReadChar_fn, 0, false, ::g::Uno::Char_typeof(), 0),
        new uFunction("ReadDouble", NULL, (void*)BinaryReader__ReadDouble_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("ReadInt", NULL, (void*)BinaryReader__ReadInt_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("ReadString", NULL, (void*)BinaryReader__ReadString_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

BinaryReader_type* BinaryReader_typeof()
{
    static uSStrong<BinaryReader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BinaryReader);
    options.TypeSize = sizeof(BinaryReader_type);
    type = (BinaryReader_type*)uClassType::New("Uno.IO.BinaryReader", options);
    type->fp_build_ = BinaryReader_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))BinaryReader__Dispose_fn;
    return type;
}

// public BinaryReader(Uno.IO.Stream stream) :15
void BinaryReader__ctor__fn(BinaryReader* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_(stream);
}

// public void Dispose() :33
void BinaryReader__Dispose_fn(BinaryReader* __this)
{
    __this->Dispose();
}

// private void FillBuffer(int byteCount) :38
void BinaryReader__FillBuffer_fn(BinaryReader* __this, int* byteCount)
{
    __this->FillBuffer(*byteCount);
}

// public generated bool get_LittleEndian() :29
void BinaryReader__get_LittleEndian_fn(BinaryReader* __this, bool* __retval)
{
    *__retval = __this->LittleEndian();
}

// public generated void set_LittleEndian(bool value) :30
void BinaryReader__set_LittleEndian_fn(BinaryReader* __this, bool* value)
{
    __this->LittleEndian(*value);
}

// public BinaryReader New(Uno.IO.Stream stream) :15
void BinaryReader__New1_fn(::g::Uno::IO::Stream* stream, BinaryReader** __retval)
{
    *__retval = BinaryReader::New1(stream);
}

// protected internal int Read7BitEncodedInt() :333
void BinaryReader__Read7BitEncodedInt_fn(BinaryReader* __this, int* __retval)
{
    *__retval = __this->Read7BitEncodedInt();
}

// public bool ReadBoolean() :91
void BinaryReader__ReadBoolean_fn(BinaryReader* __this, bool* __retval)
{
    *__retval = __this->ReadBoolean();
}

// public byte ReadByte() :103
void BinaryReader__ReadByte_fn(BinaryReader* __this, uint8_t* __retval)
{
    *__retval = __this->ReadByte();
}

// public byte[] ReadBytes(int byteCount) :57
void BinaryReader__ReadBytes_fn(BinaryReader* __this, int* byteCount, uArray** __retval)
{
    *__retval = __this->ReadBytes(*byteCount);
}

// public char ReadChar() :109
void BinaryReader__ReadChar_fn(BinaryReader* __this, uChar* __retval)
{
    *__retval = __this->ReadChar();
}

// public double ReadDouble() :164
void BinaryReader__ReadDouble_fn(BinaryReader* __this, double* __retval)
{
    *__retval = __this->ReadDouble();
}

// public int ReadInt() :134
void BinaryReader__ReadInt_fn(BinaryReader* __this, int* __retval)
{
    *__retval = __this->ReadInt();
}

// public string ReadString() :351
void BinaryReader__ReadString_fn(BinaryReader* __this, uString** __retval)
{
    *__retval = __this->ReadString();
}

// public BinaryReader(Uno.IO.Stream stream) [instance] :15
void BinaryReader::ctor_(::g::Uno::IO::Stream* stream)
{
    _stream = stream;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 64);
    LittleEndian(true);
}

// public void Dispose() [instance] :33
void BinaryReader::Dispose()
{
    uStackFrame __("Uno.IO.BinaryReader", "Dispose()");
    uPtr(_stream)->Dispose();
}

// private void FillBuffer(int byteCount) [instance] :38
void BinaryReader::FillBuffer(int byteCount)
{
    uStackFrame __("Uno.IO.BinaryReader", "FillBuffer(int)");

    if ((byteCount < 0) || (byteCount > 64))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[0/*"byteCount"*/]));

    int offset = 0;

    do
    {
        int read = uPtr(_stream)->Read(_buffer, offset, byteCount - offset);

        if (read == 0)
            U_THROW(::g::Uno::IO::EndOfStreamException::New5());

        offset = offset + read;
    }
    while (offset < byteCount);
}

// public generated bool get_LittleEndian() [instance] :29
bool BinaryReader::LittleEndian()
{
    return _LittleEndian;
}

// public generated void set_LittleEndian(bool value) [instance] :30
void BinaryReader::LittleEndian(bool value)
{
    _LittleEndian = value;
}

// protected internal int Read7BitEncodedInt() [instance] :333
int BinaryReader::Read7BitEncodedInt()
{
    uStackFrame __("Uno.IO.BinaryReader", "Read7BitEncodedInt()");
    int count = 0;
    int shift = 0;

    while (shift != 35)
    {
        uint8_t b = ReadByte();
        count = count | ((int)(b & 127) << shift);
        shift = shift + 7;

        if ((b & 128) == 0)
            return count;
    }

    U_THROW(::g::Uno::FormatException::New4(::STRINGS[1/*"Invalid 7 b...*/]));
}

// public bool ReadBoolean() [instance] :91
bool BinaryReader::ReadBoolean()
{
    uStackFrame __("Uno.IO.BinaryReader", "ReadBoolean()");
    FillBuffer(1);
    return uPtr(_buffer)->Item<uint8_t>(0) != 0;
}

// public byte ReadByte() [instance] :103
uint8_t BinaryReader::ReadByte()
{
    uStackFrame __("Uno.IO.BinaryReader", "ReadByte()");
    FillBuffer(1);
    return uPtr(_buffer)->Item<uint8_t>(0);
}

// public byte[] ReadBytes(int byteCount) [instance] :57
uArray* BinaryReader::ReadBytes(int byteCount)
{
    uStackFrame __("Uno.IO.BinaryReader", "ReadBytes(int)");

    if (byteCount < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[0/*"byteCount"*/]));

    uArray* buffer = uArray::New(::TYPES[0/*byte[]*/], byteCount);
    int offset = 0;

    do
    {
        int read = uPtr(_stream)->Read(buffer, offset, byteCount - offset);
        offset = offset + read;

        if (read == 0)
            break;
    }
    while (offset < byteCount);

    if (offset == byteCount)
        return buffer;

    uArray* result = uArray::New(::TYPES[0/*byte[]*/], offset);

    for (int i = 0; i < offset; i++)
        uPtr(result)->Item<uint8_t>(i) = uPtr(buffer)->Item<uint8_t>(i);

    return result;
}

// public char ReadChar() [instance] :109
uChar BinaryReader::ReadChar()
{
    uStackFrame __("Uno.IO.BinaryReader", "ReadChar()");
    uint8_t ret2;
    FillBuffer(1);
    ::g::Uno::Collections::List* buffer = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<byte>*/]);
    ::g::Uno::Collections::List__Add_fn(buffer, uCRef<uint8_t>(uPtr(_buffer)->Item<uint8_t>(0)));

    if (((::g::Uno::Collections::List__get_Item_fn(buffer, uCRef<int>(0), &ret2), ret2) & 128) != 0)
    {
        FillBuffer(1);
        ::g::Uno::Collections::List__Add_fn(uPtr(buffer), uCRef<uint8_t>(uPtr(_buffer)->Item<uint8_t>(0)));
    }

    return uPtr(::g::Uno::Runtime::Implementation::TextEncodingImpl::DecodeUtf8((uArray*)buffer->ToArray()))->Item(0);
}

// public double ReadDouble() [instance] :164
double BinaryReader::ReadDouble()
{
    uStackFrame __("Uno.IO.BinaryReader", "ReadDouble()");
    FillBuffer(8);
    return ::g::Uno::Runtime::Implementation::BufferImpl::GetDouble(_buffer, 0, LittleEndian());
}

// public int ReadInt() [instance] :134
int BinaryReader::ReadInt()
{
    uStackFrame __("Uno.IO.BinaryReader", "ReadInt()");
    FillBuffer(4);
    return ::g::Uno::Runtime::Implementation::BufferImpl::GetInt(_buffer, 0, LittleEndian());
}

// public string ReadString() [instance] :351
uString* BinaryReader::ReadString()
{
    uStackFrame __("Uno.IO.BinaryReader", "ReadString()");
    return ::g::Uno::Runtime::Implementation::TextEncodingImpl::DecodeUtf8(ReadBytes(Read7BitEncodedInt()));
}

// public BinaryReader New(Uno.IO.Stream stream) [static] :15
BinaryReader* BinaryReader::New1(::g::Uno::IO::Stream* stream)
{
    BinaryReader* obj1 = (BinaryReader*)uNew(BinaryReader_typeof());
    obj1->ctor_(stream);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// public sealed class BinaryWriter :365
// {
static void BinaryWriter_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Char_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(BinaryWriter_type, interface0));
    type->SetFields(0,
        ::TYPES[0/*byte[]*/], offsetof(::g::Uno::IO::BinaryWriter, _buffer), 0,
        ::g::Uno::IO::Stream_typeof(), offsetof(::g::Uno::IO::BinaryWriter, _stream), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::IO::BinaryWriter, _LittleEndian), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("Dispose", NULL, (void*)BinaryWriter__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_LittleEndian", NULL, (void*)BinaryWriter__get_LittleEndian_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_LittleEndian", NULL, (void*)BinaryWriter__set_LittleEndian_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)BinaryWriter__New1_fn, 0, true, type, 1, ::g::Uno::IO::Stream_typeof()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Byte_typeof()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write2_fn, 0, false, uVoid_typeof(), 1, ::TYPES[0/*byte[]*/]),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write5_fn, 0, false, uVoid_typeof(), 1, ::TYPES[2/*char*/]),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write6_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write13_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Write", NULL, (void*)BinaryWriter__Write24_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

BinaryWriter_type* BinaryWriter_typeof()
{
    static uSStrong<BinaryWriter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BinaryWriter);
    options.TypeSize = sizeof(BinaryWriter_type);
    type = (BinaryWriter_type*)uClassType::New("Uno.IO.BinaryWriter", options);
    type->fp_build_ = BinaryWriter_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))BinaryWriter__Dispose_fn;
    return type;
}

// public BinaryWriter(Uno.IO.Stream stream) :372
void BinaryWriter__ctor__fn(BinaryWriter* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_(stream);
}

// public void Dispose() :390
void BinaryWriter__Dispose_fn(BinaryWriter* __this)
{
    __this->Dispose();
}

// public generated bool get_LittleEndian() :386
void BinaryWriter__get_LittleEndian_fn(BinaryWriter* __this, bool* __retval)
{
    *__retval = __this->LittleEndian();
}

// public generated void set_LittleEndian(bool value) :387
void BinaryWriter__set_LittleEndian_fn(BinaryWriter* __this, bool* value)
{
    __this->LittleEndian(*value);
}

// public BinaryWriter New(Uno.IO.Stream stream) :372
void BinaryWriter__New1_fn(::g::Uno::IO::Stream* stream, BinaryWriter** __retval)
{
    *__retval = BinaryWriter::New1(stream);
}

// public void Write(bool value) :395
void BinaryWriter__Write_fn(BinaryWriter* __this, bool* value)
{
    __this->Write(*value);
}

// public void Write(byte value) :412
void BinaryWriter__Write1_fn(BinaryWriter* __this, uint8_t* value)
{
    __this->Write1(*value);
}

// public void Write(byte[] value) :401
void BinaryWriter__Write2_fn(BinaryWriter* __this, uArray* value)
{
    __this->Write2(value);
}

// public void Write(char value) :418
void BinaryWriter__Write5_fn(BinaryWriter* __this, uChar* value)
{
    __this->Write5(*value);
}

// public void Write(double value) :465
void BinaryWriter__Write6_fn(BinaryWriter* __this, double* value)
{
    __this->Write6(*value);
}

// public void Write(int value) :435
void BinaryWriter__Write13_fn(BinaryWriter* __this, int* value)
{
    __this->Write13(*value);
}

// public void Write(string value) :592
void BinaryWriter__Write24_fn(BinaryWriter* __this, uString* value)
{
    __this->Write24(value);
}

// protected internal void Write7BitEncodedInt(int value) :581
void BinaryWriter__Write7BitEncodedInt_fn(BinaryWriter* __this, int* value)
{
    __this->Write7BitEncodedInt(*value);
}

// public BinaryWriter(Uno.IO.Stream stream) [instance] :372
void BinaryWriter::ctor_(::g::Uno::IO::Stream* stream)
{
    _stream = stream;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 64);
    LittleEndian(true);
}

// public void Dispose() [instance] :390
void BinaryWriter::Dispose()
{
    uStackFrame __("Uno.IO.BinaryWriter", "Dispose()");
    uPtr(_stream)->Dispose();
}

// public generated bool get_LittleEndian() [instance] :386
bool BinaryWriter::LittleEndian()
{
    return _LittleEndian;
}

// public generated void set_LittleEndian(bool value) [instance] :387
void BinaryWriter::LittleEndian(bool value)
{
    _LittleEndian = value;
}

// public void Write(bool value) [instance] :395
void BinaryWriter::Write(bool value)
{
    uStackFrame __("Uno.IO.BinaryWriter", "Write(bool)");
    uPtr(_buffer)->Item<uint8_t>(0) = (uint8_t)(value ? 1 : 0);
    uPtr(_stream)->Write(_buffer, 0, 1);
}

// public void Write(byte value) [instance] :412
void BinaryWriter::Write1(uint8_t value)
{
    uStackFrame __("Uno.IO.BinaryWriter", "Write(byte)");
    uPtr(_buffer)->Item<uint8_t>(0) = value;
    uPtr(_stream)->Write(_buffer, 0, 1);
}

// public void Write(byte[] value) [instance] :401
void BinaryWriter::Write2(uArray* value)
{
    uStackFrame __("Uno.IO.BinaryWriter", "Write(byte[])");
    uPtr(_stream)->Write(value, 0, uPtr(value)->Length());
}

// public void Write(char value) [instance] :418
void BinaryWriter::Write5(uChar value)
{
    uStackFrame __("Uno.IO.BinaryWriter", "Write(char)");
    Write2(::g::Uno::Runtime::Implementation::TextEncodingImpl::EncodeUtf8(::g::Uno::Char::ToString(value, ::TYPES[2/*char*/])));
}

// public void Write(double value) [instance] :465
void BinaryWriter::Write6(double value)
{
    uStackFrame __("Uno.IO.BinaryWriter", "Write(double)");
    ::g::Uno::Runtime::Implementation::BufferImpl::SetDouble(_buffer, 0, value, LittleEndian());
    uPtr(_stream)->Write(_buffer, 0, 8);
}

// public void Write(int value) [instance] :435
void BinaryWriter::Write13(int value)
{
    uStackFrame __("Uno.IO.BinaryWriter", "Write(int)");
    ::g::Uno::Runtime::Implementation::BufferImpl::SetInt(_buffer, 0, value, LittleEndian());
    uPtr(_stream)->Write(_buffer, 0, 4);
}

// public void Write(string value) [instance] :592
void BinaryWriter::Write24(uString* value)
{
    uStackFrame __("Uno.IO.BinaryWriter", "Write(string)");
    uArray* bytes = ::g::Uno::Runtime::Implementation::TextEncodingImpl::EncodeUtf8(value);
    Write7BitEncodedInt(uPtr(bytes)->Length());
    Write2(bytes);
}

// protected internal void Write7BitEncodedInt(int value) [instance] :581
void BinaryWriter::Write7BitEncodedInt(int value)
{
    uStackFrame __("Uno.IO.BinaryWriter", "Write7BitEncodedInt(int)");
    uint32_t v = (uint32_t)value;

    while (v >= 128U)
    {
        Write1((uint8_t)(v | 128U));
        v = v >> 7;
    }

    Write1((uint8_t)v);
}

// public BinaryWriter New(Uno.IO.Stream stream) [static] :372
BinaryWriter* BinaryWriter::New1(::g::Uno::IO::Stream* stream)
{
    BinaryWriter* obj1 = (BinaryWriter*)uNew(BinaryWriter_typeof());
    obj1->ctor_(stream);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// public sealed class Bundle :792
// {
// static Bundle() :818
static void Bundle__cctor__fn(uType* __type)
{
    uArray* array1;
    int index2;
    int length3;
    Bundle::_bundles_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<string, Uno.IO.Bundle>*/]));
    Bundle::_allFiles_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<Uno.IO.BundleFile>*/]));

    for (array1 = ::g::Uno::String::Split(uPtr(::g::Uno::IO::BundleFile::New1(Bundle::New1(NULL), ::STRINGS[2/*"bundle"*/], ::STRINGS[2/*"bundle"*/])->ReadAllText()), uArray::Init<int>(::TYPES[5/*char[]*/], 1, 10)), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        uString* line = uPtr(array1)->Strong<uString*>(index2);
        uArray* parts = ::g::Uno::String::Split(uPtr(line), uArray::Init<int>(::TYPES[5/*char[]*/], 1, ':'));
        Bundle* bundle = Bundle::New1(uPtr(parts)->Strong<uString*>(0));
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(Bundle::_bundles_), parts->Strong<uString*>(0), bundle);

        for (int i = 1; i < parts->Length(); i = i + 2)
        {
            ::g::Uno::IO::BundleFile* file = ::g::Uno::IO::BundleFile::New1(bundle, uPtr(parts)->Strong<uString*>(i), uPtr(parts)->Strong<uString*>(i + 1));
            ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(bundle)->_files), file);
            ::g::Uno::Collections::List__Add_fn(uPtr(Bundle::_allFiles_), file);
        }
    }
}

static void Bundle_build(uType* type)
{
    ::STRINGS[2] = uString::Const("bundle");
    ::STRINGS[3] = uString::Const("BundleFile not found: ");
    ::TYPES[3] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), type, NULL);
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[6] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[4/*Uno.Collections.List<Uno.IO.BundleFile>*/], offsetof(::g::Uno::IO::Bundle, _files), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::IO::Bundle, _packageName), 0,
        ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/], offsetof(::g::Uno::IO::Bundle, Created1), 0,
        ::TYPES[4/*Uno.Collections.List<Uno.IO.BundleFile>*/], (uintptr_t)&::g::Uno::IO::Bundle::_allFiles_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Collections.Dictionary<string, Uno.IO.Bundle>*/], (uintptr_t)&::g::Uno::IO::Bundle::_bundles_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("get_AllFiles", NULL, (void*)Bundle__get_AllFiles_fn, 0, true, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL), 0),
        new uFunction("add_Created", NULL, (void*)Bundle__add_Created_fn, 0, false, uVoid_typeof(), 1, ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/]),
        new uFunction("remove_Created", NULL, (void*)Bundle__remove_Created_fn, 0, false, uVoid_typeof(), 1, ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/]),
        new uFunction("CreateFile", NULL, (void*)Bundle__CreateFile_fn, 0, false, ::g::Uno::IO::BundleFile_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array()),
        new uFunction("get_Files", NULL, (void*)Bundle__get_Files_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL), 0),
        new uFunction("Get", NULL, (void*)Bundle__Get_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("GetFile", NULL, (void*)Bundle__GetFile_fn, 0, false, ::g::Uno::IO::BundleFile_typeof(), 1, ::g::Uno::String_typeof()));
}

uType* Bundle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Bundle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.IO.Bundle", options);
    type->fp_build_ = Bundle_build;
    type->fp_cctor_ = Bundle__cctor__fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Bundle__ToString_fn;
    return type;
}

// private Bundle(string packageName) :861
void Bundle__ctor__fn(Bundle* __this, uString* packageName)
{
    __this->ctor_(packageName);
}

// public static Uno.Collections.IEnumerable<Uno.IO.BundleFile> get_AllFiles() :849
void Bundle__get_AllFiles_fn(uObject** __retval)
{
    *__retval = Bundle::AllFiles();
}

// public generated void add_Created(Uno.Action<Uno.IO.BundleFile> value) :795
void Bundle__add_Created_fn(Bundle* __this, uDelegate* value)
{
    __this->add_Created(value);
}

// public generated void remove_Created(Uno.Action<Uno.IO.BundleFile> value) :795
void Bundle__remove_Created_fn(Bundle* __this, uDelegate* value)
{
    __this->remove_Created(value);
}

// public extern Uno.IO.BundleFile CreateFile(string path, byte[] bytes) :799
void Bundle__CreateFile_fn(Bundle* __this, uString* path, uArray* bytes, ::g::Uno::IO::BundleFile** __retval)
{
    *__retval = __this->CreateFile(path, bytes);
}

// public Uno.Collections.IEnumerable<Uno.IO.BundleFile> get_Files() :873
void Bundle__get_Files_fn(Bundle* __this, uObject** __retval)
{
    *__retval = __this->Files();
}

// public static Uno.IO.Bundle Get([string package]) :841
void Bundle__Get_fn(uString* package, Bundle** __retval)
{
    *__retval = Bundle::Get(package);
}

// public Uno.IO.BundleFile GetFile(string filename) :876
void Bundle__GetFile_fn(Bundle* __this, uString* filename, ::g::Uno::IO::BundleFile** __retval)
{
    *__retval = __this->GetFile(filename);
}

// private Bundle New(string packageName) :861
void Bundle__New1_fn(uString* packageName, Bundle** __retval)
{
    *__retval = Bundle::New1(packageName);
}

// public override sealed string ToString() :886
void Bundle__ToString_fn(Bundle* __this, uString** __retval)
{
    return *__retval = __this->_packageName, void();
}

uSStrong< ::g::Uno::Collections::List*> Bundle::_allFiles_;
uSStrong< ::g::Uno::Collections::Dictionary*> Bundle::_bundles_;

// private Bundle(string packageName) [instance] :861
void Bundle::ctor_(uString* packageName)
{
    _files = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<Uno.IO.BundleFile>*/]));
    _packageName = packageName;
}

// public generated void add_Created(Uno.Action<Uno.IO.BundleFile> value) [instance] :795
void Bundle::add_Created(uDelegate* value)
{
    uStackFrame __("Uno.IO.Bundle", "add_Created(Uno.Action<Uno.IO.BundleFile>)");
    Created1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Created1, value), ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/]);
}

// public generated void remove_Created(Uno.Action<Uno.IO.BundleFile> value) [instance] :795
void Bundle::remove_Created(uDelegate* value)
{
    uStackFrame __("Uno.IO.Bundle", "remove_Created(Uno.Action<Uno.IO.BundleFile>)");
    Created1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Created1, value), ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/]);
}

// public extern Uno.IO.BundleFile CreateFile(string path, byte[] bytes) [instance] :799
::g::Uno::IO::BundleFile* Bundle::CreateFile(uString* path, uArray* bytes)
{
    uStackFrame __("Uno.IO.Bundle", "CreateFile(string,byte[])");
    ::g::Uno::IO::BundleFile* file = ::g::Uno::IO::BundleFile::New1(this, path, NULL);
    file->Update(bytes);

    if (::g::Uno::Delegate::op_Inequality(Created1, NULL))
        uPtr(Created1)->InvokeVoid(file);

    ::g::Uno::Threading::Monitor::Enter(_files);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_files);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Add_fn(uPtr(_files), file);
    }

    ::g::Uno::Threading::Monitor::Enter(Bundle::_allFiles());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Bundle::_allFiles());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Add_fn(uPtr(Bundle::_allFiles()), file);
    }

    return file;
}

// public Uno.Collections.IEnumerable<Uno.IO.BundleFile> get_Files() [instance] :873
uObject* Bundle::Files()
{
    uStackFrame __("Uno.IO.Bundle", "get_Files()");
    return (uObject*)_files;
}

// public Uno.IO.BundleFile GetFile(string filename) [instance] :876
::g::Uno::IO::BundleFile* Bundle::GetFile(uString* filename)
{
    uStackFrame __("Uno.IO.Bundle", "GetFile(string)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::IO::BundleFile*> > ret7;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::IO::BundleFile*> > enum4 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_files), &ret7), ret7); enum4.MoveNext(::TYPES[6/*Uno.Collections.List<Uno.IO.BundleFile>.Enumerator*/]); )
    {
        ::g::Uno::IO::BundleFile* f = enum4.Current(::TYPES[6/*Uno.Collections.List<Uno.IO.BundleFile>.Enumerator*/]);

        if (::g::Uno::String::op_Equality(uPtr(f)->SourcePath(), filename) || ::g::Uno::String::op_Equality(uPtr(f)->BundlePath(), filename))
            return f;
    }

    U_THROW(::g::Uno::IO::IOException::New4(::g::Uno::String::op_Addition2(::STRINGS[3/*"BundleFile ...*/], filename)));
}

// public static Uno.IO.Bundle Get([string package]) [static] :841
Bundle* Bundle::Get(uString* package)
{
    uStackFrame __("Uno.IO.Bundle", "Get([string])");
    Bundle_typeof()->Init();
    Bundle* ret6;
    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Bundle::_bundles()), package, &ret6), ret6);
}

// private Bundle New(string packageName) [static] :861
Bundle* Bundle::New1(uString* packageName)
{
    Bundle* obj5 = (Bundle*)uNew(Bundle_typeof());
    obj5->ctor_(packageName);
    return obj5;
}

// public static Uno.Collections.IEnumerable<Uno.IO.BundleFile> get_AllFiles() [static] :849
uObject* Bundle::AllFiles()
{
    uStackFrame __("Uno.IO.Bundle", "get_AllFiles()");
    Bundle_typeof()->Init();
    return (uObject*)Bundle::_allFiles();
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// public sealed class BundleFile :631
// {
static void BundleFile_build(uType* type)
{
    ::STRINGS[4] = uString::Const("Uno.IO.BundleFile.BundlePath");
    ::STRINGS[5] = uString::Const("bytes");
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[8] = ::g::Uno::Array_typeof()->MakeMethod(1/*Copy<byte>*/, ::g::Uno::Byte_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Action1_typeof()->MakeType(type, NULL);
    type->SetFields(0,
        ::TYPES[0/*byte[]*/], offsetof(::g::Uno::IO::BundleFile, _bytes), 0,
        ::g::Uno::IO::Bundle_typeof(), offsetof(::g::Uno::IO::BundleFile, _Bundle), uFieldFlagsWeak,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::IO::BundleFile, _BundlePath), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::IO::BundleFile, _IsFile), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::IO::BundleFile, _SourcePath), 0,
        ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/], offsetof(::g::Uno::IO::BundleFile, Changed1), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("get_Bundle", NULL, (void*)BundleFile__get_Bundle_fn, 0, false, ::g::Uno::IO::Bundle_typeof(), 0),
        new uFunction("get_BundlePath", NULL, (void*)BundleFile__get_BundlePath_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("add_Changed", NULL, (void*)BundleFile__add_Changed_fn, 0, false, uVoid_typeof(), 1, ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/]),
        new uFunction("remove_Changed", NULL, (void*)BundleFile__remove_Changed_fn, 0, false, uVoid_typeof(), 1, ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/]),
        new uFunction("get_IsFile", NULL, (void*)BundleFile__get_IsFile_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("OpenRead", NULL, (void*)BundleFile__OpenRead_fn, 0, false, ::g::Uno::IO::Stream_typeof(), 0),
        new uFunction("ReadAllBytes", NULL, (void*)BundleFile__ReadAllBytes_fn, 0, false, ::TYPES[0/*byte[]*/], 0),
        new uFunction("ReadAllText", NULL, (void*)BundleFile__ReadAllText_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_SourcePath", NULL, (void*)BundleFile__get_SourcePath_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("Update", NULL, (void*)BundleFile__Update_fn, 0, false, uVoid_typeof(), 1, ::TYPES[0/*byte[]*/]));
}

uType* BundleFile_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(BundleFile);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.IO.BundleFile", options);
    type->fp_build_ = BundleFile_build;
    type->fp_ToString = (void(*)(uObject*, uString**))BundleFile__ToString_fn;
    return type;
}

// internal BundleFile(Uno.IO.Bundle bundle, string sourcePath, [string bundlePath]) :646
void BundleFile__ctor__fn(BundleFile* __this, ::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath)
{
    __this->ctor_(bundle, sourcePath, bundlePath);
}

// public generated Uno.IO.Bundle get_Bundle() :639
void BundleFile__get_Bundle_fn(BundleFile* __this, ::g::Uno::IO::Bundle** __retval)
{
    *__retval = __this->Bundle();
}

// private generated void set_Bundle(Uno.IO.Bundle value) :639
void BundleFile__set_Bundle_fn(BundleFile* __this, ::g::Uno::IO::Bundle* value)
{
    __this->Bundle(value);
}

// public generated string get_BundlePath() :643
void BundleFile__get_BundlePath_fn(BundleFile* __this, uString** __retval)
{
    *__retval = __this->BundlePath();
}

// private generated void set_BundlePath(string value) :643
void BundleFile__set_BundlePath_fn(BundleFile* __this, uString* value)
{
    __this->BundlePath(value);
}

// public generated void add_Changed(Uno.Action<Uno.IO.BundleFile> value) :636
void BundleFile__add_Changed_fn(BundleFile* __this, uDelegate* value)
{
    __this->add_Changed(value);
}

// public generated void remove_Changed(Uno.Action<Uno.IO.BundleFile> value) :636
void BundleFile__remove_Changed_fn(BundleFile* __this, uDelegate* value)
{
    __this->remove_Changed(value);
}

// internal extern Uno.IO.CppXliStreamHandle CppXliOpenRead() :703
void BundleFile__CppXliOpenRead_fn(BundleFile* __this, uBase::Stream** __retval)
{
    *__retval = __this->CppXliOpenRead();
}

// public generated bool get_IsFile() :644
void BundleFile__get_IsFile_fn(BundleFile* __this, bool* __retval)
{
    *__retval = __this->IsFile();
}

// private generated void set_IsFile(bool value) :644
void BundleFile__set_IsFile_fn(BundleFile* __this, bool* value)
{
    __this->IsFile(*value);
}

// internal BundleFile New(Uno.IO.Bundle bundle, string sourcePath, [string bundlePath]) :646
void BundleFile__New1_fn(::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath, BundleFile** __retval)
{
    *__retval = BundleFile::New1(bundle, sourcePath, bundlePath);
}

// public Uno.IO.Stream OpenRead() :654
void BundleFile__OpenRead_fn(BundleFile* __this, ::g::Uno::IO::Stream** __retval)
{
    *__retval = __this->OpenRead();
}

// public byte[] ReadAllBytes() :716
void BundleFile__ReadAllBytes_fn(BundleFile* __this, uArray** __retval)
{
    *__retval = __this->ReadAllBytes();
}

// public string ReadAllText() :759
void BundleFile__ReadAllText_fn(BundleFile* __this, uString** __retval)
{
    *__retval = __this->ReadAllText();
}

// public generated string get_SourcePath() :642
void BundleFile__get_SourcePath_fn(BundleFile* __this, uString** __retval)
{
    *__retval = __this->SourcePath();
}

// private generated void set_SourcePath(string value) :642
void BundleFile__set_SourcePath_fn(BundleFile* __this, uString* value)
{
    __this->SourcePath(value);
}

// public override sealed string ToString() :785
void BundleFile__ToString_fn(BundleFile* __this, uString** __retval)
{
    return *__retval = __this->SourcePath(), void();
}

// public extern void Update(byte[] bytes) :772
void BundleFile__Update_fn(BundleFile* __this, uArray* bytes)
{
    __this->Update(bytes);
}

// internal BundleFile(Uno.IO.Bundle bundle, string sourcePath, [string bundlePath]) [instance] :646
void BundleFile::ctor_(::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath)
{
    Bundle(bundle);
    SourcePath(sourcePath);
    BundlePath(bundlePath);
    IsFile(::g::Uno::String::op_Inequality(bundlePath, NULL) && false);
}

// public generated Uno.IO.Bundle get_Bundle() [instance] :639
::g::Uno::IO::Bundle* BundleFile::Bundle()
{
    return _Bundle;
}

// private generated void set_Bundle(Uno.IO.Bundle value) [instance] :639
void BundleFile::Bundle(::g::Uno::IO::Bundle* value)
{
    _Bundle = value;
}

// public generated string get_BundlePath() [instance] :643
uString* BundleFile::BundlePath()
{
    return _BundlePath;
}

// private generated void set_BundlePath(string value) [instance] :643
void BundleFile::BundlePath(uString* value)
{
    _BundlePath = value;
}

// public generated void add_Changed(Uno.Action<Uno.IO.BundleFile> value) [instance] :636
void BundleFile::add_Changed(uDelegate* value)
{
    uStackFrame __("Uno.IO.BundleFile", "add_Changed(Uno.Action<Uno.IO.BundleFile>)");
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Changed1, value), ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/]);
}

// public generated void remove_Changed(Uno.Action<Uno.IO.BundleFile> value) [instance] :636
void BundleFile::remove_Changed(uDelegate* value)
{
    uStackFrame __("Uno.IO.BundleFile", "remove_Changed(Uno.Action<Uno.IO.BundleFile>)");
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Changed1, value), ::TYPES[7/*Uno.Action<Uno.IO.BundleFile>*/]);
}

// internal extern Uno.IO.CppXliStreamHandle CppXliOpenRead() [instance] :703
uBase::Stream* BundleFile::CppXliOpenRead()
{
    try
                {
                    uBase::String filename = uStringToXliString(this->_BundlePath);
                    return uBase::Bundle->OpenFile(filename);
                }
                catch (const uBase::Exception& e)
                {
                    U_THROW(::g::Uno::Exception::New1());
                }
}

// public generated bool get_IsFile() [instance] :644
bool BundleFile::IsFile()
{
    return _IsFile;
}

// private generated void set_IsFile(bool value) [instance] :644
void BundleFile::IsFile(bool value)
{
    _IsFile = value;
}

// public Uno.IO.Stream OpenRead() [instance] :654
::g::Uno::IO::Stream* BundleFile::OpenRead()
{
    uStackFrame __("Uno.IO.BundleFile", "OpenRead()");

    if (_bytes != NULL)
        return ::g::Uno::IO::MemoryStream::New3(_bytes, false);

    if (::g::Uno::String::op_Equality(BundlePath(), NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[4/*"Uno.IO.Bund...*/]));

    return ::g::Uno::IO::CppXliStream::New1(CppXliOpenRead());
}

// public byte[] ReadAllBytes() [instance] :716
uArray* BundleFile::ReadAllBytes()
{
    uStackFrame __("Uno.IO.BundleFile", "ReadAllBytes()");

    if (_bytes != NULL)
    {
        uArray* result = uArray::New(::TYPES[0/*byte[]*/], uPtr(_bytes)->Length());
        ::g::Uno::Array::Copy1(::TYPES[8/*Uno.Array.Copy<byte>*/], _bytes, result, result->Length());
        return result;
    }

    if (::g::Uno::String::op_Equality(BundlePath(), NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[4/*"Uno.IO.Bund...*/]));

    try
                    {
                        uBase::String filename = uStringToXliString(this->_BundlePath);
                        uBase::Auto<uBase::DataAccessor> buffer = uBase::Bundle->OpenFileAsBuffer(filename);
                        return uArray::New(::g::Uno::Byte_typeof()->Array(), buffer->GetSizeInBytes(), buffer->GetPtr());
                    }
                    catch (const uBase::Exception& e)
                    {
                        U_THROW(::g::Uno::Exception::New1());
                    }
}

// public string ReadAllText() [instance] :759
uString* BundleFile::ReadAllText()
{
    uStackFrame __("Uno.IO.BundleFile", "ReadAllText()");

    if (_bytes != NULL)
        return ::g::Uno::Runtime::Implementation::TextEncodingImpl::DecodeUtf8(_bytes);

    return ::g::Uno::Runtime::Implementation::TextEncodingImpl::DecodeUtf8(ReadAllBytes());
}

// public generated string get_SourcePath() [instance] :642
uString* BundleFile::SourcePath()
{
    return _SourcePath;
}

// private generated void set_SourcePath(string value) [instance] :642
void BundleFile::SourcePath(uString* value)
{
    _SourcePath = value;
}

// public extern void Update(byte[] bytes) [instance] :772
void BundleFile::Update(uArray* bytes)
{
    uStackFrame __("Uno.IO.BundleFile", "Update(byte[])");

    if (bytes == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[5/*"bytes"*/]));

    BundlePath(NULL);
    IsFile(false);
    _bytes = bytes;

    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        uPtr(Changed1)->InvokeVoid(this);
}

// internal BundleFile New(Uno.IO.Bundle bundle, string sourcePath, [string bundlePath]) [static] :646
BundleFile* BundleFile::New1(::g::Uno::IO::Bundle* bundle, uString* sourcePath, uString* bundlePath)
{
    BundleFile* obj1 = (BundleFile*)uNew(BundleFile_typeof());
    obj1->ctor_(bundle, sourcePath, bundlePath);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// internal sealed extern class CppXliStream :931
// {
static void CppXliStream_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::g::Uno::IO::CppXliStreamHandle_typeof(), offsetof(::g::Uno::IO::CppXliStream, _handle), 0);
}

::g::Uno::IO::Stream_type* CppXliStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::Stream_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CppXliStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Uno.IO.CppXliStream", options);
    type->fp_build_ = CppXliStream_build;
    type->fp_get_CanRead = (void(*)(::g::Uno::IO::Stream*, bool*))CppXliStream__get_CanRead_fn;
    type->fp_get_CanSeek = (void(*)(::g::Uno::IO::Stream*, bool*))CppXliStream__get_CanSeek_fn;
    type->fp_get_CanWrite = (void(*)(::g::Uno::IO::Stream*, bool*))CppXliStream__get_CanWrite_fn;
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::Stream*, bool*))CppXliStream__Dispose1_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))CppXliStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))CppXliStream__get_Length_fn;
    type->fp_get_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))CppXliStream__get_Position_fn;
    type->fp_set_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))CppXliStream__set_Position_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*, int*))CppXliStream__Read_fn;
    type->fp_Seek = (void(*)(::g::Uno::IO::Stream*, int64_t*, int*, int64_t*))CppXliStream__Seek_fn;
    type->fp_SetLength = (void(*)(::g::Uno::IO::Stream*, int64_t*))CppXliStream__SetLength_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*))CppXliStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    return type;
}

// public CppXliStream(Uno.IO.CppXliStreamHandle handle) :935
void CppXliStream__ctor_1_fn(CppXliStream* __this, uBase::Stream** handle)
{
    __this->ctor_1(*handle);
}

// public override sealed extern bool get_CanRead() :942
void CppXliStream__get_CanRead_fn(CppXliStream* __this, bool* __retval)
{
    try
                    {
                        return *__retval = __this->_handle->CanRead(), void();
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public override sealed extern bool get_CanSeek() :972
void CppXliStream__get_CanSeek_fn(CppXliStream* __this, bool* __retval)
{
    try
                    {
                        return *__retval = __this->_handle->CanSeek(), void();
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public override sealed extern bool get_CanWrite() :957
void CppXliStream__get_CanWrite_fn(CppXliStream* __this, bool* __retval)
{
    try
                    {
                        return *__retval = __this->_handle->CanWrite(), void();
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public override sealed void Dispose(bool disposing) :1082
void CppXliStream__Dispose1_fn(CppXliStream* __this, bool* disposing)
{
    bool disposing_ = *disposing;
    if (__this->_handle != NULL)
                {
                    __this->_handle->Release();
                    __this->_handle = NULL;
                }
}

// public override sealed void Flush() :1070
void CppXliStream__Flush_fn(CppXliStream* __this)
{
    try
                {
                    __this->_handle->Flush();
                }
                catch (const uBase::Exception& e)
                {
                    throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                }
}

// public override sealed extern long get_Length() :987
void CppXliStream__get_Length_fn(CppXliStream* __this, int64_t* __retval)
{
    try
                    {
                        return *__retval = __this->_handle->GetLength(), void();
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public CppXliStream New(Uno.IO.CppXliStreamHandle handle) :935
void CppXliStream__New1_fn(uBase::Stream** handle, CppXliStream** __retval)
{
    *__retval = CppXliStream::New1(*handle);
}

// public override sealed extern long get_Position() :1002
void CppXliStream__get_Position_fn(CppXliStream* __this, int64_t* __retval)
{
    try
                    {
                        return *__retval = __this->_handle->GetPosition(), void();
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public override sealed extern void set_Position(long value) :1013
void CppXliStream__set_Position_fn(CppXliStream* __this, int64_t* value)
{
    int64_t value_ = *value;
    try
                    {
                        __this->_handle->Seek((int)value_, uBase::SeekOriginBegin);
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :1031
void CppXliStream__Read_fn(CppXliStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval)
{
    int byteOffset_ = *byteOffset;
    int byteCount_ = *byteCount;
    try
                {
                    // TODO: Bounds check
                    return *__retval = __this->_handle->Read((uint8_t*)dst->Ptr() + byteOffset_, 1, byteCount_), void();
                }
                catch (const uBase::Exception& e)
                {
                    throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                }
}

// public override sealed long Seek(long byteOffset, Uno.IO.SeekOrigin origin) :1057
void CppXliStream__Seek_fn(CppXliStream* __this, int64_t* byteOffset, int* origin, int64_t* __retval)
{
    int64_t byteOffset_ = *byteOffset;
    int origin_ = *origin;
    try
                {
                    __this->_handle->Seek((int)byteOffset_, (uBase::SeekOrigin)origin_);
                    return *__retval = __this->_handle->GetPosition(), void();
                }
                catch (const uBase::Exception& e)
                {
                    throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                }
}

// public override sealed void SetLength(long value) :1026
void CppXliStream__SetLength_fn(CppXliStream* __this, int64_t* value)
{
    uStackFrame __("Uno.IO.CppXliStream", "SetLength(long)");
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :1044
void CppXliStream__Write_fn(CppXliStream* __this, uArray* src, int* byteOffset, int* byteCount)
{
    int byteOffset_ = *byteOffset;
    int byteCount_ = *byteCount;
    try
                {
                    // TODO: Bounds check
                    __this->_handle->Write((const uint8_t*)src->Ptr() + byteOffset_, 1, byteCount_);
                }
                catch (const uBase::Exception& e)
                {
                    throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                }
}

// public CppXliStream(Uno.IO.CppXliStreamHandle handle) [instance] :935
void CppXliStream::ctor_1(uBase::Stream* handle)
{
    ctor_();
    _handle = handle;
}

// public CppXliStream New(Uno.IO.CppXliStreamHandle handle) [static] :935
CppXliStream* CppXliStream::New1(uBase::Stream* handle)
{
    CppXliStream* obj1 = (CppXliStream*)uNew(CppXliStream_typeof());
    obj1->ctor_1(handle);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// internal extern struct CppXliStreamHandle :923
// {
static void CppXliStreamHandle_build(uType* type)
{
}

uStructType* CppXliStreamHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uBase::Stream*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.IO.CppXliStreamHandle", options);
    type->fp_build_ = CppXliStreamHandle_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// public static class Directory :1101
// {
static void Directory_build(uType* type)
{
    type->Reflection.SetFunctions(9,
        new uFunction("CreateDirectory", NULL, (void*)Directory__CreateDirectory_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Delete", NULL, (void*)Directory__Delete_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("EnumerateDirectories", NULL, (void*)Directory__EnumerateDirectories_fn, 0, true, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL), 1, ::g::Uno::String_typeof()),
        new uFunction("EnumerateFiles", NULL, (void*)Directory__EnumerateFiles_fn, 0, true, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL), 1, ::g::Uno::String_typeof()),
        new uFunction("EnumerateFileSystemEntries", NULL, (void*)Directory__EnumerateFileSystemEntries_fn, 0, true, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL), 1, ::g::Uno::String_typeof()),
        new uFunction("Exists", NULL, (void*)Directory__Exists_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetCurrentDirectory", NULL, (void*)Directory__GetCurrentDirectory_fn, 0, true, ::g::Uno::String_typeof(), 0),
        new uFunction("GetUserDirectory", NULL, (void*)Directory__GetUserDirectory_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::IO::UserDirectory_typeof()),
        new uFunction("Move", NULL, (void*)Directory__Move_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

uClassType* Directory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.Directory", options);
    type->fp_build_ = Directory_build;
    return type;
}

// public static void CreateDirectory(string dirName) :1160
void Directory__CreateDirectory_fn(uString* dirName)
{
    Directory::CreateDirectory(dirName);
}

// public static void Delete(string dirName, bool recursive) :1168
void Directory__Delete_fn(uString* dirName, bool* recursive)
{
    Directory::Delete(dirName, *recursive);
}

// public static Uno.Collections.IEnumerable<string> EnumerateDirectories(string dirName) :1192
void Directory__EnumerateDirectories_fn(uString* dirName, uObject** __retval)
{
    *__retval = Directory::EnumerateDirectories(dirName);
}

// public static Uno.Collections.IEnumerable<string> EnumerateFiles(string dirName) :1200
void Directory__EnumerateFiles_fn(uString* dirName, uObject** __retval)
{
    *__retval = Directory::EnumerateFiles(dirName);
}

// public static Uno.Collections.IEnumerable<string> EnumerateFileSystemEntries(string dirName) :1208
void Directory__EnumerateFileSystemEntries_fn(uString* dirName, uObject** __retval)
{
    *__retval = Directory::EnumerateFileSystemEntries(dirName);
}

// public static bool Exists(string dirName) :1184
void Directory__Exists_fn(uString* dirName, bool* __retval)
{
    *__retval = Directory::Exists(dirName);
}

// public static string GetCurrentDirectory() :1144
void Directory__GetCurrentDirectory_fn(uString** __retval)
{
    *__retval = Directory::GetCurrentDirectory();
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir) :1103
void Directory__GetUserDirectory_fn(int* dir, uString** __retval)
{
    *__retval = Directory::GetUserDirectory(*dir);
}

// public static void Move(string oldName, string newName) :1176
void Directory__Move_fn(uString* oldName, uString* newName)
{
    Directory::Move(oldName, newName);
}

// public static void CreateDirectory(string dirName) [static] :1160
void Directory::CreateDirectory(uString* dirName)
{
    ::g::Uno::IO::FileSystemImpl::CreateDirectory(dirName);
}

// public static void Delete(string dirName, bool recursive) [static] :1168
void Directory::Delete(uString* dirName, bool recursive)
{
    ::g::Uno::IO::FileSystemImpl::DeleteDirectory(dirName, recursive);
}

// public static Uno.Collections.IEnumerable<string> EnumerateDirectories(string dirName) [static] :1192
uObject* Directory::EnumerateDirectories(uString* dirName)
{
    uStackFrame __("Uno.IO.Directory", "EnumerateDirectories(string)");
    return (uObject*)::g::Uno::IO::FileSystemEnumerable::New1(dirName, 2);
}

// public static Uno.Collections.IEnumerable<string> EnumerateFiles(string dirName) [static] :1200
uObject* Directory::EnumerateFiles(uString* dirName)
{
    uStackFrame __("Uno.IO.Directory", "EnumerateFiles(string)");
    return (uObject*)::g::Uno::IO::FileSystemEnumerable::New1(dirName, 1);
}

// public static Uno.Collections.IEnumerable<string> EnumerateFileSystemEntries(string dirName) [static] :1208
uObject* Directory::EnumerateFileSystemEntries(uString* dirName)
{
    uStackFrame __("Uno.IO.Directory", "EnumerateFileSystemEntries(string)");
    return (uObject*)::g::Uno::IO::FileSystemEnumerable::New1(dirName, 0);
}

// public static bool Exists(string dirName) [static] :1184
bool Directory::Exists(uString* dirName)
{
    return ::g::Uno::IO::FileSystemImpl::IsDirectory(dirName);
}

// public static string GetCurrentDirectory() [static] :1144
uString* Directory::GetCurrentDirectory()
{
    return ::g::Uno::IO::FileSystemImpl::GetCurrentDirectory();
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir) [static] :1103
uString* Directory::GetUserDirectory(int dir)
{
    return ::g::Uno::IO::FileSystemImpl::GetUserDirectory(dir);
}

// public static void Move(string oldName, string newName) [static] :1176
void Directory::Move(uString* oldName, uString* newName)
{
    ::g::Uno::IO::FileSystemImpl::MoveDirectory(oldName, newName);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// public sealed class EndOfStreamException :2452
// {
static void EndOfStreamException_build(uType* type)
{
    ::STRINGS[6] = uString::Const("Reached end of stream");
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)EndOfStreamException__New5_fn, 0, true, type, 0));
}

::g::Uno::Exception_type* EndOfStreamException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::IOException_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(EndOfStreamException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.IO.EndOfStreamException", options);
    type->fp_build_ = EndOfStreamException_build;
    type->fp_ctor_ = (void*)EndOfStreamException__New5_fn;
    return type;
}

// public EndOfStreamException() :2454
void EndOfStreamException__ctor_4_fn(EndOfStreamException* __this)
{
    __this->ctor_4();
}

// public EndOfStreamException New() :2454
void EndOfStreamException__New5_fn(EndOfStreamException** __retval)
{
    *__retval = EndOfStreamException::New5();
}

// public EndOfStreamException() [instance] :2454
void EndOfStreamException::ctor_4()
{
    ctor_3(::STRINGS[6/*"Reached end...*/]);
}

// public EndOfStreamException New() [static] :2454
EndOfStreamException* EndOfStreamException::New5()
{
    EndOfStreamException* obj1 = (EndOfStreamException*)uNew(EndOfStreamException_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// public static class File :1275
// {
static void File_build(uType* type)
{
    type->Reflection.SetFunctions(10,
        new uFunction("AppendAllText", NULL, (void*)File__AppendAllText_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Delete", NULL, (void*)File__Delete_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Exists", NULL, (void*)File__Exists_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Move", NULL, (void*)File__Move_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Open", NULL, (void*)File__Open_fn, 0, true, ::g::Uno::IO::Stream_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::IO::FileMode_typeof()),
        new uFunction("OpenRead", NULL, (void*)File__OpenRead_fn, 0, true, ::g::Uno::IO::Stream_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("ReadAllBytes", NULL, (void*)File__ReadAllBytes_fn, 0, true, ::g::Uno::Byte_typeof()->Array(), 1, ::g::Uno::String_typeof()),
        new uFunction("ReadAllText", NULL, (void*)File__ReadAllText_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("WriteAllBytes", NULL, (void*)File__WriteAllBytes_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array()),
        new uFunction("WriteAllText", NULL, (void*)File__WriteAllText_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

uClassType* File_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.File", options);
    type->fp_build_ = File_build;
    return type;
}

// public static void AppendAllText(string filename, string contents) :1362
void File__AppendAllText_fn(uString* filename, uString* contents)
{
    File::AppendAllText(filename, contents);
}

// public static void Delete(string filename) :1307
void File__Delete_fn(uString* filename)
{
    File::Delete(filename);
}

// public static bool Exists(string filename) :1339
void File__Exists_fn(uString* filename, bool* __retval)
{
    *__retval = File::Exists(filename);
}

// public static void Move(string oldName, string newName) :1331
void File__Move_fn(uString* oldName, uString* newName)
{
    File::Move(oldName, newName);
}

// public static Uno.IO.Stream Open(string filename, Uno.IO.FileMode filemode) :1297
void File__Open_fn(uString* filename, int* filemode, ::g::Uno::IO::Stream** __retval)
{
    *__retval = File::Open(filename, *filemode);
}

// public static Uno.IO.Stream OpenRead(string filename) :1277
void File__OpenRead_fn(uString* filename, ::g::Uno::IO::Stream** __retval)
{
    *__retval = File::OpenRead(filename);
}

// public static byte[] ReadAllBytes(string filename) :1386
void File__ReadAllBytes_fn(uString* filename, uArray** __retval)
{
    *__retval = File::ReadAllBytes(filename);
}

// public static string ReadAllText(string filename) :1370
void File__ReadAllText_fn(uString* filename, uString** __retval)
{
    *__retval = File::ReadAllText(filename);
}

// public static void WriteAllBytes(string filename, byte[] bytes) :1402
void File__WriteAllBytes_fn(uString* filename, uArray* bytes)
{
    File::WriteAllBytes(filename, bytes);
}

// public static void WriteAllText(string filename, string text) :1394
void File__WriteAllText_fn(uString* filename, uString* text)
{
    File::WriteAllText(filename, text);
}

// public static void AppendAllText(string filename, string contents) [static] :1362
void File::AppendAllText(uString* filename, uString* contents)
{
    ::g::Uno::IO::FileSystemImpl::AppendAllText(filename, contents);
}

// public static void Delete(string filename) [static] :1307
void File::Delete(uString* filename)
{
    ::g::Uno::IO::FileSystemImpl::DeleteFile(filename);
}

// public static bool Exists(string filename) [static] :1339
bool File::Exists(uString* filename)
{
    return ::g::Uno::IO::FileSystemImpl::IsFile(filename);
}

// public static void Move(string oldName, string newName) [static] :1331
void File::Move(uString* oldName, uString* newName)
{
    ::g::Uno::IO::FileSystemImpl::MoveFile(oldName, newName);
}

// public static Uno.IO.Stream Open(string filename, Uno.IO.FileMode filemode) [static] :1297
::g::Uno::IO::Stream* File::Open(uString* filename, int filemode)
{
    return ::g::Uno::IO::CppXliStream::New1(::g::Uno::IO::FileSystemImpl::CppXliOpen(filename, filemode));
}

// public static Uno.IO.Stream OpenRead(string filename) [static] :1277
::g::Uno::IO::Stream* File::OpenRead(uString* filename)
{
    return ::g::Uno::IO::CppXliStream::New1(::g::Uno::IO::FileSystemImpl::CppXliOpenRead(filename));
}

// public static byte[] ReadAllBytes(string filename) [static] :1386
uArray* File::ReadAllBytes(uString* filename)
{
    return ::g::Uno::IO::FileSystemImpl::ReadAllBytes(filename);
}

// public static string ReadAllText(string filename) [static] :1370
uString* File::ReadAllText(uString* filename)
{
    return ::g::Uno::IO::FileSystemImpl::ReadAllText(filename);
}

// public static void WriteAllBytes(string filename, byte[] bytes) [static] :1402
void File::WriteAllBytes(uString* filename, uArray* bytes)
{
    ::g::Uno::IO::FileSystemImpl::WriteAllBytes(filename, bytes);
}

// public static void WriteAllText(string filename, string text) [static] :1394
void File::WriteAllText(uString* filename, uString* text)
{
    ::g::Uno::IO::FileSystemImpl::WriteAllText(filename, text);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// public enum FileMode :1502
uEnumType* FileMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.IO.FileMode", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "CreateNew", 1LL,
        "Create", 2LL,
        "Open", 3LL,
        "OpenOrCreate", 4LL,
        "Truncate", 5LL,
        "Append", 6LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// internal sealed class FileSystemEnumerable :1741
// {
static void FileSystemEnumerable_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(FileSystemEnumerable_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::IO::FileSystemEnumerable, _dirName), 0,
        ::g::Uno::IO::FileSystemEnumeratorMode_typeof(), offsetof(::g::Uno::IO::FileSystemEnumerable, _mode), 0);
}

FileSystemEnumerable_type* FileSystemEnumerable_typeof()
{
    static uSStrong<FileSystemEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FileSystemEnumerable);
    options.TypeSize = sizeof(FileSystemEnumerable_type);
    type = (FileSystemEnumerable_type*)uClassType::New("Uno.IO.FileSystemEnumerable", options);
    type->fp_build_ = FileSystemEnumerable_build;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))FileSystemEnumerable__GetEnumerator_fn;
    return type;
}

// public FileSystemEnumerable(string dirName, Uno.IO.FileSystemEnumeratorMode mode) :1746
void FileSystemEnumerable__ctor__fn(FileSystemEnumerable* __this, uString* dirName, int* mode)
{
    __this->ctor_(dirName, *mode);
}

// public Uno.Collections.IEnumerator<string> GetEnumerator() :1752
void FileSystemEnumerable__GetEnumerator_fn(FileSystemEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public FileSystemEnumerable New(string dirName, Uno.IO.FileSystemEnumeratorMode mode) :1746
void FileSystemEnumerable__New1_fn(uString* dirName, int* mode, FileSystemEnumerable** __retval)
{
    *__retval = FileSystemEnumerable::New1(dirName, *mode);
}

// public FileSystemEnumerable(string dirName, Uno.IO.FileSystemEnumeratorMode mode) [instance] :1746
void FileSystemEnumerable::ctor_(uString* dirName, int mode)
{
    _dirName = dirName;
    _mode = mode;
}

// public Uno.Collections.IEnumerator<string> GetEnumerator() [instance] :1752
uObject* FileSystemEnumerable::GetEnumerator()
{
    uStackFrame __("Uno.IO.FileSystemEnumerable", "GetEnumerator()");
    return (uObject*)::g::Uno::IO::FileSystemEnumerator::New1(::g::Uno::IO::FileSystemImpl::GetEnumerator(_dirName), _mode);
}

// public FileSystemEnumerable New(string dirName, Uno.IO.FileSystemEnumeratorMode mode) [static] :1746
FileSystemEnumerable* FileSystemEnumerable::New1(uString* dirName, int mode)
{
    FileSystemEnumerable* obj1 = (FileSystemEnumerable*)uNew(FileSystemEnumerable_typeof());
    obj1->ctor_(dirName, mode);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// internal sealed class FileSystemEnumerator :1775
// {
static void FileSystemEnumerator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(FileSystemEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(FileSystemEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(FileSystemEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::IO::FileSystemEnumeratorHandle_typeof(), offsetof(::g::Uno::IO::FileSystemEnumerator, _handle), 0,
        ::g::Uno::IO::FileSystemEnumeratorMode_typeof(), offsetof(::g::Uno::IO::FileSystemEnumerator, _mode), 0);
}

FileSystemEnumerator_type* FileSystemEnumerator_typeof()
{
    static uSStrong<FileSystemEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(FileSystemEnumerator);
    options.TypeSize = sizeof(FileSystemEnumerator_type);
    type = (FileSystemEnumerator_type*)uClassType::New("Uno.IO.FileSystemEnumerator", options);
    type->fp_build_ = FileSystemEnumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))FileSystemEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))FileSystemEnumerator__Dispose_fn;
    type->interface2.fp_Reset = (void(*)(uObject*))FileSystemEnumerator__Reset_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))FileSystemEnumerator__MoveNext_fn;
    return type;
}

// public FileSystemEnumerator(Uno.IO.FileSystemEnumeratorHandle handle, Uno.IO.FileSystemEnumeratorMode mode) :1780
void FileSystemEnumerator__ctor__fn(FileSystemEnumerator* __this, ::CppXliFileSystemEnumerator** handle, int* mode)
{
    __this->ctor_(*handle, *mode);
}

// public string get_Current() :1788
void FileSystemEnumerator__get_Current_fn(FileSystemEnumerator* __this, uString** __retval)
{
    *__retval = __this->Current();
}

// public void Dispose() :1791
void FileSystemEnumerator__Dispose_fn(FileSystemEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :1801
void FileSystemEnumerator__MoveNext_fn(FileSystemEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public FileSystemEnumerator New(Uno.IO.FileSystemEnumeratorHandle handle, Uno.IO.FileSystemEnumeratorMode mode) :1780
void FileSystemEnumerator__New1_fn(::CppXliFileSystemEnumerator** handle, int* mode, FileSystemEnumerator** __retval)
{
    *__retval = FileSystemEnumerator::New1(*handle, *mode);
}

// public void Reset() :1796
void FileSystemEnumerator__Reset_fn(FileSystemEnumerator* __this)
{
    __this->Reset();
}

// public FileSystemEnumerator(Uno.IO.FileSystemEnumeratorHandle handle, Uno.IO.FileSystemEnumeratorMode mode) [instance] :1780
void FileSystemEnumerator::ctor_(::CppXliFileSystemEnumerator* handle, int mode)
{
    _handle = handle;
    _mode = mode;
}

// public string get_Current() [instance] :1788
uString* FileSystemEnumerator::Current()
{
    return ::g::Uno::IO::FileSystemEnumeratorImpl::GetName(_handle);
}

// public void Dispose() [instance] :1791
void FileSystemEnumerator::Dispose()
{
    ::g::Uno::IO::FileSystemEnumeratorImpl::Dispose(_handle);
}

// public bool MoveNext() [instance] :1801
bool FileSystemEnumerator::MoveNext()
{
    while (true)
    {
        bool result = ::g::Uno::IO::FileSystemEnumeratorImpl::MoveNext(_handle);

        if (result && (_mode != 0))
        {
            bool isDir = ::g::Uno::IO::FileSystemEnumeratorImpl::IsDirectory(_handle);

            if (((_mode == 1) && isDir) || ((_mode == 2) && !isDir))
                continue;
        }

        return result;
    }
}

// public void Reset() [instance] :1796
void FileSystemEnumerator::Reset()
{
    ::g::Uno::IO::FileSystemEnumeratorImpl::Reset(_handle);
}

// public FileSystemEnumerator New(Uno.IO.FileSystemEnumeratorHandle handle, Uno.IO.FileSystemEnumeratorMode mode) [static] :1780
FileSystemEnumerator* FileSystemEnumerator::New1(::CppXliFileSystemEnumerator* handle, int mode)
{
    FileSystemEnumerator* obj1 = (FileSystemEnumerator*)uNew(FileSystemEnumerator_typeof());
    obj1->ctor_(handle, mode);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// internal struct FileSystemEnumeratorHandle :1835
// {
static void FileSystemEnumeratorHandle_build(uType* type)
{
}

uStructType* FileSystemEnumeratorHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::CppXliFileSystemEnumerator*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.IO.FileSystemEnumeratorHandle", options);
    type->fp_build_ = FileSystemEnumeratorHandle_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// internal static class FileSystemEnumeratorImpl :1840
// {
static void FileSystemEnumeratorImpl_build(uType* type)
{
}

uClassType* FileSystemEnumeratorImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.FileSystemEnumeratorImpl", options);
    type->fp_build_ = FileSystemEnumeratorImpl_build;
    return type;
}

// public static void Dispose(Uno.IO.FileSystemEnumeratorHandle handle) :1842
void FileSystemEnumeratorImpl__Dispose_fn(::CppXliFileSystemEnumerator** handle)
{
    FileSystemEnumeratorImpl::Dispose(*handle);
}

// public static string GetName(Uno.IO.FileSystemEnumeratorHandle handle) :1872
void FileSystemEnumeratorImpl__GetName_fn(::CppXliFileSystemEnumerator** handle, uString** __retval)
{
    *__retval = FileSystemEnumeratorImpl::GetName(*handle);
}

// public static bool IsDirectory(Uno.IO.FileSystemEnumeratorHandle handle) :1882
void FileSystemEnumeratorImpl__IsDirectory_fn(::CppXliFileSystemEnumerator** handle, bool* __retval)
{
    *__retval = FileSystemEnumeratorImpl::IsDirectory(*handle);
}

// public static bool MoveNext(Uno.IO.FileSystemEnumeratorHandle handle) :1852
void FileSystemEnumeratorImpl__MoveNext_fn(::CppXliFileSystemEnumerator** handle, bool* __retval)
{
    *__retval = FileSystemEnumeratorImpl::MoveNext(*handle);
}

// public static void Reset(Uno.IO.FileSystemEnumeratorHandle handle) :1862
void FileSystemEnumeratorImpl__Reset_fn(::CppXliFileSystemEnumerator** handle)
{
    FileSystemEnumeratorImpl::Reset(*handle);
}

// public static void Dispose(Uno.IO.FileSystemEnumeratorHandle handle) [static] :1842
void FileSystemEnumeratorImpl::Dispose(::CppXliFileSystemEnumerator* handle)
{
    handle->Release();
}

// public static string GetName(Uno.IO.FileSystemEnumeratorHandle handle) [static] :1872
uString* FileSystemEnumeratorImpl::GetName(::CppXliFileSystemEnumerator* handle)
{
    return uStringFromXliString(handle->Files[handle->Index].Name);
}

// public static bool IsDirectory(Uno.IO.FileSystemEnumeratorHandle handle) [static] :1882
bool FileSystemEnumeratorImpl::IsDirectory(::CppXliFileSystemEnumerator* handle)
{
    return (handle->Files[handle->Index].Attributes & uBase::FileAttributesDirectory) != 0;
}

// public static bool MoveNext(Uno.IO.FileSystemEnumeratorHandle handle) [static] :1852
bool FileSystemEnumeratorImpl::MoveNext(::CppXliFileSystemEnumerator* handle)
{
    return ++handle->Index < handle->Files.Length();
}

// public static void Reset(Uno.IO.FileSystemEnumeratorHandle handle) [static] :1862
void FileSystemEnumeratorImpl::Reset(::CppXliFileSystemEnumerator* handle)
{
    handle->Index = -1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// internal enum FileSystemEnumeratorMode :1768
uEnumType* FileSystemEnumeratorMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.IO.FileSystemEnumeratorMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "All", 0LL,
        "Files", 1LL,
        "Directories", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// internal static class FileSystemImpl :1898
// {
static void FileSystemImpl_build(uType* type)
{
}

uClassType* FileSystemImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.FileSystemImpl", options);
    type->fp_build_ = FileSystemImpl_build;
    return type;
}

// public static void AppendAllText(string filename, string contents) :2173
void FileSystemImpl__AppendAllText_fn(uString* filename, uString* contents)
{
    FileSystemImpl::AppendAllText(filename, contents);
}

// public static extern Uno.IO.CppXliStreamHandle CppXliOpen(string filename, Uno.IO.FileMode filemode) :1927
void FileSystemImpl__CppXliOpen_fn(uString* filename, int* filemode, uBase::Stream** __retval)
{
    *__retval = FileSystemImpl::CppXliOpen(filename, *filemode);
}

// public static extern Uno.IO.CppXliStreamHandle CppXliOpenRead(string filename) :1901
void FileSystemImpl__CppXliOpenRead_fn(uString* filename, uBase::Stream** __retval)
{
    *__retval = FileSystemImpl::CppXliOpenRead(filename);
}

// public static void CreateDirectory(string dirName) :2028
void FileSystemImpl__CreateDirectory_fn(uString* dirName)
{
    FileSystemImpl::CreateDirectory(dirName);
}

// public static void DeleteDirectory(string dirName, bool recursive) :2045
void FileSystemImpl__DeleteDirectory_fn(uString* dirName, bool* recursive)
{
    FileSystemImpl::DeleteDirectory(dirName, *recursive);
}

// public static void DeleteFile(string filename) :2082
void FileSystemImpl__DeleteFile_fn(uString* filename)
{
    FileSystemImpl::DeleteFile(filename);
}

// public static string GetCurrentDirectory() :1994
void FileSystemImpl__GetCurrentDirectory_fn(uString** __retval)
{
    *__retval = FileSystemImpl::GetCurrentDirectory();
}

// public static Uno.IO.FileSystemEnumeratorHandle GetEnumerator(string dirName) :2316
void FileSystemImpl__GetEnumerator_fn(uString* dirName, ::CppXliFileSystemEnumerator** __retval)
{
    *__retval = FileSystemImpl::GetEnumerator(dirName);
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir) :1977
void FileSystemImpl__GetUserDirectory_fn(int* dir, uString** __retval)
{
    *__retval = FileSystemImpl::GetUserDirectory(*dir);
}

// public static bool IsDirectory(string filename) :2133
void FileSystemImpl__IsDirectory_fn(uString* filename, bool* __retval)
{
    *__retval = FileSystemImpl::IsDirectory(filename);
}

// public static bool IsFile(string filename) :2150
void FileSystemImpl__IsFile_fn(uString* filename, bool* __retval)
{
    *__retval = FileSystemImpl::IsFile(filename);
}

// public static void MoveDirectory(string oldName, string newName) :2065
void FileSystemImpl__MoveDirectory_fn(uString* oldName, uString* newName)
{
    FileSystemImpl::MoveDirectory(oldName, newName);
}

// public static void MoveFile(string oldName, string newName) :2116
void FileSystemImpl__MoveFile_fn(uString* oldName, uString* newName)
{
    FileSystemImpl::MoveFile(oldName, newName);
}

// public static byte[] ReadAllBytes(string filename) :2207
void FileSystemImpl__ReadAllBytes_fn(uString* filename, uArray** __retval)
{
    *__retval = FileSystemImpl::ReadAllBytes(filename);
}

// public static string ReadAllText(string filename) :2190
void FileSystemImpl__ReadAllText_fn(uString* filename, uString** __retval)
{
    *__retval = FileSystemImpl::ReadAllText(filename);
}

// public static void WriteAllBytes(string filename, byte[] bytes) :2275
void FileSystemImpl__WriteAllBytes_fn(uString* filename, uArray* bytes)
{
    FileSystemImpl::WriteAllBytes(filename, bytes);
}

// public static void WriteAllText(string filename, string text) :2258
void FileSystemImpl__WriteAllText_fn(uString* filename, uString* text)
{
    FileSystemImpl::WriteAllText(filename, text);
}

// public static void AppendAllText(string filename, string contents) [static] :2173
void FileSystemImpl::AppendAllText(uString* filename, uString* contents)
{
    try
                    {
                        uBase::Text::Append(uStringToXliString(filename), uStringToXliString(contents));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static extern Uno.IO.CppXliStreamHandle CppXliOpen(string filename, Uno.IO.FileMode filemode) [static] :1927
uBase::Stream* FileSystemImpl::CppXliOpen(uString* filename, int filemode)
{
    try
                {
                    uBase::FileMode xliFileMode = uBase::FileModeRead;
                    switch(filemode)
                    {
                        case 5:
                            if (!uBase::Disk->IsFile(uStringToXliString(filename)))
                            {
                                throw uBase::Exception("File not found");
                            }
                        case 2:
                            {
                                uBase::Auto<uBase::Stream> f = uBase::Disk->OpenFile(uStringToXliString(filename), uBase::FileModeWrite);
                                f->Close();
                                xliFileMode = uBase::FileModeReadWrite;
                                break;
                            }
    
                        case 1:
                            if (uBase::Disk->IsFile(uStringToXliString(filename)))
                            {
                                throw uBase::Exception("File already exists.");
                            }
                            xliFileMode = uBase::FileModeWrite;
                            break;
    
                        case 4:
                            if (!uBase::Disk->IsFile(uStringToXliString(filename)))
                            {
                                uBase::Auto<uBase::Stream> f = uBase::Disk->OpenFile(uStringToXliString(filename), uBase::FileModeWrite);
                                f->Close();
                            }
                        case 3:
                            xliFileMode = uBase::FileModeReadWrite;
                            break;
    
                        case 6:
                            xliFileMode = uBase::FileModeAppend;
                            break;
                    }
                    return uBase::Disk->OpenFile(uStringToXliString(filename), xliFileMode);
                }
                catch (const uBase::Exception& e)
                {
                    throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                }
}

// public static extern Uno.IO.CppXliStreamHandle CppXliOpenRead(string filename) [static] :1901
uBase::Stream* FileSystemImpl::CppXliOpenRead(uString* filename)
{
    try
                {
                    return uBase::Disk->OpenFile(uStringToXliString(filename), uBase::FileModeRead);
                }
                catch (const uBase::Exception& e)
                {
                    throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                }
}

// public static void CreateDirectory(string dirName) [static] :2028
void FileSystemImpl::CreateDirectory(uString* dirName)
{
    try
                    {
                        uBase::Disk->CreateDirectories(uStringToXliString(dirName));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static void DeleteDirectory(string dirName, bool recursive) [static] :2045
void FileSystemImpl::DeleteDirectory(uString* dirName, bool recursive)
{
    try
                    {
                        if (recursive)
                            uBase::Disk->DeleteDirectoryRecursive(uStringToXliString(dirName));
                        else
                            uBase::Disk->DeleteDirectory(uStringToXliString(dirName));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static void DeleteFile(string filename) [static] :2082
void FileSystemImpl::DeleteFile(uString* filename)
{
    try
                    {
                        uBase::Disk->DeleteFile(uStringToXliString(filename));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static string GetCurrentDirectory() [static] :1994
uString* FileSystemImpl::GetCurrentDirectory()
{
    try
                    {
                        return uStringFromXliString(uBase::Disk->GetCurrentDirectory());
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static Uno.IO.FileSystemEnumeratorHandle GetEnumerator(string dirName) [static] :2316
::CppXliFileSystemEnumerator* FileSystemImpl::GetEnumerator(uString* dirName)
{
    try
                    {
                        CppXliFileSystemEnumerator* data = new CppXliFileSystemEnumerator();
                        uBase::Disk->GetFiles(uStringToXliString(dirName), data->Files);
                        return data;
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir) [static] :1977
uString* FileSystemImpl::GetUserDirectory(int dir)
{
    try
                    {
                        return uStringFromXliString(uBase::Disk->GetSystemDirectory((uBase::SystemDirectory)dir));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static bool IsDirectory(string filename) [static] :2133
bool FileSystemImpl::IsDirectory(uString* filename)
{
    try
                    {
                        return uBase::Disk->IsDirectory(uStringToXliString(filename));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static bool IsFile(string filename) [static] :2150
bool FileSystemImpl::IsFile(uString* filename)
{
    try
                    {
                        return uBase::Disk->IsFile(uStringToXliString(filename));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static void MoveDirectory(string oldName, string newName) [static] :2065
void FileSystemImpl::MoveDirectory(uString* oldName, uString* newName)
{
    try
                    {
                        uBase::Disk->MoveDirectory(uStringToXliString(oldName), uStringToXliString(newName));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static void MoveFile(string oldName, string newName) [static] :2116
void FileSystemImpl::MoveFile(uString* oldName, uString* newName)
{
    try
                    {
                        uBase::Disk->MoveFile(uStringToXliString(oldName), uStringToXliString(newName));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static byte[] ReadAllBytes(string filename) [static] :2207
uArray* FileSystemImpl::ReadAllBytes(uString* filename)
{
    try
                    {
                        uBase::Auto<uBase::Stream> f = uBase::Disk->OpenFile(uStringToXliString(filename), uBase::FileModeRead);
                        uArray* result = uArray::New(::g::Uno::Byte_typeof()->Array(), f->GetLength());
                        f->ReadSafe(result->Ptr(), 1, result->Length());
                        return result;
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static string ReadAllText(string filename) [static] :2190
uString* FileSystemImpl::ReadAllText(uString* filename)
{
    try
                    {
                        return uStringFromXliString(uBase::Text::Load(uStringToXliString(filename)));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static void WriteAllBytes(string filename, byte[] bytes) [static] :2275
void FileSystemImpl::WriteAllBytes(uString* filename, uArray* bytes)
{
    try
                    {
                        uBase::Auto<uBase::Stream> f = uBase::Disk->OpenFile(uStringToXliString(filename), uBase::FileModeWrite);
                        f->Write(bytes->Ptr(), 1, bytes->Length());
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}

// public static void WriteAllText(string filename, string text) [static] :2258
void FileSystemImpl::WriteAllText(uString* filename, uString* text)
{
    try
                    {
                        uBase::Text::Save(uStringToXliString(filename), uStringToXliString(text));
                    }
                    catch (const uBase::Exception& e)
                    {
                        throw uThrowable(::g::Uno::IO::IOException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
                    }
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// public class IOException :2443
// {
static void IOException_build(uType* type)
{
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)IOException__New4_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* IOException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(IOException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.IO.IOException", options);
    type->fp_build_ = IOException_build;
    return type;
}

// public IOException(string message) :2445
void IOException__ctor_3_fn(IOException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public IOException New(string message) :2445
void IOException__New4_fn(uString* message, IOException** __retval)
{
    *__retval = IOException::New4(message);
}

// public IOException(string message) [instance] :2445
void IOException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public IOException New(string message) [static] :2445
IOException* IOException::New4(uString* message)
{
    IOException* obj1 = (IOException*)uNew(IOException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// public sealed class MemoryStream :2470
// {
static void MemoryStream_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[8] = ::g::Uno::Array_typeof()->MakeMethod(1/*Copy<byte>*/, ::g::Uno::Byte_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::TYPES[0/*byte[]*/], offsetof(::g::Uno::IO::MemoryStream, _buffer), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::IO::MemoryStream, _canResize), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::IO::MemoryStream, _canWrite), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Uno::IO::MemoryStream, _length), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::MemoryStream, _nextIncrease), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Uno::IO::MemoryStream, _Position), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Capacity", NULL, (void*)MemoryStream__get_Capacity_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetBuffer", NULL, (void*)MemoryStream__GetBuffer_fn, 0, false, ::TYPES[0/*byte[]*/], 0),
        new uFunction(".ctor", NULL, (void*)MemoryStream__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)MemoryStream__New2_fn, 0, true, type, 1, ::TYPES[0/*byte[]*/]),
        new uFunction(".ctor", NULL, (void*)MemoryStream__New3_fn, 0, true, type, 2, ::TYPES[0/*byte[]*/], ::g::Uno::Bool_typeof()));
}

::g::Uno::IO::Stream_type* MemoryStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::Stream_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MemoryStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Uno.IO.MemoryStream", options);
    type->fp_build_ = MemoryStream_build;
    type->fp_ctor_ = (void*)MemoryStream__New1_fn;
    type->fp_get_CanRead = (void(*)(::g::Uno::IO::Stream*, bool*))MemoryStream__get_CanRead_fn;
    type->fp_get_CanSeek = (void(*)(::g::Uno::IO::Stream*, bool*))MemoryStream__get_CanSeek_fn;
    type->fp_get_CanTimeout = (void(*)(::g::Uno::IO::Stream*, bool*))MemoryStream__get_CanTimeout_fn;
    type->fp_get_CanWrite = (void(*)(::g::Uno::IO::Stream*, bool*))MemoryStream__get_CanWrite_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))MemoryStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))MemoryStream__get_Length_fn;
    type->fp_get_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))MemoryStream__get_Position_fn;
    type->fp_set_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))MemoryStream__set_Position_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*, int*))MemoryStream__Read_fn;
    type->fp_Seek = (void(*)(::g::Uno::IO::Stream*, int64_t*, int*, int64_t*))MemoryStream__Seek_fn;
    type->fp_SetLength = (void(*)(::g::Uno::IO::Stream*, int64_t*))MemoryStream__SetLength_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*))MemoryStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    return type;
}

// public MemoryStream() :2513
void MemoryStream__ctor_1_fn(MemoryStream* __this)
{
    __this->ctor_1();
}

// public MemoryStream(byte[] buffer) :2517
void MemoryStream__ctor_2_fn(MemoryStream* __this, uArray* buffer)
{
    __this->ctor_2(buffer);
}

// public MemoryStream(byte[] buffer, bool writable) :2522
void MemoryStream__ctor_3_fn(MemoryStream* __this, uArray* buffer, bool* writable)
{
    __this->ctor_3(buffer, *writable);
}

// public override sealed bool get_CanRead() :2474
void MemoryStream__get_CanRead_fn(MemoryStream* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public override sealed bool get_CanSeek() :2484
void MemoryStream__get_CanSeek_fn(MemoryStream* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public override sealed bool get_CanTimeout() :2489
void MemoryStream__get_CanTimeout_fn(MemoryStream* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public override sealed bool get_CanWrite() :2479
void MemoryStream__get_CanWrite_fn(MemoryStream* __this, bool* __retval)
{
    return *__retval = __this->_canWrite, void();
}

// public int get_Capacity() :2499
void MemoryStream__get_Capacity_fn(MemoryStream* __this, int* __retval)
{
    *__retval = __this->Capacity();
}

// private void EnsureCapacity(int byteCount) :2573
void MemoryStream__EnsureCapacity_fn(MemoryStream* __this, int* byteCount)
{
    __this->EnsureCapacity(*byteCount);
}

// public override sealed void Flush() :2610
void MemoryStream__Flush_fn(MemoryStream* __this)
{
}

// public byte[] GetBuffer() :2600
void MemoryStream__GetBuffer_fn(MemoryStream* __this, uArray** __retval)
{
    *__retval = __this->GetBuffer();
}

// public override sealed long get_Length() :2494
void MemoryStream__get_Length_fn(MemoryStream* __this, int64_t* __retval)
{
    return *__retval = __this->_length, void();
}

// public MemoryStream New() :2513
void MemoryStream__New1_fn(MemoryStream** __retval)
{
    *__retval = MemoryStream::New1();
}

// public MemoryStream New(byte[] buffer) :2517
void MemoryStream__New2_fn(uArray* buffer, MemoryStream** __retval)
{
    *__retval = MemoryStream::New2(buffer);
}

// public MemoryStream New(byte[] buffer, bool writable) :2522
void MemoryStream__New3_fn(uArray* buffer, bool* writable, MemoryStream** __retval)
{
    *__retval = MemoryStream::New3(buffer, *writable);
}

// public generated override sealed long get_Position() :2504
void MemoryStream__get_Position_fn(MemoryStream* __this, int64_t* __retval)
{
    return *__retval = __this->_Position, void();
}

// public generated override sealed void set_Position(long value) :2504
void MemoryStream__set_Position_fn(MemoryStream* __this, int64_t* value)
{
    int64_t value_ = *value;
    __this->_Position = value_;
}

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :2545
void MemoryStream__Read_fn(MemoryStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval)
{
    uStackFrame __("Uno.IO.MemoryStream", "Read(byte[],int,int)");
    int byteCount_ = *byteCount;
    int byteOffset_ = *byteOffset;
    int i = 0;

    for (; (i < byteCount_) && ((__this->Position() + (int64_t)i) < __this->Length()); i++)
        uPtr(dst)->Item<uint8_t>(i + byteOffset_) = uPtr(__this->_buffer)->Item<uint8_t>((int)__this->Position() + i);

    __this->Position(__this->Position() + (int64_t)i);
    return *__retval = i, void();
}

// private void ResizeTo(int newSize) :2589
void MemoryStream__ResizeTo_fn(MemoryStream* __this, int* newSize)
{
    __this->ResizeTo(*newSize);
}

// public override sealed long Seek(long byteOffset, Uno.IO.SeekOrigin origin) :2556
void MemoryStream__Seek_fn(MemoryStream* __this, int64_t* byteOffset, int* origin, int64_t* __retval)
{
    int origin_ = *origin;
    int64_t byteOffset_ = *byteOffset;

    switch (origin_)
    {
        case 0:
        {
            __this->Position(byteOffset_);
            break;
        }
        case 2:
        {
            __this->Position(__this->Length() + byteOffset_);
            break;
        }
        default:
        {
            __this->Position(__this->Position() + byteOffset_);
            break;
        }
    }

    return *__retval = __this->Position(), void();
}

// public override sealed void SetLength(long value) :2605
void MemoryStream__SetLength_fn(MemoryStream* __this, int64_t* value)
{
    uStackFrame __("Uno.IO.MemoryStream", "SetLength(long)");
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :2528
void MemoryStream__Write_fn(MemoryStream* __this, uArray* src, int* byteOffset, int* byteCount)
{
    uStackFrame __("Uno.IO.MemoryStream", "Write(byte[],int,int)");
    int byteCount_ = *byteCount;
    int byteOffset_ = *byteOffset;

    if (!__this->_canWrite)
        U_THROW(::g::Uno::NotSupportedException::New4());

    __this->EnsureCapacity(byteCount_);

    for (int i = byteOffset_; i < (byteOffset_ + byteCount_); i++)
    {
        uPtr(__this->_buffer)->Item<uint8_t>((int)__this->Position()) = uPtr(src)->Item<uint8_t>(i);
        __this->Position(__this->Position() + 1LL);
    }

    if (__this->Position() > __this->Length())
        __this->_length = __this->Position();
}

// public MemoryStream() [instance] :2513
void MemoryStream::ctor_1()
{
    _canWrite = true;
    _canResize = true;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 0);
    _nextIncrease = 256;
    ctor_();
}

// public MemoryStream(byte[] buffer) [instance] :2517
void MemoryStream::ctor_2(uArray* buffer)
{
    _canWrite = true;
    _canResize = true;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 0);
    _nextIncrease = 256;
    ctor_();
    _buffer = buffer;
}

// public MemoryStream(byte[] buffer, bool writable) [instance] :2522
void MemoryStream::ctor_3(uArray* buffer, bool writable)
{
    _canWrite = true;
    _canResize = true;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 0);
    _nextIncrease = 256;
    ctor_();
    _buffer = buffer;
    _canWrite = writable;
}

// public int get_Capacity() [instance] :2499
int MemoryStream::Capacity()
{
    uStackFrame __("Uno.IO.MemoryStream", "get_Capacity()");
    return uPtr(_buffer)->Length();
}

// private void EnsureCapacity(int byteCount) [instance] :2573
void MemoryStream::EnsureCapacity(int byteCount)
{
    uStackFrame __("Uno.IO.MemoryStream", "EnsureCapacity(int)");

    if ((Position() + (int64_t)byteCount) <= (int64_t)Capacity())
        return;
    else if ((Position() + (int64_t)byteCount) <= (int64_t)(Capacity() + _nextIncrease))
        ResizeTo(Capacity() + _nextIncrease);
    else
        ResizeTo((int)Position() + byteCount);
}

// public byte[] GetBuffer() [instance] :2600
uArray* MemoryStream::GetBuffer()
{
    return _buffer;
}

// private void ResizeTo(int newSize) [instance] :2589
void MemoryStream::ResizeTo(int newSize)
{
    uStackFrame __("Uno.IO.MemoryStream", "ResizeTo(int)");

    if (!_canResize)
        U_THROW(::g::Uno::NotSupportedException::New4());

    uArray* newBuffer = uArray::New(::TYPES[0/*byte[]*/], newSize);
    ::g::Uno::Array::Copy1(::TYPES[8/*Uno.Array.Copy<byte>*/], _buffer, newBuffer, uPtr(_buffer)->Length());
    _buffer = newBuffer;
    _nextIncrease = Capacity();
}

// public MemoryStream New() [static] :2513
MemoryStream* MemoryStream::New1()
{
    MemoryStream* obj1 = (MemoryStream*)uNew(MemoryStream_typeof());
    obj1->ctor_1();
    return obj1;
}

// public MemoryStream New(byte[] buffer) [static] :2517
MemoryStream* MemoryStream::New2(uArray* buffer)
{
    MemoryStream* obj2 = (MemoryStream*)uNew(MemoryStream_typeof());
    obj2->ctor_2(buffer);
    return obj2;
}

// public MemoryStream New(byte[] buffer, bool writable) [static] :2522
MemoryStream* MemoryStream::New3(uArray* buffer, bool writable)
{
    MemoryStream* obj3 = (MemoryStream*)uNew(MemoryStream_typeof());
    obj3->ctor_3(buffer, writable);
    return obj3;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// public static class Path :2624
// {
static void Path_build(uType* type)
{
    ::STRINGS[7] = uString::Const("");
    type->Reflection.SetFunctions(5,
        new uFunction("Combine", NULL, (void*)Path__Combine_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("get_DirectorySeparatorChar", NULL, (void*)Path__get_DirectorySeparatorChar_fn, 0, true, ::g::Uno::Char_typeof(), 0),
        new uFunction("GetDirectoryName", NULL, (void*)Path__GetDirectoryName_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetFullPath", NULL, (void*)Path__GetFullPath_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("IsPathRooted", NULL, (void*)Path__IsPathRooted_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::String_typeof()));
}

uClassType* Path_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.Path", options);
    type->fp_build_ = Path_build;
    return type;
}

// public static string Combine(string a, string b) :2637
void Path__Combine_fn(uString* a, uString* b, uString** __retval)
{
    *__retval = Path::Combine(a, b);
}

// public static char get_DirectorySeparatorChar() :2628
void Path__get_DirectorySeparatorChar_fn(uChar* __retval)
{
    *__retval = Path::DirectorySeparatorChar();
}

// public static string GetDirectoryName(string filename) :2688
void Path__GetDirectoryName_fn(uString* filename, uString** __retval)
{
    *__retval = Path::GetDirectoryName(filename);
}

// public static string GetFullPath(string filename) :2789
void Path__GetFullPath_fn(uString* filename, uString** __retval)
{
    *__retval = Path::GetFullPath(filename);
}

// public static bool IsPathRooted(string filename) :2828
void Path__IsPathRooted_fn(uString* filename, bool* __retval)
{
    *__retval = Path::IsPathRooted(filename);
}

// public static string Combine(string a, string b) [static] :2637
uString* Path::Combine(uString* a, uString* b)
{
    uStackFrame __("Uno.IO.Path", "Combine(string,string)");

    if (Path::IsPathRooted(b))
        return b;

    if ((::g::Uno::String::IsNullOrEmpty(a) || (uPtr(a)->Item(uPtr(a)->Length() - 1) == '\\')) || (uPtr(a)->Item(uPtr(a)->Length() - 1) == '/'))
        return ::g::Uno::String::op_Addition2(a, b);

    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(a, uBox<uChar>(::TYPES[2/*char*/], Path::DirectorySeparatorChar())), b);
}

// public static string GetDirectoryName(string filename) [static] :2688
uString* Path::GetDirectoryName(uString* filename)
{
    uStackFrame __("Uno.IO.Path", "GetDirectoryName(string)");

    if (::g::Uno::String::op_Equality(filename, NULL))
        return NULL;

    for (int i = uPtr(filename)->Length() - 1; i >= 0; i--)

        switch (uPtr(filename)->Item(i))
        {
            case '\\':
            case '/':
            {
                if ((i == 0) || ((i == 2) && (uPtr(filename)->Item(1) == ':')))
                    return NULL;

                return ::g::Uno::String::Substring1(uPtr(filename), 0, i);
            }
        }

    return ::STRINGS[7/*""*/];
}

// public static string GetFullPath(string filename) [static] :2789
uString* Path::GetFullPath(uString* filename)
{
    uStackFrame __("Uno.IO.Path", "GetFullPath(string)");

    if (Path::IsPathRooted(filename))
        return filename;

    return Path::Combine(::g::Uno::IO::Directory::GetCurrentDirectory(), filename);
}

// public static bool IsPathRooted(string filename) [static] :2828
bool Path::IsPathRooted(uString* filename)
{
    uStackFrame __("Uno.IO.Path", "IsPathRooted(string)");
    return ((uPtr(filename)->Length() > 0) && ((uPtr(filename)->Item(0) == '\\') || (uPtr(filename)->Item(0) == '/'))) || ((uPtr(filename)->Length() > 1) && (uPtr(filename)->Item(1) == ':'));
}

// public static char get_DirectorySeparatorChar() [static] :2628
uChar Path::DirectorySeparatorChar()
{
    return '/';
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// public enum SeekOrigin :2848
uEnumType* SeekOrigin_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.IO.SeekOrigin", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Begin", 0LL,
        "Current", 1LL,
        "End", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// public abstract class Stream :2865
// {
static void Stream_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Stream_type, interface0));
    type->Reflection.SetFunctions(19,
        new uFunction("get_CanRead", NULL, NULL, offsetof(Stream_type, fp_get_CanRead), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanSeek", NULL, NULL, offsetof(Stream_type, fp_get_CanSeek), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanTimeout", NULL, NULL, offsetof(Stream_type, fp_get_CanTimeout), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanWrite", NULL, NULL, offsetof(Stream_type, fp_get_CanWrite), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Close", NULL, NULL, offsetof(Stream_type, fp_Close), false, uVoid_typeof(), 0),
        new uFunction("Dispose", NULL, (void*)Stream__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Dispose", NULL, NULL, offsetof(Stream_type, fp_Dispose1), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Flush", NULL, NULL, offsetof(Stream_type, fp_Flush), false, uVoid_typeof(), 0),
        new uFunction("get_Length", NULL, NULL, offsetof(Stream_type, fp_get_Length), false, ::g::Uno::Long_typeof(), 0),
        new uFunction("get_Position", NULL, NULL, offsetof(Stream_type, fp_get_Position), false, ::g::Uno::Long_typeof(), 0),
        new uFunction("set_Position", NULL, NULL, offsetof(Stream_type, fp_set_Position), false, uVoid_typeof(), 1, ::g::Uno::Long_typeof()),
        new uFunction("Read", NULL, NULL, offsetof(Stream_type, fp_Read), false, ::g::Uno::Int_typeof(), 3, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("get_ReadTimeout", NULL, NULL, offsetof(Stream_type, fp_get_ReadTimeout), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_ReadTimeout", NULL, NULL, offsetof(Stream_type, fp_set_ReadTimeout), false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Seek", NULL, NULL, offsetof(Stream_type, fp_Seek), false, ::g::Uno::Long_typeof(), 2, ::g::Uno::Long_typeof(), ::g::Uno::IO::SeekOrigin_typeof()),
        new uFunction("SetLength", NULL, NULL, offsetof(Stream_type, fp_SetLength), false, uVoid_typeof(), 1, ::g::Uno::Long_typeof()),
        new uFunction("Write", NULL, NULL, offsetof(Stream_type, fp_Write), false, uVoid_typeof(), 3, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("get_WriteTimeout", NULL, NULL, offsetof(Stream_type, fp_get_WriteTimeout), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_WriteTimeout", NULL, NULL, offsetof(Stream_type, fp_set_WriteTimeout), false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()));
}

Stream_type* Stream_typeof()
{
    static uSStrong<Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Stream);
    options.TypeSize = sizeof(Stream_type);
    type = (Stream_type*)uClassType::New("Uno.IO.Stream", options);
    type->fp_build_ = Stream_build;
    type->fp_get_CanTimeout = Stream__get_CanTimeout_fn;
    type->fp_Close = Stream__Close_fn;
    type->fp_Dispose1 = Stream__Dispose1_fn;
    type->fp_get_ReadTimeout = Stream__get_ReadTimeout_fn;
    type->fp_set_ReadTimeout = Stream__set_ReadTimeout_fn;
    type->fp_get_WriteTimeout = Stream__get_WriteTimeout_fn;
    type->fp_set_WriteTimeout = Stream__set_WriteTimeout_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Stream__Dispose_fn;
    return type;
}

// protected generated Stream() :2865
void Stream__ctor__fn(Stream* __this)
{
    __this->ctor_();
}

// public virtual bool get_CanTimeout() :2884
void Stream__get_CanTimeout_fn(Stream* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public virtual void Close() :2921
void Stream__Close_fn(Stream* __this)
{
    uStackFrame __("Uno.IO.Stream", "Close()");
    __this->Dispose1(true);
    ::g::Uno::GC::SuppressFinalize(__this);
}

// public void Dispose() :2927
void Stream__Dispose_fn(Stream* __this)
{
    __this->Dispose();
}

// public virtual void Dispose(bool disposing) :2917
void Stream__Dispose1_fn(Stream* __this, bool* disposing)
{
}

// public virtual int get_ReadTimeout() :2889
void Stream__get_ReadTimeout_fn(Stream* __this, int* __retval)
{
    uStackFrame __("Uno.IO.Stream", "get_ReadTimeout()");
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// public virtual void set_ReadTimeout(int value) :2890
void Stream__set_ReadTimeout_fn(Stream* __this, int* value)
{
    uStackFrame __("Uno.IO.Stream", "set_ReadTimeout(int)");
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// public virtual int get_WriteTimeout() :2895
void Stream__get_WriteTimeout_fn(Stream* __this, int* __retval)
{
    uStackFrame __("Uno.IO.Stream", "get_WriteTimeout()");
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// public virtual void set_WriteTimeout(int value) :2896
void Stream__set_WriteTimeout_fn(Stream* __this, int* value)
{
    uStackFrame __("Uno.IO.Stream", "set_WriteTimeout(int)");
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// protected generated Stream() [instance] :2865
void Stream::ctor_()
{
}

// public void Dispose() [instance] :2927
void Stream::Dispose()
{
    uStackFrame __("Uno.IO.Stream", "Dispose()");
    Close();
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// public sealed class StreamReader :2943
// {
static void StreamReader_build(uType* type)
{
    ::STRINGS[8] = uString::Const("StreamReader");
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Char_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::TextReader_type, interface0));
    type->SetFields(0,
        ::TYPES[0/*byte[]*/], offsetof(::g::Uno::IO::StreamReader, _byteBuffer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::StreamReader, _byteLen), 0,
        ::TYPES[5/*char[]*/], offsetof(::g::Uno::IO::StreamReader, _charBuffer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::StreamReader, _charLen), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::StreamReader, _charPos), 0,
        ::g::Uno::Text::Decoder_typeof(), offsetof(::g::Uno::IO::StreamReader, _decoder), 0,
        ::g::Uno::IO::Stream_typeof(), offsetof(::g::Uno::IO::StreamReader, _stream), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)StreamReader__New1_fn, 0, true, type, 1, ::g::Uno::IO::Stream_typeof()),
        new uFunction("ReadToEnd", NULL, (void*)StreamReader__ReadToEnd_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

::g::Uno::IO::TextReader_type* StreamReader_typeof()
{
    static uSStrong< ::g::Uno::IO::TextReader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::TextReader_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StreamReader);
    options.TypeSize = sizeof(::g::Uno::IO::TextReader_type);
    type = (::g::Uno::IO::TextReader_type*)uClassType::New("Uno.IO.StreamReader", options);
    type->fp_build_ = StreamReader_build;
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::TextReader*, bool*))StreamReader__Dispose1_fn;
    type->fp_Peek = (void(*)(::g::Uno::IO::TextReader*, int*))StreamReader__Peek_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::TextReader*, int*))StreamReader__Read_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::TextReader__Dispose_fn;
    return type;
}

// public StreamReader(Uno.IO.Stream stream) :2977
void StreamReader__ctor_1_fn(StreamReader* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_1(stream);
}

// protected override sealed void Dispose(bool disposing) :2995
void StreamReader__Dispose1_fn(StreamReader* __this, bool* disposing)
{
    uStackFrame __("Uno.IO.StreamReader", "Dispose(bool)");
    bool disposing_ = *disposing;

    if (disposing_ && (__this->_stream != NULL))
    {
        uPtr(__this->_stream)->Close();
        __this->_stream = NULL;
    }

    ::g::Uno::IO::TextReader__Dispose1_fn(__this, uCRef(disposing_));
}

// public StreamReader New(Uno.IO.Stream stream) :2977
void StreamReader__New1_fn(::g::Uno::IO::Stream* stream, StreamReader** __retval)
{
    *__retval = StreamReader::New1(stream);
}

// public override sealed int Peek() :3005
void StreamReader__Peek_fn(StreamReader* __this, int* __retval)
{
    uStackFrame __("Uno.IO.StreamReader", "Peek()");

    if (__this->_stream == NULL)
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[8/*"StreamReader"*/]));

    if (__this->_charPos == __this->_charLen)
    {
        __this->ReadBuffer();

        if (__this->_charLen == 0)
            return *__retval = -1, void();
    }

    return *__retval = (int)uPtr(__this->_charBuffer)->Item<uChar>(__this->_charPos), void();
}

// public override sealed int Read() :3018
void StreamReader__Read_fn(StreamReader* __this, int* __retval)
{
    uStackFrame __("Uno.IO.StreamReader", "Read()");

    if (__this->_stream == NULL)
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[8/*"StreamReader"*/]));

    if (__this->_charPos == __this->_charLen)
    {
        __this->ReadBuffer();

        if (__this->_charLen == 0)
            return *__retval = -1, void();
    }

    return *__retval = (int)uPtr(__this->_charBuffer)->Item<uChar>(__this->_charPos++), void();
}

// private void ReadBuffer() :3080
void StreamReader__ReadBuffer_fn(StreamReader* __this)
{
    __this->ReadBuffer();
}

// public string ReadToEnd() :3063
void StreamReader__ReadToEnd_fn(StreamReader* __this, uString** __retval)
{
    *__retval = __this->ReadToEnd();
}

// public StreamReader(Uno.IO.Stream stream) [instance] :2977
void StreamReader::ctor_1(::g::Uno::IO::Stream* stream)
{
    uStackFrame __("Uno.IO.StreamReader", ".ctor(Uno.IO.Stream)");
    ctor_();
    _stream = stream;
    _decoder = uPtr(::g::Uno::Text::Encoding::UTF8())->GetDecoder();
    _byteBuffer = uArray::New(::TYPES[0/*byte[]*/], 256);
    _byteLen = 0;
    _charBuffer = uArray::New(::TYPES[5/*char[]*/], 256);
    _charPos = 0;
    _charLen = 0;
}

// private void ReadBuffer() [instance] :3080
void StreamReader::ReadBuffer()
{
    uStackFrame __("Uno.IO.StreamReader", "ReadBuffer()");
    _charPos = 0;
    _charLen = 0;

    do
    {
        _byteLen = uPtr(_stream)->Read(_byteBuffer, 0, uPtr(_byteBuffer)->Length());

        if (_byteLen == 0)
            return;

        _charLen = (_charLen + uPtr(_decoder)->GetChars(_byteBuffer, 0, _byteLen, _charBuffer, _charLen));
    }
    while (_charLen == 0);
}

// public string ReadToEnd() [instance] :3063
uString* StreamReader::ReadToEnd()
{
    uStackFrame __("Uno.IO.StreamReader", "ReadToEnd()");
    ::g::Uno::Text::StringBuilder* stringBuilder = ::g::Uno::Text::StringBuilder::New1();

    if (_charLen == 0)
        ReadBuffer();

    while (_charLen != 0)
    {
        int count = _charLen - _charPos;
        uArray* array = uArray::New(::TYPES[5/*char[]*/], count);

        for (int i = 0; i < count; i++)
            uPtr(array)->Item<uChar>(i) = uPtr(_charBuffer)->Item<uChar>(_charPos + i);

        uPtr(stringBuilder)->Append1(array);
        ReadBuffer();
    }

    return stringBuilder->ToString();
}

// public StreamReader New(Uno.IO.Stream stream) [static] :2977
StreamReader* StreamReader::New1(::g::Uno::IO::Stream* stream)
{
    StreamReader* obj1 = (StreamReader*)uNew(StreamReader_typeof());
    obj1->ctor_1(stream);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// public sealed class StreamWriter :3106
// {
static void StreamWriter_build(uType* type)
{
    ::STRINGS[9] = uString::Const("buffer");
    ::STRINGS[10] = uString::Const("index");
    ::STRINGS[11] = uString::Const("count");
    ::STRINGS[12] = uString::Const("range");
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Char_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::TextWriter_type, interface0));
    type->SetFields(0,
        ::TYPES[0/*byte[]*/], offsetof(::g::Uno::IO::StreamWriter, _buffer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::StreamWriter, _index), 0,
        ::g::Uno::IO::Stream_typeof(), offsetof(::g::Uno::IO::StreamWriter, _stream), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)StreamWriter__New1_fn, 0, true, type, 1, ::g::Uno::IO::Stream_typeof()));
}

::g::Uno::IO::TextWriter_type* StreamWriter_typeof()
{
    static uSStrong< ::g::Uno::IO::TextWriter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::TextWriter_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StreamWriter);
    options.TypeSize = sizeof(::g::Uno::IO::TextWriter_type);
    type = (::g::Uno::IO::TextWriter_type*)uClassType::New("Uno.IO.StreamWriter", options);
    type->fp_build_ = StreamWriter_build;
    type->fp_Close = (void(*)(::g::Uno::IO::TextWriter*))StreamWriter__Close_fn;
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::TextWriter*, bool*))StreamWriter__Dispose1_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::TextWriter*))StreamWriter__Flush_fn;
    type->fp_Write1 = (void(*)(::g::Uno::IO::TextWriter*, uChar*))StreamWriter__Write1_fn;
    type->fp_Write3 = (void(*)(::g::Uno::IO::TextWriter*, uArray*, int*, int*))StreamWriter__Write3_fn;
    type->fp_Write9 = (void(*)(::g::Uno::IO::TextWriter*, uString*))StreamWriter__Write9_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::TextWriter__Dispose_fn;
    return type;
}

// public StreamWriter(Uno.IO.Stream stream) :3122
void StreamWriter__ctor_1_fn(StreamWriter* __this, ::g::Uno::IO::Stream* stream)
{
    __this->ctor_1(stream);
}

// public override sealed void Close() :3140
void StreamWriter__Close_fn(StreamWriter* __this)
{
    uStackFrame __("Uno.IO.StreamWriter", "Close()");
    __this->Dispose1(true);
}

// protected override sealed void Dispose(bool disposing) :3130
void StreamWriter__Dispose1_fn(StreamWriter* __this, bool* disposing)
{
    uStackFrame __("Uno.IO.StreamWriter", "Dispose(bool)");
    bool disposing_ = *disposing;
    __this->Flush();

    if (disposing_ && (__this->_stream != NULL))
        uPtr(__this->_stream)->Close();

    ::g::Uno::IO::TextWriter__Dispose1_fn(__this, uCRef(disposing_));
}

// public override sealed void Flush() :3196
void StreamWriter__Flush_fn(StreamWriter* __this)
{
    uStackFrame __("Uno.IO.StreamWriter", "Flush()");

    if (__this->_index != 0)
    {
        uPtr(__this->_stream)->Write(__this->_buffer, 0, __this->_index);
        __this->_index = 0;
    }

    uPtr(__this->_stream)->Flush();
}

// public StreamWriter New(Uno.IO.Stream stream) :3122
void StreamWriter__New1_fn(::g::Uno::IO::Stream* stream, StreamWriter** __retval)
{
    *__retval = StreamWriter::New1(stream);
}

// private void Write(byte[] array, int index, int count) :3178
void StreamWriter__Write13_fn(StreamWriter* __this, uArray* array, int* index, int* count)
{
    __this->Write13(array, *index, *count);
}

// public override sealed void Write(char value) :3145
void StreamWriter__Write1_fn(StreamWriter* __this, uChar* value)
{
    uStackFrame __("Uno.IO.StreamWriter", "Write(char)");
    uChar value_ = *value;
    __this->Write13(::g::Uno::Runtime::Implementation::TextEncodingImpl::EncodeUtf8(::g::Uno::Char::ToString(value_, ::TYPES[2/*char*/])), 0, 1);
}

// public override sealed void Write(char[] buffer, int index, int count) :3150
void StreamWriter__Write3_fn(StreamWriter* __this, uArray* buffer, int* index, int* count)
{
    uStackFrame __("Uno.IO.StreamWriter", "Write(char[],int,int)");
    int index_ = *index;
    int count_ = *count;

    if (buffer == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[9/*"buffer"*/]));

    if (index_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[10/*"index"*/]));

    if (count_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[11/*"count"*/]));

    if ((index_ + count_) > uPtr(buffer)->Length())
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[12/*"range"*/]));

    uArray* array = ::g::Uno::Runtime::Implementation::TextEncodingImpl::EncodeUtf8(uString::CharArray(buffer));
    __this->Write13(array, index_, count_);
}

// public override sealed void Write(string value) :3172
void StreamWriter__Write9_fn(StreamWriter* __this, uString* value)
{
    uStackFrame __("Uno.IO.StreamWriter", "Write(string)");
    uArray* array = ::g::Uno::Runtime::Implementation::TextEncodingImpl::EncodeUtf8(value);
    __this->Write13(array, 0, uPtr(array)->Length());
}

// public StreamWriter(Uno.IO.Stream stream) [instance] :3122
void StreamWriter::ctor_1(::g::Uno::IO::Stream* stream)
{
    ctor_();
    _stream = stream;
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 256);
    _index = 0;
}

// private void Write(byte[] array, int index, int count) [instance] :3178
void StreamWriter::Write13(uArray* array, int index, int count)
{
    uStackFrame __("Uno.IO.StreamWriter", "Write(byte[],int,int)");

    if ((_index + count) >= 256)
    {
        uPtr(_stream)->Write(_buffer, 0, _index);
        _index = 0;
    }

    if (count >= 256)
    {
        uPtr(_stream)->Write(array, index, count);
        return;
    }

    for (int i = 0; i < count; i++)
        uPtr(_buffer)->Item<uint8_t>(_index++) = uPtr(array)->Item<uint8_t>(index + i);
}

// public StreamWriter New(Uno.IO.Stream stream) [static] :3122
StreamWriter* StreamWriter::New1(::g::Uno::IO::Stream* stream)
{
    StreamWriter* obj1 = (StreamWriter*)uNew(StreamWriter_typeof());
    obj1->ctor_1(stream);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// public sealed class StringReader :3216
// {
static void StringReader_build(uType* type)
{
    ::STRINGS[13] = uString::Const("StringReader");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::TextReader_type, interface0));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::StringReader, _index), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::StringReader, _length), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::IO::StringReader, _string), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)StringReader__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::IO::TextReader_type* StringReader_typeof()
{
    static uSStrong< ::g::Uno::IO::TextReader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::TextReader_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StringReader);
    options.TypeSize = sizeof(::g::Uno::IO::TextReader_type);
    type = (::g::Uno::IO::TextReader_type*)uClassType::New("Uno.IO.StringReader", options);
    type->fp_build_ = StringReader_build;
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::TextReader*, bool*))StringReader__Dispose1_fn;
    type->fp_Peek = (void(*)(::g::Uno::IO::TextReader*, int*))StringReader__Peek_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::TextReader*, int*))StringReader__Read_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::TextReader__Dispose_fn;
    return type;
}

// public StringReader(string text) :3222
void StringReader__ctor_1_fn(StringReader* __this, uString* text)
{
    __this->ctor_1(text);
}

// protected override sealed void Dispose(bool disposing) :3234
void StringReader__Dispose1_fn(StringReader* __this, bool* disposing)
{
}

// public StringReader New(string text) :3222
void StringReader__New1_fn(uString* text, StringReader** __retval)
{
    *__retval = StringReader::New1(text);
}

// public override sealed int Peek() :3238
void StringReader__Peek_fn(StringReader* __this, int* __retval)
{
    uStackFrame __("Uno.IO.StringReader", "Peek()");

    if (::g::Uno::String::op_Equality(__this->_string, NULL))
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[13/*"StringReader"*/]));

    if (__this->_index == __this->_length)
        return *__retval = -1, void();

    return *__retval = (int)uPtr(__this->_string)->Item(__this->_index), void();
}

// public override sealed int Read() :3249
void StringReader__Read_fn(StringReader* __this, int* __retval)
{
    uStackFrame __("Uno.IO.StringReader", "Read()");

    if (::g::Uno::String::op_Equality(__this->_string, NULL))
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[13/*"StringReader"*/]));

    if (__this->_index == __this->_length)
        return *__retval = -1, void();

    return *__retval = (int)uPtr(__this->_string)->Item(__this->_index++), void();
}

// public StringReader(string text) [instance] :3222
void StringReader::ctor_1(uString* text)
{
    uStackFrame __("Uno.IO.StringReader", ".ctor(string)");
    ctor_();
    _string = text;
    _index = 0;
    _length = (::g::Uno::String::op_Equality(text, NULL) ? 0 : uPtr(text)->Length());
}

// public StringReader New(string text) [static] :3222
StringReader* StringReader::New1(uString* text)
{
    StringReader* obj1 = (StringReader*)uNew(StringReader_typeof());
    obj1->ctor_1(text);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// public sealed class StringWriter :3319
// {
static void StringWriter_build(uType* type)
{
    ::STRINGS[14] = uString::Const("StringWriter");
    ::STRINGS[9] = uString::Const("buffer");
    ::STRINGS[10] = uString::Const("index");
    ::STRINGS[11] = uString::Const("count");
    ::STRINGS[12] = uString::Const("range");
    ::TYPES[5] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[9] = ::g::Uno::Array_typeof()->MakeMethod(0/*Copy<char>*/, ::g::Uno::Char_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::TextWriter_type, interface0));
    type->SetFields(0,
        ::TYPES[5/*char[]*/], offsetof(::g::Uno::IO::StringWriter, _buffer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::IO::StringWriter, _index), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::IO::StringWriter, _open), 0,
        ::g::Uno::Text::StringBuilder_typeof(), offsetof(::g::Uno::IO::StringWriter, _stringBuilder), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)StringWriter__New1_fn, 0, true, type, 0));
}

::g::Uno::IO::TextWriter_type* StringWriter_typeof()
{
    static uSStrong< ::g::Uno::IO::TextWriter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::TextWriter_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StringWriter);
    options.TypeSize = sizeof(::g::Uno::IO::TextWriter_type);
    type = (::g::Uno::IO::TextWriter_type*)uClassType::New("Uno.IO.StringWriter", options);
    type->fp_build_ = StringWriter_build;
    type->fp_ctor_ = (void*)StringWriter__New1_fn;
    type->fp_Close = (void(*)(::g::Uno::IO::TextWriter*))StringWriter__Close_fn;
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::TextWriter*, bool*))StringWriter__Dispose1_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))StringWriter__ToString_fn;
    type->fp_Write1 = (void(*)(::g::Uno::IO::TextWriter*, uChar*))StringWriter__Write1_fn;
    type->fp_Write3 = (void(*)(::g::Uno::IO::TextWriter*, uArray*, int*, int*))StringWriter__Write3_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::TextWriter__Dispose_fn;
    return type;
}

// public StringWriter() :3329
void StringWriter__ctor_1_fn(StringWriter* __this)
{
    __this->ctor_1();
}

// public override sealed void Close() :3351
void StringWriter__Close_fn(StringWriter* __this)
{
    uStackFrame __("Uno.IO.StringWriter", "Close()");
    __this->Dispose1(true);
    __this->_open = false;
}

// protected override sealed void Dispose(bool disposing) :3343
void StringWriter__Dispose1_fn(StringWriter* __this, bool* disposing)
{
    uStackFrame __("Uno.IO.StringWriter", "Dispose(bool)");
    bool disposing_ = *disposing;
    __this->_open = false;

    if (__this->_index != 0)
        __this->WriteBuffer();

    ::g::Uno::IO::TextWriter__Dispose1_fn(__this, uCRef(disposing_));
}

// public StringWriter New() :3329
void StringWriter__New1_fn(StringWriter** __retval)
{
    *__retval = StringWriter::New1();
}

// public override sealed string ToString() :3417
void StringWriter__ToString_fn(StringWriter* __this, uString** __retval)
{
    uStackFrame __("Uno.IO.StringWriter", "ToString()");

    if (__this->_index != 0)
        __this->WriteBuffer();

    return *__retval = uPtr(__this->_stringBuilder)->ToString(), void();
}

// public override sealed void Write(char value) :3357
void StringWriter__Write1_fn(StringWriter* __this, uChar* value)
{
    uStackFrame __("Uno.IO.StringWriter", "Write(char)");
    uChar value_ = *value;

    if (!__this->_open)
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[14/*"StringWriter"*/]));

    uPtr(__this->_buffer)->Item<uChar>(__this->_index++) = value_;

    if (__this->_index == 256)
        __this->WriteBuffer();
}

// public override sealed void Write(char[] buffer, int index, int count) :3370
void StringWriter__Write3_fn(StringWriter* __this, uArray* buffer, int* index, int* count)
{
    uStackFrame __("Uno.IO.StringWriter", "Write(char[],int,int)");
    int index_ = *index;
    int count_ = *count;

    if (buffer == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[9/*"buffer"*/]));

    if (index_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[10/*"index"*/]));

    if (count_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[11/*"count"*/]));

    if ((index_ + count_) > uPtr(buffer)->Length())
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[12/*"range"*/]));

    if (!__this->_open)
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[14/*"StringWriter"*/]));

    if ((__this->_index + count_) >= 256)
        __this->WriteBuffer();

    if (count_ >= 256)
    {
        uArray* array = uArray::New(::TYPES[5/*char[]*/], count_);
        ::g::Uno::Array::Copy(::TYPES[9/*Uno.Array.Copy<char>*/], buffer, index_, array, 0, count_);
        uPtr(__this->_stringBuilder)->Append1(array);
    }
    else
    {
        ::g::Uno::Array::Copy(::TYPES[9/*Uno.Array.Copy<char>*/], buffer, index_, __this->_buffer, __this->_index, count_);
        __this->_index = (__this->_index + count_);
    }
}

// private void WriteBuffer() :3409
void StringWriter__WriteBuffer_fn(StringWriter* __this)
{
    __this->WriteBuffer();
}

// public StringWriter() [instance] :3329
void StringWriter::ctor_1()
{
    ctor_();
    _stringBuilder = ::g::Uno::Text::StringBuilder::New1();
    _open = true;
    _buffer = uArray::New(::TYPES[5/*char[]*/], 256);
    _index = 0;
}

// private void WriteBuffer() [instance] :3409
void StringWriter::WriteBuffer()
{
    uStackFrame __("Uno.IO.StringWriter", "WriteBuffer()");
    uArray* array = uArray::New(::TYPES[5/*char[]*/], _index);
    ::g::Uno::Array::Copy(::TYPES[9/*Uno.Array.Copy<char>*/], _buffer, 0, array, 0, _index);
    uPtr(_stringBuilder)->Append1(array);
    _index = 0;
}

// public StringWriter New() [static] :3329
StringWriter* StringWriter::New1()
{
    StringWriter* obj1 = (StringWriter*)uNew(StringWriter_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// public abstract class TextReader :3439
// {
static void TextReader_build(uType* type)
{
    ::TYPES[10] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Char_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TextReader_type, interface0));
    type->Reflection.SetFunctions(4,
        new uFunction("Dispose", NULL, (void*)TextReader__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Peek", NULL, NULL, offsetof(TextReader_type, fp_Peek), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("Read", NULL, NULL, offsetof(TextReader_type, fp_Read), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("ReadLine", NULL, (void*)TextReader__ReadLine_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

TextReader_type* TextReader_typeof()
{
    static uSStrong<TextReader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextReader);
    options.TypeSize = sizeof(TextReader_type);
    type = (TextReader_type*)uClassType::New("Uno.IO.TextReader", options);
    type->fp_build_ = TextReader_build;
    type->fp_Dispose1 = TextReader__Dispose1_fn;
    type->fp_Peek = TextReader__Peek_fn;
    type->fp_Read = TextReader__Read_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TextReader__Dispose_fn;
    return type;
}

// protected generated TextReader() :3439
void TextReader__ctor__fn(TextReader* __this)
{
    __this->ctor_();
}

// public void Dispose() :3443
void TextReader__Dispose_fn(TextReader* __this)
{
    __this->Dispose();
}

// protected virtual void Dispose(bool disposing) :3449
void TextReader__Dispose1_fn(TextReader* __this, bool* disposing)
{
}

// public virtual int Peek() :3459
void TextReader__Peek_fn(TextReader* __this, int* __retval)
{
    return *__retval = -1, void();
}

// public virtual int Read() :3464
void TextReader__Read_fn(TextReader* __this, int* __retval)
{
    return *__retval = -1, void();
}

// public string ReadLine() :3526
void TextReader__ReadLine_fn(TextReader* __this, uString** __retval)
{
    *__retval = __this->ReadLine();
}

// protected generated TextReader() [instance] :3439
void TextReader::ctor_()
{
}

// public void Dispose() [instance] :3443
void TextReader::Dispose()
{
    uStackFrame __("Uno.IO.TextReader", "Dispose()");
    Dispose1(true);
    ::g::Uno::GC::SuppressFinalize(this);
}

// public string ReadLine() [instance] :3526
uString* TextReader::ReadLine()
{
    uStackFrame __("Uno.IO.TextReader", "ReadLine()");
    ::g::Uno::Collections::List* buffer = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[10/*Uno.Collections.List<char>*/], 16);
    int symbol = 0;

    while (true)
    {
        symbol = Read();

        if (((symbol == -1) || (symbol == 13)) || (symbol == 10))
            break;

        ::g::Uno::Collections::List__Add_fn(uPtr(buffer), uCRef<uChar>((uChar)symbol));
    }

    if ((symbol == 13) && (Peek() == 10))
        Read();

    if ((buffer->Count() == 0) && (symbol == -1))
        return NULL;

    return uString::CharArray((uArray*)buffer->ToArray());
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// public abstract class TextWriter :3561
// {
static void TextWriter_build(uType* type)
{
    ::STRINGS[15] = uString::Const("\r\n"
        "");
    ::TYPES[11] = ::g::Uno::Bool_typeof();
    ::TYPES[12] = ::g::Uno::Double_typeof();
    ::TYPES[13] = ::g::Uno::Float_typeof();
    ::TYPES[14] = ::g::Uno::Int_typeof();
    ::TYPES[15] = ::g::Uno::Long_typeof();
    ::TYPES[16] = ::g::Uno::UInt_typeof();
    ::TYPES[17] = ::g::Uno::ULong_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TextWriter_type, interface0));
    type->Reflection.SetFunctions(30,
        new uFunction("Close", NULL, NULL, offsetof(TextWriter_type, fp_Close), false, uVoid_typeof(), 0),
        new uFunction("Dispose", NULL, (void*)TextWriter__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Flush", NULL, NULL, offsetof(TextWriter_type, fp_Flush), false, uVoid_typeof(), 0),
        new uFunction("Write", NULL, (void*)TextWriter__Write_fn, 0, false, uVoid_typeof(), 1, ::TYPES[11/*bool*/]),
        new uFunction("Write", NULL, NULL, offsetof(TextWriter_type, fp_Write1), false, uVoid_typeof(), 1, ::g::Uno::Char_typeof()),
        new uFunction("Write", NULL, (void*)TextWriter__Write2_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Char_typeof()->Array()),
        new uFunction("Write", NULL, NULL, offsetof(TextWriter_type, fp_Write3), false, uVoid_typeof(), 3, ::g::Uno::Char_typeof()->Array(), ::TYPES[14/*int*/], ::TYPES[14/*int*/]),
        new uFunction("Write", NULL, (void*)TextWriter__Write4_fn, 0, false, uVoid_typeof(), 1, ::TYPES[12/*double*/]),
        new uFunction("Write", NULL, (void*)TextWriter__Write5_fn, 0, false, uVoid_typeof(), 1, ::TYPES[13/*float*/]),
        new uFunction("Write", NULL, (void*)TextWriter__Write6_fn, 0, false, uVoid_typeof(), 1, ::TYPES[14/*int*/]),
        new uFunction("Write", NULL, (void*)TextWriter__Write7_fn, 0, false, uVoid_typeof(), 1, ::TYPES[15/*long*/]),
        new uFunction("Write", NULL, (void*)TextWriter__Write8_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("Write", NULL, NULL, offsetof(TextWriter_type, fp_Write9), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Write", NULL, (void*)TextWriter__Write10_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()->Array()),
        new uFunction("Write", NULL, (void*)TextWriter__Write11_fn, 0, false, uVoid_typeof(), 1, ::TYPES[16/*uint*/]),
        new uFunction("Write", NULL, (void*)TextWriter__Write12_fn, 0, false, uVoid_typeof(), 1, ::TYPES[17/*ulong*/]),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine1_fn, 0, false, uVoid_typeof(), 1, ::TYPES[11/*bool*/]),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine2_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Char_typeof()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine3_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Char_typeof()->Array()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine4_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Char_typeof()->Array(), ::TYPES[14/*int*/], ::TYPES[14/*int*/]),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine5_fn, 0, false, uVoid_typeof(), 1, ::TYPES[12/*double*/]),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine6_fn, 0, false, uVoid_typeof(), 1, ::TYPES[13/*float*/]),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine7_fn, 0, false, uVoid_typeof(), 1, ::TYPES[14/*int*/]),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine8_fn, 0, false, uVoid_typeof(), 1, ::TYPES[15/*long*/]),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine9_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine10_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine11_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()->Array()),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine12_fn, 0, false, uVoid_typeof(), 1, ::TYPES[16/*uint*/]),
        new uFunction("WriteLine", NULL, (void*)TextWriter__WriteLine13_fn, 0, false, uVoid_typeof(), 1, ::TYPES[17/*ulong*/]));
}

TextWriter_type* TextWriter_typeof()
{
    static uSStrong<TextWriter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextWriter);
    options.TypeSize = sizeof(TextWriter_type);
    type = (TextWriter_type*)uClassType::New("Uno.IO.TextWriter", options);
    type->fp_build_ = TextWriter_build;
    type->fp_Close = TextWriter__Close_fn;
    type->fp_Dispose1 = TextWriter__Dispose1_fn;
    type->fp_Flush = TextWriter__Flush_fn;
    type->fp_Write1 = TextWriter__Write1_fn;
    type->fp_Write3 = TextWriter__Write3_fn;
    type->fp_Write9 = TextWriter__Write9_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TextWriter__Dispose_fn;
    return type;
}

// protected generated TextWriter() :3561
void TextWriter__ctor__fn(TextWriter* __this)
{
    __this->ctor_();
}

// public virtual void Close() :3575
void TextWriter__Close_fn(TextWriter* __this)
{
    uStackFrame __("Uno.IO.TextWriter", "Close()");
    __this->Dispose1(true);
    ::g::Uno::GC::SuppressFinalize(__this);
}

// public void Dispose() :3565
void TextWriter__Dispose_fn(TextWriter* __this)
{
    __this->Dispose();
}

// protected virtual void Dispose(bool disposing) :3571
void TextWriter__Dispose1_fn(TextWriter* __this, bool* disposing)
{
}

// public virtual void Flush() :3581
void TextWriter__Flush_fn(TextWriter* __this)
{
}

// public void Write(bool value) :3601
void TextWriter__Write_fn(TextWriter* __this, bool* value)
{
    __this->Write(*value);
}

// public virtual void Write(char value) :3585
void TextWriter__Write1_fn(TextWriter* __this, uChar* value)
{
}

// public void Write(char[] buffer) :3593
void TextWriter__Write2_fn(TextWriter* __this, uArray* buffer)
{
    __this->Write2(buffer);
}

// public virtual void Write(char[] buffer, int index, int count) :3589
void TextWriter__Write3_fn(TextWriter* __this, uArray* buffer, int* index, int* count)
{
}

// public void Write(double value) :3631
void TextWriter__Write4_fn(TextWriter* __this, double* value)
{
    __this->Write4(*value);
}

// public void Write(float value) :3626
void TextWriter__Write5_fn(TextWriter* __this, float* value)
{
    __this->Write5(*value);
}

// public void Write(int value) :3606
void TextWriter__Write6_fn(TextWriter* __this, int* value)
{
    __this->Write6(*value);
}

// public void Write(long value) :3616
void TextWriter__Write7_fn(TextWriter* __this, int64_t* value)
{
    __this->Write7(*value);
}

// public void Write(object value) :3644
void TextWriter__Write8_fn(TextWriter* __this, uObject* value)
{
    __this->Write8(value);
}

// public virtual void Write(string value) :3636
void TextWriter__Write9_fn(TextWriter* __this, uString* value)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(string)");

    if (::g::Uno::String::op_Inequality(value, NULL))
        __this->Write2(::g::Uno::String::ToCharArray(uPtr(value)));
}

// public void Write(string format, object[] args) :3652
void TextWriter__Write10_fn(TextWriter* __this, uString* format, uArray* args)
{
    __this->Write10(format, args);
}

// public void Write(uint value) :3611
void TextWriter__Write11_fn(TextWriter* __this, uint32_t* value)
{
    __this->Write11(*value);
}

// public void Write(ulong value) :3621
void TextWriter__Write12_fn(TextWriter* __this, uint64_t* value)
{
    __this->Write12(*value);
}

// public void WriteLine() :3657
void TextWriter__WriteLine_fn(TextWriter* __this)
{
    __this->WriteLine();
}

// public void WriteLine(bool value) :3680
void TextWriter__WriteLine1_fn(TextWriter* __this, bool* value)
{
    __this->WriteLine1(*value);
}

// public void WriteLine(char value) :3662
void TextWriter__WriteLine2_fn(TextWriter* __this, uChar* value)
{
    __this->WriteLine2(*value);
}

// public void WriteLine(char[] buffer) :3668
void TextWriter__WriteLine3_fn(TextWriter* __this, uArray* buffer)
{
    __this->WriteLine3(buffer);
}

// public void WriteLine(char[] buffer, int index, int count) :3674
void TextWriter__WriteLine4_fn(TextWriter* __this, uArray* buffer, int* index, int* count)
{
    __this->WriteLine4(buffer, *index, *count);
}

// public void WriteLine(double value) :3716
void TextWriter__WriteLine5_fn(TextWriter* __this, double* value)
{
    __this->WriteLine5(*value);
}

// public void WriteLine(float value) :3710
void TextWriter__WriteLine6_fn(TextWriter* __this, float* value)
{
    __this->WriteLine6(*value);
}

// public void WriteLine(int value) :3686
void TextWriter__WriteLine7_fn(TextWriter* __this, int* value)
{
    __this->WriteLine7(*value);
}

// public void WriteLine(long value) :3698
void TextWriter__WriteLine8_fn(TextWriter* __this, int64_t* value)
{
    __this->WriteLine8(*value);
}

// public void WriteLine(object value) :3728
void TextWriter__WriteLine9_fn(TextWriter* __this, uObject* value)
{
    __this->WriteLine9(value);
}

// public void WriteLine(string value) :3722
void TextWriter__WriteLine10_fn(TextWriter* __this, uString* value)
{
    __this->WriteLine10(value);
}

// public void WriteLine(string format, object[] args) :3738
void TextWriter__WriteLine11_fn(TextWriter* __this, uString* format, uArray* args)
{
    __this->WriteLine11(format, args);
}

// public void WriteLine(uint value) :3692
void TextWriter__WriteLine12_fn(TextWriter* __this, uint32_t* value)
{
    __this->WriteLine12(*value);
}

// public void WriteLine(ulong value) :3704
void TextWriter__WriteLine13_fn(TextWriter* __this, uint64_t* value)
{
    __this->WriteLine13(*value);
}

// protected generated TextWriter() [instance] :3561
void TextWriter::ctor_()
{
}

// public void Dispose() [instance] :3565
void TextWriter::Dispose()
{
    uStackFrame __("Uno.IO.TextWriter", "Dispose()");
    Dispose1(true);
    ::g::Uno::GC::SuppressFinalize(this);
}

// public void Write(bool value) [instance] :3601
void TextWriter::Write(bool value)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(bool)");
    bool value_ = value;
    Write9(::g::Uno::Bool::ToString(value_, ::TYPES[11/*bool*/]));
}

// public void Write(char[] buffer) [instance] :3593
void TextWriter::Write2(uArray* buffer)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(char[])");

    if (buffer != NULL)
        Write3(buffer, 0, uPtr(buffer)->Length());
}

// public void Write(double value) [instance] :3631
void TextWriter::Write4(double value)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(double)");
    double value_ = value;
    Write9(::g::Uno::Double::ToString(value_, ::TYPES[12/*double*/]));
}

// public void Write(float value) [instance] :3626
void TextWriter::Write5(float value)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(float)");
    float value_ = value;
    Write9(::g::Uno::Float::ToString(value_, ::TYPES[13/*float*/]));
}

// public void Write(int value) [instance] :3606
void TextWriter::Write6(int value)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(int)");
    int value_ = value;
    Write9(::g::Uno::Int::ToString(value_, ::TYPES[14/*int*/]));
}

// public void Write(long value) [instance] :3616
void TextWriter::Write7(int64_t value)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(long)");
    int64_t value_ = value;
    Write9(::g::Uno::Long::ToString(value_, ::TYPES[15/*long*/]));
}

// public void Write(object value) [instance] :3644
void TextWriter::Write8(uObject* value)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(object)");

    if (value != NULL)
        Write9(::g::Uno::Object::ToString(uPtr(value)));
}

// public void Write(string format, object[] args) [instance] :3652
void TextWriter::Write10(uString* format, uArray* args)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(string,object[])");
    Write9(::g::Uno::String::Format(format, args));
}

// public void Write(uint value) [instance] :3611
void TextWriter::Write11(uint32_t value)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(uint)");
    uint32_t value_ = value;
    Write9(::g::Uno::UInt::ToString(value_, ::TYPES[16/*uint*/]));
}

// public void Write(ulong value) [instance] :3621
void TextWriter::Write12(uint64_t value)
{
    uStackFrame __("Uno.IO.TextWriter", "Write(ulong)");
    uint64_t value_ = value;
    Write9(::g::Uno::ULong::ToString(value_, ::TYPES[17/*ulong*/]));
}

// public void WriteLine() [instance] :3657
void TextWriter::WriteLine()
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine()");
    Write9(::STRINGS[15/*"\r\n"*/]);
}

// public void WriteLine(bool value) [instance] :3680
void TextWriter::WriteLine1(bool value)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(bool)");
    bool value_ = value;
    Write(value_);
    WriteLine();
}

// public void WriteLine(char value) [instance] :3662
void TextWriter::WriteLine2(uChar value)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(char)");
    uChar value_ = value;
    Write1(value_);
    WriteLine();
}

// public void WriteLine(char[] buffer) [instance] :3668
void TextWriter::WriteLine3(uArray* buffer)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(char[])");
    Write2(buffer);
    WriteLine();
}

// public void WriteLine(char[] buffer, int index, int count) [instance] :3674
void TextWriter::WriteLine4(uArray* buffer, int index, int count)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(char[],int,int)");
    int index_ = index;
    int count_ = count;
    Write3(buffer, index_, count_);
    WriteLine();
}

// public void WriteLine(double value) [instance] :3716
void TextWriter::WriteLine5(double value)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(double)");
    double value_ = value;
    Write4(value_);
    WriteLine();
}

// public void WriteLine(float value) [instance] :3710
void TextWriter::WriteLine6(float value)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(float)");
    float value_ = value;
    Write5(value_);
    WriteLine();
}

// public void WriteLine(int value) [instance] :3686
void TextWriter::WriteLine7(int value)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(int)");
    int value_ = value;
    Write6(value_);
    WriteLine();
}

// public void WriteLine(long value) [instance] :3698
void TextWriter::WriteLine8(int64_t value)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(long)");
    int64_t value_ = value;
    Write7(value_);
    WriteLine();
}

// public void WriteLine(object value) [instance] :3728
void TextWriter::WriteLine9(uObject* value)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(object)");

    if (value == NULL)
    {
        WriteLine();
        return;
    }

    WriteLine10(::g::Uno::Object::ToString(uPtr(value)));
}

// public void WriteLine(string value) [instance] :3722
void TextWriter::WriteLine10(uString* value)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(string)");
    Write9(value);
    WriteLine();
}

// public void WriteLine(string format, object[] args) [instance] :3738
void TextWriter::WriteLine11(uString* format, uArray* args)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(string,object[])");
    Write9(::g::Uno::String::Format(format, args));
    WriteLine();
}

// public void WriteLine(uint value) [instance] :3692
void TextWriter::WriteLine12(uint32_t value)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(uint)");
    uint32_t value_ = value;
    Write11(value_);
    WriteLine();
}

// public void WriteLine(ulong value) [instance] :3704
void TextWriter::WriteLine13(uint64_t value)
{
    uStackFrame __("Uno.IO.TextWriter", "WriteLine(ulong)");
    uint64_t value_ = value;
    Write12(value_);
    WriteLine();
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno
// ------------------------------------------------------------------------------------------------

// public enum UserDirectory :1260
uEnumType* UserDirectory_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.IO.UserDirectory", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "Config", 0LL,
        "Data", 1LL,
        "Desktop", 2LL,
        "Downloads", 3LL,
        "Templates", 4LL,
        "Public", 5LL,
        "Documents", 6LL,
        "Music", 7LL,
        "Pictures", 8LL,
        "Videos", 9LL);
    return type;
}

}}} // ::g::Uno::IO
