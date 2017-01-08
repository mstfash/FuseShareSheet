// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Observable;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class Observable.Operation :1635
// {
struct Observable__Operation_type : uType
{
    void(*fp_OnPerform)(::g::Fuse::Scripting::Observable__Operation*);
    void(*fp_SendMessage)(::g::Fuse::Scripting::Observable__Operation*, ::g::Fuse::Scripting::Observable__Subscription*);
    void(*fp_Unsubscribe)(::g::Fuse::Scripting::Observable__Operation*);
};

Observable__Operation_type* Observable__Operation_typeof();
void Observable__Operation__ctor__fn(Observable__Operation* __this, ::g::Fuse::Scripting::Observable* observable);
void Observable__Operation__get_Observable_fn(Observable__Operation* __this, ::g::Fuse::Scripting::Observable** __retval);
void Observable__Operation__Perform_fn(Observable__Operation* __this);
void Observable__Operation__Unsubscribe_fn(Observable__Operation* __this);

struct Observable__Operation : uObject
{
    bool _isPerformed;
    uStrong< ::g::Fuse::Scripting::Observable*> _observable;

    void ctor_(::g::Fuse::Scripting::Observable* observable);
    ::g::Fuse::Scripting::Observable* Observable();
    void OnPerform() { (((Observable__Operation_type*)__type)->fp_OnPerform)(this); }
    void Perform();
    void SendMessage(::g::Fuse::Scripting::Observable__Subscription* sub) { (((Observable__Operation_type*)__type)->fp_SendMessage)(this, sub); }
    void Unsubscribe() { (((Observable__Operation_type*)__type)->fp_Unsubscribe)(this); }
    static void Unsubscribe(Observable__Operation* __this) { Observable__Operation__Unsubscribe_fn(__this); }
};
// }

}}} // ::g::Fuse::Scripting
