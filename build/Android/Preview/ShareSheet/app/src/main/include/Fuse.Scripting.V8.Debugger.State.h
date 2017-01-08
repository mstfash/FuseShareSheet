// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// private abstract interface Debugger.State :410
// {
uInterfaceType* Debugger__State_typeof();

struct Debugger__State
{
    void(*fp_Dispose)(uObject*);
    void(*fp_Run)(uObject*, uObject**);
    static void Dispose(const uInterface& __this) { __this.VTable<Debugger__State>()->fp_Dispose(__this); }
    static uObject* Run(const uInterface& __this) { uObject* __retval; return __this.VTable<Debugger__State>()->fp_Run(__this, &__retval), __retval; }
};
// }

}}}} // ::g::Fuse::Scripting::V8
