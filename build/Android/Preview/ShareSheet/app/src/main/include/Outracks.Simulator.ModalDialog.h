// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct Control;}}}
namespace g{namespace Outracks{namespace Simulator{struct FakeApp;}}}
namespace g{namespace Outracks{namespace Simulator{struct ModalDialog;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class ModalDialog :1259
// {
uType* ModalDialog_typeof();
void ModalDialog__ctor__fn(ModalDialog* __this);
void ModalDialog__New1_fn(ModalDialog** __retval);
void ModalDialog__Show_fn(::g::Outracks::Simulator::FakeApp* app, uString* header, uString* body, uString* details, uObject* buttons);
void ModalDialog__ShowPrompt_fn(::g::Outracks::Simulator::FakeApp* app, uString* header, uString* body, ::g::Fuse::Controls::Control* inputControl, uObject* buttons);

struct ModalDialog : uObject
{
    void ctor_();
    static ModalDialog* New1();
    static void Show(::g::Outracks::Simulator::FakeApp* app, uString* header, uString* body, uString* details, uObject* buttons);
    static void ShowPrompt(::g::Outracks::Simulator::FakeApp* app, uString* header, uString* body, ::g::Fuse::Controls::Control* inputControl, uObject* buttons);
};
// }

}}} // ::g::Outracks::Simulator
