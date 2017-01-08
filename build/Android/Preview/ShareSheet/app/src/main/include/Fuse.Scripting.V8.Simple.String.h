// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Simple.StringImpl.h>
#include <Fuse.Scripting.V8.Simple.Value.h>
#include <include/V8Simple.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct String;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal sealed extern class String :1767
// {
::g::Fuse::Scripting::V8::Simple::Value_type* String_typeof();
void String__ctor_2_fn(String* __this, ::V8Simple::Value** impl);
void String__get__stringImpl_fn(String* __this, ::V8Simple::String** __retval);
void String__GetValue_fn(String* __this, uString** __retval);
void String__GetValueType_fn(String* __this, int* __retval);
void String__New4_fn(::V8Simple::Value** impl, String** __retval);
void String__New5_fn(uString* value, String** __retval);

struct String : ::g::Fuse::Scripting::V8::Simple::Value
{
    void ctor_2(::V8Simple::Value* impl);
    ::V8Simple::String* _stringImpl();
    uString* GetValue();
    static String* New4(::V8Simple::Value* impl);
    static String* New5(uString* value);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
