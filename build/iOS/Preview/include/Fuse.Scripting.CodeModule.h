// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.ScriptModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct CodeModule;}}}
namespace g{namespace Uno{namespace IO{struct Bundle;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class CodeModule :338
// {
::g::Fuse::Scripting::ScriptModule_type* CodeModule_typeof();
void CodeModule__ctor_2_fn(CodeModule* __this, ::g::Uno::IO::Bundle* bundle, uString* fileName, uString* code, int* lineNumberOffset);
void CodeModule__New2_fn(::g::Uno::IO::Bundle* bundle, uString* fileName, uString* code, int* lineNumberOffset, CodeModule** __retval);

struct CodeModule : ::g::Fuse::Scripting::ScriptModule
{
    void ctor_2(::g::Uno::IO::Bundle* bundle, uString* fileName, uString* code, int lineNumberOffset);
    static CodeModule* New2(::g::Uno::IO::Bundle* bundle, uString* fileName, uString* code, int lineNumberOffset);
};
// }

}}} // ::g::Fuse::Scripting
