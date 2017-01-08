// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct NativeFocus;}}}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class NativeFocus :356
// {
uClassType* NativeFocus_typeof();
void NativeFocus__AddListener_fn(uObject* handle, uObject* listener);
void NativeFocus__RaiseFocusGained_fn(uObject* handle);
void NativeFocus__RaiseFocusLost_fn(uObject* handle);
void NativeFocus__RemoveListener_fn(uObject* handle);

struct NativeFocus : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _listeners_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _listeners() { return NativeFocus_typeof()->Init(), _listeners_; }

    static void AddListener(uObject* handle, uObject* listener);
    static void RaiseFocusGained(uObject* handle);
    static void RaiseFocusLost(uObject* handle);
    static void RemoveListener(uObject* handle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
