// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.INameListener.h>
#include <Fuse.Reactive.WriteDataBinding-1.h>
#include <Fuse.Scripting.IObserver.h>
#include <Uno.Object.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct WriteClearDataBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class WriteClearDataBinding<T> :432
// {
::g::Fuse::Reactive::DataBinding_type* WriteClearDataBinding_typeof();
void WriteClearDataBinding__ctor_4_fn(WriteClearDataBinding* __this, ::g::Uno::UX::Property1* target, uString* key);
void WriteClearDataBinding__get_Clear_fn(WriteClearDataBinding* __this, bool* __retval);
void WriteClearDataBinding__New3_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, WriteClearDataBinding** __retval);

struct WriteClearDataBinding : ::g::Fuse::Reactive::WriteDataBinding
{
    void ctor_4(::g::Uno::UX::Property1* target, uString* key);
    static WriteClearDataBinding* New3(uType* __type, ::g::Uno::UX::Property1* target, uString* key);
};
// }

}}} // ::g::Fuse::Reactive
