// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.iOS/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.App.h>
#include <Fuse.AppRoot.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.GraphicsView.h>
#include <Fuse.Controls.ITextRenderer.h>
#include <Fuse.Controls.Native.iOS.FocusHelpers.h>
#include <Fuse.Controls.Native.iOS.InputDispatch.h>
#include <Fuse.Controls.Native.iOS.NativeFocus.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.IViewGroup.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Device.h>
#include <Fuse.iOS.Bindings.TextRenderer.h>
#include <Fuse.MobileBootstrapping.h>
#include <Fuse.Node.h>
#include <Fuse.Platform.Display.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Func-2.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.TimerEventArgs.h>
#include <Uno.Platform.Window.h>
#include <Uno.Platform2.Display.h>
#include <uObjC.Foreign.h>
static uType* TYPES[6];

namespace g{
namespace Fuse{

// public extern class App :107
// {
static void App_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof(), ::g::Fuse::Controls::ITextRenderer_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TimerEventArgs_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Controls::Native::iOS::View_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[5] = ::g::Uno::Exception_typeof();
    type->SetFields(8,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::App, _currentFocus), 0,
        ::g::Fuse::Controls::GraphicsView_typeof(), offsetof(::g::Fuse::App, _graphicsView), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::App, _prevStatusBarOrientation), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::Fuse::App, _rootPanel), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)App__New1_fn, 0, true, type, 0));
}

::g::Fuse::AppBase_type* App_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::AppBase_typeof();
    options.FieldCount = 12;
    options.ObjectSize = sizeof(App);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("Fuse.App", options);
    type->fp_build_ = App_build;
    type->fp_ctor_ = (void*)App__New1_fn;
    type->fp_get_Children = (void(*)(::g::Fuse::AppBase*, uObject**))App__get_Children_fn;
    type->fp_get_ChildrenVisual = (void(*)(::g::Fuse::AppBase*, ::g::Fuse::Visual**))App__get_ChildrenVisual_fn;
    type->fp_OnUpdate = (void(*)(::g::Fuse::AppBase*))App__OnUpdate_fn;
    return type;
}

// public App() :112
void App__ctor_2_fn(App* __this)
{
    __this->ctor_2();
}

// private void CheckFocus() :180
void App__CheckFocus_fn(App* __this)
{
    __this->CheckFocus();
}

// private void CheckStatusBarOrientation() :211
void App__CheckStatusBarOrientation_fn(App* __this)
{
    __this->CheckStatusBarOrientation();
}

// public override sealed Uno.Collections.IList<Fuse.Node> get_Children() :136
void App__get_Children_fn(App* __this, uObject** __retval)
{
    uStackFrame __("Fuse.App", "get_Children()");
    return *__retval = uPtr(__this->_rootPanel)->Children(), void();
}

// public override sealed Fuse.Visual get_ChildrenVisual() :141
void App__get_ChildrenVisual_fn(App* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = __this->_rootPanel, void();
}

// private static bool Compare(ObjC.Object x, ObjC.Object y) :198
void App__Compare_fn(uObject* x, uObject* y, bool* __retval)
{
    *__retval = App::Compare(x, y);
}

// private static bool IsNull(ObjC.Object x) :205
void App__IsNull_fn(uObject* x, bool* __retval)
{
    *__retval = App::IsNull(x);
}

// public App New() :112
void App__New1_fn(App** __retval)
{
    *__retval = App::New1();
}

// private void OnTick(object sender, Uno.Platform.TimerEventArgs args) :144
void App__OnTick_fn(App* __this, uObject* sender, ::g::Uno::Platform::TimerEventArgs* args)
{
    __this->OnTick(sender, args);
}

// protected override void OnUpdate() :171
void App__OnUpdate_fn(App* __this)
{
    uStackFrame __("Fuse.App", "OnUpdate()");
    __this->CheckFocus();
    __this->CheckStatusBarOrientation();
    ::g::Fuse::AppBase__OnUpdate_fn(__this);
}

// private void PropagateBackground() :166
void App__PropagateBackground_fn(App* __this)
{
    __this->PropagateBackground();
}

// public App() [instance] :112
void App::ctor_2()
{
    uStackFrame __("Fuse.App", ".ctor()");
    _prevStatusBarOrientation = -1;
    ctor_1();
    ::g::Fuse::Controls::TextControl::TextRendererFactory(uDelegate::New(::TYPES[0/*Uno.Func<Fuse.Controls.TextControl, Fuse.Controls.ITextRenderer>*/], (void*)::g::Fuse::iOS::Bindings::TextRenderer__Create_fn));
    ::g::Fuse::MobileBootstrapping::Init();
    RootViewport(::g::Fuse::RootViewport::New2(Window(), 0.0f));
    ::g::Fuse::Time::Init(::g::Uno::Diagnostics::Clock::GetSeconds());
    uPtr(::g::Fuse::Platform::Display::MainDisplay())->add_Tick(uDelegate::New(::TYPES[1/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/], (void*)App__OnTick_fn, this));
    _graphicsView = ::g::Fuse::Controls::GraphicsView::New3();
    _rootPanel = ::g::Fuse::Controls::Panel::New3();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(_graphicsView)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), _rootPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(RootViewport())->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), _graphicsView);
    ::g::Fuse::AppRoot::Set(uPtr(uCast< ::g::Fuse::Controls::Native::iOS::View*>(uPtr(_graphicsView)->NativeViewGroup(), ::TYPES[3/*Fuse.Controls.Native.iOS.View*/]))->Handle());
    ::g::Fuse::Controls::Native::iOS::InputDispatch::RootView(::g::Fuse::AppRoot::RootView());
    ::g::Fuse::Controls::Native::iOS::InputDispatch::AddListener(_graphicsView, ::g::Fuse::AppRoot::RootView());
}

// private void CheckFocus() [instance] :180
void App::CheckFocus()
{
    uStackFrame __("Fuse.App", "CheckFocus()");
    uObject* newFocus = ::g::Fuse::Controls::Native::iOS::FocusHelpers::GetCurrentFirstResponder();

    if (!App::Compare(_currentFocus, newFocus))
    {
        if (!App::IsNull(_currentFocus))
            ::g::Fuse::Controls::Native::iOS::NativeFocus::RaiseFocusLost(_currentFocus);

        _currentFocus = newFocus;

        if (!App::IsNull(_currentFocus))
            ::g::Fuse::Controls::Native::iOS::NativeFocus::RaiseFocusGained(_currentFocus);
    }
}

// private void CheckStatusBarOrientation() [instance] :211
void App::CheckStatusBarOrientation()
{
    uStackFrame __("Fuse.App", "CheckStatusBarOrientation()");
    int o = ::g::Fuse::Device::StatusBarOrientation();

    if (_prevStatusBarOrientation != o)
    {
        _prevStatusBarOrientation = o;
        ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)::g::Fuse::Visual__InvalidateVisual_fn, uPtr(_rootPanel)), 0);
    }
}

// private void OnTick(object sender, Uno.Platform.TimerEventArgs args) [instance] :144
void App::OnTick(uObject* sender, ::g::Uno::Platform::TimerEventArgs* args)
{
    uStackFrame __("Fuse.App", "OnTick(object,Uno.Platform.TimerEventArgs)");

    try
    {
        PropagateBackground();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }

    ::g::Fuse::Time::Set(::g::Uno::Diagnostics::Clock::GetSeconds());

    try
    {
        OnUpdate();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e1 = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e1);
    }
}

// private void PropagateBackground() [instance] :166
void App::PropagateBackground()
{
    ::g::Fuse::AppRoot::ClearColor(Background());
}

// private static bool Compare(ObjC.Object x, ObjC.Object y) [static] :198
bool App::Compare(uObject* x, uObject* y)
{
    @autoreleasepool
    {
        return [] (::id x, ::id y) -> bool
        {
            return [x isEqual: y];
        } (::g::ObjC::Helpers::GetHandle(x), ::g::ObjC::Helpers::GetHandle(y));
        
    }
    
}

// private static bool IsNull(ObjC.Object x) [static] :205
bool App::IsNull(uObject* x)
{
    @autoreleasepool
    {
        return [] (::id x) -> bool
        {
            return x == nil;
        } (::g::ObjC::Helpers::GetHandle(x));
        
    }
    
}

// public App New() [static] :112
App* App::New1()
{
    App* obj1 = (App*)uNew(App_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

}} // ::g::Fuse
