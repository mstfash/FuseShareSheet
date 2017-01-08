// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.Button.h>
#include <Fuse.Controls.Native.iOS.InputDispatch.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Visual.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class Button :11
// {
static void Button_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Button_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Button_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Button_type, interface2),
        ::g::Fuse::Controls::Native::ILabelView_typeof(), offsetof(Button_type, interface3));
    type->SetFields(5,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::Button, _visual), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Button__New1_fn, 0, true, type, 1, ::g::Fuse::Visual_typeof()));
}

Button_type* Button_typeof()
{
    static uSStrong<Button_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(Button_type);
    type = (Button_type*)uClassType::New("Fuse.Controls.Native.iOS.Button", options);
    type->fp_build_ = Button_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::iOS::View*))Button__Dispose_fn;
    type->interface3.fp_set_Text = (void(*)(uObject*, uString*))Button__FuseControlsNativeILabelViewset_Text_fn;
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
    type->interface1.fp_Dispose = (void(*)(uObject*))Button__Dispose_fn;
    return type;
}

// public Button(Fuse.Visual visual) :16
void Button__ctor_2_fn(Button* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(visual);
}

// private static ObjC.Object Create() :34
void Button__Create_fn(uObject** __retval)
{
    *__retval = Button::Create();
}

// public override sealed void Dispose() :22
void Button__Dispose_fn(Button* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Button", "Dispose()");
    ::g::Fuse::Controls::Native::iOS::View__Dispose_fn(__this);
    ::g::Fuse::Controls::Native::iOS::InputDispatch::RemoveListener(__this->_visual, __this->Handle());
}

// private void Fuse.Controls.Native.ILabelView.set_Text(string value) :30
void Button__FuseControlsNativeILabelViewset_Text_fn(Button* __this, uString* value)
{
    Button::SetText(__this->Handle(), value);
}

// public Button New(Fuse.Visual visual) :16
void Button__New1_fn(::g::Fuse::Visual* visual, Button** __retval)
{
    *__retval = Button::New1(visual);
}

// private static void SetText(ObjC.Object handle, string text) :40
void Button__SetText_fn(uObject* handle, uString* text)
{
    Button::SetText(handle, text);
}

// public Button(Fuse.Visual visual) [instance] :16
void Button::ctor_2(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Controls.Native.iOS.Button", ".ctor(Fuse.Visual)");
    ctor_1(Button::Create());
    _visual = visual;
    ::g::Fuse::Controls::Native::iOS::InputDispatch::AddListener(_visual, Handle());
}

// private static ObjC.Object Create() [static] :34
uObject* Button::Create()
{
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            return [[::UIButton alloc] init];
        } ());
        
    }
    
}

// public Button New(Fuse.Visual visual) [static] :16
Button* Button::New1(::g::Fuse::Visual* visual)
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_2(visual);
    return obj1;
}

// private static void SetText(ObjC.Object handle, string text) [static] :40
void Button::SetText(uObject* handle, uString* text)
{
    @autoreleasepool
    {
        [] (::id handle, ::NSString* text) -> void
        {
            ::UIButton* button = (::UIButton*)handle;
            			[button setTitle:text forState:UIControlStateNormal];
            			[button setTitleColor:[UIColor colorWithRed:0.0 green:122.0/255.0 blue:1.0 alpha:1.0] forState:UIControlStateNormal];
        } (::g::ObjC::Helpers::GetHandle(handle), ::uObjC::NativeString(text));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
