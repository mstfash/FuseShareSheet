// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/iOS/Preview/preamble/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Simulator.ByteFileSource.h>
#include <Outracks.Simulator.FileCache.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.String.h>
static uType* TYPES[1];

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class FileCache :117
// {
// static FileCache() :117
static void FileCache__cctor__fn(uType* __type)
{
    FileCache::_cache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<string, Outracks.Simulator.ByteFileSource>*/]));
}

static void FileCache_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Outracks::Simulator::ByteFileSource_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.Dictionary<string, Outracks.Simulator.ByteFileSource>*/], (uintptr_t)&::g::Outracks::Simulator::FileCache::_cache_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("GetFileSource", NULL, (void*)FileCache__GetFileSource_fn, 0, true, ::g::Outracks::Simulator::ByteFileSource_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)FileCache__New1_fn, 0, true, type, 0),
        new uFunction("Update", NULL, (void*)FileCache__Update_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array()));
}

uType* FileCache_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FileCache);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.FileCache", options);
    type->fp_build_ = FileCache_build;
    type->fp_ctor_ = (void*)FileCache__New1_fn;
    type->fp_cctor_ = FileCache__cctor__fn;
    return type;
}

// public generated FileCache() :117
void FileCache__ctor__fn(FileCache* __this)
{
    __this->ctor_();
}

// public static Outracks.Simulator.ByteFileSource GetFileSource(string path) :129
void FileCache__GetFileSource_fn(uString* path, ::g::Outracks::Simulator::ByteFileSource** __retval)
{
    *__retval = FileCache::GetFileSource(path);
}

// public generated FileCache New() :117
void FileCache__New1_fn(FileCache** __retval)
{
    *__retval = FileCache::New1();
}

// public static void Update(string path, byte[] bytes) :119
void FileCache__Update_fn(uString* path, uArray* bytes)
{
    FileCache::Update(path, bytes);
}

uSStrong< ::g::Uno::Collections::Dictionary*> FileCache::_cache_;

// public generated FileCache() [instance] :117
void FileCache::ctor_()
{
}

// public static Outracks.Simulator.ByteFileSource GetFileSource(string path) [static] :129
::g::Outracks::Simulator::ByteFileSource* FileCache::GetFileSource(uString* path)
{
    uStackFrame __("Outracks.Simulator.FileCache", "GetFileSource(string)");
    FileCache_typeof()->Init();
    ::g::Outracks::Simulator::ByteFileSource* ret2;
    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(FileCache::_cache()), path, &ret2), ret2);
}

// public generated FileCache New() [static] :117
FileCache* FileCache::New1()
{
    FileCache* obj1 = (FileCache*)uNew(FileCache_typeof());
    obj1->ctor_();
    return obj1;
}

// public static void Update(string path, byte[] bytes) [static] :119
void FileCache::Update(uString* path, uArray* bytes)
{
    uStackFrame __("Outracks.Simulator.FileCache", "Update(string,byte[])");
    FileCache_typeof()->Init();
    bool ret3;
    ::g::Outracks::Simulator::ByteFileSource* fs = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(FileCache::_cache()), path, (void**)(&fs), &ret3), ret3))
        uPtr(fs)->Update(bytes);
    else
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(FileCache::_cache()), path, ::g::Outracks::Simulator::ByteFileSource::New1(path, bytes));
}
// }

}}} // ::g::Outracks::Simulator
