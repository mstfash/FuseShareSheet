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
namespace g{namespace Outracks{namespace Simulator{struct Flasher;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class Flasher :1983
// {
::g::Fuse::Controls::Control_type* Flasher_typeof();
void Flasher__ctor_7_fn(Flasher* __this, uString* text);
void Flasher__get_AnimationParameter_fn(Flasher* __this, double* __retval);
void Flasher__IsExpired_fn(Flasher* __this, bool* __retval);
void Flasher__New4_fn(uString* text, Flasher** __retval);
void Flasher__OnRooted_fn(Flasher* __this);
void Flasher__OnUnrooted_fn(Flasher* __this);
void Flasher__OnUpdate_fn(Flasher* __this);

struct Flasher : ::g::Fuse::Controls::Panel
{
    double _lastRooted;

    void ctor_7(uString* text);
    double AnimationParameter();
    bool IsExpired();
    void OnUpdate();
    static Flasher* New4(uString* text);
};
// }

}}} // ::g::Outracks::Simulator
