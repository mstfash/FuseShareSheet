// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Observable.Operation.h>
namespace g{namespace Fuse{namespace Scripting{struct ArrayMirror;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__InsertAll;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class Observable.InsertAll :1892
// {
::g::Fuse::Scripting::Observable__Operation_type* Observable__InsertAll_typeof();
void Observable__InsertAll__ctor_1_fn(Observable__InsertAll* __this, ::g::Fuse::Scripting::Observable* obs, int* index, ::g::Fuse::Scripting::ArrayMirror* items);
void Observable__InsertAll__New1_fn(::g::Fuse::Scripting::Observable* obs, int* index, ::g::Fuse::Scripting::ArrayMirror* items, Observable__InsertAll** __retval);
void Observable__InsertAll__OnPerform_fn(Observable__InsertAll* __this);
void Observable__InsertAll__SendMessage_fn(Observable__InsertAll* __this, ::g::Fuse::Scripting::Observable__Subscription* sub);
void Observable__InsertAll__Unsubscribe_fn(Observable__InsertAll* __this);

struct Observable__InsertAll : ::g::Fuse::Scripting::Observable__Operation
{
    int _index;
    uStrong< ::g::Fuse::Scripting::ArrayMirror*> _items;

    void ctor_1(::g::Fuse::Scripting::Observable* obs, int index, ::g::Fuse::Scripting::ArrayMirror* items);
    static Observable__InsertAll* New1(::g::Fuse::Scripting::Observable* obs, int index, ::g::Fuse::Scripting::ArrayMirror* items);
};
// }

}}} // ::g::Fuse::Scripting
