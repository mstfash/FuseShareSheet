// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Observable.Operation.h>
namespace g{namespace Fuse{namespace Scripting{struct Observable;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Add;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class Observable.Add :1795
// {
::g::Fuse::Scripting::Observable__Operation_type* Observable__Add_typeof();
void Observable__Add__ctor_1_fn(Observable__Add* __this, ::g::Fuse::Scripting::Observable* obs, uObject* value);
void Observable__Add__New1_fn(::g::Fuse::Scripting::Observable* obs, uObject* value, Observable__Add** __retval);
void Observable__Add__OnPerform_fn(Observable__Add* __this);
void Observable__Add__SendMessage_fn(Observable__Add* __this, ::g::Fuse::Scripting::Observable__Subscription* sub);

struct Observable__Add : ::g::Fuse::Scripting::Observable__Operation
{
    uStrong<uObject*> _value;

    void ctor_1(::g::Fuse::Scripting::Observable* obs, uObject* value);
    static Observable__Add* New1(::g::Fuse::Scripting::Observable* obs, uObject* value);
};
// }

}}} // ::g::Fuse::Scripting
