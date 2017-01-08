// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Value;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct ValueExtensions;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal static extern class ValueExtensions :1308
// {
uClassType* ValueExtensions_typeof();
void ValueExtensions__GetValueImpl_fn(::g::Fuse::Scripting::V8::Simple::Value* val, ::V8Simple::Value** __retval);

struct ValueExtensions : uObject
{
    static ::V8Simple::Value* GetValueImpl(::g::Fuse::Scripting::V8::Simple::Value* val);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
