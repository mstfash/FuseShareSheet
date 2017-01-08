// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/runtime/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct LazyProperty;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct LazyPropertyStorage;}}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class LazyProperty<T> :395
// {
::g::Uno::UX::Property1_type* LazyProperty_typeof();
void LazyProperty__ctor_2_fn(LazyProperty* __this, uDelegate* storageFactory, uString* name);
void LazyProperty__Get_fn(LazyProperty* __this, uTRef __retval);
void LazyProperty__New1_fn(uType* __type, uDelegate* storageFactory, uString* name, LazyProperty** __retval);
void LazyProperty__get_Object_fn(LazyProperty* __this, ::g::Uno::UX::PropertyObject** __retval);
void LazyProperty__Set_fn(LazyProperty* __this, void* value, uObject* origin);
void LazyProperty__get_Storage_fn(LazyProperty* __this, ::g::Outracks::Simulator::Runtime::LazyPropertyStorage** __retval);
void LazyProperty__get_SupportsOriginSetter_fn(LazyProperty* __this, bool* __retval);

struct LazyProperty : ::g::Uno::UX::Property1
{
    uStrong< ::g::Outracks::Simulator::Runtime::LazyPropertyStorage*> _storage;
    uStrong<uDelegate*> _storageFactory;

    void ctor_2(uDelegate* storageFactory, uString* name);
    ::g::Outracks::Simulator::Runtime::LazyPropertyStorage* Storage();
    static LazyProperty* New1(uType* __type, uDelegate* storageFactory, uString* name);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
