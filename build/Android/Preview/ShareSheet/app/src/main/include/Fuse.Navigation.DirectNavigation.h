// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.IParentObserver.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.VisualNavigation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct DirectNavigation;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class DirectNavigation :184
// {
::g::Fuse::Navigation::VisualNavigation_type* DirectNavigation_typeof();
void DirectNavigation__ctor_4_fn(DirectNavigation* __this);
void DirectNavigation__get_Active_fn(DirectNavigation* __this, ::g::Fuse::Visual** __retval);
void DirectNavigation__set_Active_fn(DirectNavigation* __this, ::g::Fuse::Visual* value);
void DirectNavigation__Goto_fn(DirectNavigation* __this, ::g::Fuse::Visual* visual, int* mode);
void DirectNavigation__New2_fn(DirectNavigation** __retval);
void DirectNavigation__OnChildAddedWhileRooted_fn(DirectNavigation* __this, ::g::Fuse::Node* child);
void DirectNavigation__OnChildRemovedWhileRooted_fn(DirectNavigation* __this, ::g::Fuse::Node* child);
void DirectNavigation__OnRooted_fn(DirectNavigation* __this);
void DirectNavigation__get_PageProgress_fn(DirectNavigation* __this, double* __retval);
void DirectNavigation__SetProgressState_fn(DirectNavigation* __this, ::g::Fuse::Visual* elm, int* progress);
void DirectNavigation__TransitionTo_fn(DirectNavigation* __this, ::g::Fuse::Visual* visual, bool* bypass);
void DirectNavigation__UpdateState_fn(DirectNavigation* __this, bool* bypass);

struct DirectNavigation : ::g::Fuse::Navigation::VisualNavigation
{
    uStrong< ::g::Fuse::Visual*> _active;

    void ctor_4();
    void SetProgressState(::g::Fuse::Visual* elm, int progress);
    void TransitionTo(::g::Fuse::Visual* visual, bool bypass);
    void UpdateState(bool bypass);
    static DirectNavigation* New2();
};
// }

}}} // ::g::Fuse::Navigation
