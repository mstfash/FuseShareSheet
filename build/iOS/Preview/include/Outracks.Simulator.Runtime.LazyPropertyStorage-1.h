// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/runtime/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct LazyPropertyStorage;}}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{struct WeakReference;}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class LazyPropertyStorage<T> :430
// {
uType* LazyPropertyStorage_typeof();
void LazyPropertyStorage__ctor__fn(LazyPropertyStorage* __this, uObject* owner);
void LazyPropertyStorage__New1_fn(uType* __type, uObject* owner, LazyPropertyStorage** __retval);
void LazyPropertyStorage__get_Object_fn(LazyPropertyStorage* __this, ::g::Uno::UX::PropertyObject** __retval);
void LazyPropertyStorage__OnGet_fn(LazyPropertyStorage* __this, uTRef __retval);
void LazyPropertyStorage__OnSet_fn(LazyPropertyStorage* __this, void* value, uObject* origin);
void LazyPropertyStorage__get_Owner_fn(LazyPropertyStorage* __this, uObject** __retval);

struct LazyPropertyStorage : uObject
{
    uStrong< ::g::Uno::Collections::List*> _listeners;
    uStrong< ::g::Uno::WeakReference*> _owner;
    uTField _value() { return __type->Field(this, 2); }

    void ctor_(uObject* owner);
    ::g::Uno::UX::PropertyObject* Object();
    template<class T>
    T OnGet() { T __retval; return LazyPropertyStorage__OnGet_fn(this, &__retval), __retval; }
    template<class T>
    void OnSet(T value, uObject* origin) { LazyPropertyStorage__OnSet_fn(this, uConstrain(__type->T(0), value), origin); }
    uObject* Owner();
    static LazyPropertyStorage* New1(uType* __type, uObject* owner);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
