// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/input/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{namespace UX{struct AttachedPointerMembers;}}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{
namespace UX{

// public static class AttachedPointerMembers :83
// {
uClassType* AttachedPointerMembers_typeof();
void AttachedPointerMembers__AddEnteredHandler_fn(::g::Fuse::Visual* node, uDelegate* handler);
void AttachedPointerMembers__AddLeftHandler_fn(::g::Fuse::Visual* node, uDelegate* handler);
void AttachedPointerMembers__AddMovedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler);
void AttachedPointerMembers__AddPressedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler);
void AttachedPointerMembers__AddReleasedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler);
void AttachedPointerMembers__AddWheelMovedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler);
void AttachedPointerMembers__RemoveEnteredHandler_fn(::g::Fuse::Visual* node, uDelegate* handler);
void AttachedPointerMembers__RemoveLeftHandler_fn(::g::Fuse::Visual* node, uDelegate* handler);
void AttachedPointerMembers__RemoveMovedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler);
void AttachedPointerMembers__RemovePressedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler);
void AttachedPointerMembers__RemoveReleasedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler);
void AttachedPointerMembers__RemoveWheelMovedHandler_fn(::g::Fuse::Visual* node, uDelegate* handler);

struct AttachedPointerMembers : uObject
{
    static void AddEnteredHandler(::g::Fuse::Visual* node, uDelegate* handler);
    static void AddLeftHandler(::g::Fuse::Visual* node, uDelegate* handler);
    static void AddMovedHandler(::g::Fuse::Visual* node, uDelegate* handler);
    static void AddPressedHandler(::g::Fuse::Visual* node, uDelegate* handler);
    static void AddReleasedHandler(::g::Fuse::Visual* node, uDelegate* handler);
    static void AddWheelMovedHandler(::g::Fuse::Visual* node, uDelegate* handler);
    static void RemoveEnteredHandler(::g::Fuse::Visual* node, uDelegate* handler);
    static void RemoveLeftHandler(::g::Fuse::Visual* node, uDelegate* handler);
    static void RemoveMovedHandler(::g::Fuse::Visual* node, uDelegate* handler);
    static void RemovePressedHandler(::g::Fuse::Visual* node, uDelegate* handler);
    static void RemoveReleasedHandler(::g::Fuse::Visual* node, uDelegate* handler);
    static void RemoveWheelMovedHandler(::g::Fuse::Visual* node, uDelegate* handler);
};
// }

}}}} // ::g::Fuse::Input::UX
