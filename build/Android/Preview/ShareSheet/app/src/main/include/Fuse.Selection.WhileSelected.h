// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Selection/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Selection{struct Selectable;}}}
namespace g{namespace Fuse{namespace Selection{struct Selection;}}}
namespace g{namespace Fuse{namespace Selection{struct WhileSelected;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Selection{

// public sealed class WhileSelected :991
// {
struct WhileSelected_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Uno::UX::IPropertyListener interface5;
};

WhileSelected_type* WhileSelected_typeof();
void WhileSelected__ctor_5_fn(WhileSelected* __this);
void WhileSelected__New2_fn(WhileSelected** __retval);
void WhileSelected__OnRooted_fn(WhileSelected* __this);
void WhileSelected__OnSelectionChanged_fn(WhileSelected* __this, uObject* s, uObject* args);
void WhileSelected__OnUnrooted_fn(WhileSelected* __this);
void WhileSelected__UnoUXIPropertyListenerOnPropertyChanged_fn(WhileSelected* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);

struct WhileSelected : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong< ::g::Fuse::Selection::Selectable*> _selectable;
    uStrong< ::g::Fuse::Selection::Selection*> _selection;

    void ctor_5();
    void OnSelectionChanged(uObject* s, uObject* args);
    static WhileSelected* New2();
};
// }

}}} // ::g::Fuse::Selection
