// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.FileSystem/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace FileSystem{struct AndroidPaths;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace FileSystem{

// internal sealed extern class AndroidPaths :11
// {
uType* AndroidPaths_typeof();
void AndroidPaths__ctor__fn(AndroidPaths* __this);
void AndroidPaths__GetCacheDirectory_fn(uString** __retval);
void AndroidPaths__GetExternalCacheDirectory_fn(uString** __retval);
void AndroidPaths__GetExternalFilesDirectory_fn(uString** __retval);
void AndroidPaths__GetFilesDirectory_fn(uString** __retval);
void AndroidPaths__GetPathDictionary_fn(::g::Uno::Collections::Dictionary** __retval);
void AndroidPaths__New1_fn(AndroidPaths** __retval);

struct AndroidPaths : uObject
{
    void ctor_();
    static uString* GetCacheDirectory();
    static uString* GetExternalCacheDirectory();
    static uString* GetExternalFilesDirectory();
    static uString* GetFilesDirectory();
    static ::g::Uno::Collections::Dictionary* GetPathDictionary();
    static AndroidPaths* New1();
};
// }

}}} // ::g::Fuse::FileSystem
