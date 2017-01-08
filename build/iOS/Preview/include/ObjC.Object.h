// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/exporttargetinterop/foreign/objc/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <objc/objc.h>
#include <Uno.Object.h>

namespace g{
namespace ObjC{

// public abstract extern interface Object :34
// {
uInterfaceType* Object_typeof();

struct Object
{
    void(*fp_get_Handle)(uObject*, ::id*);
    static ::id Handle(const uInterface& __this) { ::id __retval; return __this.VTable<Object>()->fp_get_Handle(__this, &__retval), __retval; }
};
// }

}} // ::g::ObjC
