// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Outracks{namespace Simulator{struct EnumerableHitTestExtension;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal static class EnumerableHitTestExtension :2058
// {
uClassType* EnumerableHitTestExtension_typeof();
void EnumerableHitTestExtension__HitTest2_fn(::g::Fuse::Visual* node, ::g::Uno::Float2* windowPoint, uObject** __retval);

struct EnumerableHitTestExtension : uObject
{
    static uObject* HitTest2(::g::Fuse::Visual* node, ::g::Uno::Float2 windowPoint);
};
// }

}}} // ::g::Outracks::Simulator
