// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.iOS.INativeFocusListener.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.ITextEdit.h>
#include <Fuse.Controls.Native.ITextView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct SingleLineTextEdit;}}}}}
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace Fuse{struct Font;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class SingleLineTextEdit :2543
// {
struct SingleLineTextEdit_type : ::g::Fuse::Controls::Native::iOS::LeafView_type
{
    ::g::Fuse::Controls::Native::ITextEdit interface3;
    ::g::Fuse::Controls::Native::iOS::INativeFocusListener interface4;
    ::g::Fuse::Controls::Native::ITextView interface5;
};

SingleLineTextEdit_type* SingleLineTextEdit_typeof();
void SingleLineTextEdit__ctor_2_fn(SingleLineTextEdit* __this, uObject* textEditHost);
void SingleLineTextEdit__AddOnActionCallback_fn(uObject* handle, uDelegate* callback, uObject** __retval);
void SingleLineTextEdit__Create_fn(uObject** __retval);
void SingleLineTextEdit__Dispose_fn(SingleLineTextEdit* __this);
void SingleLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusGained_fn(SingleLineTextEdit* __this);
void SingleLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusLost_fn(SingleLineTextEdit* __this);
void SingleLineTextEdit__FuseControlsNativeITextEditset_ActionStyle_fn(SingleLineTextEdit* __this, int* value);
void SingleLineTextEdit__FuseControlsNativeITextEditset_AutoCapitalizationHint_fn(SingleLineTextEdit* __this, int* value);
void SingleLineTextEdit__FuseControlsNativeITextEditset_AutoCorrectHint_fn(SingleLineTextEdit* __this, int* value);
void SingleLineTextEdit__FuseControlsNativeITextEditset_CaretColor_fn(SingleLineTextEdit* __this, ::g::Uno::Float4* value);
void SingleLineTextEdit__FuseControlsNativeITextEditFocusGained_fn(SingleLineTextEdit* __this);
void SingleLineTextEdit__FuseControlsNativeITextEditFocusLost_fn(SingleLineTextEdit* __this);
void SingleLineTextEdit__FuseControlsNativeITextEditset_InputHint_fn(SingleLineTextEdit* __this, int* value);
void SingleLineTextEdit__FuseControlsNativeITextEditset_IsMultiline_fn(SingleLineTextEdit* __this, bool* value);
void SingleLineTextEdit__FuseControlsNativeITextEditset_IsPassword_fn(SingleLineTextEdit* __this, bool* value);
void SingleLineTextEdit__FuseControlsNativeITextEditset_IsReadOnly_fn(SingleLineTextEdit* __this, bool* value);
void SingleLineTextEdit__FuseControlsNativeITextEditset_PlaceholderColor_fn(SingleLineTextEdit* __this, ::g::Uno::Float4* value);
void SingleLineTextEdit__FuseControlsNativeITextEditset_PlaceholderText_fn(SingleLineTextEdit* __this, uString* value);
void SingleLineTextEdit__FuseControlsNativeITextEditset_SelectionColor_fn(SingleLineTextEdit* __this, ::g::Uno::Float4* value);
void SingleLineTextEdit__FuseControlsNativeITextViewset_Font_fn(SingleLineTextEdit* __this, ::g::Fuse::Font* value);
void SingleLineTextEdit__FuseControlsNativeITextViewset_FontSize_fn(SingleLineTextEdit* __this, float* value);
void SingleLineTextEdit__FuseControlsNativeITextViewset_LineSpacing_fn(SingleLineTextEdit* __this, float* value);
void SingleLineTextEdit__FuseControlsNativeITextViewset_MaxLength_fn(SingleLineTextEdit* __this, int* value);
void SingleLineTextEdit__FuseControlsNativeITextViewset_TextAlignment_fn(SingleLineTextEdit* __this, int* value);
void SingleLineTextEdit__FuseControlsNativeITextViewset_TextColor_fn(SingleLineTextEdit* __this, ::g::Uno::Float4* value);
void SingleLineTextEdit__FuseControlsNativeITextViewset_TextTruncation_fn(SingleLineTextEdit* __this, int* value);
void SingleLineTextEdit__FuseControlsNativeITextViewset_TextWrapping_fn(SingleLineTextEdit* __this, int* value);
void SingleLineTextEdit__FuseControlsNativeITextViewset_Value_fn(SingleLineTextEdit* __this, uString* value);
void SingleLineTextEdit__GetValue_fn(uObject* handle, uString** __retval);
void SingleLineTextEdit__New1_fn(uObject* textEditHost, SingleLineTextEdit** __retval);
void SingleLineTextEdit__OnAction_fn(SingleLineTextEdit* __this, uObject* sender, bool* __retval);
void SingleLineTextEdit__OnTextEdit_fn(SingleLineTextEdit* __this, uObject* sender, uObject* args);
void SingleLineTextEdit__OnValueChanged_fn(SingleLineTextEdit* __this);
void SingleLineTextEdit__SetActionStyle_fn(uObject* handle, int* style);
void SingleLineTextEdit__SetAutoCapitalizationHint_fn(uObject* handle, int* hint);
void SingleLineTextEdit__SetAutoCorrectHint_fn(uObject* handle, int* hint);
void SingleLineTextEdit__SetCaretColor_fn(uObject* handle, float* r, float* g, float* b, float* a);
void SingleLineTextEdit__SetFont_fn(uObject* handle, uObject* fontHandle);
void SingleLineTextEdit__SetInputHint_fn(uObject* handle, int* hint);
void SingleLineTextEdit__SetIsPassword_fn(uObject* handle, bool* isPassword);
void SingleLineTextEdit__SetMaxLength_fn(uObject* delegateHandle, int* maxLength);
void SingleLineTextEdit__SetPlaceholderText_fn(uObject* handle, uString* text, float* r, float* g, float* b, float* a);
void SingleLineTextEdit__SetTextAlignment_fn(uObject* handle, int* alignmnet);
void SingleLineTextEdit__SetTextColor_fn(uObject* handle, float* r, float* g, float* b, float* a);
void SingleLineTextEdit__SetValue_fn(uObject* handle, uString* value);

struct SingleLineTextEdit : ::g::Fuse::Controls::Native::iOS::LeafView
{
    uStrong<uObject*> _delegate;
    uStrong< ::g::Fuse::Internal::FontFaceDescriptor*> _descriptor;
    uStrong<uObject*> _editingEvents;
    float _fontSize;
    ::g::Uno::Float4 _placeholderColor;
    uStrong<uString*> _placeholderText;
    uStrong<uObject*> _textEditHost;

    void ctor_2(uObject* textEditHost);
    bool OnAction(uObject* sender);
    void OnTextEdit(uObject* sender, uObject* args);
    void OnValueChanged();
    static uObject* AddOnActionCallback(uObject* handle, uDelegate* callback);
    static uObject* Create();
    static uString* GetValue(uObject* handle);
    static SingleLineTextEdit* New1(uObject* textEditHost);
    static void SetActionStyle(uObject* handle, int style);
    static void SetAutoCapitalizationHint(uObject* handle, int hint);
    static void SetAutoCorrectHint(uObject* handle, int hint);
    static void SetCaretColor(uObject* handle, float r, float g, float b, float a);
    static void SetFont(uObject* handle, uObject* fontHandle);
    static void SetInputHint(uObject* handle, int hint);
    static void SetIsPassword(uObject* handle, bool isPassword);
    static void SetMaxLength(uObject* delegateHandle, int maxLength);
    static void SetPlaceholderText(uObject* handle, uString* text, float r, float g, float b, float a);
    static void SetTextAlignment(uObject* handle, int alignmnet);
    static void SetTextColor(uObject* handle, float r, float g, float b, float a);
    static void SetValue(uObject* handle, uString* value);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
