// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/reactive/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
namespace g{namespace Fuse{namespace Reactive{struct SnapshotPropertyBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class SnapshotPropertyBinding :150
// {
::g::Fuse::Binding_type* SnapshotPropertyBinding_typeof();
void SnapshotPropertyBinding__ctor_1_fn(SnapshotPropertyBinding* __this, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source);
void SnapshotPropertyBinding__New1_fn(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source, SnapshotPropertyBinding** __retval);
void SnapshotPropertyBinding__OnRooted_fn(SnapshotPropertyBinding* __this);
void SnapshotPropertyBinding__get_Source_fn(SnapshotPropertyBinding* __this, ::g::Uno::UX::Property** __retval);
void SnapshotPropertyBinding__set_Source_fn(SnapshotPropertyBinding* __this, ::g::Uno::UX::Property* value);
void SnapshotPropertyBinding__get_Target_fn(SnapshotPropertyBinding* __this, ::g::Uno::UX::Property** __retval);
void SnapshotPropertyBinding__set_Target_fn(SnapshotPropertyBinding* __this, ::g::Uno::UX::Property* value);

struct SnapshotPropertyBinding : ::g::Fuse::Binding
{
    uStrong< ::g::Uno::UX::Property*> _Source;
    uStrong< ::g::Uno::UX::Property*> _Target;

    void ctor_1(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source);
    ::g::Uno::UX::Property* Source();
    void Source(::g::Uno::UX::Property* value);
    ::g::Uno::UX::Property* Target();
    void Target(::g::Uno::UX::Property* value);
    static SnapshotPropertyBinding* New1(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source);
};
// }

}}} // ::g::Fuse::Reactive
