// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/meshes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct HalfEdge;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct Vertex;}}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{

// internal sealed class Vertex :1251
// {
uType* Vertex_typeof();
void Vertex__ctor__fn(Vertex* __this);
void Vertex__get_AnEdge_fn(Vertex* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval);
void Vertex__set_AnEdge_fn(Vertex* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* value);
void Vertex__get_Coords_fn(Vertex* __this, ::g::Uno::Float2* __retval);
void Vertex__KillVertex_fn(Vertex* vDel, Vertex* newOrg);
void Vertex__MakeVertex_fn(::g::Fuse::Drawing::Tesselation::HalfEdge* eOrig, Vertex* vNext, Vertex** __retval);
void Vertex__New1_fn(Vertex** __retval);
void Vertex__get_Next_fn(Vertex* __this, Vertex** __retval);
void Vertex__set_Next_fn(Vertex* __this, Vertex* value);
void Vertex__get_OutgoingEdges_fn(Vertex* __this, uObject** __retval);
void Vertex__get_Prev_fn(Vertex* __this, Vertex** __retval);
void Vertex__set_Prev_fn(Vertex* __this, Vertex* value);
void Vertex__get_QueueHandle_fn(Vertex* __this, Vertex** __retval);
void Vertex__ToString_fn(Vertex* __this, uString** __retval);
void Vertex__VertEq_fn(Vertex* __this, Vertex* v, bool* __retval);
void Vertex__VertLeq_fn(Vertex* __this, Vertex* v, bool* __retval);

struct Vertex : uObject
{
    uWeak< ::g::Fuse::Drawing::Tesselation::HalfEdge*> _anEdge;
    uWeak<Vertex*> _prev;
    double S;
    double T;
    uStrong<Vertex*> _Next;

    void ctor_();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* AnEdge();
    void AnEdge(::g::Fuse::Drawing::Tesselation::HalfEdge* value);
    ::g::Uno::Float2 Coords();
    Vertex* Next();
    void Next(Vertex* value);
    uObject* OutgoingEdges();
    Vertex* Prev();
    void Prev(Vertex* value);
    Vertex* QueueHandle();
    bool VertEq(Vertex* v);
    bool VertLeq(Vertex* v);
    static void KillVertex(Vertex* vDel, Vertex* newOrg);
    static Vertex* MakeVertex(::g::Fuse::Drawing::Tesselation::HalfEdge* eOrig, Vertex* vNext);
    static Vertex* New1();
};
// }

}}}} // ::g::Fuse::Drawing::Tesselation
