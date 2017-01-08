// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.ScriptMember.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class ScriptMethod :2134
// {
struct ScriptMethod_type : uType
{
    void(*fp_Call)(::g::Fuse::Scripting::ScriptMethod*, ::g::Fuse::Scripting::Context*, uObject*, uArray*, uObject**);
};

ScriptMethod_type* ScriptMethod_typeof();
void ScriptMethod__ctor_1_fn(ScriptMethod* __this, uString* name, int* thread);

struct ScriptMethod : ::g::Fuse::Scripting::ScriptMember
{
    int Thread;

    void ctor_1(uString* name, int thread);
    uObject* Call(::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args) { uObject* __retval; return (((ScriptMethod_type*)__type)->fp_Call)(this, c, obj, args, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
