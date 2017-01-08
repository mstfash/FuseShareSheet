// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract interface IEventSerializer :747
// {
uInterfaceType* IEventSerializer_typeof();

struct IEventSerializer
{
    void(*fp_AddBool)(uObject*, uString*, bool*);
    void(*fp_AddDouble)(uObject*, uString*, double*);
    void(*fp_AddInt)(uObject*, uString*, int*);
    void(*fp_AddObject)(uObject*, uString*, uObject*);
    void(*fp_AddString)(uObject*, uString*, uString*);
    static void AddBool(const uInterface& __this, uString* key, bool value) { __this.VTable<IEventSerializer>()->fp_AddBool(__this, key, &value); }
    static void AddDouble(const uInterface& __this, uString* key, double value) { __this.VTable<IEventSerializer>()->fp_AddDouble(__this, key, &value); }
    static void AddInt(const uInterface& __this, uString* key, int value) { __this.VTable<IEventSerializer>()->fp_AddInt(__this, key, &value); }
    static void AddObject(const uInterface& __this, uString* key, uObject* obj) { __this.VTable<IEventSerializer>()->fp_AddObject(__this, key, obj); }
    static void AddString(const uInterface& __this, uString* key, uString* value) { __this.VTable<IEventSerializer>()->fp_AddString(__this, key, value); }
};
// }

}}} // ::g::Fuse::Scripting
