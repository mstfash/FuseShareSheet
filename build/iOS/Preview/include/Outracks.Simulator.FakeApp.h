// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{struct App;}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Outracks{namespace Simulator{struct ConcurrentQueue;}}}
namespace g{namespace Outracks{namespace Simulator{struct FakeApp;}}}
namespace g{namespace Outracks{namespace Simulator{struct Flasher;}}}
namespace g{namespace Uno{namespace UX{struct Resource;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class FakeApp :1819
// {
::g::Fuse::Controls::Control_type* FakeApp_typeof();
void FakeApp__ctor_7_fn(FakeApp* __this, ::g::Fuse::App* app);
void FakeApp__AddNewFlashes_fn(FakeApp* __this);
void FakeApp__get_Background1_fn(FakeApp* __this, ::g::Uno::Float4* __retval);
void FakeApp__set_Background1_fn(FakeApp* __this, ::g::Uno::Float4* value);
void FakeApp__get_Children1_fn(FakeApp* __this, uObject** __retval);
void FakeApp__get_ClearColor_fn(FakeApp* __this, ::g::Uno::Float4* __retval);
void FakeApp__set_ClearColor_fn(FakeApp* __this, ::g::Uno::Float4* value);
void FakeApp__get_ClearDepth_fn(FakeApp* __this, float* __retval);
void FakeApp__set_ClearDepth_fn(FakeApp* __this, float* value);
void FakeApp__Flash_fn(FakeApp* __this, uString* message);
void FakeApp__get_HasFlash_fn(FakeApp* __this, bool* __retval);
void FakeApp__New4_fn(::g::Fuse::App* app, FakeApp** __retval);
void FakeApp__OnDraw_fn(FakeApp* __this, ::g::Fuse::DrawContext* dc);
void FakeApp__OnRooted_fn(FakeApp* __this);
void FakeApp__OnUnrooted_fn(FakeApp* __this);
void FakeApp__OnUpdate_fn(FakeApp* __this);
void FakeApp__get_Overlay_fn(FakeApp* __this, ::g::Fuse::Node** __retval);
void FakeApp__set_Overlay_fn(FakeApp* __this, ::g::Fuse::Node* value);
void FakeApp__get_OverlayVisible_fn(FakeApp* __this, bool* __retval);
void FakeApp__set_OverlayVisible_fn(FakeApp* __this, bool* value);
void FakeApp__RemoveExpiredFlashes_fn(FakeApp* __this);
void FakeApp__get_Resources1_fn(FakeApp* __this, uObject** __retval);
void FakeApp__UpdateFlashes_fn(FakeApp* __this);

struct FakeApp : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::App*> _app;
    uStrong< ::g::Outracks::Simulator::Flasher*> _currentFlash;
    uStrong< ::g::Outracks::Simulator::ConcurrentQueue*> _flashes;
    uStrong< ::g::Fuse::Controls::Panel*> _overlayPlaceholde;
    uStrong< ::g::Fuse::Controls::Panel*> _rootPlaceholder;

    void ctor_7(::g::Fuse::App* app);
    void AddNewFlashes();
    ::g::Uno::Float4 Background1();
    void Background1(::g::Uno::Float4 value);
    uObject* Children1();
    ::g::Uno::Float4 ClearColor();
    void ClearColor(::g::Uno::Float4 value);
    float ClearDepth();
    void ClearDepth(float value);
    void Flash(uString* message);
    bool HasFlash();
    void OnUpdate();
    ::g::Fuse::Node* Overlay();
    void Overlay(::g::Fuse::Node* value);
    bool OverlayVisible();
    void OverlayVisible(bool value);
    void RemoveExpiredFlashes();
    uObject* Resources1();
    void UpdateFlashes();
    static FakeApp* New4(::g::Fuse::App* app);
};
// }

}}} // ::g::Outracks::Simulator
