// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Platform/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Platform{struct Display;}}}
namespace g{namespace Uno{namespace Platform2{struct Display;}}}

namespace g{
namespace Fuse{
namespace Platform{

// internal sealed class Display :167
// {
uType* Display_typeof();
void Display__ctor__fn(Display* __this);
void Display__get_MainDisplay_fn(::g::Uno::Platform2::Display** __retval);
void Display__New1_fn(Display** __retval);

struct Display : uObject
{
    void ctor_();
    static Display* New1();
    static ::g::Uno::Platform2::Display* MainDisplay();
};
// }

}}} // ::g::Fuse::Platform
