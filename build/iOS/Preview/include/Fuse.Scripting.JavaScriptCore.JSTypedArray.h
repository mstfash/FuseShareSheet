// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.JavaScriptCore/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct JSTypedArray;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// internal static extern class JSTypedArray :933
// {
uClassType* JSTypedArray_typeof();
void JSTypedArray__TryCopyArrayBufferBytes_fn(::JSContextRef* ctx, ::JSObjectRef* obj, uDelegate* onException, uArray** __retval);
void JSTypedArray__TryMakeArrayBufferWithBytes_fn(::JSContextRef* ctx, uArray* bytes, uDelegate* onException, ::JSObjectRef* __retval);

struct JSTypedArray : uObject
{
    static uArray* TryCopyArrayBufferBytes(::JSContextRef ctx, ::JSObjectRef obj, uDelegate* onException);
    static ::JSObjectRef TryMakeArrayBufferWithBytes(::JSContextRef ctx, uArray* bytes, uDelegate* onException);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
