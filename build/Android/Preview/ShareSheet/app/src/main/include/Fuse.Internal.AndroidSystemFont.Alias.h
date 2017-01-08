// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct AndroidSystemFont__Alias;}}}

namespace g{
namespace Fuse{
namespace Internal{

// private struct AndroidSystemFont.Alias :47
// {
uStructType* AndroidSystemFont__Alias_typeof();
void AndroidSystemFont__Alias__ctor__fn(AndroidSystemFont__Alias* __this, uString* to, int* weight);
void AndroidSystemFont__Alias__New1_fn(uString* to, int* weight, AndroidSystemFont__Alias* __retval);

struct AndroidSystemFont__Alias
{
    uStrong<uString*> To;
    int Weight;

    void ctor_(uString* to, int weight);
};

AndroidSystemFont__Alias AndroidSystemFont__Alias__New1(uString* to, int weight);
// }

}}} // ::g::Fuse::Internal
