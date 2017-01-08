// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Simple.ArrayImpl.h>
#include <Fuse.Scripting.V8.Simple.Value.h>
#include <include/V8Simple.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Array;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal sealed extern class Array :1487
// {
::g::Fuse::Scripting::V8::Simple::Value_type* Array_typeof();
void Array__ctor_2_fn(Array* __this, ::V8Simple::Value** impl);
void Array__get__arrayImpl_fn(Array* __this, ::V8Simple::Array** __retval);
void Array__Equals2_fn(Array* __this, Array* array, bool* __retval);
void Array__Get_fn(Array* __this, int* index, ::g::Fuse::Scripting::V8::Simple::Value** __retval);
void Array__GetValueType_fn(Array* __this, int* __retval);
void Array__Length_fn(Array* __this, int* __retval);
void Array__New4_fn(::V8Simple::Value** impl, Array** __retval);
void Array__Set_fn(Array* __this, int* index, ::g::Fuse::Scripting::V8::Simple::Value* value);

struct Array : ::g::Fuse::Scripting::V8::Simple::Value
{
    void ctor_2(::V8Simple::Value* impl);
    ::V8Simple::Array* _arrayImpl();
    bool Equals2(Array* array);
    ::g::Fuse::Scripting::V8::Simple::Value* Get(int index);
    int Length();
    void Set(int index, ::g::Fuse::Scripting::V8::Simple::Value* value);
    static Array* New4(::V8Simple::Value* impl);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
