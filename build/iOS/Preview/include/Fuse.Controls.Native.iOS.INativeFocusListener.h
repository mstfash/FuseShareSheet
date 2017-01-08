// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal abstract extern interface INativeFocusListener :350
// {
uInterfaceType* INativeFocusListener_typeof();

struct INativeFocusListener
{
    void(*fp_FocusGained)(uObject*);
    void(*fp_FocusLost)(uObject*);
    static void FocusGained(const uInterface& __this) { __this.VTable<INativeFocusListener>()->fp_FocusGained(__this); }
    static void FocusLost(const uInterface& __this) { __this.VTable<INativeFocusListener>()->fp_FocusLost(__this); }
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
