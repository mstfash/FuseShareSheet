// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.iOS.ViewParent.h>
#include <Fuse.Controls.Native.IView.h>
#include <Fuse.Controls.Native.IViewGroup.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct View;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct ViewGroup;}}}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class ViewGroup :3736
// {
struct ViewGroup_type : ::g::Fuse::Controls::Native::iOS::ViewParent_type
{
    ::g::Fuse::Controls::Native::IViewGroup interface2;
};

ViewGroup_type* ViewGroup_typeof();
void ViewGroup__ctor_2_fn(ViewGroup* __this, ::g::Fuse::Visual* visual);
void ViewGroup__Add_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child);
void ViewGroup__Add1_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child, int* index);
void ViewGroup__Add2_fn(uObject* parentHandle, uObject* childHandle);
void ViewGroup__Add3_fn(uObject* parentHandle, uObject* childHandle, int* index);
void ViewGroup__Create_fn(uObject** __retval);
void ViewGroup__Dispose_fn(ViewGroup* __this);
void ViewGroup__FuseControlsNativeIViewGroupAdd_fn(ViewGroup* __this, uObject* child);
void ViewGroup__FuseControlsNativeIViewGroupAdd1_fn(ViewGroup* __this, uObject* child, int* index);
void ViewGroup__FuseControlsNativeIViewGroupRemove_fn(ViewGroup* __this, uObject* child);
void ViewGroup__New1_fn(::g::Fuse::Visual* visual, ViewGroup** __retval);
void ViewGroup__NotifyChildNewSize_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child, ::g::Uno::Float2* size);
void ViewGroup__Remove_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child);
void ViewGroup__Remove1_fn(uObject* childHandle);

struct ViewGroup : ::g::Fuse::Controls::Native::iOS::ViewParent
{
    uStrong< ::g::Fuse::Visual*> _visual;

    void ctor_2(::g::Fuse::Visual* visual);
    void Add(::g::Fuse::Controls::Native::iOS::View* child);
    void Add1(::g::Fuse::Controls::Native::iOS::View* child, int index);
    void Remove(::g::Fuse::Controls::Native::iOS::View* child);
    static void Add2(uObject* parentHandle, uObject* childHandle);
    static void Add3(uObject* parentHandle, uObject* childHandle, int index);
    static uObject* Create();
    static ViewGroup* New1(::g::Fuse::Visual* visual);
    static void Remove1(uObject* childHandle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
