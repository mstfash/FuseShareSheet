// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Android/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct AndroidProperties;}}

namespace g{
namespace Fuse{

// public static extern class AndroidProperties :668
// {
uClassType* AndroidProperties_typeof();
void AndroidProperties__get_BuildVersion_fn(int* __retval);
void AndroidProperties__GetBuildVersion_fn(int* __retval);
void AndroidProperties__GetReleaseVersion_fn(uString** __retval);
void AndroidProperties__get_ReleaseVersion_fn(uString** __retval);

struct AndroidProperties : uObject
{
    static int GetBuildVersion();
    static uString* GetReleaseVersion();
    static int BuildVersion();
    static uString* ReleaseVersion();
};
// }

}} // ::g::Fuse
