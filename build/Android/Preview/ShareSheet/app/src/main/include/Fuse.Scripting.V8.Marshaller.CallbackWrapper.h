// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct UniqueValueVector;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Value;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Marshaller__CallbackWrapper;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// private sealed class Marshaller.CallbackWrapper :257
// {
uType* Marshaller__CallbackWrapper_typeof();
void Marshaller__CallbackWrapper__ctor__fn(Marshaller__CallbackWrapper* __this, ::g::Fuse::Scripting::V8::Context* context, uDelegate* callback);
void Marshaller__CallbackWrapper__Call_fn(Marshaller__CallbackWrapper* __this, ::g::Fuse::Scripting::V8::Simple::UniqueValueVector* args, ::g::Fuse::Scripting::V8::Simple::Value** __retval);
void Marshaller__CallbackWrapper__New1_fn(::g::Fuse::Scripting::V8::Context* context, uDelegate* callback, Marshaller__CallbackWrapper** __retval);

struct Marshaller__CallbackWrapper : uObject
{
    uStrong<uDelegate*> _callback;
    uStrong< ::g::Fuse::Scripting::V8::Context*> _context;

    void ctor_(::g::Fuse::Scripting::V8::Context* context, uDelegate* callback);
    ::g::Fuse::Scripting::V8::Simple::Value* Call(::g::Fuse::Scripting::V8::Simple::UniqueValueVector* args);
    static Marshaller__CallbackWrapper* New1(::g::Fuse::Scripting::V8::Context* context, uDelegate* callback);
};
// }

}}}} // ::g::Fuse::Scripting::V8
