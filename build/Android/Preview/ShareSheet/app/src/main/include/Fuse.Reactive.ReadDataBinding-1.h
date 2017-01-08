// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.INameListener.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Scripting.IObserver.h>
#include <Uno.Object.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct ReadDataBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public class ReadDataBinding<T> :405
// {
::g::Fuse::Reactive::DataBinding_type* ReadDataBinding_typeof();
void ReadDataBinding__ctor_3_fn(ReadDataBinding* __this, ::g::Uno::UX::Property1* target, uString* key);
void ReadDataBinding__New2_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, ReadDataBinding** __retval);
void ReadDataBinding__get_Write_fn(ReadDataBinding* __this, bool* __retval);

struct ReadDataBinding : ::g::Fuse::Reactive::DataBinding
{
    void ctor_3(::g::Uno::UX::Property1* target, uString* key);
    static ReadDataBinding* New2(uType* __type, ::g::Uno::UX::Property1* target, uString* key);
};
// }

}}} // ::g::Fuse::Reactive
