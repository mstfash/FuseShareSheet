// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/exporttargetinterop/foreign/objc/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <objc/objc.h>
#include <Uno.h>
namespace g{namespace ObjC{struct Helpers;}}

namespace g{
namespace ObjC{

// internal static class Helpers :39
// {
uClassType* Helpers_typeof();
void Helpers__GetHandle_fn(uObject* o, ::id* __retval);

struct Helpers : uObject
{
    static ::id GetHandle(uObject* o);
};
// }

}} // ::g::ObjC
