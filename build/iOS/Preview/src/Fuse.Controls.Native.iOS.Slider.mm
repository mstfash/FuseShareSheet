// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.Slider.h>
#include <Fuse.Controls.Native.iOS.UIControlEvent.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.IRangeViewHost.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action-2.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <uObjC.Foreign.h>
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class Slider :2397
// {
static void Slider_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action2_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::ObjC::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::IDisposable_typeof();
    ::TYPES[2] = ::g::Fuse::Controls::Native::IRangeViewHost_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Slider_type, interface0),
        ::TYPES[1/*Uno.IDisposable*/], offsetof(Slider_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Slider_type, interface2),
        ::g::Fuse::Controls::Native::IRangeView_typeof(), offsetof(Slider_type, interface3));
    type->SetFields(5,
        ::TYPES[2/*Fuse.Controls.Native.IRangeViewHost*/], offsetof(::g::Fuse::Controls::Native::iOS::Slider, _host), 0,
        ::TYPES[1/*Uno.IDisposable*/], offsetof(::g::Fuse::Controls::Native::iOS::Slider, _valueChangedEvent), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Slider__New1_fn, 0, true, type, 1, ::TYPES[2/*Fuse.Controls.Native.IRangeViewHost*/]),
        new uFunction("set_Progress", NULL, (void*)Slider__set_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

Slider_type* Slider_typeof()
{
    static uSStrong<Slider_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Slider);
    options.TypeSize = sizeof(Slider_type);
    type = (Slider_type*)uClassType::New("Fuse.Controls.Native.iOS.Slider", options);
    type->fp_build_ = Slider_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::iOS::View*))Slider__Dispose_fn;
    type->interface3.fp_set_Progress = (void(*)(uObject*, double*))Slider__set_Progress_fn;
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
    type->interface1.fp_Dispose = (void(*)(uObject*))Slider__Dispose_fn;
    return type;
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) :2409
void Slider__ctor_2_fn(Slider* __this, uObject* host)
{
    __this->ctor_2(host);
}

// private static ObjC.Object Create() :2424
void Slider__Create_fn(uObject** __retval)
{
    *__retval = Slider::Create();
}

// public override sealed void Dispose() :2415
void Slider__Dispose_fn(Slider* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Slider", "Dispose()");
    __this->_host = NULL;
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_valueChangedEvent), ::TYPES[1/*Uno.IDisposable*/]));
    __this->_valueChangedEvent = NULL;
    ::g::Fuse::Controls::Native::iOS::View__Dispose_fn(__this);
}

// private static float GetValue(ObjC.Object handle) :2444
void Slider__GetValue_fn(uObject* handle, float* __retval)
{
    *__retval = Slider::GetValue(handle);
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) :2409
void Slider__New1_fn(uObject* host, Slider** __retval)
{
    *__retval = Slider::New1(host);
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object uiEvent) :2432
void Slider__OnValueChanged_fn(Slider* __this, uObject* sender, uObject* uiEvent)
{
    __this->OnValueChanged(sender, uiEvent);
}

// public void set_Progress(double value) :2402
void Slider__set_Progress_fn(Slider* __this, double* value)
{
    __this->Progress(*value);
}

// private static void SetValue(ObjC.Object handle, float value) :2451
void Slider__SetValue_fn(uObject* handle, float* value)
{
    Slider::SetValue(handle, *value);
}

// private float get_Value() :2439
void Slider__get_Value_fn(Slider* __this, float* __retval)
{
    *__retval = __this->Value();
}

// private void set_Value(float value) :2440
void Slider__set_Value_fn(Slider* __this, float* value)
{
    __this->Value(*value);
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) [instance] :2409
void Slider::ctor_2(uObject* host)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Slider", ".ctor(Fuse.Controls.Native.IRangeViewHost)");
    ctor_1(Slider::Create());
    _host = host;
    _valueChangedEvent = ::g::Fuse::Controls::Native::iOS::UIControlEvent::AddValueChangedCallback(Handle(), uDelegate::New(::TYPES[0/*Uno.Action<ObjC.Object, ObjC.Object>*/], (void*)Slider__OnValueChanged_fn, this));
}

// private void OnValueChanged(ObjC.Object sender, ObjC.Object uiEvent) [instance] :2432
void Slider::OnValueChanged(uObject* sender, uObject* uiEvent)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Slider", "OnValueChanged(ObjC.Object,ObjC.Object)");
    ::g::Fuse::Controls::Native::IRangeViewHost::OnProgressChanged(uInterface(uPtr(_host), ::TYPES[2/*Fuse.Controls.Native.IRangeViewHost*/]), (double)(Value() / 100.0f));
}

// public void set_Progress(double value) [instance] :2402
void Slider::Progress(double value)
{
    Value((float)value * 100.0f);
}

// private float get_Value() [instance] :2439
float Slider::Value()
{
    return Slider::GetValue(Handle());
}

// private void set_Value(float value) [instance] :2440
void Slider::Value(float value)
{
    Slider::SetValue(Handle(), value);
}

// private static ObjC.Object Create() [static] :2424
uObject* Slider::Create()
{
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            ::UISlider* slider = [[::UISlider alloc] init];
            			[slider setMinimumValue:   0.0f];
            			[slider setMaximumValue: 100.0f];
            			return slider;
        } ());
        
    }
    
}

// private static float GetValue(ObjC.Object handle) [static] :2444
float Slider::GetValue(uObject* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> float
        {
            ::UISlider* slider = (::UISlider*)handle;
            			return [slider value];
        } (::g::ObjC::Helpers::GetHandle(handle));
        
    }
    
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) [static] :2409
Slider* Slider::New1(uObject* host)
{
    Slider* obj1 = (Slider*)uNew(Slider_typeof());
    obj1->ctor_2(host);
    return obj1;
}

// private static void SetValue(ObjC.Object handle, float value) [static] :2451
void Slider::SetValue(uObject* handle, float value)
{
    @autoreleasepool
    {
        [] (::id handle, float value) -> void
        {
            ::UISlider* slider = (::UISlider*)handle;
            			[slider setValue:value animated:false];
        } (::g::ObjC::Helpers::GetHandle(handle), value);
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
