// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Platform.AppEvents.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Display.h>
#include <Fuse.Platform.InterApp.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform2.ApplicationState.h>
#include <Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <Uno.Platform2.Display.h>
#include <Uno.String.h>
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace Platform{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Platform/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// internal static class AppEvents :15
// {
// static AppEvents() :19
static void AppEvents__cctor__fn(uType* __type)
{
    ::g::Uno::Platform2::Application::add_ReceivedLowMemoryWarning(uDelegate::New(::TYPES[0/*Uno.EventHandler*/], (void*)AppEvents__OnLowMemoryWarning_fn));
}

static void AppEvents_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::EventHandler_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::TYPES[1/*Uno.Action*/], (uintptr_t)&::g::Fuse::Platform::AppEvents::LowMemoryWarning1_, uFieldFlagsStatic);
}

uClassType* AppEvents_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.AppEvents", options);
    type->fp_build_ = AppEvents_build;
    type->fp_cctor_ = AppEvents__cctor__fn;
    return type;
}

// internal static generated void add_LowMemoryWarning(Uno.Action value) :17
void AppEvents__add_LowMemoryWarning_fn(uDelegate* value)
{
    AppEvents::add_LowMemoryWarning(value);
}

// internal static generated void remove_LowMemoryWarning(Uno.Action value) :17
void AppEvents__remove_LowMemoryWarning_fn(uDelegate* value)
{
    AppEvents::remove_LowMemoryWarning(value);
}

// private static void OnLowMemoryWarning(object s, object a) :24
void AppEvents__OnLowMemoryWarning_fn(uObject* s, uObject* a)
{
    AppEvents::OnLowMemoryWarning(s, a);
}

uSStrong<uDelegate*> AppEvents::LowMemoryWarning1_;

// private static void OnLowMemoryWarning(object s, object a) [static] :24
void AppEvents::OnLowMemoryWarning(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Platform.AppEvents", "OnLowMemoryWarning(object,object)");
    AppEvents_typeof()->Init();
    uDelegate* handler = AppEvents::LowMemoryWarning1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid();
}

// internal static generated void add_LowMemoryWarning(Uno.Action value) [static] :17
void AppEvents::add_LowMemoryWarning(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.AppEvents", "add_LowMemoryWarning(Uno.Action)");
    AppEvents_typeof()->Init();
    AppEvents::LowMemoryWarning1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(AppEvents::LowMemoryWarning1(), value), ::TYPES[1/*Uno.Action*/]);
}

// internal static generated void remove_LowMemoryWarning(Uno.Action value) [static] :17
void AppEvents::remove_LowMemoryWarning(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.AppEvents", "remove_LowMemoryWarning(Uno.Action)");
    AppEvents_typeof()->Init();
    AppEvents::LowMemoryWarning1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(AppEvents::LowMemoryWarning1(), value), ::TYPES[1/*Uno.Action*/]);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Platform/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public enum ApplicationState :72
uEnumType* ApplicationState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.ApplicationState", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Uninitialized", 0LL,
        "Background", 1LL,
        "Foreground", 2LL,
        "Interactive", 3LL,
        "Terminating", -1LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Platform/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// internal sealed class Display :167
// {
static void Display_build(uType* type)
{
}

uType* Display_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Display);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Platform.Display", options);
    type->fp_build_ = Display_build;
    type->fp_ctor_ = (void*)Display__New1_fn;
    return type;
}

// public generated Display() :167
void Display__ctor__fn(Display* __this)
{
    __this->ctor_();
}

// internal static extern Uno.Platform2.Display get_MainDisplay() :170
void Display__get_MainDisplay_fn(::g::Uno::Platform2::Display** __retval)
{
    *__retval = Display::MainDisplay();
}

// public generated Display New() :167
void Display__New1_fn(Display** __retval)
{
    *__retval = Display::New1();
}

// public generated Display() [instance] :167
void Display::ctor_()
{
}

// public generated Display New() [static] :167
Display* Display::New1()
{
    Display* obj1 = (Display*)uNew(Display_typeof());
    obj1->ctor_();
    return obj1;
}

// internal static extern Uno.Platform2.Display get_MainDisplay() [static] :170
::g::Uno::Platform2::Display* Display::MainDisplay()
{
    return ::g::Uno::Platform2::Display::MainDisplay();
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Platform/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public static class InterApp :44
// {
// static InterApp() :49
static void InterApp__cctor__fn(uType* __type)
{
    ::g::Uno::Platform2::Application::add_ReceivedURI(uDelegate::New(::TYPES[2/*Uno.EventHandler<string>*/], (void*)InterApp__OnReceivedURI_fn));
}

static void InterApp_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[3/*Uno.Action<string>*/], (uintptr_t)&::g::Fuse::Platform::InterApp::ReceivedURI1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("add_ReceivedURI", NULL, (void*)InterApp__add_ReceivedURI_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.Action<string>*/]),
        new uFunction("remove_ReceivedURI", NULL, (void*)InterApp__remove_ReceivedURI_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.Action<string>*/]));
}

uClassType* InterApp_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.InterApp", options);
    type->fp_build_ = InterApp_build;
    type->fp_cctor_ = InterApp__cctor__fn;
    return type;
}

// private static void OnReceivedURI(object sender, string uri) :54
void InterApp__OnReceivedURI_fn(uObject* sender, uString* uri)
{
    InterApp::OnReceivedURI(sender, uri);
}

// public static generated void add_ReceivedURI(Uno.Action<string> value) :47
void InterApp__add_ReceivedURI_fn(uDelegate* value)
{
    InterApp::add_ReceivedURI(value);
}

// public static generated void remove_ReceivedURI(Uno.Action<string> value) :47
void InterApp__remove_ReceivedURI_fn(uDelegate* value)
{
    InterApp::remove_ReceivedURI(value);
}

uSStrong<uDelegate*> InterApp::ReceivedURI1_;

// private static void OnReceivedURI(object sender, string uri) [static] :54
void InterApp::OnReceivedURI(uObject* sender, uString* uri)
{
    uStackFrame __("Fuse.Platform.InterApp", "OnReceivedURI(object,string)");
    InterApp_typeof()->Init();
    uDelegate* handler = InterApp::ReceivedURI1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uri);
}

// public static generated void add_ReceivedURI(Uno.Action<string> value) [static] :47
void InterApp::add_ReceivedURI(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.InterApp", "add_ReceivedURI(Uno.Action<string>)");
    InterApp_typeof()->Init();
    InterApp::ReceivedURI1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(InterApp::ReceivedURI1(), value), ::TYPES[3/*Uno.Action<string>*/]);
}

// public static generated void remove_ReceivedURI(Uno.Action<string> value) [static] :47
void InterApp::remove_ReceivedURI(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.InterApp", "remove_ReceivedURI(Uno.Action<string>)");
    InterApp_typeof()->Init();
    InterApp::ReceivedURI1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(InterApp::ReceivedURI1(), value), ::TYPES[3/*Uno.Action<string>*/]);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Platform/0.42.4/$.uno
// ----------------------------------------------------------------------------------------

// public static class Lifecycle :89
// {
// static Lifecycle() :101
static void Lifecycle__cctor__fn(uType* __type)
{
    ::g::Uno::Platform2::Application::add_Started(uDelegate::New(::TYPES[4/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnStarted_fn));
    ::g::Uno::Platform2::Application::add_EnteringForeground(uDelegate::New(::TYPES[4/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringForeground_fn));
    ::g::Uno::Platform2::Application::add_EnteringInteractive(uDelegate::New(::TYPES[4/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringInteractive_fn));
    ::g::Uno::Platform2::Application::add_ExitedInteractive(uDelegate::New(::TYPES[4/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnExitedInteractive_fn));
    ::g::Uno::Platform2::Application::add_EnteringBackground(uDelegate::New(::TYPES[4/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringBackground_fn));
    ::g::Uno::Platform2::Application::add_Terminating(uDelegate::New(::TYPES[4/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnTerminating_fn));
}

static void Lifecycle_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof();
    ::TYPES[5] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&::g::Fuse::Platform::Lifecycle::EnteringBackground1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&::g::Fuse::Platform::Lifecycle::EnteringForeground1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&::g::Fuse::Platform::Lifecycle::EnteringInteractive1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&::g::Fuse::Platform::Lifecycle::ExitedInteractive1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&::g::Fuse::Platform::Lifecycle::Started1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&::g::Fuse::Platform::Lifecycle::Terminating1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(13,
        new uFunction("add_EnteringBackground", NULL, (void*)Lifecycle__add_EnteringBackground_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("remove_EnteringBackground", NULL, (void*)Lifecycle__remove_EnteringBackground_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("add_EnteringForeground", NULL, (void*)Lifecycle__add_EnteringForeground_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("remove_EnteringForeground", NULL, (void*)Lifecycle__remove_EnteringForeground_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("add_EnteringInteractive", NULL, (void*)Lifecycle__add_EnteringInteractive_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("remove_EnteringInteractive", NULL, (void*)Lifecycle__remove_EnteringInteractive_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("add_ExitedInteractive", NULL, (void*)Lifecycle__add_ExitedInteractive_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("remove_ExitedInteractive", NULL, (void*)Lifecycle__remove_ExitedInteractive_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("add_Started", NULL, (void*)Lifecycle__add_Started_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("remove_Started", NULL, (void*)Lifecycle__remove_Started_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("get_State", NULL, (void*)Lifecycle__get_State_fn, 0, true, ::g::Fuse::Platform::ApplicationState_typeof(), 0),
        new uFunction("add_Terminating", NULL, (void*)Lifecycle__add_Terminating_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]),
        new uFunction("remove_Terminating", NULL, (void*)Lifecycle__remove_Terminating_fn, 0, true, uVoid_typeof(), 1, ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]));
}

uClassType* Lifecycle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.Lifecycle", options);
    type->fp_build_ = Lifecycle_build;
    type->fp_cctor_ = Lifecycle__cctor__fn;
    return type;
}

// public static generated void add_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) :98
void Lifecycle__add_EnteringBackground_fn(uDelegate* value)
{
    Lifecycle::add_EnteringBackground(value);
}

// public static generated void remove_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) :98
void Lifecycle__remove_EnteringBackground_fn(uDelegate* value)
{
    Lifecycle::remove_EnteringBackground(value);
}

// public static generated void add_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) :95
void Lifecycle__add_EnteringForeground_fn(uDelegate* value)
{
    Lifecycle::add_EnteringForeground(value);
}

// public static generated void remove_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) :95
void Lifecycle__remove_EnteringForeground_fn(uDelegate* value)
{
    Lifecycle::remove_EnteringForeground(value);
}

// public static generated void add_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :96
void Lifecycle__add_EnteringInteractive_fn(uDelegate* value)
{
    Lifecycle::add_EnteringInteractive(value);
}

// public static generated void remove_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :96
void Lifecycle__remove_EnteringInteractive_fn(uDelegate* value)
{
    Lifecycle::remove_EnteringInteractive(value);
}

// public static generated void add_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :97
void Lifecycle__add_ExitedInteractive_fn(uDelegate* value)
{
    Lifecycle::add_ExitedInteractive(value);
}

// public static generated void remove_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :97
void Lifecycle__remove_ExitedInteractive_fn(uDelegate* value)
{
    Lifecycle::remove_ExitedInteractive(value);
}

// private static void OnEnteringBackground(Uno.Platform2.ApplicationState newState) :139
void Lifecycle__OnEnteringBackground_fn(int* newState)
{
    Lifecycle::OnEnteringBackground(*newState);
}

// private static void OnEnteringForeground(Uno.Platform2.ApplicationState newState) :118
void Lifecycle__OnEnteringForeground_fn(int* newState)
{
    Lifecycle::OnEnteringForeground(*newState);
}

// private static void OnEnteringInteractive(Uno.Platform2.ApplicationState newState) :125
void Lifecycle__OnEnteringInteractive_fn(int* newState)
{
    Lifecycle::OnEnteringInteractive(*newState);
}

// private static void OnExitedInteractive(Uno.Platform2.ApplicationState newState) :132
void Lifecycle__OnExitedInteractive_fn(int* newState)
{
    Lifecycle::OnExitedInteractive(*newState);
}

// private static void OnStarted(Uno.Platform2.ApplicationState newState) :111
void Lifecycle__OnStarted_fn(int* newState)
{
    Lifecycle::OnStarted(*newState);
}

// private static void OnTerminating(Uno.Platform2.ApplicationState newState) :146
void Lifecycle__OnTerminating_fn(int* newState)
{
    Lifecycle::OnTerminating(*newState);
}

// public static generated void add_Started(Uno.Action<Fuse.Platform.ApplicationState> value) :94
void Lifecycle__add_Started_fn(uDelegate* value)
{
    Lifecycle::add_Started(value);
}

// public static generated void remove_Started(Uno.Action<Fuse.Platform.ApplicationState> value) :94
void Lifecycle__remove_Started_fn(uDelegate* value)
{
    Lifecycle::remove_Started(value);
}

// public static Fuse.Platform.ApplicationState get_State() :92
void Lifecycle__get_State_fn(int* __retval)
{
    *__retval = Lifecycle::State();
}

// public static generated void add_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) :99
void Lifecycle__add_Terminating_fn(uDelegate* value)
{
    Lifecycle::add_Terminating(value);
}

// public static generated void remove_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) :99
void Lifecycle__remove_Terminating_fn(uDelegate* value)
{
    Lifecycle::remove_Terminating(value);
}

uSStrong<uDelegate*> Lifecycle::EnteringBackground1_;
uSStrong<uDelegate*> Lifecycle::EnteringForeground1_;
uSStrong<uDelegate*> Lifecycle::EnteringInteractive1_;
uSStrong<uDelegate*> Lifecycle::ExitedInteractive1_;
uSStrong<uDelegate*> Lifecycle::Started1_;
uSStrong<uDelegate*> Lifecycle::Terminating1_;

// private static void OnEnteringBackground(Uno.Platform2.ApplicationState newState) [static] :139
void Lifecycle::OnEnteringBackground(int newState)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "OnEnteringBackground(Uno.Platform2.ApplicationState)");
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::EnteringBackground1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnEnteringForeground(Uno.Platform2.ApplicationState newState) [static] :118
void Lifecycle::OnEnteringForeground(int newState)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "OnEnteringForeground(Uno.Platform2.ApplicationState)");
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::EnteringForeground1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnEnteringInteractive(Uno.Platform2.ApplicationState newState) [static] :125
void Lifecycle::OnEnteringInteractive(int newState)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "OnEnteringInteractive(Uno.Platform2.ApplicationState)");
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::EnteringInteractive1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnExitedInteractive(Uno.Platform2.ApplicationState newState) [static] :132
void Lifecycle::OnExitedInteractive(int newState)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "OnExitedInteractive(Uno.Platform2.ApplicationState)");
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::ExitedInteractive1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnStarted(Uno.Platform2.ApplicationState newState) [static] :111
void Lifecycle::OnStarted(int newState)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "OnStarted(Uno.Platform2.ApplicationState)");
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::Started1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnTerminating(Uno.Platform2.ApplicationState newState) [static] :146
void Lifecycle::OnTerminating(int newState)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "OnTerminating(Uno.Platform2.ApplicationState)");
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::Terminating1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// public static Fuse.Platform.ApplicationState get_State() [static] :92
int Lifecycle::State()
{
    Lifecycle_typeof()->Init();
    return ::g::Uno::Platform2::Application::State();
}

// public static generated void add_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :98
void Lifecycle::add_EnteringBackground(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "add_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringBackground1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::EnteringBackground1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :98
void Lifecycle::remove_EnteringBackground(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "remove_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringBackground1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::EnteringBackground1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :95
void Lifecycle::add_EnteringForeground(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "add_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringForeground1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::EnteringForeground1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :95
void Lifecycle::remove_EnteringForeground(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "remove_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringForeground1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::EnteringForeground1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :96
void Lifecycle::add_EnteringInteractive(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "add_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::EnteringInteractive1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :96
void Lifecycle::remove_EnteringInteractive(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "remove_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::EnteringInteractive1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :97
void Lifecycle::add_ExitedInteractive(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "add_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::ExitedInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::ExitedInteractive1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :97
void Lifecycle::remove_ExitedInteractive(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "remove_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::ExitedInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::ExitedInteractive1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_Started(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :94
void Lifecycle::add_Started(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "add_Started(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::Started1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::Started1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_Started(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :94
void Lifecycle::remove_Started(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "remove_Started(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::Started1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::Started1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :99
void Lifecycle::add_Terminating(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "add_Terminating(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::Terminating1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::Terminating1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :99
void Lifecycle::remove_Terminating(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.Lifecycle", "remove_Terminating(Uno.Action<Fuse.Platform.ApplicationState>)");
    Lifecycle_typeof()->Init();
    Lifecycle::Terminating1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::Terminating1(), value), ::TYPES[5/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}
// }

}}} // ::g::Fuse::Platform
