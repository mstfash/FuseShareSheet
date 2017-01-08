// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/0.42.4/$.uno'.
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
namespace g{namespace Fuse{namespace Controls{struct Page;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Page :1631
// {
::g::Fuse::Controls::Control_type* Page_typeof();
void Page__ctor_7_fn(Page* __this);
void Page__New4_fn(Page** __retval);
void Page__OnRestoreState_fn(Page* __this, uObject* state);
void Page__OnSaveState_fn(Page* __this, uObject** __retval);
void Page__RestoreState_fn(Page* __this, uObject* state);
void Page__SaveState_fn(Page* __this, uObject** __retval);
void Page__get_Title_fn(Page* __this, uString** __retval);
void Page__set_Title_fn(Page* __this, uString* value);

struct Page : ::g::Fuse::Controls::Panel
{
    void ctor_7();
    void OnRestoreState(uObject* state);
    uObject* OnSaveState();
    void RestoreState(uObject* state);
    uObject* SaveState();
    uString* Title();
    void Title(uString* value);
    static Page* New4();
};
// }

}}} // ::g::Fuse::Controls
