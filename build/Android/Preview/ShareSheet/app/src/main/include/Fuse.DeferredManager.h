// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct DeferredManager;}}
namespace g{namespace Uno{namespace Collections{struct PriorityQueue;}}}

namespace g{
namespace Fuse{

// internal static class DeferredManager :425
// {
uClassType* DeferredManager_typeof();
void DeferredManager__AddPending_fn(uObject* d, float* priority);
void DeferredManager__CheckUpdate_fn();
void DeferredManager__get_HasPending_fn(bool* __retval);
void DeferredManager__OnUpdate_fn();
void DeferredManager__RemovePending_fn(uObject* d);

struct DeferredManager : uObject
{
    static uSStrong< ::g::Uno::Collections::PriorityQueue*> _pending_;
    static uSStrong< ::g::Uno::Collections::PriorityQueue*>& _pending() { return DeferredManager_typeof()->Init(), _pending_; }
    static int _startFrame_;
    static int& _startFrame() { return DeferredManager_typeof()->Init(), _startFrame_; }
    static bool _update_;
    static bool& _update() { return DeferredManager_typeof()->Init(), _update_; }
    static double TimeLimit_;
    static double& TimeLimit() { return DeferredManager_typeof()->Init(), TimeLimit_; }

    static void AddPending(uObject* d, float priority);
    static void CheckUpdate();
    static void OnUpdate();
    static void RemovePending(uObject* d);
    static bool HasPending();
};
// }

}} // ::g::Fuse
