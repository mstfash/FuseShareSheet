// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Observable.Operation.h>
namespace g{namespace Fuse{namespace Scripting{struct Observable;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__NewAt;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class Observable.NewAt :1735
// {
::g::Fuse::Scripting::Observable__Operation_type* Observable__NewAt_typeof();
void Observable__NewAt__ctor_1_fn(Observable__NewAt* __this, ::g::Fuse::Scripting::Observable* obs, int* index, uObject* newValue);
void Observable__NewAt__New1_fn(::g::Fuse::Scripting::Observable* obs, int* index, uObject* newValue, Observable__NewAt** __retval);
void Observable__NewAt__OnPerform_fn(Observable__NewAt* __this);
void Observable__NewAt__SendMessage_fn(Observable__NewAt* __this, ::g::Fuse::Scripting::Observable__Subscription* sub);
void Observable__NewAt__Unsubscribe_fn(Observable__NewAt* __this);

struct Observable__NewAt : ::g::Fuse::Scripting::Observable__Operation
{
    int _index;
    uStrong<uObject*> _value;

    void ctor_1(::g::Fuse::Scripting::Observable* obs, int index, uObject* newValue);
    static Observable__NewAt* New1(::g::Fuse::Scripting::Observable* obs, int index, uObject* newValue);
};
// }

}}} // ::g::Fuse::Scripting
