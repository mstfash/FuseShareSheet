// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.JavaScriptCore/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.IArray.h>
#include <JavaScriptCore/JavaScript.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct Array;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct Context;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// internal sealed extern class Array :9
// {
::g::Fuse::Scripting::Array_type* Array_typeof();
void Array__ctor_1_fn(Array* __this, ::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* array);
void Array__Equals2_fn(Array* __this, ::g::Fuse::Scripting::Array* a, bool* __retval);
void Array__GetHashCode_fn(Array* __this, int* __retval);
void Array__get_Item_fn(Array* __this, int* index, uObject** __retval);
void Array__set_Item_fn(Array* __this, int* index, uObject* value);
void Array__get_Length_fn(Array* __this, int* __retval);
void Array__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef* array, Array** __retval);

struct Array : ::g::Fuse::Scripting::Array
{
    uStrong< ::g::Fuse::Scripting::JavaScriptCore::Context*> _context;
    ::JSObjectRef _value;

    void ctor_1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef array);
    static Array* New1(::g::Fuse::Scripting::JavaScriptCore::Context* context, ::JSObjectRef array);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
