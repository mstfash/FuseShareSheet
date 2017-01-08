// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct Face;}}}}
namespace g{namespace Fuse{namespace Drawing{struct Cache;}}}
namespace g{namespace Fuse{namespace Drawing{struct Contour;}}}
namespace g{namespace Fuse{namespace Drawing{struct Polygon;}}}
namespace g{namespace Fuse{namespace Drawing{struct PolygonDrawable;}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelMesh;}}}}
namespace g{namespace Uno{namespace Geometry{struct Triangle2D;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// public partial sealed class Polygon :168
// {
uType* Polygon_typeof();
void Polygon__ctor__fn(Polygon* __this, uArray* contours);
void Polygon__ctor_1_fn(Polygon* __this, uObject* contours);
void Polygon__ctor_2_fn(Polygon* __this, uDelegate* windingRule, uArray* contours);
void Polygon__ctor_3_fn(Polygon* __this, uDelegate* windingRule, uObject* contours);
void Polygon__get_Contours_fn(Polygon* __this, uObject** __retval);
void Polygon__CreateTriangle_fn(Polygon* __this, ::g::Fuse::Drawing::Tesselation::Face* face, ::g::Uno::Geometry::Triangle2D** __retval);
void Polygon__Extrude_fn(Polygon* __this, float* depth, float* smoothingThreshold, ::g::Uno::Content::Models::ModelMesh** __retval);
void Polygon__GetBoundaryContours_fn(Polygon* __this, uObject** __retval);
void Polygon__GetFillTriangles_fn(Polygon* __this, uObject** __retval);
void Polygon__GetTriangleVertices_fn(Polygon* __this, uArray** __retval);
void Polygon__get_IsDegenerate_fn(Polygon* __this, bool* __retval);
void Polygon__New1_fn(uArray* contours, Polygon** __retval);
void Polygon__New2_fn(uObject* contours, Polygon** __retval);
void Polygon__New3_fn(uDelegate* windingRule, uArray* contours, Polygon** __retval);
void Polygon__New4_fn(uDelegate* windingRule, uObject* contours, Polygon** __retval);
void Polygon__Stroke_fn(Polygon* __this, float* Width, float* Offset, int* StartCap, int* EndCap, Polygon** __retval);
void Polygon__Triangulate_fn(Polygon* __this, uObject** __retval);
void Polygon__get_WindingRule_fn(Polygon* __this, uDelegate** __retval);

struct Polygon : uObject
{
    uStrong<uArray*> _boundaryContours;
    uStrong< ::g::Fuse::Drawing::Cache*> _contours;
    uStrong<uDelegate*> _windingRule;

    void ctor_(uArray* contours);
    void ctor_1(uObject* contours);
    void ctor_2(uDelegate* windingRule, uArray* contours);
    void ctor_3(uDelegate* windingRule, uObject* contours);
    uObject* Contours();
    ::g::Uno::Geometry::Triangle2D* CreateTriangle(::g::Fuse::Drawing::Tesselation::Face* face);
    ::g::Uno::Content::Models::ModelMesh* Extrude(float depth, float smoothingThreshold);
    uObject* GetBoundaryContours();
    uObject* GetFillTriangles();
    uArray* GetTriangleVertices();
    bool IsDegenerate();
    Polygon* Stroke(float Width, float Offset, int StartCap, int EndCap);
    uObject* Triangulate();
    uDelegate* WindingRule();
    static Polygon* New1(uArray* contours);
    static Polygon* New2(uObject* contours);
    static Polygon* New3(uDelegate* windingRule, uArray* contours);
    static Polygon* New4(uDelegate* windingRule, uObject* contours);
};
// }

}}} // ::g::Fuse::Drawing
