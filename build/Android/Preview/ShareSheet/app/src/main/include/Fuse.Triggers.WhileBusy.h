// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.IBusyHandler.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileBusy;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public class WhileBusy :3102
// {
struct WhileBusy_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Fuse::Triggers::IBusyHandler interface5;
};

WhileBusy_type* WhileBusy_typeof();
void WhileBusy__ctor_5_fn(WhileBusy* __this);
void WhileBusy__get_Activity_fn(WhileBusy* __this, int* __retval);
void WhileBusy__set_Activity_fn(WhileBusy* __this, int* value);
void WhileBusy__FuseTriggersIBusyHandlerget_BusyActivityHandled_fn(WhileBusy* __this, int* __retval);
void WhileBusy__get_IsHandled_fn(WhileBusy* __this, bool* __retval);
void WhileBusy__set_IsHandled_fn(WhileBusy* __this, bool* value);
void WhileBusy__get_Match_fn(WhileBusy* __this, int* __retval);
void WhileBusy__set_Match_fn(WhileBusy* __this, int* value);
void WhileBusy__New2_fn(WhileBusy** __retval);
void WhileBusy__OnRooted_fn(WhileBusy* __this);
void WhileBusy__OnUnrooted_fn(WhileBusy* __this);
void WhileBusy__Update_fn(WhileBusy* __this);

struct WhileBusy : ::g::Fuse::Triggers::WhileTrigger
{
    int _activity;
    int _match;
    bool _IsHandled;

    void ctor_5();
    int Activity();
    void Activity(int value);
    bool IsHandled();
    void IsHandled(bool value);
    int Match();
    void Match(int value);
    void Update();
    static WhileBusy* New2();
};
// }

}}} // ::g::Fuse::Triggers
