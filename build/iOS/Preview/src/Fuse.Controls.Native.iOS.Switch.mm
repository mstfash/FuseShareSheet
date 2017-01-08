// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.Switch.h>
#include <Fuse.Controls.Native.iOS.UIControlEvent.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.IToggleViewHost.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <uObjC.Foreign.h>
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class Switch :2478
// {
static void Switch_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action2_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::ObjC::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::IDisposable_typeof();
    ::TYPES[2] = ::g::Fuse::Controls::Native::IToggleViewHost_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Switch_type, interface0),
        ::TYPES[1/*Uno.IDisposable*/], offsetof(Switch_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Switch_type, interface2),
        ::g::Fuse::Controls::Native::IToggleView_typeof(), offsetof(Switch_type, interface3));
    type->SetFields(5,
        ::TYPES[2/*Fuse.Controls.Native.IToggleViewHost*/], offsetof(::g::Fuse::Controls::Native::iOS::Switch, _host), 0,
        ::TYPES[1/*Uno.IDisposable*/], offsetof(::g::Fuse::Controls::Native::iOS::Switch, _valueChangedEvent), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Switch__New1_fn, 0, true, type, 1, ::TYPES[2/*Fuse.Controls.Native.IToggleViewHost*/]),
        new uFunction("set_Value", NULL, (void*)Switch__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

Switch_type* Switch_typeof()
{
    static uSStrong<Switch_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(Switch_type);
    type = (Switch_type*)uClassType::New("Fuse.Controls.Native.iOS.Switch", options);
    type->fp_build_ = Switch_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::iOS::View*))Switch__Dispose_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, bool*))Switch__set_Value_fn;
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
    type->interface1.fp_Dispose = (void(*)(uObject*))Switch__Dispose_fn;
    return type;
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) :2490
void Switch__ctor_2_fn(Switch* __this, uObject* host)
{
    __this->ctor_2(host);
}

// private static ObjC.Object Create() :2510
void Switch__Create_fn(uObject** __retval)
{
    *__retval = Switch::Create();
}

// public override sealed void Dispose() :2496
void Switch__Dispose_fn(Switch* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Switch", "Dispose()");
    __this->_host = NULL;
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_valueChangedEvent), ::TYPES[1/*Uno.IDisposable*/]));
    __this->_valueChangedEvent = NULL;
    ::g::Fuse::Controls::Native::iOS::View__Dispose_fn(__this);
}

// private static bool GetValue(ObjC.Object handle) :2516
void Switch__GetValue_fn(uObject* handle, bool* __retval)
{
    *__retval = Switch::GetValue(handle);
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) :2490
void Switch__New1_fn(uObject* host, Switch** __retval)
{
    *__retval = Switch::New1(host);
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object uiEvent) :2504
void Switch__OnValueChanged_fn(Switch* __this, uObject* sender, uObject* uiEvent)
{
    __this->OnValueChanged(sender, uiEvent);
}

// private static void SetValue(ObjC.Object handle, bool value) :2523
void Switch__SetValue_fn(uObject* handle, bool* value)
{
    Switch::SetValue(handle, *value);
}

// public void set_Value(bool value) :2483
void Switch__set_Value_fn(Switch* __this, bool* value)
{
    __this->Value(*value);
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) [instance] :2490
void Switch::ctor_2(uObject* host)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Switch", ".ctor(Fuse.Controls.Native.IToggleViewHost)");
    ctor_1(Switch::Create());
    _host = host;
    _valueChangedEvent = ::g::Fuse::Controls::Native::iOS::UIControlEvent::AddValueChangedCallback(Handle(), uDelegate::New(::TYPES[0/*Uno.Action<ObjC.Object, ObjC.Object>*/], (void*)Switch__OnValueChanged_fn, this));
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object uiEvent) [instance] :2504
void Switch::OnValueChanged(uObject* sender, uObject* uiEvent)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Switch", "OnValueChanged(ObjC.Object,ObjC.Object)");
    ::g::Fuse::Controls::Native::IToggleViewHost::OnValueChanged(uInterface(uPtr(_host), ::TYPES[2/*Fuse.Controls.Native.IToggleViewHost*/]), Switch::GetValue(Handle()));
}

// public void set_Value(bool value) [instance] :2483
void Switch::Value(bool value)
{
    Switch::SetValue(Handle(), value);
}

// private static ObjC.Object Create() [static] :2510
uObject* Switch::Create()
{
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            return [[::UISwitch alloc] init];
        } ());
        
    }
    
}

// private static bool GetValue(ObjC.Object handle) [static] :2516
bool Switch::GetValue(uObject* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            ::UISwitch* sw = (::UISwitch*)handle;
            			return [sw isOn];
        } (::g::ObjC::Helpers::GetHandle(handle));
        
    }
    
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) [static] :2490
Switch* Switch::New1(uObject* host)
{
    Switch* obj1 = (Switch*)uNew(Switch_typeof());
    obj1->ctor_2(host);
    return obj1;
}

// private static void SetValue(ObjC.Object handle, bool value) [static] :2523
void Switch::SetValue(uObject* handle, bool value)
{
    @autoreleasepool
    {
        [] (::id handle, bool value) -> void
        {
            ::UISwitch* sw = (::UISwitch*)handle;
            			[sw setOn:value];
        } (::g::ObjC::Helpers::GetHandle(handle), value);
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
