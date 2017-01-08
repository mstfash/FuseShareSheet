// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.INameListener.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Scripting.IObserver.h>
#include <Uno.Object.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct ClearDataBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class ClearDataBinding<T> :396
// {
::g::Fuse::Reactive::DataBinding_type* ClearDataBinding_typeof();
void ClearDataBinding__ctor_3_fn(ClearDataBinding* __this, ::g::Uno::UX::Property1* target, uString* key);
void ClearDataBinding__get_Clear_fn(ClearDataBinding* __this, bool* __retval);
void ClearDataBinding__New2_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, ClearDataBinding** __retval);

struct ClearDataBinding : ::g::Fuse::Reactive::DataBinding
{
    void ctor_3(::g::Uno::UX::Property1* target, uString* key);
    static ClearDataBinding* New2(uType* __type, ::g::Uno::UX::Property1* target, uString* key);
};
// }

}}} // ::g::Fuse::Reactive
