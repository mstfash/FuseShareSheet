// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct HitTestResult;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Outracks{namespace Simulator{struct EnumerableHitTestExtension__CollectHitNodesClosure;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// private sealed class EnumerableHitTestExtension.CollectHitNodesClosure :2068
// {
uType* EnumerableHitTestExtension__CollectHitNodesClosure_typeof();
void EnumerableHitTestExtension__CollectHitNodesClosure__ctor__fn(EnumerableHitTestExtension__CollectHitNodesClosure* __this, ::g::Uno::Collections::List* nodes);
void EnumerableHitTestExtension__CollectHitNodesClosure__HitTestCallback_fn(EnumerableHitTestExtension__CollectHitNodesClosure* __this, ::g::Fuse::HitTestResult* result);
void EnumerableHitTestExtension__CollectHitNodesClosure__New1_fn(::g::Uno::Collections::List* nodes, EnumerableHitTestExtension__CollectHitNodesClosure** __retval);

struct EnumerableHitTestExtension__CollectHitNodesClosure : uObject
{
    uStrong< ::g::Uno::Collections::List*> _nodes;

    void ctor_(::g::Uno::Collections::List* nodes);
    void HitTestCallback(::g::Fuse::HitTestResult* result);
    static EnumerableHitTestExtension__CollectHitNodesClosure* New1(::g::Uno::Collections::List* nodes);
};
// }

}}} // ::g::Outracks::Simulator
