// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Outracks{namespace Simulator{struct DeveloperMenu;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Outracks{
namespace Simulator{

// public partial sealed class DeveloperMenu :2232
// {
::g::Fuse::Controls::Control_type* DeveloperMenu_typeof();
void DeveloperMenu__ctor_7_fn(DeveloperMenu* __this);
void DeveloperMenu__Close_fn(DeveloperMenu* __this, uObject* sender, ::g::Uno::EventArgs* args);
void DeveloperMenu__GoBack_fn(DeveloperMenu* __this, uObject* sender, ::g::Uno::EventArgs* args);
void DeveloperMenu__InitializeUX_fn(DeveloperMenu* __this);
void DeveloperMenu__New4_fn(DeveloperMenu** __retval);

struct DeveloperMenu : ::g::Fuse::Controls::Panel
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return DeveloperMenu_typeof()->Init(), __selector0_; }
    uStrong< ::g::Uno::UX::Property1*> this_Opacity_inst;

    void ctor_7();
    void Close(uObject* sender, ::g::Uno::EventArgs* args);
    void GoBack(uObject* sender, ::g::Uno::EventArgs* args);
    void InitializeUX();
    static DeveloperMenu* New4();
};
// }

}}} // ::g::Outracks::Simulator
