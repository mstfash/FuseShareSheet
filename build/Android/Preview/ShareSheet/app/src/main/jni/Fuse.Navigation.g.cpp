// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.DegreeSpan.h>
#include <Fuse.Gestures.Edge.h>
#include <Fuse.Gestures.Internal.EdgeSwiper.h>
#include <Fuse.Gestures.SwipeGestureHelper.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Input.KeyEventArgs.h>
#include <Fuse.Input.KeyPressedArgs.h>
#include <Fuse.Input.KeyPressedHandler.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.Motion.MotionConfig.h>
#include <Fuse.Motion.NavigationMotion.h>
#include <Fuse.Motion.Simulation.BoundedRegion2D.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.PointerVelocity-1.h>
#include <Fuse.Motion.Simulation.SampleFlags.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Fuse.Navigation.Activated.h>
#include <Fuse.Navigation.ActivatedHandler.h>
#include <Fuse.Navigation.ActivatingAnimation.h>
#include <Fuse.Navigation.ActivePageChangedHandler.h>
#include <Fuse.Navigation.AllowedNavigationDirections.h>
#include <Fuse.Navigation.BackButtonAction.h>
#include <Fuse.Navigation.BackForwardNavigationTriggerAction.h>
#include <Fuse.Navigation.Deactivated.h>
#include <Fuse.Navigation.DeactivatingAnimation.h>
#include <Fuse.Navigation.DirectNavigation.h>
#include <Fuse.Navigation.EdgeNavigation.h>
#include <Fuse.Navigation.EndSeekArgs.h>
#include <Fuse.Navigation.EnterExitAnimation.h>
#include <Fuse.Navigation.EnteringAnimation.h>
#include <Fuse.Navigation.ExitingAnimation.h>
#include <Fuse.Navigation.ExplicitNavigation.h>
#include <Fuse.Navigation.GoBack.h>
#include <Fuse.Navigation.GoForward.h>
#include <Fuse.Navigation.HierarchicalNavigation.h>
#include <Fuse.Navigation.HistoryChangedHandler.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.IPagePropertyListener.h>
#include <Fuse.Navigation.IPageResourceBinding.h>
#include <Fuse.Navigation.IRouterOutlet.h>
#include <Fuse.Navigation.ISeekableNavigation.h>
#include <Fuse.Navigation.LinearNavigation.h>
#include <Fuse.Navigation.ModifyRouteHow.h>
#include <Fuse.Navigation.NavigatedArgs.h>
#include <Fuse.Navigation.NavigatedHandler.h>
#include <Fuse.Navigation.NavigateTo.h>
#include <Fuse.Navigation.NavigateToggle.h>
#include <Fuse.Navigation.Navigation.h>
#include <Fuse.Navigation.NavigationAnimation.h>
#include <Fuse.Navigation.NavigationArgs.h>
#include <Fuse.Navigation.NavigationDirection.h>
#include <Fuse.Navigation.NavigationEdge.h>
#include <Fuse.Navigation.NavigationGotoMode.h>
#include <Fuse.Navigation.NavigationHandler.h>
#include <Fuse.Navigation.NavigationMode.h>
#include <Fuse.Navigation.NavigationPageCountHandler.h>
#include <Fuse.Navigation.NavigationPageProgressHandler.h>
#include <Fuse.Navigation.NavigationPageProperty.h>
#include <Fuse.Navigation.NavigationPageProxy.h>
#include <Fuse.Navigation.NavigationPageState.h>
#include <Fuse.Navigation.NavigationState.h>
#include <Fuse.Navigation.NavigationStateArgs.h>
#include <Fuse.Navigation.NavigationStateHandler.h>
#include <Fuse.Navigation.NavigationTrigger.h>
#include <Fuse.Navigation.NavigationTriggerAction.h>
#include <Fuse.Navigation.NavTriggerUtil.h>
#include <Fuse.Navigation.OutletType.h>
#include <Fuse.Navigation.PageResourceBinding-1.h>
#include <Fuse.Navigation.Route.h>
#include <Fuse.Navigation.Router.GetRouteCallback.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.RouterModify.h>
#include <Fuse.Navigation.RoutingOperation.h>
#include <Fuse.Navigation.RoutingResult.h>
#include <Fuse.Navigation.SnapTo.h>
#include <Fuse.Navigation.StructuredNavigation.h>
#include <Fuse.Navigation.StructuredNavigation.NavigationStructure.h>
#include <Fuse.Navigation.SwipeDirection.h>
#include <Fuse.Navigation.SwipeNavigate.h>
#include <Fuse.Navigation.UpdateSeekArgs.h>
#include <Fuse.Navigation.VisualNavigation.h>
#include <Fuse.Navigation.VisualNavigation.PageData.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Navigation.WhileCanGoBack.h>
#include <Fuse.Navigation.WhileCanGoForward.h>
#include <Fuse.Navigation.WhileHistoryTrigger.h>
#include <Fuse.Navigation.WhileInactive.h>
#include <Fuse.Navigation.WhileInEnterState.h>
#include <Fuse.Navigation.WhileInExitState.h>
#include <Fuse.Navigation.WhileNavigating.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Node.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IArray.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Scripting.Json.h>
#include <Fuse.Scripting.Marshal.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod-1.h>
#include <Fuse.Time.h>
#include <Fuse.Triggers.PulseTrigger-1.h>
#include <Fuse.Triggers.PulseTrigger-1.PulseHandler.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Uno.Action.h>
#include <Uno.Action-2.h>
#include <Uno.Action-3.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.Key.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[98];
static uType* TYPES[68];

namespace g{
namespace Fuse{
namespace Navigation{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class Activated :64
// {
static void Activated_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Triggers::PulseTrigger_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL)->MakeMethod(0/*AddHandlerImpl<Fuse.Navigation.Activated>*/, type, NULL);
    ::TYPES[1] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[2] = ::g::Fuse::Navigation::ActivePageChangedHandler_typeof();
    ::TYPES[3] = ::g::Fuse::Triggers::PulseTrigger_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL)->MakeMethod(1/*RemoveHandlerImpl<Fuse.Navigation.Activated>*/, type, NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface4));
    type->SetFields(30);
    type->Reflection.SetFunctions(3,
        new uFunction("AddHandler", NULL, (void*)Activated__AddHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Triggers::PulseTrigger__PulseHandler_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL)),
        new uFunction(".ctor", NULL, (void*)Activated__New2_fn, 0, true, type, 0),
        new uFunction("RemoveHandler", NULL, (void*)Activated__RemoveHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Triggers::PulseTrigger__PulseHandler_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL)));
}

::g::Fuse::Navigation::NavigationTrigger_type* Activated_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationTrigger_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Activated);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationTrigger_type);
    type = (::g::Fuse::Navigation::NavigationTrigger_type*)uClassType::New("Fuse.Navigation.Activated", options);
    type->fp_build_ = Activated_build;
    type->fp_ctor_ = (void*)Activated__New2_fn;
    type->fp_NavReady = (void(*)(::g::Fuse::Navigation::NavigationTrigger*))Activated__NavReady_fn;
    type->fp_NavUnready = (void(*)(::g::Fuse::Navigation::NavigationTrigger*))Activated__NavUnready_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Activated() :64
void Activated__ctor_6_fn(Activated* __this)
{
    __this->ctor_6();
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler handler) :68
void Activated__AddHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Activated::AddHandler(visual, handler);
}

// protected override sealed void NavReady() :79
void Activated__NavReady_fn(Activated* __this)
{
    uStackFrame __("Fuse.Navigation.Activated", "NavReady()");

    if (::g::Fuse::Navigation::INavigation::ActivePage(uInterface(uPtr(__this->NavContext()), ::TYPES[1/*Fuse.Navigation.INavigation*/])) == __this->PageContext())
        __this->Pulse();

    ::g::Fuse::Navigation::INavigation::add_ActivePageChanged(uInterface(uPtr(__this->NavContext()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[2/*Fuse.Navigation.ActivePageChangedHandler*/], (void*)Activated__OnActivePageChanged_fn, __this));
}

// protected override sealed void NavUnready() :88
void Activated__NavUnready_fn(Activated* __this)
{
    uStackFrame __("Fuse.Navigation.Activated", "NavUnready()");
    ::g::Fuse::Navigation::INavigation::remove_ActivePageChanged(uInterface(uPtr(__this->NavContext()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[2/*Fuse.Navigation.ActivePageChangedHandler*/], (void*)Activated__OnActivePageChanged_fn, __this));
}

// public generated Activated New() :64
void Activated__New2_fn(Activated** __retval)
{
    *__retval = Activated::New2();
}

// private void OnActivePageChanged(object s, Fuse.Visual active) :93
void Activated__OnActivePageChanged_fn(Activated* __this, uObject* s, ::g::Fuse::Visual* active)
{
    __this->OnActivePageChanged(s, active);
}

// public static void RemoveHandler(Fuse.Visual visual, Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler handler) :74
void Activated__RemoveHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Activated::RemoveHandler(visual, handler);
}

// public generated Activated() [instance] :64
void Activated::ctor_6()
{
    ctor_5();
}

// private void OnActivePageChanged(object s, Fuse.Visual active) [instance] :93
void Activated::OnActivePageChanged(uObject* s, ::g::Fuse::Visual* active)
{
    uStackFrame __("Fuse.Navigation.Activated", "OnActivePageChanged(object,Fuse.Visual)");

    if (active == PageContext())
        Pulse1(::g::Uno::EventArgs::New1());
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler handler) [static] :68
void Activated::AddHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Navigation.Activated", "AddHandler(Fuse.Visual,Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler)");
    ::g::Fuse::Triggers::PulseTrigger::AddHandlerImpl(::TYPES[0/*Fuse.Triggers.PulseTrigger<Uno.EventArgs>.AddHandlerImpl<Fuse.Navigation.Activated>*/], visual, handler);
}

// public generated Activated New() [static] :64
Activated* Activated::New2()
{
    Activated* obj1 = (Activated*)uNew(Activated_typeof());
    obj1->ctor_6();
    return obj1;
}

// public static void RemoveHandler(Fuse.Visual visual, Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler handler) [static] :74
void Activated::RemoveHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Navigation.Activated", "RemoveHandler(Fuse.Visual,Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler)");
    ::g::Fuse::Triggers::PulseTrigger::RemoveHandlerImpl(::TYPES[3/*Fuse.Triggers.PulseTrigger<Uno.EventArgs>.RemoveHandlerImpl<Fuse.Navigation.Activated>*/], visual, handler);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public delegate void ActivatedHandler(object sender, Uno.EventArgs args) :10
uDelegateType* ActivatedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.ActivatedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::EventArgs_typeof());
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class ActivatingAnimation :1404
// {
static void ActivatingAnimation_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4));
    type->SetFields(33);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ActivatingAnimation__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::NavigationAnimation_type* ActivatingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationAnimation_typeof();
    options.FieldCount = 33;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(ActivatingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.ActivatingAnimation", options);
    type->fp_build_ = ActivatingAnimation_build;
    type->fp_ctor_ = (void*)ActivatingAnimation__New2_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::NavigationAnimation*))ActivatingAnimation__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::NavigationAnimation*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))ActivatingAnimation__OnNavigationStateChanged_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated ActivatingAnimation() :1404
void ActivatingAnimation__ctor_5_fn(ActivatingAnimation* __this)
{
    __this->ctor_5();
}

// protected override sealed void ForceUpdate() :1406
void ActivatingAnimation__ForceUpdate_fn(ActivatingAnimation* __this)
{
    uStackFrame __("Fuse.Navigation.ActivatingAnimation", "ForceUpdate()");
    __this->Seek(__this->InvertProgress((double)::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress), 0);
}

// private double InvertProgress(double p) :1411
void ActivatingAnimation__InvertProgress_fn(ActivatingAnimation* __this, double* p, double* __retval)
{
    *__retval = __this->InvertProgress(*p);
}

// public generated ActivatingAnimation New() :1404
void ActivatingAnimation__New2_fn(ActivatingAnimation** __retval)
{
    *__retval = ActivatingAnimation::New2();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :1416
void ActivatingAnimation__OnNavigationStateChanged_fn(ActivatingAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    uStackFrame __("Fuse.Navigation.ActivatingAnimation", "OnNavigationStateChanged(object,Fuse.Navigation.NavigationArgs)");
    ::g::Fuse::Navigation::NavigationPageState ps = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), __this->PageContext());
    int d = (::g::Uno::Math::Abs1(ps.Progress) < ::g::Uno::Math::Abs1(ps.PreviousProgress)) ? 0 : 1;
    __this->GoProgress(__this->InvertProgress((double)(__this->Scale() * ps.Progress)), d, state);
}

// public generated ActivatingAnimation() [instance] :1404
void ActivatingAnimation::ctor_5()
{
    ctor_4();
}

// private double InvertProgress(double p) [instance] :1411
double ActivatingAnimation::InvertProgress(double p)
{
    return 1.0 - ::g::Uno::Math::Min(1.0, ::g::Uno::Math::Abs(p));
}

// public generated ActivatingAnimation New() [static] :1404
ActivatingAnimation* ActivatingAnimation::New2()
{
    ActivatingAnimation* obj1 = (ActivatingAnimation*)uNew(ActivatingAnimation_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public delegate void ActivePageChangedHandler(object sender, Fuse.Visual active) :638
uDelegateType* ActivePageChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.ActivePageChangedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Visual_typeof());
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public enum AllowedNavigationDirections :3659
uEnumType* AllowedNavigationDirections_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.AllowedNavigationDirections", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Forward", 1LL,
        "Backward", 2LL,
        "Both", 3LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public enum BackButtonAction :2417
uEnumType* BackButtonAction_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.BackButtonAction", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "GoBack", 0LL,
        "None", 1LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public abstract class BackForwardNavigationTriggerAction :4142
// {
static void BackForwardNavigationTriggerAction_build(uType* type)
{
    ::STRINGS[0] = uString::Const("No Navigation context was found");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    type->SetFields(8,
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::BackForwardNavigationTriggerAction, _NavigationContext), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_NavigationContext", NULL, (void*)BackForwardNavigationTriggerAction__get_NavigationContext_fn, 0, false, ::g::Fuse::Navigation::IBaseNavigation_typeof(), 0),
        new uFunction("set_NavigationContext", NULL, (void*)BackForwardNavigationTriggerAction__set_NavigationContext_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::IBaseNavigation_typeof()));
}

BackForwardNavigationTriggerAction_type* BackForwardNavigationTriggerAction_typeof()
{
    static uSStrong<BackForwardNavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(BackForwardNavigationTriggerAction);
    options.TypeSize = sizeof(BackForwardNavigationTriggerAction_type);
    type = (BackForwardNavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.BackForwardNavigationTriggerAction", options);
    type->fp_build_ = BackForwardNavigationTriggerAction_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))BackForwardNavigationTriggerAction__Perform_fn;
    return type;
}

// protected generated BackForwardNavigationTriggerAction() :4142
void BackForwardNavigationTriggerAction__ctor_2_fn(BackForwardNavigationTriggerAction* __this)
{
    __this->ctor_2();
}

// public generated Fuse.Navigation.IBaseNavigation get_NavigationContext() :4145
void BackForwardNavigationTriggerAction__get_NavigationContext_fn(BackForwardNavigationTriggerAction* __this, uObject** __retval)
{
    *__retval = __this->NavigationContext();
}

// public generated void set_NavigationContext(Fuse.Navigation.IBaseNavigation value) :4145
void BackForwardNavigationTriggerAction__set_NavigationContext_fn(BackForwardNavigationTriggerAction* __this, uObject* value)
{
    __this->NavigationContext(value);
}

// protected override sealed void Perform(Fuse.Node n) :4147
void BackForwardNavigationTriggerAction__Perform_fn(BackForwardNavigationTriggerAction* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.BackForwardNavigationTriggerAction", "Perform(Fuse.Node)");
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[4/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    uObject* ind1 = __this->NavigationContext();
    uObject* nav = (ind1 != NULL) ? ind1 : (uObject*)::g::Fuse::Navigation::Navigation::TryFindBaseNavigation(v);

    if (nav != NULL)
        __this->Perform1(nav, n);
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[0/*"No Navigati...*/], __this, ::STRINGS[1/*"/Users/most...*/], 4157, ::STRINGS[2/*"Perform"*/]);
}

// protected generated BackForwardNavigationTriggerAction() [instance] :4142
void BackForwardNavigationTriggerAction::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Navigation.IBaseNavigation get_NavigationContext() [instance] :4145
uObject* BackForwardNavigationTriggerAction::NavigationContext()
{
    return _NavigationContext;
}

// public generated void set_NavigationContext(Fuse.Navigation.IBaseNavigation value) [instance] :4145
void BackForwardNavigationTriggerAction::NavigationContext(uObject* value)
{
    _NavigationContext = value;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class Deactivated :126
// {
static void Deactivated_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Triggers::PulseTrigger_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL)->MakeMethod(0/*AddHandlerImpl<Fuse.Navigation.Deactivated>*/, type, NULL);
    ::TYPES[1] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[2] = ::g::Fuse::Navigation::ActivePageChangedHandler_typeof();
    ::TYPES[6] = ::g::Fuse::Triggers::PulseTrigger_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL)->MakeMethod(1/*RemoveHandlerImpl<Fuse.Navigation.Deactivated>*/, type, NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface4));
    type->SetFields(30,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::Deactivated, _isActive), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("AddHandler", NULL, (void*)Deactivated__AddHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Triggers::PulseTrigger__PulseHandler_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL)),
        new uFunction(".ctor", NULL, (void*)Deactivated__New2_fn, 0, true, type, 0),
        new uFunction("RemoveHandler", NULL, (void*)Deactivated__RemoveHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Triggers::PulseTrigger__PulseHandler_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL)));
}

::g::Fuse::Navigation::NavigationTrigger_type* Deactivated_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationTrigger_typeof();
    options.FieldCount = 31;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Deactivated);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationTrigger_type);
    type = (::g::Fuse::Navigation::NavigationTrigger_type*)uClassType::New("Fuse.Navigation.Deactivated", options);
    type->fp_build_ = Deactivated_build;
    type->fp_ctor_ = (void*)Deactivated__New2_fn;
    type->fp_NavReady = (void(*)(::g::Fuse::Navigation::NavigationTrigger*))Deactivated__NavReady_fn;
    type->fp_NavUnready = (void(*)(::g::Fuse::Navigation::NavigationTrigger*))Deactivated__NavUnready_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Deactivated() :126
void Deactivated__ctor_6_fn(Deactivated* __this)
{
    __this->ctor_6();
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler handler) :130
void Deactivated__AddHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Deactivated::AddHandler(visual, handler);
}

// protected override sealed void NavReady() :142
void Deactivated__NavReady_fn(Deactivated* __this)
{
    uStackFrame __("Fuse.Navigation.Deactivated", "NavReady()");
    __this->_isActive = (::g::Fuse::Navigation::INavigation::ActivePage(uInterface(uPtr(__this->NavContext()), ::TYPES[1/*Fuse.Navigation.INavigation*/])) == __this->PageContext());
    ::g::Fuse::Navigation::INavigation::add_ActivePageChanged(uInterface(uPtr(__this->NavContext()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[2/*Fuse.Navigation.ActivePageChangedHandler*/], (void*)Deactivated__OnActivePageChanged_fn, __this));
}

// protected override sealed void NavUnready() :148
void Deactivated__NavUnready_fn(Deactivated* __this)
{
    uStackFrame __("Fuse.Navigation.Deactivated", "NavUnready()");
    ::g::Fuse::Navigation::INavigation::remove_ActivePageChanged(uInterface(uPtr(__this->NavContext()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[2/*Fuse.Navigation.ActivePageChangedHandler*/], (void*)Deactivated__OnActivePageChanged_fn, __this));
}

// public generated Deactivated New() :126
void Deactivated__New2_fn(Deactivated** __retval)
{
    *__retval = Deactivated::New2();
}

// private void OnActivePageChanged(object s, Fuse.Visual active) :153
void Deactivated__OnActivePageChanged_fn(Deactivated* __this, uObject* s, ::g::Fuse::Visual* active)
{
    __this->OnActivePageChanged(s, active);
}

// public static void RemoveHandler(Fuse.Visual visual, Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler handler) :136
void Deactivated__RemoveHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Deactivated::RemoveHandler(visual, handler);
}

// public generated Deactivated() [instance] :126
void Deactivated::ctor_6()
{
    ctor_5();
}

// private void OnActivePageChanged(object s, Fuse.Visual active) [instance] :153
void Deactivated::OnActivePageChanged(uObject* s, ::g::Fuse::Visual* active)
{
    uStackFrame __("Fuse.Navigation.Deactivated", "OnActivePageChanged(object,Fuse.Visual)");
    bool _newActive = ::g::Fuse::Navigation::INavigation::ActivePage(uInterface(uPtr(NavContext()), ::TYPES[1/*Fuse.Navigation.INavigation*/])) == PageContext();

    if (_newActive == _isActive)
        return;

    _isActive = _newActive;

    if (!_isActive)
        Pulse1(::g::Uno::EventArgs::New1());
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler handler) [static] :130
void Deactivated::AddHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Navigation.Deactivated", "AddHandler(Fuse.Visual,Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler)");
    ::g::Fuse::Triggers::PulseTrigger::AddHandlerImpl(::TYPES[5/*Fuse.Triggers.PulseTrigger<Uno.EventArgs>.AddHandlerImpl<Fuse.Navigation.Deactivated>*/], visual, handler);
}

// public generated Deactivated New() [static] :126
Deactivated* Deactivated::New2()
{
    Deactivated* obj1 = (Deactivated*)uNew(Deactivated_typeof());
    obj1->ctor_6();
    return obj1;
}

// public static void RemoveHandler(Fuse.Visual visual, Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler handler) [static] :136
void Deactivated::RemoveHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Navigation.Deactivated", "RemoveHandler(Fuse.Visual,Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler)");
    ::g::Fuse::Triggers::PulseTrigger::RemoveHandlerImpl(::TYPES[6/*Fuse.Triggers.PulseTrigger<Uno.EventArgs>.RemoveHandlerImpl<Fuse.Navigation.Deactivated>*/], visual, handler);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class DeactivatingAnimation :1451
// {
static void DeactivatingAnimation_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4));
    type->SetFields(33);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DeactivatingAnimation__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::NavigationAnimation_type* DeactivatingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationAnimation_typeof();
    options.FieldCount = 33;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(DeactivatingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.DeactivatingAnimation", options);
    type->fp_build_ = DeactivatingAnimation_build;
    type->fp_ctor_ = (void*)DeactivatingAnimation__New2_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::NavigationAnimation*))DeactivatingAnimation__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::NavigationAnimation*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))DeactivatingAnimation__OnNavigationStateChanged_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated DeactivatingAnimation() :1451
void DeactivatingAnimation__ctor_5_fn(DeactivatingAnimation* __this)
{
    __this->ctor_5();
}

// protected override sealed void ForceUpdate() :1453
void DeactivatingAnimation__ForceUpdate_fn(DeactivatingAnimation* __this)
{
    uStackFrame __("Fuse.Navigation.DeactivatingAnimation", "ForceUpdate()");
    __this->Seek((double)::g::Uno::Math::Abs1(::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress), 0);
}

// public generated DeactivatingAnimation New() :1451
void DeactivatingAnimation__New2_fn(DeactivatingAnimation** __retval)
{
    *__retval = DeactivatingAnimation::New2();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :1458
void DeactivatingAnimation__OnNavigationStateChanged_fn(DeactivatingAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    uStackFrame __("Fuse.Navigation.DeactivatingAnimation", "OnNavigationStateChanged(object,Fuse.Navigation.NavigationArgs)");
    ::g::Fuse::Navigation::NavigationPageState ps = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), __this->PageContext());
    int d = (::g::Uno::Math::Abs1(ps.Progress) > ::g::Uno::Math::Abs1(ps.PreviousProgress)) ? 0 : 1;
    __this->GoProgress((double)(__this->Scale() * ::g::Uno::Math::Abs1(ps.Progress)), d, state);
}

// public generated DeactivatingAnimation() [instance] :1451
void DeactivatingAnimation::ctor_5()
{
    ctor_4();
}

// public generated DeactivatingAnimation New() [static] :1451
DeactivatingAnimation* DeactivatingAnimation::New2()
{
    DeactivatingAnimation* obj1 = (DeactivatingAnimation*)uNew(DeactivatingAnimation_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class DirectNavigation :184
// {
static void DirectNavigation_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Unexpected null page");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno");
    ::STRINGS[4] = uString::Const("SetProgressState");
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Navigation::VisualNavigation__PageData_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Navigation::VisualNavigation__PageData_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface3),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface4),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface6));
    type->SetFields(20,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::DirectNavigation, _active), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DirectNavigation__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::VisualNavigation_type* DirectNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::VisualNavigation_typeof();
    options.FieldCount = 21;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(DirectNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::VisualNavigation_type);
    type = (::g::Fuse::Navigation::VisualNavigation_type*)uClassType::New("Fuse.Navigation.DirectNavigation", options);
    type->fp_build_ = DirectNavigation_build;
    type->fp_ctor_ = (void*)DirectNavigation__New2_fn;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))DirectNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))DirectNavigation__set_Active_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int*))DirectNavigation__Goto_fn;
    type->fp_OnChildAddedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))DirectNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))DirectNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))DirectNavigation__OnRooted_fn;
    type->fp_get_PageProgress = (void(*)(::g::Fuse::Navigation::VisualNavigation*, double*))DirectNavigation__get_PageProgress_fn;
    type->interface4.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__GetPage_fn;
    type->interface4.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))::g::Fuse::Navigation::VisualNavigation__GetPageState_fn;
    type->interface4.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))DirectNavigation__Goto_fn;
    type->interface4.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface4.fp_get_PageCount = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_PageCount_fn;
    type->interface4.fp_get_PageProgress = (void(*)(uObject*, double*))DirectNavigation__get_PageProgress_fn;
    type->interface4.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface4.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageCountChanged_fn;
    type->interface4.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageCountChanged_fn;
    type->interface4.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface4.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface4.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface4.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface4.fp_add_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_ActivePageChanged_fn;
    type->interface4.fp_remove_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_ActivePageChanged_fn;
    type->interface5.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))DirectNavigation__OnChildAddedWhileRooted_fn;
    type->interface5.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))DirectNavigation__OnChildRemovedWhileRooted_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoBack_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoForward_fn;
    type->interface6.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface6.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated DirectNavigation() :184
void DirectNavigation__ctor_4_fn(DirectNavigation* __this)
{
    __this->ctor_4();
}

// public override sealed Fuse.Visual get_Active() :241
void DirectNavigation__get_Active_fn(DirectNavigation* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :242
void DirectNavigation__set_Active_fn(DirectNavigation* __this, ::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "set_Active(Fuse.Visual)");
    __this->TransitionTo(value, false);
}

// public override sealed void Goto(Fuse.Visual visual, Fuse.Navigation.NavigationGotoMode mode) :205
void DirectNavigation__Goto_fn(DirectNavigation* __this, ::g::Fuse::Visual* visual, int* mode)
{
    int mode_ = *mode;

    if ((mode_ == 1) || (mode_ == 0))
        __this->TransitionTo(visual, mode_ == 1);
}

// public generated DirectNavigation New() :184
void DirectNavigation__New2_fn(DirectNavigation** __retval)
{
    *__retval = DirectNavigation::New2();
}

// public override sealed void OnChildAddedWhileRooted(Fuse.Node child) :192
void DirectNavigation__OnChildAddedWhileRooted_fn(DirectNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "OnChildAddedWhileRooted(Fuse.Node)");
    ::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn(__this, child);
    __this->UpdateState(true);
}

// public override sealed void OnChildRemovedWhileRooted(Fuse.Node child) :198
void DirectNavigation__OnChildRemovedWhileRooted_fn(DirectNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "OnChildRemovedWhileRooted(Fuse.Node)");
    ::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn(__this, child);

    if (__this->_active == child)
        __this->Goto(NULL, 0);
}

// protected override sealed void OnRooted() :186
void DirectNavigation__OnRooted_fn(DirectNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "OnRooted()");
    ::g::Fuse::Navigation::VisualNavigation__OnRooted_fn(__this);
    __this->UpdateState(true);
}

// public override sealed double get_PageProgress() :263
void DirectNavigation__get_PageProgress_fn(DirectNavigation* __this, double* __retval)
{
    if (__this->_active == NULL)
        return *__retval = -1.0, void();

    return *__retval = 0.0, void();
}

// private void SetProgressState(Fuse.Visual elm, int progress) :248
void DirectNavigation__SetProgressState_fn(DirectNavigation* __this, ::g::Fuse::Visual* elm, int* progress)
{
    __this->SetProgressState(elm, *progress);
}

// private void TransitionTo(Fuse.Visual visual, bool bypass) :212
void DirectNavigation__TransitionTo_fn(DirectNavigation* __this, ::g::Fuse::Visual* visual, bool* bypass)
{
    __this->TransitionTo(visual, *bypass);
}

// private void UpdateState(bool bypass) :225
void DirectNavigation__UpdateState_fn(DirectNavigation* __this, bool* bypass)
{
    __this->UpdateState(*bypass);
}

// public generated DirectNavigation() [instance] :184
void DirectNavigation::ctor_4()
{
    ctor_3();
}

// private void SetProgressState(Fuse.Visual elm, int progress) [instance] :248
void DirectNavigation::SetProgressState(::g::Fuse::Visual* elm, int progress)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "SetProgressState(Fuse.Visual,int)");
    ::g::Fuse::Navigation::VisualNavigation__PageData* pd = GetPageData(elm);

    if (pd == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[3/*"Unexpected ...*/], elm, ::STRINGS[1/*"/Users/most...*/], 253, ::STRINGS[4/*"SetProgress...*/]);
        return;
    }

    uPtr(pd)->PreviousProgress = uPtr(pd)->Progress;
    pd->Progress = (float)progress;
}

// private void TransitionTo(Fuse.Visual visual, bool bypass) [instance] :212
void DirectNavigation::TransitionTo(::g::Fuse::Visual* visual, bool bypass)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "TransitionTo(Fuse.Visual,bool)");
    ::g::Fuse::Visual* oldActive = _active;
    _active = visual;
    UpdateState(bypass);

    if (oldActive != _active)
    {
        OnActiveChanged(_active);
        OnNavigated(_active);
    }
}

// private void UpdateState(bool bypass) [instance] :225
void DirectNavigation::UpdateState(bool bypass)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "UpdateState(bool)");
    ::g::Fuse::Navigation::VisualNavigation__PageData* ret2;

    for (int t = 0; t < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Pages()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Navigation.VisualNavigation.PageData>*/])); t++)
    {
        ::g::Fuse::Visual* c = uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Pages()), ::TYPES[8/*Uno.Collections.IList<Fuse.Navigation.VisualNavigation.PageData>*/]), uCRef<int>(t), &ret2), ret2))->Visual();
        bool active = _active == c;
        int newProgress = active ? 0 : -1;
        SetProgressState(c, newProgress);
    }

    OnPageProgressChanged1(bypass ? 1 : 0);
}

// public generated DirectNavigation New() [static] :184
DirectNavigation* DirectNavigation::New2()
{
    DirectNavigation* obj1 = (DirectNavigation*)uNew(DirectNavigation_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class EdgeNavigation :295
// {
// static EdgeNavigation() :295
static void EdgeNavigation__cctor_2_fn(uType* __type)
{
    EdgeNavigation::_edgeHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void EdgeNavigation_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Unexpected message");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno");
    ::STRINGS[6] = uString::Const("Element");
    ::STRINGS[7] = uString::Const("OnRooted");
    ::STRINGS[8] = uString::Const("EdgeNavigation must be rooted in an Element");
    ::TYPES[9] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Navigation::VisualNavigation__PageData_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Navigation::VisualNavigation__PageData_typeof(), NULL);
    ::TYPES[11] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[12] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Double_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof(), NULL);
    ::TYPES[15] = ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface3),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface4),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface6));
    type->SetFields(20,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::EdgeNavigation, _active), 0,
        ::TYPES[10/*Uno.Collections.List<Fuse.Visual>*/], offsetof(::g::Fuse::Navigation::EdgeNavigation, _mains), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::EdgeNavigation, _maxProgress), 0,
        ::TYPES[9/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/], offsetof(::g::Fuse::Navigation::EdgeNavigation, _swipers), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::EdgeNavigation::_edgeHandle_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("GetEdge", NULL, (void*)EdgeNavigation__GetEdge_fn, 0, true, ::g::Fuse::Navigation::NavigationEdge_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction(".ctor", NULL, (void*)EdgeNavigation__New2_fn, 0, true, type, 0),
        new uFunction("ResetEdge", NULL, (void*)EdgeNavigation__ResetEdge_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("SetEdge", NULL, (void*)EdgeNavigation__SetEdge_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Navigation::NavigationEdge_typeof()));
}

::g::Fuse::Navigation::VisualNavigation_type* EdgeNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::VisualNavigation_typeof();
    options.FieldCount = 25;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(EdgeNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::VisualNavigation_type);
    type = (::g::Fuse::Navigation::VisualNavigation_type*)uClassType::New("Fuse.Navigation.EdgeNavigation", options);
    type->fp_build_ = EdgeNavigation_build;
    type->fp_ctor_ = (void*)EdgeNavigation__New2_fn;
    type->fp_cctor_ = EdgeNavigation__cctor_2_fn;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))EdgeNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))EdgeNavigation__set_Active_fn;
    type->fp_get_CanGoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*, bool*))EdgeNavigation__get_CanGoBack_fn;
    type->fp_GetPageState = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))EdgeNavigation__GetPageState_fn;
    type->fp_GoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*))EdgeNavigation__GoBack_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int*))EdgeNavigation__Goto_fn;
    type->fp_OnChildAddedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))EdgeNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))EdgeNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))EdgeNavigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))EdgeNavigation__OnUnrooted_fn;
    type->fp_get_PageProgress = (void(*)(::g::Fuse::Navigation::VisualNavigation*, double*))EdgeNavigation__get_PageProgress_fn;
    type->fp_Toggle = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))EdgeNavigation__Toggle_fn;
    type->interface4.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__GetPage_fn;
    type->interface4.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))EdgeNavigation__GetPageState_fn;
    type->interface4.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))EdgeNavigation__Goto_fn;
    type->interface4.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))EdgeNavigation__Toggle_fn;
    type->interface4.fp_get_PageCount = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_PageCount_fn;
    type->interface4.fp_get_PageProgress = (void(*)(uObject*, double*))EdgeNavigation__get_PageProgress_fn;
    type->interface4.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface4.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageCountChanged_fn;
    type->interface4.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageCountChanged_fn;
    type->interface4.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface4.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface4.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface4.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface4.fp_add_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_ActivePageChanged_fn;
    type->interface4.fp_remove_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_ActivePageChanged_fn;
    type->interface5.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))EdgeNavigation__OnChildAddedWhileRooted_fn;
    type->interface5.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))EdgeNavigation__OnChildRemovedWhileRooted_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))EdgeNavigation__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))EdgeNavigation__get_CanGoBack_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoForward_fn;
    type->interface6.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface6.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated EdgeNavigation() :295
void EdgeNavigation__ctor_4_fn(EdgeNavigation* __this)
{
    __this->ctor_4();
}

// public override sealed Fuse.Visual get_Active() :348
void EdgeNavigation__get_Active_fn(EdgeNavigation* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :352
void EdgeNavigation__set_Active_fn(EdgeNavigation* __this, ::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "set_Active(Fuse.Visual)");
    __this->Goto(value, 0);
}

// public override sealed bool get_CanGoBack() :489
void EdgeNavigation__get_CanGoBack_fn(EdgeNavigation* __this, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "get_CanGoBack()");
    return *__retval = __this->IsAnyPanelActive(), void();
}

// private void CheckChildren() :403
void EdgeNavigation__CheckChildren_fn(EdgeNavigation* __this)
{
    __this->CheckChildren();
}

// private void ClearChildren() :392
void EdgeNavigation__ClearChildren_fn(EdgeNavigation* __this)
{
    __this->ClearChildren();
}

// public static Fuse.Navigation.NavigationEdge GetEdge(Fuse.Visual elm) :306
void EdgeNavigation__GetEdge_fn(::g::Fuse::Visual* elm, int* __retval)
{
    *__retval = EdgeNavigation::GetEdge(elm);
}

// public override sealed Fuse.Navigation.NavigationPageState GetPageState(Fuse.Visual page) :496
void EdgeNavigation__GetPageState_fn(EdgeNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "GetPageState(Fuse.Visual)");
    ::g::Fuse::Navigation::NavigationPageState collection8;
    ::g::Fuse::Navigation::NavigationPageState collection9;
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret13;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum7 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_swipers), &ret13), ret13); enum7.MoveNext(::TYPES[13/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum7.Current(::TYPES[13/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

        if (uPtr(sw.Value(::TYPES[14/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target() == page)
            return *__retval = (collection8 = uDefault< ::g::Fuse::Navigation::NavigationPageState>(), collection8.Progress = (1.0f - (float)uPtr(sw.Value(::TYPES[14/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress()), collection8.PreviousProgress = 0.0f, collection8), void();
    }

    collection9 = uDefault< ::g::Fuse::Navigation::NavigationPageState>();
    collection9.Progress = (float)-__this->_maxProgress;
    collection9.PreviousProgress = 0.0f;
    return *__retval = collection9, void();
}

// public override sealed void GoBack() :483
void EdgeNavigation__GoBack_fn(EdgeNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "GoBack()");
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret14;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum6 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_swipers), &ret14), ret14); enum6.MoveNext(::TYPES[13/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum6.Current(::TYPES[13/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        uPtr(sw.Value(::TYPES[14/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Disable();
    }
}

// public override sealed void Goto(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) :320
void EdgeNavigation__Goto_fn(EdgeNavigation* __this, ::g::Fuse::Visual* element, int* mode)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "Goto(Fuse.Visual,Fuse.Navigation.NavigationGotoMode)");
    int mode_ = *mode;
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret15;

    if ((mode_ != 0) && (mode_ != 1))
        return;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_swipers), &ret15), ret15); enum1.MoveNext(::TYPES[13/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum1.Current(::TYPES[13/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

        if (uPtr(sw.Value(::TYPES[14/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target() == element)
            uPtr(sw.Value(::TYPES[14/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Enable();
        else
            uPtr(sw.Value(::TYPES[14/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Disable();
    }

    __this->_active = element;
}

// internal bool IsAnyPanelActive() :473
void EdgeNavigation__IsAnyPanelActive_fn(EdgeNavigation* __this, bool* __retval)
{
    *__retval = __this->IsAnyPanelActive();
}

// internal bool IsDismissPoint(float2 windowPoint) :461
void EdgeNavigation__IsDismissPoint_fn(EdgeNavigation* __this, ::g::Uno::Float2* windowPoint, bool* __retval)
{
    *__retval = __this->IsDismissPoint(*windowPoint);
}

// public generated EdgeNavigation New() :295
void EdgeNavigation__New2_fn(EdgeNavigation** __retval)
{
    *__retval = EdgeNavigation::New2();
}

// public override sealed void OnChildAddedWhileRooted(Fuse.Node child) :377
void EdgeNavigation__OnChildAddedWhileRooted_fn(EdgeNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "OnChildAddedWhileRooted(Fuse.Node)");
    ::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn(__this, child);
    __this->CheckChildren();
}

// public override sealed void OnChildRemovedWhileRooted(Fuse.Node child) :383
void EdgeNavigation__OnChildRemovedWhileRooted_fn(EdgeNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "OnChildRemovedWhileRooted(Fuse.Node)");
    ::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn(__this, child);
    __this->CheckChildren();
}

// private void OnProgressChanged(object s, double progress) :434
void EdgeNavigation__OnProgressChanged_fn(EdgeNavigation* __this, uObject* s, double* progress)
{
    __this->OnProgressChanged(s, *progress);
}

// protected override sealed void OnRooted() :358
void EdgeNavigation__OnRooted_fn(EdgeNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "OnRooted()");
    ::g::Fuse::Navigation::VisualNavigation__OnRooted_fn(__this);

    if (!uIs((::g::Fuse::Visual*)__this->Parent(), ::TYPES[11/*Fuse.Elements.Element*/]))
    {
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[6/*"Element"*/], __this->Parent(), __this, ::STRINGS[1/*"/Users/most...*/], 363, ::STRINGS[7/*"OnRooted"*/]);
        U_THROW(::g::Uno::Exception::New2(::STRINGS[8/*"EdgeNavigat...*/]));
    }

    __this->CheckChildren();
}

// protected override sealed void OnUnrooted() :371
void EdgeNavigation__OnUnrooted_fn(EdgeNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "OnUnrooted()");
    __this->ClearChildren();
    ::g::Fuse::Navigation::VisualNavigation__OnUnrooted_fn(__this);
}

// public override sealed double get_PageProgress() :493
void EdgeNavigation__get_PageProgress_fn(EdgeNavigation* __this, double* __retval)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "get_PageProgress()");
    return *__retval = (double)__this->GetPageIndex(__this->_active), void();
}

// public static void ResetEdge(Fuse.Visual elm) :315
void EdgeNavigation__ResetEdge_fn(::g::Fuse::Visual* elm)
{
    EdgeNavigation::ResetEdge(elm);
}

// public static void SetEdge(Fuse.Visual elm, Fuse.Navigation.NavigationEdge edge) :300
void EdgeNavigation__SetEdge_fn(::g::Fuse::Visual* elm, int* edge)
{
    EdgeNavigation::SetEdge(elm, *edge);
}

// public override sealed void Toggle(Fuse.Visual page) :337
void EdgeNavigation__Toggle_fn(EdgeNavigation* __this, ::g::Fuse::Visual* page)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "Toggle(Fuse.Visual)");

    if (__this->Active() == page)
        __this->Active(NULL);
    else
        __this->Active(page);
}

uSStrong< ::g::Fuse::PropertyHandle*> EdgeNavigation::_edgeHandle_;

// public generated EdgeNavigation() [instance] :295
void EdgeNavigation::ctor_4()
{
    _swipers = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[9/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]));
    _mains = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[10/*Uno.Collections.List<Fuse.Visual>*/]));
    ctor_3();
}

// private void CheckChildren() [instance] :403
void EdgeNavigation::CheckChildren()
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "CheckChildren()");
    ::g::Fuse::Navigation::VisualNavigation__PageData* ret11;
    ClearChildren();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Pages()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Navigation.VisualNavigation.PageData>*/])); i++)
    {
        ::g::Fuse::Visual* nodeChild = uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Pages()), ::TYPES[8/*Uno.Collections.IList<Fuse.Navigation.VisualNavigation.PageData>*/]), uCRef<int>(i), &ret11), ret11))->Visual();
        ::g::Fuse::Elements::Element* element = uAs< ::g::Fuse::Elements::Element*>(nodeChild, ::TYPES[11/*Fuse.Elements.Element*/]);
        int edge = (element == NULL) ? 4 : EdgeNavigation::GetEdge(element);

        if (edge == 4)
            ::g::Uno::Collections::List__Add_fn(uPtr(_mains), nodeChild);
        else
        {
            ::g::Fuse::Gestures::Internal::EdgeSwiper* s = ::g::Fuse::Gestures::Internal::EdgeSwiper::New1();
            s->Edge(edge);
            s->Target(element);
            s->add_ProgressChanged(uDelegate::New(::TYPES[12/*Uno.Action<object, double>*/], (void*)EdgeNavigation__OnProgressChanged_fn, this));
            s->Rooted(uAs< ::g::Fuse::Elements::Element*>(Parent(), ::TYPES[11/*Fuse.Elements.Element*/]));
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_swipers), uCRef<int>(edge), s);
        }
    }

    OnPageProgressChanged1(1);
}

// private void ClearChildren() [instance] :392
void EdgeNavigation::ClearChildren()
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "ClearChildren()");
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret12;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret12), ret12); enum2.MoveNext(::TYPES[13/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > s = enum2.Current(::TYPES[13/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        uPtr(s.Value(::TYPES[14/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->remove_ProgressChanged(uDelegate::New(::TYPES[12/*Uno.Action<object, double>*/], (void*)EdgeNavigation__OnProgressChanged_fn, this));
        uPtr(s.Value(::TYPES[14/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Unrooted();
    }

    uPtr(_swipers)->Clear();
    uPtr(_mains)->Clear();
}

// internal bool IsAnyPanelActive() [instance] :473
bool EdgeNavigation::IsAnyPanelActive()
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "IsAnyPanelActive()");
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret16;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum5 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret16), ret16); enum5.MoveNext(::TYPES[13/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum5.Current(::TYPES[13/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

        if (uPtr(sw.Value(::TYPES[14/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress() > 0.0)
            return true;
    }

    return false;
}

// internal bool IsDismissPoint(float2 windowPoint) [instance] :461
bool EdgeNavigation::IsDismissPoint(::g::Uno::Float2 windowPoint)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "IsDismissPoint(float2)");
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret17;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum4 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret17), ret17); enum4.MoveNext(::TYPES[13/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum4.Current(::TYPES[13/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        ::g::Uno::Float2 local = uPtr(uPtr(sw.Value(::TYPES[14/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target())->WindowToLocal(windowPoint);

        if (uPtr(uPtr(sw.Value(::TYPES[14/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target())->IsPointInside(local))
            return false;
    }

    return true;
}

// private void OnProgressChanged(object s, double progress) [instance] :434
void EdgeNavigation::OnProgressChanged(uObject* s, double progress)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "OnProgressChanged(object,double)");
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret18;
    ::g::Fuse::Gestures::Internal::EdgeSwiper* swiper = uAs< ::g::Fuse::Gestures::Internal::EdgeSwiper*>(s, ::TYPES[15/*Fuse.Gestures.Internal.EdgeSwiper*/]);
    ::g::Fuse::Elements::Element* panel = uPtr(swiper)->Target();

    if ((panel == NULL) || (swiper == NULL))
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[5/*"Unexpected ...*/], 1, ::STRINGS[1/*"/Users/most...*/], 440);
        return;
    }

    ::g::Fuse::Visual* maxPage = NULL;
    _maxProgress = 0.0;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum3 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret18), ret18); enum3.MoveNext(::TYPES[13/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum3.Current(::TYPES[13/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

        if (uPtr(sw.Value(::TYPES[14/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress() > _maxProgress)
        {
            maxPage = uPtr(sw.Value(::TYPES[14/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target();
            _maxProgress = uPtr(sw.Value(::TYPES[14/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress();
        }
    }

    _active = maxPage;
    OnPageProgressChanged1(2);
}

// public static Fuse.Navigation.NavigationEdge GetEdge(Fuse.Visual elm) [static] :306
int EdgeNavigation::GetEdge(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "GetEdge(Fuse.Visual)");
    EdgeNavigation_typeof()->Init();
    uObject* res;

    if (uPtr(uPtr(elm)->Properties())->TryGet(EdgeNavigation::_edgeHandle(), &res))
        return uUnbox<int>(::g::Fuse::Navigation::NavigationEdge_typeof(), res);

    return 4;
}

// public generated EdgeNavigation New() [static] :295
EdgeNavigation* EdgeNavigation::New2()
{
    EdgeNavigation* obj10 = (EdgeNavigation*)uNew(EdgeNavigation_typeof());
    obj10->ctor_4();
    return obj10;
}

// public static void ResetEdge(Fuse.Visual elm) [static] :315
void EdgeNavigation::ResetEdge(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "ResetEdge(Fuse.Visual)");
    EdgeNavigation_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Clear(EdgeNavigation::_edgeHandle());
}

// public static void SetEdge(Fuse.Visual elm, Fuse.Navigation.NavigationEdge edge) [static] :300
void EdgeNavigation::SetEdge(::g::Fuse::Visual* elm, int edge)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "SetEdge(Fuse.Visual,Fuse.Navigation.NavigationEdge)");
    EdgeNavigation_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(EdgeNavigation::_edgeHandle(), uBox<int>(::g::Fuse::Navigation::NavigationEdge_typeof(), edge));
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class EndSeekArgs :3633
// {
static void EndSeekArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Navigation::SnapTo_typeof(), offsetof(::g::Fuse::Navigation::EndSeekArgs, _SnapTo), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::EndSeekArgs, _Velocity), 0);
}

uType* EndSeekArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EndSeekArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.EndSeekArgs", options);
    type->fp_build_ = EndSeekArgs_build;
    return type;
}

// public EndSeekArgs(Fuse.Navigation.SnapTo snapTo, [float velocity]) :3638
void EndSeekArgs__ctor__fn(EndSeekArgs* __this, int* snapTo, float* velocity)
{
    __this->ctor_(*snapTo, *velocity);
}

// public EndSeekArgs New(Fuse.Navigation.SnapTo snapTo, [float velocity]) :3638
void EndSeekArgs__New1_fn(int* snapTo, float* velocity, EndSeekArgs** __retval)
{
    *__retval = EndSeekArgs::New1(*snapTo, *velocity);
}

// public generated Fuse.Navigation.SnapTo get_SnapTo() :3636
void EndSeekArgs__get_SnapTo_fn(EndSeekArgs* __this, int* __retval)
{
    *__retval = __this->SnapTo();
}

// private generated void set_SnapTo(Fuse.Navigation.SnapTo value) :3636
void EndSeekArgs__set_SnapTo_fn(EndSeekArgs* __this, int* value)
{
    __this->SnapTo(*value);
}

// public generated float get_Velocity() :3635
void EndSeekArgs__get_Velocity_fn(EndSeekArgs* __this, float* __retval)
{
    *__retval = __this->Velocity();
}

// private generated void set_Velocity(float value) :3635
void EndSeekArgs__set_Velocity_fn(EndSeekArgs* __this, float* value)
{
    __this->Velocity(*value);
}

// public EndSeekArgs(Fuse.Navigation.SnapTo snapTo, [float velocity]) [instance] :3638
void EndSeekArgs::ctor_(int snapTo, float velocity)
{
    SnapTo(snapTo);
    Velocity(velocity);
}

// public generated Fuse.Navigation.SnapTo get_SnapTo() [instance] :3636
int EndSeekArgs::SnapTo()
{
    return _SnapTo;
}

// private generated void set_SnapTo(Fuse.Navigation.SnapTo value) [instance] :3636
void EndSeekArgs::SnapTo(int value)
{
    _SnapTo = value;
}

// public generated float get_Velocity() [instance] :3635
float EndSeekArgs::Velocity()
{
    return _Velocity;
}

// private generated void set_Velocity(float value) [instance] :3635
void EndSeekArgs::Velocity(float value)
{
    _Velocity = value;
}

// public EndSeekArgs New(Fuse.Navigation.SnapTo snapTo, [float velocity]) [static] :3638
EndSeekArgs* EndSeekArgs::New1(int snapTo, float velocity)
{
    EndSeekArgs* obj1 = (EndSeekArgs*)uNew(EndSeekArgs_typeof());
    obj1->ctor_(snapTo, velocity);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public abstract class EnterExitAnimation :1284
// {
static void EnterExitAnimation_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4));
    type->SetFields(33,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::EnterExitAnimation, NegativeProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::EnterExitAnimation, PositiveProgress), 0);
}

::g::Fuse::Navigation::NavigationAnimation_type* EnterExitAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationAnimation_typeof();
    options.FieldCount = 35;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(EnterExitAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.EnterExitAnimation", options);
    type->fp_build_ = EnterExitAnimation_build;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::NavigationAnimation*))EnterExitAnimation__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::NavigationAnimation*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))EnterExitAnimation__OnNavigationStateChanged_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated EnterExitAnimation() :1284
void EnterExitAnimation__ctor_5_fn(EnterExitAnimation* __this)
{
    __this->ctor_5();
}

// protected override sealed void ForceUpdate() :1286
void EnterExitAnimation__ForceUpdate_fn(EnterExitAnimation* __this)
{
    uStackFrame __("Fuse.Navigation.EnterExitAnimation", "ForceUpdate()");
    float p = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress;

    if (__this->IsMatch((double)p))
        __this->Seek((double)::g::Uno::Math::Abs1(p), 0);
}

// private bool IsMatch(double progress) :1293
void EnterExitAnimation__IsMatch_fn(EnterExitAnimation* __this, double* progress, bool* __retval)
{
    *__retval = __this->IsMatch(*progress);
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :1301
void EnterExitAnimation__OnNavigationStateChanged_fn(EnterExitAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    uStackFrame __("Fuse.Navigation.EnterExitAnimation", "OnNavigationStateChanged(object,Fuse.Navigation.NavigationArgs)");
    ::g::Fuse::Navigation::NavigationPageState ps = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), __this->PageContext());
    int d = (::g::Uno::Math::Abs1(ps.PreviousProgress) < ::g::Uno::Math::Abs1(ps.Progress)) ? 0 : 1;

    if (!__this->IsMatch((double)ps.Progress))
    {
        __this->Seek(0.0, d);
        return;
    }

    __this->GoProgress((double)(__this->Scale() * ::g::Uno::Math::Abs1(ps.Progress)), d, state);
}

// protected generated EnterExitAnimation() [instance] :1284
void EnterExitAnimation::ctor_5()
{
    ctor_4();
}

// private bool IsMatch(double progress) [instance] :1293
bool EnterExitAnimation::IsMatch(double progress)
{
    return (PositiveProgress && (progress >= 0.0)) || (NegativeProgress && (progress <= 0.0));
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public class EnteringAnimation :1376
// {
static void EnteringAnimation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4));
    type->SetFields(35);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)EnteringAnimation__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::NavigationAnimation_type* EnteringAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::EnterExitAnimation_typeof();
    options.FieldCount = 35;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(EnteringAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.EnteringAnimation", options);
    type->fp_build_ = EnteringAnimation_build;
    type->fp_ctor_ = (void*)EnteringAnimation__New2_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public EnteringAnimation() :1378
void EnteringAnimation__ctor_6_fn(EnteringAnimation* __this)
{
    __this->ctor_6();
}

// public EnteringAnimation New() :1378
void EnteringAnimation__New2_fn(EnteringAnimation** __retval)
{
    *__retval = EnteringAnimation::New2();
}

// public EnteringAnimation() [instance] :1378
void EnteringAnimation::ctor_6()
{
    ctor_5();
    PositiveProgress = true;
}

// public EnteringAnimation New() [static] :1378
EnteringAnimation* EnteringAnimation::New2()
{
    EnteringAnimation* obj1 = (EnteringAnimation*)uNew(EnteringAnimation_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public class ExitingAnimation :1341
// {
static void ExitingAnimation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4));
    type->SetFields(35);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ExitingAnimation__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::NavigationAnimation_type* ExitingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::EnterExitAnimation_typeof();
    options.FieldCount = 35;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(ExitingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.ExitingAnimation", options);
    type->fp_build_ = ExitingAnimation_build;
    type->fp_ctor_ = (void*)ExitingAnimation__New2_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public ExitingAnimation() :1343
void ExitingAnimation__ctor_6_fn(ExitingAnimation* __this)
{
    __this->ctor_6();
}

// public ExitingAnimation New() :1343
void ExitingAnimation__New2_fn(ExitingAnimation** __retval)
{
    *__retval = ExitingAnimation::New2();
}

// public ExitingAnimation() [instance] :1343
void ExitingAnimation::ctor_6()
{
    ctor_5();
    NegativeProgress = true;
}

// public ExitingAnimation New() [static] :1343
ExitingAnimation* ExitingAnimation::New2()
{
    ExitingAnimation* obj1 = (ExitingAnimation*)uNew(ExitingAnimation_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class ExplicitNavigation :522
// {
static void ExplicitNavigation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface3),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface4),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface6));
    type->SetFields(20,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::ExplicitNavigation, _active), 0);
}

::g::Fuse::Navigation::VisualNavigation_type* ExplicitNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::VisualNavigation_typeof();
    options.FieldCount = 21;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(ExplicitNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::VisualNavigation_type);
    type = (::g::Fuse::Navigation::VisualNavigation_type*)uClassType::New("Fuse.Navigation.ExplicitNavigation", options);
    type->fp_build_ = ExplicitNavigation_build;
    type->fp_ctor_ = (void*)ExplicitNavigation__New2_fn;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))ExplicitNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))ExplicitNavigation__set_Active_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int*))ExplicitNavigation__Goto_fn;
    type->fp_get_PageProgress = (void(*)(::g::Fuse::Navigation::VisualNavigation*, double*))ExplicitNavigation__get_PageProgress_fn;
    type->interface4.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__GetPage_fn;
    type->interface4.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))::g::Fuse::Navigation::VisualNavigation__GetPageState_fn;
    type->interface4.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))ExplicitNavigation__Goto_fn;
    type->interface4.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface4.fp_get_PageCount = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_PageCount_fn;
    type->interface4.fp_get_PageProgress = (void(*)(uObject*, double*))ExplicitNavigation__get_PageProgress_fn;
    type->interface4.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface4.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageCountChanged_fn;
    type->interface4.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageCountChanged_fn;
    type->interface4.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface4.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface4.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface4.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface4.fp_add_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_ActivePageChanged_fn;
    type->interface4.fp_remove_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_ActivePageChanged_fn;
    type->interface5.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn;
    type->interface5.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoBack_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoForward_fn;
    type->interface6.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface6.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated ExplicitNavigation() :522
void ExplicitNavigation__ctor_4_fn(ExplicitNavigation* __this)
{
    __this->ctor_4();
}

// public override sealed Fuse.Visual get_Active() :539
void ExplicitNavigation__get_Active_fn(ExplicitNavigation* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :540
void ExplicitNavigation__set_Active_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Navigation.ExplicitNavigation", "set_Active(Fuse.Visual)");

    if (__this->_active != value)
    {
        __this->_active = value;
        __this->OnActiveChanged(__this->_active);
        __this->OnNavigated(__this->_active);
    }
}

// public override sealed void Goto(Fuse.Visual visual, Fuse.Navigation.NavigationGotoMode mode) :524
void ExplicitNavigation__Goto_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* visual, int* mode)
{
    uStackFrame __("Fuse.Navigation.ExplicitNavigation", "Goto(Fuse.Visual,Fuse.Navigation.NavigationGotoMode)");
    int mode_ = *mode;

    if ((mode_ != 0) && (mode_ != 1))
        return;

    __this->SetPageProgress(visual, 0.0f, false);
    __this->Active(visual);
    __this->OnPageProgressChanged1((mode_ == 1) ? 1 : 0);
}

// public generated ExplicitNavigation New() :522
void ExplicitNavigation__New2_fn(ExplicitNavigation** __retval)
{
    *__retval = ExplicitNavigation::New2();
}

// public override sealed double get_PageProgress() :553
void ExplicitNavigation__get_PageProgress_fn(ExplicitNavigation* __this, double* __retval)
{
    return *__retval = 0.0, void();
}

// public void SetPageProgress(Fuse.Visual page, float progress, [bool update]) :567
void ExplicitNavigation__SetPageProgress_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* page, float* progress, bool* update)
{
    __this->SetPageProgress(page, *progress, *update);
}

// public void SetPageProgress(Fuse.Visual page, float progress, float previous, [bool update]) :556
void ExplicitNavigation__SetPageProgress1_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* page, float* progress, float* previous, bool* update)
{
    __this->SetPageProgress1(page, *progress, *previous, *update);
}

// public void UpdateProgress(Fuse.Navigation.NavigationMode mode) :578
void ExplicitNavigation__UpdateProgress_fn(ExplicitNavigation* __this, int* mode)
{
    __this->UpdateProgress(*mode);
}

// public generated ExplicitNavigation() [instance] :522
void ExplicitNavigation::ctor_4()
{
    ctor_3();
}

// public void SetPageProgress(Fuse.Visual page, float progress, [bool update]) [instance] :567
void ExplicitNavigation::SetPageProgress(::g::Fuse::Visual* page, float progress, bool update)
{
    uStackFrame __("Fuse.Navigation.ExplicitNavigation", "SetPageProgress(Fuse.Visual,float,[bool])");
    ::g::Fuse::Navigation::VisualNavigation__PageData* pd = GetPageData(page);

    if (pd == NULL)
        return;

    uPtr(pd)->PreviousProgress = uPtr(pd)->Progress;
    pd->Progress = progress;

    if (update)
        OnPageProgressChanged1(0);
}

// public void SetPageProgress(Fuse.Visual page, float progress, float previous, [bool update]) [instance] :556
void ExplicitNavigation::SetPageProgress1(::g::Fuse::Visual* page, float progress, float previous, bool update)
{
    uStackFrame __("Fuse.Navigation.ExplicitNavigation", "SetPageProgress(Fuse.Visual,float,float,[bool])");
    ::g::Fuse::Navigation::VisualNavigation__PageData* pd = GetPageData(page);

    if (pd == NULL)
        return;

    uPtr(pd)->PreviousProgress = previous;
    pd->Progress = progress;

    if (update)
        OnPageProgressChanged1(0);
}

// public void UpdateProgress(Fuse.Navigation.NavigationMode mode) [instance] :578
void ExplicitNavigation::UpdateProgress(int mode)
{
    OnPageProgressChanged1(mode);
}

// public generated ExplicitNavigation New() [static] :522
ExplicitNavigation* ExplicitNavigation::New2()
{
    ExplicitNavigation* obj1 = (ExplicitNavigation*)uNew(ExplicitNavigation_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// private sealed class Router.GetRouteCallback :2377
// {
static void Router__GetRouteCallback_build(uType* type)
{
    ::TYPES[16] = uObject_typeof()->Array();
    type->SetFields(0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Navigation::Router__GetRouteCallback, _callback), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Navigation::Router__GetRouteCallback, _context), 0,
        ::g::Fuse::Navigation::Route_typeof(), offsetof(::g::Fuse::Navigation::Router__GetRouteCallback, _route), 0);
}

uType* Router__GetRouteCallback_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Router__GetRouteCallback);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.Router.GetRouteCallback", options);
    type->fp_build_ = Router__GetRouteCallback_build;
    return type;
}

// public GetRouteCallback(Fuse.Navigation.Route route, Fuse.Scripting.Function callback, Fuse.Scripting.Context context) :2382
void Router__GetRouteCallback__ctor__fn(Router__GetRouteCallback* __this, ::g::Fuse::Navigation::Route* route, ::g::Fuse::Scripting::Function* callback, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(route, callback, context);
}

// public GetRouteCallback New(Fuse.Navigation.Route route, Fuse.Scripting.Function callback, Fuse.Scripting.Context context) :2382
void Router__GetRouteCallback__New1_fn(::g::Fuse::Navigation::Route* route, ::g::Fuse::Scripting::Function* callback, ::g::Fuse::Scripting::Context* context, Router__GetRouteCallback** __retval)
{
    *__retval = Router__GetRouteCallback::New1(route, callback, context);
}

// public void Run() :2388
void Router__GetRouteCallback__Run_fn(Router__GetRouteCallback* __this)
{
    __this->Run();
}

// private Fuse.Scripting.Array ToArray() :2391
void Router__GetRouteCallback__ToArray_fn(Router__GetRouteCallback* __this, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray();
}

// public GetRouteCallback(Fuse.Navigation.Route route, Fuse.Scripting.Function callback, Fuse.Scripting.Context context) [instance] :2382
void Router__GetRouteCallback::ctor_(::g::Fuse::Navigation::Route* route, ::g::Fuse::Scripting::Function* callback, ::g::Fuse::Scripting::Context* context)
{
    _route = route;
    _callback = callback;
    _context = context;
}

// public void Run() [instance] :2388
void Router__GetRouteCallback::Run()
{
    uStackFrame __("Fuse.Navigation.Router.GetRouteCallback", "Run()");
    uPtr(_callback)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, (::g::Fuse::Scripting::Array*)ToArray()));
}

// private Fuse.Scripting.Array ToArray() [instance] :2391
::g::Fuse::Scripting::Array* Router__GetRouteCallback::ToArray()
{
    uStackFrame __("Fuse.Navigation.Router.GetRouteCallback", "ToArray()");
    ::g::Fuse::Navigation::Route* route = _route;
    int len = uPtr(route)->Length();
    ::g::Fuse::Scripting::Array* arr = uPtr(_context)->NewArray(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, uBox<int>(::g::Uno::Int_typeof(), len * 2)));

    for (int i = 0; i < len; i++)
    {
        uPtr(arr)->Item(i * 2, uPtr(route)->Path);
        arr->Item((i * 2) + 1, uPtr(_context)->ParseJson(route->Parameter));
        route = uPtr(route)->SubRoute;
    }

    return arr;
}

// public GetRouteCallback New(Fuse.Navigation.Route route, Fuse.Scripting.Function callback, Fuse.Scripting.Context context) [static] :2382
Router__GetRouteCallback* Router__GetRouteCallback::New1(::g::Fuse::Navigation::Route* route, ::g::Fuse::Scripting::Function* callback, ::g::Fuse::Scripting::Context* context)
{
    Router__GetRouteCallback* obj1 = (Router__GetRouteCallback*)uNew(Router__GetRouteCallback_typeof());
    obj1->ctor_(route, callback, context);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class GoBack :4190
// {
static void GoBack_build(uType* type)
{
    ::TYPES[17] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetFields(9);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GoBack__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoBack_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(GoBack);
    options.TypeSize = sizeof(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.GoBack", options);
    type->fp_build_ = GoBack_build;
    type->fp_ctor_ = (void*)GoBack__New2_fn;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::BackForwardNavigationTriggerAction*, uObject*, ::g::Fuse::Node*))GoBack__Perform1_fn;
    return type;
}

// public generated GoBack() :4190
void GoBack__ctor_3_fn(GoBack* __this)
{
    __this->ctor_3();
}

// public generated GoBack New() :4190
void GoBack__New2_fn(GoBack** __retval)
{
    *__retval = GoBack::New2();
}

// protected override sealed void Perform(Fuse.Navigation.IBaseNavigation ctx, Fuse.Node node) :4192
void GoBack__Perform1_fn(GoBack* __this, uObject* ctx, ::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Navigation.GoBack", "Perform(Fuse.Navigation.IBaseNavigation,Fuse.Node)");

    if (::g::Fuse::Navigation::IBaseNavigation::CanGoBack(uInterface(uPtr(ctx), ::TYPES[17/*Fuse.Navigation.IBaseNavigation*/])))
        ::g::Fuse::Navigation::IBaseNavigation::GoBack(uInterface(uPtr(ctx), ::TYPES[17/*Fuse.Navigation.IBaseNavigation*/]));
}

// public generated GoBack() [instance] :4190
void GoBack::ctor_3()
{
    ctor_2();
}

// public generated GoBack New() [static] :4190
GoBack* GoBack::New2()
{
    GoBack* obj1 = (GoBack*)uNew(GoBack_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class GoForward :4225
// {
static void GoForward_build(uType* type)
{
    ::TYPES[17] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetFields(9);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GoForward__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoForward_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(GoForward);
    options.TypeSize = sizeof(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.GoForward", options);
    type->fp_build_ = GoForward_build;
    type->fp_ctor_ = (void*)GoForward__New2_fn;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::BackForwardNavigationTriggerAction*, uObject*, ::g::Fuse::Node*))GoForward__Perform1_fn;
    return type;
}

// public generated GoForward() :4225
void GoForward__ctor_3_fn(GoForward* __this)
{
    __this->ctor_3();
}

// public generated GoForward New() :4225
void GoForward__New2_fn(GoForward** __retval)
{
    *__retval = GoForward::New2();
}

// protected override sealed void Perform(Fuse.Navigation.IBaseNavigation ctx, Fuse.Node node) :4228
void GoForward__Perform1_fn(GoForward* __this, uObject* ctx, ::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Navigation.GoForward", "Perform(Fuse.Navigation.IBaseNavigation,Fuse.Node)");

    if (::g::Fuse::Navigation::IBaseNavigation::CanGoForward(uInterface(uPtr(ctx), ::TYPES[17/*Fuse.Navigation.IBaseNavigation*/])))
        ::g::Fuse::Navigation::IBaseNavigation::GoForward(uInterface(uPtr(ctx), ::TYPES[17/*Fuse.Navigation.IBaseNavigation*/]));
}

// public generated GoForward() [instance] :4225
void GoForward::ctor_3()
{
    ctor_2();
}

// public generated GoForward New() [static] :4225
GoForward* GoForward::New2()
{
    GoForward* obj1 = (GoForward*)uNew(GoForward_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class HierarchicalNavigation :3566
// {
static void HierarchicalNavigation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface3),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface4),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface6),
        ::g::Fuse::Navigation::ISeekableNavigation_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface7));
    type->SetFields(30);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)HierarchicalNavigation__New2_fn, 0, true, type, 0),
        new uFunction("get_ReuseExistingVisual", NULL, (void*)HierarchicalNavigation__get_ReuseExistingVisual_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ReuseExistingVisual", NULL, (void*)HierarchicalNavigation__set_ReuseExistingVisual_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

::g::Fuse::Navigation::StructuredNavigation_type* HierarchicalNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::StructuredNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::StructuredNavigation_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(HierarchicalNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::StructuredNavigation_type);
    type = (::g::Fuse::Navigation::StructuredNavigation_type*)uClassType::New("Fuse.Navigation.HierarchicalNavigation", options);
    type->fp_build_ = HierarchicalNavigation_build;
    type->fp_ctor_ = (void*)HierarchicalNavigation__New2_fn;
    type->interface7.fp_BeginSeek = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__FuseNavigationISeekableNavigationBeginSeek_fn;
    type->interface7.fp_Seek = (void(*)(uObject*, ::g::Fuse::Navigation::UpdateSeekArgs*))::g::Fuse::Navigation::StructuredNavigation__FuseNavigationISeekableNavigationSeek_fn;
    type->interface7.fp_EndSeek = (void(*)(uObject*, ::g::Fuse::Navigation::EndSeekArgs*))::g::Fuse::Navigation::StructuredNavigation__FuseNavigationISeekableNavigationEndSeek_fn;
    type->interface7.fp_get_SeekRange = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Navigation::StructuredNavigation__get_SeekRange_fn;
    type->interface4.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__GetPage_fn;
    type->interface4.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))::g::Fuse::Navigation::StructuredNavigation__GetPageState_fn;
    type->interface4.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))::g::Fuse::Navigation::StructuredNavigation__Goto_fn;
    type->interface4.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface4.fp_get_PageCount = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_PageCount_fn;
    type->interface4.fp_get_PageProgress = (void(*)(uObject*, double*))::g::Fuse::Navigation::StructuredNavigation__get_PageProgress_fn;
    type->interface4.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface4.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageCountChanged_fn;
    type->interface4.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageCountChanged_fn;
    type->interface4.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface4.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface4.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface4.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface4.fp_add_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_ActivePageChanged_fn;
    type->interface4.fp_remove_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_ActivePageChanged_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__GoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))::g::Fuse::Navigation::StructuredNavigation__get_CanGoBack_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::StructuredNavigation__get_CanGoForward_fn;
    type->interface6.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface6.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
    type->interface5.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::StructuredNavigation__OnChildAddedWhileRooted_fn;
    type->interface5.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::StructuredNavigation__OnChildRemovedWhileRooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public HierarchicalNavigation() :3568
void HierarchicalNavigation__ctor_5_fn(HierarchicalNavigation* __this)
{
    __this->ctor_5();
}

// public HierarchicalNavigation New() :3568
void HierarchicalNavigation__New2_fn(HierarchicalNavigation** __retval)
{
    *__retval = HierarchicalNavigation::New2();
}

// public bool get_ReuseExistingVisual() :3574
void HierarchicalNavigation__get_ReuseExistingVisual_fn(HierarchicalNavigation* __this, bool* __retval)
{
    *__retval = __this->ReuseExistingVisual();
}

// public void set_ReuseExistingVisual(bool value) :3575
void HierarchicalNavigation__set_ReuseExistingVisual_fn(HierarchicalNavigation* __this, bool* value)
{
    __this->ReuseExistingVisual(*value);
}

// public HierarchicalNavigation() [instance] :3568
void HierarchicalNavigation::ctor_5()
{
    ctor_4(1);
}

// public bool get_ReuseExistingVisual() [instance] :3574
bool HierarchicalNavigation::ReuseExistingVisual()
{
    return _reuseExistingVisual;
}

// public void set_ReuseExistingVisual(bool value) [instance] :3575
void HierarchicalNavigation::ReuseExistingVisual(bool value)
{
    _reuseExistingVisual = value;
}

// public HierarchicalNavigation New() [static] :3568
HierarchicalNavigation* HierarchicalNavigation::New2()
{
    HierarchicalNavigation* obj1 = (HierarchicalNavigation*)uNew(HierarchicalNavigation_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public delegate void HistoryChangedHandler(object sender) :635
uDelegateType* HistoryChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.HistoryChangedHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof());
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public abstract interface IBaseNavigation :643
// {
uInterfaceType* IBaseNavigation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IBaseNavigation", 0, 0);
    type->Reflection.SetFunctions(6,
        new uFunction("get_CanGoBack", NULL, NULL, offsetof(IBaseNavigation, fp_get_CanGoBack), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanGoForward", NULL, NULL, offsetof(IBaseNavigation, fp_get_CanGoForward), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("GoBack", NULL, NULL, offsetof(IBaseNavigation, fp_GoBack), false, uVoid_typeof(), 0),
        new uFunction("GoForward", NULL, NULL, offsetof(IBaseNavigation, fp_GoForward), false, uVoid_typeof(), 0),
        new uFunction("add_HistoryChanged", NULL, NULL, offsetof(IBaseNavigation, fp_add_HistoryChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("remove_HistoryChanged", NULL, NULL, offsetof(IBaseNavigation, fp_remove_HistoryChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()));
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public abstract interface INavigation :661
// {
uInterfaceType* INavigation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.INavigation", 0, 0);
    type->Reflection.SetFunctions(15,
        new uFunction("get_ActivePage", NULL, NULL, offsetof(INavigation, fp_get_ActivePage), false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("add_ActivePageChanged", NULL, NULL, offsetof(INavigation, fp_add_ActivePageChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::ActivePageChangedHandler_typeof()),
        new uFunction("remove_ActivePageChanged", NULL, NULL, offsetof(INavigation, fp_remove_ActivePageChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::ActivePageChangedHandler_typeof()),
        new uFunction("GetPage", NULL, NULL, offsetof(INavigation, fp_GetPage), false, ::g::Fuse::Visual_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetPageState", NULL, NULL, offsetof(INavigation, fp_GetPageState), false, ::g::Fuse::Navigation::NavigationPageState_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("Goto", NULL, NULL, offsetof(INavigation, fp_Goto), false, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Navigation::NavigationGotoMode_typeof()),
        new uFunction("add_Navigated", NULL, NULL, offsetof(INavigation, fp_add_Navigated), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigatedHandler_typeof()),
        new uFunction("remove_Navigated", NULL, NULL, offsetof(INavigation, fp_remove_Navigated), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigatedHandler_typeof()),
        new uFunction("get_PageCount", NULL, NULL, offsetof(INavigation, fp_get_PageCount), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("add_PageCountChanged", NULL, NULL, offsetof(INavigation, fp_add_PageCountChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationPageCountHandler_typeof()),
        new uFunction("remove_PageCountChanged", NULL, NULL, offsetof(INavigation, fp_remove_PageCountChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationPageCountHandler_typeof()),
        new uFunction("get_PageProgress", NULL, NULL, offsetof(INavigation, fp_get_PageProgress), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("add_PageProgressChanged", NULL, NULL, offsetof(INavigation, fp_add_PageProgressChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationHandler_typeof()),
        new uFunction("remove_PageProgressChanged", NULL, NULL, offsetof(INavigation, fp_remove_PageProgressChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationHandler_typeof()),
        new uFunction("Toggle", NULL, NULL, offsetof(INavigation, fp_Toggle), false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()));
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal abstract interface IPagePropertyListener :1651
// {
uInterfaceType* IPagePropertyListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IPagePropertyListener", 0, 0);
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal abstract interface IPageResourceBinding :1485
// {
uInterfaceType* IPageResourceBinding_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IPageResourceBinding", 0, 0);
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public abstract interface IRouterOutlet :728
// {
uInterfaceType* IRouterOutlet_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IRouterOutlet", 0, 0);
    type->Reflection.SetFunctions(4,
        new uFunction("GetCurrent", NULL, NULL, offsetof(IRouterOutlet, fp_GetCurrent), false, uVoid_typeof(), 3, ::g::Uno::String_typeof()->ByRef(), ::g::Uno::String_typeof()->ByRef(), ::g::Fuse::Visual_typeof()->ByRef()),
        new uFunction("Goto", NULL, NULL, offsetof(IRouterOutlet, fp_Goto), false, ::g::Fuse::Navigation::RoutingResult_typeof(), 5, ::g::Uno::String_typeof()->ByRef(), ::g::Uno::String_typeof()->ByRef(), ::g::Fuse::Navigation::NavigationGotoMode_typeof(), ::g::Fuse::Navigation::RoutingOperation_typeof(), ::g::Fuse::Visual_typeof()->ByRef()),
        new uFunction("PartialPrepareGoto", NULL, NULL, offsetof(IRouterOutlet, fp_PartialPrepareGoto), false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Type", NULL, NULL, offsetof(IRouterOutlet, fp_get_Type), false, ::g::Fuse::Navigation::OutletType_typeof(), 0));
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal abstract interface ISeekableNavigation :679
// {
uInterfaceType* ISeekableNavigation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.ISeekableNavigation", 0, 0);
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class LinearNavigation :3559
// {
static void LinearNavigation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface3),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface4),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface6),
        ::g::Fuse::Navigation::ISeekableNavigation_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface7));
    type->SetFields(30);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LinearNavigation__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::StructuredNavigation_type* LinearNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::StructuredNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::StructuredNavigation_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(LinearNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::StructuredNavigation_type);
    type = (::g::Fuse::Navigation::StructuredNavigation_type*)uClassType::New("Fuse.Navigation.LinearNavigation", options);
    type->fp_build_ = LinearNavigation_build;
    type->fp_ctor_ = (void*)LinearNavigation__New2_fn;
    type->interface7.fp_BeginSeek = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__FuseNavigationISeekableNavigationBeginSeek_fn;
    type->interface7.fp_Seek = (void(*)(uObject*, ::g::Fuse::Navigation::UpdateSeekArgs*))::g::Fuse::Navigation::StructuredNavigation__FuseNavigationISeekableNavigationSeek_fn;
    type->interface7.fp_EndSeek = (void(*)(uObject*, ::g::Fuse::Navigation::EndSeekArgs*))::g::Fuse::Navigation::StructuredNavigation__FuseNavigationISeekableNavigationEndSeek_fn;
    type->interface7.fp_get_SeekRange = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Navigation::StructuredNavigation__get_SeekRange_fn;
    type->interface4.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__GetPage_fn;
    type->interface4.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))::g::Fuse::Navigation::StructuredNavigation__GetPageState_fn;
    type->interface4.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))::g::Fuse::Navigation::StructuredNavigation__Goto_fn;
    type->interface4.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface4.fp_get_PageCount = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_PageCount_fn;
    type->interface4.fp_get_PageProgress = (void(*)(uObject*, double*))::g::Fuse::Navigation::StructuredNavigation__get_PageProgress_fn;
    type->interface4.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface4.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageCountChanged_fn;
    type->interface4.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageCountChanged_fn;
    type->interface4.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface4.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface4.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface4.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface4.fp_add_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_ActivePageChanged_fn;
    type->interface4.fp_remove_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_ActivePageChanged_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__GoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))::g::Fuse::Navigation::StructuredNavigation__get_CanGoBack_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::StructuredNavigation__get_CanGoForward_fn;
    type->interface6.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface6.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
    type->interface5.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::StructuredNavigation__OnChildAddedWhileRooted_fn;
    type->interface5.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::StructuredNavigation__OnChildRemovedWhileRooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public LinearNavigation() :3561
void LinearNavigation__ctor_5_fn(LinearNavigation* __this)
{
    __this->ctor_5();
}

// public LinearNavigation New() :3561
void LinearNavigation__New2_fn(LinearNavigation** __retval)
{
    *__retval = LinearNavigation::New2();
}

// public LinearNavigation() [instance] :3561
void LinearNavigation::ctor_5()
{
    ctor_4(0);
}

// public LinearNavigation New() [static] :3561
LinearNavigation* LinearNavigation::New2()
{
    LinearNavigation* obj1 = (LinearNavigation*)uNew(LinearNavigation_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public enum ModifyRouteHow :2425
uEnumType* ModifyRouteHow_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.ModifyRouteHow", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "Push", 0LL,
        "Goto", 1LL,
        "Replace", 2LL,
        "PrepareBack", 3LL,
        "PreparePush", 4LL,
        "PrepareGoto", 5LL,
        "FinishPrepared", 6LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class NavigatedArgs :618
// {
static void NavigatedArgs_build(uType* type)
{
    ::STRINGS[9] = uString::Const("name");
    ::STRINGS[10] = uString::Const("");
    ::TYPES[18] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(NavigatedArgs_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::NavigatedArgs, _NewVisual), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)NavigatedArgs__New2_fn, 0, true, type, 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_NewVisual", NULL, (void*)NavigatedArgs__get_NewVisual_fn, 0, false, ::g::Fuse::Visual_typeof(), 0));
}

NavigatedArgs_type* NavigatedArgs_typeof()
{
    static uSStrong<NavigatedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NavigatedArgs);
    options.TypeSize = sizeof(NavigatedArgs_type);
    type = (NavigatedArgs_type*)uClassType::New("Fuse.Navigation.NavigatedArgs", options);
    type->fp_build_ = NavigatedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))NavigatedArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public NavigatedArgs(Fuse.Visual newVisual) :622
void NavigatedArgs__ctor_1_fn(NavigatedArgs* __this, ::g::Fuse::Visual* newVisual)
{
    __this->ctor_1(newVisual);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :627
void NavigatedArgs__FuseScriptingIScriptEventSerialize_fn(NavigatedArgs* __this, uObject* s)
{
    uStackFrame __("Fuse.Navigation.NavigatedArgs", "Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer)");

    if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(uPtr(__this->NewVisual())->Name()), NULL))
        ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[18/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[9/*"name"*/], ::g::Uno::UX::Selector__op_Implicit1(uPtr(__this->NewVisual())->Name()));
    else
        ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[18/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[9/*"name"*/], ::STRINGS[10/*""*/]);
}

// public NavigatedArgs New(Fuse.Visual newVisual) :622
void NavigatedArgs__New2_fn(::g::Fuse::Visual* newVisual, NavigatedArgs** __retval)
{
    *__retval = NavigatedArgs::New2(newVisual);
}

// public generated Fuse.Visual get_NewVisual() :620
void NavigatedArgs__get_NewVisual_fn(NavigatedArgs* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->NewVisual();
}

// private generated void set_NewVisual(Fuse.Visual value) :620
void NavigatedArgs__set_NewVisual_fn(NavigatedArgs* __this, ::g::Fuse::Visual* value)
{
    __this->NewVisual(value);
}

// public NavigatedArgs(Fuse.Visual newVisual) [instance] :622
void NavigatedArgs::ctor_1(::g::Fuse::Visual* newVisual)
{
    ctor_();
    NewVisual(newVisual);
}

// public generated Fuse.Visual get_NewVisual() [instance] :620
::g::Fuse::Visual* NavigatedArgs::NewVisual()
{
    return _NewVisual;
}

// private generated void set_NewVisual(Fuse.Visual value) [instance] :620
void NavigatedArgs::NewVisual(::g::Fuse::Visual* value)
{
    _NewVisual = value;
}

// public NavigatedArgs New(Fuse.Visual newVisual) [static] :622
NavigatedArgs* NavigatedArgs::New2(::g::Fuse::Visual* newVisual)
{
    NavigatedArgs* obj1 = (NavigatedArgs*)uNew(NavigatedArgs_typeof());
    obj1->ctor_1(newVisual);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public delegate void NavigatedHandler(object sender, Fuse.Navigation.NavigatedArgs args) :634
uDelegateType* NavigatedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigatedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Navigation::NavigatedArgs_typeof());
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class NavigateTo :4069
// {
static void NavigateTo_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[19] = ::g::Fuse::Navigation::StructuredNavigation_typeof();
    type->SetFields(9,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::NavigateTo, _Bypass), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::NavigateTo, _ClearForwardHistory), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::NavigateTo, _Target), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Bypass", NULL, (void*)NavigateTo__get_Bypass_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Bypass", NULL, (void*)NavigateTo__set_Bypass_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_ClearForwardHistory", NULL, (void*)NavigateTo__get_ClearForwardHistory_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ClearForwardHistory", NULL, (void*)NavigateTo__set_ClearForwardHistory_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)NavigateTo__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)NavigateTo__get_Target_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)NavigateTo__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()));
}

::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateTo_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationTriggerAction_typeof();
    options.FieldCount = 12;
    options.ObjectSize = sizeof(NavigateTo);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::NavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.NavigateTo", options);
    type->fp_build_ = NavigateTo_build;
    type->fp_ctor_ = (void*)NavigateTo__New2_fn;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::NavigationTriggerAction*, uObject*, ::g::Fuse::Node*))NavigateTo__Perform1_fn;
    return type;
}

// public generated NavigateTo() :4069
void NavigateTo__ctor_3_fn(NavigateTo* __this)
{
    __this->ctor_3();
}

// public generated bool get_Bypass() :4079
void NavigateTo__get_Bypass_fn(NavigateTo* __this, bool* __retval)
{
    *__retval = __this->Bypass();
}

// public generated void set_Bypass(bool value) :4079
void NavigateTo__set_Bypass_fn(NavigateTo* __this, bool* value)
{
    __this->Bypass(*value);
}

// public generated bool get_ClearForwardHistory() :4084
void NavigateTo__get_ClearForwardHistory_fn(NavigateTo* __this, bool* __retval)
{
    *__retval = __this->ClearForwardHistory();
}

// public generated void set_ClearForwardHistory(bool value) :4084
void NavigateTo__set_ClearForwardHistory_fn(NavigateTo* __this, bool* value)
{
    __this->ClearForwardHistory(*value);
}

// public generated NavigateTo New() :4069
void NavigateTo__New2_fn(NavigateTo** __retval)
{
    *__retval = NavigateTo::New2();
}

// protected override sealed void Perform(Fuse.Navigation.INavigation ctx, Fuse.Node n) :4086
void NavigateTo__Perform1_fn(NavigateTo* __this, uObject* ctx, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.NavigateTo", "Perform(Fuse.Navigation.INavigation,Fuse.Node)");
    int mode = __this->Bypass() ? 1 : 0;

    if (__this->Target() != NULL)
    {
        ::g::Fuse::Navigation::INavigation::Goto(uInterface(uPtr(ctx), ::TYPES[1/*Fuse.Navigation.INavigation*/]), __this->Target(), mode);

        if (__this->ClearForwardHistory() && uIs(ctx, ::TYPES[19/*Fuse.Navigation.StructuredNavigation*/]))
            uPtr(uAs< ::g::Fuse::Navigation::StructuredNavigation*>(ctx, ::TYPES[19/*Fuse.Navigation.StructuredNavigation*/]))->QueueClearForwardHistory();
    }
}

// public generated Fuse.Visual get_Target() :4074
void NavigateTo__get_Target_fn(NavigateTo* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :4074
void NavigateTo__set_Target_fn(NavigateTo* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated NavigateTo() [instance] :4069
void NavigateTo::ctor_3()
{
    ctor_2();
}

// public generated bool get_Bypass() [instance] :4079
bool NavigateTo::Bypass()
{
    return _Bypass;
}

// public generated void set_Bypass(bool value) [instance] :4079
void NavigateTo::Bypass(bool value)
{
    _Bypass = value;
}

// public generated bool get_ClearForwardHistory() [instance] :4084
bool NavigateTo::ClearForwardHistory()
{
    return _ClearForwardHistory;
}

// public generated void set_ClearForwardHistory(bool value) [instance] :4084
void NavigateTo::ClearForwardHistory(bool value)
{
    _ClearForwardHistory = value;
}

// public generated Fuse.Visual get_Target() [instance] :4074
::g::Fuse::Visual* NavigateTo::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :4074
void NavigateTo::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public generated NavigateTo New() [static] :4069
NavigateTo* NavigateTo::New2()
{
    NavigateTo* obj1 = (NavigateTo*)uNew(NavigateTo_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class NavigateToggle :4124
// {
static void NavigateToggle_build(uType* type)
{
    ::STRINGS[11] = uString::Const("No Page was found");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    ::TYPES[1] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetFields(9,
        ::TYPES[4/*Fuse.Visual*/], offsetof(::g::Fuse::Navigation::NavigateToggle, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)NavigateToggle__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)NavigateToggle__get_Target_fn, 0, false, ::TYPES[4/*Fuse.Visual*/], 0),
        new uFunction("set_Target", NULL, (void*)NavigateToggle__set_Target_fn, 0, false, uVoid_typeof(), 1, ::TYPES[4/*Fuse.Visual*/]));
}

::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateToggle_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationTriggerAction_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(NavigateToggle);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::NavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.NavigateToggle", options);
    type->fp_build_ = NavigateToggle_build;
    type->fp_ctor_ = (void*)NavigateToggle__New2_fn;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::NavigationTriggerAction*, uObject*, ::g::Fuse::Node*))NavigateToggle__Perform1_fn;
    return type;
}

// public generated NavigateToggle() :4124
void NavigateToggle__ctor_3_fn(NavigateToggle* __this)
{
    __this->ctor_3();
}

// public generated NavigateToggle New() :4124
void NavigateToggle__New2_fn(NavigateToggle** __retval)
{
    *__retval = NavigateToggle::New2();
}

// protected override sealed void Perform(Fuse.Navigation.INavigation ctx, Fuse.Node n) :4129
void NavigateToggle__Perform1_fn(NavigateToggle* __this, uObject* ctx, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.NavigateToggle", "Perform(Fuse.Navigation.INavigation,Fuse.Node)");
    ::g::Fuse::Visual* ind1;
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[4/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    ::g::Fuse::Visual* page = ::g::Fuse::Navigation::Navigation::TryFindPage1((ind1 = __this->Target(), (ind1 != NULL) ? ind1 : v));

    if (page != NULL)
        ::g::Fuse::Navigation::INavigation::Toggle(uInterface(uPtr(ctx), ::TYPES[1/*Fuse.Navigation.INavigation*/]), page);
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[11/*"No Page was...*/], __this, ::STRINGS[1/*"/Users/most...*/], 4138, ::STRINGS[2/*"Perform"*/]);
}

// public generated Fuse.Visual get_Target() :4127
void NavigateToggle__get_Target_fn(NavigateToggle* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :4127
void NavigateToggle__set_Target_fn(NavigateToggle* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated NavigateToggle() [instance] :4124
void NavigateToggle::ctor_3()
{
    ctor_2();
}

// public generated Fuse.Visual get_Target() [instance] :4127
::g::Fuse::Visual* NavigateToggle::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :4127
void NavigateToggle::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public generated NavigateToggle New() [static] :4124
NavigateToggle* NavigateToggle::New2()
{
    NavigateToggle* obj2 = (NavigateToggle*)uNew(NavigateToggle_typeof());
    obj2->ctor_3();
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public interfacemodifiers class Navigation :799
// {
// static Navigation() :799
static void Navigation__cctor__fn(uType* __type)
{
    Navigation::_navigationStateHandler_ = ::g::Fuse::Properties::CreateHandle();
    Navigation::_contextHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void Navigation_build(uType* type)
{
    ::STRINGS[12] = uString::Const("TryFindBaseNavigation requires rooting to have started");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno");
    ::STRINGS[13] = uString::Const("TryFindBaseNavigation");
    ::STRINGS[14] = uString::Const("TryFindPage requires rooting to have started");
    ::STRINGS[15] = uString::Const("TryFindPage");
    ::STRINGS[16] = uString::Const("`Page` set to a value that is not within an navigation");
    ::TYPES[17] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    ::TYPES[20] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    ::TYPES[22] = ::g::Fuse::Navigation::NavigationStateHandler_typeof();
    ::TYPES[23] = ::g::Fuse::Navigation::NavigationStateArgs_typeof();
    ::TYPES[24] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof()->Array(), NULL);
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::Navigation::_contextHandle_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::Navigation::_navigationStateHandler_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(8,
        new uFunction("GetNavigationNavigation", NULL, (void*)Navigation__GetNavigationNavigation_fn, 0, true, ::TYPES[17/*Fuse.Navigation.IBaseNavigation*/], 1, ::TYPES[4/*Fuse.Visual*/]),
        new uFunction("IsPage", NULL, (void*)Navigation__IsPage_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("ResetNavigationNavigation", NULL, (void*)Navigation__ResetNavigationNavigation_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Fuse.Visual*/]),
        new uFunction("SetNavigationNavigation", NULL, (void*)Navigation__SetNavigationNavigation_fn, 0, true, uVoid_typeof(), 2, ::TYPES[4/*Fuse.Visual*/], ::TYPES[17/*Fuse.Navigation.IBaseNavigation*/]),
        new uFunction("TryFind", NULL, (void*)Navigation__TryFind_fn, 0, true, ::TYPES[1/*Fuse.Navigation.INavigation*/], 1, ::TYPES[4/*Fuse.Visual*/]),
        new uFunction("TryFindBaseNavigation", NULL, (void*)Navigation__TryFindBaseNavigation_fn, 0, true, ::TYPES[17/*Fuse.Navigation.IBaseNavigation*/], 1, ::g::Fuse::Node_typeof()),
        new uFunction("TryFindBaseNavigation", NULL, (void*)Navigation__TryFindBaseNavigation1_fn, 0, true, ::TYPES[17/*Fuse.Navigation.IBaseNavigation*/], 2, ::g::Fuse::Node_typeof(), ::TYPES[4/*Fuse.Visual*/]->ByRef()),
        new uFunction("TryFindPage", NULL, (void*)Navigation__TryFindPage1_fn, 0, true, ::TYPES[4/*Fuse.Visual*/], 1, ::TYPES[4/*Fuse.Visual*/]));
}

uType* Navigation_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Navigation);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.Navigation", options);
    type->fp_build_ = Navigation_build;
    type->fp_cctor_ = Navigation__cctor__fn;
    return type;
}

// protected generated Navigation() :799
void Navigation__ctor__fn(Navigation* __this)
{
    __this->ctor_();
}

// internal static void AddStateHandler(Fuse.Visual visual, Fuse.Navigation.NavigationStateHandler handler) :812
void Navigation__AddStateHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Navigation::AddStateHandler(visual, handler);
}

// internal static Fuse.Navigation.IBaseNavigation GetLocalNavigation(Fuse.Visual node) :857
void Navigation__GetLocalNavigation_fn(::g::Fuse::Visual* node, uObject** __retval)
{
    *__retval = Navigation::GetLocalNavigation(node);
}

// public static Fuse.Navigation.IBaseNavigation GetNavigationNavigation(Fuse.Visual n) :1010
void Navigation__GetNavigationNavigation_fn(::g::Fuse::Visual* n, uObject** __retval)
{
    *__retval = Navigation::GetNavigationNavigation(n);
}

// private static void InvokeState(object handler, object[] state) :827
void Navigation__InvokeState_fn(uObject* handler, uArray* state)
{
    Navigation::InvokeState(handler, state);
}

// public static bool IsPage(Fuse.Node n) :1024
void Navigation__IsPage_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = Navigation::IsPage(n);
}

// internal static void NotifyNavigationState(Fuse.Visual n, Fuse.Navigation.NavigationStateArgs state) :822
void Navigation__NotifyNavigationState_fn(::g::Fuse::Visual* n, ::g::Fuse::Navigation::NavigationStateArgs* state)
{
    Navigation::NotifyNavigationState(n, state);
}

// internal static void RemoveStateHandler(Fuse.Visual visual, Fuse.Navigation.NavigationStateHandler handler) :817
void Navigation__RemoveStateHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Navigation::RemoveStateHandler(visual, handler);
}

// public static void ResetNavigationNavigation(Fuse.Visual n) :1019
void Navigation__ResetNavigationNavigation_fn(::g::Fuse::Visual* n)
{
    Navigation::ResetNavigationNavigation(n);
}

// public static void SetNavigationNavigation(Fuse.Visual n, Fuse.Navigation.IBaseNavigation ctx) :1004
void Navigation__SetNavigationNavigation_fn(::g::Fuse::Visual* n, uObject* ctx)
{
    Navigation::SetNavigationNavigation(n, ctx);
}

// public static Fuse.Navigation.INavigation TryFind(Fuse.Visual node) :876
void Navigation__TryFind_fn(::g::Fuse::Visual* node, uObject** __retval)
{
    *__retval = Navigation::TryFind(node);
}

// public static Fuse.Navigation.IBaseNavigation TryFindBaseNavigation(Fuse.Node node) :910
void Navigation__TryFindBaseNavigation_fn(::g::Fuse::Node* node, uObject** __retval)
{
    *__retval = Navigation::TryFindBaseNavigation(node);
}

// public static Fuse.Navigation.IBaseNavigation TryFindBaseNavigation(Fuse.Node node, Fuse.Visual& parent) :883
void Navigation__TryFindBaseNavigation1_fn(::g::Fuse::Node* node, ::g::Fuse::Visual** parent, uObject** __retval)
{
    *__retval = Navigation::TryFindBaseNavigation1(node, parent);
}

// internal static Fuse.Visual TryFindPage(Fuse.Node node, Fuse.Navigation.INavigation& nav, Fuse.Visual& pageBind) :941
void Navigation__TryFindPage_fn(::g::Fuse::Node* node, uObject** nav, ::g::Fuse::Visual** pageBind, ::g::Fuse::Visual** __retval)
{
    *__retval = Navigation::TryFindPage(node, nav, pageBind);
}

// public static Fuse.Visual TryFindPage(Fuse.Visual node) :920
void Navigation__TryFindPage1_fn(::g::Fuse::Visual* node, ::g::Fuse::Visual** __retval)
{
    *__retval = Navigation::TryFindPage1(node);
}

uSStrong< ::g::Fuse::PropertyHandle*> Navigation::_contextHandle_;
uSStrong< ::g::Fuse::PropertyHandle*> Navigation::_navigationStateHandler_;

// protected generated Navigation() [instance] :799
void Navigation::ctor_()
{
}

// internal static void AddStateHandler(Fuse.Visual visual, Fuse.Navigation.NavigationStateHandler handler) [static] :812
void Navigation::AddStateHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Navigation.Navigation", "AddStateHandler(Fuse.Visual,Fuse.Navigation.NavigationStateHandler)");
    Navigation_typeof()->Init();
    uPtr(uPtr(visual)->Properties())->AddToList(Navigation::_navigationStateHandler(), handler);
}

// internal static Fuse.Navigation.IBaseNavigation GetLocalNavigation(Fuse.Visual node) [static] :857
uObject* Navigation::GetLocalNavigation(::g::Fuse::Visual* node)
{
    uStackFrame __("Fuse.Navigation.Navigation", "GetLocalNavigation(Fuse.Visual)");
    Navigation_typeof()->Init();
    ::g::Fuse::Node* ret1;
    uObject* n = Navigation::GetNavigationNavigation(node);

    if (n != NULL)
        return n;

    uObject* t = uAs<uObject*>(node, ::TYPES[17/*Fuse.Navigation.IBaseNavigation*/]);

    if (t != NULL)
        return t;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(node)->Children()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        uObject* c = uAs<uObject*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(node)->Children()), ::TYPES[21/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret1), ret1), ::TYPES[17/*Fuse.Navigation.IBaseNavigation*/]);

        if ((c != NULL) && !uIs(c, ::TYPES[4/*Fuse.Visual*/]))
            return c;
    }

    return NULL;
}

// public static Fuse.Navigation.IBaseNavigation GetNavigationNavigation(Fuse.Visual n) [static] :1010
uObject* Navigation::GetNavigationNavigation(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Navigation.Navigation", "GetNavigationNavigation(Fuse.Visual)");
    Navigation_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(n)->Properties())->TryGet(Navigation::_contextHandle(), &v))
        return (uObject*)v;

    return NULL;
}

// private static void InvokeState(object handler, object[] state) [static] :827
void Navigation::InvokeState(uObject* handler, uArray* state)
{
    uStackFrame __("Fuse.Navigation.Navigation", "InvokeState(object,object[])");
    Navigation_typeof()->Init();
    uDelegate* h = uCast<uDelegate*>(handler, ::TYPES[22/*Fuse.Navigation.NavigationStateHandler*/]);
    ::g::Fuse::Visual* n = uCast< ::g::Fuse::Visual*>(uPtr(state)->Strong<uObject*>(0), ::TYPES[4/*Fuse.Visual*/]);
    ::g::Fuse::Navigation::NavigationStateArgs* s = uCast< ::g::Fuse::Navigation::NavigationStateArgs*>(state->Strong<uObject*>(1), ::TYPES[23/*Fuse.Navigation.NavigationStateArgs*/]);
    uPtr(h)->Invoke(2, n, s);
}

// public static bool IsPage(Fuse.Node n) [static] :1024
bool Navigation::IsPage(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.Navigation", "IsPage(Fuse.Node)");
    Navigation_typeof()->Init();
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[4/*Fuse.Visual*/]);

    if (v == NULL)
        return false;

    return uPtr(v)->LayoutRole() == 0;
}

// internal static void NotifyNavigationState(Fuse.Visual n, Fuse.Navigation.NavigationStateArgs state) [static] :822
void Navigation::NotifyNavigationState(::g::Fuse::Visual* n, ::g::Fuse::Navigation::NavigationStateArgs* state)
{
    uStackFrame __("Fuse.Navigation.Navigation", "NotifyNavigationState(Fuse.Visual,Fuse.Navigation.NavigationStateArgs)");
    Navigation_typeof()->Init();
    uPtr(uPtr(n)->Properties())->ForeachInList(Navigation::_navigationStateHandler(), uDelegate::New(::TYPES[24/*Uno.Action<object, object[]>*/], (void*)Navigation__InvokeState_fn), uArray::Init<uObject*>(::TYPES[16/*object[]*/], 2, n, state));
}

// internal static void RemoveStateHandler(Fuse.Visual visual, Fuse.Navigation.NavigationStateHandler handler) [static] :817
void Navigation::RemoveStateHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Navigation.Navigation", "RemoveStateHandler(Fuse.Visual,Fuse.Navigation.NavigationStateHandler)");
    Navigation_typeof()->Init();
    uPtr(uPtr(visual)->Properties())->RemoveFromList(Navigation::_navigationStateHandler(), handler);
}

// public static void ResetNavigationNavigation(Fuse.Visual n) [static] :1019
void Navigation::ResetNavigationNavigation(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Navigation.Navigation", "ResetNavigationNavigation(Fuse.Visual)");
    Navigation_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Clear(Navigation::_contextHandle());
}

// public static void SetNavigationNavigation(Fuse.Visual n, Fuse.Navigation.IBaseNavigation ctx) [static] :1004
void Navigation::SetNavigationNavigation(::g::Fuse::Visual* n, uObject* ctx)
{
    uStackFrame __("Fuse.Navigation.Navigation", "SetNavigationNavigation(Fuse.Visual,Fuse.Navigation.IBaseNavigation)");
    Navigation_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(Navigation::_contextHandle(), ctx);
}

// public static Fuse.Navigation.INavigation TryFind(Fuse.Visual node) [static] :876
uObject* Navigation::TryFind(::g::Fuse::Visual* node)
{
    Navigation_typeof()->Init();
    return uAs<uObject*>(Navigation::TryFindBaseNavigation(node), ::TYPES[1/*Fuse.Navigation.INavigation*/]);
}

// public static Fuse.Navigation.IBaseNavigation TryFindBaseNavigation(Fuse.Node node) [static] :910
uObject* Navigation::TryFindBaseNavigation(::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Navigation.Navigation", "TryFindBaseNavigation(Fuse.Node)");
    Navigation_typeof()->Init();
    ::g::Fuse::Visual* v;
    return Navigation::TryFindBaseNavigation1(node, &v);
}

// public static Fuse.Navigation.IBaseNavigation TryFindBaseNavigation(Fuse.Node node, Fuse.Visual& parent) [static] :883
uObject* Navigation::TryFindBaseNavigation1(::g::Fuse::Node* node, ::g::Fuse::Visual** parent)
{
    uStackFrame __("Fuse.Navigation.Navigation", "TryFindBaseNavigation(Fuse.Node,Fuse.Visual&)");
    Navigation_typeof()->Init();
    *parent = NULL;

    if (!uPtr(node)->IsRootingStarted())
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[12/*"TryFindBase...*/], node, ::STRINGS[1/*"/Users/most...*/], 888, ::STRINGS[13/*"TryFindBase...*/]);
        return NULL;
    }

    while (node != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(node, ::TYPES[4/*Fuse.Visual*/]);

        if (v != NULL)
        {
            uObject* n = Navigation::GetLocalNavigation(v);

            if (n != NULL)
            {
                *parent = v;
                return n;
            }
        }

        node = uPtr(node)->ContextParent();
    }

    return NULL;
}

// internal static Fuse.Visual TryFindPage(Fuse.Node node, Fuse.Navigation.INavigation& nav, Fuse.Visual& pageBind) [static] :941
::g::Fuse::Visual* Navigation::TryFindPage(::g::Fuse::Node* node, uObject** nav, ::g::Fuse::Visual** pageBind)
{
    uStackFrame __("Fuse.Navigation.Navigation", "TryFindPage(Fuse.Node,Fuse.Navigation.INavigation&,Fuse.Visual&)");
    Navigation_typeof()->Init();
    ::g::Fuse::Visual* prev = uAs< ::g::Fuse::Visual*>(node, ::TYPES[4/*Fuse.Visual*/]);
    *nav = NULL;
    *pageBind = NULL;

    if (!uPtr(node)->IsRootingStarted())
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[14/*"TryFindPage...*/], node, ::STRINGS[1/*"/Users/most...*/], 949, ::STRINGS[15/*"TryFindPage"*/]);
        return NULL;
    }

    bool first = true;

    while (node != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(node, ::TYPES[4/*Fuse.Visual*/]);

        if (v != NULL)
        {
            ::g::Fuse::Visual* p = ::g::Fuse::Navigation::NavigationPageProperty::GetNavigationPage(v);

            if (p != NULL)
            {
                *pageBind = v;

                if (uPtr(p)->IsRootingStarted())
                {
                    *nav = Navigation::TryFind(p);

                    if (*nav == NULL)
                    {
                        ::g::Fuse::Diagnostics::UserWarning(::STRINGS[16/*"`Page` set ...*/], p, ::STRINGS[1/*"/Users/most...*/], 970, ::STRINGS[15/*"TryFindPage"*/]);
                        return NULL;
                    }
                }

                return p;
            }

            if (!first)
            {
                uObject* n = Navigation::GetLocalNavigation(v);

                if (n != NULL)
                {
                    *nav = uAs<uObject*>(n, ::TYPES[1/*Fuse.Navigation.INavigation*/]);

                    if (*nav == NULL)
                        return NULL;

                    return prev;
                }
            }

            prev = v;
        }

        first = false;
        node = uPtr(node)->ContextParent();
    }

    return NULL;
}

// public static Fuse.Visual TryFindPage(Fuse.Visual node) [static] :920
::g::Fuse::Visual* Navigation::TryFindPage1(::g::Fuse::Visual* node)
{
    uStackFrame __("Fuse.Navigation.Navigation", "TryFindPage(Fuse.Visual)");
    Navigation_typeof()->Init();
    uObject* nav;
    ::g::Fuse::Visual* bind;
    return Navigation::TryFindPage(node, &nav, &bind);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public abstract class NavigationAnimation :1187
// {
static void NavigationAnimation_build(uType* type)
{
    ::TYPES[25] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[26] = ::g::Fuse::Navigation::NavigationHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(NavigationAnimation_type, interface4));
    type->SetFields(28,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation, _delay), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation, _delayProgress), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation, _delayVariant), 0,
        ::g::Fuse::Navigation::NavigationPageProxy_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation, _proxy), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation, _scale), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Scale", NULL, (void*)NavigationAnimation__get_Scale_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Scale", NULL, (void*)NavigationAnimation__set_Scale_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

NavigationAnimation_type* NavigationAnimation_typeof()
{
    static uSStrong<NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 33;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(NavigationAnimation);
    options.TypeSize = sizeof(NavigationAnimation_type);
    type = (NavigationAnimation_type*)uClassType::New("Fuse.Navigation.NavigationAnimation", options);
    type->fp_build_ = NavigationAnimation_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))NavigationAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))NavigationAnimation__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal NavigationAnimation() :1189
void NavigationAnimation__ctor_4_fn(NavigationAnimation* __this)
{
    __this->ctor_4();
}

// internal void GoProgress(double p, Fuse.Animations.AnimationVariant variant, Fuse.Navigation.NavigationArgs state) :1243
void NavigationAnimation__GoProgress_fn(NavigationAnimation* __this, double* p, int* variant, ::g::Fuse::Navigation::NavigationArgs* state)
{
    __this->GoProgress(*p, *variant, state);
}

// private void GoProgressPlay() :1272
void NavigationAnimation__GoProgressPlay_fn(NavigationAnimation* __this)
{
    __this->GoProgressPlay();
}

// protected Fuse.Navigation.INavigation get_NavContext() :1192
void NavigationAnimation__get_NavContext_fn(NavigationAnimation* __this, uObject** __retval)
{
    *__retval = __this->NavContext();
}

// private void NavReady() :1202
void NavigationAnimation__NavReady_fn(NavigationAnimation* __this)
{
    __this->NavReady();
}

// private void NavUnready() :1216
void NavigationAnimation__NavUnready_fn(NavigationAnimation* __this)
{
    __this->NavUnready();
}

// protected override sealed void OnRooted() :1195
void NavigationAnimation__OnRooted_fn(NavigationAnimation* __this)
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_proxy = ::g::Fuse::Navigation::NavigationPageProxy::New1(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)NavigationAnimation__NavReady_fn, __this), uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)NavigationAnimation__NavUnready_fn, __this));
    uPtr(__this->_proxy)->Rooted(__this->Parent());
}

// protected override sealed void OnUnrooted() :1208
void NavigationAnimation__OnUnrooted_fn(NavigationAnimation* __this)
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "OnUnrooted()");
    uPtr(__this->_proxy)->Unrooted();
    __this->_proxy = NULL;
    __this->_delay = false;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// protected Fuse.Visual get_PageContext() :1191
void NavigationAnimation__get_PageContext_fn(NavigationAnimation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->PageContext();
}

// public float get_Scale() :1236
void NavigationAnimation__get_Scale_fn(NavigationAnimation* __this, float* __retval)
{
    *__retval = __this->Scale();
}

// public void set_Scale(float value) :1237
void NavigationAnimation__set_Scale_fn(NavigationAnimation* __this, float* value)
{
    __this->Scale(*value);
}

// internal NavigationAnimation() [instance] :1189
void NavigationAnimation::ctor_4()
{
    _scale = 1.0f;
    ctor_3();
}

// internal void GoProgress(double p, Fuse.Animations.AnimationVariant variant, Fuse.Navigation.NavigationArgs state) [instance] :1243
void NavigationAnimation::GoProgress(double p, int variant, ::g::Fuse::Navigation::NavigationArgs* state)
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "GoProgress(double,Fuse.Animations.AnimationVariant,Fuse.Navigation.NavigationArgs)");

    if (uPtr(state)->Mode() == 0)
    {
        _delayVariant = variant;
        _delayProgress = p;

        if (!_delay)
        {
            _delay = true;
            ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)NavigationAnimation__GoProgressPlay_fn, this), 0);
        }
    }
    else if (uPtr(state)->Mode() == 2)
    {
        _delay = false;
        DirectSeek(p, variant);
    }
    else
    {
        _delay = false;
        BypassSeek(p, variant);
    }
}

// private void GoProgressPlay() [instance] :1272
void NavigationAnimation::GoProgressPlay()
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "GoProgressPlay()");

    if (!_delay)
        return;

    _delay = false;
    PlayTo(_delayProgress, _delayVariant);
}

// protected Fuse.Navigation.INavigation get_NavContext() [instance] :1192
uObject* NavigationAnimation::NavContext()
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "get_NavContext()");
    return uPtr(_proxy)->Navigation();
}

// private void NavReady() [instance] :1202
void NavigationAnimation::NavReady()
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "NavReady()");
    ::g::Fuse::Navigation::INavigation::add_PageProgressChanged(uInterface(uPtr(uPtr(_proxy)->Navigation()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[26/*Fuse.Navigation.NavigationHandler*/], this, offsetof(NavigationAnimation_type, fp_OnNavigationStateChanged)));
    ForceUpdate();
}

// private void NavUnready() [instance] :1216
void NavigationAnimation::NavUnready()
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "NavUnready()");
    ::g::Fuse::Navigation::INavigation::remove_PageProgressChanged(uInterface(uPtr(uPtr(_proxy)->Navigation()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[26/*Fuse.Navigation.NavigationHandler*/], this, offsetof(NavigationAnimation_type, fp_OnNavigationStateChanged)));
}

// protected Fuse.Visual get_PageContext() [instance] :1191
::g::Fuse::Visual* NavigationAnimation::PageContext()
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "get_PageContext()");
    return uPtr(_proxy)->Page();
}

// public float get_Scale() [instance] :1236
float NavigationAnimation::Scale()
{
    return _scale;
}

// public void set_Scale(float value) [instance] :1237
void NavigationAnimation::Scale(float value)
{
    _scale = value;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class NavigationArgs :769
// {
static void NavigationArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Navigation::NavigationMode_typeof(), offsetof(::g::Fuse::Navigation::NavigationArgs, _Mode), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::NavigationArgs, _PreviousProgress), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::NavigationArgs, _Progress), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Mode", NULL, (void*)NavigationArgs__get_Mode_fn, 0, false, ::g::Fuse::Navigation::NavigationMode_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)NavigationArgs__New2_fn, 0, true, type, 3, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Fuse::Navigation::NavigationMode_typeof()),
        new uFunction("get_PreviousProgress", NULL, (void*)NavigationArgs__get_PreviousProgress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Progress", NULL, (void*)NavigationArgs__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0));
}

uType* NavigationArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NavigationArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.NavigationArgs", options);
    type->fp_build_ = NavigationArgs_build;
    return type;
}

// public NavigationArgs(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) :775
void NavigationArgs__ctor_1_fn(NavigationArgs* __this, double* progress, double* prevProgress, int* mode)
{
    __this->ctor_1(*progress, *prevProgress, *mode);
}

// public generated Fuse.Navigation.NavigationMode get_Mode() :771
void NavigationArgs__get_Mode_fn(NavigationArgs* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// private generated void set_Mode(Fuse.Navigation.NavigationMode value) :771
void NavigationArgs__set_Mode_fn(NavigationArgs* __this, int* value)
{
    __this->Mode(*value);
}

// public NavigationArgs New(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) :775
void NavigationArgs__New2_fn(double* progress, double* prevProgress, int* mode, NavigationArgs** __retval)
{
    *__retval = NavigationArgs::New2(*progress, *prevProgress, *mode);
}

// public generated double get_PreviousProgress() :773
void NavigationArgs__get_PreviousProgress_fn(NavigationArgs* __this, double* __retval)
{
    *__retval = __this->PreviousProgress();
}

// private generated void set_PreviousProgress(double value) :773
void NavigationArgs__set_PreviousProgress_fn(NavigationArgs* __this, double* value)
{
    __this->PreviousProgress(*value);
}

// public generated double get_Progress() :772
void NavigationArgs__get_Progress_fn(NavigationArgs* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// private generated void set_Progress(double value) :772
void NavigationArgs__set_Progress_fn(NavigationArgs* __this, double* value)
{
    __this->Progress(*value);
}

// public NavigationArgs(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) [instance] :775
void NavigationArgs::ctor_1(double progress, double prevProgress, int mode)
{
    ctor_();
    Progress(progress);
    PreviousProgress(prevProgress);
    Mode(mode);
}

// public generated Fuse.Navigation.NavigationMode get_Mode() [instance] :771
int NavigationArgs::Mode()
{
    return _Mode;
}

// private generated void set_Mode(Fuse.Navigation.NavigationMode value) [instance] :771
void NavigationArgs::Mode(int value)
{
    _Mode = value;
}

// public generated double get_PreviousProgress() [instance] :773
double NavigationArgs::PreviousProgress()
{
    return _PreviousProgress;
}

// private generated void set_PreviousProgress(double value) [instance] :773
void NavigationArgs::PreviousProgress(double value)
{
    _PreviousProgress = value;
}

// public generated double get_Progress() [instance] :772
double NavigationArgs::Progress()
{
    return _Progress;
}

// private generated void set_Progress(double value) [instance] :772
void NavigationArgs::Progress(double value)
{
    _Progress = value;
}

// public NavigationArgs New(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) [static] :775
NavigationArgs* NavigationArgs::New2(double progress, double prevProgress, int mode)
{
    NavigationArgs* obj1 = (NavigationArgs*)uNew(NavigationArgs_typeof());
    obj1->ctor_1(progress, prevProgress, mode);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public enum NavigationDirection :595
uEnumType* NavigationDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationDirection", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public enum NavigationEdge :286
uEnumType* NavigationEdge_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationEdge", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL,
        "None", 4LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public enum NavigationGotoMode :605
uEnumType* NavigationGotoMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationGotoMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Transition", 0LL,
        "Bypass", 1LL,
        "Prepare", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public delegate void NavigationHandler(object sender, Fuse.Navigation.NavigationArgs state) :784
uDelegateType* NavigationHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Navigation::NavigationArgs_typeof());
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public enum NavigationMode :762
uEnumType* NavigationMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Switch", 0LL,
        "Bypass", 1LL,
        "Seek", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public delegate void NavigationPageCountHandler(object sender) :636
uDelegateType* NavigationPageCountHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationPageCountHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof());
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public delegate void NavigationPageProgressHandler(object sender, double Current, double Previous) :637
uDelegateType* NavigationPageProgressHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationPageProgressHandler", 3, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::Double_typeof(),
        ::g::Uno::Double_typeof());
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public static class NavigationPageProperty :1656
// {
// static NavigationPageProperty() :1656
static void NavigationPageProperty__cctor__fn(uType* __type)
{
    NavigationPageProperty::_pageProperty_ = ::g::Fuse::Properties::CreateHandle();
    NavigationPageProperty::RootedBindings_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[27/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>*/]));
    NavigationPageProperty::_watchers_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[28/*Uno.Collections.Dictionary<Fuse.Visual, Uno.Collections.List<Fuse.Navigation.IPagePropertyListener>>*/]));
}

static void NavigationPageProperty_build(uType* type)
{
    ::TYPES[27] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::IPageResourceBinding_typeof(), NULL);
    ::TYPES[28] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Visual_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::IPagePropertyListener_typeof(), NULL), NULL);
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    ::TYPES[29] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::IPagePropertyListener_typeof(), NULL);
    ::TYPES[30] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Navigation::IPageResourceBinding_typeof(), NULL);
    ::TYPES[31] = ::g::Fuse::Navigation::IPageResourceBinding_typeof();
    ::TYPES[32] = ::g::Fuse::Navigation::IPagePropertyListener_typeof();
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::NavigationPageProperty::_pageProperty_, uFieldFlagsStatic,
        ::TYPES[28/*Uno.Collections.Dictionary<Fuse.Visual, Uno.Collections.List<Fuse.Navigation.IPagePropertyListener>>*/], (uintptr_t)&::g::Fuse::Navigation::NavigationPageProperty::_watchers_, uFieldFlagsStatic,
        ::TYPES[27/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>*/], (uintptr_t)&::g::Fuse::Navigation::NavigationPageProperty::RootedBindings_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("GetNavigationPage", NULL, (void*)NavigationPageProperty__GetNavigationPage_fn, 0, true, ::TYPES[4/*Fuse.Visual*/], 1, ::TYPES[4/*Fuse.Visual*/]),
        new uFunction("ResetNavigationPage", NULL, (void*)NavigationPageProperty__ResetNavigationPage_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Fuse.Visual*/]),
        new uFunction("SetNavigationPage", NULL, (void*)NavigationPageProperty__SetNavigationPage_fn, 0, true, uVoid_typeof(), 2, ::TYPES[4/*Fuse.Visual*/], ::TYPES[4/*Fuse.Visual*/]));
}

uClassType* NavigationPageProperty_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Navigation.NavigationPageProperty", options);
    type->fp_build_ = NavigationPageProperty_build;
    type->fp_cctor_ = NavigationPageProperty__cctor__fn;
    return type;
}

// internal static void AddPageWatcher(Fuse.Visual where, Fuse.Navigation.IPagePropertyListener callback) :1679
void NavigationPageProperty__AddPageWatcher_fn(::g::Fuse::Visual* where, uObject* callback)
{
    NavigationPageProperty::AddPageWatcher(where, callback);
}

// public static Fuse.Visual GetNavigationPage(Fuse.Visual n) :1733
void NavigationPageProperty__GetNavigationPage_fn(::g::Fuse::Visual* n, ::g::Fuse::Visual** __retval)
{
    *__retval = NavigationPageProperty::GetNavigationPage(n);
}

// private static Uno.Collections.List<Fuse.Navigation.IPagePropertyListener> GetWatcherList(Fuse.Visual where, [bool optional]) :1665
void NavigationPageProperty__GetWatcherList_fn(::g::Fuse::Visual* where, bool* optional, ::g::Uno::Collections::List** __retval)
{
    *__retval = NavigationPageProperty::GetWatcherList(where, *optional);
}

// internal static void RemovePageWatcher(Fuse.Visual where, Fuse.Navigation.IPagePropertyListener callback) :1684
void NavigationPageProperty__RemovePageWatcher_fn(::g::Fuse::Visual* where, uObject* callback)
{
    NavigationPageProperty::RemovePageWatcher(where, callback);
}

// public static void ResetNavigationPage(Fuse.Visual n) :1742
void NavigationPageProperty__ResetNavigationPage_fn(::g::Fuse::Visual* n)
{
    NavigationPageProperty::ResetNavigationPage(n);
}

// public static void SetNavigationPage(Fuse.Visual n, Fuse.Visual page) :1696
void NavigationPageProperty__SetNavigationPage_fn(::g::Fuse::Visual* n, ::g::Fuse::Visual* page)
{
    NavigationPageProperty::SetNavigationPage(n, page);
}

// private static void UpdateListeners(Fuse.Visual node) :1706
void NavigationPageProperty__UpdateListeners_fn(::g::Fuse::Visual* node)
{
    NavigationPageProperty::UpdateListeners(node);
}

uSStrong< ::g::Fuse::PropertyHandle*> NavigationPageProperty::_pageProperty_;
uSStrong< ::g::Uno::Collections::Dictionary*> NavigationPageProperty::_watchers_;
uSStrong< ::g::Uno::Collections::List*> NavigationPageProperty::RootedBindings_;

// internal static void AddPageWatcher(Fuse.Visual where, Fuse.Navigation.IPagePropertyListener callback) [static] :1679
void NavigationPageProperty::AddPageWatcher(::g::Fuse::Visual* where, uObject* callback)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProperty", "AddPageWatcher(Fuse.Visual,Fuse.Navigation.IPagePropertyListener)");
    NavigationPageProperty_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(NavigationPageProperty::GetWatcherList(where, false)), callback);
}

// public static Fuse.Visual GetNavigationPage(Fuse.Visual n) [static] :1733
::g::Fuse::Visual* NavigationPageProperty::GetNavigationPage(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProperty", "GetNavigationPage(Fuse.Visual)");
    NavigationPageProperty_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(n)->Properties())->TryGet(NavigationPageProperty::_pageProperty(), &v))
        return uCast< ::g::Fuse::Visual*>(v, ::TYPES[4/*Fuse.Visual*/]);

    return NULL;
}

// private static Uno.Collections.List<Fuse.Navigation.IPagePropertyListener> GetWatcherList(Fuse.Visual where, [bool optional]) [static] :1665
::g::Uno::Collections::List* NavigationPageProperty::GetWatcherList(::g::Fuse::Visual* where, bool optional)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProperty", "GetWatcherList(Fuse.Visual,[bool])");
    NavigationPageProperty_typeof()->Init();
    bool ret2;
    ::g::Uno::Collections::List* o;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(NavigationPageProperty::_watchers()), where, (void**)(&o), &ret2), ret2))
        return o;

    if (optional)
        return NULL;

    ::g::Uno::Collections::List* q = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[29/*Uno.Collections.List<Fuse.Navigation.IPagePropertyListener>*/]);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(NavigationPageProperty::_watchers()), where, q);
    return q;
}

// internal static void RemovePageWatcher(Fuse.Visual where, Fuse.Navigation.IPagePropertyListener callback) [static] :1684
void NavigationPageProperty::RemovePageWatcher(::g::Fuse::Visual* where, uObject* callback)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProperty", "RemovePageWatcher(Fuse.Visual,Fuse.Navigation.IPagePropertyListener)");
    NavigationPageProperty_typeof()->Init();
    bool ret3;
    bool ret4;
    ::g::Uno::Collections::List* list = NavigationPageProperty::GetWatcherList(where, true);

    if (list == NULL)
        return;

    ::g::Uno::Collections::List__Remove_fn(uPtr(list), callback, &ret3);

    if (list->Count() == 0)
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(NavigationPageProperty::_watchers()), where, &ret4);
}

// public static void ResetNavigationPage(Fuse.Visual n) [static] :1742
void NavigationPageProperty::ResetNavigationPage(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProperty", "ResetNavigationPage(Fuse.Visual)");
    NavigationPageProperty_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Clear(NavigationPageProperty::_pageProperty());
    NavigationPageProperty::UpdateListeners(n);
}

// public static void SetNavigationPage(Fuse.Visual n, Fuse.Visual page) [static] :1696
void NavigationPageProperty::SetNavigationPage(::g::Fuse::Visual* n, ::g::Fuse::Visual* page)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProperty", "SetNavigationPage(Fuse.Visual,Fuse.Visual)");
    NavigationPageProperty_typeof()->Init();
    ::g::Fuse::Visual* old = NavigationPageProperty::GetNavigationPage(n);

    if (old == page)
        return;

    uPtr(uPtr(n)->Properties())->Set(NavigationPageProperty::_pageProperty(), page);
    NavigationPageProperty::UpdateListeners(n);
}

// private static void UpdateListeners(Fuse.Visual node) [static] :1706
void NavigationPageProperty::UpdateListeners(::g::Fuse::Visual* node)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProperty", "UpdateListeners(Fuse.Visual)");
    NavigationPageProperty_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret5;
    uObject* ret6;
    uObject* ret7;

    for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(NavigationPageProperty::RootedBindings()), &ret5), ret5); enum1.MoveNext(::TYPES[30/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>.Enumerator*/]); )
    {
        uObject* binding = enum1.Current(::TYPES[30/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>.Enumerator*/]);
        ::g::Fuse::Navigation::IPageResourceBinding::UpdateSource(uInterface(uPtr(binding), ::TYPES[31/*Fuse.Navigation.IPageResourceBinding*/]));
    }

    while (node != NULL)
    {
        ::g::Uno::Collections::List* list = NavigationPageProperty::GetWatcherList(node, true);

        if (list != NULL)
        {
            ::g::Uno::Collections::List* dup = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[29/*Uno.Collections.List<Fuse.Navigation.IPagePropertyListener>*/]);

            for (int i = 0; i < uPtr(list)->Count(); ++i)
                ::g::Uno::Collections::List__Add_fn(uPtr(dup), (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret6), ret6));

            for (int i1 = 0; i1 < dup->Count(); ++i1)
                ::g::Fuse::Navigation::IPagePropertyListener::PageChanged(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(dup), uCRef<int>(i1), &ret7), ret7)), ::TYPES[32/*Fuse.Navigation.IPagePropertyListener*/]), node);
        }

        node = uPtr(node)->Parent();
    }
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class NavigationPageProxy :1036
// {
static void NavigationPageProxy_build(uType* type)
{
    ::STRINGS[17] = uString::Const("Got an undesired ready event");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno");
    ::STRINGS[18] = uString::Const("OnPageRootingCompleted");
    ::STRINGS[19] = uString::Const("Attempting rooting to null source");
    ::STRINGS[20] = uString::Const("Rooted");
    ::STRINGS[21] = uString::Const("Unable to locate Page");
    ::STRINGS[22] = uString::Const("Something went wrong locating a Navigator");
    ::TYPES[25] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Navigation::IPagePropertyListener_typeof(), offsetof(NavigationPageProxy_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageProxy, _navigation), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageProxy, _pageBind), 0,
        ::TYPES[25/*Uno.Action*/], offsetof(::g::Fuse::Navigation::NavigationPageProxy, _ready), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageProxy, _source), 0,
        ::TYPES[25/*Uno.Action*/], offsetof(::g::Fuse::Navigation::NavigationPageProxy, _unready), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageProxy, _waitRootingCompleted), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageProxy, _Page), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Navigation", NULL, (void*)NavigationPageProxy__get_Navigation_fn, 0, false, ::g::Fuse::Navigation::INavigation_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)NavigationPageProxy__New1_fn, 0, true, type, 2, ::TYPES[25/*Uno.Action*/], ::TYPES[25/*Uno.Action*/]),
        new uFunction("get_Page", NULL, (void*)NavigationPageProxy__get_Page_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("Rooted", NULL, (void*)NavigationPageProxy__Rooted_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("Unrooted", NULL, (void*)NavigationPageProxy__Unrooted_fn, 0, false, uVoid_typeof(), 0));
}

NavigationPageProxy_type* NavigationPageProxy_typeof()
{
    static uSStrong<NavigationPageProxy_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NavigationPageProxy);
    options.TypeSize = sizeof(NavigationPageProxy_type);
    type = (NavigationPageProxy_type*)uClassType::New("Fuse.Navigation.NavigationPageProxy", options);
    type->fp_build_ = NavigationPageProxy_build;
    type->interface0.fp_PageChanged = (void(*)(uObject*, ::g::Fuse::Visual*))NavigationPageProxy__FuseNavigationIPagePropertyListenerPageChanged_fn;
    return type;
}

// public NavigationPageProxy(Uno.Action ready, Uno.Action unready) :1052
void NavigationPageProxy__ctor__fn(NavigationPageProxy* __this, uDelegate* ready, uDelegate* unready)
{
    __this->ctor_(ready, unready);
}

// private void Fuse.Navigation.IPagePropertyListener.PageChanged(Fuse.Visual n) :1133
void NavigationPageProxy__FuseNavigationIPagePropertyListenerPageChanged_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy", "Fuse.Navigation.IPagePropertyListener.PageChanged(Fuse.Visual)");
    ::g::Fuse::Visual* page = ::g::Fuse::Navigation::Navigation::TryFindPage1(__this->_source);

    if (page != __this->Page())
    {
        ::g::Fuse::Visual* source = __this->_source;
        __this->Unrooted();
        __this->Rooted(source);
    }
}

// public Fuse.Navigation.INavigation get_Navigation() :1045
void NavigationPageProxy__get_Navigation_fn(NavigationPageProxy* __this, uObject** __retval)
{
    *__retval = __this->Navigation();
}

// public NavigationPageProxy New(Uno.Action ready, Uno.Action unready) :1052
void NavigationPageProxy__New1_fn(uDelegate* ready, uDelegate* unready, NavigationPageProxy** __retval)
{
    *__retval = NavigationPageProxy::New1(ready, unready);
}

// private void OnPageRootingCompleted() :1096
void NavigationPageProxy__OnPageRootingCompleted_fn(NavigationPageProxy* __this)
{
    __this->OnPageRootingCompleted();
}

// public generated Fuse.Visual get_Page() :1042
void NavigationPageProxy__get_Page_fn(NavigationPageProxy* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Page();
}

// private generated void set_Page(Fuse.Visual value) :1042
void NavigationPageProxy__set_Page_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* value)
{
    __this->Page(value);
}

// public void Rooted(Fuse.Visual source) :1058
void NavigationPageProxy__Rooted_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* source)
{
    __this->Rooted(source);
}

// public void Unrooted() :1110
void NavigationPageProxy__Unrooted_fn(NavigationPageProxy* __this)
{
    __this->Unrooted();
}

// public NavigationPageProxy(Uno.Action ready, Uno.Action unready) [instance] :1052
void NavigationPageProxy::ctor_(uDelegate* ready, uDelegate* unready)
{
    _ready = ready;
    _unready = unready;
}

// public Fuse.Navigation.INavigation get_Navigation() [instance] :1045
uObject* NavigationPageProxy::Navigation()
{
    return _navigation;
}

// private void OnPageRootingCompleted() [instance] :1096
void NavigationPageProxy::OnPageRootingCompleted()
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy", "OnPageRootingCompleted()");

    if ((!_waitRootingCompleted || (Page() == NULL)) || (_source == NULL))
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[17/*"Got an unde...*/], this, ::STRINGS[1/*"/Users/most...*/], 1100, ::STRINGS[18/*"OnPageRooti...*/]);
        return;
    }

    uPtr(Page())->remove_RootingCompleted(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)NavigationPageProxy__OnPageRootingCompleted_fn, this));
    _waitRootingCompleted = false;
    Rooted(_source);
}

// public generated Fuse.Visual get_Page() [instance] :1042
::g::Fuse::Visual* NavigationPageProxy::Page()
{
    return _Page;
}

// private generated void set_Page(Fuse.Visual value) [instance] :1042
void NavigationPageProxy::Page(::g::Fuse::Visual* value)
{
    _Page = value;
}

// public void Rooted(Fuse.Visual source) [instance] :1058
void NavigationPageProxy::Rooted(::g::Fuse::Visual* source)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy", "Rooted(Fuse.Visual)");
    _source = source;

    if (_source == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[19/*"Attempting ...*/], this, ::STRINGS[1/*"/Users/most...*/], 1063, ::STRINGS[20/*"Rooted"*/]);
        return;
    }

    Page(::g::Fuse::Navigation::Navigation::TryFindPage(_source, &_navigation, &_pageBind));

    if (Page() == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[21/*"Unable to l...*/], this, ::STRINGS[1/*"/Users/most...*/], 1070, ::STRINGS[20/*"Rooted"*/]);
        return;
    }

    if (!uPtr(Page())->IsRootingStarted())
    {
        uPtr(Page())->add_RootingCompleted(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)NavigationPageProxy__OnPageRootingCompleted_fn, this));
        _waitRootingCompleted = true;
        _navigation = NULL;
        _pageBind = NULL;
        return;
    }

    if (_navigation == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[22/*"Something w...*/], this, ::STRINGS[1/*"/Users/most...*/], 1087, ::STRINGS[20/*"Rooted"*/]);
        return;
    }

    if (_pageBind != NULL)
        ::g::Fuse::Navigation::NavigationPageProperty::AddPageWatcher(_pageBind, (uObject*)this);

    uPtr(_ready)->InvokeVoid();
}

// public void Unrooted() [instance] :1110
void NavigationPageProxy::Unrooted()
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy", "Unrooted()");

    if (Page() != NULL)
    {
        if (_navigation != NULL)
            uPtr(_unready)->InvokeVoid();

        if (_waitRootingCompleted)
        {
            uPtr(Page())->remove_RootingCompleted(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)NavigationPageProxy__OnPageRootingCompleted_fn, this));
            _waitRootingCompleted = false;
        }
    }

    if (_pageBind != NULL)
        ::g::Fuse::Navigation::NavigationPageProperty::RemovePageWatcher(_pageBind, (uObject*)this);

    Page(NULL);
    _navigation = NULL;
    _source = NULL;
}

// public NavigationPageProxy New(Uno.Action ready, Uno.Action unready) [static] :1052
NavigationPageProxy* NavigationPageProxy::New1(uDelegate* ready, uDelegate* unready)
{
    NavigationPageProxy* obj1 = (NavigationPageProxy*)uNew(NavigationPageProxy_typeof());
    obj1->ctor_(ready, unready);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public struct NavigationPageState :652
// {
static void NavigationPageState_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageState, Progress), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageState, PreviousProgress), 0);
    type->Reflection.SetFields(2,
        new uField("PreviousProgress", 1),
        new uField("Progress", 0));
}

uStructType* NavigationPageState_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(NavigationPageState);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Navigation.NavigationPageState", options);
    type->fp_build_ = NavigationPageState_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal enum NavigationState :786
uEnumType* NavigationState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Seek", 1LL,
        "Transition", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class NavigationStateArgs :792
// {
static void NavigationStateArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Navigation::NavigationState_typeof(), offsetof(::g::Fuse::Navigation::NavigationStateArgs, _State), 0);
}

uType* NavigationStateArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(NavigationStateArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.NavigationStateArgs", options);
    type->fp_build_ = NavigationStateArgs_build;
    type->fp_ctor_ = (void*)NavigationStateArgs__New2_fn;
    return type;
}

// public generated NavigationStateArgs() :792
void NavigationStateArgs__ctor_1_fn(NavigationStateArgs* __this)
{
    __this->ctor_1();
}

// public generated NavigationStateArgs New() :792
void NavigationStateArgs__New2_fn(NavigationStateArgs** __retval)
{
    *__retval = NavigationStateArgs::New2();
}

// public generated Fuse.Navigation.NavigationState get_State() :794
void NavigationStateArgs__get_State_fn(NavigationStateArgs* __this, int* __retval)
{
    *__retval = __this->State();
}

// public generated void set_State(Fuse.Navigation.NavigationState value) :794
void NavigationStateArgs__set_State_fn(NavigationStateArgs* __this, int* value)
{
    __this->State(*value);
}

// public generated NavigationStateArgs() [instance] :792
void NavigationStateArgs::ctor_1()
{
    ctor_();
}

// public generated Fuse.Navigation.NavigationState get_State() [instance] :794
int NavigationStateArgs::State()
{
    return _State;
}

// public generated void set_State(Fuse.Navigation.NavigationState value) [instance] :794
void NavigationStateArgs::State(int value)
{
    _State = value;
}

// public generated NavigationStateArgs New() [static] :792
NavigationStateArgs* NavigationStateArgs::New2()
{
    NavigationStateArgs* obj1 = (NavigationStateArgs*)uNew(NavigationStateArgs_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal delegate void NavigationStateHandler(object page, Fuse.Navigation.NavigationStateArgs args) :797
uDelegateType* NavigationStateHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationStateHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Navigation::NavigationStateArgs_typeof());
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal enum StructuredNavigation.NavigationStructure :3070
uEnumType* StructuredNavigation__NavigationStructure_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.StructuredNavigation.NavigationStructure", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Linear", 0LL,
        "Hierarchical", 1LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public abstract class NavigationTrigger :12
// {
static void NavigationTrigger_build(uType* type)
{
    ::TYPES[25] = ::g::Uno::Action_typeof();
    type->SetBase(::g::Fuse::Triggers::PulseTrigger_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(NavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(NavigationTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(NavigationTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(NavigationTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(NavigationTrigger_type, interface4));
    type->SetFields(29,
        ::g::Fuse::Navigation::NavigationPageProxy_typeof(), offsetof(::g::Fuse::Navigation::NavigationTrigger, _proxy), 0);
}

NavigationTrigger_type* NavigationTrigger_typeof()
{
    static uSStrong<NavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::PulseTrigger_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(NavigationTrigger);
    options.TypeSize = sizeof(NavigationTrigger_type);
    type = (NavigationTrigger_type*)uClassType::New("Fuse.Navigation.NavigationTrigger", options);
    type->fp_build_ = NavigationTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))NavigationTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))NavigationTrigger__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal NavigationTrigger() :14
void NavigationTrigger__ctor_5_fn(NavigationTrigger* __this)
{
    __this->ctor_5();
}

// protected Fuse.Navigation.INavigation get_NavContext() :17
void NavigationTrigger__get_NavContext_fn(NavigationTrigger* __this, uObject** __retval)
{
    *__retval = __this->NavContext();
}

// protected override sealed void OnRooted() :20
void NavigationTrigger__OnRooted_fn(NavigationTrigger* __this)
{
    uStackFrame __("Fuse.Navigation.NavigationTrigger", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_proxy = ::g::Fuse::Navigation::NavigationPageProxy::New1(uDelegate::New(::TYPES[25/*Uno.Action*/], __this, offsetof(NavigationTrigger_type, fp_NavReady)), uDelegate::New(::TYPES[25/*Uno.Action*/], __this, offsetof(NavigationTrigger_type, fp_NavUnready)));
    uPtr(__this->_proxy)->Rooted(__this->Parent());
}

// protected override sealed void OnUnrooted() :30
void NavigationTrigger__OnUnrooted_fn(NavigationTrigger* __this)
{
    uStackFrame __("Fuse.Navigation.NavigationTrigger", "OnUnrooted()");
    uPtr(__this->_proxy)->Unrooted();
    __this->_proxy = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// protected Fuse.Visual get_PageContext() :16
void NavigationTrigger__get_PageContext_fn(NavigationTrigger* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->PageContext();
}

// internal NavigationTrigger() [instance] :14
void NavigationTrigger::ctor_5()
{
    ctor_4();
}

// protected Fuse.Navigation.INavigation get_NavContext() [instance] :17
uObject* NavigationTrigger::NavContext()
{
    uStackFrame __("Fuse.Navigation.NavigationTrigger", "get_NavContext()");
    return uPtr(_proxy)->Navigation();
}

// protected Fuse.Visual get_PageContext() [instance] :16
::g::Fuse::Visual* NavigationTrigger::PageContext()
{
    uStackFrame __("Fuse.Navigation.NavigationTrigger", "get_PageContext()");
    return uPtr(_proxy)->Page();
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public abstract class NavigationTriggerAction :4022
// {
static void NavigationTriggerAction_build(uType* type)
{
    ::STRINGS[23] = uString::Const("No navigation context was found");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    type->SetFields(8,
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::NavigationTriggerAction, _NavigationContext), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_NavigationContext", NULL, (void*)NavigationTriggerAction__get_NavigationContext_fn, 0, false, ::g::Fuse::Navigation::INavigation_typeof(), 0),
        new uFunction("set_NavigationContext", NULL, (void*)NavigationTriggerAction__set_NavigationContext_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::INavigation_typeof()));
}

NavigationTriggerAction_type* NavigationTriggerAction_typeof()
{
    static uSStrong<NavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(NavigationTriggerAction);
    options.TypeSize = sizeof(NavigationTriggerAction_type);
    type = (NavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.NavigationTriggerAction", options);
    type->fp_build_ = NavigationTriggerAction_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))NavigationTriggerAction__Perform_fn;
    return type;
}

// protected generated NavigationTriggerAction() :4022
void NavigationTriggerAction__ctor_2_fn(NavigationTriggerAction* __this)
{
    __this->ctor_2();
}

// public generated Fuse.Navigation.INavigation get_NavigationContext() :4024
void NavigationTriggerAction__get_NavigationContext_fn(NavigationTriggerAction* __this, uObject** __retval)
{
    *__retval = __this->NavigationContext();
}

// public generated void set_NavigationContext(Fuse.Navigation.INavigation value) :4024
void NavigationTriggerAction__set_NavigationContext_fn(NavigationTriggerAction* __this, uObject* value)
{
    __this->NavigationContext(value);
}

// protected override sealed void Perform(Fuse.Node n) :4026
void NavigationTriggerAction__Perform_fn(NavigationTriggerAction* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.NavigationTriggerAction", "Perform(Fuse.Node)");
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[4/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    uObject* ind1 = __this->NavigationContext();
    uObject* ctx = (ind1 != NULL) ? ind1 : (uObject*)::g::Fuse::Navigation::Navigation::TryFind(v);

    if (ctx == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[23/*"No navigati...*/], __this, ::STRINGS[1/*"/Users/most...*/], 4034, ::STRINGS[2/*"Perform"*/]);
        return;
    }

    __this->Perform1(ctx, n);
}

// protected generated NavigationTriggerAction() [instance] :4022
void NavigationTriggerAction::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Navigation.INavigation get_NavigationContext() [instance] :4024
uObject* NavigationTriggerAction::NavigationContext()
{
    return _NavigationContext;
}

// public generated void set_NavigationContext(Fuse.Navigation.INavigation value) [instance] :4024
void NavigationTriggerAction::NavigationContext(uObject* value)
{
    _NavigationContext = value;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal static class NavTriggerUtil :1159
// {
static void NavTriggerUtil_build(uType* type)
{
}

uClassType* NavTriggerUtil_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Navigation.NavTriggerUtil", options);
    type->fp_build_ = NavTriggerUtil_build;
    return type;
}

// public static bool CrossesZero(double a, double b) :1161
void NavTriggerUtil__CrossesZero_fn(double* a, double* b, bool* __retval)
{
    *__retval = NavTriggerUtil::CrossesZero(*a, *b);
}

// public static Fuse.Animations.AnimationVariant Opposite(Fuse.Animations.AnimationVariant v) :1167
void NavTriggerUtil__Opposite_fn(int* v, int* __retval)
{
    *__retval = NavTriggerUtil::Opposite(*v);
}

// public static bool CrossesZero(double a, double b) [static] :1161
bool NavTriggerUtil::CrossesZero(double a, double b)
{
    return ((a < 0.0) && (b > 0.0)) || ((a > 0.0) && (b < 0.0));
}

// public static Fuse.Animations.AnimationVariant Opposite(Fuse.Animations.AnimationVariant v) [static] :1167
int NavTriggerUtil::Opposite(int v)
{
    return (v == 0) ? 1 : 0;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public enum OutletType :703
uEnumType* OutletType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.OutletType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "Outlet", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class VisualNavigation.PageData :4352
// {
static void VisualNavigation__PageData_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation__PageData, Index), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation__PageData, PreviousProgress), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation__PageData, Progress), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation__PageData, _Visual), 0);
    type->Reflection.SetFields(3,
        new uField("Index", 0),
        new uField("PreviousProgress", 1),
        new uField("Progress", 2));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)VisualNavigation__PageData__New1_fn, 0, true, type, 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_Visual", NULL, (void*)VisualNavigation__PageData__get_Visual_fn, 0, false, ::g::Fuse::Visual_typeof(), 0));
}

uType* VisualNavigation__PageData_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(VisualNavigation__PageData);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.VisualNavigation.PageData", options);
    type->fp_build_ = VisualNavigation__PageData_build;
    return type;
}

// public PageData(Fuse.Visual visual) :4360
void VisualNavigation__PageData__ctor__fn(VisualNavigation__PageData* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_(visual);
}

// public PageData New(Fuse.Visual visual) :4360
void VisualNavigation__PageData__New1_fn(::g::Fuse::Visual* visual, VisualNavigation__PageData** __retval)
{
    *__retval = VisualNavigation__PageData::New1(visual);
}

// public generated Fuse.Visual get_Visual() :4354
void VisualNavigation__PageData__get_Visual_fn(VisualNavigation__PageData* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Visual();
}

// private generated void set_Visual(Fuse.Visual value) :4354
void VisualNavigation__PageData__set_Visual_fn(VisualNavigation__PageData* __this, ::g::Fuse::Visual* value)
{
    __this->Visual(value);
}

// public PageData(Fuse.Visual visual) [instance] :4360
void VisualNavigation__PageData::ctor_(::g::Fuse::Visual* visual)
{
    Visual(visual);
}

// public generated Fuse.Visual get_Visual() [instance] :4354
::g::Fuse::Visual* VisualNavigation__PageData::Visual()
{
    return _Visual;
}

// private generated void set_Visual(Fuse.Visual value) [instance] :4354
void VisualNavigation__PageData::Visual(::g::Fuse::Visual* value)
{
    _Visual = value;
}

// public PageData New(Fuse.Visual visual) [static] :4360
VisualNavigation__PageData* VisualNavigation__PageData::New1(::g::Fuse::Visual* visual)
{
    VisualNavigation__PageData* obj1 = (VisualNavigation__PageData*)uNew(VisualNavigation__PageData_typeof());
    obj1->ctor_(visual);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class PageResourceBinding<T> :1492
// {
static void PageResourceBinding_build(uType* type)
{
    ::STRINGS[24] = uString::Const("target");
    ::STRINGS[25] = uString::Const("Visual");
    ::STRINGS[26] = uString::Const("Node");
    ::TYPES[33] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[25] = ::g::Uno::Action_typeof();
    ::TYPES[1] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[34] = ::g::Fuse::Navigation::NavigatedHandler_typeof();
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    type->SetPrecalc(
        type->T(0));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PageResourceBinding_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(PageResourceBinding_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PageResourceBinding_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PageResourceBinding_type, interface3),
        ::g::Fuse::Navigation::IPageResourceBinding_typeof(), offsetof(PageResourceBinding_type, interface4));
    type->SetFields(13,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::PageResourceBinding, _allowNull), 0,
        ::TYPES[4/*Fuse.Visual*/], offsetof(::g::Fuse::Navigation::PageResourceBinding, _currentPage), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::PageResourceBinding, _hasDefault), 0,
        ::TYPES[1/*Fuse.Navigation.INavigation*/], offsetof(::g::Fuse::Navigation::PageResourceBinding, _nav), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Navigation::PageResourceBinding, _Key), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Navigation::PageResourceBinding, _Target), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_AllowNull", NULL, (void*)PageResourceBinding__get_AllowNull_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AllowNull", NULL, (void*)PageResourceBinding__set_AllowNull_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Default", NULL, (void*)PageResourceBinding__get_Default_fn, 0, false, type->T(0), 0),
        new uFunction("set_Default", NULL, (void*)PageResourceBinding__set_Default_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_Key", NULL, (void*)PageResourceBinding__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", type, (void*)PageResourceBinding__New2_fn, 0, true, type, 2, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), ::g::Uno::String_typeof()),
        new uFunction("get_Target", NULL, (void*)PageResourceBinding__get_Target_fn, 0, false, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), 0));
}

PageResourceBinding_type* PageResourceBinding_typeof()
{
    static uSStrong<PageResourceBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 20;
    options.GenericCount = 1;
    options.InterfaceCount = 5;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(PageResourceBinding);
    options.TypeSize = sizeof(PageResourceBinding_type);
    type = (PageResourceBinding_type*)uClassType::New("Fuse.Navigation.PageResourceBinding`1", options);
    type->fp_build_ = PageResourceBinding_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PageResourceBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PageResourceBinding__OnUnrooted_fn;
    type->interface4.fp_UpdateSource = (void(*)(uObject*))PageResourceBinding__FuseNavigationIPageResourceBindingUpdateSource_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public PageResourceBinding(Uno.UX.Property<T> target, string key) :1524
void PageResourceBinding__ctor_3_fn(PageResourceBinding* __this, ::g::Uno::UX::Property1* target, uString* key)
{
    __this->ctor_3(target, key);
}

// private bool Acceptor(object obj) :1645
void PageResourceBinding__Acceptor_fn(PageResourceBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Acceptor(obj);
}

// public bool get_AllowNull() :1515
void PageResourceBinding__get_AllowNull_fn(PageResourceBinding* __this, bool* __retval)
{
    *__retval = __this->AllowNull();
}

// public void set_AllowNull(bool value) :1516
void PageResourceBinding__set_AllowNull_fn(PageResourceBinding* __this, bool* value)
{
    __this->AllowNull(*value);
}

// public T get_Default() :1504
void PageResourceBinding__get_Default_fn(PageResourceBinding* __this, uTRef __retval)
{
    return __retval.Store(__this->_default()), void();
}

// public void set_Default(T value) :1505
void PageResourceBinding__set_Default_fn(PageResourceBinding* __this, void* value)
{
    __this->_default() = value;
    __this->_hasDefault = true;
}

// private void Fuse.Navigation.IPageResourceBinding.UpdateSource() :1563
void PageResourceBinding__FuseNavigationIPageResourceBindingUpdateSource_fn(PageResourceBinding* __this)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "Fuse.Navigation.IPageResourceBinding.UpdateSource()");
    __this->UpdateSource();
}

// private void GotoPage(Fuse.Visual page) :1615
void PageResourceBinding__GotoPage_fn(PageResourceBinding* __this, ::g::Fuse::Visual* page)
{
    __this->GotoPage(page);
}

// public generated string get_Key() :1498
void PageResourceBinding__get_Key_fn(PageResourceBinding* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :1498
void PageResourceBinding__set_Key_fn(PageResourceBinding* __this, uString* value)
{
    __this->Key(value);
}

// private object get_LocalObject() :1586
void PageResourceBinding__get_LocalObject_fn(PageResourceBinding* __this, uObject** __retval)
{
    *__retval = __this->LocalObject();
}

// public PageResourceBinding New(Uno.UX.Property<T> target, string key) :1524
void PageResourceBinding__New2_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, PageResourceBinding** __retval)
{
    *__retval = PageResourceBinding::New2(__type, target, key);
}

// private void OnChanged() :1624
void PageResourceBinding__OnChanged_fn(PageResourceBinding* __this)
{
    __this->OnChanged();
}

// private void OnNavigated(object s, Fuse.Navigation.NavigatedArgs args) :1610
void PageResourceBinding__OnNavigated_fn(PageResourceBinding* __this, uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args)
{
    __this->OnNavigated(s, args);
}

// protected override sealed void OnRooted() :1534
void PageResourceBinding__OnRooted_fn(PageResourceBinding* __this)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(__this->Key(), uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)PageResourceBinding__OnChanged_fn, __this));
    ::g::Uno::Collections::List__Add_fn(uPtr(::g::Fuse::Navigation::NavigationPageProperty::RootedBindings()), (uObject*)__this);
    __this->UpdateSource();
}

// protected override sealed void OnUnrooted() :1575
void PageResourceBinding__OnUnrooted_fn(PageResourceBinding* __this)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "OnUnrooted()");
    bool ret2;
    __this->ReleaseCurrent();
    ::g::Uno::Collections::List__Remove_fn(uPtr(::g::Fuse::Navigation::NavigationPageProperty::RootedBindings()), (uObject*)__this, &ret2);
    ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(__this->Key(), uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)PageResourceBinding__OnChanged_fn, __this));
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void ReleaseCurrent() :1565
void PageResourceBinding__ReleaseCurrent_fn(PageResourceBinding* __this)
{
    __this->ReleaseCurrent();
}

// public generated Uno.UX.Property<T> get_Target() :1495
void PageResourceBinding__get_Target_fn(PageResourceBinding* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :1495
void PageResourceBinding__set_Target_fn(PageResourceBinding* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// private void UpdateSource() :1543
void PageResourceBinding__UpdateSource_fn(PageResourceBinding* __this)
{
    __this->UpdateSource();
}

// public PageResourceBinding(Uno.UX.Property<T> target, string key) [instance] :1524
void PageResourceBinding::ctor_3(::g::Uno::UX::Property1* target, uString* key)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", ".ctor(Uno.UX.Property<T>,string)");
    ctor_2();

    if (target == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[24/*"target"*/]));

    Target(target);
    Key(key);
}

// private bool Acceptor(object obj) [instance] :1645
bool PageResourceBinding::Acceptor(uObject* obj)
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
    };
    return uIs(obj, __types[0]);
}

// public bool get_AllowNull() [instance] :1515
bool PageResourceBinding::AllowNull()
{
    return _allowNull;
}

// public void set_AllowNull(bool value) [instance] :1516
void PageResourceBinding::AllowNull(bool value)
{
    _allowNull = true;
    _hasDefault = true;
}

// private void GotoPage(Fuse.Visual page) [instance] :1615
void PageResourceBinding::GotoPage(::g::Fuse::Visual* page)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "GotoPage(Fuse.Visual)");

    if (page == _currentPage)
        return;

    _currentPage = page;
    OnChanged();
}

// public generated string get_Key() [instance] :1498
uString* PageResourceBinding::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :1498
void PageResourceBinding::Key(uString* value)
{
    _Key = value;
}

// private object get_LocalObject() [instance] :1586
uObject* PageResourceBinding::LocalObject()
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "get_LocalObject()");
    ::g::Fuse::Node* n = Parent();

    while (n != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[4/*Fuse.Visual*/]);

        if (v != NULL)
        {
            ::g::Fuse::Visual* page = ::g::Fuse::Navigation::NavigationPageProperty::GetNavigationPage(v);

            if (page != NULL)
                return page;

            uObject* navi = ::g::Fuse::Navigation::Navigation::GetLocalNavigation(v);

            if (navi != NULL)
                return navi;
        }

        n = uPtr(n)->ContextParent();
    }

    return NULL;
}

// private void OnChanged() [instance] :1624
void PageResourceBinding::OnChanged()
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
    };
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "OnChanged()");
    ::g::Fuse::Visual* page = _currentPage;

    if (page != NULL)
    {
        if ((::g::Uno::String::op_Equality(Key(), ::STRINGS[25/*"Visual"*/]) || ::g::Uno::String::op_Equality(Key(), ::STRINGS[26/*"Node"*/])) && uIs(page, __types[0]))
            uPtr(Target())->Set_ex(uUnboxAny(__types[0], page), NULL);
        else
        {
            uObject* resource;

            if (uPtr(page)->TryGetResource(Key(), uDelegate::New(::TYPES[33/*Uno.Predicate<object>*/], (void*)PageResourceBinding__Acceptor_fn, this), &resource))
                uPtr(Target())->Set_ex(uUnboxAny(__types[0], resource), NULL);
            else if (_hasDefault)
                uPtr(Target())->Set_ex(_default(), NULL);
        }
    }
}

// private void OnNavigated(object s, Fuse.Navigation.NavigatedArgs args) [instance] :1610
void PageResourceBinding::OnNavigated(uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "OnNavigated(object,Fuse.Navigation.NavigatedArgs)");
    GotoPage(uPtr(args)->NewVisual());
}

// private void ReleaseCurrent() [instance] :1565
void PageResourceBinding::ReleaseCurrent()
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "ReleaseCurrent()");

    if (_nav != NULL)
    {
        ::g::Fuse::Navigation::INavigation::remove_Navigated(uInterface(uPtr(_nav), ::TYPES[1/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[34/*Fuse.Navigation.NavigatedHandler*/], (void*)PageResourceBinding__OnNavigated_fn, this));
        _nav = NULL;
    }

    _currentPage = NULL;
}

// public generated Uno.UX.Property<T> get_Target() [instance] :1495
::g::Uno::UX::Property1* PageResourceBinding::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :1495
void PageResourceBinding::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}

// private void UpdateSource() [instance] :1543
void PageResourceBinding::UpdateSource()
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "UpdateSource()");
    uObject* local = LocalObject();

    if ((local == _nav) || (local == _currentPage))
        return;

    ReleaseCurrent();
    _nav = uAs<uObject*>(local, ::TYPES[1/*Fuse.Navigation.INavigation*/]);
    _currentPage = uAs< ::g::Fuse::Visual*>(local, ::TYPES[4/*Fuse.Visual*/]);

    if (_nav != NULL)
    {
        ::g::Fuse::Navigation::INavigation::add_Navigated(uInterface(uPtr(_nav), ::TYPES[1/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[34/*Fuse.Navigation.NavigatedHandler*/], (void*)PageResourceBinding__OnNavigated_fn, this));
        GotoPage(::g::Fuse::Navigation::INavigation::ActivePage(uInterface(uPtr(_nav), ::TYPES[1/*Fuse.Navigation.INavigation*/])));
    }
    else
        OnChanged();
}

// public PageResourceBinding New(Uno.UX.Property<T> target, string key) [static] :1524
PageResourceBinding* PageResourceBinding::New2(uType* __type, ::g::Uno::UX::Property1* target, uString* key)
{
    PageResourceBinding* obj1 = (PageResourceBinding*)uNew(__type);
    obj1->ctor_3(target, key);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class Route :1765
// {
static void Route_build(uType* type)
{
    ::STRINGS[27] = uString::Const("?");
    ::STRINGS[28] = uString::Const("/");
    ::STRINGS[29] = uString::Const("count can't be < 0");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno");
    ::STRINGS[30] = uString::Const("SubDepth");
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Navigation::Route, Parameter), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Navigation::Route, Path), 0,
        type, offsetof(::g::Fuse::Navigation::Route, SubRoute), 0);
    type->Reflection.SetFields(3,
        new uField("Parameter", 0),
        new uField("Path", 1),
        new uField("SubRoute", 2));
    type->Reflection.SetFunctions(3,
        new uFunction("Append", NULL, (void*)Route__Append_fn, 0, false, type, 1, type),
        new uFunction("get_Length", NULL, (void*)Route__get_Length_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Route__New1_fn, 0, true, type, 3, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), type));
}

uType* Route_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Route);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.Route", options);
    type->fp_build_ = Route_build;
    return type;
}

// public Route(string path, [string parameter], [Fuse.Navigation.Route subRoute]) :1782
void Route__ctor__fn(Route* __this, uString* path, uString* parameter, Route* subRoute)
{
    __this->ctor_(path, parameter, subRoute);
}

// public Fuse.Navigation.Route Append(Fuse.Navigation.Route subRoute) :1800
void Route__Append_fn(Route* __this, Route* subRoute, Route** __retval)
{
    *__retval = __this->Append(subRoute);
}

// internal string Format() :1824
void Route__Format_fn(Route* __this, uString** __retval)
{
    *__retval = __this->Format();
}

// public int get_Length() :1792
void Route__get_Length_fn(Route* __this, int* __retval)
{
    *__retval = __this->Length();
}

// public Route New(string path, [string parameter], [Fuse.Navigation.Route subRoute]) :1782
void Route__New1_fn(uString* path, uString* parameter, Route* subRoute, Route** __retval)
{
    *__retval = Route::New1(path, parameter, subRoute);
}

// internal Fuse.Navigation.Route SubDepth(int count) :1916
void Route__SubDepth_fn(Route* __this, int* count, Route** __retval)
{
    *__retval = __this->SubDepth(*count);
}

// internal Fuse.Navigation.Route Up() :1812
void Route__Up_fn(Route* __this, Route** __retval)
{
    *__retval = __this->Up();
}

// public Route(string path, [string parameter], [Fuse.Navigation.Route subRoute]) [instance] :1782
void Route::ctor_(uString* path, uString* parameter, Route* subRoute)
{
    Path = path;
    Parameter = parameter;
    SubRoute = subRoute;
}

// public Fuse.Navigation.Route Append(Fuse.Navigation.Route subRoute) [instance] :1800
Route* Route::Append(Route* subRoute)
{
    uStackFrame __("Fuse.Navigation.Route", "Append(Fuse.Navigation.Route)");
    Route* sub = (SubRoute == NULL) ? subRoute : (Route*)uPtr(SubRoute)->Append(subRoute);
    return Route::New1(Path, Parameter, sub);
}

// internal string Format() [instance] :1824
uString* Route::Format()
{
    uStackFrame __("Fuse.Navigation.Route", "Format()");
    uString* q = Path;

    if (::g::Uno::String::op_Inequality(Parameter, NULL))
        q = ::g::Uno::String::op_Addition2(q, ::g::Uno::String::op_Addition2(::STRINGS[27/*"?"*/], Parameter));

    if (SubRoute != NULL)
        q = ::g::Uno::String::op_Addition2(q, ::g::Uno::String::op_Addition2(::STRINGS[28/*"/"*/], uPtr(SubRoute)->Format()));

    return q;
}

// public int get_Length() [instance] :1792
int Route::Length()
{
    uStackFrame __("Fuse.Navigation.Route", "get_Length()");

    if (SubRoute == NULL)
        return 1;
    else
        return uPtr(SubRoute)->Length() + 1;
}

// internal Fuse.Navigation.Route SubDepth(int count) [instance] :1916
Route* Route::SubDepth(int count)
{
    uStackFrame __("Fuse.Navigation.Route", "SubDepth(int)");

    if (count < 0)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[29/*"count can't...*/], this, ::STRINGS[1/*"/Users/most...*/], 1920, ::STRINGS[30/*"SubDepth"*/]);
        return NULL;
    }

    if (count == 0)
        return this;

    if (SubRoute == NULL)
        return NULL;

    return uPtr(SubRoute)->SubDepth(count - 1);
}

// internal Fuse.Navigation.Route Up() [instance] :1812
Route* Route::Up()
{
    uStackFrame __("Fuse.Navigation.Route", "Up()");

    if (SubRoute == NULL)
        return this;
    else if (uPtr(SubRoute)->SubRoute == NULL)
        return Route::New1(Path, Parameter, NULL);

    return Route::New1(Path, Parameter, uPtr(SubRoute)->Up());
}

// public Route New(string path, [string parameter], [Fuse.Navigation.Route subRoute]) [static] :1782
Route* Route::New1(uString* path, uString* parameter, Route* subRoute)
{
    Route* obj2 = (Route*)uNew(Route_typeof());
    obj2->ctor_(path, parameter, subRoute);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public partial sealed class Router :1942
// {
// static Router() :1944
static void Router__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[36/*Fuse.Scripting.ScriptMember[]*/], 8, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[37/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.Router>*/], ::STRINGS[31/*"bookmark"*/], uDelegate::New(::TYPES[38/*Uno.Action<Fuse.Scripting.Context, Fuse.Navigation.Router, object[]>*/], (void*)Router__Bookmark_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[37/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.Router>*/], ::STRINGS[32/*"getRoute"*/], uDelegate::New(::TYPES[38/*Uno.Action<Fuse.Scripting.Context, Fuse.Navigation.Router, object[]>*/], (void*)Router__GetRoute_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[37/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.Router>*/], ::STRINGS[33/*"goBack"*/], uDelegate::New(::TYPES[38/*Uno.Action<Fuse.Scripting.Context, Fuse.Navigation.Router, object[]>*/], (void*)Router__GoBack1_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[37/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.Router>*/], ::STRINGS[34/*"goto"*/], uDelegate::New(::TYPES[38/*Uno.Action<Fuse.Scripting.Context, Fuse.Navigation.Router, object[]>*/], (void*)Router__Goto1_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[37/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.Router>*/], ::STRINGS[35/*"gotoRelative"*/], uDelegate::New(::TYPES[38/*Uno.Action<Fuse.Scripting.Context, Fuse.Navigation.Router, object[]>*/], (void*)Router__GotoRelative_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[37/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.Router>*/], ::STRINGS[36/*"modify"*/], uDelegate::New(::TYPES[38/*Uno.Action<Fuse.Scripting.Context, Fuse.Navigation.Router, object[]>*/], (void*)Router__Modify1_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[37/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.Router>*/], ::STRINGS[37/*"push"*/], uDelegate::New(::TYPES[38/*Uno.Action<Fuse.Scripting.Context, Fuse.Navigation.Router, object[]>*/], (void*)Router__Push1_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[37/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.Router>*/], ::STRINGS[38/*"pushRelative"*/], uDelegate::New(::TYPES[38/*Uno.Action<Fuse.Scripting.Context, Fuse.Navigation.Router, object[]>*/], (void*)Router__PushRelative_fn), 2)));
}

static void Router_build(uType* type)
{
    ::STRINGS[31] = uString::Const("bookmark");
    ::STRINGS[32] = uString::Const("getRoute");
    ::STRINGS[33] = uString::Const("goBack");
    ::STRINGS[34] = uString::Const("goto");
    ::STRINGS[35] = uString::Const("gotoRelative");
    ::STRINGS[36] = uString::Const("modify");
    ::STRINGS[37] = uString::Const("push");
    ::STRINGS[38] = uString::Const("pushRelative");
    ::STRINGS[39] = uString::Const("`Router.bookmark` takes one argument");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno");
    ::STRINGS[40] = uString::Const("Bookmark");
    ::STRINGS[41] = uString::Const("`Router.bookmark` should be passed an object");
    ::STRINGS[9] = uString::Const("name");
    ::STRINGS[42] = uString::Const("relative");
    ::STRINGS[43] = uString::Const("Could not find an outlet from the `relative` node");
    ::STRINGS[44] = uString::Const("path");
    ::STRINGS[45] = uString::Const("`path` should be an array");
    ::STRINGS[46] = uString::Const("Unrecognized argument: ");
    ::STRINGS[47] = uString::Const("A `name` is required for the bookmark");
    ::STRINGS[48] = uString::Const("Router.gotoRelative(): requires 1+ parameters");
    ::STRINGS[49] = uString::Const("GetRelative");
    ::STRINGS[50] = uString::Const("Router.gotoRelative(): did not find an outlet from the provided Node");
    ::STRINGS[51] = uString::Const("Router.getRoute(): must provide exactly 1 argument.");
    ::STRINGS[52] = uString::Const("GetRoute");
    ::STRINGS[53] = uString::Const("Router.getRoute(): argument must be a function.");
    ::STRINGS[54] = uString::Const("Router.goBack takes no parameters");
    ::STRINGS[55] = uString::Const("GoBack");
    ::STRINGS[56] = uString::Const("Router.goto(): invalid route provided");
    ::STRINGS[57] = uString::Const("Goto");
    ::STRINGS[58] = uString::Const("PrepareBack does not support an explicit route");
    ::STRINGS[59] = uString::Const("Modify");
    ::STRINGS[60] = uString::Const("There is no history for PrepareBack");
    ::STRINGS[61] = uString::Const("`Router.modify` takes one argument");
    ::STRINGS[62] = uString::Const("`Router.modify` should be passed an object");
    ::STRINGS[63] = uString::Const("how");
    ::STRINGS[64] = uString::Const("transition");
    ::STRINGS[65] = uString::Const("Unknown bookmark: ");
    ::STRINGS[66] = uString::Const("Cannot pop() - history is empty");
    ::STRINGS[67] = uString::Const("Pop");
    ::STRINGS[68] = uString::Const("Invalid outlet depth in prepare progress");
    ::STRINGS[69] = uString::Const("SetPrepareProgress");
    ::STRINGS[70] = uString::Const("Unable to navigate to route: ");
    ::STRINGS[71] = uString::Const("SetRoute");
    ::STRINGS[72] = uString::Const("No router outlet found to handle route: ");
    ::STRINGS[73] = uString::Const("SetRouteImpl");
    ::STRINGS[74] = uString::Const("SubRoute requested but outlet has no active path: ");
    ::STRINGS[75] = uString::Const("Route parameter must be serializeable, it contains reference loops or is too large");
    ::STRINGS[76] = uString::Const("ValidateParameter");
    ::STRINGS[77] = uString::Const("Route parameter must be serializeable, cannot contain Observables.");
    ::STRINGS[78] = uString::Const("Route parameter must be serializeable, cannot contain functions.");
    ::TYPES[35] = ::g::Uno::Type_typeof();
    ::TYPES[36] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[37] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[38] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), NULL);
    ::TYPES[39] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Navigation::Route_typeof(), NULL);
    ::TYPES[40] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::Route_typeof(), NULL);
    ::TYPES[41] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[42] = ::g::Fuse::Scripting::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[43] = ::g::Fuse::Node_typeof();
    ::TYPES[44] = ::g::Fuse::Scripting::IArray_typeof();
    ::TYPES[45] = ::g::Fuse::Navigation::IRouterOutlet_typeof();
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    ::TYPES[20] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[43/*Fuse.Node*/], NULL);
    ::TYPES[21] = ::g::Uno::Collections::IList_typeof()->MakeType(::TYPES[43/*Fuse.Node*/], NULL);
    ::TYPES[46] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[25] = ::g::Uno::Action_typeof();
    ::TYPES[47] = ::g::Fuse::Scripting::Marshal_typeof()->MakeMethod(0/*ToType<Fuse.Navigation.ModifyRouteHow>*/, ::g::Fuse::Navigation::ModifyRouteHow_typeof(), NULL);
    ::TYPES[48] = ::g::Fuse::Scripting::Marshal_typeof()->MakeMethod(0/*ToType<Fuse.Navigation.NavigationGotoMode>*/, ::g::Fuse::Navigation::NavigationGotoMode_typeof(), NULL);
    ::TYPES[49] = ::g::Fuse::Input::KeyPressedHandler_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[50] = ::g::Uno::String_typeof();
    ::TYPES[51] = ::TYPES[4/*Fuse.Visual*/]->MakeMethod(3/*FirstChild<Fuse.Navigation.Router>*/, type, NULL);
    ::TYPES[52] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[53] = ::g::Fuse::Navigation::HistoryChangedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Router_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Router_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Router_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Router_type, interface3),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(Router_type, interface4));
    type->SetFields(13,
        ::g::Fuse::Navigation::BackButtonAction_typeof(), offsetof(::g::Fuse::Navigation::Router, _backButtonAction), 0,
        ::TYPES[40/*Uno.Collections.List<Fuse.Navigation.Route>*/], offsetof(::g::Fuse::Navigation::Router, _history), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::Router, _isMasterRouter), 0,
        ::g::Fuse::Navigation::Route_typeof(), offsetof(::g::Fuse::Navigation::Router, _prepareCurrent), 0,
        ::g::Fuse::Navigation::Route_typeof(), offsetof(::g::Fuse::Navigation::Router, _prepareNext), 0,
        ::g::Fuse::Navigation::RoutingOperation_typeof(), offsetof(::g::Fuse::Navigation::Router, _prepareOperation), 0,
        ::TYPES[45/*Fuse.Navigation.IRouterOutlet*/], offsetof(::g::Fuse::Navigation::Router, _prepareOutlet), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::Router, _prepareProgress), 0,
        ::TYPES[39/*Uno.Collections.Dictionary<string, Fuse.Navigation.Route>*/], offsetof(::g::Fuse::Navigation::Router, Bookmarks), 0,
        ::TYPES[53/*Fuse.Navigation.HistoryChangedHandler*/], offsetof(::g::Fuse::Navigation::Router, HistoryChanged1), 0,
        ::g::Fuse::Navigation::Route_typeof(), (uintptr_t)&::g::Fuse::Navigation::Router::_masterCurrent_, uFieldFlagsStatic,
        ::TYPES[40/*Uno.Collections.List<Fuse.Navigation.Route>*/], (uintptr_t)&::g::Fuse::Navigation::Router::_masterHistory_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(14,
        new uFunction("get_BackButtonAction", NULL, (void*)Router__get_BackButtonAction_fn, 0, false, ::g::Fuse::Navigation::BackButtonAction_typeof(), 0),
        new uFunction("set_BackButtonAction", NULL, (void*)Router__set_BackButtonAction_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::BackButtonAction_typeof()),
        new uFunction("get_CanGoBack", NULL, (void*)Router__get_CanGoBack_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("GetCurrentRoute", NULL, (void*)Router__GetCurrentRoute_fn, 0, false, ::g::Fuse::Navigation::Route_typeof(), 0),
        new uFunction("GoBack", NULL, (void*)Router__GoBack_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Goto", NULL, (void*)Router__Goto_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::Route_typeof()),
        new uFunction("add_HistoryChanged", NULL, (void*)Router__add_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[53/*Fuse.Navigation.HistoryChangedHandler*/]),
        new uFunction("remove_HistoryChanged", NULL, (void*)Router__remove_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[53/*Fuse.Navigation.HistoryChangedHandler*/]),
        new uFunction("get_IsMasterRouter", NULL, (void*)Router__get_IsMasterRouter_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsMasterRouter", NULL, (void*)Router__set_IsMasterRouter_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)Router__New2_fn, 0, true, type, 0),
        new uFunction("get_PrepareProgress", NULL, (void*)Router__get_PrepareProgress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_PrepareProgress", NULL, (void*)Router__set_PrepareProgress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Push", NULL, (void*)Router__Push_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::Route_typeof()));
}

Router_type* Router_typeof()
{
    static uSStrong<Router_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node_typeof();
    options.FieldCount = 25;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Router);
    options.TypeSize = sizeof(Router_type);
    type = (Router_type*)uClassType::New("Fuse.Navigation.Router", options);
    type->fp_build_ = Router_build;
    type->fp_ctor_ = (void*)Router__New2_fn;
    type->fp_cctor_ = Router__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Router__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Router__OnUnrooted_fn;
    type->interface4.fp_GoForward = (void(*)(uObject*))Router__FuseNavigationIBaseNavigationGoForward_fn;
    type->interface4.fp_get_CanGoForward = (void(*)(uObject*, bool*))Router__FuseNavigationIBaseNavigationget_CanGoForward_fn;
    type->interface4.fp_GoBack = (void(*)(uObject*))Router__GoBack_fn;
    type->interface4.fp_get_CanGoBack = (void(*)(uObject*, bool*))Router__get_CanGoBack_fn;
    type->interface4.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))Router__add_HistoryChanged_fn;
    type->interface4.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))Router__remove_HistoryChanged_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Router() :1942
void Router__ctor_2_fn(Router* __this)
{
    __this->ctor_2();
}

// public Fuse.Navigation.BackButtonAction get_BackButtonAction() :2558
void Router__get_BackButtonAction_fn(Router* __this, int* __retval)
{
    *__retval = __this->BackButtonAction();
}

// public void set_BackButtonAction(Fuse.Navigation.BackButtonAction value) :2559
void Router__set_BackButtonAction_fn(Router* __this, int* value)
{
    __this->BackButtonAction(*value);
}

// private static void Bookmark(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :2205
void Router__Bookmark_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::Bookmark(c, r, args);
}

// public bool get_CanGoBack() :2669
void Router__get_CanGoBack_fn(Router* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// private void ClearPrepared() :2758
void Router__ClearPrepared_fn(Router* __this)
{
    __this->ClearPrepared();
}

// private Fuse.Navigation.IRouterOutlet FindOutletDown(Fuse.Node active) :2904
void Router__FindOutletDown_fn(Router* __this, ::g::Fuse::Node* active, uObject** __retval)
{
    *__retval = __this->FindOutletDown(active);
}

// private Fuse.Navigation.IRouterOutlet FindOutletUp(Fuse.Node active) :2926
void Router__FindOutletUp_fn(Router* __this, ::g::Fuse::Node* active, uObject** __retval)
{
    *__retval = __this->FindOutletUp(active);
}

// private void FinishPrepared() :2731
void Router__FinishPrepared_fn(Router* __this)
{
    __this->FinishPrepared();
}

// private bool Fuse.Navigation.IBaseNavigation.get_CanGoForward() :2955
void Router__FuseNavigationIBaseNavigationget_CanGoForward_fn(Router* __this, bool* __retval)
{
    return *__retval = false, void();
}

// private void Fuse.Navigation.IBaseNavigation.GoForward() :2954
void Router__FuseNavigationIBaseNavigationGoForward_fn(Router* __this)
{
}

// private Fuse.Navigation.Route GetCurrent(Fuse.Visual from, [Fuse.Navigation.IRouterOutlet to]) :2874
void Router__GetCurrent_fn(Router* __this, ::g::Fuse::Visual* from, uObject* to, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = __this->GetCurrent(from, to);
}

// public Fuse.Navigation.Route GetCurrentRoute() :2583
void Router__GetCurrentRoute_fn(Router* __this, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = __this->GetCurrentRoute();
}

// private int GetOutletDepth(Fuse.Navigation.IRouterOutlet outlet) :2889
void Router__GetOutletDepth_fn(Router* __this, uObject* outlet, int* __retval)
{
    *__retval = __this->GetOutletDepth(outlet);
}

// private static Fuse.Navigation.Route GetRelative(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :2029
void Router__GetRelative_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = Router::GetRelative(c, r, args);
}

// private static void GetRoute(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :2360
void Router__GetRoute_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::GetRoute(c, r, args);
}

// public void GoBack() :2661
void Router__GoBack_fn(Router* __this)
{
    __this->GoBack();
}

// private static void GoBack(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :2084
void Router__GoBack1_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::GoBack1(c, r, args);
}

// public void Goto(Fuse.Navigation.Route route) :2589
void Router__Goto_fn(Router* __this, ::g::Fuse::Navigation::Route* route)
{
    __this->Goto(route);
}

// private static void Goto(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :1971
void Router__Goto1_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::Goto1(c, r, args);
}

// private void GotoMasterRoute() :2569
void Router__GotoMasterRoute_fn(Router* __this)
{
    __this->GotoMasterRoute();
}

// private static void GotoRelative(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :2007
void Router__GotoRelative_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::GotoRelative(c, r, args);
}

// private void GoUp() :2681
void Router__GoUp_fn(Router* __this)
{
    __this->GoUp();
}

// private bool HasOtherRouter(Fuse.Visual n) :2943
void Router__HasOtherRouter_fn(Router* __this, ::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = __this->HasOtherRouter(n);
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :2957
void Router__add_HistoryChanged_fn(Router* __this, uDelegate* value)
{
    __this->add_HistoryChanged(value);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :2957
void Router__remove_HistoryChanged_fn(Router* __this, uDelegate* value)
{
    __this->remove_HistoryChanged(value);
}

// public bool get_IsMasterRouter() :2539
void Router__get_IsMasterRouter_fn(Router* __this, bool* __retval)
{
    *__retval = __this->IsMasterRouter();
}

// public void set_IsMasterRouter(bool value) :2540
void Router__set_IsMasterRouter_fn(Router* __this, bool* value)
{
    __this->IsMasterRouter(*value);
}

// internal void Modify(Fuse.Navigation.ModifyRouteHow how, Fuse.Navigation.Route route, Fuse.Navigation.NavigationGotoMode mode) :2600
void Router__Modify_fn(Router* __this, int* how, ::g::Fuse::Navigation::Route* route, int* mode)
{
    __this->Modify(*how, route, *mode);
}

// private static void Modify(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :2124
void Router__Modify1_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::Modify1(c, r, args);
}

// public generated Router New() :1942
void Router__New2_fn(Router** __retval)
{
    *__retval = Router::New2();
}

// private void OnHistoryChanged(Fuse.Navigation.Route current) :2958
void Router__OnHistoryChanged_fn(Router* __this, ::g::Fuse::Navigation::Route* current)
{
    __this->OnHistoryChanged(current);
}

// private void OnKeyPressed(object sender, Fuse.Input.KeyEventArgs args) :2543
void Router__OnKeyPressed_fn(Router* __this, uObject* sender, ::g::Fuse::Input::KeyEventArgs* args)
{
    __this->OnKeyPressed(sender, args);
}

// protected override sealed void OnRooted() :2493
void Router__OnRooted_fn(Router* __this)
{
    uStackFrame __("Fuse.Navigation.Router", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    uPtr(__this->_history)->Clear();
    ::g::Fuse::VisualEvent__AddGlobalHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyPressed()), uDelegate::New(::TYPES[49/*Fuse.Input.KeyPressedHandler*/], (void*)Router__OnKeyPressed_fn, __this));

    if (__this->IsMasterRouter())
    {
        ::g::Fuse::Visual* n = __this->Parent();
        bool root = true;

        while (n != NULL)
        {
            if (__this->HasOtherRouter(n))
            {
                root = false;
                break;
            }

            n = uPtr(n)->Parent();
        }

        if (root)
        {
            if (Router::_masterHistory() != NULL)
                __this->_history = Router::_masterHistory();
            else
                Router::_masterHistory() = __this->_history;

            ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)Router__GotoMasterRoute_fn, __this), -1, 0);
        }
    }
}

// protected override sealed void OnUnrooted() :2527
void Router__OnUnrooted_fn(Router* __this)
{
    uStackFrame __("Fuse.Navigation.Router", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveGlobalHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyPressed()), uDelegate::New(::TYPES[49/*Fuse.Input.KeyPressedHandler*/], (void*)Router__OnKeyPressed_fn, __this));
}

// private void OnUpFromRoot() :2696
void Router__OnUpFromRoot_fn(Router* __this)
{
    __this->OnUpFromRoot();
}

// private static Fuse.Navigation.Route ParseRoute(Fuse.Scripting.Context c, Fuse.Scripting.IArray path) :2322
void Router__ParseRoute_fn(::g::Fuse::Scripting::Context* c, uObject* path, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = Router::ParseRoute(c, path);
}

// private static Fuse.Navigation.Route ParseRoute(Fuse.Scripting.Context c, object[] args, [int pos]) :2330
void Router__ParseRoute1_fn(::g::Fuse::Scripting::Context* c, uArray* args, int* pos, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = Router::ParseRoute1(c, args, *pos);
}

// private void Pop() :2702
void Router__Pop_fn(Router* __this)
{
    __this->Pop();
}

// public double get_PrepareProgress() :2765
void Router__get_PrepareProgress_fn(Router* __this, double* __retval)
{
    *__retval = __this->PrepareProgress();
}

// public void set_PrepareProgress(double value) :2766
void Router__set_PrepareProgress_fn(Router* __this, double* value)
{
    __this->PrepareProgress(*value);
}

// private void PrepareRoute(Fuse.Navigation.Route r, Fuse.Navigation.RoutingOperation operation) :2722
void Router__PrepareRoute_fn(Router* __this, ::g::Fuse::Navigation::Route* r, int* operation)
{
    __this->PrepareRoute(r, *operation);
}

// public void Push(Fuse.Navigation.Route route) :2595
void Router__Push_fn(Router* __this, ::g::Fuse::Navigation::Route* route)
{
    __this->Push(route);
}

// private static void Push(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :2070
void Router__Push1_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::Push1(c, r, args);
}

// private static void PushRelative(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :2022
void Router__PushRelative_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::PushRelative(c, r, args);
}

// private void SetPrepareProgress(double value) :2769
void Router__SetPrepareProgress_fn(Router* __this, double* value)
{
    __this->SetPrepareProgress(*value);
}

// private Fuse.Navigation.Route SetRoute(Fuse.Navigation.Route r, Fuse.Navigation.NavigationGotoMode gotoMode, Fuse.Navigation.RoutingOperation operation, [bool userRequest]) :2788
void Router__SetRoute_fn(Router* __this, ::g::Fuse::Navigation::Route* r, int* gotoMode, int* operation, bool* userRequest, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = __this->SetRoute(r, *gotoMode, *operation, *userRequest);
}

// private Fuse.Navigation.Route SetRouteImpl(Fuse.Visual root, Fuse.Navigation.Route r, Fuse.Navigation.NavigationGotoMode gotoMode, Fuse.Navigation.RoutingOperation operation, Fuse.Navigation.IRouterOutlet& majorChange) :2816
void Router__SetRouteImpl_fn(Router* __this, ::g::Fuse::Visual* root, ::g::Fuse::Navigation::Route* r, int* gotoMode, int* operation, uObject** majorChange, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = __this->SetRouteImpl(root, r, *gotoMode, *operation, majorChange);
}

// internal static Fuse.Navigation.Router TryFindRouter(Fuse.Node n) :2971
void Router__TryFindRouter_fn(::g::Fuse::Node* n, Router** __retval)
{
    *__retval = Router::TryFindRouter(n);
}

// private static bool ValidateParameter(Fuse.Scripting.Context c, object arg, int depth) :2279
void Router__ValidateParameter_fn(::g::Fuse::Scripting::Context* c, uObject* arg, int* depth, bool* __retval)
{
    *__retval = Router::ValidateParameter(c, arg, *depth);
}

uSStrong< ::g::Fuse::Navigation::Route*> Router::_masterCurrent_;
uSStrong< ::g::Uno::Collections::List*> Router::_masterHistory_;

// public generated Router() [instance] :1942
void Router::ctor_2()
{
    _isMasterRouter = true;
    Bookmarks = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[39/*Uno.Collections.Dictionary<string, Fuse.Navigation.Route>*/]));
    _history = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[40/*Uno.Collections.List<Fuse.Navigation.Route>*/]));
    _prepareProgress = 0.0;
    ctor_1();
}

// public Fuse.Navigation.BackButtonAction get_BackButtonAction() [instance] :2558
int Router::BackButtonAction()
{
    return _backButtonAction;
}

// public void set_BackButtonAction(Fuse.Navigation.BackButtonAction value) [instance] :2559
void Router::BackButtonAction(int value)
{
    _backButtonAction = value;
}

// public bool get_CanGoBack() [instance] :2669
bool Router::CanGoBack()
{
    uStackFrame __("Fuse.Navigation.Router", "get_CanGoBack()");
    return uPtr(_history)->Count() > 0;
}

// private void ClearPrepared() [instance] :2758
void Router::ClearPrepared()
{
    _prepareOutlet = NULL;
}

// private Fuse.Navigation.IRouterOutlet FindOutletDown(Fuse.Node active) [instance] :2904
uObject* Router::FindOutletDown(::g::Fuse::Node* active)
{
    uStackFrame __("Fuse.Navigation.Router", "FindOutletDown(Fuse.Node)");
    ::g::Fuse::Node* ret3;
    uObject* ro = uAs<uObject*>(active, ::TYPES[45/*Fuse.Navigation.IRouterOutlet*/]);

    if ((ro != NULL) && ((::g::Fuse::Navigation::IRouterOutlet::Type(uInterface(uPtr(ro), ::TYPES[45/*Fuse.Navigation.IRouterOutlet*/])) & 2) == 2))
        return ro;

    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(active, ::TYPES[4/*Fuse.Visual*/]);

    if (v != NULL)
    {
        if (HasOtherRouter(v))
            return NULL;

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(v)->Children()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            ro = FindOutletDown((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(v)->Children()), ::TYPES[21/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret3), ret3));

            if (ro != NULL)
                return ro;
        }
    }

    return NULL;
}

// private Fuse.Navigation.IRouterOutlet FindOutletUp(Fuse.Node active) [instance] :2926
uObject* Router::FindOutletUp(::g::Fuse::Node* active)
{
    uStackFrame __("Fuse.Navigation.Router", "FindOutletUp(Fuse.Node)");

    while (active != NULL)
    {
        uObject* ro = uAs<uObject*>(active, ::TYPES[45/*Fuse.Navigation.IRouterOutlet*/]);

        if ((ro != NULL) && ((::g::Fuse::Navigation::IRouterOutlet::Type(uInterface(uPtr(ro), ::TYPES[45/*Fuse.Navigation.IRouterOutlet*/])) & 2) == 2))
            return ro;

        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(active, ::TYPES[4/*Fuse.Visual*/]);

        if ((v != NULL) && HasOtherRouter(v))
            return NULL;

        active = uPtr(active)->Parent();
    }

    return NULL;
}

// private void FinishPrepared() [instance] :2731
void Router::FinishPrepared()
{
    uStackFrame __("Fuse.Navigation.Router", "FinishPrepared()");

    if (_prepareOutlet == NULL)
        return;

    switch (_prepareOperation)
    {
        case 3:
        {
            if (uPtr(_history)->Count() != 0)
                uPtr(_history)->RemoveAt(uPtr(_history)->Count() - 1);

            break;
        }
        case 1:
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(_history), GetCurrentRoute());
            break;
        }
        case 0:
        {
            uPtr(_history)->Clear();
            break;
        }
    }

    ::g::Fuse::Navigation::Route* c = SetRoute(_prepareNext, 0, _prepareOperation, true);
    OnHistoryChanged(c);
    ClearPrepared();
}

// private Fuse.Navigation.Route GetCurrent(Fuse.Visual from, [Fuse.Navigation.IRouterOutlet to]) [instance] :2874
::g::Fuse::Navigation::Route* Router::GetCurrent(::g::Fuse::Visual* from, uObject* to)
{
    uStackFrame __("Fuse.Navigation.Router", "GetCurrent(Fuse.Visual,[Fuse.Navigation.IRouterOutlet])");

    if (from == NULL)
        return NULL;

    uObject* outlet = FindOutletDown(from);

    if ((outlet == NULL) || (outlet == to))
        return NULL;

    uString* opath;
    uString* oparameter;
    ::g::Fuse::Navigation::IRouterOutlet::GetCurrent(uInterface(uPtr(outlet), ::TYPES[45/*Fuse.Navigation.IRouterOutlet*/]), &opath, &oparameter, &from);
    return ::g::Fuse::Navigation::Route::New1(opath, oparameter, GetCurrent(from, to));
}

// public Fuse.Navigation.Route GetCurrentRoute() [instance] :2583
::g::Fuse::Navigation::Route* Router::GetCurrentRoute()
{
    uStackFrame __("Fuse.Navigation.Router", "GetCurrentRoute()");
    return GetCurrent(Parent(), NULL);
}

// private int GetOutletDepth(Fuse.Navigation.IRouterOutlet outlet) [instance] :2889
int Router::GetOutletDepth(uObject* outlet)
{
    uStackFrame __("Fuse.Navigation.Router", "GetOutletDepth(Fuse.Navigation.IRouterOutlet)");
    int c = 0;
    ::g::Fuse::Visual* n = uPtr(uAs< ::g::Fuse::Node*>(outlet, ::TYPES[43/*Fuse.Node*/]))->Parent();

    while ((n != NULL) && (n != Parent()))
    {
        n = uPtr(n)->Parent();

        if (uIs(n, ::TYPES[45/*Fuse.Navigation.IRouterOutlet*/]))
            c++;
    }

    return c;
}

// public void GoBack() [instance] :2661
void Router::GoBack()
{
    uStackFrame __("Fuse.Navigation.Router", "GoBack()");

    if (uPtr(_history)->Count() > 0)
        Pop();
    else
        GoUp();
}

// public void Goto(Fuse.Navigation.Route route) [instance] :2589
void Router::Goto(::g::Fuse::Navigation::Route* route)
{
    uStackFrame __("Fuse.Navigation.Router", "Goto(Fuse.Navigation.Route)");
    Modify(1, route, 0);
}

// private void GotoMasterRoute() [instance] :2569
void Router::GotoMasterRoute()
{
    uStackFrame __("Fuse.Navigation.Router", "GotoMasterRoute()");

    if (Router::_masterCurrent() != NULL)
        SetRoute(Router::_masterCurrent(), 1, 0, false);
}

// private void GoUp() [instance] :2681
void Router::GoUp()
{
    uStackFrame __("Fuse.Navigation.Router", "GoUp()");
    ::g::Fuse::Navigation::Route* cur = GetCurrentRoute();
    ::g::Fuse::Navigation::Route* up = uPtr(cur)->Up();

    if (up == cur)
        OnUpFromRoot();
    else
    {
        ::g::Fuse::Navigation::Route* c = SetRoute(up, 0, 3, true);
        OnHistoryChanged(c);
    }
}

// private bool HasOtherRouter(Fuse.Visual n) [instance] :2943
bool Router::HasOtherRouter(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Navigation.Router", "HasOtherRouter(Fuse.Visual)");
    ::g::Fuse::Node* ret4;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(n)->Children()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Node* q = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(n)->Children()), ::TYPES[21/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret4), ret4);

        if ((q != this) && uIs(q, __type))
            return true;
    }

    return false;
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :2957
void Router::add_HistoryChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.Router", "add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler)");
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(HistoryChanged1, value), ::TYPES[53/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :2957
void Router::remove_HistoryChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.Router", "remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler)");
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(HistoryChanged1, value), ::TYPES[53/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public bool get_IsMasterRouter() [instance] :2539
bool Router::IsMasterRouter()
{
    return _isMasterRouter;
}

// public void set_IsMasterRouter(bool value) [instance] :2540
void Router::IsMasterRouter(bool value)
{
    _isMasterRouter = value;
}

// internal void Modify(Fuse.Navigation.ModifyRouteHow how, Fuse.Navigation.Route route, Fuse.Navigation.NavigationGotoMode mode) [instance] :2600
void Router::Modify(int how, ::g::Fuse::Navigation::Route* route, int mode)
{
    uStackFrame __("Fuse.Navigation.Router", "Modify(Fuse.Navigation.ModifyRouteHow,Fuse.Navigation.Route,Fuse.Navigation.NavigationGotoMode)");
    ::g::Fuse::Navigation::Route* ret5;
    ::g::Fuse::Navigation::Route* current = NULL;

    switch (how)
    {
        case 1:
        {
            uPtr(_history)->Clear();
            current = SetRoute(route, mode, 0, true);
            OnHistoryChanged(current);
            break;
        }
        case 0:
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(_history), GetCurrentRoute());
            current = SetRoute(route, mode, 1, true);
            OnHistoryChanged(current);
            break;
        }
        case 2:
        {
            current = SetRoute(route, mode, 2, true);
            OnHistoryChanged(current);
            break;
        }
        case 3:
        {
            if (route != NULL)
                ::g::Fuse::Diagnostics::UserWarning(::STRINGS[58/*"PrepareBack...*/], this, ::STRINGS[1/*"/Users/most...*/], 2624, ::STRINGS[59/*"Modify"*/]);

            if (uPtr(_history)->Count() == 0)
            {
                ::g::Fuse::Diagnostics::UserError(::STRINGS[60/*"There is no...*/], this, ::STRINGS[1/*"/Users/most...*/], 2628, ::STRINGS[59/*"Modify"*/]);
                return;
            }

            ::g::Fuse::Navigation::Route* popRoute = (::g::Uno::Collections::List__get_Item_fn(uPtr(_history), uCRef<int>(uPtr(_history)->Count() - 1), &ret5), ret5);
            PrepareRoute(popRoute, 3);
            break;
        }
        case 4:
        {
            PrepareRoute(route, 1);
            break;
        }
        case 5:
        {
            PrepareRoute(route, 0);
            break;
        }
        case 6:
        {
            FinishPrepared();
            break;
        }
    }
}

// private void OnHistoryChanged(Fuse.Navigation.Route current) [instance] :2958
void Router::OnHistoryChanged(::g::Fuse::Navigation::Route* current)
{
    uStackFrame __("Fuse.Navigation.Router", "OnHistoryChanged(Fuse.Navigation.Route)");

    if (current == NULL)
        current = GetCurrentRoute();

    if (::g::Uno::Delegate::op_Inequality(HistoryChanged1, NULL))
        uPtr(HistoryChanged1)->InvokeVoid(this);

    if (IsMasterRouter())
        Router::_masterCurrent() = current;
}

// private void OnKeyPressed(object sender, Fuse.Input.KeyEventArgs args) [instance] :2543
void Router::OnKeyPressed(uObject* sender, ::g::Fuse::Input::KeyEventArgs* args)
{
    uStackFrame __("Fuse.Navigation.Router", "OnKeyPressed(object,Fuse.Input.KeyEventArgs)");

    if (uPtr(args)->Key() == 201)
    {
        if (BackButtonAction() == 0)
            GoBack();
    }
}

// private void OnUpFromRoot() [instance] :2696
void Router::OnUpFromRoot()
{
}

// private void Pop() [instance] :2702
void Router::Pop()
{
    uStackFrame __("Fuse.Navigation.Router", "Pop()");
    ::g::Fuse::Navigation::Route* ret10;

    if (uPtr(_history)->Count() == 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[66/*"Cannot pop(...*/], this, ::STRINGS[1/*"/Users/most...*/], 2706, ::STRINGS[67/*"Pop"*/]);
        return;
    }

    ::g::Fuse::Navigation::Route* route = (::g::Uno::Collections::List__get_Item_fn(uPtr(_history), uCRef<int>(uPtr(_history)->Count() - 1), &ret10), ret10);
    uPtr(_history)->RemoveAt(uPtr(_history)->Count() - 1);
    ::g::Fuse::Navigation::Route* c = SetRoute(route, 0, 3, true);
    OnHistoryChanged(c);
}

// public double get_PrepareProgress() [instance] :2765
double Router::PrepareProgress()
{
    return _prepareProgress;
}

// public void set_PrepareProgress(double value) [instance] :2766
void Router::PrepareProgress(double value)
{
    uStackFrame __("Fuse.Navigation.Router", "set_PrepareProgress(double)");
    SetPrepareProgress(value);
}

// private void PrepareRoute(Fuse.Navigation.Route r, Fuse.Navigation.RoutingOperation operation) [instance] :2722
void Router::PrepareRoute(::g::Fuse::Navigation::Route* r, int operation)
{
    uStackFrame __("Fuse.Navigation.Router", "PrepareRoute(Fuse.Navigation.Route,Fuse.Navigation.RoutingOperation)");
    _prepareCurrent = GetCurrentRoute();
    _prepareNext = SetRouteImpl(Parent(), r, 2, operation, &_prepareOutlet);
    _prepareOperation = operation;
    _prepareProgress = 0.0;
}

// public void Push(Fuse.Navigation.Route route) [instance] :2595
void Router::Push(::g::Fuse::Navigation::Route* route)
{
    uStackFrame __("Fuse.Navigation.Router", "Push(Fuse.Navigation.Route)");
    Modify(0, route, 0);
}

// private void SetPrepareProgress(double value) [instance] :2769
void Router::SetPrepareProgress(double value)
{
    uStackFrame __("Fuse.Navigation.Router", "SetPrepareProgress(double)");

    if (((_prepareCurrent == NULL) || (_prepareNext == NULL)) || (_prepareOutlet == NULL))
        return;

    int depth = GetOutletDepth(_prepareOutlet);
    ::g::Fuse::Navigation::Route* pc = uPtr(_prepareCurrent)->SubDepth(depth);
    ::g::Fuse::Navigation::Route* pn = uPtr(_prepareNext)->SubDepth(depth);

    if ((pc == NULL) || (pn == NULL))
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[68/*"Invalid out...*/], this, ::STRINGS[1/*"/Users/most...*/], 2780, ::STRINGS[69/*"SetPrepareP...*/]);
        return;
    }

    _prepareProgress = value;
    ::g::Fuse::Navigation::IRouterOutlet::PartialPrepareGoto(uInterface(uPtr(_prepareOutlet), ::TYPES[45/*Fuse.Navigation.IRouterOutlet*/]), _prepareProgress);
}

// private Fuse.Navigation.Route SetRoute(Fuse.Navigation.Route r, Fuse.Navigation.NavigationGotoMode gotoMode, Fuse.Navigation.RoutingOperation operation, [bool userRequest]) [instance] :2788
::g::Fuse::Navigation::Route* Router::SetRoute(::g::Fuse::Navigation::Route* r, int gotoMode, int operation, bool userRequest)
{
    uStackFrame __("Fuse.Navigation.Router", "SetRoute(Fuse.Navigation.Route,Fuse.Navigation.NavigationGotoMode,Fuse.Navigation.RoutingOperation,[bool])");
    ClearPrepared();
    ::g::Fuse::Navigation::Route* current = GetCurrentRoute();
    uObject* ignore;
    ::g::Fuse::Navigation::Route* outR = SetRouteImpl(Parent(), r, gotoMode, operation, &ignore);

    if (outR == NULL)
    {
        uString* msg = ::g::Uno::String::op_Addition2(::STRINGS[70/*"Unable to n...*/], uPtr(r)->Format());

        if (userRequest)
            ::g::Fuse::Diagnostics::UserError(msg, this, ::STRINGS[1/*"/Users/most...*/], 2802, ::STRINGS[71/*"SetRoute"*/]);
        else
            ::g::Fuse::Diagnostics::InternalError(msg, this, ::STRINGS[1/*"/Users/most...*/], 2804, ::STRINGS[71/*"SetRoute"*/]);

        uPtr(_history)->Clear();
        ::g::Fuse::Navigation::Route* c = SetRouteImpl(Parent(), current, 1, 0, &ignore);
        OnHistoryChanged(c);
        return NULL;
    }

    return outR;
}

// private Fuse.Navigation.Route SetRouteImpl(Fuse.Visual root, Fuse.Navigation.Route r, Fuse.Navigation.NavigationGotoMode gotoMode, Fuse.Navigation.RoutingOperation operation, Fuse.Navigation.IRouterOutlet& majorChange) [instance] :2816
::g::Fuse::Navigation::Route* Router::SetRouteImpl(::g::Fuse::Visual* root, ::g::Fuse::Navigation::Route* r, int gotoMode, int operation, uObject** majorChange)
{
    uStackFrame __("Fuse.Navigation.Router", "SetRouteImpl(Fuse.Visual,Fuse.Navigation.Route,Fuse.Navigation.NavigationGotoMode,Fuse.Navigation.RoutingOperation,Fuse.Navigation.IRouterOutlet&)");
    *majorChange = NULL;
    uObject* outlet = FindOutletDown(root);

    if (outlet == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::op_Addition1(::STRINGS[72/*"No router o...*/], r), this, ::STRINGS[1/*"/Users/most...*/], 2823, ::STRINGS[73/*"SetRouteImpl"*/]);
        return NULL;
    }

    ::g::Fuse::Visual* active;
    uString* opath = uPtr(r)->Path;
    uString* oparameter = r->Parameter;
    int didTransition = ::g::Fuse::Navigation::IRouterOutlet::Goto(uInterface(uPtr(outlet), ::TYPES[45/*Fuse.Navigation.IRouterOutlet*/]), &opath, &oparameter, gotoMode, operation, &active);

    if (didTransition == 3)
        return NULL;

    bool trackMajorChange = true;

    if (didTransition == 2)
    {
        gotoMode = 1;
        *majorChange = outlet;
        trackMajorChange = false;
    }

    ::g::Fuse::Navigation::Route* outSubRoute = NULL;

    if (r->SubRoute != NULL)
    {
        if (active == NULL)
        {
            ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::op_Addition1(::STRINGS[74/*"SubRoute re...*/], r), this, ::STRINGS[1/*"/Users/most...*/], 2848, ::STRINGS[73/*"SetRouteImpl"*/]);
            return NULL;
        }
        else
        {
            if (trackMajorChange)
                outSubRoute = SetRouteImpl(active, uPtr(r)->SubRoute, gotoMode, operation, majorChange);
            else
            {
                uObject* ignore;
                outSubRoute = SetRouteImpl(active, uPtr(r)->SubRoute, gotoMode, operation, &ignore);
            }

            if (outSubRoute == NULL)
                return NULL;
        }
    }
    else
        outSubRoute = GetCurrent(active, NULL);

    return ::g::Fuse::Navigation::Route::New1(opath, oparameter, outSubRoute);
}

// private static void Bookmark(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :2205
void Router::Bookmark(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    uStackFrame __("Fuse.Navigation.Router", "Bookmark(Fuse.Scripting.Context,Fuse.Navigation.Router,object[])");
    Router_typeof()->Init();
    uString* ret2;

    if (!uPtr(r)->IsRootingCompleted())
        return;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[39/*"`Router.boo...*/], r, ::STRINGS[1/*"/Users/most...*/], 2211, ::STRINGS[40/*"Bookmark"*/]);
        return;
    }

    ::g::Fuse::Scripting::Object* obj = uAs< ::g::Fuse::Scripting::Object*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[41/*Fuse.Scripting.Object*/]);

    if (obj == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[41/*"`Router.boo...*/], r, ::STRINGS[1/*"/Users/most...*/], 2218, ::STRINGS[40/*"Bookmark"*/]);
        return;
    }

    uString* name = NULL;
    uObject* relative = NULL;
    ::g::Fuse::Navigation::Route* route = NULL;
    uArray* keys = uPtr(obj)->Keys();

    for (int i = 0; i < uPtr(keys)->Length(); ++i)
    {
        uString* p = uPtr(keys)->Strong<uString*>(i);
        uObject* o = uPtr(obj)->Item(p);

        if (::g::Uno::String::op_Equality(p, ::STRINGS[9/*"name"*/]))
            name = (::g::Fuse::Scripting::Marshal__ToType_fn(::TYPES[42/*Fuse.Scripting.Marshal.ToType<string>*/], o, &ret2), ret2);
        else if (::g::Uno::String::op_Equality(p, ::STRINGS[42/*"relative"*/]))
        {
            uObject* node = ::g::Fuse::Scripting::Context::Wrap(o);
            relative = uPtr(r)->FindOutletUp(uAs< ::g::Fuse::Node*>(node, ::TYPES[43/*Fuse.Node*/]));

            if (relative == NULL)
            {
                ::g::Fuse::Diagnostics::UserError(::STRINGS[43/*"Could not f...*/], r, ::STRINGS[1/*"/Users/most...*/], 2242, ::STRINGS[40/*"Bookmark"*/]);
                return;
            }
        }
        else if (::g::Uno::String::op_Equality(p, ::STRINGS[44/*"path"*/]))
        {
            uObject* path = uAs<uObject*>(o, ::TYPES[44/*Fuse.Scripting.IArray*/]);

            if (path == NULL)
            {
                ::g::Fuse::Diagnostics::UserError(::STRINGS[45/*"`path` shou...*/], r, ::STRINGS[1/*"/Users/most...*/], 2251, ::STRINGS[40/*"Bookmark"*/]);
                return;
            }

            route = Router::ParseRoute(c, path);
        }
        else
        {
            ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[46/*"Unrecognize...*/], p), r, ::STRINGS[1/*"/Users/most...*/], 2259, ::STRINGS[40/*"Bookmark"*/]);
            return;
        }
    }

    if (relative != NULL)
    {
        ::g::Fuse::Navigation::Route* current = uPtr(r)->GetCurrent(uPtr(r)->Parent(), relative);
        route = (current == NULL) ? route : (::g::Fuse::Navigation::Route*)uPtr(current)->Append(route);
    }

    if (::g::Uno::String::op_Equality(name, NULL))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[47/*"A `name` is...*/], r, ::STRINGS[1/*"/Users/most...*/], 2272, ::STRINGS[40/*"Bookmark"*/]);
        return;
    }

    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(uPtr(r)->Bookmarks), name, route);
}

// private static Fuse.Navigation.Route GetRelative(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :2029
::g::Fuse::Navigation::Route* Router::GetRelative(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    uStackFrame __("Fuse.Navigation.Router", "GetRelative(Fuse.Scripting.Context,Fuse.Navigation.Router,object[])");
    Router_typeof()->Init();

    if (!uPtr(r)->IsRootingCompleted())
        return NULL;

    if (uPtr(args)->Length() < 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[48/*"Router.goto...*/], r, ::STRINGS[1/*"/Users/most...*/], 2035, ::STRINGS[49/*"GetRelative"*/]);
        return NULL;
    }

    uObject* node = ::g::Fuse::Scripting::Context::Wrap(uPtr(args)->Strong<uObject*>(0));
    uObject* outlet = uPtr(r)->FindOutletUp(uAs< ::g::Fuse::Node*>(node, ::TYPES[43/*Fuse.Node*/]));

    if (outlet == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[50/*"Router.goto...*/], r, ::STRINGS[1/*"/Users/most...*/], 2043, ::STRINGS[49/*"GetRelative"*/]);
        return NULL;
    }

    ::g::Fuse::Navigation::Route* where = Router::ParseRoute1(c, args, 1);
    ::g::Fuse::Navigation::Route* current = r->GetCurrent(r->Parent(), outlet);
    ::g::Fuse::Navigation::Route* route = (current == NULL) ? where : (::g::Fuse::Navigation::Route*)uPtr(current)->Append(where);
    return route;
}

// private static void GetRoute(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :2360
void Router::GetRoute(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    uStackFrame __("Fuse.Navigation.Router", "GetRoute(Fuse.Scripting.Context,Fuse.Navigation.Router,object[])");
    Router_typeof()->Init();

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[51/*"Router.getR...*/], r, ::STRINGS[1/*"/Users/most...*/], 2364, ::STRINGS[52/*"GetRoute"*/]);
        return;
    }

    ::g::Fuse::Scripting::Function* callback = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[46/*Fuse.Scripting.Function*/]);

    if (callback == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[53/*"Router.getR...*/], r, ::STRINGS[1/*"/Users/most...*/], 2370, ::STRINGS[52/*"GetRoute"*/]);
        return;
    }

    ::g::Fuse::Navigation::Route* route = uPtr(r)->GetCurrentRoute();
    uPtr(c)->Invoke(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)Router__GetRouteCallback__Run_fn, Router__GetRouteCallback::New1(route, callback, c)));
}

// private static void GoBack(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :2084
void Router::GoBack1(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    uStackFrame __("Fuse.Navigation.Router", "GoBack(Fuse.Scripting.Context,Fuse.Navigation.Router,object[])");
    Router_typeof()->Init();

    if (!uPtr(r)->IsRootingCompleted())
        return;

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[54/*"Router.goBa...*/], r, ::STRINGS[1/*"/Users/most...*/], 2090, ::STRINGS[55/*"GoBack"*/]);
        return;
    }

    uPtr(r)->GoBack();
}

// private static void Goto(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :1971
void Router::Goto1(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    uStackFrame __("Fuse.Navigation.Router", "Goto(Fuse.Scripting.Context,Fuse.Navigation.Router,object[])");
    Router_typeof()->Init();

    if (!uPtr(r)->IsRootingCompleted())
        return;

    ::g::Fuse::Navigation::Route* where = Router::ParseRoute1(c, args, 0);

    if (where != NULL)
        uPtr(r)->Goto(where);
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[56/*"Router.goto...*/], r, ::STRINGS[1/*"/Users/most...*/], 1982, ::STRINGS[57/*"Goto"*/]);
}

// private static void GotoRelative(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :2007
void Router::GotoRelative(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    uStackFrame __("Fuse.Navigation.Router", "GotoRelative(Fuse.Scripting.Context,Fuse.Navigation.Router,object[])");
    Router_typeof()->Init();
    ::g::Fuse::Navigation::Route* route = Router::GetRelative(c, r, args);

    if (route != NULL)
        uPtr(r)->Goto(route);
}

// private static void Modify(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :2124
void Router::Modify1(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    uStackFrame __("Fuse.Navigation.Router", "Modify(Fuse.Scripting.Context,Fuse.Navigation.Router,object[])");
    Router_typeof()->Init();
    int ret6;
    int ret7;
    uString* ret8;
    bool ret9;

    if (!uPtr(r)->IsRootingCompleted())
        return;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[61/*"`Router.mod...*/], r, ::STRINGS[1/*"/Users/most...*/], 2130, ::STRINGS[59/*"Modify"*/]);
        return;
    }

    ::g::Fuse::Scripting::Object* obj = uAs< ::g::Fuse::Scripting::Object*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[41/*Fuse.Scripting.Object*/]);

    if (obj == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[62/*"`Router.mod...*/], r, ::STRINGS[1/*"/Users/most...*/], 2137, ::STRINGS[59/*"Modify"*/]);
        return;
    }

    int how = 1;
    ::g::Fuse::Navigation::Route* route = NULL;
    uObject* relative = NULL;
    int mode = 0;
    uArray* keys = uPtr(obj)->Keys();

    for (int i = 0; i < uPtr(keys)->Length(); ++i)
    {
        uString* p = uPtr(keys)->Strong<uString*>(i);
        uObject* o = uPtr(obj)->Item(p);

        if (::g::Uno::String::op_Equality(p, ::STRINGS[63/*"how"*/]))
            how = (::g::Fuse::Scripting::Marshal__ToType_fn(::TYPES[47/*Fuse.Scripting.Marshal.ToType<Fuse.Navigation.ModifyRouteHow>*/], o, &ret6), ret6);
        else if (::g::Uno::String::op_Equality(p, ::STRINGS[44/*"path"*/]))
        {
            uObject* path = uAs<uObject*>(o, ::TYPES[44/*Fuse.Scripting.IArray*/]);

            if (path == NULL)
            {
                ::g::Fuse::Diagnostics::UserError(::STRINGS[45/*"`path` shou...*/], r, ::STRINGS[1/*"/Users/most...*/], 2160, ::STRINGS[59/*"Modify"*/]);
                return;
            }

            route = Router::ParseRoute(c, path);
        }
        else if (::g::Uno::String::op_Equality(p, ::STRINGS[42/*"relative"*/]))
        {
            uObject* node = ::g::Fuse::Scripting::Context::Wrap(o);
            relative = uPtr(r)->FindOutletUp(uAs< ::g::Fuse::Node*>(node, ::TYPES[43/*Fuse.Node*/]));

            if (relative == NULL)
            {
                ::g::Fuse::Diagnostics::UserError(::STRINGS[43/*"Could not f...*/], r, ::STRINGS[1/*"/Users/most...*/], 2172, ::STRINGS[59/*"Modify"*/]);
                return;
            }
        }
        else if (::g::Uno::String::op_Equality(p, ::STRINGS[64/*"transition"*/]))
            mode = (::g::Fuse::Scripting::Marshal__ToType_fn(::TYPES[48/*Fuse.Scripting.Marshal.ToType<Fuse.Navigation.NavigationGotoMode>*/], o, &ret7), ret7);
        else if (::g::Uno::String::op_Equality(p, ::STRINGS[31/*"bookmark"*/]))
        {
            uString* bk = (::g::Fuse::Scripting::Marshal__ToType_fn(::TYPES[42/*Fuse.Scripting.Marshal.ToType<string>*/], o, &ret8), ret8);

            if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(r)->Bookmarks), bk, (void**)(&route), &ret9), ret9))
            {
                ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[65/*"Unknown boo...*/], bk), r, ::STRINGS[1/*"/Users/most...*/], 2185, ::STRINGS[59/*"Modify"*/]);
                return;
            }
        }
        else
        {
            ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[46/*"Unrecognize...*/], p), r, ::STRINGS[1/*"/Users/most...*/], 2191, ::STRINGS[59/*"Modify"*/]);
            return;
        }
    }

    if (relative != NULL)
    {
        ::g::Fuse::Navigation::Route* current = uPtr(r)->GetCurrent(uPtr(r)->Parent(), relative);
        route = (current == NULL) ? route : (::g::Fuse::Navigation::Route*)uPtr(current)->Append(route);
    }

    uPtr(r)->Modify(how, route, mode);
}

// public generated Router New() [static] :1942
Router* Router::New2()
{
    Router* obj1 = (Router*)uNew(Router_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static Fuse.Navigation.Route ParseRoute(Fuse.Scripting.Context c, Fuse.Scripting.IArray path) [static] :2322
::g::Fuse::Navigation::Route* Router::ParseRoute(::g::Fuse::Scripting::Context* c, uObject* path)
{
    uStackFrame __("Fuse.Navigation.Router", "ParseRoute(Fuse.Scripting.Context,Fuse.Scripting.IArray)");
    Router_typeof()->Init();
    uArray* cvt = uArray::New(::TYPES[16/*object[]*/], ::g::Fuse::Scripting::IArray::Length(uInterface(uPtr(path), ::TYPES[44/*Fuse.Scripting.IArray*/])));

    for (int i = 0; i < cvt->Length(); ++i)
        uPtr(cvt)->Strong<uObject*>(i) = ::g::Fuse::Scripting::IArray::Item(uInterface(uPtr(path), ::TYPES[44/*Fuse.Scripting.IArray*/]), i);

    return Router::ParseRoute1(c, cvt, 0);
}

// private static Fuse.Navigation.Route ParseRoute(Fuse.Scripting.Context c, object[] args, [int pos]) [static] :2330
::g::Fuse::Navigation::Route* Router::ParseRoute1(::g::Fuse::Scripting::Context* c, uArray* args, int pos)
{
    uStackFrame __("Fuse.Navigation.Router", "ParseRoute(Fuse.Scripting.Context,object[],[int])");
    Router_typeof()->Init();

    if (uPtr(args)->Length() <= pos)
        return NULL;

    if (uPtr(args)->Length() <= (pos + 1))
        return ::g::Fuse::Navigation::Route::New1(uAs<uString*>(uPtr(args)->Strong<uObject*>(pos), ::TYPES[50/*string*/]), NULL, NULL);

    uObject* arg = uPtr(args)->Strong<uObject*>(pos + 1);

    if (!Router::ValidateParameter(c, arg, 0))
        return NULL;

    uString* path = uAs<uString*>(args->Strong<uObject*>(pos), ::TYPES[50/*string*/]);
    uString* parameter = ::g::Fuse::Scripting::Json::Stringify(arg, true);
    return ::g::Fuse::Navigation::Route::New1(path, parameter, Router::ParseRoute1(c, args, pos + 2));
}

// private static void Push(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :2070
void Router::Push1(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    uStackFrame __("Fuse.Navigation.Router", "Push(Fuse.Scripting.Context,Fuse.Navigation.Router,object[])");
    Router_typeof()->Init();

    if (!uPtr(r)->IsRootingCompleted())
        return;

    ::g::Fuse::Navigation::Route* where = Router::ParseRoute1(c, args, 0);
    uPtr(r)->Push(where);
}

// private static void PushRelative(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :2022
void Router::PushRelative(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    uStackFrame __("Fuse.Navigation.Router", "PushRelative(Fuse.Scripting.Context,Fuse.Navigation.Router,object[])");
    Router_typeof()->Init();
    ::g::Fuse::Navigation::Route* route = Router::GetRelative(c, r, args);

    if (route != NULL)
        uPtr(r)->Push(route);
}

// internal static Fuse.Navigation.Router TryFindRouter(Fuse.Node n) [static] :2971
Router* Router::TryFindRouter(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.Router", "TryFindRouter(Fuse.Node)");
    Router_typeof()->Init();
    ::g::Fuse::Node* p = n;

    while (p != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(p, ::TYPES[4/*Fuse.Visual*/]);

        if (v != NULL)
        {
            Router* r = (Router*)uPtr(v)->FirstChild(::TYPES[51/*Fuse.Visual.FirstChild<Fuse.Navigation.Router>*/]);

            if (r != NULL)
                return r;
        }

        p = uPtr(p)->Parent();
    }

    return NULL;
}

// private static bool ValidateParameter(Fuse.Scripting.Context c, object arg, int depth) [static] :2279
bool Router::ValidateParameter(::g::Fuse::Scripting::Context* c, uObject* arg, int depth)
{
    uStackFrame __("Fuse.Navigation.Router", "ValidateParameter(Fuse.Scripting.Context,object,int)");
    Router_typeof()->Init();

    if (depth > 50)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[75/*"Route param...*/], NULL, ::STRINGS[1/*"/Users/most...*/], 2283, ::STRINGS[76/*"ValidatePar...*/]);
        return false;
    }

    if (uIs(arg, ::TYPES[41/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* obj = uCast< ::g::Fuse::Scripting::Object*>(arg, ::TYPES[41/*Fuse.Scripting.Object*/]);

        if (uPtr(obj)->InstanceOf(uPtr(c)->Observable()))
        {
            ::g::Fuse::Diagnostics::UserError(::STRINGS[77/*"Route param...*/], NULL, ::STRINGS[1/*"/Users/most...*/], 2292, ::STRINGS[76/*"ValidatePar...*/]);
            return false;
        }

        uArray* keys = uPtr(obj)->Keys();

        for (int i = 0; i < uPtr(keys)->Length(); i++)
        {
            uString* key = uPtr(keys)->Strong<uString*>(i);

            if (!Router::ValidateParameter(c, uPtr(obj)->Item(key), depth + 1))
                return false;
        }
    }

    if (uIs(arg, ::TYPES[52/*Fuse.Scripting.Array*/]))
    {
        ::g::Fuse::Scripting::Array* arr = uCast< ::g::Fuse::Scripting::Array*>(arg, ::TYPES[52/*Fuse.Scripting.Array*/]);

        for (int i1 = 0; i1 < uPtr(arr)->Length(); i1++)
            if (!Router::ValidateParameter(c, uPtr(arr)->Item(i1), depth + 1))
                return false;
    }

    if (uIs(arg, ::TYPES[46/*Fuse.Scripting.Function*/]))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[78/*"Route param...*/], NULL, ::STRINGS[1/*"/Users/most...*/], 2315, ::STRINGS[76/*"ValidatePar...*/]);
        return false;
    }

    return true;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class RouterModify :3005
// {
static void RouterModify_build(uType* type)
{
    ::STRINGS[79] = uString::Const("Router not set and none could be found");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::STRINGS[65] = uString::Const("Unknown bookmark: ");
    type->SetFields(8,
        ::g::Fuse::Navigation::ModifyRouteHow_typeof(), offsetof(::g::Fuse::Navigation::RouterModify, _how), 0,
        ::g::Fuse::Navigation::NavigationGotoMode_typeof(), offsetof(::g::Fuse::Navigation::RouterModify, _transition), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Navigation::RouterModify, _Bookmark), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::Fuse::Navigation::RouterModify, _Router), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_Bookmark", NULL, (void*)RouterModify__get_Bookmark_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Bookmark", NULL, (void*)RouterModify__set_Bookmark_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_How", NULL, (void*)RouterModify__get_How_fn, 0, false, ::g::Fuse::Navigation::ModifyRouteHow_typeof(), 0),
        new uFunction("set_How", NULL, (void*)RouterModify__set_How_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::ModifyRouteHow_typeof()),
        new uFunction(".ctor", NULL, (void*)RouterModify__New2_fn, 0, true, type, 0),
        new uFunction("get_Router", NULL, (void*)RouterModify__get_Router_fn, 0, false, ::g::Fuse::Navigation::Router_typeof(), 0),
        new uFunction("set_Router", NULL, (void*)RouterModify__set_Router_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::Router_typeof()),
        new uFunction("get_Transition", NULL, (void*)RouterModify__get_Transition_fn, 0, false, ::g::Fuse::Navigation::NavigationGotoMode_typeof(), 0),
        new uFunction("set_Transition", NULL, (void*)RouterModify__set_Transition_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationGotoMode_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* RouterModify_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.ObjectSize = sizeof(RouterModify);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Navigation.RouterModify", options);
    type->fp_build_ = RouterModify_build;
    type->fp_ctor_ = (void*)RouterModify__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))RouterModify__Perform_fn;
    return type;
}

// public generated RouterModify() :3005
void RouterModify__ctor_2_fn(RouterModify* __this)
{
    __this->ctor_2();
}

// public generated string get_Bookmark() :3019
void RouterModify__get_Bookmark_fn(RouterModify* __this, uString** __retval)
{
    *__retval = __this->Bookmark();
}

// public generated void set_Bookmark(string value) :3019
void RouterModify__set_Bookmark_fn(RouterModify* __this, uString* value)
{
    __this->Bookmark(value);
}

// public Fuse.Navigation.ModifyRouteHow get_How() :3014
void RouterModify__get_How_fn(RouterModify* __this, int* __retval)
{
    *__retval = __this->How();
}

// public void set_How(Fuse.Navigation.ModifyRouteHow value) :3015
void RouterModify__set_How_fn(RouterModify* __this, int* value)
{
    __this->How(*value);
}

// public generated RouterModify New() :3005
void RouterModify__New2_fn(RouterModify** __retval)
{
    *__retval = RouterModify::New2();
}

// protected override sealed void Perform(Fuse.Node n) :3029
void RouterModify__Perform_fn(RouterModify* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.RouterModify", "Perform(Fuse.Node)");
    bool ret3;
    ::g::Fuse::Navigation::Router* ind1 = __this->Router();
    ::g::Fuse::Navigation::Router* useRouter = (ind1 != NULL) ? ind1 : (::g::Fuse::Navigation::Router*)::g::Fuse::Navigation::Router::TryFindRouter(n);

    if (useRouter == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[79/*"Router not ...*/], __this, ::STRINGS[1/*"/Users/most...*/], 3034, ::STRINGS[2/*"Perform"*/]);
        return;
    }

    ::g::Fuse::Navigation::Route* route = NULL;

    if (::g::Uno::String::op_Inequality(__this->Bookmark(), NULL))
    {
        if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(__this->Router())->Bookmarks), __this->Bookmark(), (void**)(&route), &ret3), ret3))
        {
            ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[65/*"Unknown boo...*/], __this->Bookmark()), __this, ::STRINGS[1/*"/Users/most...*/], 3044, ::STRINGS[2/*"Perform"*/]);
            return;
        }
    }

    uPtr(__this->Router())->Modify(__this->How(), route, __this->Transition());
}

// public generated Fuse.Navigation.Router get_Router() :3008
void RouterModify__get_Router_fn(RouterModify* __this, ::g::Fuse::Navigation::Router** __retval)
{
    *__retval = __this->Router();
}

// public generated void set_Router(Fuse.Navigation.Router value) :3008
void RouterModify__set_Router_fn(RouterModify* __this, ::g::Fuse::Navigation::Router* value)
{
    __this->Router(value);
}

// public Fuse.Navigation.NavigationGotoMode get_Transition() :3025
void RouterModify__get_Transition_fn(RouterModify* __this, int* __retval)
{
    *__retval = __this->Transition();
}

// public void set_Transition(Fuse.Navigation.NavigationGotoMode value) :3026
void RouterModify__set_Transition_fn(RouterModify* __this, int* value)
{
    __this->Transition(*value);
}

// public generated RouterModify() [instance] :3005
void RouterModify::ctor_2()
{
    _how = 1;
    ctor_1();
}

// public generated string get_Bookmark() [instance] :3019
uString* RouterModify::Bookmark()
{
    return _Bookmark;
}

// public generated void set_Bookmark(string value) [instance] :3019
void RouterModify::Bookmark(uString* value)
{
    _Bookmark = value;
}

// public Fuse.Navigation.ModifyRouteHow get_How() [instance] :3014
int RouterModify::How()
{
    return _how;
}

// public void set_How(Fuse.Navigation.ModifyRouteHow value) [instance] :3015
void RouterModify::How(int value)
{
    _how = value;
}

// public generated Fuse.Navigation.Router get_Router() [instance] :3008
::g::Fuse::Navigation::Router* RouterModify::Router()
{
    return _Router;
}

// public generated void set_Router(Fuse.Navigation.Router value) [instance] :3008
void RouterModify::Router(::g::Fuse::Navigation::Router* value)
{
    _Router = value;
}

// public Fuse.Navigation.NavigationGotoMode get_Transition() [instance] :3025
int RouterModify::Transition()
{
    return _transition;
}

// public void set_Transition(Fuse.Navigation.NavigationGotoMode value) [instance] :3026
void RouterModify::Transition(int value)
{
    _transition = value;
}

// public generated RouterModify New() [static] :3005
RouterModify* RouterModify::New2()
{
    RouterModify* obj2 = (RouterModify*)uNew(RouterModify_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public enum RoutingOperation :694
uEnumType* RoutingOperation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.RoutingOperation", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Goto", 0LL,
        "Push", 1LL,
        "Replace", 2LL,
        "Pop", 3LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public enum RoutingResult :715
uEnumType* RoutingResult_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.RoutingResult", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "NoChange", 0LL,
        "MinorChange", 1LL,
        "Change", 2LL,
        "Invalid", 3LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal enum SnapTo :3626
uEnumType* SnapTo_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.SnapTo", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Forward", 0LL,
        "Current", 1LL,
        "Backward", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public interfacemodifiers class StructuredNavigation :3068
// {
static void StructuredNavigation_build(uType* type)
{
    ::STRINGS[80] = uString::Const("Seek being called on an unrooted navigation");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno");
    ::STRINGS[81] = uString::Const("Fuse.Navigation.ISeekableNavigation.Seek");
    ::STRINGS[82] = uString::Const("Attempting to navigate to element with different parent");
    ::STRINGS[83] = uString::Const("GotoImpl");
    ::STRINGS[84] = uString::Const("Updated called without a region");
    ::STRINGS[85] = uString::Const("OnUpdated");
    ::STRINGS[86] = uString::Const("Use a `NavigationMotion` and the `GotoDuration` property instead of `Navigation.Duration`");
    ::STRINGS[87] = uString::Const("set_Duration");
    ::STRINGS[88] = uString::Const("Use a `NavigationMotion` and the `GotoEasing` property instead of `Navigation.Easing`");
    ::STRINGS[89] = uString::Const("set_Easing");
    ::STRINGS[90] = uString::Const("Motion should not be changed post-rooting");
    ::STRINGS[91] = uString::Const("set_Motion");
    ::TYPES[54] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[25] = ::g::Uno::Action_typeof();
    ::TYPES[20] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[55] = ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof();
    ::TYPES[56] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(StructuredNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(StructuredNavigation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(StructuredNavigation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(StructuredNavigation_type, interface3),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(StructuredNavigation_type, interface4),
        ::g::Fuse::IParentObserver_typeof(), offsetof(StructuredNavigation_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(StructuredNavigation_type, interface6),
        ::g::Fuse::Navigation::ISeekableNavigation_typeof(), offsetof(StructuredNavigation_type, interface7));
    type->SetFields(20,
        ::TYPES[4/*Fuse.Visual*/], offsetof(::g::Fuse::Navigation::StructuredNavigation, _active), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _hasUpdated), 0,
        ::g::Fuse::Motion::MotionConfig_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _motion), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _prevProgress), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _progress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _queueClearForwardHistory), 0,
        ::TYPES[55/*Fuse.Motion.Simulation.BoundedRegion2D*/], offsetof(::g::Fuse::Navigation::StructuredNavigation, _region), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _reuseExistingVisual), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _seekBase), 0,
        StructuredNavigation__NavigationStructure_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _Mode), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("get_Duration", NULL, (void*)StructuredNavigation__get_Duration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Duration", NULL, (void*)StructuredNavigation__set_Duration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Easing", NULL, (void*)StructuredNavigation__get_Easing_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_Easing", NULL, (void*)StructuredNavigation__set_Easing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("GotoImpl", NULL, (void*)StructuredNavigation__GotoImpl_fn, 0, false, uVoid_typeof(), 2, ::TYPES[4/*Fuse.Visual*/], ::g::Fuse::Navigation::NavigationGotoMode_typeof()),
        new uFunction("get_Motion", NULL, (void*)StructuredNavigation__get_Motion_fn, 0, false, ::g::Fuse::Motion::MotionConfig_typeof(), 0),
        new uFunction("set_Motion", NULL, (void*)StructuredNavigation__set_Motion_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::MotionConfig_typeof()),
        new uFunction("get_Progress", NULL, (void*)StructuredNavigation__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("QueueClearForwardHistory", NULL, (void*)StructuredNavigation__QueueClearForwardHistory_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_SeekRange", NULL, (void*)StructuredNavigation__get_SeekRange_fn, 0, false, ::g::Uno::Float2_typeof(), 0));
}

StructuredNavigation_type* StructuredNavigation_typeof()
{
    static uSStrong<StructuredNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::VisualNavigation_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(StructuredNavigation);
    options.TypeSize = sizeof(StructuredNavigation_type);
    type = (StructuredNavigation_type*)uClassType::New("Fuse.Navigation.StructuredNavigation", options);
    type->fp_build_ = StructuredNavigation_build;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))StructuredNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))StructuredNavigation__set_Active_fn;
    type->fp_get_CanGoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*, bool*))StructuredNavigation__get_CanGoBack_fn;
    type->fp_get_CanGoForward = (void(*)(::g::Fuse::Navigation::VisualNavigation*, bool*))StructuredNavigation__get_CanGoForward_fn;
    type->fp_GetPageState = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))StructuredNavigation__GetPageState_fn;
    type->fp_GoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*))StructuredNavigation__GoBack_fn;
    type->fp_GoForward = (void(*)(::g::Fuse::Navigation::VisualNavigation*))StructuredNavigation__GoForward_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int*))StructuredNavigation__Goto_fn;
    type->fp_OnChildAddedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))StructuredNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))StructuredNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))StructuredNavigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))StructuredNavigation__OnUnrooted_fn;
    type->fp_get_PageProgress = (void(*)(::g::Fuse::Navigation::VisualNavigation*, double*))StructuredNavigation__get_PageProgress_fn;
    type->interface7.fp_BeginSeek = (void(*)(uObject*))StructuredNavigation__FuseNavigationISeekableNavigationBeginSeek_fn;
    type->interface7.fp_Seek = (void(*)(uObject*, ::g::Fuse::Navigation::UpdateSeekArgs*))StructuredNavigation__FuseNavigationISeekableNavigationSeek_fn;
    type->interface7.fp_EndSeek = (void(*)(uObject*, ::g::Fuse::Navigation::EndSeekArgs*))StructuredNavigation__FuseNavigationISeekableNavigationEndSeek_fn;
    type->interface7.fp_get_SeekRange = (void(*)(uObject*, ::g::Uno::Float2*))StructuredNavigation__get_SeekRange_fn;
    type->interface4.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__GetPage_fn;
    type->interface4.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))StructuredNavigation__GetPageState_fn;
    type->interface4.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))StructuredNavigation__Goto_fn;
    type->interface4.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface4.fp_get_PageCount = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_PageCount_fn;
    type->interface4.fp_get_PageProgress = (void(*)(uObject*, double*))StructuredNavigation__get_PageProgress_fn;
    type->interface4.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface4.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageCountChanged_fn;
    type->interface4.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageCountChanged_fn;
    type->interface4.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface4.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface4.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface4.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface4.fp_add_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_ActivePageChanged_fn;
    type->interface4.fp_remove_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_ActivePageChanged_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))StructuredNavigation__GoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))StructuredNavigation__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))StructuredNavigation__get_CanGoBack_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))StructuredNavigation__get_CanGoForward_fn;
    type->interface6.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface6.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
    type->interface5.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))StructuredNavigation__OnChildAddedWhileRooted_fn;
    type->interface5.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))StructuredNavigation__OnChildRemovedWhileRooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal StructuredNavigation(Fuse.Navigation.StructuredNavigation.NavigationStructure mode) :3080
void StructuredNavigation__ctor_4_fn(StructuredNavigation* __this, int* mode)
{
    __this->ctor_4(*mode);
}

// public override sealed Fuse.Visual get_Active() :3421
void StructuredNavigation__get_Active_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :3422
void StructuredNavigation__set_Active_fn(StructuredNavigation* __this, ::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "set_Active(Fuse.Visual)");
    __this->Goto(value, 0);
}

// private void AnimationDone() :3404
void StructuredNavigation__AnimationDone_fn(StructuredNavigation* __this)
{
    __this->AnimationDone();
}

// private Fuse.Visual get_Back() :3532
void StructuredNavigation__get_Back_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Back();
}

// public override sealed bool get_CanGoBack() :3328
void StructuredNavigation__get_CanGoBack_fn(StructuredNavigation* __this, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_CanGoBack()");
    return *__retval = __this->HasPages() && (__this->_active != __this->Back()), void();
}

// public override sealed bool get_CanGoForward() :3320
void StructuredNavigation__get_CanGoForward_fn(StructuredNavigation* __this, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_CanGoForward()");
    return *__retval = __this->HasPages() && (__this->_active != __this->Front()), void();
}

// private void ChangeProgress(float prev, float next, Fuse.Navigation.NavigationMode mode) :3302
void StructuredNavigation__ChangeProgress_fn(StructuredNavigation* __this, float* prev, float* next, int* mode)
{
    __this->ChangeProgress(*prev, *next, *mode);
}

// private void CheckNeedUpdate([bool off]) :3238
void StructuredNavigation__CheckNeedUpdate_fn(StructuredNavigation* __this, bool* off)
{
    __this->CheckNeedUpdate(*off);
}

// private int ClampProgress(int progress) :3520
void StructuredNavigation__ClampProgress1_fn(StructuredNavigation* __this, int* progress, int* __retval)
{
    *__retval = __this->ClampProgress1(*progress);
}

// private void ClearForwardHistory() :3502
void StructuredNavigation__ClearForwardHistory_fn(StructuredNavigation* __this)
{
    __this->ClearForwardHistory();
}

// public double get_Duration() :3359
void StructuredNavigation__get_Duration_fn(StructuredNavigation* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public void set_Duration(double value) :3360
void StructuredNavigation__set_Duration_fn(StructuredNavigation* __this, double* value)
{
    __this->Duration(*value);
}

// public Fuse.Animations.Easing get_Easing() :3350
void StructuredNavigation__get_Easing_fn(StructuredNavigation* __this, ::g::Fuse::Animations::Easing** __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :3351
void StructuredNavigation__set_Easing_fn(StructuredNavigation* __this, ::g::Fuse::Animations::Easing* value)
{
    __this->Easing(value);
}

// private Fuse.Visual get_Front() :3537
void StructuredNavigation__get_Front_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Front();
}

// private void Fuse.Navigation.ISeekableNavigation.BeginSeek() :3438
void StructuredNavigation__FuseNavigationISeekableNavigationBeginSeek_fn(StructuredNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "Fuse.Navigation.ISeekableNavigation.BeginSeek()");
    ::g::Fuse::Navigation::NavigationStateArgs* collection6;
    __this->_seekBase = (float)__this->Progress();

    if (__this->_region != NULL)
    {
        __this->ResetRegionLimits();
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::StartUser(uInterface(uPtr(__this->_region), ::TYPES[55/*Fuse.Motion.Simulation.BoundedRegion2D*/]));
    }

    ::g::Fuse::Navigation::Navigation::NotifyNavigationState(__this->Parent(), (collection6 = ::g::Fuse::Navigation::NavigationStateArgs::New2(), uPtr(collection6)->State(1), 1, collection6));
}

// private void Fuse.Navigation.ISeekableNavigation.EndSeek(Fuse.Navigation.EndSeekArgs args) :3473
void StructuredNavigation__FuseNavigationISeekableNavigationEndSeek_fn(StructuredNavigation* __this, ::g::Fuse::Navigation::EndSeekArgs* args)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "Fuse.Navigation.ISeekableNavigation.EndSeek(Fuse.Navigation.EndSeekArgs)");
    ::g::Uno::Float2 ret8;
    int targetIndex = 0;

    switch (uPtr(args)->SnapTo())
    {
        case 0:
        {
            targetIndex = __this->ClampProgress1((int)::g::Uno::Math::Floor(__this->Progress()));
            break;
        }
        case 2:
        {
            targetIndex = __this->ClampProgress1((int)::g::Uno::Math::Ceil(__this->Progress()));
            break;
        }
        case 1:
        {
            double diff = __this->Progress() - ::g::Uno::Math::Floor(__this->Progress());
            targetIndex = __this->ClampProgress1((diff > 0.5) ? (int)::g::Uno::Math::Ceil(__this->Progress()) : (int)::g::Uno::Math::Floor(__this->Progress()));
            break;
        }
    }

    if (__this->_region != NULL)
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(__this->_region), ::TYPES[55/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(uPtr(args)->Velocity(), 0.0f));

    if (!__this->TransitionToChild(__this->GetPage(targetIndex), false, true))
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::Reset(uInterface(uPtr(__this->_region), ::TYPES[55/*Fuse.Motion.Simulation.BoundedRegion2D*/]), (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_region), ::TYPES[56/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret8), ret8));
}

// private void Fuse.Navigation.ISeekableNavigation.Seek(Fuse.Navigation.UpdateSeekArgs args) :3459
void StructuredNavigation__FuseNavigationISeekableNavigationSeek_fn(StructuredNavigation* __this, ::g::Fuse::Navigation::UpdateSeekArgs* args)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "Fuse.Navigation.ISeekableNavigation.Seek(Fuse.Navigation.UpdateSeekArgs)");
    ::g::Uno::Float2 ret9;

    if (__this->_region == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[80/*"Seek being ...*/], __this, ::STRINGS[1/*"/Users/most...*/], 3463, ::STRINGS[81/*"Fuse.Naviga...*/]);
        return;
    }

    float prev = (float)__this->Progress();
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StepUser(uInterface(uPtr(__this->_region), ::TYPES[55/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(uPtr(args)->RelativeDelta(), 0.0f));
    __this->ChangeProgress(prev, (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_region), ::TYPES[56/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret9), ret9).X, 2);
    __this->CheckNeedUpdate(false);
}

// public override sealed Fuse.Navigation.NavigationPageState GetPageState(Fuse.Visual page) :3308
void StructuredNavigation__GetPageState_fn(StructuredNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "GetPageState(Fuse.Visual)");
    ::g::Fuse::Navigation::NavigationPageState collection3;
    ::g::Fuse::Navigation::NavigationPageState collection4;
    ::g::Fuse::Navigation::VisualNavigation__PageData* pd = __this->GetPageData(page);

    if (pd == NULL)
        return *__retval = (collection3 = uDefault< ::g::Fuse::Navigation::NavigationPageState>(), collection3.Progress = 0.0f, collection3.PreviousProgress = 0.0f, collection3), void();

    collection4 = uDefault< ::g::Fuse::Navigation::NavigationPageState>();
    collection4.Progress = ((float)__this->Progress() - (float)uPtr(pd)->Index);
    collection4.PreviousProgress = (__this->_prevProgress - (float)uPtr(pd)->Index);
    return *__retval = collection4, void();
}

// public override sealed void GoBack() :3340
void StructuredNavigation__GoBack_fn(StructuredNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "GoBack()");

    if (__this->CanGoBack())
        __this->TransitionToChild(__this->Previous(), false, false);
}

// public override sealed void GoForward() :3334
void StructuredNavigation__GoForward_fn(StructuredNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "GoForward()");

    if (__this->CanGoForward())
        __this->TransitionToChild(__this->Next(), false, false);
}

// public override sealed void Goto(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) :3141
void StructuredNavigation__Goto_fn(StructuredNavigation* __this, ::g::Fuse::Visual* element, int* mode)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "Goto(Fuse.Visual,Fuse.Navigation.NavigationGotoMode)");
    int mode_ = *mode;

    if ((mode_ != 0) && (mode_ != 1))
        return;

    if (__this->Parent() == NULL)
    {
        __this->SetActive(element);
        return;
    }

    if (element == __this->_active)
        return;

    if (element == NULL)
        __this->SetActive(NULL);
    else
        __this->GotoImpl(element, mode_);
}

// public void GotoImpl(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) :3163
void StructuredNavigation__GotoImpl_fn(StructuredNavigation* __this, ::g::Fuse::Visual* element, int* mode)
{
    __this->GotoImpl(element, *mode);
}

// private int get_MaxIndex() :3527
void StructuredNavigation__get_MaxIndex_fn(StructuredNavigation* __this, int* __retval)
{
    *__retval = __this->MaxIndex();
}

// internal generated Fuse.Navigation.StructuredNavigation.NavigationStructure get_Mode() :3078
void StructuredNavigation__get_Mode_fn(StructuredNavigation* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// internal generated void set_Mode(Fuse.Navigation.StructuredNavigation.NavigationStructure value) :3078
void StructuredNavigation__set_Mode_fn(StructuredNavigation* __this, int* value)
{
    __this->Mode(*value);
}

// public Fuse.Motion.MotionConfig get_Motion() :3089
void StructuredNavigation__get_Motion_fn(StructuredNavigation* __this, ::g::Fuse::Motion::MotionConfig** __retval)
{
    *__retval = __this->Motion();
}

// public void set_Motion(Fuse.Motion.MotionConfig value) :3095
void StructuredNavigation__set_Motion_fn(StructuredNavigation* __this, ::g::Fuse::Motion::MotionConfig* value)
{
    __this->Motion(value);
}

// private Fuse.Visual get_Next() :3547
void StructuredNavigation__get_Next_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Next();
}

// public override sealed void OnChildAddedWhileRooted(Fuse.Node child) :3367
void StructuredNavigation__OnChildAddedWhileRooted_fn(StructuredNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "OnChildAddedWhileRooted(Fuse.Node)");
    ::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn(__this, child);
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[4/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if (__this->_active != NULL)
        __this->SetProgress((float)__this->GetPageIndex(__this->_active));

    if (__this->_active == NULL)
        __this->SetActive(v);

    __this->OnHistoryChanged();
}

// public override sealed void OnChildRemovedWhileRooted(Fuse.Node child) :3383
void StructuredNavigation__OnChildRemovedWhileRooted_fn(StructuredNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "OnChildRemovedWhileRooted(Fuse.Node)");
    ::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn(__this, child);
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[4/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if (__this->_active == child)
        __this->SetActive(NULL);

    __this->OnHistoryChanged();
    __this->ChangeProgress((float)__this->Progress(), (float)__this->Progress(), 1);
}

// protected override sealed void OnRooted() :3105
void StructuredNavigation__OnRooted_fn(StructuredNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "OnRooted()");
    ::g::Fuse::Navigation::VisualNavigation__OnRooted_fn(__this);

    if (((__this->_active != NULL) && (uPtr(__this->_active)->Parent() != NULL)) && (__this->Parent() != uPtr(__this->_active)->Parent()))
        __this->SetActive(NULL);

    if ((__this->PageCount() > 0) && (__this->_active == NULL))
        __this->SetActive(__this->GetPage(0));

    if (__this->_active != NULL)
        __this->GotoImpl(__this->_active, 1);

    __this->_region = uPtr(__this->Motion())->AcquireSimulation();
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->_region), ::TYPES[56/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(::g::Uno::Float2__New2(__this->_progress, 0.0f)));
}

// protected override sealed void OnUnrooted() :3123
void StructuredNavigation__OnUnrooted_fn(StructuredNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "OnUnrooted()");
    ::g::Uno::Float2 ret11;

    if (__this->_region != NULL)
    {
        __this->_progress = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_region), ::TYPES[56/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret11), ret11).X;
        __this->_region = NULL;
        uPtr(__this->Motion())->ReleaseSimulation();
    }

    __this->CheckNeedUpdate(true);
    ::g::Fuse::Navigation::VisualNavigation__OnUnrooted_fn(__this);
}

// private void OnUpdated() :3257
void StructuredNavigation__OnUpdated_fn(StructuredNavigation* __this)
{
    __this->OnUpdated();
}

// public override sealed double get_PageProgress() :3138
void StructuredNavigation__get_PageProgress_fn(StructuredNavigation* __this, double* __retval)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_PageProgress()");
    return *__retval = __this->Progress(), void();
}

// private Fuse.Visual get_Previous() :3542
void StructuredNavigation__get_Previous_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Previous();
}

// public double get_Progress() :3400
void StructuredNavigation__get_Progress_fn(StructuredNavigation* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public void QueueClearForwardHistory() :3201
void StructuredNavigation__QueueClearForwardHistory_fn(StructuredNavigation* __this)
{
    __this->QueueClearForwardHistory();
}

// private void ResetRegionLimits() :3276
void StructuredNavigation__ResetRegionLimits_fn(StructuredNavigation* __this)
{
    __this->ResetRegionLimits();
}

// public float2 get_SeekRange() :3456
void StructuredNavigation__get_SeekRange_fn(StructuredNavigation* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SeekRange();
}

// private void SetActive(Fuse.Visual page) :3428
void StructuredNavigation__SetActive_fn(StructuredNavigation* __this, ::g::Fuse::Visual* page)
{
    __this->SetActive(page);
}

// private void SetProgress(float value) :3282
void StructuredNavigation__SetProgress_fn(StructuredNavigation* __this, float* value)
{
    __this->SetProgress(*value);
}

// private bool TransitionToChild(Fuse.Visual element, [bool bypass], [bool clamp]) :3209
void StructuredNavigation__TransitionToChild_fn(StructuredNavigation* __this, ::g::Fuse::Visual* element, bool* bypass, bool* clamp, bool* __retval)
{
    *__retval = __this->TransitionToChild(element, *bypass, *clamp);
}

// internal StructuredNavigation(Fuse.Navigation.StructuredNavigation.NavigationStructure mode) [instance] :3080
void StructuredNavigation::ctor_4(int mode)
{
    _reuseExistingVisual = true;
    ctor_3();
    Mode(mode);
}

// private void AnimationDone() [instance] :3404
void StructuredNavigation::AnimationDone()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "AnimationDone()");
    ::g::Fuse::Navigation::NavigationStateArgs* collection5;

    if (_queueClearForwardHistory)
    {
        ClearForwardHistory();
        _queueClearForwardHistory = false;
    }

    OnNavigated(_active);
    OnHistoryChanged();
    ::g::Fuse::Navigation::Navigation::NotifyNavigationState(Parent(), (collection5 = ::g::Fuse::Navigation::NavigationStateArgs::New2(), uPtr(collection5)->State(0), 0, collection5));
}

// private Fuse.Visual get_Back() [instance] :3532
::g::Fuse::Visual* StructuredNavigation::Back()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Back()");
    return (PageCount() > 0) ? (::g::Fuse::Visual*)GetPage(MaxIndex()) : NULL;
}

// private void ChangeProgress(float prev, float next, Fuse.Navigation.NavigationMode mode) [instance] :3302
void StructuredNavigation::ChangeProgress(float prev, float next, int mode)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "ChangeProgress(float,float,Fuse.Navigation.NavigationMode)");
    _prevProgress = prev;
    OnPageProgressChanged((double)next, (double)prev, mode);
}

// private void CheckNeedUpdate([bool off]) [instance] :3238
void StructuredNavigation::CheckNeedUpdate(bool off)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "CheckNeedUpdate([bool])");
    bool needUpdated = (_region != NULL) && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::TYPES[54/*Fuse.Motion.Simulation.Simulation*/]));

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)StructuredNavigation__OnUpdated_fn, this), 0);
        _hasUpdated = true;
    }
    else if (off)
    {
        AnimationDone();
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)StructuredNavigation__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// private int ClampProgress(int progress) [instance] :3520
int StructuredNavigation::ClampProgress1(int progress)
{
    return ::g::Uno::Math::Clamp8(progress, 0, MaxIndex());
}

// private void ClearForwardHistory() [instance] :3502
void StructuredNavigation::ClearForwardHistory()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "ClearForwardHistory()");
    bool ret7;

    if (HasPages() && (_active != Front()))
    {
        int target = GetPageIndex(_active);

        for (int i = target - 1; i >= 0; i--)
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Node>*/]), GetPage(i), &ret7);
    }

    OnHistoryChanged();
}

// public double get_Duration() [instance] :3359
double StructuredNavigation::Duration()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Duration()");
    return (double)uPtr(Motion())->GotoDuration();
}

// public void set_Duration(double value) [instance] :3360
void StructuredNavigation::Duration(double value)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "set_Duration(double)");
    uPtr(Motion())->GotoDuration((float)value);
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[86/*"Use a `Navi...*/], this, ::STRINGS[1/*"/Users/most...*/], 3363, ::STRINGS[87/*"set_Duration"*/]);
}

// public Fuse.Animations.Easing get_Easing() [instance] :3350
::g::Fuse::Animations::Easing* StructuredNavigation::Easing()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Easing()");
    return uPtr(Motion())->GotoEasing();
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :3351
void StructuredNavigation::Easing(::g::Fuse::Animations::Easing* value)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "set_Easing(Fuse.Animations.Easing)");
    uPtr(Motion())->GotoEasing(value);
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[88/*"Use a `Navi...*/], this, ::STRINGS[1/*"/Users/most...*/], 3354, ::STRINGS[89/*"set_Easing"*/]);
}

// private Fuse.Visual get_Front() [instance] :3537
::g::Fuse::Visual* StructuredNavigation::Front()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Front()");
    return (PageCount() > 0) ? (::g::Fuse::Visual*)GetPage(0) : NULL;
}

// public void GotoImpl(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) [instance] :3163
void StructuredNavigation::GotoImpl(::g::Fuse::Visual* element, int mode)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "GotoImpl(Fuse.Visual,Fuse.Navigation.NavigationGotoMode)");
    bool ret10;

    if ((uPtr(element)->Parent() != NULL) && (uPtr(element)->Parent() != Parent()))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[82/*"Attempting ...*/], element, ::STRINGS[1/*"/Users/most...*/], 3168, ::STRINGS[83/*"GotoImpl"*/]);
        SetActive(NULL);
        return;
    }

    if (!(::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Node>*/]), element, &ret10), ret10))
    {
        if (Mode() == 1)
        {
            ClearForwardHistory();
            ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[21/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(0), element);
        }
        else
            return;
    }
    else if (!_reuseExistingVisual)
    {
        if (Mode() == 1)
        {
            double diff = Progress() - (double)GetPageIndex(_active);
            uPtr(Parent())->BeginRemoveChild(element, NULL);
            SetProgress((float)((double)GetPageIndex(_active) + diff));
            ClearForwardHistory();
            ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[21/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(0), element);
        }
    }

    TransitionToChild(element, (mode & 1) == 1, false);
    OnHistoryChanged();
}

// private int get_MaxIndex() [instance] :3527
int StructuredNavigation::MaxIndex()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_MaxIndex()");
    return PageCount() - 1;
}

// internal generated Fuse.Navigation.StructuredNavigation.NavigationStructure get_Mode() [instance] :3078
int StructuredNavigation::Mode()
{
    return _Mode;
}

// internal generated void set_Mode(Fuse.Navigation.StructuredNavigation.NavigationStructure value) [instance] :3078
void StructuredNavigation::Mode(int value)
{
    _Mode = value;
}

// public Fuse.Motion.MotionConfig get_Motion() [instance] :3089
::g::Fuse::Motion::MotionConfig* StructuredNavigation::Motion()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Motion()");

    if (_motion == NULL)
        _motion = ::g::Fuse::Motion::NavigationMotion::New2();

    return _motion;
}

// public void set_Motion(Fuse.Motion.MotionConfig value) [instance] :3095
void StructuredNavigation::Motion(::g::Fuse::Motion::MotionConfig* value)
{
    _motion = value;

    if (IsRootingCompleted())
        ::g::Fuse::Diagnostics::UserError(::STRINGS[90/*"Motion shou...*/], this, ::STRINGS[1/*"/Users/most...*/], 3099, ::STRINGS[91/*"set_Motion"*/]);
}

// private Fuse.Visual get_Next() [instance] :3547
::g::Fuse::Visual* StructuredNavigation::Next()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Next()");
    return GetPage(GetPageIndex(_active) - 1);
}

// private void OnUpdated() [instance] :3257
void StructuredNavigation::OnUpdated()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "OnUpdated()");
    ::g::Uno::Float2 ret12;
    ::g::Uno::Float2 ret13;

    if (_region == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[84/*"Updated cal...*/], this, ::STRINGS[1/*"/Users/most...*/], 3261, ::STRINGS[85/*"OnUpdated"*/]);
        return;
    }

    float prev = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[56/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret12), ret12).X;
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_region), ::TYPES[54/*Fuse.Motion.Simulation.Simulation*/]), ::g::Fuse::Time::FrameInterval());
    ChangeProgress(prev, (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[56/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret13), ret13).X, 2);
    CheckNeedUpdate(true);
}

// private Fuse.Visual get_Previous() [instance] :3542
::g::Fuse::Visual* StructuredNavigation::Previous()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Previous()");
    return GetPage(GetPageIndex(_active) + 1);
}

// public double get_Progress() [instance] :3400
double StructuredNavigation::Progress()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Progress()");
    ::g::Uno::Float2 ret16;
    return (double)((_region == NULL) ? _progress : (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[56/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret16), ret16).X);
}

// public void QueueClearForwardHistory() [instance] :3201
void StructuredNavigation::QueueClearForwardHistory()
{
    _queueClearForwardHistory = true;
}

// private void ResetRegionLimits() [instance] :3276
void StructuredNavigation::ResetRegionLimits()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "ResetRegionLimits()");
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MaxPosition(uInterface(uPtr(_region), ::TYPES[55/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2((float)MaxIndex(), 0.0f));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MinPosition(uInterface(uPtr(_region), ::TYPES[55/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New1(0.0f));
}

// public float2 get_SeekRange() [instance] :3456
::g::Uno::Float2 StructuredNavigation::SeekRange()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_SeekRange()");
    return ::g::Uno::Float2__New2(-_seekBase, (float)MaxIndex() - _seekBase);
}

// private void SetActive(Fuse.Visual page) [instance] :3428
void StructuredNavigation::SetActive(::g::Fuse::Visual* page)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "SetActive(Fuse.Visual)");

    if (page == _active)
        return;

    _active = page;
    OnActiveChanged(_active);
}

// private void SetProgress(float value) [instance] :3282
void StructuredNavigation::SetProgress(float value)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "SetProgress(float)");
    ::g::Uno::Float2 ret14;
    ::g::Uno::Float2 ret15;
    float prev;

    if (_region != NULL)
    {
        ResetRegionLimits();
        prev = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[56/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret14), ret14).X;
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[56/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(::g::Uno::Float2__New2(value, 0.0f)));
        value = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[56/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret15), ret15).X;
    }
    else
    {
        prev = _progress;
        _progress = value;
    }

    ChangeProgress(prev, value, 1);
}

// private bool TransitionToChild(Fuse.Visual element, [bool bypass], [bool clamp]) [instance] :3209
bool StructuredNavigation::TransitionToChild(::g::Fuse::Visual* element, bool bypass, bool clamp)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "TransitionToChild(Fuse.Visual,[bool],[bool])");
    ::g::Fuse::Navigation::NavigationStateArgs* collection1;
    ::g::Fuse::Navigation::NavigationStateArgs* collection2;
    float targetProgress = (float)GetPageIndex(element);
    SetActive(element);

    if (bypass || !IsRootingCompleted())
    {
        SetProgress(targetProgress);
        OnNavigated(element);
        return false;
    }

    if (Progress() == (double)targetProgress)
    {
        ::g::Fuse::Navigation::Navigation::NotifyNavigationState(Parent(), (collection1 = ::g::Fuse::Navigation::NavigationStateArgs::New2(), uPtr(collection1)->State(0), 0, collection1));
        return false;
    }

    ::g::Fuse::Navigation::Navigation::NotifyNavigationState(Parent(), (collection2 = ::g::Fuse::Navigation::NavigationStateArgs::New2(), uPtr(collection2)->State(2), 2, collection2));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MoveTo(uInterface(uPtr(_region), ::TYPES[55/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(targetProgress, 0.0f));
    CheckNeedUpdate(false);
    return true;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public enum SwipeDirection :3648
uEnumType* SwipeDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.SwipeDirection", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Right", 0LL,
        "Left", 1LL,
        "Down", 2LL,
        "Up", 3LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class SwipeNavigate :3672
// {
// static SwipeNavigate() :3672
static void SwipeNavigate__cctor_1_fn(uType* __type)
{
    SwipeNavigate::elasticDecay_ = 0.015f;
    SwipeNavigate::elasticScale_ = 0.4f;
}

static void SwipeNavigate_build(uType* type)
{
    ::STRINGS[92] = uString::Const("SwipeNavigate: failed to find suitable Navigation object");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno");
    ::TYPES[57] = ::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[58] = ::g::Fuse::Gestures::DegreeSpan_typeof()->Array();
    ::TYPES[43] = ::g::Fuse::Node_typeof();
    ::TYPES[59] = ::g::Fuse::Navigation::ISeekableNavigation_typeof();
    ::TYPES[25] = ::g::Uno::Action_typeof();
    ::TYPES[60] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[61] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[62] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[11] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _currentCoord), 0,
        ::TYPES[59/*Fuse.Navigation.ISeekableNavigation*/], offsetof(::g::Fuse::Navigation::SwipeNavigate, _currentNavigation), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _down), 0,
        ::g::Fuse::Navigation::SwipeDirection_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _forwardDirection), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _hasMaxPages), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _horizontalGesture), 0,
        ::TYPES[11/*Fuse.Elements.Element*/], offsetof(::g::Fuse::Navigation::SwipeNavigate, _lengthNode), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _maxPages), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _prevDistance), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _startCoord), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _startTime), 0,
        ::g::Fuse::Navigation::AllowedNavigationDirections_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _swipeAllow), 0,
        ::TYPES[57/*Fuse.Motion.Simulation.PointerVelocity<float2>*/], offsetof(::g::Fuse::Navigation::SwipeNavigate, _velocity), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _verticalGesture), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _VelocityThreshold), 0,
        ::g::Uno::Float_typeof(), (uintptr_t)&::g::Fuse::Navigation::SwipeNavigate::elasticDecay_, uFieldFlagsStatic,
        ::g::Uno::Float_typeof(), (uintptr_t)&::g::Fuse::Navigation::SwipeNavigate::elasticScale_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(13,
        new uFunction("get_AllowedDirections", NULL, (void*)SwipeNavigate__get_AllowedDirections_fn, 0, false, ::g::Fuse::Navigation::AllowedNavigationDirections_typeof(), 0),
        new uFunction("set_AllowedDirections", NULL, (void*)SwipeNavigate__set_AllowedDirections_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::AllowedNavigationDirections_typeof()),
        new uFunction("get_ForwardDirection", NULL, (void*)SwipeNavigate__get_ForwardDirection_fn, 0, false, ::g::Fuse::Navigation::SwipeDirection_typeof(), 0),
        new uFunction("set_ForwardDirection", NULL, (void*)SwipeNavigate__set_ForwardDirection_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::SwipeDirection_typeof()),
        new uFunction("get_LengthNode", NULL, (void*)SwipeNavigate__get_LengthNode_fn, 0, false, ::TYPES[11/*Fuse.Elements.Element*/], 0),
        new uFunction("set_LengthNode", NULL, (void*)SwipeNavigate__set_LengthNode_fn, 0, false, uVoid_typeof(), 1, ::TYPES[11/*Fuse.Elements.Element*/]),
        new uFunction("get_MaxPages", NULL, (void*)SwipeNavigate__get_MaxPages_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_MaxPages", NULL, (void*)SwipeNavigate__set_MaxPages_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)SwipeNavigate__New2_fn, 0, true, type, 0),
        new uFunction("get_SwipeDirection", NULL, (void*)SwipeNavigate__get_SwipeDirection_fn, 0, false, ::g::Fuse::Navigation::SwipeDirection_typeof(), 0),
        new uFunction("set_SwipeDirection", NULL, (void*)SwipeNavigate__set_SwipeDirection_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::SwipeDirection_typeof()),
        new uFunction("get_VelocityThreshold", NULL, (void*)SwipeNavigate__get_VelocityThreshold_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_VelocityThreshold", NULL, (void*)SwipeNavigate__set_VelocityThreshold_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Node_type* SwipeNavigate_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(SwipeNavigate);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Navigation.SwipeNavigate", options);
    type->fp_build_ = SwipeNavigate_build;
    type->fp_ctor_ = (void*)SwipeNavigate__New2_fn;
    type->fp_cctor_ = SwipeNavigate__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))SwipeNavigate__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))SwipeNavigate__OnUnrooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public SwipeNavigate() :3786
void SwipeNavigate__ctor_3_fn(SwipeNavigate* __this)
{
    __this->ctor_3();
}

// public Fuse.Navigation.AllowedNavigationDirections get_AllowedDirections() :3933
void SwipeNavigate__get_AllowedDirections_fn(SwipeNavigate* __this, int* __retval)
{
    *__retval = __this->AllowedDirections();
}

// public void set_AllowedDirections(Fuse.Navigation.AllowedNavigationDirections value) :3934
void SwipeNavigate__set_AllowedDirections_fn(SwipeNavigate* __this, int* value)
{
    __this->AllowedDirections(*value);
}

// private Fuse.Navigation.SnapTo DetermineSnap() :3993
void SwipeNavigate__DetermineSnap_fn(SwipeNavigate* __this, int* __retval)
{
    *__retval = __this->DetermineSnap();
}

// private float2 get_Distance() :3902
void SwipeNavigate__get_Distance_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Distance();
}

// private double get_ElapsedTime() :3907
void SwipeNavigate__get_ElapsedTime_fn(SwipeNavigate* __this, double* __retval)
{
    *__retval = __this->ElapsedTime();
}

// public Fuse.Navigation.SwipeDirection get_ForwardDirection() :3710
void SwipeNavigate__get_ForwardDirection_fn(SwipeNavigate* __this, int* __retval)
{
    *__retval = __this->ForwardDirection();
}

// public void set_ForwardDirection(Fuse.Navigation.SwipeDirection value) :3711
void SwipeNavigate__set_ForwardDirection_fn(SwipeNavigate* __this, int* value)
{
    __this->ForwardDirection(*value);
}

// private Fuse.Navigation.UpdateSeekArgs GetNavigationArgs() :3937
void SwipeNavigate__GetNavigationArgs_fn(SwipeNavigate* __this, ::g::Fuse::Navigation::UpdateSeekArgs** __retval)
{
    *__retval = __this->GetNavigationArgs();
}

// private Fuse.Navigation.SwipeDirection Invert(Fuse.Navigation.SwipeDirection sd) :3724
void SwipeNavigate__Invert_fn(SwipeNavigate* __this, int* sd, int* __retval)
{
    *__retval = __this->Invert(*sd);
}

// private bool get_IsHorizontal() :3767
void SwipeNavigate__get_IsHorizontal_fn(SwipeNavigate* __this, bool* __retval)
{
    *__retval = __this->IsHorizontal();
}

// public Fuse.Elements.Element get_LengthNode() :3746
void SwipeNavigate__get_LengthNode_fn(SwipeNavigate* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->LengthNode();
}

// public void set_LengthNode(Fuse.Elements.Element value) :3747
void SwipeNavigate__set_LengthNode_fn(SwipeNavigate* __this, ::g::Fuse::Elements::Element* value)
{
    __this->LengthNode(value);
}

// public float get_MaxPages() :3759
void SwipeNavigate__get_MaxPages_fn(SwipeNavigate* __this, float* __retval)
{
    *__retval = __this->MaxPages();
}

// public void set_MaxPages(float value) :3760
void SwipeNavigate__set_MaxPages_fn(SwipeNavigate* __this, float* value)
{
    __this->MaxPages(*value);
}

// private Fuse.Navigation.ISeekableNavigation get_Navigation() :3676
void SwipeNavigate__get_Navigation_fn(SwipeNavigate* __this, uObject** __retval)
{
    *__retval = __this->Navigation();
}

// public SwipeNavigate New() :3786
void SwipeNavigate__New2_fn(SwipeNavigate** __retval)
{
    *__retval = SwipeNavigate::New2();
}

// private void OnLostCapture() :3793
void SwipeNavigate__OnLostCapture_fn(SwipeNavigate* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :3824
void SwipeNavigate__OnPointerMoved_fn(SwipeNavigate* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :3805
void SwipeNavigate__OnPointerPressed_fn(SwipeNavigate* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :3862
void SwipeNavigate__OnPointerReleased_fn(SwipeNavigate* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// protected override sealed void OnRooted() :3685
void SwipeNavigate__OnRooted_fn(SwipeNavigate* __this)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[60/*Fuse.Input.PointerPressedHandler*/], (void*)SwipeNavigate__OnPointerPressed_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), __this->Parent(), uDelegate::New(::TYPES[61/*Fuse.Input.PointerMovedHandler*/], (void*)SwipeNavigate__OnPointerMoved_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->Parent(), uDelegate::New(::TYPES[62/*Fuse.Input.PointerReleasedHandler*/], (void*)SwipeNavigate__OnPointerReleased_fn, __this));
}

// protected override sealed void OnUnrooted() :3694
void SwipeNavigate__OnUnrooted_fn(SwipeNavigate* __this)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "OnUnrooted()");
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[60/*Fuse.Input.PointerPressedHandler*/], (void*)SwipeNavigate__OnPointerPressed_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), __this->Parent(), uDelegate::New(::TYPES[61/*Fuse.Input.PointerMovedHandler*/], (void*)SwipeNavigate__OnPointerMoved_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->Parent(), uDelegate::New(::TYPES[62/*Fuse.Input.PointerReleasedHandler*/], (void*)SwipeNavigate__OnPointerReleased_fn, __this));
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private float get_ProgressVelocity() :3912
void SwipeNavigate__get_ProgressVelocity_fn(SwipeNavigate* __this, float* __retval)
{
    *__retval = __this->ProgressVelocity();
}

// private float2 get_Scale() :3889
void SwipeNavigate__get_Scale_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Scale();
}

// public Fuse.Navigation.SwipeDirection get_SwipeDirection() :3720
void SwipeNavigate__get_SwipeDirection_fn(SwipeNavigate* __this, int* __retval)
{
    *__retval = __this->SwipeDirection();
}

// public void set_SwipeDirection(Fuse.Navigation.SwipeDirection value) :3721
void SwipeNavigate__set_SwipeDirection_fn(SwipeNavigate* __this, int* value)
{
    __this->SwipeDirection(*value);
}

// public generated float get_VelocityThreshold() :3736
void SwipeNavigate__get_VelocityThreshold_fn(SwipeNavigate* __this, float* __retval)
{
    *__retval = __this->VelocityThreshold();
}

// public generated void set_VelocityThreshold(float value) :3736
void SwipeNavigate__set_VelocityThreshold_fn(SwipeNavigate* __this, float* value)
{
    __this->VelocityThreshold(*value);
}

float SwipeNavigate::elasticDecay_;
float SwipeNavigate::elasticScale_;

// public SwipeNavigate() [instance] :3786
void SwipeNavigate::ctor_3()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", ".ctor()");
    _velocity = ((::g::Fuse::Motion::Simulation::PointerVelocity*)::g::Fuse::Motion::Simulation::PointerVelocity::New1(::TYPES[57/*Fuse.Motion.Simulation.PointerVelocity<float2>*/]));
    _forwardDirection = 1;
    _horizontalGesture = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[58/*Fuse.Gestures.DegreeSpan[]*/], 2, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(75.0f, 105.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-75.0f, -105.0f)));
    _verticalGesture = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[58/*Fuse.Gestures.DegreeSpan[]*/], 3, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-15.0f, 15.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-165.0f, -180.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(165.0f, 180.0f)));
    _down = -1;
    _swipeAllow = 3;
    ctor_2();
    VelocityThreshold(300.0f);
}

// public Fuse.Navigation.AllowedNavigationDirections get_AllowedDirections() [instance] :3933
int SwipeNavigate::AllowedDirections()
{
    return _swipeAllow;
}

// public void set_AllowedDirections(Fuse.Navigation.AllowedNavigationDirections value) [instance] :3934
void SwipeNavigate::AllowedDirections(int value)
{
    _swipeAllow = value;
}

// private Fuse.Navigation.SnapTo DetermineSnap() [instance] :3993
int SwipeNavigate::DetermineSnap()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "DetermineSnap()");
    ::g::Uno::Float2 ret2;
    ::g::Uno::Float2 ret3;
    float diff = IsHorizontal() ? (::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret2), ret2).X : (::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret3), ret3).Y;

    if ((ForwardDirection() == 0) || (ForwardDirection() == 2))
        diff = -diff;

    int q = 1;

    if ((diff < -VelocityThreshold()) && ((AllowedDirections() & 1) == 1))
        q = 0;

    if ((diff > VelocityThreshold()) && ((AllowedDirections() & 2) == 2))
        q = 2;

    return q;
}

// private float2 get_Distance() [instance] :3902
::g::Uno::Float2 SwipeNavigate::Distance()
{
    return ::g::Uno::Float2__op_Subtraction2(_currentCoord, _startCoord);
}

// private double get_ElapsedTime() [instance] :3907
double SwipeNavigate::ElapsedTime()
{
    return ::g::Fuse::Time::FrameTime() - _startTime;
}

// public Fuse.Navigation.SwipeDirection get_ForwardDirection() [instance] :3710
int SwipeNavigate::ForwardDirection()
{
    return _forwardDirection;
}

// public void set_ForwardDirection(Fuse.Navigation.SwipeDirection value) [instance] :3711
void SwipeNavigate::ForwardDirection(int value)
{
    _forwardDirection = value;
}

// private Fuse.Navigation.UpdateSeekArgs GetNavigationArgs() [instance] :3937
::g::Fuse::Navigation::UpdateSeekArgs* SwipeNavigate::GetNavigationArgs()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "GetNavigationArgs()");
    float distance, scale;

    if (IsHorizontal())
    {
        distance = Distance().X;
        scale = Scale().X;
    }
    else
    {
        distance = Distance().Y;
        scale = Scale().Y;
    }

    if ((ForwardDirection() == 0) || (ForwardDirection() == 2))
        distance = -distance;

    float rel = distance / scale;

    if (!((AllowedDirections() & 2) == 2))
        rel = ::g::Uno::Math::Min1(0.0f, rel);

    if (!((AllowedDirections() & 1) == 1))
        rel = ::g::Uno::Math::Max1(0.0f, rel);

    if (_hasMaxPages)
        rel = ::g::Uno::Math::Clamp1(rel, -_maxPages, _maxPages);

    float clampDistance = rel * scale;
    float delta = clampDistance - _prevDistance;
    _prevDistance = clampDistance;
    return ::g::Fuse::Navigation::UpdateSeekArgs::New1(delta, clampDistance, scale, ElapsedTime());
}

// private Fuse.Navigation.SwipeDirection Invert(Fuse.Navigation.SwipeDirection sd) [instance] :3724
int SwipeNavigate::Invert(int sd)
{
    switch (sd)
    {
        case 1:
            return 0;
        case 0:
            return 1;
        case 3:
            return 2;
        case 2:
            return 3;
    }

    return 1;
}

// private bool get_IsHorizontal() [instance] :3767
bool SwipeNavigate::IsHorizontal()
{
    return (ForwardDirection() == 1) || (ForwardDirection() == 0);
}

// public Fuse.Elements.Element get_LengthNode() [instance] :3746
::g::Fuse::Elements::Element* SwipeNavigate::LengthNode()
{
    return _lengthNode;
}

// public void set_LengthNode(Fuse.Elements.Element value) [instance] :3747
void SwipeNavigate::LengthNode(::g::Fuse::Elements::Element* value)
{
    _lengthNode = value;
}

// public float get_MaxPages() [instance] :3759
float SwipeNavigate::MaxPages()
{
    return _maxPages;
}

// public void set_MaxPages(float value) [instance] :3760
void SwipeNavigate::MaxPages(float value)
{
    _hasMaxPages = true;
    _maxPages = value;
}

// private Fuse.Navigation.ISeekableNavigation get_Navigation() [instance] :3676
uObject* SwipeNavigate::Navigation()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "get_Navigation()");
    return uAs<uObject*>(::g::Fuse::Navigation::Navigation::TryFindBaseNavigation(ContextParent()), ::TYPES[59/*Fuse.Navigation.ISeekableNavigation*/]);
}

// private void OnLostCapture() [instance] :3793
void SwipeNavigate::OnLostCapture()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "OnLostCapture()");
    _down = -1;

    if (_currentNavigation != NULL)
    {
        if (uPtr(uAs< ::g::Fuse::Node*>(_currentNavigation, ::TYPES[43/*Fuse.Node*/]))->IsRootingCompleted())
            ::g::Fuse::Navigation::ISeekableNavigation::EndSeek(uInterface(uPtr(_currentNavigation), ::TYPES[59/*Fuse.Navigation.ISeekableNavigation*/]), ::g::Fuse::Navigation::EndSeekArgs::New1(1, 0.0f));

        _currentNavigation = NULL;
    }
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :3824
void SwipeNavigate::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "OnPointerMoved(object,Fuse.Input.PointerMovedArgs)");

    if (_down != uPtr(args)->PointIndex())
        return;

    if (_currentNavigation == NULL)
        return;

    _currentCoord = uPtr(args)->WindowPoint();
    ::g::Fuse::Motion::Simulation::PointerVelocity__AddSampleTime_fn(uPtr(_velocity), uCRef(_currentCoord), uCRef(args->Timestamp()), uCRef<int>(args->IsHardCapturedTo(this) ? 0 : 1));

    if (args->IsHardCapturedTo(this))
        ::g::Fuse::Navigation::ISeekableNavigation::Seek(uInterface(uPtr(_currentNavigation), ::TYPES[59/*Fuse.Navigation.ISeekableNavigation*/]), GetNavigationArgs());
    else
    {
        ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(_currentCoord, _startCoord);
        bool withinBounds = IsHorizontal() ? uPtr(_horizontalGesture)->IsWithinBounds(diff) : uPtr(_verticalGesture)->IsWithinBounds(diff);

        if (withinBounds)
        {
            _startCoord = (_currentCoord = uPtr(args)->WindowPoint());
            _prevDistance = 0.0f;
            _startTime = ::g::Fuse::Time::FrameTime();

            if (args->TryHardCapture(this, uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)SwipeNavigate__OnLostCapture_fn, this), NULL))
                ::g::Fuse::Navigation::ISeekableNavigation::BeginSeek(uInterface(uPtr(_currentNavigation), ::TYPES[59/*Fuse.Navigation.ISeekableNavigation*/]));
            else
                OnLostCapture();
        }
    }
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :3805
void SwipeNavigate::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "OnPointerPressed(object,Fuse.Input.PointerPressedArgs)");
    _currentNavigation = Navigation();

    if (_currentNavigation == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[92/*"SwipeNaviga...*/], 1, ::STRINGS[1/*"/Users/most...*/], 3810);
        return;
    }

    if (uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)SwipeNavigate__OnLostCapture_fn, this), NULL))
    {
        _down = uPtr(args)->PointIndex();
        _startCoord = (_currentCoord = args->WindowPoint());
        _prevDistance = 0.0f;
        _startTime = ::g::Fuse::Time::FrameTime();
        ::g::Fuse::Motion::Simulation::PointerVelocity__Reset1_fn(uPtr(_velocity), uCRef(_startCoord), uCRef(::g::Uno::Float2__New1(0.0f)), uCRef(args->Timestamp()));
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :3862
void SwipeNavigate::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "OnPointerReleased(object,Fuse.Input.PointerReleasedArgs)");
    _currentCoord = uPtr(args)->WindowPoint();
    ::g::Fuse::Motion::Simulation::PointerVelocity__AddSampleTime_fn(uPtr(_velocity), uCRef(_currentCoord), uCRef(args->Timestamp()), uCRef<int>(2));
    _down = -1;

    if (_currentNavigation == NULL)
        return;

    if (args->IsHardCapturedTo(this))
    {
        ::g::Fuse::Navigation::ISeekableNavigation::EndSeek(uInterface(uPtr(_currentNavigation), ::TYPES[59/*Fuse.Navigation.ISeekableNavigation*/]), ::g::Fuse::Navigation::EndSeekArgs::New1(DetermineSnap(), ProgressVelocity()));
        uPtr(args)->ReleaseHardCapture(this);
    }
    else
    {
        if (uPtr(args)->IsSoftCapturedTo(this))
            uPtr(args)->ReleaseSoftCapture(this);
    }

    _currentNavigation = NULL;
}

// private float get_ProgressVelocity() [instance] :3912
float SwipeNavigate::ProgressVelocity()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "get_ProgressVelocity()");
    ::g::Uno::Float2 ret4;
    ::g::Uno::Float2 ret5;
    ::g::Uno::Float2 ret6;
    ::g::Uno::Float2 ret7;

    switch (SwipeDirection())
    {
        case 1:
            return -(::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret4), ret4).X / Scale().X;
        case 0:
            return (::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret5), ret5).X / Scale().X;
        case 3:
            return -(::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret6), ret6).Y / Scale().Y;
        case 2:
            return (::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret7), ret7).Y / Scale().Y;
    }

    return 0.0f;
}

// private float2 get_Scale() [instance] :3889
::g::Uno::Float2 SwipeNavigate::Scale()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "get_Scale()");

    if (_lengthNode != NULL)
        return uPtr(_lengthNode)->ActualSize();

    ::g::Fuse::Elements::Element* e = uAs< ::g::Fuse::Elements::Element*>(Parent(), ::TYPES[11/*Fuse.Elements.Element*/]);

    if (e == NULL)
        return ::g::Uno::Float2__New1(1.0f);

    return uPtr(e)->ActualSize();
}

// public Fuse.Navigation.SwipeDirection get_SwipeDirection() [instance] :3720
int SwipeNavigate::SwipeDirection()
{
    return Invert(ForwardDirection());
}

// public void set_SwipeDirection(Fuse.Navigation.SwipeDirection value) [instance] :3721
void SwipeNavigate::SwipeDirection(int value)
{
    ForwardDirection(Invert(value));
}

// public generated float get_VelocityThreshold() [instance] :3736
float SwipeNavigate::VelocityThreshold()
{
    return _VelocityThreshold;
}

// public generated void set_VelocityThreshold(float value) [instance] :3736
void SwipeNavigate::VelocityThreshold(float value)
{
    _VelocityThreshold = value;
}

// public SwipeNavigate New() [static] :3786
SwipeNavigate* SwipeNavigate::New2()
{
    SwipeNavigate* obj1 = (SwipeNavigate*)uNew(SwipeNavigate_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class UpdateSeekArgs :3595
// {
static void UpdateSeekArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::UpdateSeekArgs, _scale), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::UpdateSeekArgs, _time), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::UpdateSeekArgs, _Delta), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::UpdateSeekArgs, _Distance), 0);
}

uType* UpdateSeekArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(UpdateSeekArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.UpdateSeekArgs", options);
    type->fp_build_ = UpdateSeekArgs_build;
    return type;
}

// public UpdateSeekArgs(float delta, float distance, float scale, double time) :3613
void UpdateSeekArgs__ctor__fn(UpdateSeekArgs* __this, float* delta, float* distance, float* scale, double* time)
{
    __this->ctor_(*delta, *distance, *scale, *time);
}

// public generated float get_Delta() :3597
void UpdateSeekArgs__get_Delta_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->Delta();
}

// private generated void set_Delta(float value) :3597
void UpdateSeekArgs__set_Delta_fn(UpdateSeekArgs* __this, float* value)
{
    __this->Delta(*value);
}

// public generated float get_Distance() :3598
void UpdateSeekArgs__get_Distance_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->Distance();
}

// private generated void set_Distance(float value) :3598
void UpdateSeekArgs__set_Distance_fn(UpdateSeekArgs* __this, float* value)
{
    __this->Distance(*value);
}

// public UpdateSeekArgs New(float delta, float distance, float scale, double time) :3613
void UpdateSeekArgs__New1_fn(float* delta, float* distance, float* scale, double* time, UpdateSeekArgs** __retval)
{
    *__retval = UpdateSeekArgs::New1(*delta, *distance, *scale, *time);
}

// public float get_RelativeDelta() :3602
void UpdateSeekArgs__get_RelativeDelta_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->RelativeDelta();
}

// public float get_RelativeDistance() :3607
void UpdateSeekArgs__get_RelativeDistance_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->RelativeDistance();
}

// public UpdateSeekArgs(float delta, float distance, float scale, double time) [instance] :3613
void UpdateSeekArgs::ctor_(float delta, float distance, float scale, double time)
{
    Delta(delta);
    Distance(distance);
    _scale = scale;
    _time = time;
}

// public generated float get_Delta() [instance] :3597
float UpdateSeekArgs::Delta()
{
    return _Delta;
}

// private generated void set_Delta(float value) [instance] :3597
void UpdateSeekArgs::Delta(float value)
{
    _Delta = value;
}

// public generated float get_Distance() [instance] :3598
float UpdateSeekArgs::Distance()
{
    return _Distance;
}

// private generated void set_Distance(float value) [instance] :3598
void UpdateSeekArgs::Distance(float value)
{
    _Distance = value;
}

// public float get_RelativeDelta() [instance] :3602
float UpdateSeekArgs::RelativeDelta()
{
    return Delta() / _scale;
}

// public float get_RelativeDistance() [instance] :3607
float UpdateSeekArgs::RelativeDistance()
{
    return Distance() / _scale;
}

// public UpdateSeekArgs New(float delta, float distance, float scale, double time) [static] :3613
UpdateSeekArgs* UpdateSeekArgs::New1(float delta, float distance, float scale, double time)
{
    UpdateSeekArgs* obj1 = (UpdateSeekArgs*)uNew(UpdateSeekArgs_typeof());
    obj1->ctor_(delta, distance, scale, time);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public interfacemodifiers class VisualNavigation :4251
// {
// static VisualNavigation() :4253
static void VisualNavigation__cctor_1_fn(uType* __type)
{
    VisualNavigation::ActiveIndexName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[93/*"ActiveIndex"*/]);
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[36/*Fuse.Scripting.ScriptMember[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[63/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.VisualNavigation>*/], ::STRINGS[34/*"goto"*/], uDelegate::New(::TYPES[64/*Uno.Action<Fuse.Scripting.Context, Fuse.Navigation.VisualNavigation, object[]>*/], (void*)VisualNavigation__gotoNode_fn), 2)));
}

static void VisualNavigation_build(uType* type)
{
    ::STRINGS[93] = uString::Const("ActiveIndex");
    ::STRINGS[34] = uString::Const("goto");
    ::STRINGS[94] = uString::Const("Navigation.goto() : Argument must be a node object");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno");
    ::STRINGS[95] = uString::Const("gotoNode");
    ::TYPES[35] = ::g::Uno::Type_typeof();
    ::TYPES[36] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[63] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[64] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), NULL);
    ::TYPES[65] = ::g::Uno::Collections::List_typeof()->MakeType(VisualNavigation__PageData_typeof(), NULL);
    ::TYPES[66] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Visual_typeof(), VisualNavigation__PageData_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    ::TYPES[20] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Navigation::ActivePageChangedHandler_typeof();
    ::TYPES[53] = ::g::Fuse::Navigation::HistoryChangedHandler_typeof();
    ::TYPES[34] = ::g::Fuse::Navigation::NavigatedHandler_typeof();
    ::TYPES[67] = ::g::Fuse::Navigation::NavigationPageCountHandler_typeof();
    ::TYPES[26] = ::g::Fuse::Navigation::NavigationHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(VisualNavigation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(VisualNavigation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(VisualNavigation_type, interface3),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(VisualNavigation_type, interface4),
        ::g::Fuse::IParentObserver_typeof(), offsetof(VisualNavigation_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(VisualNavigation_type, interface6));
    type->SetFields(13,
        ::TYPES[66/*Uno.Collections.Dictionary<Fuse.Visual, Fuse.Navigation.VisualNavigation.PageData>*/], offsetof(::g::Fuse::Navigation::VisualNavigation, _pageMap), 0,
        ::TYPES[65/*Uno.Collections.List<Fuse.Navigation.VisualNavigation.PageData>*/], offsetof(::g::Fuse::Navigation::VisualNavigation, _pages), 0,
        ::TYPES[2/*Fuse.Navigation.ActivePageChangedHandler*/], offsetof(::g::Fuse::Navigation::VisualNavigation, ActivePageChanged1), 0,
        ::TYPES[53/*Fuse.Navigation.HistoryChangedHandler*/], offsetof(::g::Fuse::Navigation::VisualNavigation, HistoryChanged1), 0,
        ::TYPES[34/*Fuse.Navigation.NavigatedHandler*/], offsetof(::g::Fuse::Navigation::VisualNavigation, Navigated1), 0,
        ::TYPES[67/*Fuse.Navigation.NavigationPageCountHandler*/], offsetof(::g::Fuse::Navigation::VisualNavigation, PageCountChanged1), 0,
        ::TYPES[26/*Fuse.Navigation.NavigationHandler*/], offsetof(::g::Fuse::Navigation::VisualNavigation, PageProgressChanged1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Navigation::VisualNavigation::ActiveIndexName_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("ActiveIndexName", 20));
    type->Reflection.SetFunctions(29,
        new uFunction("get_Active", NULL, NULL, offsetof(VisualNavigation_type, fp_get_Active), false, ::TYPES[4/*Fuse.Visual*/], 0),
        new uFunction("set_Active", NULL, NULL, offsetof(VisualNavigation_type, fp_set_Active), false, uVoid_typeof(), 1, ::TYPES[4/*Fuse.Visual*/]),
        new uFunction("get_ActiveIndex", NULL, (void*)VisualNavigation__get_ActiveIndex_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_ActiveIndex", NULL, (void*)VisualNavigation__set_ActiveIndex_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_ActivePage", NULL, (void*)VisualNavigation__get_ActivePage_fn, 0, false, ::TYPES[4/*Fuse.Visual*/], 0),
        new uFunction("add_ActivePageChanged", NULL, (void*)VisualNavigation__add_ActivePageChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[2/*Fuse.Navigation.ActivePageChangedHandler*/]),
        new uFunction("remove_ActivePageChanged", NULL, (void*)VisualNavigation__remove_ActivePageChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[2/*Fuse.Navigation.ActivePageChangedHandler*/]),
        new uFunction("get_CanGoBack", NULL, NULL, offsetof(VisualNavigation_type, fp_get_CanGoBack), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanGoForward", NULL, NULL, offsetof(VisualNavigation_type, fp_get_CanGoForward), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("ClearHistory", NULL, (void*)VisualNavigation__ClearHistory_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("GetPage", NULL, (void*)VisualNavigation__GetPage_fn, 0, false, ::TYPES[4/*Fuse.Visual*/], 1, ::g::Uno::Int_typeof()),
        new uFunction("GetPageState", NULL, NULL, offsetof(VisualNavigation_type, fp_GetPageState), false, ::g::Fuse::Navigation::NavigationPageState_typeof(), 1, ::TYPES[4/*Fuse.Visual*/]),
        new uFunction("GoBack", NULL, NULL, offsetof(VisualNavigation_type, fp_GoBack), false, uVoid_typeof(), 0),
        new uFunction("GoForward", NULL, NULL, offsetof(VisualNavigation_type, fp_GoForward), false, uVoid_typeof(), 0),
        new uFunction("Goto", NULL, NULL, offsetof(VisualNavigation_type, fp_Goto), false, uVoid_typeof(), 2, ::TYPES[4/*Fuse.Visual*/], ::g::Fuse::Navigation::NavigationGotoMode_typeof()),
        new uFunction("add_HistoryChanged", NULL, (void*)VisualNavigation__add_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[53/*Fuse.Navigation.HistoryChangedHandler*/]),
        new uFunction("remove_HistoryChanged", NULL, (void*)VisualNavigation__remove_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[53/*Fuse.Navigation.HistoryChangedHandler*/]),
        new uFunction("add_Navigated", NULL, (void*)VisualNavigation__add_Navigated_fn, 0, false, uVoid_typeof(), 1, ::TYPES[34/*Fuse.Navigation.NavigatedHandler*/]),
        new uFunction("remove_Navigated", NULL, (void*)VisualNavigation__remove_Navigated_fn, 0, false, uVoid_typeof(), 1, ::TYPES[34/*Fuse.Navigation.NavigatedHandler*/]),
        new uFunction("OnChildAddedWhileRooted", NULL, NULL, offsetof(VisualNavigation_type, fp_OnChildAddedWhileRooted), false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("OnChildRemovedWhileRooted", NULL, NULL, offsetof(VisualNavigation_type, fp_OnChildRemovedWhileRooted), false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_PageCount", NULL, (void*)VisualNavigation__get_PageCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("add_PageCountChanged", NULL, (void*)VisualNavigation__add_PageCountChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[67/*Fuse.Navigation.NavigationPageCountHandler*/]),
        new uFunction("remove_PageCountChanged", NULL, (void*)VisualNavigation__remove_PageCountChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[67/*Fuse.Navigation.NavigationPageCountHandler*/]),
        new uFunction("get_PageProgress", NULL, NULL, offsetof(VisualNavigation_type, fp_get_PageProgress), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("add_PageProgressChanged", NULL, (void*)VisualNavigation__add_PageProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[26/*Fuse.Navigation.NavigationHandler*/]),
        new uFunction("remove_PageProgressChanged", NULL, (void*)VisualNavigation__remove_PageProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[26/*Fuse.Navigation.NavigationHandler*/]),
        new uFunction("SetActiveIndex", NULL, (void*)VisualNavigation__SetActiveIndex_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("Toggle", NULL, NULL, offsetof(VisualNavigation_type, fp_Toggle), false, uVoid_typeof(), 1, ::TYPES[4/*Fuse.Visual*/]));
}

VisualNavigation_type* VisualNavigation_typeof()
{
    static uSStrong<VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 21;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(VisualNavigation);
    options.TypeSize = sizeof(VisualNavigation_type);
    type = (VisualNavigation_type*)uClassType::New("Fuse.Navigation.VisualNavigation", options);
    type->fp_build_ = VisualNavigation_build;
    type->fp_cctor_ = VisualNavigation__cctor_1_fn;
    type->fp_get_CanGoBack = VisualNavigation__get_CanGoBack_fn;
    type->fp_get_CanGoForward = VisualNavigation__get_CanGoForward_fn;
    type->fp_GetPageState = VisualNavigation__GetPageState_fn;
    type->fp_GoBack = VisualNavigation__GoBack_fn;
    type->fp_GoForward = VisualNavigation__GoForward_fn;
    type->fp_OnChildAddedWhileRooted = VisualNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = VisualNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))VisualNavigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))VisualNavigation__OnUnrooted_fn;
    type->fp_Toggle = VisualNavigation__Toggle_fn;
    type->interface4.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Visual**))VisualNavigation__GetPage_fn;
    type->interface4.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))VisualNavigation__GetPageState_fn;
    type->interface4.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))VisualNavigation__Toggle_fn;
    type->interface4.fp_get_PageCount = (void(*)(uObject*, int*))VisualNavigation__get_PageCount_fn;
    type->interface4.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))VisualNavigation__get_ActivePage_fn;
    type->interface4.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__add_PageCountChanged_fn;
    type->interface4.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_PageCountChanged_fn;
    type->interface4.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__add_PageProgressChanged_fn;
    type->interface4.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_PageProgressChanged_fn;
    type->interface4.fp_add_Navigated = (void(*)(uObject*, uDelegate*))VisualNavigation__add_Navigated_fn;
    type->interface4.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_Navigated_fn;
    type->interface4.fp_add_ActivePageChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__add_ActivePageChanged_fn;
    type->interface4.fp_remove_ActivePageChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_ActivePageChanged_fn;
    type->interface5.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))VisualNavigation__OnChildAddedWhileRooted_fn;
    type->interface5.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))VisualNavigation__OnChildRemovedWhileRooted_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))VisualNavigation__GoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))VisualNavigation__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))VisualNavigation__get_CanGoBack_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))VisualNavigation__get_CanGoForward_fn;
    type->interface6.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__add_HistoryChanged_fn;
    type->interface6.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_HistoryChanged_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal VisualNavigation() :4273
void VisualNavigation__ctor_3_fn(VisualNavigation* __this)
{
    __this->ctor_3();
}

// public int get_ActiveIndex() :4481
void VisualNavigation__get_ActiveIndex_fn(VisualNavigation* __this, int* __retval)
{
    *__retval = __this->ActiveIndex();
}

// public void set_ActiveIndex(int value) :4486
void VisualNavigation__set_ActiveIndex_fn(VisualNavigation* __this, int* value)
{
    __this->ActiveIndex(*value);
}

// public Fuse.Visual get_ActivePage() :4455
void VisualNavigation__get_ActivePage_fn(VisualNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->ActivePage();
}

// public generated void add_ActivePageChanged(Fuse.Navigation.ActivePageChangedHandler value) :4324
void VisualNavigation__add_ActivePageChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_ActivePageChanged(value);
}

// public generated void remove_ActivePageChanged(Fuse.Navigation.ActivePageChangedHandler value) :4324
void VisualNavigation__remove_ActivePageChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_ActivePageChanged(value);
}

// public virtual bool get_CanGoBack() :4348
void VisualNavigation__get_CanGoBack_fn(VisualNavigation* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public virtual bool get_CanGoForward() :4349
void VisualNavigation__get_CanGoForward_fn(VisualNavigation* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public void ClearHistory() :4350
void VisualNavigation__ClearHistory_fn(VisualNavigation* __this)
{
    __this->ClearHistory();
}

// public Fuse.Visual GetPage(int index) :4448
void VisualNavigation__GetPage_fn(VisualNavigation* __this, int* index, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->GetPage(*index);
}

// protected Fuse.Navigation.VisualNavigation.PageData GetPageData(Fuse.Visual page) :4371
void VisualNavigation__GetPageData_fn(VisualNavigation* __this, ::g::Fuse::Visual* page, VisualNavigation__PageData** __retval)
{
    *__retval = __this->GetPageData(page);
}

// protected int GetPageIndex(Fuse.Visual child) :4462
void VisualNavigation__GetPageIndex_fn(VisualNavigation* __this, ::g::Fuse::Visual* child, int* __retval)
{
    *__retval = __this->GetPageIndex(child);
}

// public virtual Fuse.Navigation.NavigationPageState GetPageState(Fuse.Visual page) :4280
void VisualNavigation__GetPageState_fn(VisualNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "GetPageState(Fuse.Visual)");
    ::g::Fuse::Navigation::NavigationPageState collection1;
    ::g::Fuse::Navigation::NavigationPageState collection2;
    VisualNavigation__PageData* pd = __this->GetPageData(page);

    if (pd == NULL)
        return *__retval = (collection1 = uDefault< ::g::Fuse::Navigation::NavigationPageState>(), collection1.Progress = 0.0f, collection1.PreviousProgress = 0.0f, collection1), void();

    collection2 = uDefault< ::g::Fuse::Navigation::NavigationPageState>();
    collection2.Progress = uPtr(pd)->Progress;
    collection2.PreviousProgress = uPtr(pd)->PreviousProgress;
    return *__retval = collection2, void();
}

// public virtual void GoBack() :4347
void VisualNavigation__GoBack_fn(VisualNavigation* __this)
{
}

// public virtual void GoForward() :4346
void VisualNavigation__GoForward_fn(VisualNavigation* __this)
{
}

// private static void gotoNode(Fuse.Scripting.Context c, Fuse.Navigation.VisualNavigation nav, object[] args) :4266
void VisualNavigation__gotoNode_fn(::g::Fuse::Scripting::Context* c, VisualNavigation* nav, uArray* args)
{
    VisualNavigation::gotoNode(c, nav, args);
}

// protected bool get_HasPages() :4459
void VisualNavigation__get_HasPages_fn(VisualNavigation* __this, bool* __retval)
{
    *__retval = __this->HasPages();
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :4338
void VisualNavigation__add_HistoryChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_HistoryChanged(value);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :4338
void VisualNavigation__remove_HistoryChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_HistoryChanged(value);
}

// public generated void add_Navigated(Fuse.Navigation.NavigatedHandler value) :4310
void VisualNavigation__add_Navigated_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_Navigated(value);
}

// public generated void remove_Navigated(Fuse.Navigation.NavigatedHandler value) :4310
void VisualNavigation__remove_Navigated_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_Navigated(value);
}

// protected void OnActiveChanged(Fuse.Visual newElement) :4330
void VisualNavigation__OnActiveChanged_fn(VisualNavigation* __this, ::g::Fuse::Visual* newElement)
{
    __this->OnActiveChanged(newElement);
}

// public virtual void OnChildAddedWhileRooted(Fuse.Node child) :4422
void VisualNavigation__OnChildAddedWhileRooted_fn(VisualNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnChildAddedWhileRooted(Fuse.Node)");
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[4/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    __this->UpdatePages();
}

// public virtual void OnChildRemovedWhileRooted(Fuse.Node child) :4431
void VisualNavigation__OnChildRemovedWhileRooted_fn(VisualNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnChildRemovedWhileRooted(Fuse.Node)");
    bool ret5;
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[4/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->_pageMap), v, &ret5);
    __this->UpdatePages();
}

// protected void OnHistoryChanged() :4340
void VisualNavigation__OnHistoryChanged_fn(VisualNavigation* __this)
{
    __this->OnHistoryChanged();
}

// protected void OnNavigated(Fuse.Visual newElement) :4315
void VisualNavigation__OnNavigated_fn(VisualNavigation* __this, ::g::Fuse::Visual* newElement)
{
    __this->OnNavigated(newElement);
}

// protected void OnPageCountChanged() :4291
void VisualNavigation__OnPageCountChanged_fn(VisualNavigation* __this)
{
    __this->OnPageCountChanged();
}

// protected void OnPageProgressChanged(double current, double prev, Fuse.Navigation.NavigationMode mode) :4304
void VisualNavigation__OnPageProgressChanged_fn(VisualNavigation* __this, double* current, double* prev, int* mode)
{
    __this->OnPageProgressChanged(*current, *prev, *mode);
}

// protected void OnPageProgressChanged(Fuse.Navigation.NavigationMode mode) :4299
void VisualNavigation__OnPageProgressChanged1_fn(VisualNavigation* __this, int* mode)
{
    __this->OnPageProgressChanged1(*mode);
}

// protected override void OnRooted() :4382
void VisualNavigation__OnRooted_fn(VisualNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    uPtr(__this->_pageMap)->Clear();
    __this->UpdatePages();
}

// protected override void OnUnrooted() :4415
void VisualNavigation__OnUnrooted_fn(VisualNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnUnrooted()");
    uPtr(__this->_pages)->Clear();
    uPtr(__this->_pageMap)->Clear();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public int get_PageCount() :4445
void VisualNavigation__get_PageCount_fn(VisualNavigation* __this, int* __retval)
{
    *__retval = __this->PageCount();
}

// public generated void add_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) :4289
void VisualNavigation__add_PageCountChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_PageCountChanged(value);
}

// public generated void remove_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) :4289
void VisualNavigation__remove_PageCountChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_PageCountChanged(value);
}

// public generated void add_PageProgressChanged(Fuse.Navigation.NavigationHandler value) :4297
void VisualNavigation__add_PageProgressChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_PageProgressChanged(value);
}

// public generated void remove_PageProgressChanged(Fuse.Navigation.NavigationHandler value) :4297
void VisualNavigation__remove_PageProgressChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_PageProgressChanged(value);
}

// protected internal Uno.Collections.IList<Fuse.Navigation.VisualNavigation.PageData> get_Pages() :4369
void VisualNavigation__get_Pages_fn(VisualNavigation* __this, uObject** __retval)
{
    *__retval = __this->Pages();
}

// public void SetActiveIndex(int value, Uno.UX.IPropertyListener origin) :4488
void VisualNavigation__SetActiveIndex_fn(VisualNavigation* __this, int* value, uObject* origin)
{
    __this->SetActiveIndex(*value, origin);
}

// public virtual void Toggle(Fuse.Visual page) :4277
void VisualNavigation__Toggle_fn(VisualNavigation* __this, ::g::Fuse::Visual* page)
{
}

// private void UpdatePages() :4389
void VisualNavigation__UpdatePages_fn(VisualNavigation* __this)
{
    __this->UpdatePages();
}

::g::Uno::UX::Selector VisualNavigation::ActiveIndexName_;

// internal VisualNavigation() [instance] :4273
void VisualNavigation::ctor_3()
{
    _pages = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[65/*Uno.Collections.List<Fuse.Navigation.VisualNavigation.PageData>*/]));
    _pageMap = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[66/*Uno.Collections.Dictionary<Fuse.Visual, Fuse.Navigation.VisualNavigation.PageData>*/]));
    ctor_2();
}

// public int get_ActiveIndex() [instance] :4481
int VisualNavigation::ActiveIndex()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "get_ActiveIndex()");
    VisualNavigation__PageData* pd = GetPageData(Active());
    return (pd == NULL) ? -1 : uPtr(pd)->Index;
}

// public void set_ActiveIndex(int value) [instance] :4486
void VisualNavigation::ActiveIndex(int value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "set_ActiveIndex(int)");
    SetActiveIndex(value, NULL);
}

// public Fuse.Visual get_ActivePage() [instance] :4455
::g::Fuse::Visual* VisualNavigation::ActivePage()
{
    return Active();
}

// public generated void add_ActivePageChanged(Fuse.Navigation.ActivePageChangedHandler value) [instance] :4324
void VisualNavigation::add_ActivePageChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "add_ActivePageChanged(Fuse.Navigation.ActivePageChangedHandler)");
    ActivePageChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ActivePageChanged1, value), ::TYPES[2/*Fuse.Navigation.ActivePageChangedHandler*/]);
}

// public generated void remove_ActivePageChanged(Fuse.Navigation.ActivePageChangedHandler value) [instance] :4324
void VisualNavigation::remove_ActivePageChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "remove_ActivePageChanged(Fuse.Navigation.ActivePageChangedHandler)");
    ActivePageChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ActivePageChanged1, value), ::TYPES[2/*Fuse.Navigation.ActivePageChangedHandler*/]);
}

// public void ClearHistory() [instance] :4350
void VisualNavigation::ClearHistory()
{
}

// public Fuse.Visual GetPage(int index) [instance] :4448
::g::Fuse::Visual* VisualNavigation::GetPage(int index)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "GetPage(int)");
    VisualNavigation__PageData* ret3;

    if ((index < 0) || (index >= uPtr(_pages)->Count()))
        return NULL;

    return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_pages), uCRef<int>(index), &ret3), ret3))->Visual();
}

// protected Fuse.Navigation.VisualNavigation.PageData GetPageData(Fuse.Visual page) [instance] :4371
VisualNavigation__PageData* VisualNavigation::GetPageData(::g::Fuse::Visual* page)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "GetPageData(Fuse.Visual)");
    bool ret4;

    if (page == NULL)
        return NULL;

    VisualNavigation__PageData* pd;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_pageMap), page, (void**)(&pd), &ret4), ret4))
        return NULL;

    return pd;
}

// protected int GetPageIndex(Fuse.Visual child) [instance] :4462
int VisualNavigation::GetPageIndex(::g::Fuse::Visual* child)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "GetPageIndex(Fuse.Visual)");
    VisualNavigation__PageData* pd = GetPageData(child);

    if (pd == NULL)
        return -1;

    return uPtr(pd)->Index;
}

// protected bool get_HasPages() [instance] :4459
bool VisualNavigation::HasPages()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "get_HasPages()");
    return uPtr(_pages)->Count() > 0;
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :4338
void VisualNavigation::add_HistoryChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler)");
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(HistoryChanged1, value), ::TYPES[53/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :4338
void VisualNavigation::remove_HistoryChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler)");
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(HistoryChanged1, value), ::TYPES[53/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public generated void add_Navigated(Fuse.Navigation.NavigatedHandler value) [instance] :4310
void VisualNavigation::add_Navigated(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "add_Navigated(Fuse.Navigation.NavigatedHandler)");
    Navigated1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Navigated1, value), ::TYPES[34/*Fuse.Navigation.NavigatedHandler*/]);
}

// public generated void remove_Navigated(Fuse.Navigation.NavigatedHandler value) [instance] :4310
void VisualNavigation::remove_Navigated(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "remove_Navigated(Fuse.Navigation.NavigatedHandler)");
    Navigated1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Navigated1, value), ::TYPES[34/*Fuse.Navigation.NavigatedHandler*/]);
}

// protected void OnActiveChanged(Fuse.Visual newElement) [instance] :4330
void VisualNavigation::OnActiveChanged(::g::Fuse::Visual* newElement)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnActiveChanged(Fuse.Visual)");
    OnPropertyChanged(VisualNavigation::ActiveIndexName());

    if (::g::Uno::Delegate::op_Inequality(ActivePageChanged1, NULL))
        uPtr(ActivePageChanged1)->Invoke(2, this, newElement);
}

// protected void OnHistoryChanged() [instance] :4340
void VisualNavigation::OnHistoryChanged()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnHistoryChanged()");

    if (::g::Uno::Delegate::op_Inequality(HistoryChanged1, NULL))
        uPtr(HistoryChanged1)->InvokeVoid(this);
}

// protected void OnNavigated(Fuse.Visual newElement) [instance] :4315
void VisualNavigation::OnNavigated(::g::Fuse::Visual* newElement)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnNavigated(Fuse.Visual)");
    uDelegate* handler = Navigated1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, this, (::g::Fuse::Navigation::NavigatedArgs*)::g::Fuse::Navigation::NavigatedArgs::New2(newElement));
}

// protected void OnPageCountChanged() [instance] :4291
void VisualNavigation::OnPageCountChanged()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnPageCountChanged()");

    if (::g::Uno::Delegate::op_Inequality(PageCountChanged1, NULL))
        uPtr(PageCountChanged1)->InvokeVoid(this);
}

// protected void OnPageProgressChanged(double current, double prev, Fuse.Navigation.NavigationMode mode) [instance] :4304
void VisualNavigation::OnPageProgressChanged(double current, double prev, int mode)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnPageProgressChanged(double,double,Fuse.Navigation.NavigationMode)");

    if (::g::Uno::Delegate::op_Inequality(PageProgressChanged1, NULL))
        uPtr(PageProgressChanged1)->Invoke(2, this, (::g::Fuse::Navigation::NavigationArgs*)::g::Fuse::Navigation::NavigationArgs::New2(current, prev, mode));
}

// protected void OnPageProgressChanged(Fuse.Navigation.NavigationMode mode) [instance] :4299
void VisualNavigation::OnPageProgressChanged1(int mode)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnPageProgressChanged(Fuse.Navigation.NavigationMode)");
    OnPageProgressChanged(0.0, 0.0, mode);
}

// public int get_PageCount() [instance] :4445
int VisualNavigation::PageCount()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "get_PageCount()");
    return uPtr(_pages)->Count();
}

// public generated void add_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) [instance] :4289
void VisualNavigation::add_PageCountChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "add_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler)");
    PageCountChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageCountChanged1, value), ::TYPES[67/*Fuse.Navigation.NavigationPageCountHandler*/]);
}

// public generated void remove_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) [instance] :4289
void VisualNavigation::remove_PageCountChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "remove_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler)");
    PageCountChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageCountChanged1, value), ::TYPES[67/*Fuse.Navigation.NavigationPageCountHandler*/]);
}

// public generated void add_PageProgressChanged(Fuse.Navigation.NavigationHandler value) [instance] :4297
void VisualNavigation::add_PageProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "add_PageProgressChanged(Fuse.Navigation.NavigationHandler)");
    PageProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageProgressChanged1, value), ::TYPES[26/*Fuse.Navigation.NavigationHandler*/]);
}

// public generated void remove_PageProgressChanged(Fuse.Navigation.NavigationHandler value) [instance] :4297
void VisualNavigation::remove_PageProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "remove_PageProgressChanged(Fuse.Navigation.NavigationHandler)");
    PageProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageProgressChanged1, value), ::TYPES[26/*Fuse.Navigation.NavigationHandler*/]);
}

// protected internal Uno.Collections.IList<Fuse.Navigation.VisualNavigation.PageData> get_Pages() [instance] :4369
uObject* VisualNavigation::Pages()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "get_Pages()");
    return (uObject*)_pages;
}

// public void SetActiveIndex(int value, Uno.UX.IPropertyListener origin) [instance] :4488
void VisualNavigation::SetActiveIndex(int value, uObject* origin)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "SetActiveIndex(int,Uno.UX.IPropertyListener)");

    if (value == ActiveIndex())
        return;

    Active(GetPage(value));
}

// private void UpdatePages() [instance] :4389
void VisualNavigation::UpdatePages()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "UpdatePages()");
    ::g::Fuse::Node* ret6;
    bool ret7;
    uPtr(_pages)->Clear();
    int c = 0;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Visual* x = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[21/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret6), ret6), ::TYPES[4/*Fuse.Visual*/]);

        if (!::g::Fuse::Navigation::Navigation::IsPage(x))
            continue;

        VisualNavigation__PageData* pd;

        if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_pageMap), x, (void**)(&pd), &ret7), ret7))
        {
            pd = VisualNavigation__PageData::New1(x);
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_pageMap), x, pd);
        }

        uPtr(pd)->Index = c;
        ::g::Uno::Collections::List__Add_fn(uPtr(_pages), pd);
        c++;
    }

    OnPageCountChanged();
}

// private static void gotoNode(Fuse.Scripting.Context c, Fuse.Navigation.VisualNavigation nav, object[] args) [static] :4266
void VisualNavigation::gotoNode(::g::Fuse::Scripting::Context* c, VisualNavigation* nav, uArray* args)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "gotoNode(Fuse.Scripting.Context,Fuse.Navigation.VisualNavigation,object[])");
    VisualNavigation_typeof()->Init();
    ::g::Fuse::Visual* target = uAs< ::g::Fuse::Visual*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[4/*Fuse.Visual*/]);

    if (target != NULL)
        uPtr(nav)->Goto(target, 0);
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[94/*"Navigation....*/], nav, ::STRINGS[1/*"/Users/most...*/], 4270, ::STRINGS[95/*"gotoNode"*/]);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class WhileActive :4765
// {
static void WhileActive_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface4));
    type->SetFields(33);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileActive__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileActive_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileNavigationTrigger_typeof();
    options.FieldCount = 33;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileActive);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileActive", options);
    type->fp_build_ = WhileActive_build;
    type->fp_ctor_ = (void*)WhileActive__New2_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*))WhileActive__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))WhileActive__OnNavigationStateChanged_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileActive() :4765
void WhileActive__ctor_6_fn(WhileActive* __this)
{
    __this->ctor_6();
}

// protected override sealed void ForceUpdate() :4767
void WhileActive__ForceUpdate_fn(WhileActive* __this)
{
    uStackFrame __("Fuse.Navigation.WhileActive", "ForceUpdate()");
    __this->GoProgress(__this->InvertProgress((double)::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress));
}

// private double InvertProgress(double p) :4772
void WhileActive__InvertProgress_fn(WhileActive* __this, double* p, double* __retval)
{
    *__retval = __this->InvertProgress(*p);
}

// public generated WhileActive New() :4765
void WhileActive__New2_fn(WhileActive** __retval)
{
    *__retval = WhileActive::New2();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :4777
void WhileActive__OnNavigationStateChanged_fn(WhileActive* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    uStackFrame __("Fuse.Navigation.WhileActive", "OnNavigationStateChanged(object,Fuse.Navigation.NavigationArgs)");
    __this->GoProgress(__this->InvertProgress((double)::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress));
}

// public generated WhileActive() [instance] :4765
void WhileActive::ctor_6()
{
    ctor_5();
}

// private double InvertProgress(double p) [instance] :4772
double WhileActive::InvertProgress(double p)
{
    return 1.0 - ::g::Uno::Math::Min(1.0, ::g::Uno::Math::Abs(p));
}

// public generated WhileActive New() [static] :4765
WhileActive* WhileActive::New2()
{
    WhileActive* obj1 = (WhileActive*)uNew(WhileActive_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class WhileCanGoBack :4558
// {
static void WhileCanGoBack_build(uType* type)
{
    ::TYPES[17] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface4));
    type->SetFields(30);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileCanGoBack__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::WhileHistoryTrigger_type* WhileCanGoBack_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileHistoryTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileHistoryTrigger_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileCanGoBack);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileHistoryTrigger_type);
    type = (::g::Fuse::Navigation::WhileHistoryTrigger_type*)uClassType::New("Fuse.Navigation.WhileCanGoBack", options);
    type->fp_build_ = WhileCanGoBack_build;
    type->fp_ctor_ = (void*)WhileCanGoBack__New2_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Navigation::WhileHistoryTrigger*, bool*))WhileCanGoBack__get_IsOn_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileCanGoBack() :4558
void WhileCanGoBack__ctor_6_fn(WhileCanGoBack* __this)
{
    __this->ctor_6();
}

// protected override sealed bool get_IsOn() :4560
void WhileCanGoBack__get_IsOn_fn(WhileCanGoBack* __this, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.WhileCanGoBack", "get_IsOn()");
    return *__retval = ::g::Fuse::Navigation::IBaseNavigation::CanGoBack(uInterface(uPtr(__this->NavigationContext()), ::TYPES[17/*Fuse.Navigation.IBaseNavigation*/])), void();
}

// public generated WhileCanGoBack New() :4558
void WhileCanGoBack__New2_fn(WhileCanGoBack** __retval)
{
    *__retval = WhileCanGoBack::New2();
}

// public generated WhileCanGoBack() [instance] :4558
void WhileCanGoBack::ctor_6()
{
    ctor_5();
}

// public generated WhileCanGoBack New() [static] :4558
WhileCanGoBack* WhileCanGoBack::New2()
{
    WhileCanGoBack* obj1 = (WhileCanGoBack*)uNew(WhileCanGoBack_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class WhileCanGoForward :4572
// {
static void WhileCanGoForward_build(uType* type)
{
    ::TYPES[17] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface4));
    type->SetFields(30);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileCanGoForward__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::WhileHistoryTrigger_type* WhileCanGoForward_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileHistoryTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileHistoryTrigger_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileCanGoForward);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileHistoryTrigger_type);
    type = (::g::Fuse::Navigation::WhileHistoryTrigger_type*)uClassType::New("Fuse.Navigation.WhileCanGoForward", options);
    type->fp_build_ = WhileCanGoForward_build;
    type->fp_ctor_ = (void*)WhileCanGoForward__New2_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Navigation::WhileHistoryTrigger*, bool*))WhileCanGoForward__get_IsOn_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileCanGoForward() :4572
void WhileCanGoForward__ctor_6_fn(WhileCanGoForward* __this)
{
    __this->ctor_6();
}

// protected override sealed bool get_IsOn() :4574
void WhileCanGoForward__get_IsOn_fn(WhileCanGoForward* __this, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.WhileCanGoForward", "get_IsOn()");
    return *__retval = ::g::Fuse::Navigation::IBaseNavigation::CanGoForward(uInterface(uPtr(__this->NavigationContext()), ::TYPES[17/*Fuse.Navigation.IBaseNavigation*/])), void();
}

// public generated WhileCanGoForward New() :4572
void WhileCanGoForward__New2_fn(WhileCanGoForward** __retval)
{
    *__retval = WhileCanGoForward::New2();
}

// public generated WhileCanGoForward() [instance] :4572
void WhileCanGoForward::ctor_6()
{
    ctor_5();
}

// public generated WhileCanGoForward New() [static] :4572
WhileCanGoForward* WhileCanGoForward::New2()
{
    WhileCanGoForward* obj1 = (WhileCanGoForward*)uNew(WhileCanGoForward_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public abstract class WhileHistoryTrigger :4510
// {
static void WhileHistoryTrigger_build(uType* type)
{
    ::STRINGS[96] = uString::Const("WhileHistoryTrigger requires a Navigation context");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno");
    ::STRINGS[7] = uString::Const("OnRooted");
    ::TYPES[17] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    ::TYPES[53] = ::g::Fuse::Navigation::HistoryChangedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileHistoryTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileHistoryTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileHistoryTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileHistoryTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(WhileHistoryTrigger_type, interface4));
    type->SetFields(29,
        ::TYPES[17/*Fuse.Navigation.IBaseNavigation*/], offsetof(::g::Fuse::Navigation::WhileHistoryTrigger, _context), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_NavigationContext", NULL, (void*)WhileHistoryTrigger__get_NavigationContext_fn, 0, false, ::TYPES[17/*Fuse.Navigation.IBaseNavigation*/], 0),
        new uFunction("set_NavigationContext", NULL, (void*)WhileHistoryTrigger__set_NavigationContext_fn, 0, false, uVoid_typeof(), 1, ::TYPES[17/*Fuse.Navigation.IBaseNavigation*/]));
}

WhileHistoryTrigger_type* WhileHistoryTrigger_typeof()
{
    static uSStrong<WhileHistoryTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileHistoryTrigger);
    options.TypeSize = sizeof(WhileHistoryTrigger_type);
    type = (WhileHistoryTrigger_type*)uClassType::New("Fuse.Navigation.WhileHistoryTrigger", options);
    type->fp_build_ = WhileHistoryTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileHistoryTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileHistoryTrigger__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated WhileHistoryTrigger() :4510
void WhileHistoryTrigger__ctor_5_fn(WhileHistoryTrigger* __this)
{
    __this->ctor_5();
}

// public Fuse.Navigation.IBaseNavigation get_NavigationContext() :4513
void WhileHistoryTrigger__get_NavigationContext_fn(WhileHistoryTrigger* __this, uObject** __retval)
{
    *__retval = __this->NavigationContext();
}

// public void set_NavigationContext(Fuse.Navigation.IBaseNavigation value) :4513
void WhileHistoryTrigger__set_NavigationContext_fn(WhileHistoryTrigger* __this, uObject* value)
{
    __this->NavigationContext(value);
}

// private void OnHistoryChanged(object sender) :4541
void WhileHistoryTrigger__OnHistoryChanged_fn(WhileHistoryTrigger* __this, uObject* sender)
{
    __this->OnHistoryChanged(sender);
}

// protected override sealed void OnRooted() :4515
void WhileHistoryTrigger__OnRooted_fn(WhileHistoryTrigger* __this)
{
    uStackFrame __("Fuse.Navigation.WhileHistoryTrigger", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (__this->NavigationContext() == NULL)
        __this->NavigationContext(::g::Fuse::Navigation::Navigation::TryFindBaseNavigation(__this->Parent()));

    if (__this->NavigationContext() == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[96/*"WhileHistor...*/], __this, ::STRINGS[1/*"/Users/most...*/], 4524, ::STRINGS[7/*"OnRooted"*/]);
        return;
    }

    __this->SetActive(__this->IsOn());
    ::g::Fuse::Navigation::IBaseNavigation::add_HistoryChanged(uInterface(uPtr(__this->NavigationContext()), ::TYPES[17/*Fuse.Navigation.IBaseNavigation*/]), uDelegate::New(::TYPES[53/*Fuse.Navigation.HistoryChangedHandler*/], (void*)WhileHistoryTrigger__OnHistoryChanged_fn, __this));
}

// protected override sealed void OnUnrooted() :4531
void WhileHistoryTrigger__OnUnrooted_fn(WhileHistoryTrigger* __this)
{
    uStackFrame __("Fuse.Navigation.WhileHistoryTrigger", "OnUnrooted()");

    if (__this->NavigationContext() != NULL)
    {
        ::g::Fuse::Navigation::IBaseNavigation::remove_HistoryChanged(uInterface(uPtr(__this->NavigationContext()), ::TYPES[17/*Fuse.Navigation.IBaseNavigation*/]), uDelegate::New(::TYPES[53/*Fuse.Navigation.HistoryChangedHandler*/], (void*)WhileHistoryTrigger__OnHistoryChanged_fn, __this));
        __this->NavigationContext(NULL);
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// protected generated WhileHistoryTrigger() [instance] :4510
void WhileHistoryTrigger::ctor_5()
{
    ctor_4();
}

// public Fuse.Navigation.IBaseNavigation get_NavigationContext() [instance] :4513
uObject* WhileHistoryTrigger::NavigationContext()
{
    return _context;
}

// public void set_NavigationContext(Fuse.Navigation.IBaseNavigation value) [instance] :4513
void WhileHistoryTrigger::NavigationContext(uObject* value)
{
    _context = value;
}

// private void OnHistoryChanged(object sender) [instance] :4541
void WhileHistoryTrigger::OnHistoryChanged(uObject* sender)
{
    SetActive(IsOn());
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class WhileInactive :4806
// {
static void WhileInactive_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface4));
    type->SetFields(33);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileInactive__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInactive_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileNavigationTrigger_typeof();
    options.FieldCount = 33;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileInactive);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileInactive", options);
    type->fp_build_ = WhileInactive_build;
    type->fp_ctor_ = (void*)WhileInactive__New2_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*))WhileInactive__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))WhileInactive__OnNavigationStateChanged_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileInactive() :4806
void WhileInactive__ctor_6_fn(WhileInactive* __this)
{
    __this->ctor_6();
}

// protected override sealed void ForceUpdate() :4808
void WhileInactive__ForceUpdate_fn(WhileInactive* __this)
{
    uStackFrame __("Fuse.Navigation.WhileInactive", "ForceUpdate()");
    __this->GoProgress((double)::g::Uno::Math::Abs1(::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress));
}

// public generated WhileInactive New() :4806
void WhileInactive__New2_fn(WhileInactive** __retval)
{
    *__retval = WhileInactive::New2();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :4813
void WhileInactive__OnNavigationStateChanged_fn(WhileInactive* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    uStackFrame __("Fuse.Navigation.WhileInactive", "OnNavigationStateChanged(object,Fuse.Navigation.NavigationArgs)");
    __this->GoProgress((double)::g::Uno::Math::Abs1(::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress));
}

// public generated WhileInactive() [instance] :4806
void WhileInactive::ctor_6()
{
    ctor_5();
}

// public generated WhileInactive New() [static] :4806
WhileInactive* WhileInactive::New2()
{
    WhileInactive* obj1 = (WhileInactive*)uNew(WhileInactive_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class WhileInEnterState :4842
// {
static void WhileInEnterState_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface4));
    type->SetFields(33);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileInEnterState__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInEnterState_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileNavigationTrigger_typeof();
    options.FieldCount = 33;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileInEnterState);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileInEnterState", options);
    type->fp_build_ = WhileInEnterState_build;
    type->fp_ctor_ = (void*)WhileInEnterState__New2_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*))WhileInEnterState__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))WhileInEnterState__OnNavigationStateChanged_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileInEnterState() :4842
void WhileInEnterState__ctor_6_fn(WhileInEnterState* __this)
{
    __this->ctor_6();
}

// protected override sealed void ForceUpdate() :4844
void WhileInEnterState__ForceUpdate_fn(WhileInEnterState* __this)
{
    uStackFrame __("Fuse.Navigation.WhileInEnterState", "ForceUpdate()");
    __this->GoProgress((double)::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress);
}

// public generated WhileInEnterState New() :4842
void WhileInEnterState__New2_fn(WhileInEnterState** __retval)
{
    *__retval = WhileInEnterState::New2();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :4849
void WhileInEnterState__OnNavigationStateChanged_fn(WhileInEnterState* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    uStackFrame __("Fuse.Navigation.WhileInEnterState", "OnNavigationStateChanged(object,Fuse.Navigation.NavigationArgs)");
    float p = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress;
    __this->GoProgress((double)p);
}

// public generated WhileInEnterState() [instance] :4842
void WhileInEnterState::ctor_6()
{
    ctor_5();
}

// public generated WhileInEnterState New() [static] :4842
WhileInEnterState* WhileInEnterState::New2()
{
    WhileInEnterState* obj1 = (WhileInEnterState*)uNew(WhileInEnterState_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class WhileInExitState :4824
// {
static void WhileInExitState_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface4));
    type->SetFields(33);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileInExitState__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInExitState_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileNavigationTrigger_typeof();
    options.FieldCount = 33;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileInExitState);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileInExitState", options);
    type->fp_build_ = WhileInExitState_build;
    type->fp_ctor_ = (void*)WhileInExitState__New2_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*))WhileInExitState__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))WhileInExitState__OnNavigationStateChanged_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileInExitState() :4824
void WhileInExitState__ctor_6_fn(WhileInExitState* __this)
{
    __this->ctor_6();
}

// protected override sealed void ForceUpdate() :4826
void WhileInExitState__ForceUpdate_fn(WhileInExitState* __this)
{
    uStackFrame __("Fuse.Navigation.WhileInExitState", "ForceUpdate()");
    __this->GoProgress((double)-::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress);
}

// public generated WhileInExitState New() :4824
void WhileInExitState__New2_fn(WhileInExitState** __retval)
{
    *__retval = WhileInExitState::New2();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :4831
void WhileInExitState__OnNavigationStateChanged_fn(WhileInExitState* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    uStackFrame __("Fuse.Navigation.WhileInExitState", "OnNavigationStateChanged(object,Fuse.Navigation.NavigationArgs)");
    __this->GoProgress((double)-::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress);
}

// public generated WhileInExitState() [instance] :4824
void WhileInExitState::ctor_6()
{
    ctor_5();
}

// public generated WhileInExitState New() [static] :4824
WhileInExitState* WhileInExitState::New2()
{
    WhileInExitState* obj1 = (WhileInExitState*)uNew(WhileInExitState_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class WhileNavigating :4594
// {
static void WhileNavigating_build(uType* type)
{
    ::STRINGS[97] = uString::Const("WhileNavigating requires a Navigation context");
    ::STRINGS[1] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno");
    ::STRINGS[7] = uString::Const("OnRooted");
    ::TYPES[22] = ::g::Fuse::Navigation::NavigationStateHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(29,
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigating, _context), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigating, _contextParent), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileNavigating__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* WhileNavigating_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 31;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileNavigating);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Navigation.WhileNavigating", options);
    type->fp_build_ = WhileNavigating_build;
    type->fp_ctor_ = (void*)WhileNavigating__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileNavigating__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileNavigating__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileNavigating() :4594
void WhileNavigating__ctor_5_fn(WhileNavigating* __this)
{
    __this->ctor_5();
}

// public generated WhileNavigating New() :4594
void WhileNavigating__New2_fn(WhileNavigating** __retval)
{
    *__retval = WhileNavigating::New2();
}

// protected override sealed void OnRooted() :4599
void WhileNavigating__OnRooted_fn(WhileNavigating* __this)
{
    uStackFrame __("Fuse.Navigation.WhileNavigating", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_context = ::g::Fuse::Navigation::Navigation::TryFindBaseNavigation1(__this->Parent(), &__this->_contextParent);

    if ((__this->_context == NULL) || (__this->_contextParent == NULL))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[97/*"WhileNaviga...*/], __this, ::STRINGS[1/*"/Users/most...*/], 4605, ::STRINGS[7/*"OnRooted"*/]);
        return;
    }

    ::g::Fuse::Navigation::Navigation::AddStateHandler(__this->_contextParent, uDelegate::New(::TYPES[22/*Fuse.Navigation.NavigationStateHandler*/], (void*)WhileNavigating__OnStateChange_fn, __this));
}

// private void OnStateChange(object s, Fuse.Navigation.NavigationStateArgs args) :4623
void WhileNavigating__OnStateChange_fn(WhileNavigating* __this, uObject* s, ::g::Fuse::Navigation::NavigationStateArgs* args)
{
    __this->OnStateChange(s, args);
}

// protected override sealed void OnUnrooted() :4612
void WhileNavigating__OnUnrooted_fn(WhileNavigating* __this)
{
    uStackFrame __("Fuse.Navigation.WhileNavigating", "OnUnrooted()");

    if (__this->_contextParent != NULL)
    {
        ::g::Fuse::Navigation::Navigation::RemoveStateHandler(__this->_contextParent, uDelegate::New(::TYPES[22/*Fuse.Navigation.NavigationStateHandler*/], (void*)WhileNavigating__OnStateChange_fn, __this));
        __this->_contextParent = NULL;
        __this->_context = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated WhileNavigating() [instance] :4594
void WhileNavigating::ctor_5()
{
    ctor_4();
}

// private void OnStateChange(object s, Fuse.Navigation.NavigationStateArgs args) [instance] :4623
void WhileNavigating::OnStateChange(uObject* s, ::g::Fuse::Navigation::NavigationStateArgs* args)
{
    uStackFrame __("Fuse.Navigation.WhileNavigating", "OnStateChange(object,Fuse.Navigation.NavigationStateArgs)");
    SetActive(uPtr(args)->State() != 0);
}

// public generated WhileNavigating New() [static] :4594
WhileNavigating* WhileNavigating::New2()
{
    WhileNavigating* obj1 = (WhileNavigating*)uNew(WhileNavigating_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Navigation/0.42.4/$.uno
// ------------------------------------------------------------------------------------------

// public abstract class WhileNavigationTrigger :4655
// {
static void WhileNavigationTrigger_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[26] = ::g::Fuse::Navigation::NavigationHandler_typeof();
    ::TYPES[25] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileNavigationTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileNavigationTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileNavigationTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(WhileNavigationTrigger_type, interface4));
    type->SetFields(29,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger, _hasLimit), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger, _limit), 0,
        ::g::Fuse::Navigation::NavigationPageProxy_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger, _proxy), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger, _threshold), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Limit", NULL, (void*)WhileNavigationTrigger__get_Limit_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Limit", NULL, (void*)WhileNavigationTrigger__set_Limit_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Threshold", NULL, (void*)WhileNavigationTrigger__get_Threshold_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Threshold", NULL, (void*)WhileNavigationTrigger__set_Threshold_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

WhileNavigationTrigger_type* WhileNavigationTrigger_typeof()
{
    static uSStrong<WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 33;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileNavigationTrigger);
    options.TypeSize = sizeof(WhileNavigationTrigger_type);
    type = (WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileNavigationTrigger", options);
    type->fp_build_ = WhileNavigationTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileNavigationTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileNavigationTrigger__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal WhileNavigationTrigger() :4657
void WhileNavigationTrigger__ctor_5_fn(WhileNavigationTrigger* __this)
{
    __this->ctor_5();
}

// internal void GoProgress(double progress) :4733
void WhileNavigationTrigger__GoProgress_fn(WhileNavigationTrigger* __this, double* progress)
{
    __this->GoProgress(*progress);
}

// public float get_Limit() :4693
void WhileNavigationTrigger__get_Limit_fn(WhileNavigationTrigger* __this, float* __retval)
{
    *__retval = __this->Limit();
}

// public void set_Limit(float value) :4694
void WhileNavigationTrigger__set_Limit_fn(WhileNavigationTrigger* __this, float* value)
{
    __this->Limit(*value);
}

// protected Fuse.Navigation.INavigation get_NavContext() :4702
void WhileNavigationTrigger__get_NavContext_fn(WhileNavigationTrigger* __this, uObject** __retval)
{
    *__retval = __this->NavContext();
}

// private void NavReady() :4712
void WhileNavigationTrigger__NavReady_fn(WhileNavigationTrigger* __this)
{
    __this->NavReady();
}

// private void NavUnready() :4725
void WhileNavigationTrigger__NavUnready_fn(WhileNavigationTrigger* __this)
{
    __this->NavUnready();
}

// protected override sealed void OnRooted() :4705
void WhileNavigationTrigger__OnRooted_fn(WhileNavigationTrigger* __this)
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_proxy = ::g::Fuse::Navigation::NavigationPageProxy::New1(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)WhileNavigationTrigger__NavReady_fn, __this), uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)WhileNavigationTrigger__NavUnready_fn, __this));
    uPtr(__this->_proxy)->Rooted(__this->Parent());
}

// protected override sealed void OnUnrooted() :4718
void WhileNavigationTrigger__OnUnrooted_fn(WhileNavigationTrigger* __this)
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", "OnUnrooted()");
    uPtr(__this->_proxy)->Unrooted();
    __this->_proxy = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// protected Fuse.Visual get_PageContext() :4701
void WhileNavigationTrigger__get_PageContext_fn(WhileNavigationTrigger* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->PageContext();
}

// public float get_Threshold() :4682
void WhileNavigationTrigger__get_Threshold_fn(WhileNavigationTrigger* __this, float* __retval)
{
    *__retval = __this->Threshold();
}

// public void set_Threshold(float value) :4683
void WhileNavigationTrigger__set_Threshold_fn(WhileNavigationTrigger* __this, float* value)
{
    __this->Threshold(*value);
}

// internal WhileNavigationTrigger() [instance] :4657
void WhileNavigationTrigger::ctor_5()
{
    _threshold = 1.0f;
    ctor_4();
}

// internal void GoProgress(double progress) [instance] :4733
void WhileNavigationTrigger::GoProgress(double progress)
{
    bool set = progress >= (double)Threshold();

    if (_hasLimit)
        set = set && (progress <= (double)Limit());

    SetActive(set);
}

// public float get_Limit() [instance] :4693
float WhileNavigationTrigger::Limit()
{
    return _limit;
}

// public void set_Limit(float value) [instance] :4694
void WhileNavigationTrigger::Limit(float value)
{
    _limit = value;
    _hasLimit = true;
}

// protected Fuse.Navigation.INavigation get_NavContext() [instance] :4702
uObject* WhileNavigationTrigger::NavContext()
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", "get_NavContext()");
    return uPtr(_proxy)->Navigation();
}

// private void NavReady() [instance] :4712
void WhileNavigationTrigger::NavReady()
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", "NavReady()");
    ::g::Fuse::Navigation::INavigation::add_PageProgressChanged(uInterface(uPtr(uPtr(_proxy)->Navigation()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[26/*Fuse.Navigation.NavigationHandler*/], this, offsetof(WhileNavigationTrigger_type, fp_OnNavigationStateChanged)));
    ForceUpdate();
}

// private void NavUnready() [instance] :4725
void WhileNavigationTrigger::NavUnready()
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", "NavUnready()");
    ::g::Fuse::Navigation::INavigation::remove_PageProgressChanged(uInterface(uPtr(uPtr(_proxy)->Navigation()), ::TYPES[1/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[26/*Fuse.Navigation.NavigationHandler*/], this, offsetof(WhileNavigationTrigger_type, fp_OnNavigationStateChanged)));
}

// protected Fuse.Visual get_PageContext() [instance] :4701
::g::Fuse::Visual* WhileNavigationTrigger::PageContext()
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", "get_PageContext()");
    return uPtr(_proxy)->Page();
}

// public float get_Threshold() [instance] :4682
float WhileNavigationTrigger::Threshold()
{
    return _threshold;
}

// public void set_Threshold(float value) [instance] :4683
void WhileNavigationTrigger::Threshold(float value)
{
    _threshold = value;
}
// }

}}} // ::g::Fuse::Navigation
