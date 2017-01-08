// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct External;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class External :2452
// {
uType* External_typeof();
void External__ctor__fn(External* __this, uObject* o);
void External__Equals_fn(External* __this, uObject* o, bool* __retval);
void External__GetHashCode_fn(External* __this, int* __retval);
void External__New1_fn(uObject* o, External** __retval);

struct External : uObject
{
    uStrong<uObject*> Object;

    void ctor_(uObject* o);
    static External* New1(uObject* o);
};
// }

}}} // ::g::Fuse::Scripting
