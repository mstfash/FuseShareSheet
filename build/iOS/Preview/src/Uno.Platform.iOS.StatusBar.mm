// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Int.h>
#include <Uno.Platform.iOS.StatusBar.h>
#include <Uno.Platform.iOS.StatusBarAnimation.h>
#include <Uno.Platform.iOS.StatusBarStyle.h>
#include <Uno-iOS/AppDelegate.h>
namespace {

    static uAppDelegate *_getAppDelegate()
    {
        return (uAppDelegate *) [UIApplication sharedApplication].delegate;
    }

} // <anonymous> namespace
static uType* TYPES[1];

namespace g{
namespace Uno{
namespace Platform{
namespace iOS{

// public static extern class StatusBar :357
// {
static void StatusBar_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::TYPES[0/*Uno.Action*/], (uintptr_t)&::g::Uno::Platform::iOS::StatusBar::SettingsChanged1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(8,
        new uFunction("get_Animation", NULL, (void*)StatusBar__get_Animation_fn, 0, true, ::g::Uno::Platform::iOS::StatusBarAnimation_typeof(), 0),
        new uFunction("set_Animation", NULL, (void*)StatusBar__set_Animation_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Platform::iOS::StatusBarAnimation_typeof()),
        new uFunction("get_IsVisible", NULL, (void*)StatusBar__get_IsVisible_fn, 0, true, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsVisible", NULL, (void*)StatusBar__set_IsVisible_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("add_SettingsChanged", NULL, (void*)StatusBar__add_SettingsChanged_fn, 0, true, uVoid_typeof(), 1, ::TYPES[0/*Uno.Action*/]),
        new uFunction("remove_SettingsChanged", NULL, (void*)StatusBar__remove_SettingsChanged_fn, 0, true, uVoid_typeof(), 1, ::TYPES[0/*Uno.Action*/]),
        new uFunction("get_Style", NULL, (void*)StatusBar__get_Style_fn, 0, true, ::g::Uno::Platform::iOS::StatusBarStyle_typeof(), 0),
        new uFunction("set_Style", NULL, (void*)StatusBar__set_Style_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Platform::iOS::StatusBarStyle_typeof()));
}

uClassType* StatusBar_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Platform.iOS.StatusBar", options);
    type->fp_build_ = StatusBar_build;
    return type;
}

// public static Uno.Platform.iOS.StatusBarAnimation get_Animation() :395
void StatusBar__get_Animation_fn(int* __retval)
{
    *__retval = StatusBar::Animation();
}

// public static void set_Animation(Uno.Platform.iOS.StatusBarAnimation value) :396
void StatusBar__set_Animation_fn(int* value)
{
    StatusBar::Animation(*value);
}

// private static extern Uno.Platform.iOS.StatusBarAnimation GetAnimation() :417
void StatusBar__GetAnimation_fn(int* __retval)
{
    *__retval = StatusBar::GetAnimation();
}

// private static extern bool GetIsVisible() :411
void StatusBar__GetIsVisible_fn(bool* __retval)
{
    *__retval = StatusBar::GetIsVisible();
}

// private static extern Uno.Platform.iOS.StatusBarStyle GetStyle() :414
void StatusBar__GetStyle_fn(int* __retval)
{
    *__retval = StatusBar::GetStyle();
}

// public static bool get_IsVisible() :361
void StatusBar__get_IsVisible_fn(bool* __retval)
{
    *__retval = StatusBar::IsVisible();
}

// public static void set_IsVisible(bool value) :362
void StatusBar__set_IsVisible_fn(bool* value)
{
    StatusBar::IsVisible(*value);
}

// private static void OnSettingsChanged() :374
void StatusBar__OnSettingsChanged_fn()
{
    StatusBar::OnSettingsChanged();
}

// private static extern void SetAnimation(Uno.Platform.iOS.StatusBarAnimation animation) :418
void StatusBar__SetAnimation_fn(int* animation_)
{
    StatusBar::SetAnimation(*animation_);
}

// private static extern void SetIsVisible(bool isVisible) :412
void StatusBar__SetIsVisible_fn(bool* isVisible_)
{
    StatusBar::SetIsVisible(*isVisible_);
}

// private static extern void SetStyle(Uno.Platform.iOS.StatusBarStyle style) :415
void StatusBar__SetStyle_fn(int* style_)
{
    StatusBar::SetStyle(*style_);
}

// public static generated void add_SettingsChanged(Uno.Action value) :372
void StatusBar__add_SettingsChanged_fn(uDelegate* value)
{
    StatusBar::add_SettingsChanged(value);
}

// public static generated void remove_SettingsChanged(Uno.Action value) :372
void StatusBar__remove_SettingsChanged_fn(uDelegate* value)
{
    StatusBar::remove_SettingsChanged(value);
}

// public static Uno.Platform.iOS.StatusBarStyle get_Style() :382
void StatusBar__get_Style_fn(int* __retval)
{
    *__retval = StatusBar::Style();
}

// public static void set_Style(Uno.Platform.iOS.StatusBarStyle value) :383
void StatusBar__set_Style_fn(int* value)
{
    StatusBar::Style(*value);
}

uSStrong<uDelegate*> StatusBar::SettingsChanged1_;

// private static extern Uno.Platform.iOS.StatusBarAnimation GetAnimation() [static] :417
int StatusBar::GetAnimation()
{
    switch (_getAppDelegate().uStatusBarAnimation)
    {
        default:
        case UIStatusBarAnimationNone:
            return 0;
        case UIStatusBarAnimationFade:
            return 1;
        case UIStatusBarAnimationSlide:
            return 2;
    }
}

// private static extern bool GetIsVisible() [static] :411
bool StatusBar::GetIsVisible()
{
    return _getAppDelegate().uStatusBarVisible;
}

// private static extern Uno.Platform.iOS.StatusBarStyle GetStyle() [static] :414
int StatusBar::GetStyle()
{
    switch (_getAppDelegate().uStatusBarStyle)
    {
        case UIStatusBarStyleDefault:
            return 0;
    
        default:
        case UIStatusBarStyleLightContent:
            return 1;
    }
}

// private static void OnSettingsChanged() [static] :374
void StatusBar::OnSettingsChanged()
{
    uStackFrame __("Uno.Platform.iOS.StatusBar", "OnSettingsChanged()");

    if (::g::Uno::Delegate::op_Inequality(StatusBar::SettingsChanged1_, NULL))
        uPtr(StatusBar::SettingsChanged1_)->InvokeVoid();
}

// private static extern void SetAnimation(Uno.Platform.iOS.StatusBarAnimation animation) [static] :418
void StatusBar::SetAnimation(int animation_)
{
    UIStatusBarAnimation animation;
    
    switch (animation_)
    {
        case 0:
            animation = UIStatusBarAnimationNone;
            break;
        case 1:
            animation = UIStatusBarAnimationFade;
            break;
        case 2:
            animation = UIStatusBarAnimationSlide;
            break;
    }
    
    _getAppDelegate().uStatusBarAnimation = animation;
}

// private static extern void SetIsVisible(bool isVisible) [static] :412
void StatusBar::SetIsVisible(bool isVisible_)
{
    _getAppDelegate().uStatusBarVisible = isVisible_;
}

// private static extern void SetStyle(Uno.Platform.iOS.StatusBarStyle style) [static] :415
void StatusBar::SetStyle(int style_)
{
    _getAppDelegate().uStatusBarStyle
        = 0 == style_
            ? UIStatusBarStyleDefault
            : UIStatusBarStyleLightContent;
}

// public static Uno.Platform.iOS.StatusBarAnimation get_Animation() [static] :395
int StatusBar::Animation()
{
    return StatusBar::GetAnimation();
}

// public static void set_Animation(Uno.Platform.iOS.StatusBarAnimation value) [static] :396
void StatusBar::Animation(int value)
{
    uStackFrame __("Uno.Platform.iOS.StatusBar", "set_Animation(Uno.Platform.iOS.StatusBarAnimation)");

    if (value != StatusBar::Animation())
    {
        StatusBar::SetAnimation(value);
        StatusBar::OnSettingsChanged();
    }
}

// public static bool get_IsVisible() [static] :361
bool StatusBar::IsVisible()
{
    return StatusBar::GetIsVisible();
}

// public static void set_IsVisible(bool value) [static] :362
void StatusBar::IsVisible(bool value)
{
    uStackFrame __("Uno.Platform.iOS.StatusBar", "set_IsVisible(bool)");

    if (value != StatusBar::IsVisible())
    {
        StatusBar::SetIsVisible(value);
        StatusBar::OnSettingsChanged();
    }
}

// public static Uno.Platform.iOS.StatusBarStyle get_Style() [static] :382
int StatusBar::Style()
{
    return StatusBar::GetStyle();
}

// public static void set_Style(Uno.Platform.iOS.StatusBarStyle value) [static] :383
void StatusBar::Style(int value)
{
    uStackFrame __("Uno.Platform.iOS.StatusBar", "set_Style(Uno.Platform.iOS.StatusBarStyle)");

    if (value != StatusBar::Style())
    {
        StatusBar::SetStyle(value);
        StatusBar::OnSettingsChanged();
    }
}

// public static generated void add_SettingsChanged(Uno.Action value) [static] :372
void StatusBar::add_SettingsChanged(uDelegate* value)
{
    uStackFrame __("Uno.Platform.iOS.StatusBar", "add_SettingsChanged(Uno.Action)");
    StatusBar::SettingsChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(StatusBar::SettingsChanged1_, value), ::TYPES[0/*Uno.Action*/]);
}

// public static generated void remove_SettingsChanged(Uno.Action value) [static] :372
void StatusBar::remove_SettingsChanged(uDelegate* value)
{
    uStackFrame __("Uno.Platform.iOS.StatusBar", "remove_SettingsChanged(Uno.Action)");
    StatusBar::SettingsChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(StatusBar::SettingsChanged1_, value), ::TYPES[0/*Uno.Action*/]);
}
// }

}}}} // ::g::Uno::Platform::iOS
