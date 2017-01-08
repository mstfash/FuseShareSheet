// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Simple.Value.h>
#include <include/V8Simple.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Callback;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct UniqueValueVector;}}}}}
namespace V8Simple { class CallbackProxy; }

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal extern class Callback :1583
// {
struct Callback_type : ::g::Fuse::Scripting::V8::Simple::Value_type
{
    void(*fp_Call)(::g::Fuse::Scripting::V8::Simple::Callback*, ::g::Fuse::Scripting::V8::Simple::UniqueValueVector*, ::g::Fuse::Scripting::V8::Simple::Value**);
    void(*fp_Release)(::g::Fuse::Scripting::V8::Simple::Callback*);
    void(*fp_Retain)(::g::Fuse::Scripting::V8::Simple::Callback*);
};

Callback_type* Callback_typeof();
void Callback__ctor_2_fn(Callback* __this);
void Callback__get__callbackImpl_fn(Callback* __this, ::V8Simple::CallbackProxy** __retval);
void Callback__Call_fn(Callback* __this, ::g::Fuse::Scripting::V8::Simple::UniqueValueVector* args, ::g::Fuse::Scripting::V8::Simple::Value** __retval);
void Callback__GetValueType_fn(Callback* __this, int* __retval);
void Callback__New4_fn(Callback** __retval);
void Callback__Release_fn(Callback* __this);
void Callback__Retain_fn(Callback* __this);

struct Callback : ::g::Fuse::Scripting::V8::Simple::Value
{
    void ctor_2();
    ::V8Simple::CallbackProxy* _callbackImpl();
    ::g::Fuse::Scripting::V8::Simple::Value* Call(::g::Fuse::Scripting::V8::Simple::UniqueValueVector* args) { ::g::Fuse::Scripting::V8::Simple::Value* __retval; return (((Callback_type*)__type)->fp_Call)(this, args, &__retval), __retval; }
    void Release() { (((Callback_type*)__type)->fp_Release)(this); }
    void Retain() { (((Callback_type*)__type)->fp_Retain)(this); }
    static ::g::Fuse::Scripting::V8::Simple::Value* Call(Callback* __this, ::g::Fuse::Scripting::V8::Simple::UniqueValueVector* args) { ::g::Fuse::Scripting::V8::Simple::Value* __retval; return Callback__Call_fn(__this, args, &__retval), __retval; }
    static Callback* New4();
    static void Release(Callback* __this) { Callback__Release_fn(__this); }
    static void Retain(Callback* __this) { Callback__Retain_fn(__this); }
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
