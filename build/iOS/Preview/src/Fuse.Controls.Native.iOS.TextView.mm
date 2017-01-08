// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.FontCache.h>
#include <Fuse.Controls.Native.iOS.NSAttributedStringBuilder.h>
#include <Fuse.Controls.Native.iOS.TextView.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Font.h>
#include <Fuse.Internal.FontFaceDescriptor.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
#include <Uno.Float4.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class TextView :3285
// {
static void TextView_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Native::ITextView_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TextView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(TextView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(TextView_type, interface2),
        ::TYPES[0/*Fuse.Controls.Native.ITextView*/], offsetof(TextView_type, interface3));
    type->SetFields(5,
        ::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::TextView, _builder), 0,
        ::g::Fuse::Font_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::TextView, _font), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::TextView, _fontSize), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)TextView__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)TextView__New2_fn, 0, true, type, 1, ::g::ObjC::Object_typeof()));
}

TextView_type* TextView_typeof()
{
    static uSStrong<TextView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(TextView_type);
    type = (TextView_type*)uClassType::New("Fuse.Controls.Native.iOS.TextView", options);
    type->fp_build_ = TextView_build;
    type->fp_ctor_ = (void*)TextView__New1_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, uString*))TextView__FuseControlsNativeITextViewset_Value_fn;
    type->interface3.fp_set_MaxLength = (void(*)(uObject*, int*))TextView__FuseControlsNativeITextViewset_MaxLength_fn;
    type->interface3.fp_set_TextWrapping = (void(*)(uObject*, int*))TextView__FuseControlsNativeITextViewset_TextWrapping_fn;
    type->interface3.fp_set_LineSpacing = (void(*)(uObject*, float*))TextView__FuseControlsNativeITextViewset_LineSpacing_fn;
    type->interface3.fp_set_FontSize = (void(*)(uObject*, float*))TextView__FuseControlsNativeITextViewset_FontSize_fn;
    type->interface3.fp_set_TextAlignment = (void(*)(uObject*, int*))TextView__FuseControlsNativeITextViewset_TextAlignment_fn;
    type->interface3.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))TextView__FuseControlsNativeITextViewset_Font_fn;
    type->interface3.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))TextView__FuseControlsNativeITextViewset_TextColor_fn;
    type->interface3.fp_set_TextTruncation = (void(*)(uObject*, int*))TextView__FuseControlsNativeITextViewset_TextTruncation_fn;
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
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Dispose_fn;
    return type;
}

// public TextView() :3290
void TextView__ctor_2_fn(TextView* __this)
{
    __this->ctor_2();
}

// public TextView(ObjC.Object handle) :3288
void TextView__ctor_3_fn(TextView* __this, uObject* handle)
{
    __this->ctor_3(handle);
}

// private static ObjC.Object Create() :3293
void TextView__Create_fn(uObject** __retval)
{
    *__retval = TextView::Create();
}

// private void Fuse.Controls.Native.ITextView.set_Font(Fuse.Font value) :3356
void TextView__FuseControlsNativeITextViewset_Font_fn(TextView* __this, ::g::Fuse::Font* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "Fuse.Controls.Native.ITextView.set_Font(Fuse.Font)");
    ::g::Fuse::Internal::FontFaceDescriptor* ret3;
    __this->_font = value;

    if (value == NULL)
        return;

    if (uPtr(uPtr(value)->Descriptors)->Count() > 0)
    {
        uObject* font = ::g::Fuse::Controls::Native::iOS::FontCache::Get((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(value)->Descriptors), uCRef<int>(0), &ret3), ret3), __this->_fontSize);
        uPtr(__this->_builder)->SetFont(font);
        __this->UpdateText();
    }
}

// private void Fuse.Controls.Native.ITextView.set_FontSize(float value) :3337
void TextView__FuseControlsNativeITextViewset_FontSize_fn(TextView* __this, float* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "Fuse.Controls.Native.ITextView.set_FontSize(float)");
    float value_ = *value;
    __this->_fontSize = value_;
    ::g::Fuse::Controls::Native::ITextView::Font(uInterface((uObject*)__this, ::TYPES[0/*Fuse.Controls.Native.ITextView*/]), __this->_font);
}

// private void Fuse.Controls.Native.ITextView.set_LineSpacing(float value) :3327
void TextView__FuseControlsNativeITextViewset_LineSpacing_fn(TextView* __this, float* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "Fuse.Controls.Native.ITextView.set_LineSpacing(float)");
    float value_ = *value;
    uPtr(__this->_builder)->SetLineSpacing(value_);
    __this->UpdateText();
}

// private void Fuse.Controls.Native.ITextView.set_MaxLength(int value) :3313
void TextView__FuseControlsNativeITextViewset_MaxLength_fn(TextView* __this, int* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_TextAlignment(Fuse.Controls.TextAlignment value) :3346
void TextView__FuseControlsNativeITextViewset_TextAlignment_fn(TextView* __this, int* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "Fuse.Controls.Native.ITextView.set_TextAlignment(Fuse.Controls.TextAlignment)");
    int value_ = *value;
    uPtr(__this->_builder)->SetTextAlignment(value_);
    __this->UpdateText();
}

// private void Fuse.Controls.Native.ITextView.set_TextColor(float4 value) :3373
void TextView__FuseControlsNativeITextViewset_TextColor_fn(TextView* __this, ::g::Uno::Float4* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "Fuse.Controls.Native.ITextView.set_TextColor(float4)");
    ::g::Uno::Float4 value_ = *value;
    uPtr(__this->_builder)->SetTextColor(value_);
    __this->UpdateText();
}

// private void Fuse.Controls.Native.ITextView.set_TextTruncation(Fuse.Controls.TextTruncation value) :3382
void TextView__FuseControlsNativeITextViewset_TextTruncation_fn(TextView* __this, int* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_TextWrapping(Fuse.Controls.TextWrapping value) :3318
void TextView__FuseControlsNativeITextViewset_TextWrapping_fn(TextView* __this, int* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "Fuse.Controls.Native.ITextView.set_TextWrapping(Fuse.Controls.TextWrapping)");
    int value_ = *value;
    uPtr(__this->_builder)->SetTextWrapping(value_);
    __this->UpdateText();
}

// private void Fuse.Controls.Native.ITextView.set_Value(string value) :3304
void TextView__FuseControlsNativeITextViewset_Value_fn(TextView* __this, uString* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "Fuse.Controls.Native.ITextView.set_Value(string)");
    uPtr(__this->_builder)->SetValue(value);
    __this->UpdateText();
}

// public TextView New() :3290
void TextView__New1_fn(TextView** __retval)
{
    *__retval = TextView::New1();
}

// public TextView New(ObjC.Object handle) :3288
void TextView__New2_fn(uObject* handle, TextView** __retval)
{
    *__retval = TextView::New2(handle);
}

// private static void SetValue(ObjC.Object handle, ObjC.Object attributedString) :3391
void TextView__SetValue_fn(uObject* handle, uObject* attributedString)
{
    TextView::SetValue(handle, attributedString);
}

// private void UpdateText() :3385
void TextView__UpdateText_fn(TextView* __this)
{
    __this->UpdateText();
}

// public TextView() [instance] :3290
void TextView::ctor_2()
{
    _builder = ::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder::New1();
    _fontSize = 12.0f;
    ctor_3(TextView::Create());
}

// public TextView(ObjC.Object handle) [instance] :3288
void TextView::ctor_3(uObject* handle)
{
    _builder = ::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder::New1();
    _fontSize = 12.0f;
    ctor_1(handle);
}

// private void UpdateText() [instance] :3385
void TextView::UpdateText()
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "UpdateText()");
    TextView::SetValue(Handle(), uPtr(_builder)->BuildAttributedString());
}

// private static ObjC.Object Create() [static] :3293
uObject* TextView::Create()
{
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            auto label = [[::UILabel alloc] init];
            			label.numberOfLines = 0;
            			return label;
        } ());
        
    }
    
}

// public TextView New() [static] :3290
TextView* TextView::New1()
{
    TextView* obj2 = (TextView*)uNew(TextView_typeof());
    obj2->ctor_2();
    return obj2;
}

// public TextView New(ObjC.Object handle) [static] :3288
TextView* TextView::New2(uObject* handle)
{
    TextView* obj1 = (TextView*)uNew(TextView_typeof());
    obj1->ctor_3(handle);
    return obj1;
}

// private static void SetValue(ObjC.Object handle, ObjC.Object attributedString) [static] :3391
void TextView::SetValue(uObject* handle, uObject* attributedString)
{
    @autoreleasepool
    {
        [] (::id handle, ::id attributedString) -> void
        {
            ::UILabel* label = (::UILabel*)handle;
            			label.attributedText = (NSAttributedString*)attributedString;
        } (::g::ObjC::Helpers::GetHandle(handle), ::g::ObjC::Helpers::GetHandle(attributedString));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
