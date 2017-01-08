// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/sweep/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct ActiveRegionDict;}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct VertexQueue;}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct ActiveRegion;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct HalfEdge;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct Mesh;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct Sweep;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct Vertex;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{

// internal sealed class Sweep :356
// {
uType* Sweep_typeof();
void Sweep__ctor__fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::Mesh* mesh, uDelegate* windingRule);
void Sweep__AddRightEdges_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::g::Fuse::Drawing::Tesselation::HalfEdge* eFirst, ::g::Fuse::Drawing::Tesselation::HalfEdge* eLast, ::g::Fuse::Drawing::Tesselation::HalfEdge* eTopLeft, bool* cleanUp);
void Sweep__AddSentinel_fn(Sweep* __this, float* t);
void Sweep__CheckForIntersect_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp, bool* __retval);
void Sweep__CheckForLeftSplice_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp, bool* __retval);
void Sweep__CheckForRightSplice_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp, bool* __retval);
void Sweep__ComputeInterior_fn(Sweep* __this);
void Sweep__ComputeWinding_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* reg);
void Sweep__ConnectLeftDegenerate_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::g::Fuse::Drawing::Tesselation::Vertex* vEvent);
void Sweep__ConnectLeftVertex_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::Vertex* vEvent);
void Sweep__ConnectRightVertex_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::g::Fuse::Drawing::Tesselation::HalfEdge* eBottomLeft);
void Sweep__DeleteRegion_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* reg);
void Sweep__DoneEdgeDict_fn(Sweep* __this);
void Sweep__get_Event_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::Vertex** __retval);
void Sweep__FinishLeftRegions_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regFirst, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regLast, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval);
void Sweep__FinishRegion_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* reg);
void Sweep__HasActiveRegion_fn(::g::Fuse::Drawing::Tesselation::HalfEdge* e, bool* __retval);
void Sweep__InitEdgeDict_fn(Sweep* __this);
void Sweep__InitPriorityQ_fn(Sweep* __this);
void Sweep__New1_fn(::g::Fuse::Drawing::Tesselation::Mesh* mesh, uDelegate* windingRule, Sweep** __retval);
void Sweep__RemoveDegenerateEdges_fn(Sweep* __this);
void Sweep__RemoveDegenerateFaces_fn(Sweep* __this);
void Sweep__SpliceMergeVertices_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* e1, ::g::Fuse::Drawing::Tesselation::HalfEdge* e2);
void Sweep__SweepEvent_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::Vertex* vEvent);
void Sweep__WalkDirtyRegions_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp);

struct Sweep : uObject
{
    uStrong< ::g::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict*> _dict;
    uStrong< ::g::Fuse::Drawing::Tesselation::Vertex*> _event;
    uStrong<uDelegate*> _isWindingInside;
    uWeak< ::g::Fuse::Drawing::Tesselation::Mesh*> _mesh;
    uStrong< ::g::Fuse::Drawing::Tesselation::Collections::VertexQueue*> _pq;

    void ctor_(::g::Fuse::Drawing::Tesselation::Mesh* mesh, uDelegate* windingRule);
    void AddRightEdges(::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::g::Fuse::Drawing::Tesselation::HalfEdge* eFirst, ::g::Fuse::Drawing::Tesselation::HalfEdge* eLast, ::g::Fuse::Drawing::Tesselation::HalfEdge* eTopLeft, bool cleanUp);
    void AddSentinel(float t);
    bool CheckForIntersect(::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp);
    bool CheckForLeftSplice(::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp);
    bool CheckForRightSplice(::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp);
    void ComputeInterior();
    void ComputeWinding(::g::Fuse::Drawing::Tesselation::ActiveRegion* reg);
    void ConnectLeftDegenerate(::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::g::Fuse::Drawing::Tesselation::Vertex* vEvent);
    void ConnectLeftVertex(::g::Fuse::Drawing::Tesselation::Vertex* vEvent);
    void ConnectRightVertex(::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::g::Fuse::Drawing::Tesselation::HalfEdge* eBottomLeft);
    void DeleteRegion(::g::Fuse::Drawing::Tesselation::ActiveRegion* reg);
    void DoneEdgeDict();
    ::g::Fuse::Drawing::Tesselation::Vertex* Event();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* FinishLeftRegions(::g::Fuse::Drawing::Tesselation::ActiveRegion* regFirst, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regLast);
    void FinishRegion(::g::Fuse::Drawing::Tesselation::ActiveRegion* reg);
    void InitEdgeDict();
    void InitPriorityQ();
    void RemoveDegenerateEdges();
    void RemoveDegenerateFaces();
    void SpliceMergeVertices(::g::Fuse::Drawing::Tesselation::HalfEdge* e1, ::g::Fuse::Drawing::Tesselation::HalfEdge* e2);
    void SweepEvent(::g::Fuse::Drawing::Tesselation::Vertex* vEvent);
    void WalkDirtyRegions(::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp);
    static bool HasActiveRegion(::g::Fuse::Drawing::Tesselation::HalfEdge* e);
    static Sweep* New1(::g::Fuse::Drawing::Tesselation::Mesh* mesh, uDelegate* windingRule);
};
// }

}}}} // ::g::Fuse::Drawing::Tesselation
