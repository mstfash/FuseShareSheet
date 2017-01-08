// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct KeyboardView;}}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class KeyboardView :1375
// {
uType* KeyboardView_typeof();
void KeyboardView__ctor__fn(KeyboardView* __this);
void KeyboardView__CopyKeyboardType_fn(uObject* handle, uObject* source);
void KeyboardView__Create_fn(uObject** __retval);
void KeyboardView__GetIsFocusable_fn(uObject* handle, bool* __retval);
void KeyboardView__get_Handle_fn(KeyboardView* __this, uObject** __retval);
void KeyboardView__HideKeyboard_fn(KeyboardView* __this);
void KeyboardView__HoldFocus_fn(KeyboardView* __this, uObject* focusedObject);
void KeyboardView__get_IsFocusable_fn(KeyboardView* __this, bool* __retval);
void KeyboardView__set_IsFocusable_fn(KeyboardView* __this, bool* value);
void KeyboardView__New1_fn(KeyboardView** __retval);
void KeyboardView__SetIsFocusable_fn(uObject* handle, bool* value);

struct KeyboardView : uObject
{
    uStrong<uObject*> _handle;

    void ctor_();
    uObject* Handle();
    void HideKeyboard();
    void HoldFocus(uObject* focusedObject);
    bool IsFocusable();
    void IsFocusable(bool value);
    static void CopyKeyboardType(uObject* handle, uObject* source);
    static uObject* Create();
    static bool GetIsFocusable(uObject* handle);
    static KeyboardView* New1();
    static void SetIsFocusable(uObject* handle, bool value);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
