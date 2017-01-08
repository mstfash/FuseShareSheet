// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Connected.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct Reify;}}}}
namespace g{namespace Outracks{namespace Simulator{struct Reifying;}}}
namespace g{namespace Outracks{namespace Simulator{struct State;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class Reifying :500
// {
::g::Outracks::Simulator::Connected_type* Reifying_typeof();
void Reifying__ctor_2_fn(Reifying* __this, uObject* client, ::g::Outracks::Simulator::Protocol::Reify* reify);
void Reifying__New1_fn(uObject* client, ::g::Outracks::Simulator::Protocol::Reify* reify, Reifying** __retval);
void Reifying__OnEnterState_fn(Reifying* __this, ::g::Outracks::Simulator::State** __retval);
void Reifying__OnFaulted_fn(Reifying* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval);

struct Reifying : ::g::Outracks::Simulator::Connected
{
    uStrong< ::g::Outracks::Simulator::Protocol::Reify*> _reify;

    void ctor_2(uObject* client, ::g::Outracks::Simulator::Protocol::Reify* reify);
    static Reifying* New1(uObject* client, ::g::Outracks::Simulator::Protocol::Reify* reify);
};
// }

}}} // ::g::Outracks::Simulator
