// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/0.42.4/triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.ScrollingAnimation.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Triggers{struct PullToReload;}}}
namespace g{namespace Fuse{namespace Triggers{struct State;}}}
namespace g{namespace Fuse{namespace Triggers{struct StateGroup;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public partial sealed class PullToReload :64
// {
::g::Fuse::Triggers::ScrollingAnimation_type* PullToReload_typeof();
void PullToReload__ctor_5_fn(PullToReload* __this);
void PullToReload__Ensure_fn(PullToReload* __this, ::g::Fuse::Triggers::State* s);
void PullToReload__EnsureStates_fn(PullToReload* __this);
void PullToReload__InitializeUX_fn(PullToReload* __this);
void PullToReload__get_IsLoading_fn(PullToReload* __this, bool* __retval);
void PullToReload__set_IsLoading_fn(PullToReload* __this, bool* value);
void PullToReload__IsState_fn(PullToReload* __this, ::g::Fuse::Triggers::State* s, bool* __retval);
void PullToReload__get_Loading_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval);
void PullToReload__set_Loading_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value);
void PullToReload__New3_fn(PullToReload** __retval);
void PullToReload__OnRooted_fn(PullToReload* __this);
void PullToReload__OnUnrooted_fn(PullToReload* __this);
void PullToReload__get_PulledPastThreshold_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval);
void PullToReload__set_PulledPastThreshold_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value);
void PullToReload__get_Pulling_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval);
void PullToReload__set_Pulling_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value);
void PullToReload__ReachThreshold_fn(PullToReload* __this);
void PullToReload__ReleasePull_fn(PullToReload* __this);
void PullToReload__add_ReloadHandler_fn(PullToReload* __this, uDelegate* value);
void PullToReload__remove_ReloadHandler_fn(PullToReload* __this, uDelegate* value);
void PullToReload__get_Rest_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval);
void PullToReload__set_Rest_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value);
void PullToReload__StartPull_fn(PullToReload* __this);

struct PullToReload : ::g::Fuse::Triggers::ScrollingAnimation
{
    bool _internLoading;
    bool _isLoading;
    uStrong< ::g::Fuse::Triggers::State*> _loading;
    uStrong< ::g::Fuse::Triggers::State*> _pulledPastThreshold;
    uStrong< ::g::Fuse::Triggers::State*> _pulling;
    uStrong< ::g::Fuse::Triggers::State*> _rest;
    uStrong< ::g::Fuse::Triggers::StateGroup*> StateGroup;
    bool threshold;
    uStrong<uDelegate*> ReloadHandler1;

    void ctor_5();
    void Ensure(::g::Fuse::Triggers::State* s);
    void EnsureStates();
    void InitializeUX();
    bool IsLoading();
    void IsLoading(bool value);
    bool IsState(::g::Fuse::Triggers::State* s);
    ::g::Fuse::Triggers::State* Loading();
    void Loading(::g::Fuse::Triggers::State* value);
    ::g::Fuse::Triggers::State* PulledPastThreshold();
    void PulledPastThreshold(::g::Fuse::Triggers::State* value);
    ::g::Fuse::Triggers::State* Pulling();
    void Pulling(::g::Fuse::Triggers::State* value);
    void ReachThreshold();
    void ReleasePull();
    void add_ReloadHandler(uDelegate* value);
    void remove_ReloadHandler(uDelegate* value);
    ::g::Fuse::Triggers::State* Rest();
    void Rest(::g::Fuse::Triggers::State* value);
    void StartPull();
    static PullToReload* New3();
};
// }

}}} // ::g::Fuse::Triggers
