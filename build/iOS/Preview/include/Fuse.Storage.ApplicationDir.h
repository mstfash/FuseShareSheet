// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Storage/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Storage{struct ApplicationDir;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Storage{

// internal static class ApplicationDir :9
// {
uClassType* ApplicationDir_typeof();
void ApplicationDir__CreateFile_fn(uString* filepath);
void ApplicationDir__Delete_fn(uString* filename, bool* __retval);
void ApplicationDir__Read_fn(uString* filename, uString** __retval);
void ApplicationDir__ReadAsync_fn(uString* filename, ::g::Uno::Threading::Future1** __retval);
void ApplicationDir__ReadAsync1_fn(uObject* dispatcher, uString* filename, ::g::Uno::Threading::Future1** __retval);
void ApplicationDir__Write_fn(uString* filename, uString* value, bool* __retval);
void ApplicationDir__WriteAsync_fn(uString* filename, uString* value, ::g::Uno::Threading::Future1** __retval);
void ApplicationDir__WriteAsync1_fn(uObject* dispatcher, uString* filename, uString* value, ::g::Uno::Threading::Future1** __retval);

struct ApplicationDir : uObject
{
    static void CreateFile(uString* filepath);
    static bool Delete(uString* filename);
    static uString* Read(uString* filename);
    static ::g::Uno::Threading::Future1* ReadAsync(uString* filename);
    static ::g::Uno::Threading::Future1* ReadAsync1(uObject* dispatcher, uString* filename);
    static bool Write(uString* filename, uString* value);
    static ::g::Uno::Threading::Future1* WriteAsync(uString* filename, uString* value);
    static ::g::Uno::Threading::Future1* WriteAsync1(uObject* dispatcher, uString* filename, uString* value);
};
// }

}}} // ::g::Fuse::Storage
