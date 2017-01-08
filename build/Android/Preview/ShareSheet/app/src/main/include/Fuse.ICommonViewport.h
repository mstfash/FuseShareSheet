// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{

// public abstract interface ICommonViewport :3033
// {
uInterfaceType* ICommonViewport_typeof();

struct ICommonViewport
{
    void(*fp_get_PixelSize)(uObject*, ::g::Uno::Float2*);
    void(*fp_get_PixelsPerPoint)(uObject*, float*);
    void(*fp_get_Size)(uObject*, ::g::Uno::Float2*);
    void(*fp_get_ViewTransform)(uObject*, ::g::Uno::Float4x4*);
    static ::g::Uno::Float2 PixelSize(const uInterface& __this);
    static float PixelsPerPoint(const uInterface& __this) { float __retval; return __this.VTable<ICommonViewport>()->fp_get_PixelsPerPoint(__this, &__retval), __retval; }
    static ::g::Uno::Float2 Size(const uInterface& __this);
    static ::g::Uno::Float4x4 ViewTransform(const uInterface& __this);
};

}} // ::g::Fuse

#include <Uno.Float2.h>
#include <Uno.Float4x4.h>

namespace g{
namespace Fuse{

inline ::g::Uno::Float2 ICommonViewport::PixelSize(const uInterface& __this) { ::g::Uno::Float2 __retval; return __this.VTable<ICommonViewport>()->fp_get_PixelSize(__this, &__retval), __retval; }
inline ::g::Uno::Float2 ICommonViewport::Size(const uInterface& __this) { ::g::Uno::Float2 __retval; return __this.VTable<ICommonViewport>()->fp_get_Size(__this, &__retval), __retval; }
inline ::g::Uno::Float4x4 ICommonViewport::ViewTransform(const uInterface& __this) { ::g::Uno::Float4x4 __retval; return __this.VTable<ICommonViewport>()->fp_get_ViewTransform(__this, &__retval), __retval; }
// }

}} // ::g::Fuse
