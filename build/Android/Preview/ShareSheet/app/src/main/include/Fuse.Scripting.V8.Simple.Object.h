// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Simple.ObjectImpl.h>
#include <Fuse.Scripting.V8.Simple.Value.h>
#include <include/V8Simple.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Function;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Object;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct String;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct UniqueValueVector;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct ValueVector;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal sealed extern class Object :1318
// {
::g::Fuse::Scripting::V8::Simple::Value_type* Object_typeof();
void Object__ctor_2_fn(Object* __this, ::V8Simple::Object** impl);
void Object__ctor_3_fn(Object* __this, ::V8Simple::Value** impl);
void Object__get__objectImpl_fn(Object* __this, ::V8Simple::Object** __retval);
void Object__CallMethod_fn(Object* __this, ::g::Fuse::Scripting::V8::Simple::String* name, ::g::Fuse::Scripting::V8::Simple::ValueVector* args, ::g::Fuse::Scripting::V8::Simple::Value** __retval);
void Object__ContainsKey_fn(Object* __this, ::g::Fuse::Scripting::V8::Simple::String* key, bool* __retval);
void Object__Equals2_fn(Object* __this, Object* arg, bool* __retval);
void Object__Get_fn(Object* __this, ::g::Fuse::Scripting::V8::Simple::String* key, ::g::Fuse::Scripting::V8::Simple::Value** __retval);
void Object__GetArrayBufferData_fn(Object* __this, void** __retval);
void Object__GetValueType_fn(Object* __this, int* __retval);
void Object__InstanceOf_fn(Object* __this, ::g::Fuse::Scripting::V8::Simple::Function* type, bool* __retval);
void Object__Keys_fn(Object* __this, ::g::Fuse::Scripting::V8::Simple::UniqueValueVector** __retval);
void Object__New4_fn(::V8Simple::Object** impl, Object** __retval);
void Object__New5_fn(::V8Simple::Value** impl, Object** __retval);
void Object__Set_fn(Object* __this, ::g::Fuse::Scripting::V8::Simple::String* key, ::g::Fuse::Scripting::V8::Simple::Value* value);

struct Object : ::g::Fuse::Scripting::V8::Simple::Value
{
    void ctor_2(::V8Simple::Object* impl);
    void ctor_3(::V8Simple::Value* impl);
    ::V8Simple::Object* _objectImpl();
    ::g::Fuse::Scripting::V8::Simple::Value* CallMethod(::g::Fuse::Scripting::V8::Simple::String* name, ::g::Fuse::Scripting::V8::Simple::ValueVector* args);
    bool ContainsKey(::g::Fuse::Scripting::V8::Simple::String* key);
    bool Equals2(Object* arg);
    ::g::Fuse::Scripting::V8::Simple::Value* Get(::g::Fuse::Scripting::V8::Simple::String* key);
    void* GetArrayBufferData();
    bool InstanceOf(::g::Fuse::Scripting::V8::Simple::Function* type);
    ::g::Fuse::Scripting::V8::Simple::UniqueValueVector* Keys();
    void Set(::g::Fuse::Scripting::V8::Simple::String* key, ::g::Fuse::Scripting::V8::Simple::Value* value);
    static Object* New4(::V8Simple::Object* impl);
    static Object* New5(::V8Simple::Value* impl);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
