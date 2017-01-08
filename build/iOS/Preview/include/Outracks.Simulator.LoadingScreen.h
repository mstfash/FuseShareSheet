// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct FakeApp;}}}
namespace g{namespace Outracks{namespace Simulator{struct LoadingScreen;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class LoadingScreen :1228
// {
uType* LoadingScreen_typeof();
void LoadingScreen__ctor__fn(LoadingScreen* __this);
void LoadingScreen__New1_fn(LoadingScreen** __retval);
void LoadingScreen__Show_fn(::g::Outracks::Simulator::FakeApp* app, uString* header, uString* message);

struct LoadingScreen : uObject
{
    void ctor_();
    static LoadingScreen* New1();
    static void Show(::g::Outracks::Simulator::FakeApp* app, uString* header, uString* message);
};
// }

}}} // ::g::Outracks::Simulator
