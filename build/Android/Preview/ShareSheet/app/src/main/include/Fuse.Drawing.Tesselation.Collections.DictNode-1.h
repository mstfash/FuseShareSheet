// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct DictNode;}}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{
namespace Collections{

// internal sealed class DictNode<T> :72
// {
uType* DictNode_typeof();
void DictNode__ctor__fn(DictNode* __this);
void DictNode__InsertBefore_fn(DictNode* __this, void* key, DictNode** __retval);
void DictNode__get_Key_fn(DictNode* __this, uTRef __retval);
void DictNode__set_Key_fn(DictNode* __this, void* value);
void DictNode__New1_fn(uType* __type, DictNode** __retval);
void DictNode__get_Next_fn(DictNode* __this, DictNode** __retval);
void DictNode__set_Next_fn(DictNode* __this, DictNode* value);
void DictNode__get_Prev_fn(DictNode* __this, DictNode** __retval);
void DictNode__set_Prev_fn(DictNode* __this, DictNode* value);
void DictNode__Unlink_fn(DictNode* __this);

struct DictNode : uObject
{
    uTField _key() { return __type->Field(this, 0); }
    uWeak<DictNode*> _prev;
    uStrong<DictNode*> _Next;

    void ctor_();
    template<class T>
    DictNode* InsertBefore(T key) { DictNode* __retval; return DictNode__InsertBefore_fn(this, uConstrain(__type->T(0), key), &__retval), __retval; }
    template<class T>
    T Key() { T __retval; return DictNode__get_Key_fn(this, &__retval), __retval; }
    template<class T>
    void Key(T value) { DictNode__set_Key_fn(this, uConstrain(__type->T(0), value)); }
    DictNode* Next();
    void Next(DictNode* value);
    DictNode* Prev();
    void Prev(DictNode* value);
    void Unlink();
    static DictNode* New1(uType* __type);
};
// }

}}}}} // ::g::Fuse::Drawing::Tesselation::Collections
