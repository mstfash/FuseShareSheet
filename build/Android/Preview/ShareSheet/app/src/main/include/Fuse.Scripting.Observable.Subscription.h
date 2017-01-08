// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Observable;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class Observable.Subscription :1479
// {
struct Observable__Subscription_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Observable__Subscription_type* Observable__Subscription_typeof();
void Observable__Subscription__ctor__fn(Observable__Subscription* __this, ::g::Fuse::Scripting::Observable* om, uObject* obs);
void Observable__Subscription__ClearExclusive_fn(Observable__Subscription* __this);
void Observable__Subscription__Dispose_fn(Observable__Subscription* __this);
void Observable__Subscription__New1_fn(::g::Fuse::Scripting::Observable* om, uObject* obs, Observable__Subscription** __retval);
void Observable__Subscription__get_Observer_fn(Observable__Subscription* __this, uObject** __retval);
void Observable__Subscription__get_Origin_fn(Observable__Subscription* __this, int* __retval);
void Observable__Subscription__ReplaceAllExclusive_fn(Observable__Subscription* __this, uType* __type, uArray* newValues);
void Observable__Subscription__SetExclusive_fn(Observable__Subscription* __this, uObject* newValue);

struct Observable__Subscription : uObject
{
    static int _counter_;
    static int& _counter() { return Observable__Subscription_typeof()->Init(), _counter_; }
    uStrong<uObject*> _obs;
    uStrong< ::g::Fuse::Scripting::Observable*> _om;
    int _origin;

    void ctor_(::g::Fuse::Scripting::Observable* om, uObject* obs);
    void ClearExclusive();
    void Dispose();
    uObject* Observer();
    int Origin();
    void ReplaceAllExclusive(uType* __type, uArray* newValues);
    void SetExclusive(uObject* newValue);
    static Observable__Subscription* New1(::g::Fuse::Scripting::Observable* om, uObject* obs);
};
// }

}}} // ::g::Fuse::Scripting
