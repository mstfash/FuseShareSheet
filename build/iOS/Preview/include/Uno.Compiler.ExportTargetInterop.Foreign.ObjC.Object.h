// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/exporttargetinterop/foreign/objc/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <ObjC.Object.h>
#include <objc/objc.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{namespace Foreign{namespace ObjC{struct Object;}}}}}}

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{
namespace Foreign{
namespace ObjC{

// public sealed extern class Object :51
// {
struct Object_type : uType
{
    ::g::ObjC::Object interface0;
};

Object_type* Object_typeof();
void Object__ctor__fn(Object* __this, ::id* handle);
void Object__Equals_fn(Object* __this, uObject* x, bool* __retval);
void Object__GetHashCode_fn(Object* __this, int* __retval);
void Object__get_Handle_fn(Object* __this, ::id* __retval);
void Object__New1_fn(::id* handle, Object** __retval);
void Object__New2_fn(::id* handle, Object** __retval);

struct Object : uObject
{
    ::id _handle;

    void ctor_(::id handle);
    ::id Handle();
    static Object* New1(::id handle);
    static Object* New2(::id handle);
};
// }

}}}}}} // ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC
