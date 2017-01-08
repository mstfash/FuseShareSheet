// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Animations{

// public abstract interface IMixerHandle<T> :1525
// {
uInterfaceType* IMixerHandle_typeof();

struct IMixerHandle
{
    void(*fp_get_RestValue)(uObject*, uTRef);
    void(*fp_Set)(uObject*, void*, float*);
    void(*fp_Unregister)(uObject*);
    template<class T>
    static T RestValue(const uInterface& __this) { T __retval; return __this.VTable<IMixerHandle>()->fp_get_RestValue(__this, &__retval), __retval; }
    static void get_RestValue_ex(const uInterface& __this, uTRef __retval) { __this.VTable<IMixerHandle>()->fp_get_RestValue(__this, __retval); }
    template<class T>
    static void Set(const uInterface& __this, T value, float strength) { __this.VTable<IMixerHandle>()->fp_Set(__this, uConstrain(__this->__type->GetBase(IMixerHandle_typeof())->T(0), value), &strength); }
    static void Set_ex(const uInterface& __this, void* value, float* strength) { __this.VTable<IMixerHandle>()->fp_Set(__this, value, strength); }
    static void Unregister(const uInterface& __this) { __this.VTable<IMixerHandle>()->fp_Unregister(__this); }
};
// }

}}} // ::g::Fuse::Animations
