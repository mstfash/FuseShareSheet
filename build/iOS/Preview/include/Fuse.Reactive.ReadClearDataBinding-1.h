// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.INameListener.h>
#include <Fuse.Reactive.ReadDataBinding-1.h>
#include <Fuse.Scripting.IObserver.h>
#include <Uno.Object.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct ReadClearDataBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class ReadClearDataBinding<T> :414
// {
::g::Fuse::Reactive::DataBinding_type* ReadClearDataBinding_typeof();
void ReadClearDataBinding__ctor_4_fn(ReadClearDataBinding* __this, ::g::Uno::UX::Property1* target, uString* key);
void ReadClearDataBinding__get_Clear_fn(ReadClearDataBinding* __this, bool* __retval);
void ReadClearDataBinding__New3_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, ReadClearDataBinding** __retval);

struct ReadClearDataBinding : ::g::Fuse::Reactive::ReadDataBinding
{
    void ctor_4(::g::Uno::UX::Property1* target, uString* key);
    static ReadClearDataBinding* New3(uType* __type, ::g::Uno::UX::Property1* target, uString* key);
};
// }

}}} // ::g::Fuse::Reactive
