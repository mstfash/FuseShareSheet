// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/sweep/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct DictNode;}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct ActiveRegion;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct HalfEdge;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct Mesh;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{

// internal sealed class ActiveRegion :10
// {
uType* ActiveRegion_typeof();
void ActiveRegion__ctor__fn(ActiveRegion* __this, ::g::Fuse::Drawing::Tesselation::Mesh* mesh, ::g::Fuse::Drawing::Tesselation::HalfEdge* upperEdge, bool* sentinel);
void ActiveRegion__get_Above_fn(ActiveRegion* __this, ActiveRegion** __retval);
void ActiveRegion__get_Below_fn(ActiveRegion* __this, ActiveRegion** __retval);
void ActiveRegion__get_fixUpperEdge_fn(ActiveRegion* __this, bool* __retval);
void ActiveRegion__set_fixUpperEdge_fn(ActiveRegion* __this, bool* value);
void ActiveRegion__FixUpperEdge_fn(ActiveRegion* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* newEdge);
void ActiveRegion__get_IsDirty_fn(ActiveRegion* __this, bool* __retval);
void ActiveRegion__set_IsDirty_fn(ActiveRegion* __this, bool* value);
void ActiveRegion__get_IsInside_fn(ActiveRegion* __this, bool* __retval);
void ActiveRegion__set_IsInside_fn(ActiveRegion* __this, bool* value);
void ActiveRegion__New1_fn(::g::Fuse::Drawing::Tesselation::Mesh* mesh, ::g::Fuse::Drawing::Tesselation::HalfEdge* upperEdge, bool* sentinel, ActiveRegion** __retval);
void ActiveRegion__get_Sentinel_fn(ActiveRegion* __this, bool* __retval);
void ActiveRegion__set_Sentinel_fn(ActiveRegion* __this, bool* value);
void ActiveRegion__get_TopLeft_fn(ActiveRegion* __this, ActiveRegion** __retval);
void ActiveRegion__get_TopRight_fn(ActiveRegion* __this, ActiveRegion** __retval);
void ActiveRegion__ToString_fn(ActiveRegion* __this, uString** __retval);
void ActiveRegion__get_UpperEdge_fn(ActiveRegion* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval);
void ActiveRegion__set_UpperEdge_fn(ActiveRegion* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* value);
void ActiveRegion__get_UpperEdgeDictNode_fn(ActiveRegion* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode** __retval);
void ActiveRegion__set_UpperEdgeDictNode_fn(ActiveRegion* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* value);
void ActiveRegion__get_WindingNumber_fn(ActiveRegion* __this, int* __retval);
void ActiveRegion__set_WindingNumber_fn(ActiveRegion* __this, int* value);

struct ActiveRegion : uObject
{
    uWeak< ::g::Fuse::Drawing::Tesselation::Mesh*> _mesh;
    uWeak< ::g::Fuse::Drawing::Tesselation::HalfEdge*> _upperEdge;
    uWeak< ::g::Fuse::Drawing::Tesselation::Collections::DictNode*> _upperEdgeDictNode;
    bool _fixUpperEdge;
    bool _IsDirty;
    bool _IsInside;
    bool _Sentinel;
    int _WindingNumber;

    void ctor_(::g::Fuse::Drawing::Tesselation::Mesh* mesh, ::g::Fuse::Drawing::Tesselation::HalfEdge* upperEdge, bool sentinel);
    ActiveRegion* Above();
    ActiveRegion* Below();
    bool fixUpperEdge();
    void fixUpperEdge(bool value);
    void FixUpperEdge(::g::Fuse::Drawing::Tesselation::HalfEdge* newEdge);
    bool IsDirty();
    void IsDirty(bool value);
    bool IsInside();
    void IsInside(bool value);
    bool Sentinel();
    void Sentinel(bool value);
    ActiveRegion* TopLeft();
    ActiveRegion* TopRight();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* UpperEdge();
    void UpperEdge(::g::Fuse::Drawing::Tesselation::HalfEdge* value);
    ::g::Fuse::Drawing::Tesselation::Collections::DictNode* UpperEdgeDictNode();
    void UpperEdgeDictNode(::g::Fuse::Drawing::Tesselation::Collections::DictNode* value);
    int WindingNumber();
    void WindingNumber(int value);
    static ActiveRegion* New1(::g::Fuse::Drawing::Tesselation::Mesh* mesh, ::g::Fuse::Drawing::Tesselation::HalfEdge* upperEdge, bool sentinel);
};
// }

}}}} // ::g::Fuse::Drawing::Tesselation
