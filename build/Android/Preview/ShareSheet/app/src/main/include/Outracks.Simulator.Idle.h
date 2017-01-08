// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Connected.h>
namespace g{namespace Fuse{struct Diagnostic;}}
namespace g{namespace Outracks{namespace Simulator{struct Idle;}}}
namespace g{namespace Outracks{namespace Simulator{struct State;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class Idle :431
// {
::g::Outracks::Simulator::Connected_type* Idle_typeof();
void Idle__ctor_2_fn(Idle* __this, uObject* client);
void Idle__New1_fn(uObject* client, Idle** __retval);
void Idle__OnDiagnosticReported_fn(Idle* __this, ::g::Fuse::Diagnostic* d);
void Idle__OnEnterState_fn(Idle* __this, ::g::Outracks::Simulator::State** __retval);
void Idle__OnFaulted_fn(Idle* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval);
void Idle__SendDebugLog_fn(Idle* __this, uString* text, int* type);

struct Idle : ::g::Outracks::Simulator::Connected
{
    void ctor_2(uObject* client);
    void OnDiagnosticReported(::g::Fuse::Diagnostic* d);
    void SendDebugLog(uString* text, int type);
    static Idle* New1(uObject* client);
};
// }

}}} // ::g::Outracks::Simulator
