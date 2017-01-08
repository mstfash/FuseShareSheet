// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IGraphicsView.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct GraphicsView;}}}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class GraphicsView :591
// {
struct GraphicsView_type : ::g::Fuse::Controls::Native::iOS::View_type
{
    ::g::Fuse::Controls::Native::IGraphicsView interface2;
};

GraphicsView_type* GraphicsView_typeof();
void GraphicsView__ctor_1_fn(GraphicsView* __this, ::g::Fuse::Visual* visual);
void GraphicsView__BeginDraw_fn(uObject* handle, int* x, int* y, bool* __retval);
void GraphicsView__Create_fn(uObject** __retval);
void GraphicsView__DeleteDrawable_fn(uObject* handle);
void GraphicsView__Dispose_fn(GraphicsView* __this);
void GraphicsView__EndDraw_fn(uObject* handle);
void GraphicsView__FuseControlsNativeIGraphicsViewBeginDraw_fn(GraphicsView* __this, ::g::Uno::Int2* size, bool* __retval);
void GraphicsView__FuseControlsNativeIGraphicsViewEndDraw_fn(GraphicsView* __this);
void GraphicsView__New1_fn(::g::Fuse::Visual* visual, GraphicsView** __retval);
void GraphicsView__OnTouch_fn(GraphicsView* __this, uObject* sender, uObject* uiEvent);
void GraphicsView__SetCallback_fn(uObject* handle, uDelegate* callback);

struct GraphicsView : ::g::Fuse::Controls::Native::iOS::View
{
    uStrong< ::g::Fuse::Visual*> _visual;

    void ctor_1(::g::Fuse::Visual* visual);
    void OnTouch(uObject* sender, uObject* uiEvent);
    static bool BeginDraw(uObject* handle, int x, int y);
    static uObject* Create();
    static void DeleteDrawable(uObject* handle);
    static void EndDraw(uObject* handle);
    static GraphicsView* New1(::g::Fuse::Visual* visual);
    static void SetCallback(uObject* handle, uDelegate* callback);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
