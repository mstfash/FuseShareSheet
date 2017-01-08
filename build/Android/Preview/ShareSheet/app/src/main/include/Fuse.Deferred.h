// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.IDeferred.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct BusyTask;}}}
namespace g{namespace Fuse{struct Deferred;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Fuse{

// public sealed class Deferred :527
// {
struct Deferred_type : ::g::Fuse::Node_type
{
    ::g::Fuse::IDeferred interface4;
};

Deferred_type* Deferred_typeof();
void Deferred__ctor_3_fn(Deferred* __this);
void Deferred__FuseIDeferredPerform_fn(Deferred* __this);
void Deferred__GetLastNodeInGroup_fn(Deferred* __this, ::g::Fuse::Node** __retval);
void Deferred__New2_fn(Deferred** __retval);
void Deferred__OnRooted_fn(Deferred* __this);
void Deferred__OnUnrooted_fn(Deferred* __this);
void Deferred__get_Priority_fn(Deferred* __this, float* __retval);
void Deferred__set_Priority_fn(Deferred* __this, float* value);
void Deferred__get_Templates_fn(Deferred* __this, uObject** __retval);

struct Deferred : ::g::Fuse::Behavior
{
    uStrong< ::g::Uno::Collections::List*> _added;
    uStrong< ::g::Fuse::Triggers::BusyTask*> _busyTask;
    float _priority;
    uStrong<uObject*> _templates;

    void ctor_3();
    float Priority();
    void Priority(float value);
    uObject* Templates();
    static Deferred* New2();
};
// }

}} // ::g::Fuse
