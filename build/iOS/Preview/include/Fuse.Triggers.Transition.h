// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Internal.MiniList-1.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Animations{struct Animator;}}}
namespace g{namespace Fuse{namespace Triggers{struct Transition;}}}
namespace g{namespace Fuse{namespace Triggers{struct TransitionGroup;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class Transition :2390
// {
::g::Fuse::Triggers::Trigger_type* Transition_typeof();
void Transition__ctor_4_fn(Transition* __this);
void Transition__AddUseTransition_fn(Transition* __this);
void Transition__get_AutoRelease_fn(Transition* __this, bool* __retval);
void Transition__set_AutoRelease_fn(Transition* __this, bool* value);
void Transition__get_Direction_fn(Transition* __this, int* __retval);
void Transition__set_Direction_fn(Transition* __this, int* value);
void Transition__DoActivate_fn(Transition* __this);
void Transition__DoBypassActivate_fn(Transition* __this);
void Transition__DoBypassDeactivate_fn(Transition* __this);
void Transition__DoPulseBackward_fn(Transition* __this);
void Transition__get_From_fn(Transition* __this, uString** __retval);
void Transition__set_From_fn(Transition* __this, uString* value);
void Transition__Join_fn(::g::Fuse::Internal::MiniList* list, uString** __retval);
void Transition__New2_fn(Transition** __retval);
void Transition__OnProgressChanged_fn(Transition* __this);
void Transition__OnRooted_fn(Transition* __this);
void Transition__OnUnrooted_fn(Transition* __this);
void Transition__Parse_fn(::g::Fuse::Internal::MiniList* list, uString* src);
void Transition__Priority_fn(Transition* __this, bool* isActive, bool* isBackward, uString* newPath, uString* oldPath, int* __retval);
void Transition__QuickDeactivate_fn(Transition* __this);
void Transition__get_To_fn(Transition* __this, uString** __retval);
void Transition__set_To_fn(Transition* __this, uString* value);
void Transition__get_UseTransition_fn(Transition* __this, int* __retval);
void Transition__set_UseTransition_fn(Transition* __this, int* value);

struct Transition : ::g::Fuse::Triggers::Trigger
{
    bool _autoRelease;
    int _direction;
    ::g::Fuse::Internal::MiniList _from;
    uStrong< ::g::Fuse::Triggers::TransitionGroup*> _group;
    ::g::Fuse::Internal::MiniList _to;
    uStrong< ::g::Fuse::Animations::Animator*> _useAnimator;
    int _useTransition;

    void ctor_4();
    void AddUseTransition();
    bool AutoRelease();
    void AutoRelease(bool value);
    int Direction();
    void Direction(int value);
    void DoActivate();
    void DoBypassActivate();
    void DoBypassDeactivate();
    void DoPulseBackward();
    uString* From();
    void From(uString* value);
    int Priority(bool isActive, bool isBackward, uString* newPath, uString* oldPath);
    void QuickDeactivate();
    uString* To();
    void To(uString* value);
    int UseTransition();
    void UseTransition(int value);
    static uString* Join(::g::Fuse::Internal::MiniList* list);
    static Transition* New2();
    static void Parse(::g::Fuse::Internal::MiniList* list, uString* src);
};
// }

}}} // ::g::Fuse::Triggers
