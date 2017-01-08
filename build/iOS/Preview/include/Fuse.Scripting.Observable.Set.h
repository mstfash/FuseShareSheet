// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Observable.Operation.h>
namespace g{namespace Fuse{namespace Scripting{struct Observable;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Set;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class Observable.Set :1678
// {
::g::Fuse::Scripting::Observable__Operation_type* Observable__Set_typeof();
void Observable__Set__ctor_1_fn(Observable__Set* __this, ::g::Fuse::Scripting::Observable* obs, uObject* value, int* origin);
void Observable__Set__New1_fn(::g::Fuse::Scripting::Observable* obs, uObject* value, int* origin, Observable__Set** __retval);
void Observable__Set__OnPerform_fn(Observable__Set* __this);
void Observable__Set__SendMessage_fn(Observable__Set* __this, ::g::Fuse::Scripting::Observable__Subscription* sub);
void Observable__Set__Unsubscribe_fn(Observable__Set* __this);

struct Observable__Set : ::g::Fuse::Scripting::Observable__Operation
{
    int _origin;
    uStrong<uObject*> _value;

    void ctor_1(::g::Fuse::Scripting::Observable* obs, uObject* value, int origin);
    static Observable__Set* New1(::g::Fuse::Scripting::Observable* obs, uObject* value, int origin);
};
// }

}}} // ::g::Fuse::Scripting
