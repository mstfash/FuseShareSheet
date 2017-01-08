// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.AutoCapitalizationHint.h>
#include <Fuse.Controls.AutoCorrectHint.h>
#include <Fuse.Controls.Native.iOS.FocusHelpers.h>
#include <Fuse.Controls.Native.iOS.FontCache.h>
#include <Fuse.Controls.Native.iOS.MultiLineTextEdit.h>
#include <Fuse.Controls.Native.iOS.NativeFocus.h>
#include <Fuse.Controls.Native.iOS.NSAttributedStringBuilder.h>
#include <Fuse.Controls.Native.iOS.TextEditSpeedHack.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.ITextEditHost.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextInputActionStyle.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Font.h>
#include <Fuse.Internal.FontFaceDescriptor.h>
#include <iOS/Helpers.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
#include <Uno.Float4.h>
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class MultiLineTextEdit :2916
// {
static void MultiLineTextEdit_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::ObjC::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Fuse::Controls::Native::ITextEditHost_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(MultiLineTextEdit_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(MultiLineTextEdit_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(MultiLineTextEdit_type, interface2),
        ::g::Fuse::Controls::Native::ITextEdit_typeof(), offsetof(MultiLineTextEdit_type, interface3),
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof(), offsetof(MultiLineTextEdit_type, interface4),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(MultiLineTextEdit_type, interface5));
    type->SetFields(5,
        ::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::MultiLineTextEdit, _builder), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::MultiLineTextEdit, _delegate), 0,
        ::g::Fuse::Internal::FontFaceDescriptor_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::MultiLineTextEdit, _descriptor), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::MultiLineTextEdit, _fontSize), 0,
        ::TYPES[2/*Fuse.Controls.Native.ITextEditHost*/], offsetof(::g::Fuse::Controls::Native::iOS::MultiLineTextEdit, _host), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MultiLineTextEdit__New1_fn, 0, true, type, 1, ::TYPES[2/*Fuse.Controls.Native.ITextEditHost*/]));
}

MultiLineTextEdit_type* MultiLineTextEdit_typeof()
{
    static uSStrong<MultiLineTextEdit_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(MultiLineTextEdit);
    options.TypeSize = sizeof(MultiLineTextEdit_type);
    type = (MultiLineTextEdit_type*)uClassType::New("Fuse.Controls.Native.iOS.MultiLineTextEdit", options);
    type->fp_build_ = MultiLineTextEdit_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::iOS::View*))MultiLineTextEdit__Dispose_fn;
    type->interface3.fp_FocusGained = (void(*)(uObject*))MultiLineTextEdit__FuseControlsNativeITextEditFocusGained_fn;
    type->interface3.fp_FocusLost = (void(*)(uObject*))MultiLineTextEdit__FuseControlsNativeITextEditFocusLost_fn;
    type->interface4.fp_FocusGained = (void(*)(uObject*))MultiLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusGained_fn;
    type->interface4.fp_FocusLost = (void(*)(uObject*))MultiLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusLost_fn;
    type->interface5.fp_set_Value = (void(*)(uObject*, uString*))MultiLineTextEdit__FuseControlsNativeITextViewset_Value_fn;
    type->interface5.fp_set_MaxLength = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextViewset_MaxLength_fn;
    type->interface5.fp_set_TextWrapping = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextViewset_TextWrapping_fn;
    type->interface5.fp_set_LineSpacing = (void(*)(uObject*, float*))MultiLineTextEdit__FuseControlsNativeITextViewset_LineSpacing_fn;
    type->interface5.fp_set_FontSize = (void(*)(uObject*, float*))MultiLineTextEdit__FuseControlsNativeITextViewset_FontSize_fn;
    type->interface5.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))MultiLineTextEdit__FuseControlsNativeITextViewset_Font_fn;
    type->interface5.fp_set_TextAlignment = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextViewset_TextAlignment_fn;
    type->interface5.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))MultiLineTextEdit__FuseControlsNativeITextViewset_TextColor_fn;
    type->interface5.fp_set_TextTruncation = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextViewset_TextTruncation_fn;
    type->interface3.fp_set_IsMultiline = (void(*)(uObject*, bool*))MultiLineTextEdit__FuseControlsNativeITextEditset_IsMultiline_fn;
    type->interface3.fp_set_IsPassword = (void(*)(uObject*, bool*))MultiLineTextEdit__FuseControlsNativeITextEditset_IsPassword_fn;
    type->interface3.fp_set_IsReadOnly = (void(*)(uObject*, bool*))MultiLineTextEdit__FuseControlsNativeITextEditset_IsReadOnly_fn;
    type->interface3.fp_set_InputHint = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextEditset_InputHint_fn;
    type->interface3.fp_set_CaretColor = (void(*)(uObject*, ::g::Uno::Float4*))MultiLineTextEdit__FuseControlsNativeITextEditset_CaretColor_fn;
    type->interface3.fp_set_SelectionColor = (void(*)(uObject*, ::g::Uno::Float4*))MultiLineTextEdit__FuseControlsNativeITextEditset_SelectionColor_fn;
    type->interface3.fp_set_ActionStyle = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextEditset_ActionStyle_fn;
    type->interface3.fp_set_AutoCorrectHint = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextEditset_AutoCorrectHint_fn;
    type->interface3.fp_set_AutoCapitalizationHint = (void(*)(uObject*, int*))MultiLineTextEdit__FuseControlsNativeITextEditset_AutoCapitalizationHint_fn;
    type->interface3.fp_set_PlaceholderText = (void(*)(uObject*, uString*))MultiLineTextEdit__FuseControlsNativeITextEditset_PlaceholderText_fn;
    type->interface3.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::Uno::Float4*))MultiLineTextEdit__FuseControlsNativeITextEditset_PlaceholderColor_fn;
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
    type->interface1.fp_Dispose = (void(*)(uObject*))MultiLineTextEdit__Dispose_fn;
    return type;
}

// public MultiLineTextEdit(Fuse.Controls.Native.ITextEditHost host) :2925
void MultiLineTextEdit__ctor_2_fn(MultiLineTextEdit* __this, uObject* host)
{
    __this->ctor_2(host);
}

// private static ObjC.Object Create() :2942
void MultiLineTextEdit__Create_fn(uObject** __retval)
{
    *__retval = MultiLineTextEdit::Create();
}

// private static ObjC.Object CreateDelegate(ObjC.Object handle, Uno.Action<ObjC.Object> callback, Uno.Action didBeginEditingCallback) :2950
void MultiLineTextEdit__CreateDelegate_fn(uObject* handle, uDelegate* callback, uDelegate* didBeginEditingCallback, uObject** __retval)
{
    *__retval = MultiLineTextEdit::CreateDelegate(handle, callback, didBeginEditingCallback);
}

// public override sealed void Dispose() :2933
void MultiLineTextEdit__Dispose_fn(MultiLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Dispose()");
    ::g::Fuse::Controls::Native::iOS::NativeFocus::RemoveListener(__this->Handle());
    __this->_host = NULL;
    __this->_delegate = NULL;
    ::g::Fuse::Controls::Native::iOS::View__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.iOS.INativeFocusListener.FocusGained() :2983
void MultiLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusGained_fn(MultiLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.iOS.INativeFocusListener.FocusGained()");
    ::g::Fuse::Controls::Native::ITextEditHost::OnFocusGained(uInterface(uPtr(__this->_host), ::TYPES[2/*Fuse.Controls.Native.ITextEditHost*/]));
}

// private void Fuse.Controls.Native.iOS.INativeFocusListener.FocusLost() :2988
void MultiLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusLost_fn(MultiLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.iOS.INativeFocusListener.FocusLost()");
    ::g::Fuse::Controls::Native::ITextEditHost::OnFocusLost(uInterface(uPtr(__this->_host), ::TYPES[2/*Fuse.Controls.Native.ITextEditHost*/]));
}

// private void Fuse.Controls.Native.ITextEdit.set_ActionStyle(Fuse.Controls.TextInputActionStyle value) :3124
void MultiLineTextEdit__FuseControlsNativeITextEditset_ActionStyle_fn(MultiLineTextEdit* __this, int* value)
{
    int value_ = *value;

    switch (value_)
    {
        case 0:
        {
            MultiLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeyDefault);
            break;
        }
        case 1:
        {
            MultiLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeyDone);
            break;
        }
        case 2:
        {
            MultiLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeyNext);
            break;
        }
        case 3:
        {
            MultiLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeyGo);
            break;
        }
        case 4:
        {
            MultiLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeySearch);
            break;
        }
        case 5:
        {
            MultiLineTextEdit::SetActionStyle(__this->Handle(), UIReturnKeySend);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_AutoCapitalizationHint(Fuse.Controls.AutoCapitalizationHint value) :3153
void MultiLineTextEdit__FuseControlsNativeITextEditset_AutoCapitalizationHint_fn(MultiLineTextEdit* __this, int* value)
{
    int value_ = *value;

    switch (value_)
    {
        case 0:
        {
            MultiLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeNone);
            break;
        }
        case 1:
        {
            MultiLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeAllCharacters);
            break;
        }
        case 2:
        {
            MultiLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeWords);
            break;
        }
        case 3:
        {
            MultiLineTextEdit::SetAutoCapitalizationHint(__this->Handle(), UITextAutocapitalizationTypeSentences);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_AutoCorrectHint(Fuse.Controls.AutoCorrectHint value) :3140
void MultiLineTextEdit__FuseControlsNativeITextEditset_AutoCorrectHint_fn(MultiLineTextEdit* __this, int* value)
{
    int value_ = *value;

    switch (value_)
    {
        case 1:
        {
            MultiLineTextEdit::SetAutoCorrectHint(__this->Handle(), UITextAutocorrectionTypeNo);
            break;
        }
        case 0:
        {
            MultiLineTextEdit::SetAutoCorrectHint(__this->Handle(), UITextAutocorrectionTypeDefault);
            break;
        }
        case 2:
        {
            MultiLineTextEdit::SetAutoCorrectHint(__this->Handle(), UITextAutocorrectionTypeYes);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_CaretColor(float4 value) :3106
void MultiLineTextEdit__FuseControlsNativeITextEditset_CaretColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    MultiLineTextEdit::SetCaretColor(__this->Handle(), value_.X, value_.Y, value_.Z, value_.W);
}

// private void Fuse.Controls.Native.ITextEdit.FocusGained() :2973
void MultiLineTextEdit__FuseControlsNativeITextEditFocusGained_fn(MultiLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextEdit.FocusGained()");
    ::g::Fuse::Controls::Native::iOS::FocusHelpers::ScheduleBecomeFirstResponder(__this->Handle());
}

// private void Fuse.Controls.Native.ITextEdit.FocusLost() :2978
void MultiLineTextEdit__FuseControlsNativeITextEditFocusLost_fn(MultiLineTextEdit* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextEdit.FocusLost()");
    ::g::Fuse::Controls::Native::iOS::FocusHelpers::ScheduleResignFirstResponder(__this->Handle());
}

// private void Fuse.Controls.Native.ITextEdit.set_InputHint(Fuse.Controls.TextInputHint value) :3090
void MultiLineTextEdit__FuseControlsNativeITextEditset_InputHint_fn(MultiLineTextEdit* __this, int* value)
{
    int value_ = *value;

    switch (value_)
    {
        case 0:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeDefault);
            break;
        }
        case 1:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeEmailAddress);
            break;
        }
        case 2:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeURL);
            break;
        }
        case 3:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypePhonePad);
            break;
        }
        case 4:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeNumberPad);
            break;
        }
        case 5:
        {
            MultiLineTextEdit::SetInputHint(__this->Handle(), UIKeyboardTypeDecimalPad);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextEdit.set_IsMultiline(bool value) :3075
void MultiLineTextEdit__FuseControlsNativeITextEditset_IsMultiline_fn(MultiLineTextEdit* __this, bool* value)
{
    bool value_ = *value;
    MultiLineTextEdit::SetIsMultiline(__this->Handle(), value_);
}

// private void Fuse.Controls.Native.ITextEdit.set_IsPassword(bool value) :3080
void MultiLineTextEdit__FuseControlsNativeITextEditset_IsPassword_fn(MultiLineTextEdit* __this, bool* value)
{
    bool value_ = *value;
    MultiLineTextEdit::SetIsPassword(__this->Handle(), value_);
}

// private void Fuse.Controls.Native.ITextEdit.set_IsReadOnly(bool value) :3085
void MultiLineTextEdit__FuseControlsNativeITextEditset_IsReadOnly_fn(MultiLineTextEdit* __this, bool* value)
{
    bool value_ = *value;
    MultiLineTextEdit::SetIsReadOnly(__this->Handle(), value_);
}

// private void Fuse.Controls.Native.ITextEdit.set_PlaceholderColor(float4 value) :3172
void MultiLineTextEdit__FuseControlsNativeITextEditset_PlaceholderColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value)
{
}

// private void Fuse.Controls.Native.ITextEdit.set_PlaceholderText(string value) :3167
void MultiLineTextEdit__FuseControlsNativeITextEditset_PlaceholderText_fn(MultiLineTextEdit* __this, uString* value)
{
}

// private void Fuse.Controls.Native.ITextEdit.set_SelectionColor(float4 value) :3119
void MultiLineTextEdit__FuseControlsNativeITextEditset_SelectionColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_Font(Fuse.Font value) :3044
void MultiLineTextEdit__FuseControlsNativeITextViewset_Font_fn(MultiLineTextEdit* __this, ::g::Fuse::Font* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextView.set_Font(Fuse.Font)");
    ::g::Fuse::Internal::FontFaceDescriptor* ret2;

    if (uPtr(uPtr(value)->Descriptors)->Count() > 0)
    {
        ::g::Fuse::Internal::FontFaceDescriptor* descriptor = (::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(value)->Descriptors), uCRef<int>(0), &ret2), ret2);
        __this->_descriptor = descriptor;
        MultiLineTextEdit::SetValue(__this->Handle(), uPtr(uPtr(__this->_builder)->SetFont(::g::Fuse::Controls::Native::iOS::FontCache::Get(__this->_descriptor, __this->_fontSize)))->BuildAttributedString());
    }
}

// private void Fuse.Controls.Native.ITextView.set_FontSize(float value) :3031
void MultiLineTextEdit__FuseControlsNativeITextViewset_FontSize_fn(MultiLineTextEdit* __this, float* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextView.set_FontSize(float)");
    float value_ = *value;

    if (__this->_fontSize != value_)
    {
        __this->_fontSize = value_;

        if (__this->_descriptor != NULL)
            MultiLineTextEdit::SetValue(__this->Handle(), uPtr(uPtr(__this->_builder)->SetFont(::g::Fuse::Controls::Native::iOS::FontCache::Get(__this->_descriptor, __this->_fontSize)))->BuildAttributedString());
    }
}

// private void Fuse.Controls.Native.ITextView.set_LineSpacing(float value) :3025
void MultiLineTextEdit__FuseControlsNativeITextViewset_LineSpacing_fn(MultiLineTextEdit* __this, float* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextView.set_LineSpacing(float)");
    float value_ = *value;
    MultiLineTextEdit::SetValue(__this->Handle(), uPtr(uPtr(__this->_builder)->SetLineSpacing(value_))->BuildAttributedString());
}

// private void Fuse.Controls.Native.ITextView.set_MaxLength(int value) :3008
void MultiLineTextEdit__FuseControlsNativeITextViewset_MaxLength_fn(MultiLineTextEdit* __this, int* value)
{
    int value_ = *value;
    MultiLineTextEdit::SetMaxLength(__this->_delegate, (value_ == 0) ? 2147483647 : value_);
}

// private void Fuse.Controls.Native.ITextView.set_TextAlignment(Fuse.Controls.TextAlignment value) :3060
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextAlignment_fn(MultiLineTextEdit* __this, int* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextView.set_TextAlignment(Fuse.Controls.TextAlignment)");
    int value_ = *value;
    MultiLineTextEdit::SetValue(__this->Handle(), uPtr(uPtr(__this->_builder)->SetTextAlignment(value_))->BuildAttributedString());
}

// private void Fuse.Controls.Native.ITextView.set_TextColor(float4 value) :3065
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextView.set_TextColor(float4)");
    ::g::Uno::Float4 value_ = *value;
    MultiLineTextEdit::SetValue(__this->Handle(), uPtr(uPtr(__this->_builder)->SetTextColor(value_))->BuildAttributedString());
}

// private void Fuse.Controls.Native.ITextView.set_TextTruncation(Fuse.Controls.TextTruncation value) :3070
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextTruncation_fn(MultiLineTextEdit* __this, int* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_TextWrapping(Fuse.Controls.TextWrapping value) :3020
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextWrapping_fn(MultiLineTextEdit* __this, int* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextView.set_TextWrapping(Fuse.Controls.TextWrapping)");
    int value_ = *value;
    MultiLineTextEdit::SetValue(__this->Handle(), uPtr(uPtr(__this->_builder)->SetTextWrapping(value_))->BuildAttributedString());
}

// private void Fuse.Controls.Native.ITextView.set_Value(string value) :3002
void MultiLineTextEdit__FuseControlsNativeITextViewset_Value_fn(MultiLineTextEdit* __this, uString* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "Fuse.Controls.Native.ITextView.set_Value(string)");
    MultiLineTextEdit::SetValue(__this->Handle(), uPtr(uPtr(__this->_builder)->SetValue(value))->BuildAttributedString());
}

// private static string GetValue(ObjC.Object handle) :3190
void MultiLineTextEdit__GetValue_fn(uObject* handle, uString** __retval)
{
    *__retval = MultiLineTextEdit::GetValue(handle);
}

// public MultiLineTextEdit New(Fuse.Controls.Native.ITextEditHost host) :2925
void MultiLineTextEdit__New1_fn(uObject* host, MultiLineTextEdit** __retval)
{
    *__retval = MultiLineTextEdit::New1(host);
}

// private void OnDidBeginEditing() :2961
void MultiLineTextEdit__OnDidBeginEditing_fn(MultiLineTextEdit* __this)
{
    __this->OnDidBeginEditing();
}

// private void OnTextChanged(ObjC.Object uitextView) :2993
void MultiLineTextEdit__OnTextChanged_fn(MultiLineTextEdit* __this, uObject* uitextView)
{
    __this->OnTextChanged(uitextView);
}

// private static void SetActionStyle(ObjC.Object handle, int style) :3225
void MultiLineTextEdit__SetActionStyle_fn(uObject* handle, int* style)
{
    MultiLineTextEdit::SetActionStyle(handle, *style);
}

// private static void SetAutoCapitalizationHint(ObjC.Object handle, int hint) :3239
void MultiLineTextEdit__SetAutoCapitalizationHint_fn(uObject* handle, int* hint)
{
    MultiLineTextEdit::SetAutoCapitalizationHint(handle, *hint);
}

// private static void SetAutoCorrectHint(ObjC.Object handle, int hint) :3232
void MultiLineTextEdit__SetAutoCorrectHint_fn(uObject* handle, int* hint)
{
    MultiLineTextEdit::SetAutoCorrectHint(handle, *hint);
}

// private static void SetCaretColor(ObjC.Object handle, float r, float g, float b, float a) :3110
void MultiLineTextEdit__SetCaretColor_fn(uObject* handle, float* r, float* g, float* b, float* a)
{
    MultiLineTextEdit::SetCaretColor(handle, *r, *g, *b, *a);
}

// private static void SetInputHint(ObjC.Object handle, int hint) :3218
void MultiLineTextEdit__SetInputHint_fn(uObject* handle, int* hint)
{
    MultiLineTextEdit::SetInputHint(handle, *hint);
}

// private static void SetIsMultiline(ObjC.Object handle, bool isMultiline) :3211
void MultiLineTextEdit__SetIsMultiline_fn(uObject* handle, bool* isMultiline)
{
    MultiLineTextEdit::SetIsMultiline(handle, *isMultiline);
}

// private static void SetIsPassword(ObjC.Object handle, bool isPassword) :3204
void MultiLineTextEdit__SetIsPassword_fn(uObject* handle, bool* isPassword)
{
    MultiLineTextEdit::SetIsPassword(handle, *isPassword);
}

// private static void SetIsReadOnly(ObjC.Object handle, bool isReadOnly) :3197
void MultiLineTextEdit__SetIsReadOnly_fn(uObject* handle, bool* isReadOnly)
{
    MultiLineTextEdit::SetIsReadOnly(handle, *isReadOnly);
}

// private static void SetMaxLength(ObjC.Object delegateHandle, int maxLength) :3012
void MultiLineTextEdit__SetMaxLength_fn(uObject* delegateHandle, int* maxLength)
{
    MultiLineTextEdit::SetMaxLength(delegateHandle, *maxLength);
}

// private static void SetTypingAttributes(ObjC.Object handle, ObjC.Object typingAttributes) :2967
void MultiLineTextEdit__SetTypingAttributes_fn(uObject* handle, uObject* typingAttributes)
{
    MultiLineTextEdit::SetTypingAttributes(handle, typingAttributes);
}

// private static void SetValue(ObjC.Object handle, ObjC.Object value) :3183
void MultiLineTextEdit__SetValue_fn(uObject* handle, uObject* value)
{
    MultiLineTextEdit::SetValue(handle, value);
}

// public MultiLineTextEdit(Fuse.Controls.Native.ITextEditHost host) [instance] :2925
void MultiLineTextEdit::ctor_2(uObject* host)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", ".ctor(Fuse.Controls.Native.ITextEditHost)");
    _builder = ::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder::New1();
    _fontSize = 12.0f;
    ctor_1(MultiLineTextEdit::Create());
    ::g::Fuse::Controls::Native::iOS::TextEditSpeedHack::Run();
    _host = host;
    _delegate = MultiLineTextEdit::CreateDelegate(Handle(), uDelegate::New(::TYPES[0/*Uno.Action<ObjC.Object>*/], (void*)MultiLineTextEdit__OnTextChanged_fn, this), uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)MultiLineTextEdit__OnDidBeginEditing_fn, this));
    ::g::Fuse::Controls::Native::iOS::NativeFocus::AddListener(Handle(), (uObject*)this);
}

// private void OnDidBeginEditing() [instance] :2961
void MultiLineTextEdit::OnDidBeginEditing()
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "OnDidBeginEditing()");
    MultiLineTextEdit::SetTypingAttributes(Handle(), uPtr(_builder)->BuildAttributes());
}

// private void OnTextChanged(ObjC.Object uitextView) [instance] :2993
void MultiLineTextEdit::OnTextChanged(uObject* uitextView)
{
    uStackFrame __("Fuse.Controls.Native.iOS.MultiLineTextEdit", "OnTextChanged(ObjC.Object)");
    uString* value = MultiLineTextEdit::GetValue(Handle());
    uPtr(_builder)->SetValue(value);
    ::g::Fuse::Controls::Native::ITextEditHost::OnValueChanged(uInterface(uPtr(_host), ::TYPES[2/*Fuse.Controls.Native.ITextEditHost*/]), value);
}

// private static ObjC.Object Create() [static] :2942
uObject* MultiLineTextEdit::Create()
{
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            ::UITextView* tv = [[::UITextView alloc] init];
            			[tv setBackgroundColor:[::UIColor colorWithRed:(CGFloat)0.0f green:(CGFloat)0.0f blue:(CGFloat)0.0f alpha:(CGFloat)0.0f]];
            			return tv;
        } ());
        
    }
    
}

// private static ObjC.Object CreateDelegate(ObjC.Object handle, Uno.Action<ObjC.Object> callback, Uno.Action didBeginEditingCallback) [static] :2950
uObject* MultiLineTextEdit::CreateDelegate(uObject* handle, uDelegate* callback, uDelegate* didBeginEditingCallback)
{
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id handle, ::uObjC::Function<void, ::id> callback, ::uObjC::Function<void> didBeginEditingCallback) -> ::id
        {
            ::UITextView* textView = (::UITextView*)handle;
            			::TextViewDelegate* del = [[::TextViewDelegate alloc] init];
            			[del setTextChangedCallback: callback];
            			[del setDidBeginEditingCallback: didBeginEditingCallback];
            			[del setMaxLength: INT_MAX];
            			[textView setDelegate:del];
            			return del;
        } (::g::ObjC::Helpers::GetHandle(handle), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::id>
        {
            return [[^ void (::id arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(arg));
                
            } copy] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: callback]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return [[^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            } copy] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: didBeginEditingCallback])));
        
    }
    
}

// private static string GetValue(ObjC.Object handle) [static] :3190
uString* MultiLineTextEdit::GetValue(uObject* handle)
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::id handle) -> ::NSString*
        {
            ::UITextView* textView = (::UITextView*)handle;
            			return [textView text];
        } (::g::ObjC::Helpers::GetHandle(handle)));
        
    }
    
}

// public MultiLineTextEdit New(Fuse.Controls.Native.ITextEditHost host) [static] :2925
MultiLineTextEdit* MultiLineTextEdit::New1(uObject* host)
{
    MultiLineTextEdit* obj1 = (MultiLineTextEdit*)uNew(MultiLineTextEdit_typeof());
    obj1->ctor_2(host);
    return obj1;
}

// private static void SetActionStyle(ObjC.Object handle, int style) [static] :3225
void MultiLineTextEdit::SetActionStyle(uObject* handle, int style)
{
    @autoreleasepool
    {
        [] (::id handle, int style) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            			[textView setReturnKeyType: (UIReturnKeyType)style];
        } (::g::ObjC::Helpers::GetHandle(handle), style);
        
    }
    
}

// private static void SetAutoCapitalizationHint(ObjC.Object handle, int hint) [static] :3239
void MultiLineTextEdit::SetAutoCapitalizationHint(uObject* handle, int hint)
{
    @autoreleasepool
    {
        [] (::id handle, int hint) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            			[textView setAutocapitalizationType: (UITextAutocapitalizationType)hint];
        } (::g::ObjC::Helpers::GetHandle(handle), hint);
        
    }
    
}

// private static void SetAutoCorrectHint(ObjC.Object handle, int hint) [static] :3232
void MultiLineTextEdit::SetAutoCorrectHint(uObject* handle, int hint)
{
    @autoreleasepool
    {
        [] (::id handle, int hint) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            			[textView setAutocorrectionType: (UITextAutocorrectionType)hint];
        } (::g::ObjC::Helpers::GetHandle(handle), hint);
        
    }
    
}

// private static void SetCaretColor(ObjC.Object handle, float r, float g, float b, float a) [static] :3110
void MultiLineTextEdit::SetCaretColor(uObject* handle, float r, float g, float b, float a)
{
    @autoreleasepool
    {
        [] (::id handle, float r, float g, float b, float a) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            			::UIColor* color = [::UIColor colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a];
            			[textView setTintColor:color];
        } (::g::ObjC::Helpers::GetHandle(handle), r, g, b, a);
        
    }
    
}

// private static void SetInputHint(ObjC.Object handle, int hint) [static] :3218
void MultiLineTextEdit::SetInputHint(uObject* handle, int hint)
{
    @autoreleasepool
    {
        [] (::id handle, int hint) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            			[textView setKeyboardType:(UIKeyboardType)hint];
        } (::g::ObjC::Helpers::GetHandle(handle), hint);
        
    }
    
}

// private static void SetIsMultiline(ObjC.Object handle, bool isMultiline) [static] :3211
void MultiLineTextEdit::SetIsMultiline(uObject* handle, bool isMultiline)
{
    @autoreleasepool
    {
        [] (::id handle, bool isMultiline) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            			[[textView textContainer] setMaximumNumberOfLines:((isMultiline) ? 0 : 1)];
        } (::g::ObjC::Helpers::GetHandle(handle), isMultiline);
        
    }
    
}

// private static void SetIsPassword(ObjC.Object handle, bool isPassword) [static] :3204
void MultiLineTextEdit::SetIsPassword(uObject* handle, bool isPassword)
{
    @autoreleasepool
    {
        [] (::id handle, bool isPassword) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            			[textView setSecureTextEntry: isPassword];
        } (::g::ObjC::Helpers::GetHandle(handle), isPassword);
        
    }
    
}

// private static void SetIsReadOnly(ObjC.Object handle, bool isReadOnly) [static] :3197
void MultiLineTextEdit::SetIsReadOnly(uObject* handle, bool isReadOnly)
{
    @autoreleasepool
    {
        [] (::id handle, bool isReadOnly) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            			[textView setEditable: !isReadOnly];
        } (::g::ObjC::Helpers::GetHandle(handle), isReadOnly);
        
    }
    
}

// private static void SetMaxLength(ObjC.Object delegateHandle, int maxLength) [static] :3012
void MultiLineTextEdit::SetMaxLength(uObject* delegateHandle, int maxLength)
{
    @autoreleasepool
    {
        [] (::id delegateHandle, int maxLength) -> void
        {
            ::TextViewDelegate* textViewDelegate = (::TextViewDelegate*)delegateHandle;
            			[textViewDelegate setMaxLength: maxLength];
        } (::g::ObjC::Helpers::GetHandle(delegateHandle), maxLength);
        
    }
    
}

// private static void SetTypingAttributes(ObjC.Object handle, ObjC.Object typingAttributes) [static] :2967
void MultiLineTextEdit::SetTypingAttributes(uObject* handle, uObject* typingAttributes)
{
    @autoreleasepool
    {
        [] (::id handle, ::id typingAttributes) -> void
        {
            UITextView* textView = (UITextView*)handle;
            			textView.typingAttributes = typingAttributes;
        } (::g::ObjC::Helpers::GetHandle(handle), ::g::ObjC::Helpers::GetHandle(typingAttributes));
        
    }
    
}

// private static void SetValue(ObjC.Object handle, ObjC.Object value) [static] :3183
void MultiLineTextEdit::SetValue(uObject* handle, uObject* value)
{
    @autoreleasepool
    {
        [] (::id handle, ::id value) -> void
        {
            ::UITextView* textView = (::UITextView*)handle;
            			textView.attributedText = (NSAttributedString*)value;
        } (::g::ObjC::Helpers::GetHandle(handle), ::g::ObjC::Helpers::GetHandle(value));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
