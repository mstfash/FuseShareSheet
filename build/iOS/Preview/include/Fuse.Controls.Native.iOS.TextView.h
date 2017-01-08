// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.ITextView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct NSAttributedStringBuilder;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct TextView;}}}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class TextView :3285
// {
struct TextView_type : ::g::Fuse::Controls::Native::iOS::LeafView_type
{
    ::g::Fuse::Controls::Native::ITextView interface3;
};

TextView_type* TextView_typeof();
void TextView__ctor_2_fn(TextView* __this);
void TextView__ctor_3_fn(TextView* __this, uObject* handle);
void TextView__Create_fn(uObject** __retval);
void TextView__FuseControlsNativeITextViewset_Font_fn(TextView* __this, ::g::Fuse::Font* value);
void TextView__FuseControlsNativeITextViewset_FontSize_fn(TextView* __this, float* value);
void TextView__FuseControlsNativeITextViewset_LineSpacing_fn(TextView* __this, float* value);
void TextView__FuseControlsNativeITextViewset_MaxLength_fn(TextView* __this, int* value);
void TextView__FuseControlsNativeITextViewset_TextAlignment_fn(TextView* __this, int* value);
void TextView__FuseControlsNativeITextViewset_TextColor_fn(TextView* __this, ::g::Uno::Float4* value);
void TextView__FuseControlsNativeITextViewset_TextTruncation_fn(TextView* __this, int* value);
void TextView__FuseControlsNativeITextViewset_TextWrapping_fn(TextView* __this, int* value);
void TextView__FuseControlsNativeITextViewset_Value_fn(TextView* __this, uString* value);
void TextView__New1_fn(TextView** __retval);
void TextView__New2_fn(uObject* handle, TextView** __retval);
void TextView__SetValue_fn(uObject* handle, uObject* attributedString);
void TextView__UpdateText_fn(TextView* __this);

struct TextView : ::g::Fuse::Controls::Native::iOS::LeafView
{
    uStrong< ::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder*> _builder;
    uStrong< ::g::Fuse::Font*> _font;
    float _fontSize;

    void ctor_2();
    void ctor_3(uObject* handle);
    void UpdateText();
    static uObject* Create();
    static TextView* New1();
    static TextView* New2(uObject* handle);
    static void SetValue(uObject* handle, uObject* attributedString);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
