// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Physics/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Physics{struct Body;}}}
namespace g{namespace Fuse{namespace Physics{struct ForceField;}}}
namespace g{namespace Fuse{namespace Physics{struct ForceFieldEventArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Physics{

// public sealed class ForceFieldEventArgs :392
// {
uType* ForceFieldEventArgs_typeof();
void ForceFieldEventArgs__ctor_1_fn(ForceFieldEventArgs* __this, ::g::Fuse::Physics::Body* body, ::g::Fuse::Physics::ForceField* field);
void ForceFieldEventArgs__get_Body_fn(ForceFieldEventArgs* __this, ::g::Fuse::Physics::Body** __retval);
void ForceFieldEventArgs__set_Body_fn(ForceFieldEventArgs* __this, ::g::Fuse::Physics::Body* value);
void ForceFieldEventArgs__get_ForceField_fn(ForceFieldEventArgs* __this, ::g::Fuse::Physics::ForceField** __retval);
void ForceFieldEventArgs__set_ForceField_fn(ForceFieldEventArgs* __this, ::g::Fuse::Physics::ForceField* value);
void ForceFieldEventArgs__New2_fn(::g::Fuse::Physics::Body* body, ::g::Fuse::Physics::ForceField* field, ForceFieldEventArgs** __retval);
void ForceFieldEventArgs__get_Visual_fn(ForceFieldEventArgs* __this, ::g::Fuse::Visual** __retval);

struct ForceFieldEventArgs : ::g::Uno::EventArgs
{
    uStrong< ::g::Fuse::Physics::Body*> _Body;
    uStrong< ::g::Fuse::Physics::ForceField*> _ForceField;

    void ctor_1(::g::Fuse::Physics::Body* body, ::g::Fuse::Physics::ForceField* field);
    ::g::Fuse::Physics::Body* Body();
    void Body(::g::Fuse::Physics::Body* value);
    ::g::Fuse::Physics::ForceField* ForceField();
    void ForceField(::g::Fuse::Physics::ForceField* value);
    ::g::Fuse::Visual* Visual();
    static ForceFieldEventArgs* New2(::g::Fuse::Physics::Body* body, ::g::Fuse::Physics::ForceField* field);
};
// }

}}} // ::g::Fuse::Physics
