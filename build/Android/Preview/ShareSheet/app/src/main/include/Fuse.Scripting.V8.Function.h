// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Function.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Function;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Function;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal sealed extern class Function :671
// {
::g::Fuse::Scripting::Function_type* Function_typeof();
void Function__ctor_1_fn(Function* __this, ::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Function* function);
void Function__Call_fn(Function* __this, uArray* args, uObject** __retval);
void Function__Construct_fn(Function* __this, uArray* args, ::g::Fuse::Scripting::Object** __retval);
void Function__Equals2_fn(Function* __this, ::g::Fuse::Scripting::Function* f, bool* __retval);
void Function__GetHashCode_fn(Function* __this, int* __retval);
void Function__New1_fn(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Function* function, Function** __retval);

struct Function : ::g::Fuse::Scripting::Function
{
    uWeak< ::g::Fuse::Scripting::V8::Context*> _context;
    uStrong< ::g::Fuse::Scripting::V8::Simple::Function*> _function;

    void ctor_1(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Function* function);
    static Function* New1(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Simple::Function* function);
};
// }

}}}} // ::g::Fuse::Scripting::V8
