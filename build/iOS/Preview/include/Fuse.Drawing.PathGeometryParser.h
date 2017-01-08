// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Paths/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry;}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometryParser;}}}
namespace g{namespace Fuse{namespace Drawing{struct Token;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class PathGeometryParser :330
// {
uType* PathGeometryParser_typeof();
void PathGeometryParser__ctor__fn(PathGeometryParser* __this, uString* data);
void PathGeometryParser__ClosePath_fn(PathGeometryParser* __this);
void PathGeometryParser__CurveTo_fn(PathGeometryParser* __this, float* offsetX, float* offsetY);
void PathGeometryParser__Deserialize_fn(uString* data, ::g::Fuse::Drawing::PathGeometry** __retval);
void PathGeometryParser__Execute_fn(PathGeometryParser* __this, uChar* c);
void PathGeometryParser__HLineTo_fn(PathGeometryParser* __this, float* offsetX, float* offsetY);
void PathGeometryParser__LineTo_fn(PathGeometryParser* __this, float* offsetX, float* offsetY);
void PathGeometryParser__MoveTo_fn(PathGeometryParser* __this, float* offsetX, float* offsetY);
void PathGeometryParser__New1_fn(uString* data, PathGeometryParser** __retval);
void PathGeometryParser__ReadFloat_fn(PathGeometryParser* __this, float* __retval);
void PathGeometryParser__SmoothCurveTo_fn(PathGeometryParser* __this, float* offsetX, float* offsetY);
void PathGeometryParser__StartNewToken_fn(PathGeometryParser* __this, int* prevLastChar, int* nextFirstChar, bool* hasAction);
void PathGeometryParser__VLineTo_fn(PathGeometryParser* __this, float* offsetX, float* offsetY);

struct PathGeometryParser : uObject
{
    uStrong<uString*> _data;
    uStrong< ::g::Fuse::Drawing::PathGeometry*> _head;
    uStrong< ::g::Fuse::Drawing::Token*> _headToken;
    uStrong< ::g::Fuse::Drawing::Token*> _prevToken;
    uStrong< ::g::Fuse::Drawing::Token*> _token;
    float _x;
    float _y;

    void ctor_(uString* data);
    void ClosePath();
    void CurveTo(float offsetX, float offsetY);
    void Execute(uChar c);
    void HLineTo(float offsetX, float offsetY);
    void LineTo(float offsetX, float offsetY);
    void MoveTo(float offsetX, float offsetY);
    float ReadFloat();
    void SmoothCurveTo(float offsetX, float offsetY);
    void StartNewToken(int prevLastChar, int nextFirstChar, bool hasAction);
    void VLineTo(float offsetX, float offsetY);
    static ::g::Fuse::Drawing::PathGeometry* Deserialize(uString* data);
    static PathGeometryParser* New1(uString* data);
};
// }

}}} // ::g::Fuse::Drawing
