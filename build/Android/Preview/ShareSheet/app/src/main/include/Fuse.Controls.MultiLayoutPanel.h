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
namespace g{namespace Fuse{namespace Controls{struct MultiLayout;}}}
namespace g{namespace Fuse{namespace Controls{struct MultiLayoutPanel;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class MultiLayoutPanel :1120
// {
::g::Fuse::Controls::Control_type* MultiLayoutPanel_typeof();
void MultiLayoutPanel__ctor_7_fn(MultiLayoutPanel* __this);
void MultiLayoutPanel__get_LayoutElement_fn(MultiLayoutPanel* __this, ::g::Fuse::Elements::Element** __retval);
void MultiLayoutPanel__set_LayoutElement_fn(MultiLayoutPanel* __this, ::g::Fuse::Elements::Element* value);
void MultiLayoutPanel__New4_fn(MultiLayoutPanel** __retval);

struct MultiLayoutPanel : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Controls::MultiLayout*> _multiLayout;

    void ctor_7();
    ::g::Fuse::Elements::Element* LayoutElement();
    void LayoutElement(::g::Fuse::Elements::Element* value);
    static MultiLayoutPanel* New4();
};
// }

}}} // ::g::Fuse::Controls
