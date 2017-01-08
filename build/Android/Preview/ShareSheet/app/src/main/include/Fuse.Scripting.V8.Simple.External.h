// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Simple.ExternalImpl.h>
#include <Fuse.Scripting.V8.Simple.Value.h>
#include <include/V8Simple.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct External;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal sealed extern class External :1542
// {
::g::Fuse::Scripting::V8::Simple::Value_type* External_typeof();
void External__ctor_2_fn(External* __this, ::V8Simple::Value** impl);
void External__ctor_3_fn(External* __this, void** value);
void External__get__externalImpl_fn(External* __this, ::V8Simple::External** __retval);
void External__GetValue_fn(External* __this, void** __retval);
void External__GetValueType_fn(External* __this, int* __retval);
void External__New4_fn(::V8Simple::Value** impl, External** __retval);
void External__New5_fn(void** value, External** __retval);

struct External : ::g::Fuse::Scripting::V8::Simple::Value
{
    void ctor_2(::V8Simple::Value* impl);
    void ctor_3(void* value);
    ::V8Simple::External* _externalImpl();
    void* GetValue();
    static External* New4(::V8Simple::Value* impl);
    static External* New5(void* value);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
