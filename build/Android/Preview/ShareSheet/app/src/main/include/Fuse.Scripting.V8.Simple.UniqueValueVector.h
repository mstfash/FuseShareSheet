// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Simple.UniqueValueVectorImpl.h>
#include <include/V8Simple.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct UniqueValueVector;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Value;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal sealed extern class UniqueValueVector :1616
// {
uType* UniqueValueVector_typeof();
void UniqueValueVector__ctor__fn(UniqueValueVector* __this, ::V8Simple::UniqueValueVector** impl, bool* owned);
void UniqueValueVector__Get_fn(UniqueValueVector* __this, int* i, ::g::Fuse::Scripting::V8::Simple::Value** __retval);
void UniqueValueVector__Length_fn(UniqueValueVector* __this, int* __retval);
void UniqueValueVector__New1_fn(::V8Simple::UniqueValueVector** impl, bool* owned, UniqueValueVector** __retval);

struct UniqueValueVector : uObject
{
    ::V8Simple::UniqueValueVector* _impl;
    bool _owned;

    void ctor_(::V8Simple::UniqueValueVector* impl, bool owned);
    ::g::Fuse::Scripting::V8::Simple::Value* Get(int i);
    int Length();
    static UniqueValueVector* New1(::V8Simple::UniqueValueVector* impl, bool owned);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
