// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationStateArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigating;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhileNavigating :4594
// {
::g::Fuse::Triggers::Trigger_type* WhileNavigating_typeof();
void WhileNavigating__ctor_5_fn(WhileNavigating* __this);
void WhileNavigating__New2_fn(WhileNavigating** __retval);
void WhileNavigating__OnRooted_fn(WhileNavigating* __this);
void WhileNavigating__OnStateChange_fn(WhileNavigating* __this, uObject* s, ::g::Fuse::Navigation::NavigationStateArgs* args);
void WhileNavigating__OnUnrooted_fn(WhileNavigating* __this);

struct WhileNavigating : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong<uObject*> _context;
    uStrong< ::g::Fuse::Visual*> _contextParent;

    void ctor_5();
    void OnStateChange(uObject* s, ::g::Fuse::Navigation::NavigationStateArgs* args);
    static WhileNavigating* New2();
};
// }

}}} // ::g::Fuse::Navigation
