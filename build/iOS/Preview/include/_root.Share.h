// This file was generated based on /Users/mostafa/Desktop/ShareSheet/Share.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{struct Share;}

namespace g{

// public sealed class Share :11
// {
::g::Fuse::Scripting::NativeModule_type* Share_typeof();
void Share__ctor_2_fn(Share* __this);
void Share__New2_fn(Share** __retval);
void Share__SendIntent_fn();
void Share__SendIntent1_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);

struct Share : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<Share*> _instance_;
    static uSStrong<Share*>& _instance() { return _instance_; }

    void ctor_2();
    static Share* New2();
    static void SendIntent();
    static uObject* SendIntent1(::g::Fuse::Scripting::Context* c, uArray* args);
};
// }

} // ::g
