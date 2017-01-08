// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/0.42.4/triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileVisibleInScrollView;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileVisibleInScrollView :896
// {
::g::Fuse::Triggers::Trigger_type* WhileVisibleInScrollView_typeof();
void WhileVisibleInScrollView__ctor_5_fn(WhileVisibleInScrollView* __this);
void WhileVisibleInScrollView__get_Distance_fn(WhileVisibleInScrollView* __this, float* __retval);
void WhileVisibleInScrollView__set_Distance_fn(WhileVisibleInScrollView* __this, float* value);
void WhileVisibleInScrollView__New2_fn(WhileVisibleInScrollView** __retval);
void WhileVisibleInScrollView__OnRooted_fn(WhileVisibleInScrollView* __this);
void WhileVisibleInScrollView__OnScrollPositionChanged_fn(WhileVisibleInScrollView* __this, uObject* s, uObject* args);
void WhileVisibleInScrollView__OnUnrooted_fn(WhileVisibleInScrollView* __this);
void WhileVisibleInScrollView__get_RelativeTo_fn(WhileVisibleInScrollView* __this, uObject** __retval);
void WhileVisibleInScrollView__set_RelativeTo_fn(WhileVisibleInScrollView* __this, uObject* value);
void WhileVisibleInScrollView__Update_fn(WhileVisibleInScrollView* __this);

struct WhileVisibleInScrollView : ::g::Fuse::Triggers::WhileTrigger
{
    float _distance;
    uStrong< ::g::Fuse::Elements::Element*> _element;
    uStrong<uObject*> _relativeTo;
    uStrong< ::g::Fuse::Controls::ScrollViewBase*> _scrollable;

    void ctor_5();
    float Distance();
    void Distance(float value);
    void OnScrollPositionChanged(uObject* s, uObject* args);
    uObject* RelativeTo();
    void RelativeTo(uObject* value);
    void Update();
    static WhileVisibleInScrollView* New2();
};
// }

}}} // ::g::Fuse::Triggers
