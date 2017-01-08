// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct WKWebViewHelpers;}}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// internal static extern class WKWebViewHelpers :40
// {
uClassType* WKWebViewHelpers_typeof();
void WKWebViewHelpers__CreateWebView_fn(uObject** __retval);
void WKWebViewHelpers__EvalOnWebView_fn(uObject* webview, uString* js);
void WKWebViewHelpers__EvalOnWebViewWithHandler_fn(uObject* webview, uString* js, uDelegate* handler);
void WKWebViewHelpers__FreeMemory_fn();
void WKWebViewHelpers__GenBaseUrl_fn(uString* path, uString** __retval);
void WKWebViewHelpers__GetCanGoBack_fn(uObject* handle, bool* __retval);
void WKWebViewHelpers__GetCanGoForward_fn(uObject* handle, bool* __retval);
void WKWebViewHelpers__GetEstimatedProgress_fn(uObject* handle, double* __retval);
void WKWebViewHelpers__GetIsLoading_fn(uObject* handle, bool* __retval);
void WKWebViewHelpers__GetTitle_fn(uObject* handle, uString** __retval);
void WKWebViewHelpers__GetURL_fn(uObject* handle, uString** __retval);
void WKWebViewHelpers__GoBack_fn(uObject* handle);
void WKWebViewHelpers__GoForward_fn(uObject* handle);
void WKWebViewHelpers__LoadHTML_fn(uObject* webview, uString* html, uString* baseURL);
void WKWebViewHelpers__LoadURL_fn(uObject* handle, uString* url);
void WKWebViewHelpers__Reload_fn(uObject* handle);
void WKWebViewHelpers__SetNavigationDelegate_fn(uObject* webViewHandle, uObject* delegateHandle);
void WKWebViewHelpers__StopLoading_fn(uObject* handle);

struct WKWebViewHelpers : uObject
{
    static uObject* CreateWebView();
    static void EvalOnWebView(uObject* webview, uString* js);
    static void EvalOnWebViewWithHandler(uObject* webview, uString* js, uDelegate* handler);
    static void FreeMemory();
    static uString* GenBaseUrl(uString* path);
    static bool GetCanGoBack(uObject* handle);
    static bool GetCanGoForward(uObject* handle);
    static double GetEstimatedProgress(uObject* handle);
    static bool GetIsLoading(uObject* handle);
    static uString* GetTitle(uObject* handle);
    static uString* GetURL(uObject* handle);
    static void GoBack(uObject* handle);
    static void GoForward(uObject* handle);
    static void LoadHTML(uObject* webview, uString* html, uString* baseURL);
    static void LoadURL(uObject* handle, uString* url);
    static void Reload(uObject* handle);
    static void SetNavigationDelegate(uObject* webViewHandle, uObject* delegateHandle);
    static void StopLoading(uObject* handle);
};
// }

}}}} // ::g::Fuse::iOS::Controls
