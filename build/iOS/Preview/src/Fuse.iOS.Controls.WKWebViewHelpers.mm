// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.Controls.WKWebViewHelpers.h>
#include <ObjC.Object.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
#include <WebKit/WebKit.h>

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// internal static extern class WKWebViewHelpers :40
// {
static void WKWebViewHelpers_build(uType* type)
{
}

uClassType* WKWebViewHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Controls.WKWebViewHelpers", options);
    type->fp_build_ = WKWebViewHelpers_build;
    return type;
}

// public static ObjC.Object CreateWebView() :76
void WKWebViewHelpers__CreateWebView_fn(uObject** __retval)
{
    *__retval = WKWebViewHelpers::CreateWebView();
}

// public static void EvalOnWebView(ObjC.Object webview, string js) :52
void WKWebViewHelpers__EvalOnWebView_fn(uObject* webview, uString* js)
{
    WKWebViewHelpers::EvalOnWebView(webview, js);
}

// public static void EvalOnWebViewWithHandler(ObjC.Object webview, string js, Uno.Action<string> handler) :43
void WKWebViewHelpers__EvalOnWebViewWithHandler_fn(uObject* webview, uString* js, uDelegate* handler)
{
    WKWebViewHelpers::EvalOnWebViewWithHandler(webview, js, handler);
}

// public static void FreeMemory() :161
void WKWebViewHelpers__FreeMemory_fn()
{
    WKWebViewHelpers::FreeMemory();
}

// public static string GenBaseUrl(string path) :66
void WKWebViewHelpers__GenBaseUrl_fn(uString* path, uString** __retval)
{
    *__retval = WKWebViewHelpers::GenBaseUrl(path);
}

// public static bool GetCanGoBack(ObjC.Object handle) :119
void WKWebViewHelpers__GetCanGoBack_fn(uObject* handle, bool* __retval)
{
    *__retval = WKWebViewHelpers::GetCanGoBack(handle);
}

// public static bool GetCanGoForward(ObjC.Object handle) :133
void WKWebViewHelpers__GetCanGoForward_fn(uObject* handle, bool* __retval)
{
    *__retval = WKWebViewHelpers::GetCanGoForward(handle);
}

// public static double GetEstimatedProgress(ObjC.Object handle) :105
void WKWebViewHelpers__GetEstimatedProgress_fn(uObject* handle, double* __retval)
{
    *__retval = WKWebViewHelpers::GetEstimatedProgress(handle);
}

// public static bool GetIsLoading(ObjC.Object handle) :89
void WKWebViewHelpers__GetIsLoading_fn(uObject* handle, bool* __retval)
{
    *__retval = WKWebViewHelpers::GetIsLoading(handle);
}

// public static string GetTitle(ObjC.Object handle) :112
void WKWebViewHelpers__GetTitle_fn(uObject* handle, uString** __retval)
{
    *__retval = WKWebViewHelpers::GetTitle(handle);
}

// public static string GetURL(ObjC.Object handle) :82
void WKWebViewHelpers__GetURL_fn(uObject* handle, uString** __retval)
{
    *__retval = WKWebViewHelpers::GetURL(handle);
}

// public static void GoBack(ObjC.Object handle) :126
void WKWebViewHelpers__GoBack_fn(uObject* handle)
{
    WKWebViewHelpers::GoBack(handle);
}

// public static void GoForward(ObjC.Object handle) :140
void WKWebViewHelpers__GoForward_fn(uObject* handle)
{
    WKWebViewHelpers::GoForward(handle);
}

// public static void LoadHTML(ObjC.Object webview, string html, string baseURL) :59
void WKWebViewHelpers__LoadHTML_fn(uObject* webview, uString* html, uString* baseURL)
{
    WKWebViewHelpers::LoadHTML(webview, html, baseURL);
}

// public static void LoadURL(ObjC.Object handle, string url) :96
void WKWebViewHelpers__LoadURL_fn(uObject* handle, uString* url)
{
    WKWebViewHelpers::LoadURL(handle, url);
}

// public static void Reload(ObjC.Object handle) :147
void WKWebViewHelpers__Reload_fn(uObject* handle)
{
    WKWebViewHelpers::Reload(handle);
}

// public static void SetNavigationDelegate(ObjC.Object webViewHandle, ObjC.Object delegateHandle) :169
void WKWebViewHelpers__SetNavigationDelegate_fn(uObject* webViewHandle, uObject* delegateHandle)
{
    WKWebViewHelpers::SetNavigationDelegate(webViewHandle, delegateHandle);
}

// public static void StopLoading(ObjC.Object handle) :154
void WKWebViewHelpers__StopLoading_fn(uObject* handle)
{
    WKWebViewHelpers::StopLoading(handle);
}

// public static ObjC.Object CreateWebView() [static] :76
uObject* WKWebViewHelpers::CreateWebView()
{
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            return [[WKWebView alloc] init];
        } ());
        
    }
    
}

// public static void EvalOnWebView(ObjC.Object webview, string js) [static] :52
void WKWebViewHelpers::EvalOnWebView(uObject* webview, uString* js)
{
    @autoreleasepool
    {
        [] (::id webview, ::NSString* js) -> void
        {
            WKWebView* wv = webview;
            				[wv evaluateJavaScript:js completionHandler:nil];
        } (::g::ObjC::Helpers::GetHandle(webview), ::uObjC::NativeString(js));
        
    }
    
}

// public static void EvalOnWebViewWithHandler(ObjC.Object webview, string js, Uno.Action<string> handler) [static] :43
void WKWebViewHelpers::EvalOnWebViewWithHandler(uObject* webview, uString* js, uDelegate* handler)
{
    @autoreleasepool
    {
        [] (::id webview, ::NSString* js, ::uObjC::Function<void, ::NSString*> handler) -> void
        {
            WKWebView* wv = webview;
            				[wv evaluateJavaScript:js completionHandler:^(id result, NSError* error) {
            					handler(result);
            				}];
        } (::g::ObjC::Helpers::GetHandle(webview), ::uObjC::NativeString(js), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return [[^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            } copy] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: handler]));
        
    }
    
}

// public static void FreeMemory() [static] :161
void WKWebViewHelpers::FreeMemory()
{
    @autoreleasepool
    {
        id cache = [NSURLCache sharedURLCache];
        			if(cache!=nil)
        				[cache removeAllCachedResponses];
    }
    
}

// public static string GenBaseUrl(string path) [static] :66
uString* WKWebViewHelpers::GenBaseUrl(uString* path)
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::NSString* path) -> ::NSString*
        {
            NSString *resourcePath = [[[[NSBundle mainBundle] resourcePath]
            					stringByReplacingOccurrencesOfString:@"/" withString:@"//"]
            					stringByReplacingOccurrencesOfString:@" " withString:@"%20"];
            
            				return resourcePath;
        } (::uObjC::NativeString(path)));
        
    }
    
}

// public static bool GetCanGoBack(ObjC.Object handle) [static] :119
bool WKWebViewHelpers::GetCanGoBack(uObject* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            WKWebView* wv = handle;
            			return wv.canGoBack;
        } (::g::ObjC::Helpers::GetHandle(handle));
        
    }
    
}

// public static bool GetCanGoForward(ObjC.Object handle) [static] :133
bool WKWebViewHelpers::GetCanGoForward(uObject* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            WKWebView* wv = handle;
            			return wv.canGoForward;
        } (::g::ObjC::Helpers::GetHandle(handle));
        
    }
    
}

// public static double GetEstimatedProgress(ObjC.Object handle) [static] :105
double WKWebViewHelpers::GetEstimatedProgress(uObject* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> double
        {
            WKWebView* wv = handle;
            			return wv.estimatedProgress;
        } (::g::ObjC::Helpers::GetHandle(handle));
        
    }
    
}

// public static bool GetIsLoading(ObjC.Object handle) [static] :89
bool WKWebViewHelpers::GetIsLoading(uObject* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            WKWebView* wv = handle;
            			return wv.loading;
        } (::g::ObjC::Helpers::GetHandle(handle));
        
    }
    
}

// public static string GetTitle(ObjC.Object handle) [static] :112
uString* WKWebViewHelpers::GetTitle(uObject* handle)
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::id handle) -> ::NSString*
        {
            WKWebView* wv = handle;
            			return wv.title;
        } (::g::ObjC::Helpers::GetHandle(handle)));
        
    }
    
}

// public static string GetURL(ObjC.Object handle) [static] :82
uString* WKWebViewHelpers::GetURL(uObject* handle)
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::id handle) -> ::NSString*
        {
            WKWebView* wv = handle;
            			return wv.URL.absoluteString;
        } (::g::ObjC::Helpers::GetHandle(handle)));
        
    }
    
}

// public static void GoBack(ObjC.Object handle) [static] :126
void WKWebViewHelpers::GoBack(uObject* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            WKWebView* wv = handle;
            			[wv goBack];
        } (::g::ObjC::Helpers::GetHandle(handle));
        
    }
    
}

// public static void GoForward(ObjC.Object handle) [static] :140
void WKWebViewHelpers::GoForward(uObject* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            WKWebView* wv = handle;
            			[wv goForward];
        } (::g::ObjC::Helpers::GetHandle(handle));
        
    }
    
}

// public static void LoadHTML(ObjC.Object webview, string html, string baseURL) [static] :59
void WKWebViewHelpers::LoadHTML(uObject* webview, uString* html, uString* baseURL)
{
    @autoreleasepool
    {
        [] (::id webview, ::NSString* html, ::NSString* baseURL) -> void
        {
            WKWebView* wv = webview;
            				[wv loadHTMLString:html baseURL:[NSURL URLWithString:baseURL]];
        } (::g::ObjC::Helpers::GetHandle(webview), ::uObjC::NativeString(html), ::uObjC::NativeString(baseURL));
        
    }
    
}

// public static void LoadURL(ObjC.Object handle, string url) [static] :96
void WKWebViewHelpers::LoadURL(uObject* handle, uString* url)
{
    @autoreleasepool
    {
        [] (::id handle, ::NSString* url) -> void
        {
            WKWebView* wv = handle;
            			id nsurl = [NSURL URLWithString:url];
            			id request = [[NSURLRequest alloc] initWithURL:nsurl];
            			[wv loadRequest:request];
        } (::g::ObjC::Helpers::GetHandle(handle), ::uObjC::NativeString(url));
        
    }
    
}

// public static void Reload(ObjC.Object handle) [static] :147
void WKWebViewHelpers::Reload(uObject* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            WKWebView* wv = handle;
            			[wv reload];
        } (::g::ObjC::Helpers::GetHandle(handle));
        
    }
    
}

// public static void SetNavigationDelegate(ObjC.Object webViewHandle, ObjC.Object delegateHandle) [static] :169
void WKWebViewHelpers::SetNavigationDelegate(uObject* webViewHandle, uObject* delegateHandle)
{
    @autoreleasepool
    {
        [] (::id webViewHandle, ::id delegateHandle) -> void
        {
            [webViewHandle setNavigationDelegate:delegateHandle];
        } (::g::ObjC::Helpers::GetHandle(webViewHandle), ::g::ObjC::Helpers::GetHandle(delegateHandle));
        
    }
    
}

// public static void StopLoading(ObjC.Object handle) [static] :154
void WKWebViewHelpers::StopLoading(uObject* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            WKWebView* wv = handle;
            			[wv stopLoading];
        } (::g::ObjC::Helpers::GetHandle(handle));
        
    }
    
}
// }

}}}} // ::g::Fuse::iOS::Controls
