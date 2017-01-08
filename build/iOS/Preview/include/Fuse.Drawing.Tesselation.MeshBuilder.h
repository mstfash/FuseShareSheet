// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/meshes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct HalfEdge;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct Mesh;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct MeshBuilder;}}}}
namespace g{namespace Fuse{namespace Drawing{struct Contour;}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{

// internal sealed class MeshBuilder :1169
// {
uType* MeshBuilder_typeof();
void MeshBuilder__ctor__fn(MeshBuilder* __this);
void MeshBuilder__AddVertex_fn(MeshBuilder* __this, float* x, float* y);
void MeshBuilder__Complete_fn(MeshBuilder* __this, ::g::Fuse::Drawing::Tesselation::Mesh** __retval);
void MeshBuilder__CreateFromContours_fn(uObject* contours, ::g::Fuse::Drawing::Tesselation::Mesh** __retval);
void MeshBuilder__CreateSelfLoop_fn(MeshBuilder* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval);
void MeshBuilder__New1_fn(MeshBuilder** __retval);
void MeshBuilder__NewContour_fn(MeshBuilder* __this);

struct MeshBuilder : uObject
{
    uStrong< ::g::Fuse::Drawing::Tesselation::HalfEdge*> _lastEdge;
    uStrong< ::g::Fuse::Drawing::Tesselation::Mesh*> _mesh;

    void ctor_();
    void AddVertex(float x, float y);
    ::g::Fuse::Drawing::Tesselation::Mesh* Complete();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* CreateSelfLoop();
    void NewContour();
    static ::g::Fuse::Drawing::Tesselation::Mesh* CreateFromContours(uObject* contours);
    static MeshBuilder* New1();
};
// }

}}}} // ::g::Fuse::Drawing::Tesselation
