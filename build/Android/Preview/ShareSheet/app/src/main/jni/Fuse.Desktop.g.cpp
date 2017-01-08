// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.AppBase.h>
#include <Fuse.Desktop.DesktopRootViewport.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.KeyboardBootstrapper.h>
#include <Fuse.Time.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.KeyEventArgs.h>
#include <Uno.Platform.PointerEventArgs.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Platform.TextInputEventArgs.h>
#include <Uno.Platform.WheelDeltaMode.h>
#include <Uno.Platform.Window.h>
static uType* TYPES[4];

namespace g{
namespace Fuse{
namespace Desktop{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Desktop/0.42.4/$.uno
// ---------------------------------------------------------------------------------------

// internal sealed class DesktopRootViewport :79
// {
static void DesktopRootViewport_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TextInputEventArgs_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Exception_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(DesktopRootViewport_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(DesktopRootViewport_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(DesktopRootViewport_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(DesktopRootViewport_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(DesktopRootViewport_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(DesktopRootViewport_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(DesktopRootViewport_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(DesktopRootViewport_type, interface7),
        ::g::Fuse::IViewport_typeof(), offsetof(DesktopRootViewport_type, interface8),
        ::g::Uno::IDisposable_typeof(), offsetof(DesktopRootViewport_type, interface9),
        ::g::Fuse::ICommonViewport_typeof(), offsetof(DesktopRootViewport_type, interface10),
        ::g::Fuse::IRenderViewport_typeof(), offsetof(DesktopRootViewport_type, interface11));
    type->SetFields(64,
        ::g::Fuse::DrawContext_typeof(), offsetof(::g::Fuse::Desktop::DesktopRootViewport, _dc), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Desktop::DesktopRootViewport, _dirty), 0);
}

DesktopRootViewport_type* DesktopRootViewport_typeof()
{
    static uSStrong<DesktopRootViewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::RootViewport_typeof();
    options.FieldCount = 66;
    options.InterfaceCount = 12;
    options.ObjectSize = sizeof(DesktopRootViewport);
    options.TypeSize = sizeof(DesktopRootViewport_type);
    type = (DesktopRootViewport_type*)uClassType::New("Fuse.Desktop.DesktopRootViewport", options);
    type->fp_build_ = DesktopRootViewport_build;
    type->fp_OnInvalidateVisual = (void(*)(::g::Fuse::Visual*))DesktopRootViewport__OnInvalidateVisual_fn;
    type->interface11.fp_get_ProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ProjectionTransform_fn;
    type->interface11.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ViewProjectionTransform_fn;
    type->interface11.fp_get_ViewOrigin = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::RootViewport__get_ViewOrigin_fn;
    type->interface11.fp_get_ViewRange = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::RootViewport__get_ViewRange_fn;
    type->interface10.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))::g::Fuse::RootViewport__get_PixelsPerPoint_fn;
    type->interface10.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::RootViewport__get_Size_fn;
    type->interface10.fp_get_PixelSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::RootViewport__get_PixelSize_fn;
    type->interface10.fp_get_ViewTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ViewTransform_fn;
    type->interface9.fp_Dispose = (void(*)(uObject*))::g::Fuse::RootViewport__UnoIDisposableDispose_fn;
    type->interface8.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*))::g::Fuse::RootViewport__PointToWorldRay_fn;
    type->interface8.fp_WorldToLocalRay = (void(*)(uObject*, uObject*, ::g::Uno::Geometry::Ray*, ::g::Fuse::Visual*, ::g::Uno::Geometry::Ray*))::g::Fuse::RootViewport__WorldToLocalRay_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
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

// public DesktopRootViewport(Uno.Platform.Window window) :83
void DesktopRootViewport__ctor_4_fn(DesktopRootViewport* __this, ::g::Uno::Platform::Window* window)
{
    __this->ctor_4(window);
}

// public DesktopRootViewport New(Uno.Platform.Window window) :83
void DesktopRootViewport__New3_fn(::g::Uno::Platform::Window* window, DesktopRootViewport** __retval)
{
    *__retval = DesktopRootViewport::New3(window);
}

// protected override sealed void OnInvalidateVisual() :143
void DesktopRootViewport__OnInvalidateVisual_fn(DesktopRootViewport* __this)
{
    ::g::Fuse::Visual__OnInvalidateVisual_fn(__this);
    __this->_dirty = true;
}

// private void OnPointerLeft(object sender, Uno.Platform.PointerEventArgs args) :197
void DesktopRootViewport__OnPointerLeft_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerLeft(sender, args);
}

// private void OnPointerMoved(object sender, Uno.Platform.PointerEventArgs args) :173
void DesktopRootViewport__OnPointerMoved_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Uno.Platform.PointerEventArgs args) :149
void DesktopRootViewport__OnPointerPressed_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Uno.Platform.PointerEventArgs args) :161
void DesktopRootViewport__OnPointerReleased_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnPointerWheelChanged(object sender, Uno.Platform.PointerEventArgs args) :185
void DesktopRootViewport__OnPointerWheelChanged_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerWheelChanged(sender, args);
}

// private Fuse.Input.PointerEventData TranslatePointerEvent(Uno.Platform.PointerEventArgs args) :98
void DesktopRootViewport__TranslatePointerEvent_fn(DesktopRootViewport* __this, ::g::Uno::Platform::PointerEventArgs* args, ::g::Fuse::Input::PointerEventData** __retval)
{
    *__retval = __this->TranslatePointerEvent(args);
}

// public DesktopRootViewport(Uno.Platform.Window window) [instance] :83
void DesktopRootViewport::ctor_4(::g::Uno::Platform::Window* window)
{
    uStackFrame __("Fuse.Desktop.DesktopRootViewport", ".ctor(Uno.Platform.Window)");
    _dirty = true;
    ctor_3(window, 0.0f);
    uPtr(Window)->add_PointerPressed(uDelegate::New(::TYPES[0/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/], (void*)DesktopRootViewport__OnPointerPressed_fn, this));
    uPtr(Window)->add_PointerReleased(uDelegate::New(::TYPES[0/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/], (void*)DesktopRootViewport__OnPointerReleased_fn, this));
    uPtr(Window)->add_PointerMoved(uDelegate::New(::TYPES[0/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/], (void*)DesktopRootViewport__OnPointerMoved_fn, this));
    uPtr(Window)->add_PointerWheelChanged(uDelegate::New(::TYPES[0/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/], (void*)DesktopRootViewport__OnPointerWheelChanged_fn, this));
    uPtr(Window)->add_PointerLeft(uDelegate::New(::TYPES[0/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/], (void*)DesktopRootViewport__OnPointerLeft_fn, this));
    uPtr(Window)->add_KeyPressed(uDelegate::New(::TYPES[1/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)::g::Fuse::KeyboardBootstrapper__OnKeyPressed_fn));
    uPtr(Window)->add_KeyReleased(uDelegate::New(::TYPES[1/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)::g::Fuse::KeyboardBootstrapper__OnKeyReleased_fn));
    uPtr(Window)->add_TextInput(uDelegate::New(::TYPES[2/*Uno.EventHandler<Uno.Platform.TextInputEventArgs>*/], (void*)::g::Fuse::KeyboardBootstrapper__OnTextInput_fn));
    _dc = ::g::Fuse::DrawContext::New1((uObject*)this);
}

// private void OnPointerLeft(object sender, Uno.Platform.PointerEventArgs args) [instance] :197
void DesktopRootViewport::OnPointerLeft(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Desktop.DesktopRootViewport", "OnPointerLeft(object,Uno.Platform.PointerEventArgs)");

    try
    {
        ::g::Fuse::Input::Pointer::RaiseLeft(this, TranslatePointerEvent(args));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private void OnPointerMoved(object sender, Uno.Platform.PointerEventArgs args) [instance] :173
void DesktopRootViewport::OnPointerMoved(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Desktop.DesktopRootViewport", "OnPointerMoved(object,Uno.Platform.PointerEventArgs)");

    try
    {
        uPtr(args)->Handled(::g::Fuse::Input::Pointer::RaiseMoved(this, TranslatePointerEvent(args)));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private void OnPointerPressed(object sender, Uno.Platform.PointerEventArgs args) [instance] :149
void DesktopRootViewport::OnPointerPressed(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Desktop.DesktopRootViewport", "OnPointerPressed(object,Uno.Platform.PointerEventArgs)");

    try
    {
        uPtr(args)->Handled(::g::Fuse::Input::Pointer::RaisePressed(this, TranslatePointerEvent(args)));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private void OnPointerReleased(object sender, Uno.Platform.PointerEventArgs args) [instance] :161
void DesktopRootViewport::OnPointerReleased(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Desktop.DesktopRootViewport", "OnPointerReleased(object,Uno.Platform.PointerEventArgs)");

    try
    {
        uPtr(args)->Handled(::g::Fuse::Input::Pointer::RaiseReleased(this, TranslatePointerEvent(args)));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private void OnPointerWheelChanged(object sender, Uno.Platform.PointerEventArgs args) [instance] :185
void DesktopRootViewport::OnPointerWheelChanged(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Desktop.DesktopRootViewport", "OnPointerWheelChanged(object,Uno.Platform.PointerEventArgs)");

    try
    {
        uPtr(args)->Handled(::g::Fuse::Input::Pointer::RaiseWheelMoved(this, TranslatePointerEvent(args)));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private Fuse.Input.PointerEventData TranslatePointerEvent(Uno.Platform.PointerEventArgs args) [instance] :98
::g::Fuse::Input::PointerEventData* DesktopRootViewport::TranslatePointerEvent(::g::Uno::Platform::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Desktop.DesktopRootViewport", "TranslatePointerEvent(Uno.Platform.PointerEventArgs)");
    ::g::Fuse::Input::PointerEventData* collection1;
    collection1 = ::g::Fuse::Input::PointerEventData::New1();
    uPtr(collection1)->PointIndex = uPtr(args)->FingerId();
    uPtr(collection1)->WindowPoint = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(uPtr(args)->Position(), PixelsPerOSPoint()), PixelsPerPoint());
    uPtr(collection1)->WheelDelta = uPtr(args)->WheelDelta();
    uPtr(collection1)->WheelDeltaMode = uPtr(args)->WheelDeltaMode();
    uPtr(collection1)->IsPrimary = uPtr(args)->IsPrimary();
    uPtr(collection1)->PointerType = uPtr(args)->PointerType();
    uPtr(collection1)->Timestamp = (::g::Uno::Diagnostics::Clock::GetSeconds() - ::g::Fuse::Time::FrameTimeBase());
    return collection1;
}

// public DesktopRootViewport New(Uno.Platform.Window window) [static] :83
DesktopRootViewport* DesktopRootViewport::New3(::g::Uno::Platform::Window* window)
{
    DesktopRootViewport* obj2 = (DesktopRootViewport*)uNew(DesktopRootViewport_typeof());
    obj2->ctor_4(window);
    return obj2;
}
// }

}}} // ::g::Fuse::Desktop
