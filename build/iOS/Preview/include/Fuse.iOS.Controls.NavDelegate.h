// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct NavDelegate;}}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// public static extern class NavDelegate :14
// {
uClassType* NavDelegate_typeof();
void NavDelegate__Create_fn(uDelegate* beginLoading, uDelegate* pageLoaded, uDelegate* urlChanged, uObject** __retval);

struct NavDelegate : uObject
{
    static uObject* Create(uDelegate* beginLoading, uDelegate* pageLoaded, uDelegate* urlChanged);
};
// }

}}}} // ::g::Fuse::iOS::Controls
