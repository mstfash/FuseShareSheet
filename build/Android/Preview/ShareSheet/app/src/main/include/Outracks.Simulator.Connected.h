// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.State.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct Error;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct Execute;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct Reify;}}}}
namespace g{namespace Outracks{namespace Simulator{struct Connected;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal abstract class Connected :370
// {
struct Connected_type : ::g::Outracks::Simulator::State_type
{
    void(*fp_OnFaulted)(::g::Outracks::Simulator::Connected*, ::g::Uno::Exception*, ::g::Outracks::Simulator::State**);
};

Connected_type* Connected_typeof();
void Connected__ctor_1_fn(Connected* __this, uObject* client);
void Connected__OnConnectionError_fn(Connected* __this, ::g::Outracks::Simulator::Protocol::Error* error, ::g::Outracks::Simulator::State** __retval);
void Connected__OnEnterState_fn(Connected* __this, ::g::Outracks::Simulator::State** __retval);
void Connected__OnException_fn(Connected* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval);
void Connected__OnExecute_fn(Connected* __this, ::g::Outracks::Simulator::Protocol::Execute* args, ::g::Outracks::Simulator::State** __retval);
void Connected__OnReify_fn(Connected* __this, ::g::Outracks::Simulator::Protocol::Reify* reify, ::g::Outracks::Simulator::State** __retval);
void Connected__OnUpdate_fn(Connected* __this, ::g::Outracks::Simulator::State** __retval);

struct Connected : ::g::Outracks::Simulator::State
{
    uStrong<uObject*> Client;

    void ctor_1(uObject* client);
    ::g::Outracks::Simulator::State* OnConnectionError(::g::Outracks::Simulator::Protocol::Error* error);
    ::g::Outracks::Simulator::State* OnExecute(::g::Outracks::Simulator::Protocol::Execute* args);
    ::g::Outracks::Simulator::State* OnFaulted(::g::Uno::Exception* e) { ::g::Outracks::Simulator::State* __retval; return (((Connected_type*)__type)->fp_OnFaulted)(this, e, &__retval), __retval; }
    ::g::Outracks::Simulator::State* OnReify(::g::Outracks::Simulator::Protocol::Reify* reify);
};
// }

}}} // ::g::Outracks::Simulator
