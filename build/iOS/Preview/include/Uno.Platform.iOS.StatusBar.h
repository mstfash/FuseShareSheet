// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Platform{namespace iOS{struct StatusBar;}}}}

namespace g{
namespace Uno{
namespace Platform{
namespace iOS{

// public static extern class StatusBar :357
// {
uClassType* StatusBar_typeof();
void StatusBar__get_Animation_fn(int* __retval);
void StatusBar__set_Animation_fn(int* value);
void StatusBar__GetAnimation_fn(int* __retval);
void StatusBar__GetIsVisible_fn(bool* __retval);
void StatusBar__GetStyle_fn(int* __retval);
void StatusBar__get_IsVisible_fn(bool* __retval);
void StatusBar__set_IsVisible_fn(bool* value);
void StatusBar__OnSettingsChanged_fn();
void StatusBar__SetAnimation_fn(int* animation_);
void StatusBar__SetIsVisible_fn(bool* isVisible_);
void StatusBar__SetStyle_fn(int* style_);
void StatusBar__add_SettingsChanged_fn(uDelegate* value);
void StatusBar__remove_SettingsChanged_fn(uDelegate* value);
void StatusBar__get_Style_fn(int* __retval);
void StatusBar__set_Style_fn(int* value);

struct StatusBar : uObject
{
    static uSStrong<uDelegate*> SettingsChanged1_;
    static uSStrong<uDelegate*>& SettingsChanged1() { return SettingsChanged1_; }

    static int GetAnimation();
    static bool GetIsVisible();
    static int GetStyle();
    static void OnSettingsChanged();
    static void SetAnimation(int animation_);
    static void SetIsVisible(bool isVisible_);
    static void SetStyle(int style_);
    static int Animation();
    static void Animation(int value);
    static bool IsVisible();
    static void IsVisible(bool value);
    static int Style();
    static void Style(int value);
    static void add_SettingsChanged(uDelegate* value);
    static void remove_SettingsChanged(uDelegate* value);
};
// }

}}}} // ::g::Uno::Platform::iOS
