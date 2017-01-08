// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Simple.IntImpl.h>
#include <Fuse.Scripting.V8.Simple.Value.h>
#include <include/V8Simple.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Int;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal sealed extern class Int :1685
// {
::g::Fuse::Scripting::V8::Simple::Value_type* Int_typeof();
void Int__ctor_2_fn(Int* __this, ::V8Simple::Value** impl);
void Int__ctor_3_fn(Int* __this, int* value);
void Int__get__intImpl_fn(Int* __this, ::V8Simple::Int** __retval);
void Int__GetValue_fn(Int* __this, int* __retval);
void Int__GetValueType_fn(Int* __this, int* __retval);
void Int__New4_fn(::V8Simple::Value** impl, Int** __retval);
void Int__New5_fn(int* value, Int** __retval);

struct Int : ::g::Fuse::Scripting::V8::Simple::Value
{
    void ctor_2(::V8Simple::Value* impl);
    void ctor_3(int value);
    ::V8Simple::Int* _intImpl();
    int GetValue();
    static Int* New4(::V8Simple::Value* impl);
    static Int* New5(int value);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
