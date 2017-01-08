// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct MessageFromClient;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct MessageToClient;}}}}
namespace g{namespace Outracks{namespace Simulator{struct ConcurrentQueue;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public abstract interface ISimulatorClient :845
// {
uInterfaceType* ISimulatorClient_typeof();

struct ISimulatorClient
{
    void(*fp_get_IncommingMessages)(uObject*, ::g::Outracks::Simulator::ConcurrentQueue**);
    void(*fp_get_IsOnline)(uObject*, bool*);
    void(*fp_Send)(uObject*, ::g::Outracks::Simulator::Protocol::MessageFromClient*);
    static ::g::Outracks::Simulator::ConcurrentQueue* IncommingMessages(const uInterface& __this) { ::g::Outracks::Simulator::ConcurrentQueue* __retval; return __this.VTable<ISimulatorClient>()->fp_get_IncommingMessages(__this, &__retval), __retval; }
    static bool IsOnline(const uInterface& __this) { bool __retval; return __this.VTable<ISimulatorClient>()->fp_get_IsOnline(__this, &__retval), __retval; }
    static void Send(const uInterface& __this, ::g::Outracks::Simulator::Protocol::MessageFromClient* message) { __this.VTable<ISimulatorClient>()->fp_Send(__this, message); }
};
// }

}}} // ::g::Outracks::Simulator
