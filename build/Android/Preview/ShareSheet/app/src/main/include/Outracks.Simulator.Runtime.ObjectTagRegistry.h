// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/runtime/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct ObjectTagRegistry;}}}}
namespace g{struct WeakDictionary;}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public static class ObjectTagRegistry :469
// {
uClassType* ObjectTagRegistry_typeof();
void ObjectTagRegistry__Clear_fn();
void ObjectTagRegistry__GetFirstObjectWithTag_fn(uString* tag, uObject** __retval);
void ObjectTagRegistry__GetObjectsWithTag_fn(uString* tag, uObject** __retval);
void ObjectTagRegistry__GetTagHash_fn(uObject* obj, uString** __retval);
void ObjectTagRegistry__RegisterObjectTag_fn(uObject* obj, uString* tagHash, uObject** __retval);
void ObjectTagRegistry__TryExecuteOnObjectsWithTag_fn(uString* tag, uDelegate* action);

struct ObjectTagRegistry : uObject
{
    static uSStrong< ::g::WeakDictionary*> Objects_;
    static uSStrong< ::g::WeakDictionary*>& Objects() { return ObjectTagRegistry_typeof()->Init(), Objects_; }

    static void Clear();
    static uObject* GetFirstObjectWithTag(uString* tag);
    static uObject* GetObjectsWithTag(uString* tag);
    static uString* GetTagHash(uObject* obj);
    static uObject* RegisterObjectTag(uObject* obj, uString* tagHash);
    static void TryExecuteOnObjectsWithTag(uString* tag, uDelegate* action);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
