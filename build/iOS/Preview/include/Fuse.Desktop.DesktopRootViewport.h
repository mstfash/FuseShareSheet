// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Desktop/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.IDisposable.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Desktop{struct DesktopRootViewport;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Platform{struct PointerEventArgs;}}}
namespace g{namespace Uno{namespace Platform{struct Window;}}}

namespace g{
namespace Fuse{
namespace Desktop{

// internal sealed class DesktopRootViewport :79
// {
struct DesktopRootViewport_type : ::g::Fuse::RootViewport_type
{
    ::g::Fuse::IRenderViewport interface11;
};

DesktopRootViewport_type* DesktopRootViewport_typeof();
void DesktopRootViewport__ctor_4_fn(DesktopRootViewport* __this, ::g::Uno::Platform::Window* window);
void DesktopRootViewport__New3_fn(::g::Uno::Platform::Window* window, DesktopRootViewport** __retval);
void DesktopRootViewport__OnInvalidateVisual_fn(DesktopRootViewport* __this);
void DesktopRootViewport__OnPointerLeft_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args);
void DesktopRootViewport__OnPointerMoved_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args);
void DesktopRootViewport__OnPointerPressed_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args);
void DesktopRootViewport__OnPointerReleased_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args);
void DesktopRootViewport__OnPointerWheelChanged_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args);
void DesktopRootViewport__TranslatePointerEvent_fn(DesktopRootViewport* __this, ::g::Uno::Platform::PointerEventArgs* args, ::g::Fuse::Input::PointerEventData** __retval);

struct DesktopRootViewport : ::g::Fuse::RootViewport
{
    uStrong< ::g::Fuse::DrawContext*> _dc;
    bool _dirty;

    void ctor_4(::g::Uno::Platform::Window* window);
    void OnPointerLeft(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args);
    void OnPointerMoved(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args);
    void OnPointerPressed(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args);
    void OnPointerReleased(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args);
    void OnPointerWheelChanged(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args);
    ::g::Fuse::Input::PointerEventData* TranslatePointerEvent(::g::Uno::Platform::PointerEventArgs* args);
    static DesktopRootViewport* New3(::g::Uno::Platform::Window* window);
};
// }

}}} // ::g::Fuse::Desktop
