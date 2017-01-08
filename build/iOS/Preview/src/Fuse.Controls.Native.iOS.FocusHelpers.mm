// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.FocusHelpers.h>
#include <Fuse.Controls.Native.iOS.FocusHelpers.PerformBecomeFirstResponder.h>
#include <Fuse.Controls.Native.iOS.KeyboardView.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <iOS/Helpers.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <uObjC.Foreign.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class FocusHelpers :391
// {
// static FocusHelpers() :394
static void FocusHelpers__cctor__fn(uType* __type)
{
    FocusHelpers::_keyboardView_ = ::g::Fuse::Controls::Native::iOS::KeyboardView::New1();
}

static void FocusHelpers_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Fuse::Controls::Native::iOS::KeyboardView_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::iOS::FocusHelpers::_keyboardView_, uFieldFlagsStatic);
}

uClassType* FocusHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.FocusHelpers", options);
    type->fp_build_ = FocusHelpers_build;
    type->fp_cctor_ = FocusHelpers__cctor__fn;
    return type;
}

// public static void BecomeFirstResponder(ObjC.Object uiView) :406
void FocusHelpers__BecomeFirstResponder_fn(uObject* uiView)
{
    FocusHelpers::BecomeFirstResponder(uiView);
}

// public static ObjC.Object GetCurrentFirstResponder() :427
void FocusHelpers__GetCurrentFirstResponder_fn(uObject** __retval)
{
    *__retval = FocusHelpers::GetCurrentFirstResponder();
}

// public static bool IsFirstResponder(ObjC.Object handle) :420
void FocusHelpers__IsFirstResponder_fn(uObject* handle, bool* __retval)
{
    *__retval = FocusHelpers::IsFirstResponder(handle);
}

// public static Fuse.Controls.Native.iOS.KeyboardView get_KeyboardView() :402
void FocusHelpers__get_KeyboardView_fn(::g::Fuse::Controls::Native::iOS::KeyboardView** __retval)
{
    *__retval = FocusHelpers::KeyboardView();
}

// public static void ResignFirstResponder(ObjC.Object uiView) :413
void FocusHelpers__ResignFirstResponder_fn(uObject* uiView)
{
    FocusHelpers::ResignFirstResponder(uiView);
}

// public static void ScheduleBecomeFirstResponder(ObjC.Object target) :446
void FocusHelpers__ScheduleBecomeFirstResponder_fn(uObject* target)
{
    FocusHelpers::ScheduleBecomeFirstResponder(target);
}

// public static void ScheduleResignFirstResponder(ObjC.Object target) :440
void FocusHelpers__ScheduleResignFirstResponder_fn(uObject* target)
{
    FocusHelpers::ScheduleResignFirstResponder(target);
}

uSStrong< ::g::Fuse::Controls::Native::iOS::KeyboardView*> FocusHelpers::_keyboardView_;

// public static void BecomeFirstResponder(ObjC.Object uiView) [static] :406
void FocusHelpers::BecomeFirstResponder(uObject* uiView)
{
    FocusHelpers_typeof()->Init();
    @autoreleasepool
    {
        [] (::id uiView) -> void
        {
            ::UIView* view = (::UIView*)uiView;
            			[view becomeFirstResponder];
        } (::g::ObjC::Helpers::GetHandle(uiView));
        
    }
    
}

// public static ObjC.Object GetCurrentFirstResponder() [static] :427
uObject* FocusHelpers::GetCurrentFirstResponder()
{
    FocusHelpers_typeof()->Init();
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            id responder = [UIResponder currentFirstResponder];	
            			if ([responder isKindOfClass: [::UIView class]])
            			{
            				return responder;
            			}
            			else
            			{
            				return nil;
            			}
        } ());
        
    }
    
}

// public static bool IsFirstResponder(ObjC.Object handle) [static] :420
bool FocusHelpers::IsFirstResponder(uObject* handle)
{
    FocusHelpers_typeof()->Init();
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            ::UIView* view = (::UIView*)handle;
            			return [view isFirstResponder];
        } (::g::ObjC::Helpers::GetHandle(handle));
        
    }
    
}

// public static void ResignFirstResponder(ObjC.Object uiView) [static] :413
void FocusHelpers::ResignFirstResponder(uObject* uiView)
{
    FocusHelpers_typeof()->Init();
    @autoreleasepool
    {
        [] (::id uiView) -> void
        {
            ::UIView* view = (::UIView*)uiView;
            			[view resignFirstResponder];
        } (::g::ObjC::Helpers::GetHandle(uiView));
        
    }
    
}

// public static void ScheduleBecomeFirstResponder(ObjC.Object target) [static] :446
void FocusHelpers::ScheduleBecomeFirstResponder(uObject* target)
{
    uStackFrame __("Fuse.Controls.Native.iOS.FocusHelpers", "ScheduleBecomeFirstResponder(ObjC.Object)");
    FocusHelpers_typeof()->Init();
    FocusHelpers::BecomeFirstResponder(target);
    ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)FocusHelpers__PerformBecomeFirstResponder__BecomeFirstResponder_fn, FocusHelpers__PerformBecomeFirstResponder::New1(target)), 0);
}

// public static void ScheduleResignFirstResponder(ObjC.Object target) [static] :440
void FocusHelpers::ScheduleResignFirstResponder(uObject* target)
{
    uStackFrame __("Fuse.Controls.Native.iOS.FocusHelpers", "ScheduleResignFirstResponder(ObjC.Object)");
    FocusHelpers_typeof()->Init();
    uPtr(FocusHelpers::KeyboardView())->HoldFocus(target);
    ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Fuse::Controls::Native::iOS::KeyboardView__HideKeyboard_fn, uPtr(FocusHelpers::KeyboardView())), 0);
}

// public static Fuse.Controls.Native.iOS.KeyboardView get_KeyboardView() [static] :402
::g::Fuse::Controls::Native::iOS::KeyboardView* FocusHelpers::KeyboardView()
{
    FocusHelpers_typeof()->Init();
    return FocusHelpers::_keyboardView();
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
