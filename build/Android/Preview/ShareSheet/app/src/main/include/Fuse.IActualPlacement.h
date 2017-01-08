// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{

// public abstract interface IActualPlacement :9972
// {
uInterfaceType* IActualPlacement_typeof();

struct IActualPlacement
{
    void(*fp_get_ActualPosition)(uObject*, ::g::Uno::Float3*);
    void(*fp_get_ActualSize)(uObject*, ::g::Uno::Float3*);
    void(*fp_add_Placed)(uObject*, uDelegate*);
    void(*fp_remove_Placed)(uObject*, uDelegate*);
    static ::g::Uno::Float3 ActualPosition(const uInterface& __this);
    static ::g::Uno::Float3 ActualSize(const uInterface& __this);
    static void add_Placed(const uInterface& __this, uDelegate* value) { __this.VTable<IActualPlacement>()->fp_add_Placed(__this, value); }
    static void remove_Placed(const uInterface& __this, uDelegate* value) { __this.VTable<IActualPlacement>()->fp_remove_Placed(__this, value); }
};

}} // ::g::Fuse

#include <Uno.Float3.h>

namespace g{
namespace Fuse{

inline ::g::Uno::Float3 IActualPlacement::ActualPosition(const uInterface& __this) { ::g::Uno::Float3 __retval; return __this.VTable<IActualPlacement>()->fp_get_ActualPosition(__this, &__retval), __retval; }
inline ::g::Uno::Float3 IActualPlacement::ActualSize(const uInterface& __this) { ::g::Uno::Float3 __retval; return __this.VTable<IActualPlacement>()->fp_get_ActualSize(__this, &__retval), __retval; }
// }

}} // ::g::Fuse
