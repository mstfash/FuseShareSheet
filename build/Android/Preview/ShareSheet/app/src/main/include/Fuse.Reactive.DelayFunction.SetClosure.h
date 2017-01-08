// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/reactive/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct DelayFunction__SetClosure;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}
namespace g{namespace Uno{namespace UX{struct Value;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class DelayFunction.SetClosure :253
// {
uType* DelayFunction__SetClosure_typeof();
void DelayFunction__SetClosure__ctor__fn(DelayFunction__SetClosure* __this, ::g::Uno::UX::Property* target, ::g::Uno::UX::Value* v);
void DelayFunction__SetClosure__New1_fn(::g::Uno::UX::Property* target, ::g::Uno::UX::Value* v, DelayFunction__SetClosure** __retval);
void DelayFunction__SetClosure__Run_fn(DelayFunction__SetClosure* __this);

struct DelayFunction__SetClosure : uObject
{
    uStrong< ::g::Uno::UX::Property*> _target;
    uStrong< ::g::Uno::UX::Value*> _v;

    void ctor_(::g::Uno::UX::Property* target, ::g::Uno::UX::Value* v);
    void Run();
    static DelayFunction__SetClosure* New1(::g::Uno::UX::Property* target, ::g::Uno::UX::Value* v);
};
// }

}}} // ::g::Fuse::Reactive
