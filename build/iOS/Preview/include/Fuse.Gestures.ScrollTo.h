// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{namespace Fuse{namespace Gestures{struct ScrollTo;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public class ScrollTo :52
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollTo_typeof();
void ScrollTo__ctor_2_fn(ScrollTo* __this);
void ScrollTo__New2_fn(ScrollTo** __retval);
void ScrollTo__Perform_fn(ScrollTo* __this, ::g::Fuse::Node* target);
void ScrollTo__get_Position_fn(ScrollTo* __this, ::g::Uno::Float2* __retval);
void ScrollTo__set_Position_fn(ScrollTo* __this, ::g::Uno::Float2* value);
void ScrollTo__get_RelativePosition_fn(ScrollTo* __this, ::g::Uno::Float2* __retval);
void ScrollTo__set_RelativePosition_fn(ScrollTo* __this, ::g::Uno::Float2* value);
void ScrollTo__get_Target_fn(ScrollTo* __this, ::g::Fuse::Controls::ScrollView** __retval);
void ScrollTo__set_Target_fn(ScrollTo* __this, ::g::Fuse::Controls::ScrollView* value);

struct ScrollTo : ::g::Fuse::Triggers::Actions::TriggerAction
{
    bool _hasPosition;
    bool _hasRelativePosition;
    ::g::Uno::Float2 _position;
    ::g::Uno::Float2 _relativePosition;
    uStrong< ::g::Fuse::Controls::ScrollView*> _Target;

    void ctor_2();
    ::g::Uno::Float2 Position();
    void Position(::g::Uno::Float2 value);
    ::g::Uno::Float2 RelativePosition();
    void RelativePosition(::g::Uno::Float2 value);
    ::g::Fuse::Controls::ScrollView* Target();
    void Target(::g::Fuse::Controls::ScrollView* value);
    static ScrollTo* New2();
};
// }

}}} // ::g::Fuse::Gestures
