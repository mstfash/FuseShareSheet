// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.AndroidSystemFont.FontDescriptor.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct AndroidSystemFont__Family;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Internal{

// private struct AndroidSystemFont.Family :15
// {
uStructType* AndroidSystemFont__Family_typeof();
void AndroidSystemFont__Family__ctor__fn(AndroidSystemFont__Family* __this, uString* name, uString* language, uString* variant);
void AndroidSystemFont__Family__New1_fn(uString* name, uString* language, uString* variant, AndroidSystemFont__Family* __retval);

struct AndroidSystemFont__Family
{
    uStrong<uString*> Name;
    uStrong<uString*> Language;
    uStrong<uString*> Variant;
    uStrong< ::g::Uno::Collections::List*> Fonts;

    void ctor_(uString* name, uString* language, uString* variant);
};

AndroidSystemFont__Family AndroidSystemFont__Family__New1(uString* name, uString* language, uString* variant);
// }

}}} // ::g::Fuse::Internal
