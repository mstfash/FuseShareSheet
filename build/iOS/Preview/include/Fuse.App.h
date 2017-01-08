// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.iOS/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.AppBase.h>
namespace g{namespace Fuse{namespace Controls{struct GraphicsView;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{struct App;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Platform{struct TimerEventArgs;}}}

namespace g{
namespace Fuse{

// public extern class App :107
// {
::g::Fuse::AppBase_type* App_typeof();
void App__ctor_2_fn(App* __this);
void App__CheckFocus_fn(App* __this);
void App__CheckStatusBarOrientation_fn(App* __this);
void App__get_Children_fn(App* __this, uObject** __retval);
void App__get_ChildrenVisual_fn(App* __this, ::g::Fuse::Visual** __retval);
void App__Compare_fn(uObject* x, uObject* y, bool* __retval);
void App__IsNull_fn(uObject* x, bool* __retval);
void App__New1_fn(App** __retval);
void App__OnTick_fn(App* __this, uObject* sender, ::g::Uno::Platform::TimerEventArgs* args);
void App__OnUpdate_fn(App* __this);
void App__PropagateBackground_fn(App* __this);

struct App : ::g::Fuse::AppBase
{
    uStrong<uObject*> _currentFocus;
    uStrong< ::g::Fuse::Controls::GraphicsView*> _graphicsView;
    int _prevStatusBarOrientation;
    uStrong< ::g::Fuse::Controls::Panel*> _rootPanel;

    void ctor_2();
    void CheckFocus();
    void CheckStatusBarOrientation();
    void OnTick(uObject* sender, ::g::Uno::Platform::TimerEventArgs* args);
    void PropagateBackground();
    static bool Compare(uObject* x, uObject* y);
    static bool IsNull(uObject* x);
    static App* New1();
};
// }

}} // ::g::Fuse
