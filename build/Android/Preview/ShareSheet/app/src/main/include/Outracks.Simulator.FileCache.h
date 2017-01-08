// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/Android/Preview/preamble/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct ByteFileSource;}}}
namespace g{namespace Outracks{namespace Simulator{struct FileCache;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class FileCache :117
// {
uType* FileCache_typeof();
void FileCache__ctor__fn(FileCache* __this);
void FileCache__GetFileSource_fn(uString* path, ::g::Outracks::Simulator::ByteFileSource** __retval);
void FileCache__New1_fn(FileCache** __retval);
void FileCache__Update_fn(uString* path, uArray* bytes);

struct FileCache : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _cache_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _cache() { return FileCache_typeof()->Init(), _cache_; }

    void ctor_();
    static ::g::Outracks::Simulator::ByteFileSource* GetFileSource(uString* path);
    static FileCache* New1();
    static void Update(uString* path, uArray* bytes);
};
// }

}}} // ::g::Outracks::Simulator
