// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IObserver.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Reactive{struct WhileCount;}}}
namespace g{namespace Fuse{namespace Scripting{struct ListMirror;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public class WhileCount :2336
// {
struct WhileCount_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Fuse::Scripting::IObserver interface5;
};

WhileCount_type* WhileCount_typeof();
void WhileCount__ctor_4_fn(WhileCount* __this);
void WhileCount__Assess_fn(WhileCount* __this, int* count);
void WhileCount__get_EqualTo_fn(WhileCount* __this, int* __retval);
void WhileCount__set_EqualTo_fn(WhileCount* __this, int* value);
void WhileCount__FuseScriptingIObserverOnAdd_fn(WhileCount* __this, uObject* addedValue);
void WhileCount__FuseScriptingIObserverOnClear_fn(WhileCount* __this);
void WhileCount__FuseScriptingIObserverOnFailed_fn(WhileCount* __this, uString* message);
void WhileCount__FuseScriptingIObserverOnInsertAt_fn(WhileCount* __this, int* index, uObject* value);
void WhileCount__FuseScriptingIObserverOnNewAll_fn(WhileCount* __this, ::g::Fuse::Scripting::ListMirror* values);
void WhileCount__FuseScriptingIObserverOnNewAt_fn(WhileCount* __this, int* index, uObject* value);
void WhileCount__FuseScriptingIObserverOnRemoveAt_fn(WhileCount* __this, int* index);
void WhileCount__FuseScriptingIObserverOnSet_fn(WhileCount* __this, uObject* newValue);
void WhileCount__get_GreaterThan_fn(WhileCount* __this, int* __retval);
void WhileCount__set_GreaterThan_fn(WhileCount* __this, int* value);
void WhileCount__get_Items_fn(WhileCount* __this, uObject** __retval);
void WhileCount__set_Items_fn(WhileCount* __this, uObject* value);
void WhileCount__get_LessThan_fn(WhileCount* __this, int* __retval);
void WhileCount__set_LessThan_fn(WhileCount* __this, int* value);
void WhileCount__New2_fn(WhileCount** __retval);
void WhileCount__OnItemsChanged_fn(WhileCount* __this);
void WhileCount__OnRooted_fn(WhileCount* __this);
void WhileCount__OnUnrooted_fn(WhileCount* __this);
void WhileCount__Reassess_fn(WhileCount* __this);

struct WhileCount : ::g::Fuse::Triggers::Trigger
{
    bool _equalToMode;
    int _equalToValue;
    bool _greaterThanMode;
    int _greaterThanValue;
    bool _isRooting;
    uStrong<uObject*> _items;
    bool _lessThanMode;
    int _lessThanValue;
    int _oldCount;
    uStrong<uObject*> _subscription;

    void ctor_4();
    void Assess(int count);
    int EqualTo();
    void EqualTo(int value);
    int GreaterThan();
    void GreaterThan(int value);
    uObject* Items();
    void Items(uObject* value);
    int LessThan();
    void LessThan(int value);
    void OnItemsChanged();
    void Reassess();
    static WhileCount* New2();
};
// }

}}} // ::g::Fuse::Reactive
