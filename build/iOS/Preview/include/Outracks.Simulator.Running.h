// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Connected.h>
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct Reify;}}}}
namespace g{namespace Outracks{namespace Simulator{struct Running;}}}
namespace g{namespace Outracks{namespace Simulator{struct State;}}}
namespace g{namespace Outracks{namespace Simulator{struct UserAppState;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class Running :528
// {
::g::Outracks::Simulator::Connected_type* Running_typeof();
void Running__ctor_2_fn(Running* __this, uObject* client, ::g::Outracks::Simulator::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::Reify* runningReify);
void Running__GetTag_fn(::g::Fuse::Node* node, uString** __retval);
void Running__New1_fn(uObject* client, ::g::Outracks::Simulator::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::Reify* runningReify, Running** __retval);
void Running__OnEnterState_fn(Running* __this, ::g::Outracks::Simulator::State** __retval);
void Running__OnFaulted_fn(Running* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval);
void Running__OnLeaveState_fn(Running* __this);
void Running__OnPointerPressed_fn(Running* __this, ::g::Fuse::Input::PointerPressedArgs* args, ::g::Outracks::Simulator::State** __retval);
void Running__OnUpdate_fn(Running* __this, ::g::Outracks::Simulator::State** __retval);
void Running__QueryDensity_fn(float* __retval);

struct Running : ::g::Outracks::Simulator::Connected
{
    uStrong< ::g::Outracks::Simulator::Protocol::Reify*> _runningReify;
    uStrong< ::g::Outracks::Simulator::UserAppState*> _userApp;
    float _zoomWhenRooted;

    void ctor_2(uObject* client, ::g::Outracks::Simulator::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::Reify* runningReify);
    static uString* GetTag(::g::Fuse::Node* node);
    static Running* New1(uObject* client, ::g::Outracks::Simulator::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::Reify* runningReify);
    static float QueryDensity();
};
// }

}}} // ::g::Outracks::Simulator
