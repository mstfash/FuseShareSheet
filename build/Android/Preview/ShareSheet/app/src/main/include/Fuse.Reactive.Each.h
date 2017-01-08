// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.ITemplateObserver.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Scripting.IObserver.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Each :573
// {
::g::Fuse::Reactive::Instantiator_type* Each_typeof();
void Each__ctor_5_fn(Each* __this);
void Each__ctor_6_fn(Each* __this, uObject* templates);
void Each__get_Count1_fn(Each* __this, int* __retval);
void Each__set_Count1_fn(Each* __this, int* value);
void Each__GetEach_fn(::g::Fuse::Visual* container, Each** __retval);
void Each__GetItems_fn(::g::Fuse::Visual* container, uObject** __retval);
void Each__GetMatchKey1_fn(::g::Fuse::Visual* container, uString** __retval);
void Each__get_Items_fn(Each* __this, uObject** __retval);
void Each__set_Items_fn(Each* __this, uObject* value);
void Each__get_Limit1_fn(Each* __this, int* __retval);
void Each__set_Limit1_fn(Each* __this, int* value);
void Each__New4_fn(Each** __retval);
void Each__New5_fn(uObject* templates, Each** __retval);
void Each__get_Offset1_fn(Each* __this, int* __retval);
void Each__set_Offset1_fn(Each* __this, int* value);
void Each__SetItems_fn(::g::Fuse::Visual* container, uObject* items);
void Each__SetMatchKey_fn(::g::Fuse::Visual* container, uString* key);

struct Each : ::g::Fuse::Reactive::Instantiator
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _eachHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _eachHandle() { return Each_typeof()->Init(), _eachHandle_; }

    void ctor_5();
    void ctor_6(uObject* templates);
    int Count1();
    void Count1(int value);
    uObject* Items();
    void Items(uObject* value);
    int Limit1();
    void Limit1(int value);
    int Offset1();
    void Offset1(int value);
    static Each* GetEach(::g::Fuse::Visual* container);
    static uObject* GetItems(::g::Fuse::Visual* container);
    static uString* GetMatchKey1(::g::Fuse::Visual* container);
    static Each* New4();
    static Each* New5(uObject* templates);
    static void SetItems(::g::Fuse::Visual* container, uObject* items);
    static void SetMatchKey(::g::Fuse::Visual* container, uString* key);
};
// }

}}} // ::g::Fuse::Reactive
