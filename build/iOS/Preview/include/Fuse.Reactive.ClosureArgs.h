// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Reactive{struct ClosureArgs;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class ClosureArgs :49
// {
struct ClosureArgs_type : uType
{
    ::g::Fuse::Scripting::IScriptEvent interface0;
};

ClosureArgs_type* ClosureArgs_typeof();
void ClosureArgs__ctor_1_fn(ClosureArgs* __this, ::g::Uno::UX::NameTable* names);
void ClosureArgs__New2_fn(::g::Uno::UX::NameTable* names, ClosureArgs** __retval);
void ClosureArgs__Serialize_fn(ClosureArgs* __this, uObject* s);

struct ClosureArgs : ::g::Uno::EventArgs
{
    uStrong< ::g::Uno::UX::NameTable*> _names;

    void ctor_1(::g::Uno::UX::NameTable* names);
    void Serialize(uObject* s);
    static ClosureArgs* New2(::g::Uno::UX::NameTable* names);
};
// }

}}} // ::g::Fuse::Reactive
