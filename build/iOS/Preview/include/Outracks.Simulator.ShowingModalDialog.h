// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Optional-1.h>
#include <Outracks.Simulator.State.h>
namespace g{namespace Outracks{namespace Simulator{struct DialogButton;}}}
namespace g{namespace Outracks{namespace Simulator{struct ShowingModalDialog;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal class ShowingModalDialog :1481
// {
::g::Outracks::Simulator::State_type* ShowingModalDialog_typeof();
void ShowingModalDialog__ctor_1_fn(ShowingModalDialog* __this, uString* header, uString* body, uString* details, uArray* buttons);
void ShowingModalDialog__New1_fn(uString* header, uString* body, uString* details, uArray* buttons, ShowingModalDialog** __retval);
void ShowingModalDialog__OnButtonClicked_fn(ShowingModalDialog* __this, ::g::Outracks::Simulator::DialogButton* button);
void ShowingModalDialog__OnEnterState_fn(ShowingModalDialog* __this, ::g::Outracks::Simulator::State** __retval);
void ShowingModalDialog__OnException_fn(ShowingModalDialog* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::State** __retval);
void ShowingModalDialog__OnUpdate_fn(ShowingModalDialog* __this, ::g::Outracks::Simulator::State** __retval);

struct ShowingModalDialog : ::g::Outracks::Simulator::State
{
    uStrong<uString*> _body;
    uStrong<uArray*> _buttons;
    uTField _clickedButton() { return __type->Field(this, 2); }
    uStrong<uString*> _details;
    uStrong<uString*> _header;

    void ctor_1(uString* header, uString* body, uString* details, uArray* buttons);
    void OnButtonClicked(::g::Outracks::Simulator::DialogButton* button);
    static ShowingModalDialog* New1(uString* header, uString* body, uString* details, uArray* buttons);
};
// }

}}} // ::g::Outracks::Simulator
