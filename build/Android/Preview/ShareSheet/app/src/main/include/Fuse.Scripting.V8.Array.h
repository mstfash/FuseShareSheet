// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.IArray.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Array;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Array;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Context;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal sealed extern class Array :8
// {
::g::Fuse::Scripting::Array_type* Array_typeof();
void Array__ctor_1_fn(Array* __this, ::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Array* array);
void Array__Equals2_fn(Array* __this, ::g::Fuse::Scripting::Array* a, bool* __retval);
void Array__GetHashCode_fn(Array* __this, int* __retval);
void Array__get_Item_fn(Array* __this, int* index, uObject** __retval);
void Array__set_Item_fn(Array* __this, int* index, uObject* value);
void Array__get_Length_fn(Array* __this, int* __retval);
void Array__New1_fn(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Array* array, Array** __retval);

struct Array : ::g::Fuse::Scripting::Array
{
    uStrong< ::g::Fuse::Scripting::V8::Simple::Array*> _array;
    uWeak< ::g::Fuse::Scripting::V8::Context*> _context;

    void ctor_1(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Array* array);
    static Array* New1(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Array* array);
};
// }

}}}} // ::g::Fuse::Scripting::V8
