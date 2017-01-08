// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct Cache;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class Cache<T> :9
// {
uType* Cache_typeof();
void Cache__ctor__fn(Cache* __this, uArray* immutableItems);
void Cache__ctor_1_fn(Cache* __this, uObject* source);
void Cache__Evaluate_fn(Cache* __this);
void Cache__get_Item_fn(Cache* __this, int* index, uTRef __retval);
void Cache__get_Items_fn(Cache* __this, uObject** __retval);
void Cache__get_Length_fn(Cache* __this, int* __retval);
void Cache__New1_fn(uType* __type, uArray* immutableItems, Cache** __retval);
void Cache__New2_fn(uType* __type, uObject* source, Cache** __retval);

struct Cache : uObject
{
    uStrong<uArray*> _cache;
    uStrong<uObject*> _source;

    void ctor_(uArray* immutableItems);
    void ctor_1(uObject* source);
    void Evaluate();
    template<class T>
    T Item(int index) { T __retval; return Cache__get_Item_fn(this, &index, &__retval), __retval; }
    uObject* Items();
    int Length();
    static Cache* New1(uType* __type, uArray* immutableItems);
    static Cache* New2(uType* __type, uObject* source);
};
// }

}}} // ::g::Fuse::Drawing
