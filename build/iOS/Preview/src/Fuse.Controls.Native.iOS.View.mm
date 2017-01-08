// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreGraphics/CoreGraphics.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.iOS.ViewParent.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <ObjC.Object.h>
#include <QuartzCore/QuartzCore.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Matrix.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[2];
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public abstract extern class View :3473
// {
static void View_build(uType* type)
{
    ::STRINGS[0] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno");
    ::STRINGS[1] = uString::Const("set_Background");
    ::TYPES[0] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[1] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(View_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(View_type, interface1));
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::View, _handle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::View, _hitTestEnabled), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::View, _isEnabled), 0,
        ::g::Fuse::Controls::Native::iOS::ViewParent_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::View, _parent), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::View, _size), 0);
    type->Reflection.SetFunctions(20,
        new uFunction("set_Background", NULL, (void*)View__set_Background_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("BringToFront", NULL, (void*)View__BringToFront_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("set_ClipToBounds", NULL, (void*)View__set_ClipToBounds_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Dispose", NULL, NULL, offsetof(View_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("get_Handle", NULL, (void*)View__get_Handle_fn, 0, false, ::g::ObjC::Object_typeof(), 0),
        new uFunction("Hide", NULL, (void*)View__Hide_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Hide", NULL, (void*)View__Hide1_fn, 0, true, uVoid_typeof(), 1, ::g::ObjC::Object_typeof()),
        new uFunction("set_HitTestEnabled", NULL, (void*)View__set_HitTestEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("set_IsEnabled", NULL, (void*)View__set_IsEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("set_Opacity", NULL, (void*)View__set_Opacity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("set_Position", NULL, (void*)View__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("SetAnchorPoint", NULL, (void*)View__SetAnchorPoint_fn, 0, true, uVoid_typeof(), 1, ::g::ObjC::Object_typeof()),
        new uFunction("SetBounds", NULL, (void*)View__SetBounds_fn, 0, true, uVoid_typeof(), 5, ::g::ObjC::Object_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("SetFrame", NULL, (void*)View__SetFrame_fn, 0, true, uVoid_typeof(), 5, ::g::ObjC::Object_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("SetTransform", NULL, (void*)View__SetTransform_fn, 0, true, uVoid_typeof(), 17, ::g::ObjC::Object_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("SetTransform", NULL, (void*)View__SetTransform1_fn, 0, true, uVoid_typeof(), 2, ::g::ObjC::Object_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("Show", NULL, (void*)View__Show_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Show", NULL, (void*)View__Show1_fn, 0, true, uVoid_typeof(), 1, ::g::ObjC::Object_typeof()),
        new uFunction("set_Size", NULL, NULL, offsetof(View_type, fp_set_Size), false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("set_Transform", NULL, NULL, offsetof(View_type, fp_set_Transform), false, uVoid_typeof(), 1, ::g::Uno::Float4x4_typeof()));
}

View_type* View_typeof()
{
    static uSStrong<View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(View);
    options.TypeSize = sizeof(View_type);
    type = (View_type*)uClassType::New("Fuse.Controls.Native.iOS.View", options);
    type->fp_build_ = View_build;
    type->fp_Dispose = View__Dispose_fn;
    type->fp_set_Size = View__set_Size_fn;
    type->fp_set_Transform = View__set_Transform_fn;
    type->interface0.fp_Show = (void(*)(uObject*))View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))View__Dispose_fn;
    return type;
}

// protected View(ObjC.Object handle) :3491
void View__ctor__fn(View* __this, uObject* handle)
{
    __this->ctor_(handle);
}

// public void set_Background(Fuse.Drawing.Brush value) :3531
void View__set_Background_fn(View* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->Background(value);
}

// public void BringToFront() :3593
void View__BringToFront_fn(View* __this)
{
    __this->BringToFront();
}

// private static void BringToFront(ObjC.Object handle) :3600
void View__BringToFront1_fn(uObject* handle)
{
    View::BringToFront1(handle);
}

// public void set_ClipToBounds(bool value) :3506
void View__set_ClipToBounds_fn(View* __this, bool* value)
{
    __this->ClipToBounds(*value);
}

// public virtual void Dispose() :3711
void View__Dispose_fn(View* __this)
{
}

// public ObjC.Object get_Handle() :3475
void View__get_Handle_fn(View* __this, uObject** __retval)
{
    *__retval = __this->Handle();
}

// public void Hide() :3572
void View__Hide_fn(View* __this)
{
    __this->Hide();
}

// public static void Hide(ObjC.Object handle) :3587
void View__Hide1_fn(uObject* handle)
{
    View::Hide1(handle);
}

// public void set_HitTestEnabled(bool value) :3618
void View__set_HitTestEnabled_fn(View* __this, bool* value)
{
    __this->HitTestEnabled(*value);
}

// public void set_IsEnabled(bool value) :3628
void View__set_IsEnabled_fn(View* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public void set_Opacity(float value) :3612
void View__set_Opacity_fn(View* __this, float* value)
{
    __this->Opacity(*value);
}

// internal Fuse.Controls.Native.iOS.ViewParent get_Parent() :3480
void View__get_Parent_fn(View* __this, ::g::Fuse::Controls::Native::iOS::ViewParent** __retval)
{
    *__retval = __this->Parent();
}

// internal void set_Parent(Fuse.Controls.Native.iOS.ViewParent value) :3481
void View__set_Parent_fn(View* __this, ::g::Fuse::Controls::Native::iOS::ViewParent* value)
{
    __this->Parent(value);
}

// public void set_Position(float2 value) :3552
void View__set_Position_fn(View* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// private static void SetAlpha(ObjC.Object handle, float a) :3648
void View__SetAlpha_fn(uObject* handle, float* a)
{
    View::SetAlpha(handle, *a);
}

// public static void SetAnchorPoint(ObjC.Object handle) :3498
void View__SetAnchorPoint_fn(uObject* handle)
{
    View::SetAnchorPoint(handle);
}

// private static void SetBackground(ObjC.Object handle, float r, float g, float b, float a) :3705
void View__SetBackground_fn(uObject* handle, float* r, float* g, float* b, float* a)
{
    View::SetBackground(handle, *r, *g, *b, *a);
}

// public static void SetBounds(ObjC.Object handle, float x, float y, float w, float h) :3665
void View__SetBounds_fn(uObject* handle, float* x, float* y, float* w, float* h)
{
    View::SetBounds(handle, *x, *y, *w, *h);
}

// private static void SetClipToBounds(ObjC.Object handle, bool clipToBounds) :3510
void View__SetClipToBounds_fn(uObject* handle, bool* clipToBounds)
{
    View::SetClipToBounds(handle, *clipToBounds);
}

// public static void SetFrame(ObjC.Object handle, float x, float y, float w, float h) :3672
void View__SetFrame_fn(uObject* handle, float* x, float* y, float* w, float* h)
{
    View::SetFrame(handle, *x, *y, *w, *h);
}

// private static void SetSize(ObjC.Object handle, float w, float h) :3655
void View__SetSize_fn(uObject* handle, float* w, float* h)
{
    View::SetSize(handle, *w, *h);
}

// public static void SetTransform(ObjC.Object handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) :3688
void View__SetTransform_fn(uObject* handle, float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44)
{
    View::SetTransform(handle, *m11, *m12, *m13, *m14, *m21, *m22, *m23, *m24, *m31, *m32, *m33, *m34, *m41, *m42, *m43, *m44);
}

// public static void SetTransform(ObjC.Object handle, float4x4 t) :3678
void View__SetTransform1_fn(uObject* handle, ::g::Uno::Float4x4* t)
{
    View::SetTransform1(handle, *t);
}

// private static void SetUserInteractionEnabled(ObjC.Object handle, bool enabled) :3641
void View__SetUserInteractionEnabled_fn(uObject* handle, bool* enabled)
{
    View::SetUserInteractionEnabled(handle, *enabled);
}

// public void Show() :3567
void View__Show_fn(View* __this)
{
    __this->Show();
}

// public static void Show(ObjC.Object handle) :3579
void View__Show1_fn(uObject* handle)
{
    View::Show1(handle);
}

// public virtual void set_Size(float2 value) :3558
void View__set_Size_fn(View* __this, ::g::Uno::Float2* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.View", "set_Size(float2)");
    ::g::Uno::Float2 value_ = *value;
    __this->_size = value_;
    View::SetSize(__this->Handle(), value_.X, value_.Y);

    if (__this->Parent() != NULL)
        uPtr(__this->Parent())->NotifyChildNewSize(__this, value_);
}

// public virtual void set_Transform(float4x4 value) :3518
void View__set_Transform_fn(View* __this, ::g::Uno::Float4x4* value)
{
    ::g::Uno::Float4x4 value_ = *value;
    ::g::Uno::Float4x4 t = value_;
    View::SetTransform(__this->Handle(), t.M11, t.M12, t.M13, t.M14, t.M21, t.M22, t.M23, t.M24, t.M31, t.M32, t.M33, t.M34, t.M41, t.M42, t.M43, t.M44);
}

// private bool get_UserInteractionEnabled() :3637
void View__get_UserInteractionEnabled_fn(View* __this, bool* __retval)
{
    *__retval = __this->UserInteractionEnabled();
}

// protected View(ObjC.Object handle) [instance] :3491
void View::ctor_(uObject* handle)
{
    _hitTestEnabled = true;
    _isEnabled = true;
    _handle = handle;
    View::SetAnchorPoint(_handle);
}

// public void set_Background(Fuse.Drawing.Brush value) [instance] :3531
void View::Background(::g::Fuse::Drawing::Brush* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.View", "set_Background(Fuse.Drawing.Brush)");
    ::g::Uno::Float4 c = ::g::Uno::Float4__New1(0.0f);

    if (value != NULL)
    {
        ::g::Fuse::Drawing::SolidColor* sc = uAs< ::g::Fuse::Drawing::SolidColor*>(value, ::TYPES[0/*Fuse.Drawing.SolidColor*/]);

        if (sc != NULL)
            c = uPtr(sc)->Color();

        ::g::Fuse::Drawing::StaticSolidColor* ssc = uAs< ::g::Fuse::Drawing::StaticSolidColor*>(value, ::TYPES[1/*Fuse.Drawing.StaticSolidColor*/]);

        if (ssc != NULL)
            c = uPtr(ssc)->Color();

        if ((sc == NULL) && (ssc == NULL))
            ::g::Fuse::Diagnostics::Unsupported(::g::Uno::Object::ToString(this), value, ::STRINGS[0/*"/Users/most...*/], 3544, ::STRINGS[1/*"set_Backgro...*/]);
    }

    View::SetBackground(Handle(), c.X, c.Y, c.Z, c.W);
}

// public void BringToFront() [instance] :3593
void View::BringToFront()
{
    View::BringToFront1(Handle());
}

// public void set_ClipToBounds(bool value) [instance] :3506
void View::ClipToBounds(bool value)
{
    View::SetClipToBounds(Handle(), value);
}

// public ObjC.Object get_Handle() [instance] :3475
uObject* View::Handle()
{
    return _handle;
}

// public void Hide() [instance] :3572
void View::Hide()
{
    View::Hide1(Handle());
}

// public void set_HitTestEnabled(bool value) [instance] :3618
void View::HitTestEnabled(bool value)
{
    _hitTestEnabled = value;
    View::SetUserInteractionEnabled(Handle(), UserInteractionEnabled());
}

// public void set_IsEnabled(bool value) [instance] :3628
void View::IsEnabled(bool value)
{
    _isEnabled = value;
    View::SetUserInteractionEnabled(Handle(), UserInteractionEnabled());
}

// public void set_Opacity(float value) [instance] :3612
void View::Opacity(float value)
{
    View::SetAlpha(Handle(), value);
}

// internal Fuse.Controls.Native.iOS.ViewParent get_Parent() [instance] :3480
::g::Fuse::Controls::Native::iOS::ViewParent* View::Parent()
{
    return _parent;
}

// internal void set_Parent(Fuse.Controls.Native.iOS.ViewParent value) [instance] :3481
void View::Parent(::g::Fuse::Controls::Native::iOS::ViewParent* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.View", "set_Parent(Fuse.Controls.Native.iOS.ViewParent)");
    _parent = value;

    if (_parent != NULL)
        uPtr(_parent)->NotifyChildNewSize(this, _size);
}

// public void set_Position(float2 value) [instance] :3552
void View::Position(::g::Uno::Float2 value)
{
    Transform(::g::Uno::Matrix::Translation1(::g::Uno::Float3__New4(value, 0.0f)));
}

// public void Show() [instance] :3567
void View::Show()
{
    View::Show1(Handle());
}

// private bool get_UserInteractionEnabled() [instance] :3637
bool View::UserInteractionEnabled()
{
    return _isEnabled ? _hitTestEnabled : _isEnabled;
}

// private static void BringToFront(ObjC.Object handle) [static] :3600
void View::BringToFront1(uObject* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            ::UIView* view = (::UIView*)handle;
            			::UIView* superview = [view superview];
            			if (superview != nil)
            			{
            				[superview bringSubviewToFront: view];
            			}
        } (::g::ObjC::Helpers::GetHandle(handle));
        
    }
    
}

// public static void Hide(ObjC.Object handle) [static] :3587
void View::Hide1(uObject* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            ::UIView* view = (::UIView*)handle;
            			[view setHidden: true];
        } (::g::ObjC::Helpers::GetHandle(handle));
        
    }
    
}

// private static void SetAlpha(ObjC.Object handle, float a) [static] :3648
void View::SetAlpha(uObject* handle, float a)
{
    @autoreleasepool
    {
        [] (::id handle, float a) -> void
        {
            ::UIView* view = (::UIView*)handle;
            			[view setAlpha: (CGFloat)a];
        } (::g::ObjC::Helpers::GetHandle(handle), a);
        
    }
    
}

// public static void SetAnchorPoint(ObjC.Object handle) [static] :3498
void View::SetAnchorPoint(uObject* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            ::UIView* view = (::UIView*)handle;
            			[[view layer] setAnchorPoint: { 0.0f, 0.0f }];
        } (::g::ObjC::Helpers::GetHandle(handle));
        
    }
    
}

// private static void SetBackground(ObjC.Object handle, float r, float g, float b, float a) [static] :3705
void View::SetBackground(uObject* handle, float r, float g, float b, float a)
{
    @autoreleasepool
    {
        [] (::id handle, float r, float g, float b, float a) -> void
        {
            ::UIView* view = (::UIView*)handle;
            			[view setBackgroundColor:[::UIColor colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a]];
        } (::g::ObjC::Helpers::GetHandle(handle), r, g, b, a);
        
    }
    
}

// public static void SetBounds(ObjC.Object handle, float x, float y, float w, float h) [static] :3665
void View::SetBounds(uObject* handle, float x, float y, float w, float h)
{
    @autoreleasepool
    {
        [] (::id handle, float x, float y, float w, float h) -> void
        {
            ::UIView* view = (::UIView*)handle;
            			[view setBounds: { { x, y }, { w, h } }];
        } (::g::ObjC::Helpers::GetHandle(handle), x, y, w, h);
        
    }
    
}

// private static void SetClipToBounds(ObjC.Object handle, bool clipToBounds) [static] :3510
void View::SetClipToBounds(uObject* handle, bool clipToBounds)
{
    @autoreleasepool
    {
        [] (::id handle, bool clipToBounds) -> void
        {
            ::UIView* view = (::UIView*)handle;
            			[view setClipsToBounds:clipToBounds];
        } (::g::ObjC::Helpers::GetHandle(handle), clipToBounds);
        
    }
    
}

// public static void SetFrame(ObjC.Object handle, float x, float y, float w, float h) [static] :3672
void View::SetFrame(uObject* handle, float x, float y, float w, float h)
{
    @autoreleasepool
    {
        [] (::id handle, float x, float y, float w, float h) -> void
        {
            ::UIView* view = (::UIView*)handle;
            			[view setFrame: { { x, y }, { w, h } }];
        } (::g::ObjC::Helpers::GetHandle(handle), x, y, w, h);
        
    }
    
}

// private static void SetSize(ObjC.Object handle, float w, float h) [static] :3655
void View::SetSize(uObject* handle, float w, float h)
{
    @autoreleasepool
    {
        [] (::id handle, float w, float h) -> void
        {
            ::UIView* view = (::UIView*)handle;
            			auto t = [[view layer] transform];
            			[[view layer] setTransform:CATransform3DIdentity];
            			[view setFrame: { { 0.0f, 0.0f }, { (CGFloat)w, (CGFloat)h } } ];
            			[[view layer] setTransform:t];
        } (::g::ObjC::Helpers::GetHandle(handle), w, h);
        
    }
    
}

// public static void SetTransform(ObjC.Object handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) [static] :3688
void View::SetTransform(uObject* handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
    @autoreleasepool
    {
        [] (::id handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) -> void
        {
            CATransform3D transform = {
            				m11, m12, m13, m14,
            				m21, m22, m23, m24,
            				m31, m32, m33, m34,
            				m41, m42, m43, m44
            			};
            			::UIView* view = (::UIView*)handle;
            			[[view layer] setTransform:transform];
        } (::g::ObjC::Helpers::GetHandle(handle), m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
        
    }
    
}

// public static void SetTransform(ObjC.Object handle, float4x4 t) [static] :3678
void View::SetTransform1(uObject* handle, ::g::Uno::Float4x4 t)
{
    View::SetTransform(handle, t.M11, t.M12, t.M13, t.M14, t.M21, t.M22, t.M23, t.M24, t.M31, t.M32, t.M33, t.M34, t.M41, t.M42, t.M43, t.M44);
}

// private static void SetUserInteractionEnabled(ObjC.Object handle, bool enabled) [static] :3641
void View::SetUserInteractionEnabled(uObject* handle, bool enabled)
{
    @autoreleasepool
    {
        [] (::id handle, bool enabled) -> void
        {
            ::UIView* view = (::UIView*)handle;
            			[view setUserInteractionEnabled:enabled];
        } (::g::ObjC::Helpers::GetHandle(handle), enabled);
        
    }
    
}

// public static void Show(ObjC.Object handle) [static] :3579
void View::Show1(uObject* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            ::UIView* view = (::UIView*)handle;
            			[view setHidden: false];
        } (::g::ObjC::Helpers::GetHandle(handle));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
