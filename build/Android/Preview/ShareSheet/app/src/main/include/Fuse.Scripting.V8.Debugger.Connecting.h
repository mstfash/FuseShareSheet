// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Debugger.State.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Debugger;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Debugger__Connecting;}}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// private sealed class Debugger.Connecting :464
// {
struct Debugger__Connecting_type : uType
{
    ::g::Fuse::Scripting::V8::Debugger__State interface0;
};

Debugger__Connecting_type* Debugger__Connecting_typeof();
void Debugger__Connecting__ctor__fn(Debugger__Connecting* __this, ::g::Fuse::Scripting::V8::Debugger* parent);
void Debugger__Connecting__Dispose_fn(Debugger__Connecting* __this);
void Debugger__Connecting__New1_fn(::g::Fuse::Scripting::V8::Debugger* parent, Debugger__Connecting** __retval);
void Debugger__Connecting__Run_fn(Debugger__Connecting* __this, uObject** __retval);

struct Debugger__Connecting : uObject
{
    uStrong< ::g::Uno::Net::Sockets::Socket*> _listenSocket;
    uStrong< ::g::Fuse::Scripting::V8::Debugger*> _parent;

    void ctor_(::g::Fuse::Scripting::V8::Debugger* parent);
    void Dispose();
    uObject* Run();
    static Debugger__Connecting* New1(::g::Fuse::Scripting::V8::Debugger* parent);
};
// }

}}}} // ::g::Fuse::Scripting::V8
