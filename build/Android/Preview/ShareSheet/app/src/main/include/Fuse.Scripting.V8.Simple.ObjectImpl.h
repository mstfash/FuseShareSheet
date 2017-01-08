// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal extern struct ObjectImpl :1410
// {
uStructType* ObjectImpl_typeof();
void ObjectImpl__op_Equality_fn(::V8Simple::Object** x, ::V8Simple::Object** y, bool* __retval);
void ObjectImpl__op_Inequality_fn(::V8Simple::Object** x, ::V8Simple::Object** y, bool* __retval);

struct ObjectImpl
{
    static bool op_Equality(::V8Simple::Object* x, ::V8Simple::Object* y);
    static bool op_Inequality(::V8Simple::Object* x, ::V8Simple::Object* y);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
