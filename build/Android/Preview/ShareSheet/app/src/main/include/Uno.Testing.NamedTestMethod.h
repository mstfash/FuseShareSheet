// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Testing/0.42.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Testing{struct NamedTestMethod;}}}

namespace g{
namespace Uno{
namespace Testing{

// public sealed class NamedTestMethod :899
// {
uType* NamedTestMethod_typeof();
void NamedTestMethod__ctor__fn(NamedTestMethod* __this, uDelegate* method, uString* name, bool* ignore, uString* ignoreReason);
void NamedTestMethod__New1_fn(uDelegate* method, uString* name, bool* ignore, uString* ignoreReason, NamedTestMethod** __retval);

struct NamedTestMethod : uObject
{
    bool Ignore;
    uStrong<uString*> IgnoreReason;
    uStrong<uDelegate*> Method;
    uStrong<uString*> Name;

    void ctor_(uDelegate* method, uString* name, bool ignore, uString* ignoreReason);
    static NamedTestMethod* New1(uDelegate* method, uString* name, bool ignore, uString* ignoreReason);
};
// }

}}} // ::g::Uno::Testing
