// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/reactive/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.PropertyBinding.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct WritePropertyBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class WritePropertyBinding :132
// {
::g::Fuse::Reactive::PropertyBinding_type* WritePropertyBinding_typeof();
void WritePropertyBinding__ctor_3_fn(WritePropertyBinding* __this, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source);
void WritePropertyBinding__New3_fn(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source, WritePropertyBinding** __retval);

struct WritePropertyBinding : ::g::Fuse::Reactive::PropertyBinding
{
    void ctor_3(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source);
    static WritePropertyBinding* New3(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source);
};
// }

}}} // ::g::Fuse::Reactive
