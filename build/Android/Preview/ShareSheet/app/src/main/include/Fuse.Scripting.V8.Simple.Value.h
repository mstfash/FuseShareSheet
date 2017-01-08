// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Simple.ValueImpl.h>
#include <include/V8Simple.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Value;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal extern class Value :1252
// {
struct Value_type : uType
{
    void(*fp_GetValueType)(::g::Fuse::Scripting::V8::Simple::Value*, int*);
};

Value_type* Value_typeof();
void Value__ctor__fn(Value* __this);
void Value__ctor_1_fn(Value* __this, ::V8Simple::Value** impl);
void Value__GetValueType_fn(Value* __this, int* __retval);
void Value__New1_fn(Value** __retval);
void Value__New2_fn(::V8Simple::Value** impl, Value** __retval);
void Value__New3_fn(::V8Simple::Value** impl, Value** __retval);

struct Value : uObject
{
    ::V8Simple::Value* _valueImpl;

    void ctor_();
    void ctor_1(::V8Simple::Value* impl);
    int GetValueType() { int __retval; return (((Value_type*)__type)->fp_GetValueType)(this, &__retval), __retval; }
    static int GetValueType(Value* __this) { int __retval; return Value__GetValueType_fn(__this, &__retval), __retval; }
    static Value* New1();
    static Value* New2(::V8Simple::Value* impl);
    static Value* New3(::V8Simple::Value* impl);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
