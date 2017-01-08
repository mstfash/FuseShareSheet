// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Simple.FunctionImpl.h>
#include <Fuse.Scripting.V8.Simple.Value.h>
#include <include/V8Simple.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Function;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Object;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct ValueVector;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal sealed extern class Function :1424
// {
::g::Fuse::Scripting::V8::Simple::Value_type* Function_typeof();
void Function__ctor_2_fn(Function* __this, ::V8Simple::Value** impl);
void Function__get__functionImpl_fn(Function* __this, ::V8Simple::Function** __retval);
void Function__Call_fn(Function* __this, ::g::Fuse::Scripting::V8::Simple::ValueVector* args, ::g::Fuse::Scripting::V8::Simple::Value** __retval);
void Function__Construct_fn(Function* __this, ::g::Fuse::Scripting::V8::Simple::ValueVector* args, ::g::Fuse::Scripting::V8::Simple::Object** __retval);
void Function__Equals2_fn(Function* __this, Function* f, bool* __retval);
void Function__GetValueType_fn(Function* __this, int* __retval);
void Function__New4_fn(::V8Simple::Value** impl, Function** __retval);

struct Function : ::g::Fuse::Scripting::V8::Simple::Value
{
    void ctor_2(::V8Simple::Value* impl);
    ::V8Simple::Function* _functionImpl();
    ::g::Fuse::Scripting::V8::Simple::Value* Call(::g::Fuse::Scripting::V8::Simple::ValueVector* args);
    ::g::Fuse::Scripting::V8::Simple::Object* Construct(::g::Fuse::Scripting::V8::Simple::ValueVector* args);
    bool Equals2(Function* f);
    static Function* New4(::V8Simple::Value* impl);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
