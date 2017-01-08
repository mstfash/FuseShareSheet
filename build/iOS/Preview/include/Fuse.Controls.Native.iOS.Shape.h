// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.IShapeView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Shape;}}}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct GradientStop;}}}
namespace g{namespace Fuse{namespace Drawing{struct LinearGradient;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal abstract extern class Shape :2122
// {
struct Shape_type : ::g::Fuse::Controls::Native::iOS::View_type
{
    ::g::Fuse::Controls::Native::IShapeView interface2;
    void(*fp_CreatePath)(::g::Fuse::Controls::Native::iOS::Shape*, uObject**);
};

Shape_type* Shape_typeof();
void Shape__ctor_1_fn(Shape* __this, ::g::Fuse::Visual* visual);
void Shape__Create_fn(uObject** __retval);
void Shape__Dispose_fn(Shape* __this);
void Shape__FuseControlsNativeIShapeViewUpdate_fn(Shape* __this, uArray* fills, uArray* strokes, float* pixelsPerPoint);
void Shape__MakeLayers_fn(uObject* handle, int* layerCount);
void Shape__OnShapeChanged_fn(Shape* __this);
void Shape__SelectOffset_fn(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b, int* __retval);
void Shape__SetBrush_fn(Shape* __this, ::g::Fuse::Drawing::Brush* brush, int* layer, uObject* path, bool* isLine, float* strokeWidth);
void Shape__SetBrush1_fn(uObject* handle, float* r, float* g, float* b, float* a, int* layerIndex, uObject* pathHandle, bool* isLine, float* strokeWidth, float* opacity);
void Shape__SetLinearGradient_fn(Shape* __this, ::g::Fuse::Drawing::LinearGradient* gradient, int* layer, uObject* path, bool* isLine, float* strokeWidth);
void Shape__SetLinearGradient1_fn(uObject* handle, int* layerIndex, uObject* pathHandle, bool* isLine, float* strokeWidth, float* startX, float* startY, float* endX, float* endY, uArray* colors, uArray* offsets, float* width, float* height);
void Shape__get_ShapePosition_fn(Shape* __this, ::g::Uno::Float2* __retval);
void Shape__set_ShapePosition_fn(Shape* __this, ::g::Uno::Float2* value);
void Shape__get_ShapeSize_fn(Shape* __this, ::g::Uno::Float2* __retval);
void Shape__set_ShapeSize_fn(Shape* __this, ::g::Uno::Float2* value);
void Shape__set_Size_fn(Shape* __this, ::g::Uno::Float2* value);
void Shape__set_Transform_fn(Shape* __this, ::g::Uno::Float4x4* value);

struct Shape : ::g::Fuse::Controls::Native::iOS::View
{
    uStrong<uArray*> _fills;
    uStrong<uArray*> _strokes;
    uStrong< ::g::Fuse::Visual*> _visual;
    ::g::Uno::Float2 _ShapePosition;
    ::g::Uno::Float2 _ShapeSize;

    void ctor_1(::g::Fuse::Visual* visual);
    uObject* CreatePath() { uObject* __retval; return (((Shape_type*)__type)->fp_CreatePath)(this, &__retval), __retval; }
    void OnShapeChanged();
    void SetBrush(::g::Fuse::Drawing::Brush* brush, int layer, uObject* path, bool isLine, float strokeWidth);
    void SetLinearGradient(::g::Fuse::Drawing::LinearGradient* gradient, int layer, uObject* path, bool isLine, float strokeWidth);
    ::g::Uno::Float2 ShapePosition();
    void ShapePosition(::g::Uno::Float2 value);
    ::g::Uno::Float2 ShapeSize();
    void ShapeSize(::g::Uno::Float2 value);
    static uObject* Create();
    static void MakeLayers(uObject* handle, int layerCount);
    static int SelectOffset(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b);
    static void SetBrush1(uObject* handle, float r, float g, float b, float a, int layerIndex, uObject* pathHandle, bool isLine, float strokeWidth, float opacity);
    static void SetLinearGradient1(uObject* handle, int layerIndex, uObject* pathHandle, bool isLine, float strokeWidth, float startX, float startY, float endX, float endY, uArray* colors, uArray* offsets, float width, float height);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
