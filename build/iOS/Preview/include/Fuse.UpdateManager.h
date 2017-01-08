// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Stage;}}
namespace g{namespace Fuse{struct UpdateListener;}}
namespace g{namespace Fuse{struct UpdateManager;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{

// public static class UpdateManager :10313
// {
uClassType* UpdateManager_typeof();
void UpdateManager__AddAction_fn(uObject* pu, int* stage);
void UpdateManager__AddAction1_fn(uDelegate* pu, int* stage);
void UpdateManager__AddDeferredAction_fn(uDelegate* pu, int* stage, int* priority);
void UpdateManager__AddDeferredAction1_fn(uDelegate* pu, int* priority);
void UpdateManager__AddOnceAction_fn(uDelegate* pu, int* stage);
void UpdateManager__CheckExceptions_fn(::g::Uno::Collections::List* exs);
void UpdateManager__get_FrameIndex_fn(int* __retval);
void UpdateManager__IncreaseFrameIndex_fn();
void UpdateManager__PerformNextFrame_fn(uDelegate* pu, int* stage);
void UpdateManager__PostAction_fn(uDelegate* pu);
void UpdateManager__ProcessPostActions_fn();
void UpdateManager__RemoveAction_fn(uObject* pu, int* stage);
void UpdateManager__RemoveAction1_fn(uDelegate* pu, int* stage);
void UpdateManager__RemoveFrom_fn(::g::Uno::Collections::List* list, uDelegate* action, uObject* update, bool* __retval);
void UpdateManager__RemoveOnceAction_fn(uDelegate* pu, int* stage);
void UpdateManager__Update_fn();
void UpdateManager__Update1_fn(::g::Fuse::Stage* stage);

struct UpdateManager : uObject
{
    static uSStrong< ::g::Fuse::Stage*> _currentStage_;
    static uSStrong< ::g::Fuse::Stage*>& _currentStage() { return UpdateManager_typeof()->Init(), _currentStage_; }
    static int _frameIndex_;
    static int& _frameIndex() { return UpdateManager_typeof()->Init(), _frameIndex_; }
    static uSStrong< ::g::Uno::Threading::Mutex*> _postActionLock_;
    static uSStrong< ::g::Uno::Threading::Mutex*>& _postActionLock() { return UpdateManager_typeof()->Init(), _postActionLock_; }
    static uSStrong< ::g::Uno::Collections::List*> _postActions_;
    static uSStrong< ::g::Uno::Collections::List*>& _postActions() { return UpdateManager_typeof()->Init(), _postActions_; }
    static uSStrong< ::g::Uno::Collections::List*> _postActionsSwap_;
    static uSStrong< ::g::Uno::Collections::List*>& _postActionsSwap() { return UpdateManager_typeof()->Init(), _postActionsSwap_; }
    static uSStrong< ::g::Uno::Collections::List*> _stages_;
    static uSStrong< ::g::Uno::Collections::List*>& _stages() { return UpdateManager_typeof()->Init(), _stages_; }
    static uSStrong<uObject*> Dispatcher_;
    static uSStrong<uObject*>& Dispatcher() { return UpdateManager_typeof()->Init(), Dispatcher_; }

    static void AddAction(uObject* pu, int stage);
    static void AddAction1(uDelegate* pu, int stage);
    static void AddDeferredAction(uDelegate* pu, int stage, int priority);
    static void AddDeferredAction1(uDelegate* pu, int priority);
    static void AddOnceAction(uDelegate* pu, int stage);
    static void CheckExceptions(::g::Uno::Collections::List* exs);
    static void IncreaseFrameIndex();
    static void PerformNextFrame(uDelegate* pu, int stage);
    static void PostAction(uDelegate* pu);
    static void ProcessPostActions();
    static void RemoveAction(uObject* pu, int stage);
    static void RemoveAction1(uDelegate* pu, int stage);
    static bool RemoveFrom(::g::Uno::Collections::List* list, uDelegate* action, uObject* update);
    static void RemoveOnceAction(uDelegate* pu, int stage);
    static void Update();
    static void Update1(::g::Fuse::Stage* stage);
    static int FrameIndex();
};
// }

}} // ::g::Fuse
