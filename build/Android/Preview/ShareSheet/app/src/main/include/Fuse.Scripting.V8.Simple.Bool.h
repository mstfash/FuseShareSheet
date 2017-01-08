// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Simple.BoolImpl.h>
#include <Fuse.Scripting.V8.Simple.Value.h>
#include <include/V8Simple.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Bool;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal sealed extern class Bool :1821
// {
::g::Fuse::Scripting::V8::Simple::Value_type* Bool_typeof();
void Bool__ctor_2_fn(Bool* __this, bool* value);
void Bool__ctor_3_fn(Bool* __this, ::V8Simple::Value** impl);
void Bool__get__boolImpl_fn(Bool* __this, ::V8Simple::Bool** __retval);
void Bool__GetValue_fn(Bool* __this, bool* __retval);
void Bool__GetValueType_fn(Bool* __this, int* __retval);
void Bool__New4_fn(bool* value, Bool** __retval);
void Bool__New5_fn(::V8Simple::Value** impl, Bool** __retval);

struct Bool : ::g::Fuse::Scripting::V8::Simple::Value
{
    void ctor_2(bool value);
    void ctor_3(::V8Simple::Value* impl);
    ::V8Simple::Bool* _boolImpl();
    bool GetValue();
    static Bool* New4(bool value);
    static Bool* New5(::V8Simple::Value* impl);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
