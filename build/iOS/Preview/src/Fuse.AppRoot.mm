// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.iOS/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.AppRoot.h>
#include <Fuse.Controls.Native.iOS.FocusHelpers.h>
#include <Fuse.Controls.Native.iOS.KeyboardView.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.IntPtr.h>
#include <Uno.Object.h>
#include <Uno.Platform.ViewNativeHandle.h>
#include <Uno.Platform2.Application.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
#include <Uno.Float4.h>
static uString* STRINGS[2];

namespace g{
namespace Fuse{

// internal static extern class AppRoot :12
// {
// static AppRoot() :21
static void AppRoot__cctor__fn(uType* __type)
{
    AppRoot::_appRootView_ = AppRoot::CreateAppRootView(uPtr(::g::Fuse::Controls::Native::iOS::FocusHelpers::KeyboardView())->Handle());
}

static void AppRoot_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" not set as root");
    ::STRINGS[1] = uString::Const("Root already set to: ");
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), (uintptr_t)&::g::Fuse::AppRoot::_appRootView_, uFieldFlagsStatic,
        ::g::ObjC::Object_typeof(), (uintptr_t)&::g::Fuse::AppRoot::_root_, uFieldFlagsStatic);
}

uClassType* AppRoot_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.AppRoot", options);
    type->fp_build_ = AppRoot_build;
    type->fp_cctor_ = AppRoot__cctor__fn;
    return type;
}

// public static void set_ClearColor(float4 value) :40
void AppRoot__set_ClearColor_fn(::g::Uno::Float4* value)
{
    AppRoot::ClearColor(*value);
}

// private static ObjC.Object CreateAppRootView(ObjC.Object handle) :27
void AppRoot__CreateAppRootView_fn(uObject* handle, uObject** __retval)
{
    *__retval = AppRoot::CreateAppRootView(handle);
}

// public static void Remove(ObjC.Object root) :66
void AppRoot__Remove_fn(uObject* root)
{
    AppRoot::Remove(root);
}

// private static void Remove(ObjC.Object handle, ObjC.Object childHandle) :84
void AppRoot__Remove1_fn(uObject* handle, uObject* childHandle)
{
    AppRoot::Remove1(handle, childHandle);
}

// public static ObjC.Object get_RootView() :16
void AppRoot__get_RootView_fn(uObject** __retval)
{
    *__retval = AppRoot::RootView();
}

// public static void Set(ObjC.Object root) :57
void AppRoot__Set_fn(uObject* root)
{
    AppRoot::Set(root);
}

// private static void Set(ObjC.Object handle, ObjC.Object childHandle) :76
void AppRoot__Set1_fn(uObject* handle, uObject* childHandle)
{
    AppRoot::Set1(handle, childHandle);
}

// private static void SetAppRootView(Uno.IntPtr handle) :50
void AppRoot__SetAppRootView_fn(void** handle)
{
    AppRoot::SetAppRootView(*handle);
}

// private static void SetClearColor(ObjC.Object handle, float r, float g, float b, float a) :44
void AppRoot__SetClearColor_fn(uObject* handle, float* r, float* g, float* b, float* a)
{
    AppRoot::SetClearColor(handle, *r, *g, *b, *a);
}

uSStrong<uObject*> AppRoot::_appRootView_;
uSStrong<uObject*> AppRoot::_root_;

// private static ObjC.Object CreateAppRootView(ObjC.Object handle) [static] :27
uObject* AppRoot::CreateAppRootView(uObject* handle)
{
    AppRoot_typeof()->Init();
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id handle) -> ::id
        {
            ::UIControl* root = (::UIControl*)handle;
            			[root setUserInteractionEnabled: true];
            			[root setMultipleTouchEnabled: true];
            			[root setOpaque: false];
            			[&]() -> void { ::uForeignPool __foreignPool; AppRoot::SetAppRootView(root); }();
            			[root sizeToFit];
            			return root;
        } (::g::ObjC::Helpers::GetHandle(handle)));
        
    }
    
}

// public static void Remove(ObjC.Object root) [static] :66
void AppRoot::Remove(uObject* root)
{
    uStackFrame __("Fuse.AppRoot", "Remove(ObjC.Object)");
    AppRoot_typeof()->Init();

    if ((AppRoot::_root() == NULL) || (root != AppRoot::_root()))
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(root, ::STRINGS[0/*" not set as...*/])));

    AppRoot::Remove1(AppRoot::_appRootView(), AppRoot::_root());
    AppRoot::_root() = NULL;
}

// private static void Remove(ObjC.Object handle, ObjC.Object childHandle) [static] :84
void AppRoot::Remove1(uObject* handle, uObject* childHandle)
{
    AppRoot_typeof()->Init();
    @autoreleasepool
    {
        [] (::id handle, ::id childHandle) -> void
        {
            ::UIView* parent = (::UIView*)handle;
            			::UIView* child = (::UIView*)childHandle;
            			[child removeFromSuperview];
        } (::g::ObjC::Helpers::GetHandle(handle), ::g::ObjC::Helpers::GetHandle(childHandle));
        
    }
    
}

// public static void Set(ObjC.Object root) [static] :57
void AppRoot::Set(uObject* root)
{
    uStackFrame __("Fuse.AppRoot", "Set(ObjC.Object)");
    AppRoot_typeof()->Init();

    if (AppRoot::_root() != NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[1/*"Root alread...*/], AppRoot::_root())));

    AppRoot::_root() = root;
    AppRoot::Set1(AppRoot::_appRootView(), AppRoot::_root());
}

// private static void Set(ObjC.Object handle, ObjC.Object childHandle) [static] :76
void AppRoot::Set1(uObject* handle, uObject* childHandle)
{
    AppRoot_typeof()->Init();
    @autoreleasepool
    {
        [] (::id handle, ::id childHandle) -> void
        {
            ::UIView* parent = (::UIView*)handle;
            			::UIView* child = (::UIView*)childHandle;
            			[parent addSubview: child];
        } (::g::ObjC::Helpers::GetHandle(handle), ::g::ObjC::Helpers::GetHandle(childHandle));
        
    }
    
}

// private static void SetAppRootView(Uno.IntPtr handle) [static] :50
void AppRoot::SetAppRootView(void* handle)
{
    AppRoot_typeof()->Init();
    ::g::Uno::Platform2::Application::RootView((uPlatform2::ViewNativeHandle)handle);
}

// private static void SetClearColor(ObjC.Object handle, float r, float g, float b, float a) [static] :44
void AppRoot::SetClearColor(uObject* handle, float r, float g, float b, float a)
{
    AppRoot_typeof()->Init();
    @autoreleasepool
    {
        [] (::id handle, float r, float g, float b, float a) -> void
        {
            ::UIView* view = (::UIView*)handle;
            			[view setBackgroundColor: [::UIColor colorWithRed:(CGFloat)r green: (CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a]];
        } (::g::ObjC::Helpers::GetHandle(handle), r, g, b, a);
        
    }
    
}

// public static void set_ClearColor(float4 value) [static] :40
void AppRoot::ClearColor(::g::Uno::Float4 value)
{
    AppRoot_typeof()->Init();
    AppRoot::SetClearColor(AppRoot::_appRootView(), value.X, value.Y, value.Z, value.W);
}

// public static ObjC.Object get_RootView() [static] :16
uObject* AppRoot::RootView()
{
    AppRoot_typeof()->Init();
    return AppRoot::_appRootView();
}
// }

}} // ::g::Fuse
