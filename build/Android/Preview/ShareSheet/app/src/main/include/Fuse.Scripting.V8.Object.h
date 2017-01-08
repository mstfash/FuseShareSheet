// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IObject.h>
#include <Fuse.Scripting.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Object;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Object;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal sealed extern class Object :848
// {
::g::Fuse::Scripting::Object_type* Object_typeof();
void Object__ctor_1_fn(Object* __this, ::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Object* obj);
void Object__CallMethod_fn(Object* __this, uString* name, uArray* args, uObject** __retval);
void Object__ContainsKey_fn(Object* __this, uString* key, bool* __retval);
void Object__Equals2_fn(Object* __this, ::g::Fuse::Scripting::Object* o, bool* __retval);
void Object__GetHashCode_fn(Object* __this, int* __retval);
void Object__InstanceOf_fn(Object* __this, ::g::Fuse::Scripting::Function* type, bool* __retval);
void Object__get_Item_fn(Object* __this, uString* key, uObject** __retval);
void Object__set_Item_fn(Object* __this, uString* key, uObject* value);
void Object__get_Keys_fn(Object* __this, uArray** __retval);
void Object__New1_fn(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Object* obj, Object** __retval);
void Object__New2_fn(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Object* obj, Object** __retval);

struct Object : ::g::Fuse::Scripting::Object
{
    uWeak< ::g::Fuse::Scripting::V8::Context*> _context;
    uStrong< ::g::Fuse::Scripting::V8::Simple::Object*> _object;

    void ctor_1(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Object* obj);
    static Object* New1(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Object* obj);
    static Object* New2(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Object* obj);
};
// }

}}}} // ::g::Fuse::Scripting::V8
