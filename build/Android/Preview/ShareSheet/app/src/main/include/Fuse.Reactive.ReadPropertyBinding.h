// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/reactive/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.PropertyBinding.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct ReadPropertyBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class ReadPropertyBinding :122
// {
::g::Fuse::Reactive::PropertyBinding_type* ReadPropertyBinding_typeof();
void ReadPropertyBinding__ctor_3_fn(ReadPropertyBinding* __this, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source);
void ReadPropertyBinding__New3_fn(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source, ReadPropertyBinding** __retval);

struct ReadPropertyBinding : ::g::Fuse::Reactive::PropertyBinding
{
    void ctor_3(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source);
    static ReadPropertyBinding* New3(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source);
};
// }

}}} // ::g::Fuse::Reactive
