// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.iOS/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.Bindings.iOSDeviceInterop.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Platform2.Application.h>
#include <uObjC.Foreign.h>
#include <Uno.Float2.h>
#include <Uno.Rect.h>

namespace g{
namespace Fuse{
namespace iOS{
namespace Bindings{

// internal static extern class iOSDeviceInterop :353
// {
static void iOSDeviceInterop_build(uType* type)
{
}

uClassType* iOSDeviceInterop_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Bindings.iOSDeviceInterop", options);
    type->fp_build_ = iOSDeviceInterop_build;
    return type;
}

// public static bool IsOrientationLandscape() :362
void iOSDeviceInterop__IsOrientationLandscape_fn(bool* __retval)
{
    *__retval = iOSDeviceInterop::IsOrientationLandscape();
}

// public static bool IsRootView(ObjC.Object uiView) :356
void iOSDeviceInterop__IsRootView_fn(uObject* uiView, bool* __retval)
{
    *__retval = iOSDeviceInterop::IsRootView(uiView);
}

// public static float2 Pre_iOS8_HandleDeviceOrientation(float2 size, ObjC.Object uiView) :369
void iOSDeviceInterop__Pre_iOS8_HandleDeviceOrientation_fn(::g::Uno::Float2* size, uObject* uiView, ::g::Uno::Float2* __retval)
{
    *__retval = iOSDeviceInterop::Pre_iOS8_HandleDeviceOrientation(*size, uiView);
}

// public static Uno.Rect Pre_iOS8_HandleDeviceOrientation(Uno.Rect rect, ObjC.Object uiView) :377
void iOSDeviceInterop__Pre_iOS8_HandleDeviceOrientation1_fn(::g::Uno::Rect* rect, uObject* uiView, ::g::Uno::Rect* __retval)
{
    *__retval = iOSDeviceInterop::Pre_iOS8_HandleDeviceOrientation1(*rect, uiView);
}

// public static bool get_PreV8() :390
void iOSDeviceInterop__get_PreV8_fn(bool* __retval)
{
    *__retval = iOSDeviceInterop::PreV8();
}

// public static bool IsOrientationLandscape() [static] :362
bool iOSDeviceInterop::IsOrientationLandscape()
{
    @autoreleasepool
    {
        UIInterfaceOrientation o = [UIApplication sharedApplication].statusBarOrientation;
        			return o == UIInterfaceOrientationLandscapeLeft ||
        				o == UIInterfaceOrientationLandscapeRight;
    }
    
}

// public static bool IsRootView(ObjC.Object uiView) [static] :356
bool iOSDeviceInterop::IsRootView(uObject* uiView)
{
    @autoreleasepool
    {
        return [] (::id uiView) -> bool
        {
            return (uPlatform2::ViewNativeHandle)uiView == ::g::Uno::Platform2::Application::GetRootView();
        } (::g::ObjC::Helpers::GetHandle(uiView));
        
    }
    
}

// public static float2 Pre_iOS8_HandleDeviceOrientation(float2 size, ObjC.Object uiView) [static] :369
::g::Uno::Float2 iOSDeviceInterop::Pre_iOS8_HandleDeviceOrientation(::g::Uno::Float2 size, uObject* uiView)
{
    if ((iOSDeviceInterop::PreV8() && iOSDeviceInterop::IsOrientationLandscape()) && ((uiView == NULL) || iOSDeviceInterop::IsRootView(uiView)))
        return ::g::Uno::Float2__New2(size.Y, size.X);

    return size;
}

// public static Uno.Rect Pre_iOS8_HandleDeviceOrientation(Uno.Rect rect, ObjC.Object uiView) [static] :377
::g::Uno::Rect iOSDeviceInterop::Pre_iOS8_HandleDeviceOrientation1(::g::Uno::Rect rect, uObject* uiView)
{
    if ((iOSDeviceInterop::PreV8() && iOSDeviceInterop::IsOrientationLandscape()) && ((uiView == NULL) || iOSDeviceInterop::IsRootView(uiView)))
    {
        ::g::Uno::Float2 pos = rect.Position();
        ::g::Uno::Float2 size = rect.Size();
        return ::g::Uno::Rect__New2(::g::Uno::Float2__New2(pos.Y, pos.X), ::g::Uno::Float2__New2(size.Y, size.X));
    }

    return rect;
}

// public static bool get_PreV8() [static] :390
bool iOSDeviceInterop::PreV8()
{
    return NSFoundationVersionNumber <= NSFoundationVersionNumber_iOS_7_1;
}
// }

}}}} // ::g::Fuse::iOS::Bindings
