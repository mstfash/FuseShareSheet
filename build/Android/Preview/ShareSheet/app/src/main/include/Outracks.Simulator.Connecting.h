// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.State.h>
namespace g{namespace Outracks{namespace Simulator{struct Connecting;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal abstract class Connecting :282
// {
::g::Outracks::Simulator::State_type* Connecting_typeof();
void Connecting__ctor_1_fn(Connecting* __this);
void Connecting__OnException_fn(Connecting* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval);

struct Connecting : ::g::Outracks::Simulator::State
{
    void ctor_1();
};
// }

}}} // ::g::Outracks::Simulator
