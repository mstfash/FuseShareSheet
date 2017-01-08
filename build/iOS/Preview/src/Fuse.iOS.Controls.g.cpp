// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.iOS.Controls.NavDelegate.h>
#include <Fuse.iOS.Controls.WebView.h>
#include <Fuse.iOS.Controls.WKWebViewHelpers.h>
#include <Fuse.Navigation.HistoryChangedHandler.h>
#include <Fuse.Platform.AppEvents.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <ObjC.Object.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.NotImplementedException.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[4];
static uType* TYPES[5];

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/0.42.4/ios/$.uno
// ----------------------------------------------------------------------------------------------------

// public sealed extern class WebView :175
// {
// ~WebView() :214
static void WebView__Finalize_fn(WebView* __this)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "Finalize()");

    if (__this->Handle1 != NULL)
        ::g::Fuse::Platform::AppEvents::remove_LowMemoryWarning(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnLowMemory_fn, __this));

    if (__this->_isUpdating)
        __this->_isUpdating = false;

    ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnUpdate_fn, __this), 0);
}

static void WebView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("about:blank");
    ::STRINGS[2] = uString::Const("low mem in WebView");
    ::STRINGS[3] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/0.42.4/ios/$.uno");
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[2] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::EventHandler_typeof();
    ::TYPES[4] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(WebView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(WebView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(WebView_type, interface2),
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(WebView_type, interface3),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(WebView_type, interface4),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(WebView_type, interface5),
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(WebView_type, interface6));
    type->SetFields(5,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _file), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _isUpdating), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _source), 0,
        ::g::Fuse::Controls::WebView_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _webViewHost), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, Handle1), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, NavigationDelegate), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _BaseUrl), 0,
        ::TYPES[3/*Uno.EventHandler*/], offsetof(::g::Fuse::iOS::Controls::WebView, BeginLoading1), 0,
        ::TYPES[3/*Uno.EventHandler*/], offsetof(::g::Fuse::iOS::Controls::WebView, PageLoaded1), 0,
        ::TYPES[4/*Uno.UX.ValueChangedHandler<double>*/], offsetof(::g::Fuse::iOS::Controls::WebView, ProgressChanged1), 0,
        ::TYPES[3/*Uno.EventHandler*/], offsetof(::g::Fuse::iOS::Controls::WebView, UrlChanged1), 0);
    type->Reflection.SetFunctions(33,
        new uFunction("get_BaseUrl", NULL, (void*)WebView__get_BaseUrl_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_BaseUrl", NULL, (void*)WebView__set_BaseUrl_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_BeginLoading", NULL, (void*)WebView__add_BeginLoading_fn, 0, false, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler*/]),
        new uFunction("remove_BeginLoading", NULL, (void*)WebView__remove_BeginLoading_fn, 0, false, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler*/]),
        new uFunction("get_CanGoBack", NULL, (void*)WebView__get_CanGoBack_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanGoForward", NULL, (void*)WebView__get_CanGoForward_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Create", NULL, (void*)WebView__Create_fn, 0, true, type, 1, ::g::Fuse::Controls::WebView_typeof()),
        new uFunction("get_DocumentTitle", NULL, (void*)WebView__get_DocumentTitle_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("Eval", NULL, (void*)WebView__Eval_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Eval", NULL, (void*)WebView__Eval1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL)),
        new uFunction("get_File", NULL, (void*)WebView__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)WebView__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("GoBack", NULL, (void*)WebView__GoBack_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("GoForward", NULL, (void*)WebView__GoForward_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("add_HistoryChanged", NULL, (void*)WebView__add_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("remove_HistoryChanged", NULL, (void*)WebView__remove_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("LoadHtml", NULL, (void*)WebView__LoadHtml_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("LoadHtml", NULL, (void*)WebView__LoadHtml1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("get_Loading", NULL, (void*)WebView__get_Loading_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("LoadUrl", NULL, (void*)WebView__LoadUrl_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_PageLoaded", NULL, (void*)WebView__add_PageLoaded_fn, 0, false, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler*/]),
        new uFunction("remove_PageLoaded", NULL, (void*)WebView__remove_PageLoaded_fn, 0, false, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler*/]),
        new uFunction("get_Progress", NULL, (void*)WebView__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("add_ProgressChanged", NULL, (void*)WebView__add_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[4/*Uno.UX.ValueChangedHandler<double>*/]),
        new uFunction("remove_ProgressChanged", NULL, (void*)WebView__remove_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[4/*Uno.UX.ValueChangedHandler<double>*/]),
        new uFunction("Reload", NULL, (void*)WebView__Reload_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)WebView__get_Source_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)WebView__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Stop", NULL, (void*)WebView__Stop_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Url", NULL, (void*)WebView__get_Url_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Url", NULL, (void*)WebView__set_Url_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_UrlChanged", NULL, (void*)WebView__add_UrlChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler*/]),
        new uFunction("remove_UrlChanged", NULL, (void*)WebView__remove_UrlChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler*/]));
}

WebView_type* WebView_typeof()
{
    static uSStrong<WebView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(WebView);
    options.TypeSize = sizeof(WebView_type);
    type = (WebView_type*)uClassType::New("Fuse.iOS.Controls.WebView", options);
    type->fp_build_ = WebView_build;
    type->fp_Finalize = (void(*)(uObject*))WebView__Finalize_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::iOS::View*))WebView__Dispose_fn;
    type->interface3.fp_Eval1 = (void(*)(uObject*, uString*, uDelegate*))WebView__Eval1_fn;
    type->interface3.fp_Eval = (void(*)(uObject*, uString*))WebView__Eval_fn;
    type->interface3.fp_LoadHtml = (void(*)(uObject*, uString*))WebView__LoadHtml_fn;
    type->interface3.fp_LoadHtml1 = (void(*)(uObject*, uString*, uString*))WebView__LoadHtml1_fn;
    type->interface3.fp_LoadUrl = (void(*)(uObject*, uString*))WebView__LoadUrl_fn;
    type->interface3.fp_Stop = (void(*)(uObject*))WebView__Stop_fn;
    type->interface3.fp_Reload = (void(*)(uObject*))WebView__Reload_fn;
    type->interface3.fp_get_BaseUrl = (void(*)(uObject*, uString**))WebView__get_BaseUrl_fn;
    type->interface3.fp_set_BaseUrl = (void(*)(uObject*, uString*))WebView__set_BaseUrl_fn;
    type->interface3.fp_get_Url = (void(*)(uObject*, uString**))WebView__get_Url_fn;
    type->interface3.fp_set_Url = (void(*)(uObject*, uString*))WebView__set_Url_fn;
    type->interface3.fp_get_DocumentTitle = (void(*)(uObject*, uString**))WebView__get_DocumentTitle_fn;
    type->interface3.fp_get_File = (void(*)(uObject*, ::g::Uno::UX::FileSource**))WebView__get_File_fn;
    type->interface3.fp_set_File = (void(*)(uObject*, ::g::Uno::UX::FileSource*))WebView__set_File_fn;
    type->interface3.fp_add_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__add_PageLoaded_fn;
    type->interface3.fp_remove_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__remove_PageLoaded_fn;
    type->interface3.fp_add_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__add_BeginLoading_fn;
    type->interface3.fp_remove_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__remove_BeginLoading_fn;
    type->interface3.fp_add_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__add_UrlChanged_fn;
    type->interface3.fp_remove_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__remove_UrlChanged_fn;
    type->interface4.fp_get_Progress = (void(*)(uObject*, double*))WebView__get_Progress_fn;
    type->interface4.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__add_ProgressChanged_fn;
    type->interface4.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__remove_ProgressChanged_fn;
    type->interface5.fp_GoForward = (void(*)(uObject*))WebView__GoForward_fn;
    type->interface5.fp_GoBack = (void(*)(uObject*))WebView__GoBack_fn;
    type->interface5.fp_get_CanGoBack = (void(*)(uObject*, bool*))WebView__get_CanGoBack_fn;
    type->interface5.fp_get_CanGoForward = (void(*)(uObject*, bool*))WebView__get_CanGoForward_fn;
    type->interface5.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))WebView__add_HistoryChanged_fn;
    type->interface5.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))WebView__remove_HistoryChanged_fn;
    type->interface6.fp_get_Source = (void(*)(uObject*, uString**))WebView__get_Source_fn;
    type->interface6.fp_set_Source = (void(*)(uObject*, uString*))WebView__set_Source_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::LeafView__Measure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::iOS::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::iOS::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::iOS::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::iOS::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))WebView__Dispose_fn;
    return type;
}

// private WebView(Fuse.Controls.WebView webViewHost, ObjC.Object wvHandle) :191
void WebView__ctor_2_fn(WebView* __this, ::g::Fuse::Controls::WebView* webViewHost, uObject* wvHandle)
{
    __this->ctor_2(webViewHost, wvHandle);
}

// public generated string get_BaseUrl() :229
void WebView__get_BaseUrl_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public generated void set_BaseUrl(string value) :229
void WebView__set_BaseUrl_fn(WebView* __this, uString* value)
{
    __this->BaseUrl(value);
}

// public generated void add_BeginLoading(Uno.EventHandler value) :347
void WebView__add_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->add_BeginLoading(value);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) :347
void WebView__remove_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->remove_BeginLoading(value);
}

// public bool get_CanGoBack() :341
void WebView__get_CanGoBack_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// public bool get_CanGoForward() :342
void WebView__get_CanGoForward_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoForward();
}

// public static Fuse.iOS.Controls.WebView Create(Fuse.Controls.WebView webViewHost) :185
void WebView__Create_fn(::g::Fuse::Controls::WebView* webViewHost, WebView** __retval)
{
    *__retval = WebView::Create(webViewHost);
}

// public override sealed void Dispose() :201
void WebView__Dispose_fn(WebView* __this)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "Dispose()");
    uPtr(__this->_webViewHost)->WebViewClient(NULL);
    __this->_webViewHost = NULL;
    ::g::Fuse::Controls::Native::iOS::View__Dispose_fn(__this);
}

// public string get_DocumentTitle() :340
void WebView__get_DocumentTitle_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->DocumentTitle();
}

// public void Eval(string js) :279
void WebView__Eval_fn(WebView* __this, uString* js)
{
    __this->Eval(js);
}

// public void Eval(string js, Uno.Action<string> onResult) :284
void WebView__Eval1_fn(WebView* __this, uString* js, uDelegate* onResult)
{
    __this->Eval1(js, onResult);
}

// public Uno.UX.FileSource get_File() :292
void WebView__get_File_fn(WebView* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :293
void WebView__set_File_fn(WebView* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public void GoBack() :343
void WebView__GoBack_fn(WebView* __this)
{
    __this->GoBack();
}

// public void GoForward() :344
void WebView__GoForward_fn(WebView* __this)
{
    __this->GoForward();
}

// public void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :210
void WebView__add_HistoryChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_HistoryChanged(value);
}

// public void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :211
void WebView__remove_HistoryChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_HistoryChanged(value);
}

// private void LoadFile(Uno.UX.FileSource file) :301
void WebView__LoadFile_fn(WebView* __this, ::g::Uno::UX::FileSource* file)
{
    __this->LoadFile(file);
}

// public void LoadHtml(string html) :238
void WebView__LoadHtml_fn(WebView* __this, uString* html)
{
    __this->LoadHtml(html);
}

// public void LoadHtml(string html, string baseUrl) :243
void WebView__LoadHtml1_fn(WebView* __this, uString* html, uString* baseUrl)
{
    __this->LoadHtml1(html, baseUrl);
}

// public bool get_Loading() :338
void WebView__get_Loading_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->Loading();
}

// public void LoadUrl(string url) :255
void WebView__LoadUrl_fn(WebView* __this, uString* url)
{
    __this->LoadUrl(url);
}

// private WebView New(Fuse.Controls.WebView webViewHost, ObjC.Object wvHandle) :191
void WebView__New1_fn(::g::Fuse::Controls::WebView* webViewHost, uObject* wvHandle, WebView** __retval)
{
    *__retval = WebView::New1(webViewHost, wvHandle);
}

// private void OnBeginNavigation() :320
void WebView__OnBeginNavigation_fn(WebView* __this)
{
    __this->OnBeginNavigation();
}

// private void OnFinishNavigation() :332
void WebView__OnFinishNavigation_fn(WebView* __this)
{
    __this->OnFinishNavigation();
}

// private void OnLowMemory() :223
void WebView__OnLowMemory_fn(WebView* __this)
{
    __this->OnLowMemory();
}

// private void OnProgressChanged() :313
void WebView__OnProgressChanged_fn(WebView* __this)
{
    __this->OnProgressChanged();
}

// private void OnUpdate() :269
void WebView__OnUpdate_fn(WebView* __this)
{
    __this->OnUpdate();
}

// private void OnURLChanged() :326
void WebView__OnURLChanged_fn(WebView* __this)
{
    __this->OnURLChanged();
}

// public generated void add_PageLoaded(Uno.EventHandler value) :348
void WebView__add_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->add_PageLoaded(value);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) :348
void WebView__remove_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->remove_PageLoaded(value);
}

// public double get_Progress() :339
void WebView__get_Progress_fn(WebView* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :180
void WebView__add_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :180
void WebView__remove_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public void Reload() :345
void WebView__Reload_fn(WebView* __this)
{
    __this->Reload();
}

// public string get_Source() :234
void WebView__get_Source_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(string value) :235
void WebView__set_Source_fn(WebView* __this, uString* value)
{
    __this->Source(value);
}

// private void StartProgressUpdate() :263
void WebView__StartProgressUpdate_fn(WebView* __this)
{
    __this->StartProgressUpdate();
}

// public void Stop() :346
void WebView__Stop_fn(WebView* __this)
{
    __this->Stop();
}

// public string get_Url() :251
void WebView__get_Url_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :252
void WebView__set_Url_fn(WebView* __this, uString* value)
{
    __this->Url(value);
}

// public generated void add_UrlChanged(Uno.EventHandler value) :349
void WebView__add_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_UrlChanged(value);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) :349
void WebView__remove_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_UrlChanged(value);
}

// private WebView(Fuse.Controls.WebView webViewHost, ObjC.Object wvHandle) [instance] :191
void WebView::ctor_2(::g::Fuse::Controls::WebView* webViewHost, uObject* wvHandle)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", ".ctor(Fuse.Controls.WebView,ObjC.Object)");
    ctor_1(wvHandle);
    _webViewHost = webViewHost;
    Handle1 = wvHandle;
    NavigationDelegate = ::g::Fuse::iOS::Controls::NavDelegate::Create(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnBeginNavigation_fn, this), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnFinishNavigation_fn, this), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnURLChanged_fn, this));
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::SetNavigationDelegate(Handle1, NavigationDelegate);
    ::g::Fuse::Platform::AppEvents::add_LowMemoryWarning(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnLowMemory_fn, this));
    uPtr(_webViewHost)->WebViewClient((uObject*)this);
}

// public generated string get_BaseUrl() [instance] :229
uString* WebView::BaseUrl()
{
    return _BaseUrl;
}

// public generated void set_BaseUrl(string value) [instance] :229
void WebView::BaseUrl(uString* value)
{
    _BaseUrl = value;
}

// public generated void add_BeginLoading(Uno.EventHandler value) [instance] :347
void WebView::add_BeginLoading(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "add_BeginLoading(Uno.EventHandler)");
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BeginLoading1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) [instance] :347
void WebView::remove_BeginLoading(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "remove_BeginLoading(Uno.EventHandler)");
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BeginLoading1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public bool get_CanGoBack() [instance] :341
bool WebView::CanGoBack()
{
    return ::g::Fuse::iOS::Controls::WKWebViewHelpers::GetCanGoBack(Handle1);
}

// public bool get_CanGoForward() [instance] :342
bool WebView::CanGoForward()
{
    return ::g::Fuse::iOS::Controls::WKWebViewHelpers::GetCanGoForward(Handle1);
}

// public string get_DocumentTitle() [instance] :340
uString* WebView::DocumentTitle()
{
    return ::g::Fuse::iOS::Controls::WKWebViewHelpers::GetTitle(Handle1);
}

// public void Eval(string js) [instance] :279
void WebView::Eval(uString* js)
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::EvalOnWebView(Handle1, js);
}

// public void Eval(string js, Uno.Action<string> onResult) [instance] :284
void WebView::Eval1(uString* js, uDelegate* onResult)
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::EvalOnWebViewWithHandler(Handle1, js, onResult);
}

// public Uno.UX.FileSource get_File() [instance] :292
::g::Uno::UX::FileSource* WebView::File()
{
    return _file;
}

// public void set_File(Uno.UX.FileSource value) [instance] :293
void WebView::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "set_File(Uno.UX.FileSource)");
    _file = value;

    if (_file != NULL)
        LoadFile(_file);
}

// public void GoBack() [instance] :343
void WebView::GoBack()
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::GoBack(Handle1);
}

// public void GoForward() [instance] :344
void WebView::GoForward()
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::GoForward(Handle1);
}

// public void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :210
void WebView::add_HistoryChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler)");
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// public void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :211
void WebView::remove_HistoryChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler)");
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// private void LoadFile(Uno.UX.FileSource file) [instance] :301
void WebView::LoadFile(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "LoadFile(Uno.UX.FileSource)");
    uString* data = ::STRINGS[0/*""*/];

    {
        const auto __finally_fun = [&]()
        {
            LoadHtml(data);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        try
        {
            data = uPtr(file)->ReadAllText();
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            data = uPtr(e)->ToString();
        }
    }
}

// public void LoadHtml(string html) [instance] :238
void WebView::LoadHtml(uString* html)
{
    LoadHtml1(html, ::STRINGS[0/*""*/]);
}

// public void LoadHtml(string html, string baseUrl) [instance] :243
void WebView::LoadHtml1(uString* html, uString* baseUrl)
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::LoadHTML(Handle1, html, baseUrl);
    StartProgressUpdate();
}

// public bool get_Loading() [instance] :338
bool WebView::Loading()
{
    return ::g::Fuse::iOS::Controls::WKWebViewHelpers::GetIsLoading(Handle1);
}

// public void LoadUrl(string url) [instance] :255
void WebView::LoadUrl(uString* url)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "LoadUrl(string)");

    if (::g::Uno::String::op_Equality(url, NULL) || ::g::Uno::String::op_Equality(url, ::STRINGS[0/*""*/]))
        url = ::STRINGS[1/*"about:blank"*/];

    ::g::Fuse::iOS::Controls::WKWebViewHelpers::LoadURL(Handle1, url);
    StartProgressUpdate();
}

// private void OnBeginNavigation() [instance] :320
void WebView::OnBeginNavigation()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "OnBeginNavigation()");

    if (::g::Uno::Delegate::op_Inequality(BeginLoading1, NULL))
        uPtr(BeginLoading1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnFinishNavigation() [instance] :332
void WebView::OnFinishNavigation()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "OnFinishNavigation()");

    if (::g::Uno::Delegate::op_Inequality(PageLoaded1, NULL))
        uPtr(PageLoaded1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnLowMemory() [instance] :223
void WebView::OnLowMemory()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "OnLowMemory()");
    ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[2/*"low mem in ...*/], 1, ::STRINGS[3/*"/Users/most...*/], 225);
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::FreeMemory();
}

// private void OnProgressChanged() [instance] :313
void WebView::OnProgressChanged()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "OnProgressChanged()");
    ::g::Uno::UX::ValueChangedArgs* ret2;

    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, NULL))
        uPtr(ProgressChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[2/*Uno.UX.ValueChangedArgs<double>*/], uCRef(Progress()), &ret2), ret2));
}

// private void OnUpdate() [instance] :269
void WebView::OnUpdate()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "OnUpdate()");
    OnProgressChanged();

    if (!Loading())
    {
        _isUpdating = false;
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnUpdate_fn, this), 0);
    }
}

// private void OnURLChanged() [instance] :326
void WebView::OnURLChanged()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "OnURLChanged()");

    if (::g::Uno::Delegate::op_Inequality(UrlChanged1, NULL))
        uPtr(UrlChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public generated void add_PageLoaded(Uno.EventHandler value) [instance] :348
void WebView::add_PageLoaded(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "add_PageLoaded(Uno.EventHandler)");
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageLoaded1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) [instance] :348
void WebView::remove_PageLoaded(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "remove_PageLoaded(Uno.EventHandler)");
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageLoaded1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public double get_Progress() [instance] :339
double WebView::Progress()
{
    return ::g::Fuse::iOS::Controls::WKWebViewHelpers::GetEstimatedProgress(Handle1);
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :180
void WebView::add_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "add_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[4/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :180
void WebView::remove_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "remove_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[4/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public void Reload() [instance] :345
void WebView::Reload()
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::Reload(Handle1);
}

// public string get_Source() [instance] :234
uString* WebView::Source()
{
    return _source;
}

// public void set_Source(string value) [instance] :235
void WebView::Source(uString* value)
{
    LoadHtml(_source = value);
}

// private void StartProgressUpdate() [instance] :263
void WebView::StartProgressUpdate()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "StartProgressUpdate()");

    if (!_isUpdating)
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)WebView__OnUpdate_fn, this), 0);
}

// public void Stop() [instance] :346
void WebView::Stop()
{
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::StopLoading(Handle1);
}

// public string get_Url() [instance] :251
uString* WebView::Url()
{
    return ::g::Fuse::iOS::Controls::WKWebViewHelpers::GetURL(Handle1);
}

// public void set_Url(string value) [instance] :252
void WebView::Url(uString* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "set_Url(string)");
    LoadUrl(value);
}

// public generated void add_UrlChanged(Uno.EventHandler value) [instance] :349
void WebView::add_UrlChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "add_UrlChanged(Uno.EventHandler)");
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UrlChanged1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) [instance] :349
void WebView::remove_UrlChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "remove_UrlChanged(Uno.EventHandler)");
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UrlChanged1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public static Fuse.iOS.Controls.WebView Create(Fuse.Controls.WebView webViewHost) [static] :185
WebView* WebView::Create(::g::Fuse::Controls::WebView* webViewHost)
{
    uObject* wv = ::g::Fuse::iOS::Controls::WKWebViewHelpers::CreateWebView();
    return WebView::New1(webViewHost, wv);
}

// private WebView New(Fuse.Controls.WebView webViewHost, ObjC.Object wvHandle) [static] :191
WebView* WebView::New1(::g::Fuse::Controls::WebView* webViewHost, uObject* wvHandle)
{
    WebView* obj1 = (WebView*)uNew(WebView_typeof());
    obj1->ctor_2(webViewHost, wvHandle);
    return obj1;
}
// }

}}}} // ::g::Fuse::iOS::Controls
