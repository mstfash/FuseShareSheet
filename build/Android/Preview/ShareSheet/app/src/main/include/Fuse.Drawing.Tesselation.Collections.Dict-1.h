// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct Dict;}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct DictNode;}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct DictNodeEnumerable;}}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{
namespace Collections{

// internal abstract class Dict<T> :132
// {
struct Dict_type : uType
{
    void(*fp_Leq)(::g::Fuse::Drawing::Tesselation::Collections::Dict*, void*, void*, bool*);
};

Dict_type* Dict_typeof();
void Dict__ctor__fn(Dict* __this);
void Dict__Delete_fn(Dict* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* node);
void Dict__Insert_fn(Dict* __this, void* key, ::g::Fuse::Drawing::Tesselation::Collections::DictNode** __retval);
void Dict__InsertBefore_fn(Dict* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* node, void* key, ::g::Fuse::Drawing::Tesselation::Collections::DictNode** __retval);
void Dict__get_Items_fn(Dict* __this, uObject** __retval);
void Dict__Key_fn(Dict* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* node, uTRef __retval);
void Dict__get_Max_fn(Dict* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode** __retval);
void Dict__get_Min_fn(Dict* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode** __retval);
void Dict__Search_fn(Dict* __this, void* key, ::g::Fuse::Drawing::Tesselation::Collections::DictNode** __retval);

struct Dict : uObject
{
    uStrong< ::g::Fuse::Drawing::Tesselation::Collections::DictNode*> _head;
    uStrong< ::g::Fuse::Drawing::Tesselation::Collections::DictNodeEnumerable*> _nodes;

    void ctor_();
    void Delete(::g::Fuse::Drawing::Tesselation::Collections::DictNode* node);
    template<class T>
    ::g::Fuse::Drawing::Tesselation::Collections::DictNode* Insert(T key) { ::g::Fuse::Drawing::Tesselation::Collections::DictNode* __retval; return Dict__Insert_fn(this, uConstrain(__type->GetBase(Dict_typeof())->T(0), key), &__retval), __retval; }
    template<class T>
    ::g::Fuse::Drawing::Tesselation::Collections::DictNode* InsertBefore(::g::Fuse::Drawing::Tesselation::Collections::DictNode* node, T key) { ::g::Fuse::Drawing::Tesselation::Collections::DictNode* __retval; return Dict__InsertBefore_fn(this, node, uConstrain(__type->GetBase(Dict_typeof())->T(0), key), &__retval), __retval; }
    uObject* Items();
    template<class T>
    T Key(::g::Fuse::Drawing::Tesselation::Collections::DictNode* node) { T __retval; return Dict__Key_fn(this, node, &__retval), __retval; }
    template<class T>
    bool Leq(T a, T b) { bool __retval; return (((Dict_type*)__type)->fp_Leq)(this, uConstrain(__type->GetBase(Dict_typeof())->T(0), a), uConstrain(__type->GetBase(Dict_typeof())->T(0), b), &__retval), __retval; }
    void Leq_ex(void* a, void* b, bool* __retval) { (((Dict_type*)__type)->fp_Leq)(this, a, b, __retval); }
    ::g::Fuse::Drawing::Tesselation::Collections::DictNode* Max();
    ::g::Fuse::Drawing::Tesselation::Collections::DictNode* Min();
    template<class T>
    ::g::Fuse::Drawing::Tesselation::Collections::DictNode* Search(T key) { ::g::Fuse::Drawing::Tesselation::Collections::DictNode* __retval; return Dict__Search_fn(this, uConstrain(__type->GetBase(Dict_typeof())->T(0), key), &__retval), __retval; }
};
// }

}}}}} // ::g::Fuse::Drawing::Tesselation::Collections
