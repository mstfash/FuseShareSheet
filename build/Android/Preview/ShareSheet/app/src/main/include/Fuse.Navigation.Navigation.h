// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct Navigation;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationStateArgs;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public interfacemodifiers class Navigation :799
// {
uType* Navigation_typeof();
void Navigation__ctor__fn(Navigation* __this);
void Navigation__AddStateHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler);
void Navigation__GetLocalNavigation_fn(::g::Fuse::Visual* node, uObject** __retval);
void Navigation__GetNavigationNavigation_fn(::g::Fuse::Visual* n, uObject** __retval);
void Navigation__InvokeState_fn(uObject* handler, uArray* state);
void Navigation__IsPage_fn(::g::Fuse::Node* n, bool* __retval);
void Navigation__NotifyNavigationState_fn(::g::Fuse::Visual* n, ::g::Fuse::Navigation::NavigationStateArgs* state);
void Navigation__RemoveStateHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler);
void Navigation__ResetNavigationNavigation_fn(::g::Fuse::Visual* n);
void Navigation__SetNavigationNavigation_fn(::g::Fuse::Visual* n, uObject* ctx);
void Navigation__TryFind_fn(::g::Fuse::Visual* node, uObject** __retval);
void Navigation__TryFindBaseNavigation_fn(::g::Fuse::Node* node, uObject** __retval);
void Navigation__TryFindBaseNavigation1_fn(::g::Fuse::Node* node, ::g::Fuse::Visual** parent, uObject** __retval);
void Navigation__TryFindPage_fn(::g::Fuse::Node* node, uObject** nav, ::g::Fuse::Visual** pageBind, ::g::Fuse::Visual** __retval);
void Navigation__TryFindPage1_fn(::g::Fuse::Visual* node, ::g::Fuse::Visual** __retval);

struct Navigation : uObject
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _contextHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _contextHandle() { return Navigation_typeof()->Init(), _contextHandle_; }
    static uSStrong< ::g::Fuse::PropertyHandle*> _navigationStateHandler_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _navigationStateHandler() { return Navigation_typeof()->Init(), _navigationStateHandler_; }

    void ctor_();
    static void AddStateHandler(::g::Fuse::Visual* visual, uDelegate* handler);
    static uObject* GetLocalNavigation(::g::Fuse::Visual* node);
    static uObject* GetNavigationNavigation(::g::Fuse::Visual* n);
    static void InvokeState(uObject* handler, uArray* state);
    static bool IsPage(::g::Fuse::Node* n);
    static void NotifyNavigationState(::g::Fuse::Visual* n, ::g::Fuse::Navigation::NavigationStateArgs* state);
    static void RemoveStateHandler(::g::Fuse::Visual* visual, uDelegate* handler);
    static void ResetNavigationNavigation(::g::Fuse::Visual* n);
    static void SetNavigationNavigation(::g::Fuse::Visual* n, uObject* ctx);
    static uObject* TryFind(::g::Fuse::Visual* node);
    static uObject* TryFindBaseNavigation(::g::Fuse::Node* node);
    static uObject* TryFindBaseNavigation1(::g::Fuse::Node* node, ::g::Fuse::Visual** parent);
    static ::g::Fuse::Visual* TryFindPage(::g::Fuse::Node* node, uObject** nav, ::g::Fuse::Visual** pageBind);
    static ::g::Fuse::Visual* TryFindPage1(::g::Fuse::Visual* node);
};
// }

}}} // ::g::Fuse::Navigation
