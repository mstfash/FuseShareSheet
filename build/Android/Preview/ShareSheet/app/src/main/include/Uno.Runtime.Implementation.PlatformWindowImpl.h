// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/runtime/implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Platform{struct SystemUIWillResizeEventArgs;}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{struct PlatformWindowImpl;}}}}
namespace g{namespace Uno{struct Int2;}}
namespace g{namespace Uno{struct Rect;}}
namespace Xli { class Window; }

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// public static class PlatformWindowImpl :853
// {
uClassType* PlatformWindowImpl_typeof();
void PlatformWindowImpl__Close_fn(::Xli::Window** handle);
void PlatformWindowImpl__GetClientSize_fn(::Xli::Window** handle, ::g::Uno::Int2* __retval);
void PlatformWindowImpl__GetDensity_fn(::Xli::Window** handle, float* __retval);
void PlatformWindowImpl__GetFullscreen_fn(::Xli::Window** handle, bool* __retval);
void PlatformWindowImpl__GetInstance_fn(::Xli::Window** __retval);
void PlatformWindowImpl__GetKeyState_fn(::Xli::Window** handle, int* key, bool* __retval);
void PlatformWindowImpl__GetMouseButtonState_fn(::Xli::Window** handle, int* button, bool* __retval);
void PlatformWindowImpl__GetPointerCursor_fn(::Xli::Window** handle, int* __retval);
void PlatformWindowImpl__GetTitle_fn(::Xli::Window** handle, uString** __retval);
void PlatformWindowImpl__IsTextInputActive_fn(::Xli::Window** handle, bool* __retval);
void PlatformWindowImpl__OnSoftKeyboardWillResize_fn(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args);
void PlatformWindowImpl__SetClientSize_fn(::Xli::Window** handle, ::g::Uno::Int2* clientSize);
void PlatformWindowImpl__SetFullscreen_fn(::Xli::Window** handle, bool* fullscreen);
void PlatformWindowImpl__SetPointerCursor_fn(::Xli::Window** handle, int* cursor);
void PlatformWindowImpl__SetTitle_fn(::Xli::Window** handle, uString* title);

struct PlatformWindowImpl : uObject
{
    static ::g::Uno::Rect keyboardFrame_;
    static ::g::Uno::Rect& keyboardFrame() { return PlatformWindowImpl_typeof()->Init(), keyboardFrame_; }
    static bool keyboardVisible_;
    static bool& keyboardVisible() { return PlatformWindowImpl_typeof()->Init(), keyboardVisible_; }

    static void Close(::Xli::Window* handle);
    static ::g::Uno::Int2 GetClientSize(::Xli::Window* handle);
    static float GetDensity(::Xli::Window* handle);
    static bool GetFullscreen(::Xli::Window* handle);
    static ::Xli::Window* GetInstance();
    static bool GetKeyState(::Xli::Window* handle, int key);
    static bool GetMouseButtonState(::Xli::Window* handle, int button);
    static int GetPointerCursor(::Xli::Window* handle);
    static uString* GetTitle(::Xli::Window* handle);
    static bool IsTextInputActive(::Xli::Window* handle);
    static void OnSoftKeyboardWillResize(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args);
    static void SetClientSize(::Xli::Window* handle, ::g::Uno::Int2 clientSize);
    static void SetFullscreen(::Xli::Window* handle, bool fullscreen);
    static void SetPointerCursor(::Xli::Window* handle, int cursor);
    static void SetTitle(::Xli::Window* handle, uString* title);
};
// }

}}}} // ::g::Uno::Runtime::Implementation
