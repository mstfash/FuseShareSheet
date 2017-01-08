// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Paths/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.Rect.h>
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry;}}}
namespace g{namespace Fuse{namespace Drawing{struct Polygon;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public class PathGeometry :134
// {
struct PathGeometry_type : uType
{
    void(*fp_get_EndsContour)(::g::Fuse::Drawing::PathGeometry*, bool*);
    void(*fp_get_EndTangent)(::g::Fuse::Drawing::PathGeometry*, ::g::Uno::Float2*);
    void(*fp_EvaluateLast)(::g::Fuse::Drawing::PathGeometry*, uObject**);
    void(*fp_FindStartOfLastContour)(::g::Fuse::Drawing::PathGeometry*, ::g::Uno::Float2*);
    void(*fp_get_HasLastBounds)(::g::Fuse::Drawing::PathGeometry*, bool*);
    void(*fp_get_LastBounds)(::g::Fuse::Drawing::PathGeometry*, ::g::Uno::Rect*);
    void(*fp_Serialize)(::g::Fuse::Drawing::PathGeometry*, uString**);
};

PathGeometry_type* PathGeometry_typeof();
void PathGeometry__ctor__fn(PathGeometry* __this);
void PathGeometry__get_Bounds_fn(PathGeometry* __this, ::g::Uno::Rect* __retval);
void PathGeometry__CalculateBounds_fn(PathGeometry* __this, ::g::Uno::Rect* __retval);
void PathGeometry__ClosePath_fn(PathGeometry* __this, PathGeometry** __retval);
void PathGeometry__CurveTo_fn(PathGeometry* __this, ::g::Uno::Float2* controlPointStart, ::g::Uno::Float2* controlPointEnd, ::g::Uno::Float2* position, PathGeometry** __retval);
void PathGeometry__get_EndPosition_fn(PathGeometry* __this, ::g::Uno::Float2* __retval);
void PathGeometry__get_EndsContour_fn(PathGeometry* __this, bool* __retval);
void PathGeometry__get_EndTangent_fn(PathGeometry* __this, ::g::Uno::Float2* __retval);
void PathGeometry__EvaluateLast_fn(PathGeometry* __this, uObject** __retval);
void PathGeometry__FindStartOfLastContour_fn(PathGeometry* __this, ::g::Uno::Float2* __retval);
void PathGeometry__get_HasLastBounds_fn(PathGeometry* __this, bool* __retval);
void PathGeometry__HorizontalLineTo_fn(PathGeometry* __this, float* x, PathGeometry** __retval);
void PathGeometry__get_LastBounds_fn(PathGeometry* __this, ::g::Uno::Rect* __retval);
void PathGeometry__LineTo_fn(PathGeometry* __this, float* x, float* y, PathGeometry** __retval);
void PathGeometry__LineTo1_fn(PathGeometry* __this, ::g::Uno::Float2* position, PathGeometry** __retval);
void PathGeometry__MoveTo_fn(PathGeometry* __this, float* x, float* y, PathGeometry** __retval);
void PathGeometry__MoveTo1_fn(PathGeometry* __this, ::g::Uno::Float2* position, PathGeometry** __retval);
void PathGeometry__New1_fn(PathGeometry** __retval);
void PathGeometry__Parse_fn(uString* pathDescription, PathGeometry** __retval);
void PathGeometry__PathGeometryCtor_fn(PathGeometry* __this, PathGeometry* previous, ::g::Uno::Float2* position);
void PathGeometry__RemoveLast_fn(PathGeometry* __this, PathGeometry** __retval);
void PathGeometry__Serialize_fn(PathGeometry* __this, uString** __retval);
void PathGeometry__SmoothCurveTo_fn(PathGeometry* __this, ::g::Uno::Float2* controlPointEnd, ::g::Uno::Float2* position, PathGeometry** __retval);
void PathGeometry__ToPolygon_fn(PathGeometry* __this, uDelegate* WindingRule, ::g::Uno::Float2* scale, ::g::Fuse::Drawing::Polygon** __retval);
void PathGeometry__ToString_fn(PathGeometry* __this, uString** __retval);
void PathGeometry__VerticalLineTo_fn(PathGeometry* __this, float* y, PathGeometry** __retval);

struct PathGeometry : uObject
{
    ::g::Uno::Rect _boundsCache;
    bool _hasBoundsCache;
    ::g::Uno::Float2 _position;
    uStrong<PathGeometry*> _previous;

    void ctor_();
    ::g::Uno::Rect Bounds();
    ::g::Uno::Rect CalculateBounds();
    PathGeometry* ClosePath();
    PathGeometry* CurveTo(::g::Uno::Float2 controlPointStart, ::g::Uno::Float2 controlPointEnd, ::g::Uno::Float2 position);
    ::g::Uno::Float2 EndPosition();
    bool EndsContour() { bool __retval; return (((PathGeometry_type*)__type)->fp_get_EndsContour)(this, &__retval), __retval; }
    ::g::Uno::Float2 EndTangent() { ::g::Uno::Float2 __retval; return (((PathGeometry_type*)__type)->fp_get_EndTangent)(this, &__retval), __retval; }
    uObject* EvaluateLast() { uObject* __retval; return (((PathGeometry_type*)__type)->fp_EvaluateLast)(this, &__retval), __retval; }
    ::g::Uno::Float2 FindStartOfLastContour() { ::g::Uno::Float2 __retval; return (((PathGeometry_type*)__type)->fp_FindStartOfLastContour)(this, &__retval), __retval; }
    bool HasLastBounds() { bool __retval; return (((PathGeometry_type*)__type)->fp_get_HasLastBounds)(this, &__retval), __retval; }
    PathGeometry* HorizontalLineTo(float x);
    ::g::Uno::Rect LastBounds() { ::g::Uno::Rect __retval; return (((PathGeometry_type*)__type)->fp_get_LastBounds)(this, &__retval), __retval; }
    PathGeometry* LineTo(float x, float y);
    PathGeometry* LineTo1(::g::Uno::Float2 position);
    PathGeometry* MoveTo(float x, float y);
    PathGeometry* MoveTo1(::g::Uno::Float2 position);
    void PathGeometryCtor(PathGeometry* previous, ::g::Uno::Float2 position);
    PathGeometry* RemoveLast();
    uString* Serialize() { uString* __retval; return (((PathGeometry_type*)__type)->fp_Serialize)(this, &__retval), __retval; }
    PathGeometry* SmoothCurveTo(::g::Uno::Float2 controlPointEnd, ::g::Uno::Float2 position);
    ::g::Fuse::Drawing::Polygon* ToPolygon(uDelegate* WindingRule, ::g::Uno::Float2 scale);
    PathGeometry* VerticalLineTo(float y);
    static uObject* EvaluateLast(PathGeometry* __this) { uObject* __retval; return PathGeometry__EvaluateLast_fn(__this, &__retval), __retval; }
    static ::g::Uno::Float2 FindStartOfLastContour(PathGeometry* __this) { ::g::Uno::Float2 __retval; return PathGeometry__FindStartOfLastContour_fn(__this, &__retval), __retval; }
    static PathGeometry* New1();
    static PathGeometry* Parse(uString* pathDescription);
    static uString* Serialize(PathGeometry* __this) { uString* __retval; return PathGeometry__Serialize_fn(__this, &__retval), __retval; }
    static bool EndsContour(PathGeometry* __this) { bool __retval; return PathGeometry__get_EndsContour_fn(__this, &__retval), __retval; }
    static ::g::Uno::Float2 EndTangent(PathGeometry* __this) { ::g::Uno::Float2 __retval; return PathGeometry__get_EndTangent_fn(__this, &__retval), __retval; }
    static bool HasLastBounds(PathGeometry* __this) { bool __retval; return PathGeometry__get_HasLastBounds_fn(__this, &__retval), __retval; }
    static ::g::Uno::Rect LastBounds(PathGeometry* __this) { ::g::Uno::Rect __retval; return PathGeometry__get_LastBounds_fn(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Drawing
