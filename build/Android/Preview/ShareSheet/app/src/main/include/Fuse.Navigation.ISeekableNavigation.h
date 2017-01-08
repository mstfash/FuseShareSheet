// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct EndSeekArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct UpdateSeekArgs;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal abstract interface ISeekableNavigation :679
// {
uInterfaceType* ISeekableNavigation_typeof();

struct ISeekableNavigation
{
    void(*fp_BeginSeek)(uObject*);
    void(*fp_EndSeek)(uObject*, ::g::Fuse::Navigation::EndSeekArgs*);
    void(*fp_Seek)(uObject*, ::g::Fuse::Navigation::UpdateSeekArgs*);
    void(*fp_get_SeekRange)(uObject*, ::g::Uno::Float2*);
    static void BeginSeek(const uInterface& __this) { __this.VTable<ISeekableNavigation>()->fp_BeginSeek(__this); }
    static void EndSeek(const uInterface& __this, ::g::Fuse::Navigation::EndSeekArgs* args) { __this.VTable<ISeekableNavigation>()->fp_EndSeek(__this, args); }
    static void Seek(const uInterface& __this, ::g::Fuse::Navigation::UpdateSeekArgs* args) { __this.VTable<ISeekableNavigation>()->fp_Seek(__this, args); }
    static ::g::Uno::Float2 SeekRange(const uInterface& __this);
};

}}} // ::g::Fuse::Navigation

#include <Uno.Float2.h>

namespace g{
namespace Fuse{
namespace Navigation{

inline ::g::Uno::Float2 ISeekableNavigation::SeekRange(const uInterface& __this) { ::g::Uno::Float2 __retval; return __this.VTable<ISeekableNavigation>()->fp_get_SeekRange(__this, &__retval), __retval; }
// }

}}} // ::g::Fuse::Navigation
