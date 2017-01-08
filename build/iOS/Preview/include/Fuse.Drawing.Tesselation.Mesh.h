// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/meshes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct Face;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct HalfEdge;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct Mesh;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct Vertex;}}}}
namespace g{namespace Fuse{namespace Drawing{struct Contour;}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{

// internal partial sealed class Mesh :421
// {
uType* Mesh_typeof();
void Mesh__ctor__fn(Mesh* __this);
void Mesh__Add_fn(Mesh* __this, Mesh* mesh2);
void Mesh__CheckConsistency_fn(Mesh* __this);
void Mesh__ComputeInterior_fn(Mesh* __this, uDelegate* windingRule);
void Mesh__Connect_fn(Mesh* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* eOrg, ::g::Fuse::Drawing::Tesselation::HalfEdge* eDst, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval);
void Mesh__CreateContour_fn(Mesh* __this, ::g::Fuse::Drawing::Tesselation::Face* f, ::g::Fuse::Drawing::Contour** __retval);
void Mesh__Delete_fn(Mesh* __this);
void Mesh__DeleteEdge_fn(Mesh* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* eDel);
void Mesh__DeleteInternalEdges_fn(Mesh* __this);
void Mesh__DiscardExterior_fn(Mesh* __this);
void Mesh__Dispose_fn(Mesh* __this);
void Mesh__get_Edges_fn(Mesh* __this, uObject** __retval);
void Mesh__get_Faces_fn(Mesh* __this, uObject** __retval);
void Mesh__GetContours_fn(Mesh* __this, uObject** __retval);
void Mesh__get_InteriorFaces_fn(Mesh* __this, uObject** __retval);
void Mesh__IsInside_fn(Mesh* __this, ::g::Fuse::Drawing::Tesselation::Face* face, bool* __retval);
void Mesh__MakeEdge_fn(Mesh* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval);
void Mesh__New1_fn(Mesh** __retval);
void Mesh__SetWindingNumber_fn(Mesh* __this, int* value);
void Mesh__Splice_fn(Mesh* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* eOrg, ::g::Fuse::Drawing::Tesselation::HalfEdge* eDst);
void Mesh__SplitEdge_fn(Mesh* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* e, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval);
void Mesh__TessellateInterior_fn(Mesh* __this);
void Mesh__TessellateMonoRegion_fn(Mesh* __this, ::g::Fuse::Drawing::Tesselation::Face* face);
void Mesh__get_Vertices_fn(Mesh* __this, uObject** __retval);
void Mesh__ZapFace_fn(Mesh* __this, ::g::Fuse::Drawing::Tesselation::Face* fZap);

struct Mesh : uObject
{
    uStrong< ::g::Fuse::Drawing::Tesselation::HalfEdge*> _edgesHeadSym;
    uStrong< ::g::Fuse::Drawing::Tesselation::HalfEdge*> EdgesHead;
    uStrong< ::g::Fuse::Drawing::Tesselation::Face*> FacesHead;
    uStrong< ::g::Fuse::Drawing::Tesselation::Vertex*> VerticesHead;

    void ctor_();
    void Add(Mesh* mesh2);
    void CheckConsistency();
    void ComputeInterior(uDelegate* windingRule);
    ::g::Fuse::Drawing::Tesselation::HalfEdge* Connect(::g::Fuse::Drawing::Tesselation::HalfEdge* eOrg, ::g::Fuse::Drawing::Tesselation::HalfEdge* eDst);
    ::g::Fuse::Drawing::Contour* CreateContour(::g::Fuse::Drawing::Tesselation::Face* f);
    void Delete();
    void DeleteEdge(::g::Fuse::Drawing::Tesselation::HalfEdge* eDel);
    void DeleteInternalEdges();
    void DiscardExterior();
    void Dispose();
    uObject* Edges();
    uObject* Faces();
    uObject* GetContours();
    uObject* InteriorFaces();
    bool IsInside(::g::Fuse::Drawing::Tesselation::Face* face);
    ::g::Fuse::Drawing::Tesselation::HalfEdge* MakeEdge();
    void SetWindingNumber(int value);
    void Splice(::g::Fuse::Drawing::Tesselation::HalfEdge* eOrg, ::g::Fuse::Drawing::Tesselation::HalfEdge* eDst);
    ::g::Fuse::Drawing::Tesselation::HalfEdge* SplitEdge(::g::Fuse::Drawing::Tesselation::HalfEdge* e);
    void TessellateInterior();
    void TessellateMonoRegion(::g::Fuse::Drawing::Tesselation::Face* face);
    uObject* Vertices();
    void ZapFace(::g::Fuse::Drawing::Tesselation::Face* fZap);
    static Mesh* New1();
};
// }

}}}} // ::g::Fuse::Drawing::Tesselation
