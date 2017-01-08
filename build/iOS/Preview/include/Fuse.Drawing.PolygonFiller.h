// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/rendering/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.Rect.h>
namespace g{namespace Fuse{namespace Drawing{struct Border;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Contour;}}}
namespace g{namespace Fuse{namespace Drawing{struct Polygon;}}}
namespace g{namespace Fuse{namespace Drawing{struct PolygonDrawable;}}}
namespace g{namespace Fuse{namespace Drawing{struct PolygonFiller;}}}
namespace g{namespace Fuse{namespace Drawing{struct RendererContext;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class PolygonFiller :186
// {
struct PolygonFiller_type : uType
{
    ::g::Uno::IDisposable interface0;
};

PolygonFiller_type* PolygonFiller_typeof();
void PolygonFiller__ctor__fn(PolygonFiller* __this, ::g::Fuse::Drawing::Polygon* polygon, int* antialiasing, float* density);
void PolygonFiller__get_Bounds_fn(PolygonFiller* __this, ::g::Uno::Rect* __retval);
void PolygonFiller__CalcBounds_fn(PolygonFiller* __this, ::g::Uno::Rect* __retval);
void PolygonFiller__Contour_fn(PolygonFiller* __this, ::g::Fuse::Drawing::Border* border, ::g::Fuse::Drawing::Contour** __retval);
void PolygonFiller__CreateBorder_fn(PolygonFiller* __this, ::g::Fuse::Drawing::Contour* contour, ::g::Fuse::Drawing::Border** __retval);
void PolygonFiller__Dispose_fn(PolygonFiller* __this);
void PolygonFiller__Draw_fn(PolygonFiller* __this, ::g::Fuse::Drawing::Brush* f, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4* transform, ::g::Uno::Float2* elementSize);
void PolygonFiller__Draw1_fn(PolygonFiller* __this, ::g::Fuse::Drawing::Brush* f, ::g::Fuse::Drawing::RendererContext* ctx);
void PolygonFiller__Intersects_fn(PolygonFiller* __this, ::g::Uno::Float2* p, bool* __retval);
void PolygonFiller__New1_fn(::g::Fuse::Drawing::Polygon* polygon, int* antialiasing, float* density, PolygonFiller** __retval);

struct PolygonFiller : uObject
{
    uStrong<uArray*> _antialiasingBorders;
    ::g::Uno::Rect _bounds;
    float _density;
    uStrong<uArray*> _fills;
    bool _hasBounds;
    float _px;

    void ctor_(::g::Fuse::Drawing::Polygon* polygon, int antialiasing, float density);
    ::g::Uno::Rect Bounds();
    ::g::Uno::Rect CalcBounds();
    ::g::Fuse::Drawing::Contour* Contour(::g::Fuse::Drawing::Border* border);
    ::g::Fuse::Drawing::Border* CreateBorder(::g::Fuse::Drawing::Contour* contour);
    void Dispose();
    void Draw(::g::Fuse::Drawing::Brush* f, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 transform, ::g::Uno::Float2 elementSize);
    void Draw1(::g::Fuse::Drawing::Brush* f, ::g::Fuse::Drawing::RendererContext* ctx);
    bool Intersects(::g::Uno::Float2 p);
    static PolygonFiller* New1(::g::Fuse::Drawing::Polygon* polygon, int antialiasing, float density);
};
// }

}}} // ::g::Fuse::Drawing
