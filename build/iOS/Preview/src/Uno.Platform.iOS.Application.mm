// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.iOS.Application.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform2.ApplicationState.h>
#include <Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <Uno.String.h>
static uString* STRINGS[1];
static uType* TYPES[4];

namespace g{
namespace Uno{
namespace Platform{
namespace iOS{

// public static extern class Application :205
// {
// static Application() :205
static void Application__cctor__fn(uType* __type)
{
    Application::DelayedNotifications_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<string>*/]));
    Application::DelayedReason_ = ::STRINGS[0/*""*/];
    Application::DelayedRegToken_ = ::STRINGS[0/*""*/];
    Application::DelayedLocalNotifications_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<string>*/]));
}

static void Application_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.List<string>*/], (uintptr_t)&::g::Uno::Platform::iOS::Application::DelayedLocalNotifications_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.Collections.List<string>*/], (uintptr_t)&::g::Uno::Platform::iOS::Application::DelayedNotifications_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Uno::Platform::iOS::Application::DelayedReason_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Uno::Platform::iOS::Application::DelayedRegToken_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.EventHandler<string>*/], (uintptr_t)&::g::Uno::Platform::iOS::Application::NotificationRegistrationFailed1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.EventHandler<string>*/], (uintptr_t)&::g::Uno::Platform::iOS::Application::NotificationRegistrationSucceeded1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.EventHandler<string>*/], (uintptr_t)&::g::Uno::Platform::iOS::Application::ReceivedLocalNotification1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.EventHandler<string>*/], (uintptr_t)&::g::Uno::Platform::iOS::Application::ReceivedNotification1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(8,
        new uFunction("add_NotificationRegistrationFailed", NULL, (void*)Application__add_NotificationRegistrationFailed_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler<string>*/]),
        new uFunction("remove_NotificationRegistrationFailed", NULL, (void*)Application__remove_NotificationRegistrationFailed_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler<string>*/]),
        new uFunction("add_NotificationRegistrationSucceeded", NULL, (void*)Application__add_NotificationRegistrationSucceeded_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler<string>*/]),
        new uFunction("remove_NotificationRegistrationSucceeded", NULL, (void*)Application__remove_NotificationRegistrationSucceeded_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler<string>*/]),
        new uFunction("add_ReceivedLocalNotification", NULL, (void*)Application__add_ReceivedLocalNotification_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler<string>*/]),
        new uFunction("remove_ReceivedLocalNotification", NULL, (void*)Application__remove_ReceivedLocalNotification_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler<string>*/]),
        new uFunction("add_ReceivedNotification", NULL, (void*)Application__add_ReceivedNotification_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler<string>*/]),
        new uFunction("remove_ReceivedNotification", NULL, (void*)Application__remove_ReceivedNotification_fn, 0, true, uVoid_typeof(), 1, ::TYPES[3/*Uno.EventHandler<string>*/]));
}

uClassType* Application_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Platform.iOS.Application", options);
    type->fp_build_ = Application_build;
    type->fp_cctor_ = Application__cctor__fn;
    return type;
}

// private static void DispatchDelayedLocalNotifications(Uno.Platform2.ApplicationState state) :332
void Application__DispatchDelayedLocalNotifications_fn(int* state)
{
    Application::DispatchDelayedLocalNotifications(*state);
}

// private static void DispatchDelayedNotifications(Uno.Platform2.ApplicationState state) :252
void Application__DispatchDelayedNotifications_fn(int* state)
{
    Application::DispatchDelayedNotifications(*state);
}

// private static void DispatchDelayedReason(Uno.Platform2.ApplicationState state) :279
void Application__DispatchDelayedReason_fn(int* state)
{
    Application::DispatchDelayedReason(*state);
}

// private static void DispatchDelayedRegToken(Uno.Platform2.ApplicationState state) :305
void Application__DispatchDelayedRegToken_fn(int* state)
{
    Application::DispatchDelayedRegToken(*state);
}

// public static generated void add_NotificationRegistrationFailed(Uno.EventHandler<string> value) :262
void Application__add_NotificationRegistrationFailed_fn(uDelegate* value)
{
    Application::add_NotificationRegistrationFailed(value);
}

// public static generated void remove_NotificationRegistrationFailed(Uno.EventHandler<string> value) :262
void Application__remove_NotificationRegistrationFailed_fn(uDelegate* value)
{
    Application::remove_NotificationRegistrationFailed(value);
}

// public static generated void add_NotificationRegistrationSucceeded(Uno.EventHandler<string> value) :288
void Application__add_NotificationRegistrationSucceeded_fn(uDelegate* value)
{
    Application::add_NotificationRegistrationSucceeded(value);
}

// public static generated void remove_NotificationRegistrationSucceeded(Uno.EventHandler<string> value) :288
void Application__remove_NotificationRegistrationSucceeded_fn(uDelegate* value)
{
    Application::remove_NotificationRegistrationSucceeded(value);
}

// internal static void OnNotificationRegistrationFailed(string reason) :264
void Application__OnNotificationRegistrationFailed_fn(uString* reason)
{
    Application::OnNotificationRegistrationFailed(reason);
}

// internal static void OnNotificationRegistrationSucceeded(string regID) :290
void Application__OnNotificationRegistrationSucceeded_fn(uString* regID)
{
    Application::OnNotificationRegistrationSucceeded(regID);
}

// internal static void OnReceivedLocalNotification(string notification) :317
void Application__OnReceivedLocalNotification_fn(uString* notification)
{
    Application::OnReceivedLocalNotification(notification);
}

// internal static void OnReceivedNotification(string notification) :237
void Application__OnReceivedNotification_fn(uString* notification)
{
    Application::OnReceivedNotification(notification);
}

// public static generated void add_ReceivedLocalNotification(Uno.EventHandler<string> value) :314
void Application__add_ReceivedLocalNotification_fn(uDelegate* value)
{
    Application::add_ReceivedLocalNotification(value);
}

// public static generated void remove_ReceivedLocalNotification(Uno.EventHandler<string> value) :314
void Application__remove_ReceivedLocalNotification_fn(uDelegate* value)
{
    Application::remove_ReceivedLocalNotification(value);
}

// public static generated void add_ReceivedNotification(Uno.EventHandler<string> value) :234
void Application__add_ReceivedNotification_fn(uDelegate* value)
{
    Application::add_ReceivedNotification(value);
}

// public static generated void remove_ReceivedNotification(Uno.EventHandler<string> value) :234
void Application__remove_ReceivedNotification_fn(uDelegate* value)
{
    Application::remove_ReceivedNotification(value);
}

uSStrong< ::g::Uno::Collections::List*> Application::DelayedLocalNotifications_;
uSStrong< ::g::Uno::Collections::List*> Application::DelayedNotifications_;
uSStrong<uString*> Application::DelayedReason_;
uSStrong<uString*> Application::DelayedRegToken_;
uSStrong<uDelegate*> Application::NotificationRegistrationFailed1_;
uSStrong<uDelegate*> Application::NotificationRegistrationSucceeded1_;
uSStrong<uDelegate*> Application::ReceivedLocalNotification1_;
uSStrong<uDelegate*> Application::ReceivedNotification1_;

// private static void DispatchDelayedLocalNotifications(Uno.Platform2.ApplicationState state) [static] :332
void Application::DispatchDelayedLocalNotifications(int state)
{
    uStackFrame __("Uno.Platform.iOS.Application", "DispatchDelayedLocalNotifications(Uno.Platform2.ApplicationState)");
    Application_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret3;
    uDelegate* handler = Application::ReceivedLocalNotification1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))

        for (::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(Application::DelayedLocalNotifications()), &ret3), ret3); enum2.MoveNext(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]); )
        {
            uString* n = enum2.Current(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]);
            uPtr(handler)->Invoke(2, NULL, n);
        }

    uPtr(Application::DelayedLocalNotifications())->Clear();
    ::g::Uno::Platform2::Application::remove_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Application__DispatchDelayedLocalNotifications_fn));
}

// private static void DispatchDelayedNotifications(Uno.Platform2.ApplicationState state) [static] :252
void Application::DispatchDelayedNotifications(int state)
{
    uStackFrame __("Uno.Platform.iOS.Application", "DispatchDelayedNotifications(Uno.Platform2.ApplicationState)");
    Application_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret4;
    uDelegate* handler = Application::ReceivedNotification1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))

        for (::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(Application::DelayedNotifications()), &ret4), ret4); enum1.MoveNext(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]); )
        {
            uString* n = enum1.Current(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]);
            uPtr(handler)->Invoke(2, NULL, n);
        }

    uPtr(Application::DelayedNotifications())->Clear();
    ::g::Uno::Platform2::Application::remove_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Application__DispatchDelayedNotifications_fn));
}

// private static void DispatchDelayedReason(Uno.Platform2.ApplicationState state) [static] :279
void Application::DispatchDelayedReason(int state)
{
    uStackFrame __("Uno.Platform.iOS.Application", "DispatchDelayedReason(Uno.Platform2.ApplicationState)");
    Application_typeof()->Init();
    uDelegate* handler = Application::NotificationRegistrationFailed1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (uString*)Application::DelayedReason());

    Application::DelayedReason() = ::STRINGS[0/*""*/];
    ::g::Uno::Platform2::Application::remove_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Application__DispatchDelayedReason_fn));
}

// private static void DispatchDelayedRegToken(Uno.Platform2.ApplicationState state) [static] :305
void Application::DispatchDelayedRegToken(int state)
{
    uStackFrame __("Uno.Platform.iOS.Application", "DispatchDelayedRegToken(Uno.Platform2.ApplicationState)");
    Application_typeof()->Init();
    uDelegate* handler = Application::NotificationRegistrationSucceeded1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (uString*)Application::DelayedRegToken());

    Application::DelayedRegToken() = ::STRINGS[0/*""*/];
    ::g::Uno::Platform2::Application::remove_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Application__DispatchDelayedRegToken_fn));
}

// internal static void OnNotificationRegistrationFailed(string reason) [static] :264
void Application::OnNotificationRegistrationFailed(uString* reason)
{
    uStackFrame __("Uno.Platform.iOS.Application", "OnNotificationRegistrationFailed(string)");
    Application_typeof()->Init();

    if ((::g::Uno::Platform2::Application::State() == 2) || (::g::Uno::Platform2::Application::State() == 3))
    {
        uDelegate* handler = Application::NotificationRegistrationFailed1();

        if (::g::Uno::Delegate::op_Inequality(handler, NULL))
            uPtr(handler)->Invoke(2, NULL, reason);
    }
    else
    {
        Application::DelayedReason() = reason;
        ::g::Uno::Platform2::Application::add_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Application__DispatchDelayedReason_fn));
    }
}

// internal static void OnNotificationRegistrationSucceeded(string regID) [static] :290
void Application::OnNotificationRegistrationSucceeded(uString* regID)
{
    uStackFrame __("Uno.Platform.iOS.Application", "OnNotificationRegistrationSucceeded(string)");
    Application_typeof()->Init();

    if ((::g::Uno::Platform2::Application::State() == 2) || (::g::Uno::Platform2::Application::State() == 3))
    {
        uDelegate* handler = Application::NotificationRegistrationSucceeded1();

        if (::g::Uno::Delegate::op_Inequality(handler, NULL))
            uPtr(handler)->Invoke(2, NULL, regID);
    }
    else
    {
        Application::DelayedRegToken() = regID;
        ::g::Uno::Platform2::Application::add_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Application__DispatchDelayedRegToken_fn));
    }
}

// internal static void OnReceivedLocalNotification(string notification) [static] :317
void Application::OnReceivedLocalNotification(uString* notification)
{
    uStackFrame __("Uno.Platform.iOS.Application", "OnReceivedLocalNotification(string)");
    Application_typeof()->Init();

    if ((::g::Uno::Platform2::Application::State() == 2) || (::g::Uno::Platform2::Application::State() == 3))
    {
        uDelegate* handler = Application::ReceivedLocalNotification1();

        if (::g::Uno::Delegate::op_Inequality(handler, NULL))
            uPtr(handler)->Invoke(2, NULL, notification);
    }
    else
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(Application::DelayedLocalNotifications()), notification);
        ::g::Uno::Platform2::Application::add_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Application__DispatchDelayedLocalNotifications_fn));
    }
}

// internal static void OnReceivedNotification(string notification) [static] :237
void Application::OnReceivedNotification(uString* notification)
{
    uStackFrame __("Uno.Platform.iOS.Application", "OnReceivedNotification(string)");
    Application_typeof()->Init();

    if ((::g::Uno::Platform2::Application::State() == 2) || (::g::Uno::Platform2::Application::State() == 3))
    {
        uDelegate* handler = Application::ReceivedNotification1();

        if (::g::Uno::Delegate::op_Inequality(handler, NULL))
            uPtr(handler)->Invoke(2, NULL, notification);
    }
    else
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(Application::DelayedNotifications()), notification);
        ::g::Uno::Platform2::Application::add_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)Application__DispatchDelayedNotifications_fn));
    }
}

// public static generated void add_NotificationRegistrationFailed(Uno.EventHandler<string> value) [static] :262
void Application::add_NotificationRegistrationFailed(uDelegate* value)
{
    uStackFrame __("Uno.Platform.iOS.Application", "add_NotificationRegistrationFailed(Uno.EventHandler<string>)");
    Application_typeof()->Init();
    Application::NotificationRegistrationFailed1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::NotificationRegistrationFailed1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// public static generated void remove_NotificationRegistrationFailed(Uno.EventHandler<string> value) [static] :262
void Application::remove_NotificationRegistrationFailed(uDelegate* value)
{
    uStackFrame __("Uno.Platform.iOS.Application", "remove_NotificationRegistrationFailed(Uno.EventHandler<string>)");
    Application_typeof()->Init();
    Application::NotificationRegistrationFailed1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::NotificationRegistrationFailed1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// public static generated void add_NotificationRegistrationSucceeded(Uno.EventHandler<string> value) [static] :288
void Application::add_NotificationRegistrationSucceeded(uDelegate* value)
{
    uStackFrame __("Uno.Platform.iOS.Application", "add_NotificationRegistrationSucceeded(Uno.EventHandler<string>)");
    Application_typeof()->Init();
    Application::NotificationRegistrationSucceeded1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::NotificationRegistrationSucceeded1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// public static generated void remove_NotificationRegistrationSucceeded(Uno.EventHandler<string> value) [static] :288
void Application::remove_NotificationRegistrationSucceeded(uDelegate* value)
{
    uStackFrame __("Uno.Platform.iOS.Application", "remove_NotificationRegistrationSucceeded(Uno.EventHandler<string>)");
    Application_typeof()->Init();
    Application::NotificationRegistrationSucceeded1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::NotificationRegistrationSucceeded1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// public static generated void add_ReceivedLocalNotification(Uno.EventHandler<string> value) [static] :314
void Application::add_ReceivedLocalNotification(uDelegate* value)
{
    uStackFrame __("Uno.Platform.iOS.Application", "add_ReceivedLocalNotification(Uno.EventHandler<string>)");
    Application_typeof()->Init();
    Application::ReceivedLocalNotification1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::ReceivedLocalNotification1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// public static generated void remove_ReceivedLocalNotification(Uno.EventHandler<string> value) [static] :314
void Application::remove_ReceivedLocalNotification(uDelegate* value)
{
    uStackFrame __("Uno.Platform.iOS.Application", "remove_ReceivedLocalNotification(Uno.EventHandler<string>)");
    Application_typeof()->Init();
    Application::ReceivedLocalNotification1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::ReceivedLocalNotification1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// public static generated void add_ReceivedNotification(Uno.EventHandler<string> value) [static] :234
void Application::add_ReceivedNotification(uDelegate* value)
{
    uStackFrame __("Uno.Platform.iOS.Application", "add_ReceivedNotification(Uno.EventHandler<string>)");
    Application_typeof()->Init();
    Application::ReceivedNotification1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::ReceivedNotification1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// public static generated void remove_ReceivedNotification(Uno.EventHandler<string> value) [static] :234
void Application::remove_ReceivedNotification(uDelegate* value)
{
    uStackFrame __("Uno.Platform.iOS.Application", "remove_ReceivedNotification(Uno.EventHandler<string>)");
    Application_typeof()->Init();
    Application::ReceivedNotification1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::ReceivedNotification1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}
// }

}}}} // ::g::Uno::Platform::iOS
