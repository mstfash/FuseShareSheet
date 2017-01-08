// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/meshes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct Face;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct HalfEdge;}}}}
namespace g{namespace Fuse{namespace Drawing{struct Contour;}}}
namespace g{namespace Uno{namespace Geometry{struct Triangle2D;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{

// internal sealed class Face :28
// {
uType* Face_typeof();
void Face__ctor__fn(Face* __this);
void Face__get_AnEdge_fn(Face* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval);
void Face__set_AnEdge_fn(Face* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* value);
void Face__Coords_fn(::g::Fuse::Drawing::Tesselation::HalfEdge* edge, ::g::Uno::Float2* __retval);
void Face__get_EdgeLoop_fn(Face* __this, uObject** __retval);
void Face__get_IsInside_fn(Face* __this, bool* __retval);
void Face__set_IsInside_fn(Face* __this, bool* value);
void Face__KillFace_fn(Face* fDel, Face* newLface);
void Face__MakeFace_fn(::g::Fuse::Drawing::Tesselation::HalfEdge* eOrig, Face* fNext, Face** __retval);
void Face__New1_fn(Face** __retval);
void Face__get_Next_fn(Face* __this, Face** __retval);
void Face__set_Next_fn(Face* __this, Face* value);
void Face__get_Prev_fn(Face* __this, Face** __retval);
void Face__set_Prev_fn(Face* __this, Face* value);
void Face__ToContour_fn(Face* __this, ::g::Fuse::Drawing::Contour** __retval);
void Face__ToTriangle_fn(Face* __this, ::g::Uno::Geometry::Triangle2D** __retval);

struct Face : uObject
{
    uWeak< ::g::Fuse::Drawing::Tesselation::HalfEdge*> _anEdge;
    uWeak<Face*> _prev;
    bool _IsInside;
    uStrong<Face*> _Next;

    void ctor_();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* AnEdge();
    void AnEdge(::g::Fuse::Drawing::Tesselation::HalfEdge* value);
    uObject* EdgeLoop();
    bool IsInside();
    void IsInside(bool value);
    Face* Next();
    void Next(Face* value);
    Face* Prev();
    void Prev(Face* value);
    ::g::Fuse::Drawing::Contour* ToContour();
    ::g::Uno::Geometry::Triangle2D* ToTriangle();
    static ::g::Uno::Float2 Coords(::g::Fuse::Drawing::Tesselation::HalfEdge* edge);
    static void KillFace(Face* fDel, Face* newLface);
    static Face* MakeFace(::g::Fuse::Drawing::Tesselation::HalfEdge* eOrig, Face* fNext);
    static Face* New1();
};
// }

}}}} // ::g::Fuse::Drawing::Tesselation
