// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/$.uno'.
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
namespace g{namespace Fuse{namespace Controls{struct DockPanel;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Layouts{struct DockLayout;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public class DockPanel :167
// {
::g::Fuse::Controls::Control_type* DockPanel_typeof();
void DockPanel__ctor_7_fn(DockPanel* __this);
void DockPanel__GetDock_fn(::g::Fuse::Elements::Element* elm, int* __retval);
void DockPanel__New4_fn(DockPanel** __retval);
void DockPanel__ResetDock_fn(::g::Fuse::Elements::Element* elm);
void DockPanel__SetDock_fn(::g::Fuse::Elements::Element* elm, int* dock);

struct DockPanel : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Layouts::DockLayout*> _dockLayout;

    void ctor_7();
    static int GetDock(::g::Fuse::Elements::Element* elm);
    static DockPanel* New4();
    static void ResetDock(::g::Fuse::Elements::Element* elm);
    static void SetDock(::g::Fuse::Elements::Element* elm, int dock);
};
// }

}}} // ::g::Fuse::Controls
