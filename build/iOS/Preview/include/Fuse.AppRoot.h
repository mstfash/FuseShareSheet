// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.iOS/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct AppRoot;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{

// internal static extern class AppRoot :12
// {
uClassType* AppRoot_typeof();
void AppRoot__set_ClearColor_fn(::g::Uno::Float4* value);
void AppRoot__CreateAppRootView_fn(uObject* handle, uObject** __retval);
void AppRoot__Remove_fn(uObject* root);
void AppRoot__Remove1_fn(uObject* handle, uObject* childHandle);
void AppRoot__get_RootView_fn(uObject** __retval);
void AppRoot__Set_fn(uObject* root);
void AppRoot__Set1_fn(uObject* handle, uObject* childHandle);
void AppRoot__SetAppRootView_fn(void** handle);
void AppRoot__SetClearColor_fn(uObject* handle, float* r, float* g, float* b, float* a);

struct AppRoot : uObject
{
    static uSStrong<uObject*> _appRootView_;
    static uSStrong<uObject*>& _appRootView() { return AppRoot_typeof()->Init(), _appRootView_; }
    static uSStrong<uObject*> _root_;
    static uSStrong<uObject*>& _root() { return AppRoot_typeof()->Init(), _root_; }

    static uObject* CreateAppRootView(uObject* handle);
    static void Remove(uObject* root);
    static void Remove1(uObject* handle, uObject* childHandle);
    static void Set(uObject* root);
    static void Set1(uObject* handle, uObject* childHandle);
    static void SetAppRootView(void* handle);
    static void SetClearColor(uObject* handle, float r, float g, float b, float a);
    static void ClearColor(::g::Uno::Float4 value);
    static uObject* RootView();
};
// }

}} // ::g::Fuse
