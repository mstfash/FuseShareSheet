// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IView.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct View;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct ViewParent;}}}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public abstract extern class View :3473
// {
struct View_type : uType
{
    ::g::Fuse::Controls::Native::IView interface0;
    ::g::Uno::IDisposable interface1;
    void(*fp_Dispose)(::g::Fuse::Controls::Native::iOS::View*);
    void(*fp_set_Size)(::g::Fuse::Controls::Native::iOS::View*, ::g::Uno::Float2*);
    void(*fp_set_Transform)(::g::Fuse::Controls::Native::iOS::View*, ::g::Uno::Float4x4*);
};

View_type* View_typeof();
void View__ctor__fn(View* __this, uObject* handle);
void View__set_Background_fn(View* __this, ::g::Fuse::Drawing::Brush* value);
void View__BringToFront_fn(View* __this);
void View__BringToFront1_fn(uObject* handle);
void View__set_ClipToBounds_fn(View* __this, bool* value);
void View__Dispose_fn(View* __this);
void View__get_Handle_fn(View* __this, uObject** __retval);
void View__Hide_fn(View* __this);
void View__Hide1_fn(uObject* handle);
void View__set_HitTestEnabled_fn(View* __this, bool* value);
void View__set_IsEnabled_fn(View* __this, bool* value);
void View__set_Opacity_fn(View* __this, float* value);
void View__get_Parent_fn(View* __this, ::g::Fuse::Controls::Native::iOS::ViewParent** __retval);
void View__set_Parent_fn(View* __this, ::g::Fuse::Controls::Native::iOS::ViewParent* value);
void View__set_Position_fn(View* __this, ::g::Uno::Float2* value);
void View__SetAlpha_fn(uObject* handle, float* a);
void View__SetAnchorPoint_fn(uObject* handle);
void View__SetBackground_fn(uObject* handle, float* r, float* g, float* b, float* a);
void View__SetBounds_fn(uObject* handle, float* x, float* y, float* w, float* h);
void View__SetClipToBounds_fn(uObject* handle, bool* clipToBounds);
void View__SetFrame_fn(uObject* handle, float* x, float* y, float* w, float* h);
void View__SetSize_fn(uObject* handle, float* w, float* h);
void View__SetTransform_fn(uObject* handle, float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44);
void View__SetTransform1_fn(uObject* handle, ::g::Uno::Float4x4* t);
void View__SetUserInteractionEnabled_fn(uObject* handle, bool* enabled);
void View__Show_fn(View* __this);
void View__Show1_fn(uObject* handle);
void View__set_Size_fn(View* __this, ::g::Uno::Float2* value);
void View__set_Transform_fn(View* __this, ::g::Uno::Float4x4* value);
void View__get_UserInteractionEnabled_fn(View* __this, bool* __retval);

struct View : uObject
{
    uStrong<uObject*> _handle;
    bool _hitTestEnabled;
    bool _isEnabled;
    uStrong< ::g::Fuse::Controls::Native::iOS::ViewParent*> _parent;
    ::g::Uno::Float2 _size;

    void ctor_(uObject* handle);
    void Background(::g::Fuse::Drawing::Brush* value);
    void BringToFront();
    void ClipToBounds(bool value);
    void Dispose() { (((View_type*)__type)->fp_Dispose)(this); }
    uObject* Handle();
    void Hide();
    void HitTestEnabled(bool value);
    void IsEnabled(bool value);
    void Opacity(float value);
    ::g::Fuse::Controls::Native::iOS::ViewParent* Parent();
    void Parent(::g::Fuse::Controls::Native::iOS::ViewParent* value);
    void Position(::g::Uno::Float2 value);
    void Show();
    void Size(::g::Uno::Float2 value);
    void Transform(::g::Uno::Float4x4 value);
    bool UserInteractionEnabled();
    static void BringToFront1(uObject* handle);
    static void Dispose(View* __this) { View__Dispose_fn(__this); }
    static void Hide1(uObject* handle);
    static void SetAlpha(uObject* handle, float a);
    static void SetAnchorPoint(uObject* handle);
    static void SetBackground(uObject* handle, float r, float g, float b, float a);
    static void SetBounds(uObject* handle, float x, float y, float w, float h);
    static void SetClipToBounds(uObject* handle, bool clipToBounds);
    static void SetFrame(uObject* handle, float x, float y, float w, float h);
    static void SetSize(uObject* handle, float w, float h);
    static void SetTransform(uObject* handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44);
    static void SetTransform1(uObject* handle, ::g::Uno::Float4x4 t);
    static void SetUserInteractionEnabled(uObject* handle, bool enabled);
    static void Show1(uObject* handle);
    static void Size(View* __this, ::g::Uno::Float2 value);
    static void Transform(View* __this, ::g::Uno::Float4x4 value);
};

}}}}} // ::g::Fuse::Controls::Native::iOS

#include <Uno.Float4x4.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

inline void View::Size(::g::Uno::Float2 value) { (((View_type*)__type)->fp_set_Size)(this, &value); }
inline void View::Transform(::g::Uno::Float4x4 value) { (((View_type*)__type)->fp_set_Transform)(this, &value); }
inline void View::Size(View* __this, ::g::Uno::Float2 value) { View__set_Size_fn(__this, &value); }
inline void View::Transform(View* __this, ::g::Uno::Float4x4 value) { View__set_Transform_fn(__this, &value); }
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
