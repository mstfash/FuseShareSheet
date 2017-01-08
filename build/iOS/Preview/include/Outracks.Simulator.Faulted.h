// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.ShowingModalDialog.h>
namespace g{namespace Outracks{namespace Simulator{struct DialogButton;}}}
namespace g{namespace Outracks{namespace Simulator{struct Faulted;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class Faulted :649
// {
::g::Outracks::Simulator::State_type* Faulted_typeof();
void Faulted__ctor_2_fn(Faulted* __this, bool* isOnline, ::g::Uno::Exception* exception, uArray* buttons);
void Faulted__New2_fn(bool* isOnline, ::g::Uno::Exception* exception, uArray* buttons, Faulted** __retval);

struct Faulted : ::g::Outracks::Simulator::ShowingModalDialog
{
    void ctor_2(bool isOnline, ::g::Uno::Exception* exception, uArray* buttons);
    static Faulted* New2(bool isOnline, ::g::Uno::Exception* exception, uArray* buttons);
};
// }

}}} // ::g::Outracks::Simulator
