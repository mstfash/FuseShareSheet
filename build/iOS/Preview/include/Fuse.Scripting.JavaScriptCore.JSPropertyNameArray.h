// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.JavaScriptCore/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// internal extern struct JSPropertyNameArray :762
// {
struct JSPropertyNameArray_type : uStructType
{
    ::g::Uno::IDisposable interface0;
};

JSPropertyNameArray_type* JSPropertyNameArray_typeof();
void JSPropertyNameArray__Dispose_fn(::JSPropertyNameArrayRef* __this);
void JSPropertyNameArray__GetCount_fn(::JSPropertyNameArrayRef* __this, int* __retval);
void JSPropertyNameArray__get_Item_fn(::JSPropertyNameArrayRef* __this, int* index, ::JSStringRef* __retval);

struct JSPropertyNameArray
{
    void* _dummy;

    static void Dispose(::JSPropertyNameArrayRef __this);
    static int GetCount(::JSPropertyNameArrayRef __this);
    static ::JSStringRef Item(::JSPropertyNameArrayRef __this, int index);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
