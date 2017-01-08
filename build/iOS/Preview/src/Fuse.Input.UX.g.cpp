// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Input.KeyPressedArgs.h>
#include <Fuse.Input.KeyPressedHandler.h>
#include <Fuse.Input.KeyReleasedArgs.h>
#include <Fuse.Input.KeyReleasedHandler.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEnteredArgs.h>
#include <Fuse.Input.PointerEnteredHandler.h>
#include <Fuse.Input.PointerLeftArgs.h>
#include <Fuse.Input.PointerLeftHandler.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.Input.PointerWheelMovedArgs.h>
#include <Fuse.Input.PointerWheelMovedHandler.h>
#include <Fuse.Input.UX.AttachedFocusMembers.h>
#include <Fuse.Input.UX.AttachedKeyboardMembers.h>
#include <Fuse.Input.UX.AttachedPointerMembers.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>

namespace g{
namespace Fuse{
namespace Input{
namespace UX{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/input/ux/$.uno
// --------------------------------------------------------------------------------------------

// public static class AttachedFocusMembers :7
// {
static void AttachedFocusMembers_build(uType* type)
{
    type->Reflection.SetFunctions(4,
        new uFunction("AddFocusGainedHandler", NULL, (void*)AttachedFocusMembers__AddFocusGainedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::FocusGainedHandler_typeof()),
        new uFunction("AddFocusLostHandler", NULL, (void*)AttachedFocusMembers__AddFocusLostHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::FocusLostHandler_typeof()),
        new uFunction("RemoveFocusGainedHandler", NULL, (void*)AttachedFocusMembers__RemoveFocusGainedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::FocusGainedHandler_typeof()),
        new uFunction("RemoveFocusLostHandler", NULL, (void*)AttachedFocusMembers__RemoveFocusLostHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::FocusLostHandler_typeof()));
}

uClassType* AttachedFocusMembers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.UX.AttachedFocusMembers", options);
    type->fp_build_ = AttachedFocusMembers_build;
    return type;
}

// public static void AddFocusGainedHandler(Fuse.Visual node, Fuse.Input.FocusGainedHandler handler) :11
void AttachedFocusMembers__AddFocusGainedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler)
{
    AttachedFocusMembers::AddFocusGainedHandler(node, handler);
}

// public static void AddFocusLostHandler(Fuse.Visual node, Fuse.Input.FocusLostHandler handler) :24
void AttachedFocusMembers__AddFocusLostHandler_fn(::g::Fuse::Visual* node, uDelegate* handler)
{
    AttachedFocusMembers::AddFocusLostHandler(node, handler);
}

// public static void RemoveFocusGainedHandler(Fuse.Visual node, Fuse.Input.FocusGainedHandler handler) :17
void AttachedFocusMembers__RemoveFocusGainedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler)
{
    AttachedFocusMembers::RemoveFocusGainedHandler(node, handler);
}

// public static void RemoveFocusLostHandler(Fuse.Visual node, Fuse.Input.FocusLostHandler handler) :30
void AttachedFocusMembers__RemoveFocusLostHandler_fn(::g::Fuse::Visual* node, uDelegate* handler)
{
    AttachedFocusMembers::RemoveFocusLostHandler(node, handler);
}

// public static void AddFocusGainedHandler(Fuse.Visual node, Fuse.Input.FocusGainedHandler handler) [static] :11
void AttachedFocusMembers::AddFocusGainedHandler(::g::Fuse::Visual* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedFocusMembers", "AddFocusGainedHandler(Fuse.Visual,Fuse.Input.FocusGainedHandler)");
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), node, handler);
}

// public static void AddFocusLostHandler(Fuse.Visual node, Fuse.Input.FocusLostHandler handler) [static] :24
void AttachedFocusMembers::AddFocusLostHandler(::g::Fuse::Visual* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedFocusMembers", "AddFocusLostHandler(Fuse.Visual,Fuse.Input.FocusLostHandler)");
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), node, handler);
}

// public static void RemoveFocusGainedHandler(Fuse.Visual node, Fuse.Input.FocusGainedHandler handler) [static] :17
void AttachedFocusMembers::RemoveFocusGainedHandler(::g::Fuse::Visual* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedFocusMembers", "RemoveFocusGainedHandler(Fuse.Visual,Fuse.Input.FocusGainedHandler)");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), node, handler);
}

// public static void RemoveFocusLostHandler(Fuse.Visual node, Fuse.Input.FocusLostHandler handler) [static] :30
void AttachedFocusMembers::RemoveFocusLostHandler(::g::Fuse::Visual* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedFocusMembers", "RemoveFocusLostHandler(Fuse.Visual,Fuse.Input.FocusLostHandler)");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), node, handler);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/input/ux/$.uno
// --------------------------------------------------------------------------------------------

// public static class AttachedKeyboardMembers :43
// {
static void AttachedKeyboardMembers_build(uType* type)
{
    type->Reflection.SetFunctions(4,
        new uFunction("AddKeyPressedHandler", NULL, (void*)AttachedKeyboardMembers__AddKeyPressedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::KeyPressedHandler_typeof()),
        new uFunction("AddKeyReleasedHandler", NULL, (void*)AttachedKeyboardMembers__AddKeyReleasedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::KeyReleasedHandler_typeof()),
        new uFunction("RemoveKeyPressedHandler", NULL, (void*)AttachedKeyboardMembers__RemoveKeyPressedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::KeyPressedHandler_typeof()),
        new uFunction("RemoveKeyReleasedHandler", NULL, (void*)AttachedKeyboardMembers__RemoveKeyReleasedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::KeyReleasedHandler_typeof()));
}

uClassType* AttachedKeyboardMembers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.UX.AttachedKeyboardMembers", options);
    type->fp_build_ = AttachedKeyboardMembers_build;
    return type;
}

// public static void AddKeyPressedHandler(Fuse.Visual node, Fuse.Input.KeyPressedHandler handler) :49
void AttachedKeyboardMembers__AddKeyPressedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler)
{
    AttachedKeyboardMembers::AddKeyPressedHandler(node, handler);
}

// public static void AddKeyReleasedHandler(Fuse.Visual node, Fuse.Input.KeyReleasedHandler handler) :64
void AttachedKeyboardMembers__AddKeyReleasedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler)
{
    AttachedKeyboardMembers::AddKeyReleasedHandler(node, handler);
}

// public static void RemoveKeyPressedHandler(Fuse.Visual node, Fuse.Input.KeyPressedHandler handler) :55
void AttachedKeyboardMembers__RemoveKeyPressedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler)
{
    AttachedKeyboardMembers::RemoveKeyPressedHandler(node, handler);
}

// public static void RemoveKeyReleasedHandler(Fuse.Visual node, Fuse.Input.KeyReleasedHandler handler) :70
void AttachedKeyboardMembers__RemoveKeyReleasedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler)
{
    AttachedKeyboardMembers::RemoveKeyReleasedHandler(node, handler);
}

// public static void AddKeyPressedHandler(Fuse.Visual node, Fuse.Input.KeyPressedHandler handler) [static] :49
void AttachedKeyboardMembers::AddKeyPressedHandler(::g::Fuse::Visual* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedKeyboardMembers", "AddKeyPressedHandler(Fuse.Visual,Fuse.Input.KeyPressedHandler)");
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyPressed()), node, handler);
}

// public static void AddKeyReleasedHandler(Fuse.Visual node, Fuse.Input.KeyReleasedHandler handler) [static] :64
void AttachedKeyboardMembers::AddKeyReleasedHandler(::g::Fuse::Visual* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedKeyboardMembers", "AddKeyReleasedHandler(Fuse.Visual,Fuse.Input.KeyReleasedHandler)");
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyReleased()), node, handler);
}

// public static void RemoveKeyPressedHandler(Fuse.Visual node, Fuse.Input.KeyPressedHandler handler) [static] :55
void AttachedKeyboardMembers::RemoveKeyPressedHandler(::g::Fuse::Visual* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedKeyboardMembers", "RemoveKeyPressedHandler(Fuse.Visual,Fuse.Input.KeyPressedHandler)");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyPressed()), node, handler);
}

// public static void RemoveKeyReleasedHandler(Fuse.Visual node, Fuse.Input.KeyReleasedHandler handler) [static] :70
void AttachedKeyboardMembers::RemoveKeyReleasedHandler(::g::Fuse::Visual* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedKeyboardMembers", "RemoveKeyReleasedHandler(Fuse.Visual,Fuse.Input.KeyReleasedHandler)");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyReleased()), node, handler);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/input/ux/$.uno
// --------------------------------------------------------------------------------------------

// public static class AttachedPointerMembers :83
// {
static void AttachedPointerMembers_build(uType* type)
{
    type->Reflection.SetFunctions(12,
        new uFunction("AddEnteredHandler", NULL, (void*)AttachedPointerMembers__AddEnteredHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::PointerEnteredHandler_typeof()),
        new uFunction("AddLeftHandler", NULL, (void*)AttachedPointerMembers__AddLeftHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::PointerLeftHandler_typeof()),
        new uFunction("AddMovedHandler", NULL, (void*)AttachedPointerMembers__AddMovedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::PointerMovedHandler_typeof()),
        new uFunction("AddPressedHandler", NULL, (void*)AttachedPointerMembers__AddPressedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::PointerPressedHandler_typeof()),
        new uFunction("AddReleasedHandler", NULL, (void*)AttachedPointerMembers__AddReleasedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::PointerReleasedHandler_typeof()),
        new uFunction("AddWheelMovedHandler", NULL, (void*)AttachedPointerMembers__AddWheelMovedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::PointerWheelMovedHandler_typeof()),
        new uFunction("RemoveEnteredHandler", NULL, (void*)AttachedPointerMembers__RemoveEnteredHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::PointerEnteredHandler_typeof()),
        new uFunction("RemoveLeftHandler", NULL, (void*)AttachedPointerMembers__RemoveLeftHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::PointerLeftHandler_typeof()),
        new uFunction("RemoveMovedHandler", NULL, (void*)AttachedPointerMembers__RemoveMovedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::PointerMovedHandler_typeof()),
        new uFunction("RemovePressedHandler", NULL, (void*)AttachedPointerMembers__RemovePressedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::PointerPressedHandler_typeof()),
        new uFunction("RemoveReleasedHandler", NULL, (void*)AttachedPointerMembers__RemoveReleasedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::PointerReleasedHandler_typeof()),
        new uFunction("RemoveWheelMovedHandler", NULL, (void*)AttachedPointerMembers__RemoveWheelMovedHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::PointerWheelMovedHandler_typeof()));
}

uClassType* AttachedPointerMembers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.UX.AttachedPointerMembers", options);
    type->fp_build_ = AttachedPointerMembers_build;
    return type;
}

// public static void AddEnteredHandler(Fuse.Visual node, Fuse.Input.PointerEnteredHandler handler) :126
void AttachedPointerMembers__AddEnteredHandler_fn(::g::Fuse::Visual* node, uDelegate* handler)
{
    AttachedPointerMembers::AddEnteredHandler(node, handler);
}

// public static void AddLeftHandler(Fuse.Visual node, Fuse.Input.PointerLeftHandler handler) :139
void AttachedPointerMembers__AddLeftHandler_fn(::g::Fuse::Visual* node, uDelegate* handler)
{
    AttachedPointerMembers::AddLeftHandler(node, handler);
}

// public static void AddMovedHandler(Fuse.Visual node, Fuse.Input.PointerMovedHandler handler) :100
void AttachedPointerMembers__AddMovedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler)
{
    AttachedPointerMembers::AddMovedHandler(node, handler);
}

// public static void AddPressedHandler(Fuse.Visual node, Fuse.Input.PointerPressedHandler handler) :87
void AttachedPointerMembers__AddPressedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler)
{
    AttachedPointerMembers::AddPressedHandler(node, handler);
}

// public static void AddReleasedHandler(Fuse.Visual node, Fuse.Input.PointerReleasedHandler handler) :113
void AttachedPointerMembers__AddReleasedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler)
{
    AttachedPointerMembers::AddReleasedHandler(node, handler);
}

// public static void AddWheelMovedHandler(Fuse.Visual node, Fuse.Input.PointerWheelMovedHandler handler) :152
void AttachedPointerMembers__AddWheelMovedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler)
{
    AttachedPointerMembers::AddWheelMovedHandler(node, handler);
}

// public static void RemoveEnteredHandler(Fuse.Visual node, Fuse.Input.PointerEnteredHandler handler) :132
void AttachedPointerMembers__RemoveEnteredHandler_fn(::g::Fuse::Visual* node, uDelegate* handler)
{
    AttachedPointerMembers::RemoveEnteredHandler(node, handler);
}

// public static void RemoveLeftHandler(Fuse.Visual node, Fuse.Input.PointerLeftHandler handler) :145
void AttachedPointerMembers__RemoveLeftHandler_fn(::g::Fuse::Visual* node, uDelegate* handler)
{
    AttachedPointerMembers::RemoveLeftHandler(node, handler);
}

// public static void RemoveMovedHandler(Fuse.Visual node, Fuse.Input.PointerMovedHandler handler) :106
void AttachedPointerMembers__RemoveMovedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler)
{
    AttachedPointerMembers::RemoveMovedHandler(node, handler);
}

// public static void RemovePressedHandler(Fuse.Visual node, Fuse.Input.PointerPressedHandler handler) :93
void AttachedPointerMembers__RemovePressedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler)
{
    AttachedPointerMembers::RemovePressedHandler(node, handler);
}

// public static void RemoveReleasedHandler(Fuse.Visual node, Fuse.Input.PointerReleasedHandler handler) :119
void AttachedPointerMembers__RemoveReleasedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler)
{
    AttachedPointerMembers::RemoveReleasedHandler(node, handler);
}

// public static void RemoveWheelMovedHandler(Fuse.Visual node, Fuse.Input.PointerWheelMovedHandler handler) :158
void AttachedPointerMembers__RemoveWheelMovedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler)
{
    AttachedPointerMembers::RemoveWheelMovedHandler(node, handler);
}

// public static void AddEnteredHandler(Fuse.Visual node, Fuse.Input.PointerEnteredHandler handler) [static] :126
void AttachedPointerMembers::AddEnteredHandler(::g::Fuse::Visual* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "AddEnteredHandler(Fuse.Visual,Fuse.Input.PointerEnteredHandler)");
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), node, handler);
}

// public static void AddLeftHandler(Fuse.Visual node, Fuse.Input.PointerLeftHandler handler) [static] :139
void AttachedPointerMembers::AddLeftHandler(::g::Fuse::Visual* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "AddLeftHandler(Fuse.Visual,Fuse.Input.PointerLeftHandler)");
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), node, handler);
}

// public static void AddMovedHandler(Fuse.Visual node, Fuse.Input.PointerMovedHandler handler) [static] :100
void AttachedPointerMembers::AddMovedHandler(::g::Fuse::Visual* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "AddMovedHandler(Fuse.Visual,Fuse.Input.PointerMovedHandler)");
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), node, handler);
}

// public static void AddPressedHandler(Fuse.Visual node, Fuse.Input.PointerPressedHandler handler) [static] :87
void AttachedPointerMembers::AddPressedHandler(::g::Fuse::Visual* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "AddPressedHandler(Fuse.Visual,Fuse.Input.PointerPressedHandler)");
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), node, handler);
}

// public static void AddReleasedHandler(Fuse.Visual node, Fuse.Input.PointerReleasedHandler handler) [static] :113
void AttachedPointerMembers::AddReleasedHandler(::g::Fuse::Visual* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "AddReleasedHandler(Fuse.Visual,Fuse.Input.PointerReleasedHandler)");
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), node, handler);
}

// public static void AddWheelMovedHandler(Fuse.Visual node, Fuse.Input.PointerWheelMovedHandler handler) [static] :152
void AttachedPointerMembers::AddWheelMovedHandler(::g::Fuse::Visual* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "AddWheelMovedHandler(Fuse.Visual,Fuse.Input.PointerWheelMovedHandler)");
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::WheelMoved()), node, handler);
}

// public static void RemoveEnteredHandler(Fuse.Visual node, Fuse.Input.PointerEnteredHandler handler) [static] :132
void AttachedPointerMembers::RemoveEnteredHandler(::g::Fuse::Visual* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "RemoveEnteredHandler(Fuse.Visual,Fuse.Input.PointerEnteredHandler)");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), node, handler);
}

// public static void RemoveLeftHandler(Fuse.Visual node, Fuse.Input.PointerLeftHandler handler) [static] :145
void AttachedPointerMembers::RemoveLeftHandler(::g::Fuse::Visual* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "RemoveLeftHandler(Fuse.Visual,Fuse.Input.PointerLeftHandler)");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), node, handler);
}

// public static void RemoveMovedHandler(Fuse.Visual node, Fuse.Input.PointerMovedHandler handler) [static] :106
void AttachedPointerMembers::RemoveMovedHandler(::g::Fuse::Visual* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "RemoveMovedHandler(Fuse.Visual,Fuse.Input.PointerMovedHandler)");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), node, handler);
}

// public static void RemovePressedHandler(Fuse.Visual node, Fuse.Input.PointerPressedHandler handler) [static] :93
void AttachedPointerMembers::RemovePressedHandler(::g::Fuse::Visual* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "RemovePressedHandler(Fuse.Visual,Fuse.Input.PointerPressedHandler)");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), node, handler);
}

// public static void RemoveReleasedHandler(Fuse.Visual node, Fuse.Input.PointerReleasedHandler handler) [static] :119
void AttachedPointerMembers::RemoveReleasedHandler(::g::Fuse::Visual* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "RemoveReleasedHandler(Fuse.Visual,Fuse.Input.PointerReleasedHandler)");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), node, handler);
}

// public static void RemoveWheelMovedHandler(Fuse.Visual node, Fuse.Input.PointerWheelMovedHandler handler) [static] :158
void AttachedPointerMembers::RemoveWheelMovedHandler(::g::Fuse::Visual* node, uDelegate* handler)
{
    uStackFrame __("Fuse.Input.UX.AttachedPointerMembers", "RemoveWheelMovedHandler(Fuse.Visual,Fuse.Input.PointerWheelMovedHandler)");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::WheelMoved()), node, handler);
}
// }

}}}} // ::g::Fuse::Input::UX
