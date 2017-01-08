// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Tesselation.ActiveRegion.h>
#include <Fuse.Drawing.Tesselation.Collections.Dict-1.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct ActiveRegionDict;}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct HalfEdge;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct Mesh;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct Sweep;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct Vertex;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{
namespace Collections{

// internal sealed class ActiveRegionDict :193
// {
::g::Fuse::Drawing::Tesselation::Collections::Dict_type* ActiveRegionDict_typeof();
void ActiveRegionDict__ctor_1_fn(ActiveRegionDict* __this, ::g::Fuse::Drawing::Tesselation::Sweep* sweep, ::g::Fuse::Drawing::Tesselation::Mesh* mesh);
void ActiveRegionDict__AddRegionBelow_fn(ActiveRegionDict* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regAbove, ::g::Fuse::Drawing::Tesselation::HalfEdge* eNewUp, ::g::Fuse::Drawing::Tesselation::ActiveRegion** __retval);
void ActiveRegionDict__CheckInvariants_fn(ActiveRegionDict* __this);
void ActiveRegionDict__EdgeLeq_fn(ActiveRegionDict* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* e1, ::g::Fuse::Drawing::Tesselation::HalfEdge* e2, bool* __retval);
void ActiveRegionDict__GetRegionContaining_fn(ActiveRegionDict* __this, ::g::Fuse::Drawing::Tesselation::Vertex* vEvent, ::g::Fuse::Drawing::Tesselation::ActiveRegion** __retval);
void ActiveRegionDict__Leq_fn(ActiveRegionDict* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* reg1, ::g::Fuse::Drawing::Tesselation::ActiveRegion* reg2, bool* __retval);
void ActiveRegionDict__New1_fn(::g::Fuse::Drawing::Tesselation::Sweep* sweep, ::g::Fuse::Drawing::Tesselation::Mesh* mesh, ActiveRegionDict** __retval);

struct ActiveRegionDict : ::g::Fuse::Drawing::Tesselation::Collections::Dict
{
    uWeak< ::g::Fuse::Drawing::Tesselation::Mesh*> _mesh;
    uWeak< ::g::Fuse::Drawing::Tesselation::Sweep*> _sweep;

    void ctor_1(::g::Fuse::Drawing::Tesselation::Sweep* sweep, ::g::Fuse::Drawing::Tesselation::Mesh* mesh);
    ::g::Fuse::Drawing::Tesselation::ActiveRegion* AddRegionBelow(::g::Fuse::Drawing::Tesselation::ActiveRegion* regAbove, ::g::Fuse::Drawing::Tesselation::HalfEdge* eNewUp);
    void CheckInvariants();
    bool EdgeLeq(::g::Fuse::Drawing::Tesselation::HalfEdge* e1, ::g::Fuse::Drawing::Tesselation::HalfEdge* e2);
    ::g::Fuse::Drawing::Tesselation::ActiveRegion* GetRegionContaining(::g::Fuse::Drawing::Tesselation::Vertex* vEvent);
    static ActiveRegionDict* New1(::g::Fuse::Drawing::Tesselation::Sweep* sweep, ::g::Fuse::Drawing::Tesselation::Mesh* mesh);
};
// }

}}}}} // ::g::Fuse::Drawing::Tesselation::Collections
