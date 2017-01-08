// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct LeafView;}}}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public abstract extern class LeafView :1462
// {
struct LeafView_type : ::g::Fuse::Controls::Native::iOS::View_type
{
    ::g::Fuse::Controls::Native::ILeafView interface2;
};

LeafView_type* LeafView_typeof();
void LeafView__ctor_1_fn(LeafView* __this, uObject* handle);
void LeafView__Measure_fn(LeafView* __this, ::g::Fuse::LayoutParams* lp, float* density, ::g::Uno::Float2* __retval);
void LeafView__SizeThatFits_fn(uObject* handle, float* w, float* h, float* resW, float* resH);

struct LeafView : ::g::Fuse::Controls::Native::iOS::View
{
    void ctor_1(uObject* handle);
    ::g::Uno::Float2 Measure(::g::Fuse::LayoutParams lp, float density);
    static void SizeThatFits(uObject* handle, float w, float h, float* resW, float* resH);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
