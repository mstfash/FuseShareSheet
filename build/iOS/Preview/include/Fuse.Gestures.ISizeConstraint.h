// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public abstract interface ISizeConstraint :1527
// {
uInterfaceType* ISizeConstraint_typeof();

struct ISizeConstraint
{
    void(*fp_get_ContentSize)(uObject*, ::g::Uno::Float2*);
    void(*fp_get_TrimSize)(uObject*, ::g::Uno::Float2*);
    static ::g::Uno::Float2 ContentSize(const uInterface& __this);
    static ::g::Uno::Float2 TrimSize(const uInterface& __this);
};

}}} // ::g::Fuse::Gestures

#include <Uno.Float2.h>

namespace g{
namespace Fuse{
namespace Gestures{

inline ::g::Uno::Float2 ISizeConstraint::ContentSize(const uInterface& __this) { ::g::Uno::Float2 __retval; return __this.VTable<ISizeConstraint>()->fp_get_ContentSize(__this, &__retval), __retval; }
inline ::g::Uno::Float2 ISizeConstraint::TrimSize(const uInterface& __this) { ::g::Uno::Float2 __retval; return __this.VTable<ISizeConstraint>()->fp_get_TrimSize(__this, &__retval), __retval; }
// }

}}} // ::g::Fuse::Gestures
