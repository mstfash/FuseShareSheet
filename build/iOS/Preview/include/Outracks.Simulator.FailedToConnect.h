// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.ShowingModalDialog.h>
namespace g{namespace Outracks{namespace Simulator{struct FailedToConnect;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class FailedToConnect :677
// {
::g::Outracks::Simulator::State_type* FailedToConnect_typeof();
void FailedToConnect__ctor_2_fn(FailedToConnect* __this, ::g::Uno::Exception* exception);
void FailedToConnect__New2_fn(::g::Uno::Exception* exception, FailedToConnect** __retval);

struct FailedToConnect : ::g::Outracks::Simulator::ShowingModalDialog
{
    void ctor_2(::g::Uno::Exception* exception);
    static FailedToConnect* New2(::g::Uno::Exception* exception);
};
// }

}}} // ::g::Outracks::Simulator
