// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Paths/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.Rect.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry;}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometryRenderer;}}}
namespace g{namespace Fuse{namespace Drawing{struct PolygonFiller;}}}
namespace g{namespace Fuse{namespace Drawing{struct RendererContext;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Drawing{

// public partial sealed class PathGeometryRenderer :550
// {
struct PathGeometryRenderer_type : uType
{
    ::g::Uno::UX::IPropertyListener interface0;
};

PathGeometryRenderer_type* PathGeometryRenderer_typeof();
void PathGeometryRenderer__ctor__fn(PathGeometryRenderer* __this);
void PathGeometryRenderer__ctor_1_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::PathGeometry* geometry);
void PathGeometryRenderer__get_Antialiasing_fn(PathGeometryRenderer* __this, int* __retval);
void PathGeometryRenderer__set_Antialiasing_fn(PathGeometryRenderer* __this, int* value);
void PathGeometryRenderer__get_Bounds_fn(PathGeometryRenderer* __this, ::g::Uno::Rect* __retval);
void PathGeometryRenderer__CalcBounds_fn(PathGeometryRenderer* __this);
void PathGeometryRenderer__CompleteStrokeRenderers_fn(PathGeometryRenderer* __this, float* density);
void PathGeometryRenderer__get_Density_fn(PathGeometryRenderer* __this, float* __retval);
void PathGeometryRenderer__set_Density_fn(PathGeometryRenderer* __this, float* value);
void PathGeometryRenderer__Draw_fn(PathGeometryRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4* transform, ::g::Uno::Float2* elementSize);
void PathGeometryRenderer__Draw1_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::RendererContext* ctx);
void PathGeometryRenderer__DrawFill_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::RendererContext* ctx, ::g::Fuse::Drawing::Brush* fill);
void PathGeometryRenderer__DrawFills_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::RendererContext* ctx);
void PathGeometryRenderer__DrawStroke_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::RendererContext* ctx, ::g::Fuse::Drawing::Stroke* s);
void PathGeometryRenderer__DrawStrokes_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::RendererContext* ctx);
void PathGeometryRenderer__EnsureFillRenderer_fn(PathGeometryRenderer* __this, float* density);
void PathGeometryRenderer__EnsureStrokeRenderers_fn(PathGeometryRenderer* __this);
void PathGeometryRenderer__get_Fill_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Brush** __retval);
void PathGeometryRenderer__set_Fill_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Brush* value);
void PathGeometryRenderer__get_FillRule_fn(PathGeometryRenderer* __this, uDelegate** __retval);
void PathGeometryRenderer__set_FillRule_fn(PathGeometryRenderer* __this, uDelegate* value);
void PathGeometryRenderer__get_Fills_fn(PathGeometryRenderer* __this, uObject** __retval);
void PathGeometryRenderer__get_Geometry_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::PathGeometry** __retval);
void PathGeometryRenderer__set_Geometry_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::PathGeometry* value);
void PathGeometryRenderer__GeometryChanged_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::PathGeometry* geom);
void PathGeometryRenderer__GetHitPart_fn(PathGeometryRenderer* __this, ::g::Uno::Float2* p, uObject** __retval);
void PathGeometryRenderer__GetHitPart1_fn(PathGeometryRenderer* __this, ::g::Uno::Float2* p, uObject* fills, uObject* strokes, uObject** __retval);
void PathGeometryRenderer__GetRendererContext_fn(PathGeometryRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4* transform, ::g::Uno::Float2* elementSize, ::g::Fuse::Drawing::RendererContext** __retval);
void PathGeometryRenderer__GetStrokeRenderer_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Stroke* s, float* density, ::g::Fuse::Drawing::PolygonFiller** __retval);
void PathGeometryRenderer__get_HasFills_fn(PathGeometryRenderer* __this, bool* __retval);
void PathGeometryRenderer__get_HasStrokes_fn(PathGeometryRenderer* __this, bool* __retval);
void PathGeometryRenderer__get_InnerBounds_fn(PathGeometryRenderer* __this, ::g::Uno::Rect* __retval);
void PathGeometryRenderer__InvalidateStrokeAndFill_fn(PathGeometryRenderer* __this);
void PathGeometryRenderer__InvalidateVisual_fn(PathGeometryRenderer* __this);
void PathGeometryRenderer__New1_fn(PathGeometryRenderer** __retval);
void PathGeometryRenderer__New2_fn(::g::Fuse::Drawing::PathGeometry* geometry, PathGeometryRenderer** __retval);
void PathGeometryRenderer__OnFillAdded_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Brush* f);
void PathGeometryRenderer__OnFillRemoved_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Brush* f);
void PathGeometryRenderer__OnShadingChanged_fn(PathGeometryRenderer* __this);
void PathGeometryRenderer__OnStrokeAdded_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Stroke* s);
void PathGeometryRenderer__OnStrokeChanged_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Stroke* s);
void PathGeometryRenderer__OnStrokeRemoved_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Stroke* s);
void PathGeometryRenderer__get_PreScale_fn(PathGeometryRenderer* __this, ::g::Uno::Float2* __retval);
void PathGeometryRenderer__set_PreScale_fn(PathGeometryRenderer* __this, ::g::Uno::Float2* value);
void PathGeometryRenderer__SoftDispose_fn(PathGeometryRenderer* __this);
void PathGeometryRenderer__get_Stroke_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Stroke** __retval);
void PathGeometryRenderer__set_Stroke_fn(PathGeometryRenderer* __this, ::g::Fuse::Drawing::Stroke* value);
void PathGeometryRenderer__get_StrokePadding_fn(PathGeometryRenderer* __this, ::g::Uno::Float4* __retval);
void PathGeometryRenderer__get_Strokes_fn(PathGeometryRenderer* __this, uObject** __retval);
void PathGeometryRenderer__UnoUXIPropertyListenerOnPropertyChanged_fn(PathGeometryRenderer* __this, ::g::Uno::UX::PropertyObject* po, ::g::Uno::UX::Selector* prop);
void PathGeometryRenderer__UpdateAa_fn(PathGeometryRenderer* __this);
void PathGeometryRenderer__add_VisualInvalidated_fn(PathGeometryRenderer* __this, uDelegate* value);
void PathGeometryRenderer__remove_VisualInvalidated_fn(PathGeometryRenderer* __this, uDelegate* value);

struct PathGeometryRenderer : uObject
{
    int _antialiasing;
    ::g::Uno::Rect _bounds;
    int _cachedAntialiasing;
    float _density;
    float _fillDensity;
    uStrong< ::g::Fuse::Drawing::PolygonFiller*> _fillRenderer;
    uStrong<uDelegate*> _fillRule;
    uStrong< ::g::Uno::Collections::ObservableList*> _fills;
    uStrong< ::g::Fuse::Drawing::PathGeometry*> _geometry;
    bool _hasBoundsCache;
    ::g::Uno::Rect _innerBounds;
    ::g::Uno::Float2 _preScale;
    float _strokeDensity;
    ::g::Uno::Float4 _strokePadding;
    uStrong< ::g::Uno::Collections::Dictionary*> _strokeRenderers;
    uStrong< ::g::Uno::Collections::ObservableList*> _strokes;
    uStrong<uDelegate*> VisualInvalidated1;

    void ctor_();
    void ctor_1(::g::Fuse::Drawing::PathGeometry* geometry);
    int Antialiasing();
    void Antialiasing(int value);
    ::g::Uno::Rect Bounds();
    void CalcBounds();
    void CompleteStrokeRenderers(float density);
    float Density();
    void Density(float value);
    void Draw(::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 transform, ::g::Uno::Float2 elementSize);
    void Draw1(::g::Fuse::Drawing::RendererContext* ctx);
    void DrawFill(::g::Fuse::Drawing::RendererContext* ctx, ::g::Fuse::Drawing::Brush* fill);
    void DrawFills(::g::Fuse::Drawing::RendererContext* ctx);
    void DrawStroke(::g::Fuse::Drawing::RendererContext* ctx, ::g::Fuse::Drawing::Stroke* s);
    void DrawStrokes(::g::Fuse::Drawing::RendererContext* ctx);
    void EnsureFillRenderer(float density);
    void EnsureStrokeRenderers();
    ::g::Fuse::Drawing::Brush* Fill();
    void Fill(::g::Fuse::Drawing::Brush* value);
    uDelegate* FillRule();
    void FillRule(uDelegate* value);
    uObject* Fills();
    ::g::Fuse::Drawing::PathGeometry* Geometry();
    void Geometry(::g::Fuse::Drawing::PathGeometry* value);
    void GeometryChanged(::g::Fuse::Drawing::PathGeometry* geom);
    uObject* GetHitPart(::g::Uno::Float2 p);
    uObject* GetHitPart1(::g::Uno::Float2 p, uObject* fills, uObject* strokes);
    ::g::Fuse::Drawing::RendererContext* GetRendererContext(::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 transform, ::g::Uno::Float2 elementSize);
    ::g::Fuse::Drawing::PolygonFiller* GetStrokeRenderer(::g::Fuse::Drawing::Stroke* s, float density);
    bool HasFills();
    bool HasStrokes();
    ::g::Uno::Rect InnerBounds();
    void InvalidateStrokeAndFill();
    void InvalidateVisual();
    void OnFillAdded(::g::Fuse::Drawing::Brush* f);
    void OnFillRemoved(::g::Fuse::Drawing::Brush* f);
    void OnShadingChanged();
    void OnStrokeAdded(::g::Fuse::Drawing::Stroke* s);
    void OnStrokeChanged(::g::Fuse::Drawing::Stroke* s);
    void OnStrokeRemoved(::g::Fuse::Drawing::Stroke* s);
    ::g::Uno::Float2 PreScale();
    void PreScale(::g::Uno::Float2 value);
    void SoftDispose();
    ::g::Fuse::Drawing::Stroke* Stroke();
    void Stroke(::g::Fuse::Drawing::Stroke* value);
    ::g::Uno::Float4 StrokePadding();
    uObject* Strokes();
    void UpdateAa();
    void add_VisualInvalidated(uDelegate* value);
    void remove_VisualInvalidated(uDelegate* value);
    static PathGeometryRenderer* New1();
    static PathGeometryRenderer* New2(::g::Fuse::Drawing::PathGeometry* geometry);
};
// }

}}} // ::g::Fuse::Drawing
