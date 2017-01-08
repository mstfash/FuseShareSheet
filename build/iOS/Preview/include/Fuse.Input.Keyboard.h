// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{struct Keyboard;}}}
namespace g{namespace Fuse{namespace Input{struct KeyPressed;}}}
namespace g{namespace Fuse{namespace Input{struct KeyPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct KeyReleased;}}}
namespace g{namespace Fuse{namespace Input{struct KeyReleasedArgs;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct VisualEvent;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Input{

// public static class Keyboard :615
// {
uClassType* Keyboard_typeof();
void Keyboard__AddHandlers_fn(::g::Fuse::Visual* visual, uDelegate* pressed, uDelegate* released);
void Keyboard__DispatchEmulateBackButtonTap_fn();
void Keyboard__EmulateBackButtonTap_fn();
void Keyboard__IsKeyPressed_fn(int* key, bool* __retval);
void Keyboard__get_KeyPressed_fn(::g::Fuse::VisualEvent** __retval);
void Keyboard__get_KeyReleased_fn(::g::Fuse::VisualEvent** __retval);
void Keyboard__get_KeyTargetVisual_fn(::g::Fuse::Visual** __retval);
void Keyboard__RaiseKeyPressed_fn(int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, bool* __retval);
void Keyboard__RaiseKeyReleased_fn(int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, bool* __retval);
void Keyboard__RemoveHandlers_fn(::g::Fuse::Visual* visual, uDelegate* pressed, uDelegate* released);

struct Keyboard : uObject
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _keyboardHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _keyboardHandle() { return Keyboard_typeof()->Init(), _keyboardHandle_; }
    static uSStrong< ::g::Fuse::Input::KeyPressed*> _keyPressed_;
    static uSStrong< ::g::Fuse::Input::KeyPressed*>& _keyPressed() { return Keyboard_typeof()->Init(), _keyPressed_; }
    static uSStrong< ::g::Fuse::Input::KeyReleased*> _keyReleased_;
    static uSStrong< ::g::Fuse::Input::KeyReleased*>& _keyReleased() { return Keyboard_typeof()->Init(), _keyReleased_; }
    static uSStrong< ::g::Uno::Collections::List*> _keysDown_;
    static uSStrong< ::g::Uno::Collections::List*>& _keysDown() { return Keyboard_typeof()->Init(), _keysDown_; }

    static void AddHandlers(::g::Fuse::Visual* visual, uDelegate* pressed, uDelegate* released);
    static void DispatchEmulateBackButtonTap();
    static void EmulateBackButtonTap();
    static bool IsKeyPressed(int key);
    static bool RaiseKeyPressed(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed);
    static bool RaiseKeyReleased(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed);
    static void RemoveHandlers(::g::Fuse::Visual* visual, uDelegate* pressed, uDelegate* released);
    static ::g::Fuse::VisualEvent* KeyPressed();
    static ::g::Fuse::VisualEvent* KeyReleased();
    static ::g::Fuse::Visual* KeyTargetVisual();
};
// }

}}} // ::g::Fuse::Input
