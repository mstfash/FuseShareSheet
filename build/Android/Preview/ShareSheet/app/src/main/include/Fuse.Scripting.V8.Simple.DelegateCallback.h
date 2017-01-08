// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Simple.Callback.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct DelegateCallback;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct UniqueValueVector;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Value;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal sealed extern class DelegateCallback :1651
// {
::g::Fuse::Scripting::V8::Simple::Callback_type* DelegateCallback_typeof();
void DelegateCallback__ctor_3_fn(DelegateCallback* __this, uDelegate* callHandler);
void DelegateCallback__Call_fn(DelegateCallback* __this, ::g::Fuse::Scripting::V8::Simple::UniqueValueVector* args, ::g::Fuse::Scripting::V8::Simple::Value** __retval);
void DelegateCallback__New5_fn(uDelegate* callHandler, DelegateCallback** __retval);
void DelegateCallback__Release_fn(DelegateCallback* __this);
void DelegateCallback__Retain_fn(DelegateCallback* __this);

struct DelegateCallback : ::g::Fuse::Scripting::V8::Simple::Callback
{
    uStrong<uDelegate*> _callHandler;

    void ctor_3(uDelegate* callHandler);
    static DelegateCallback* New5(uDelegate* callHandler);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
