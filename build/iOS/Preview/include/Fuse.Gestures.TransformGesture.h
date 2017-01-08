// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Elements{struct InteractiveTransform;}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct TwoFinger;}}}}
namespace g{namespace Fuse{namespace Gestures{struct TransformGesture;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public abstract class TransformGesture :1557
// {
struct TransformGesture_type : ::g::Fuse::Node_type
{
    void(*fp_OnEnded)(::g::Fuse::Gestures::TransformGesture*);
    void(*fp_OnStarted)(::g::Fuse::Gestures::TransformGesture*);
    void(*fp_OnUpdate)(::g::Fuse::Gestures::TransformGesture*);
};

TransformGesture_type* TransformGesture_typeof();
void TransformGesture__ctor_3_fn(TransformGesture* __this, ::g::Fuse::Elements::InteractiveTransform* target);
void TransformGesture__CheckNeedUpdate_fn(TransformGesture* __this);
void TransformGesture__OnRooted_fn(TransformGesture* __this);
void TransformGesture__OnUnrooted_fn(TransformGesture* __this);
void TransformGesture__OnUpdate_fn(TransformGesture* __this);
void TransformGesture__get_Target_fn(TransformGesture* __this, ::g::Fuse::Elements::InteractiveTransform** __retval);
void TransformGesture__set_Target_fn(TransformGesture* __this, ::g::Fuse::Elements::InteractiveTransform* value);
void TransformGesture__Update_fn(TransformGesture* __this);

struct TransformGesture : ::g::Fuse::Behavior
{
    bool _hasUpdate;
    uStrong< ::g::Fuse::Gestures::Internal::TwoFinger*> Impl;
    uStrong<uObject*> Region;
    uStrong< ::g::Fuse::Elements::InteractiveTransform*> _Target;

    void ctor_3(::g::Fuse::Elements::InteractiveTransform* target);
    void CheckNeedUpdate();
    void OnEnded() { (((TransformGesture_type*)__type)->fp_OnEnded)(this); }
    void OnStarted() { (((TransformGesture_type*)__type)->fp_OnStarted)(this); }
    void OnUpdate() { (((TransformGesture_type*)__type)->fp_OnUpdate)(this); }
    ::g::Fuse::Elements::InteractiveTransform* Target();
    void Target(::g::Fuse::Elements::InteractiveTransform* value);
    void Update();
    static void OnUpdate(TransformGesture* __this) { TransformGesture__OnUpdate_fn(__this); }
};
// }

}}} // ::g::Fuse::Gestures
