// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreGraphics/CoreGraphics.h>
#include <Fuse.Controls.Native.iOS.iOSDevice.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <uObjC.Foreign.h>
#include <Fuse.LayoutParams.h>
#include <Uno.Float2.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public abstract extern class LeafView :1462
// {
static void LeafView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(LeafView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(LeafView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(LeafView_type, interface2));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction("Measure", NULL, (void*)LeafView__Measure_fn, 0, false, ::g::Uno::Float2_typeof(), 2, ::g::Fuse::LayoutParams_typeof(), ::g::Uno::Float_typeof()));
}

LeafView_type* LeafView_typeof()
{
    static uSStrong<LeafView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::View_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(LeafView);
    options.TypeSize = sizeof(LeafView_type);
    type = (LeafView_type*)uClassType::New("Fuse.Controls.Native.iOS.LeafView", options);
    type->fp_build_ = LeafView_build;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))LeafView__Measure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::iOS::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::iOS::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::iOS::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::iOS::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Dispose_fn;
    return type;
}

// protected LeafView(ObjC.Object handle) :1465
void LeafView__ctor_1_fn(LeafView* __this, uObject* handle)
{
    __this->ctor_1(handle);
}

// public float2 Measure(Fuse.LayoutParams lp, float density) :1467
void LeafView__Measure_fn(LeafView* __this, ::g::Fuse::LayoutParams* lp, float* density, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Measure(*lp, *density);
}

// private static void SizeThatFits(ObjC.Object handle, float w, float h, float& resW, float& resH) :1486
void LeafView__SizeThatFits_fn(uObject* handle, float* w, float* h, float* resW, float* resH)
{
    LeafView::SizeThatFits(handle, *w, *h, resW, resH);
}

// protected LeafView(ObjC.Object handle) [instance] :1465
void LeafView::ctor_1(uObject* handle)
{
    ctor_(handle);
}

// public float2 Measure(Fuse.LayoutParams lp, float density) [instance] :1467
::g::Uno::Float2 LeafView::Measure(::g::Fuse::LayoutParams lp, float density)
{
    uStackFrame __("Fuse.Controls.Native.iOS.LeafView", "Measure(Fuse.LayoutParams,float)");
    ::g::Uno::Float2 fillSize = lp.Size();

    if (!lp.HasX())
        fillSize.X = 1000000.0f;

    if (!lp.HasY())
        fillSize.Y = 1000000.0f;

    ::g::Uno::Float2 maxSize = ::g::Fuse::Controls::Native::iOS::iOSDevice::CompensateForOrientation(fillSize);
    float resW;
    float resH;
    LeafView::SizeThatFits(Handle(), maxSize.X, maxSize.Y, &resW, &resH);
    ::g::Uno::Float2 result = ::g::Uno::Float2__New2(resW, resH);
    return ::g::Fuse::Controls::Native::iOS::iOSDevice::CompensateForOrientation(result);
}

// private static void SizeThatFits(ObjC.Object handle, float w, float h, float& resW, float& resH) [static] :1486
void LeafView::SizeThatFits(uObject* handle, float w, float h, float* resW, float* resH)
{
    @autoreleasepool
    {
        [] (::id handle, float w, float h, float* resW, float* resH) -> void
        {
            ::UIView* view = (::UIView*)handle;
            			CGSize size = { w, h };
            			CGSize result = [view sizeThatFits:size];
            			*resW = (float)result.width;
            			*resH = (float)result.height;
        } (::g::ObjC::Helpers::GetHandle(handle), w, h, resW, resH);
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
