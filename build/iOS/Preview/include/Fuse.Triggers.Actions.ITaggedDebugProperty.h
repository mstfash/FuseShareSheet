// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.42.4/actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public abstract interface ITaggedDebugProperty :134
// {
uInterfaceType* ITaggedDebugProperty_typeof();

struct ITaggedDebugProperty
{
    void(*fp_GetStringValue)(uObject*, uString**);
    void(*fp_GetTag)(uObject*, uString**);
    static uString* GetStringValue(const uInterface& __this) { uString* __retval; return __this.VTable<ITaggedDebugProperty>()->fp_GetStringValue(__this, &__retval), __retval; }
    static uString* GetTag(const uInterface& __this) { uString* __retval; return __this.VTable<ITaggedDebugProperty>()->fp_GetTag(__this, &__retval), __retval; }
};
// }

}}}} // ::g::Fuse::Triggers::Actions
