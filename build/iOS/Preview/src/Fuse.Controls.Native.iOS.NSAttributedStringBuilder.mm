// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Foundation/Foundation.h>
#include <Fuse.Controls.Native.iOS.NSAttributedStringBuilder.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextWrapping.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[1];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class NSAttributedStringBuilder :1714
// {
static void NSAttributedStringBuilder_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    type->SetFields(0,
        ::g::Fuse::Controls::TextAlignment_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder, _alignment), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder, _color), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder, _font), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder, _lineSpacing), 0,
        ::g::Fuse::Controls::TextWrapping_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder, _textWrapping), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder, _value), 0);
}

uType* NSAttributedStringBuilder_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(NSAttributedStringBuilder);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.NSAttributedStringBuilder", options);
    type->fp_build_ = NSAttributedStringBuilder_build;
    type->fp_ctor_ = (void*)NSAttributedStringBuilder__New1_fn;
    return type;
}

// public NSAttributedStringBuilder() :1724
void NSAttributedStringBuilder__ctor__fn(NSAttributedStringBuilder* __this)
{
    __this->ctor_();
}

// public ObjC.Object BuildAttributedString() :1780
void NSAttributedStringBuilder__BuildAttributedString_fn(NSAttributedStringBuilder* __this, uObject** __retval)
{
    *__retval = __this->BuildAttributedString();
}

// public ObjC.Object BuildAttributes() :1785
void NSAttributedStringBuilder__BuildAttributes_fn(NSAttributedStringBuilder* __this, uObject** __retval)
{
    *__retval = __this->BuildAttributes();
}

// private static ObjC.Object Create(string value, ObjC.Object attributes) :1795
void NSAttributedStringBuilder__Create_fn(uString* value, uObject* attributes, uObject** __retval)
{
    *__retval = NSAttributedStringBuilder::Create(value, attributes);
}

// private int GetTextAlignment(Fuse.Controls.TextAlignment alignment) :1768
void NSAttributedStringBuilder__GetTextAlignment_fn(NSAttributedStringBuilder* __this, int* alignment, int* __retval)
{
    *__retval = __this->GetTextAlignment(*alignment);
}

// public NSAttributedStringBuilder New() :1724
void NSAttributedStringBuilder__New1_fn(NSAttributedStringBuilder** __retval)
{
    *__retval = NSAttributedStringBuilder::New1();
}

// private static ObjC.Object NewDictionary() :1727
void NSAttributedStringBuilder__NewDictionary_fn(uObject** __retval)
{
    *__retval = NSAttributedStringBuilder::NewDictionary();
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetFont(ObjC.Object font) :1750
void NSAttributedStringBuilder__SetFont_fn(NSAttributedStringBuilder* __this, uObject* font, NSAttributedStringBuilder** __retval)
{
    *__retval = __this->SetFont(font);
}

// private static void SetFont(ObjC.Object handle, ObjC.Object fontHandle) :1822
void NSAttributedStringBuilder__SetFont1_fn(uObject* handle, uObject* fontHandle)
{
    NSAttributedStringBuilder::SetFont1(handle, fontHandle);
}

// private static void SetForegroundColor(ObjC.Object handle, float r, float g, float b, float a) :1801
void NSAttributedStringBuilder__SetForegroundColor_fn(uObject* handle, float* r, float* g, float* b, float* a)
{
    NSAttributedStringBuilder::SetForegroundColor(handle, *r, *g, *b, *a);
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetLineSpacing(float lineSpacing) :1744
void NSAttributedStringBuilder__SetLineSpacing_fn(NSAttributedStringBuilder* __this, float* lineSpacing, NSAttributedStringBuilder** __retval)
{
    *__retval = __this->SetLineSpacing(*lineSpacing);
}

// private static void SetParagraphStyle(ObjC.Object handle, float lineSpacing, int textAlignment, bool wrapText) :1809
void NSAttributedStringBuilder__SetParagraphStyle_fn(uObject* handle, float* lineSpacing, int* textAlignment, bool* wrapText)
{
    NSAttributedStringBuilder::SetParagraphStyle(handle, *lineSpacing, *textAlignment, *wrapText);
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetTextAlignment(Fuse.Controls.TextAlignment alignment) :1756
void NSAttributedStringBuilder__SetTextAlignment_fn(NSAttributedStringBuilder* __this, int* alignment, NSAttributedStringBuilder** __retval)
{
    *__retval = __this->SetTextAlignment(*alignment);
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetTextColor(float4 color) :1738
void NSAttributedStringBuilder__SetTextColor_fn(NSAttributedStringBuilder* __this, ::g::Uno::Float4* color, NSAttributedStringBuilder** __retval)
{
    *__retval = __this->SetTextColor(*color);
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetTextWrapping(Fuse.Controls.TextWrapping wrapping) :1762
void NSAttributedStringBuilder__SetTextWrapping_fn(NSAttributedStringBuilder* __this, int* wrapping, NSAttributedStringBuilder** __retval)
{
    *__retval = __this->SetTextWrapping(*wrapping);
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetValue(string value) :1732
void NSAttributedStringBuilder__SetValue_fn(NSAttributedStringBuilder* __this, uString* value, NSAttributedStringBuilder** __retval)
{
    *__retval = __this->SetValue(value);
}

// public NSAttributedStringBuilder() [instance] :1724
void NSAttributedStringBuilder::ctor_()
{
    _color = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
}

// public ObjC.Object BuildAttributedString() [instance] :1780
uObject* NSAttributedStringBuilder::BuildAttributedString()
{
    uString* ind1;
    return NSAttributedStringBuilder::Create((ind1 = _value, (ind1 != NULL) ? ind1 : ::STRINGS[0/*""*/]), BuildAttributes());
}

// public ObjC.Object BuildAttributes() [instance] :1785
uObject* NSAttributedStringBuilder::BuildAttributes()
{
    uObject* attributes = NSAttributedStringBuilder::NewDictionary();
    NSAttributedStringBuilder::SetForegroundColor(attributes, _color.X, _color.Y, _color.Z, _color.W);
    NSAttributedStringBuilder::SetParagraphStyle(attributes, _lineSpacing, GetTextAlignment(_alignment), _textWrapping == 1);
    NSAttributedStringBuilder::SetFont1(attributes, _font);
    return attributes;
}

// private int GetTextAlignment(Fuse.Controls.TextAlignment alignment) [instance] :1768
int NSAttributedStringBuilder::GetTextAlignment(int alignment)
{
    int nsAlignment = 0;

    switch (alignment)
    {
        case 0:
        {
            nsAlignment = NSTextAlignmentLeft;
            break;
        }
        case 1:
        {
            nsAlignment = NSTextAlignmentCenter;
            break;
        }
        case 2:
        {
            nsAlignment = NSTextAlignmentRight;
            break;
        }
    }

    return nsAlignment;
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetFont(ObjC.Object font) [instance] :1750
NSAttributedStringBuilder* NSAttributedStringBuilder::SetFont(uObject* font)
{
    _font = font;
    return this;
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetLineSpacing(float lineSpacing) [instance] :1744
NSAttributedStringBuilder* NSAttributedStringBuilder::SetLineSpacing(float lineSpacing)
{
    _lineSpacing = lineSpacing;
    return this;
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetTextAlignment(Fuse.Controls.TextAlignment alignment) [instance] :1756
NSAttributedStringBuilder* NSAttributedStringBuilder::SetTextAlignment(int alignment)
{
    _alignment = alignment;
    return this;
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetTextColor(float4 color) [instance] :1738
NSAttributedStringBuilder* NSAttributedStringBuilder::SetTextColor(::g::Uno::Float4 color)
{
    _color = color;
    return this;
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetTextWrapping(Fuse.Controls.TextWrapping wrapping) [instance] :1762
NSAttributedStringBuilder* NSAttributedStringBuilder::SetTextWrapping(int wrapping)
{
    _textWrapping = wrapping;
    return this;
}

// public Fuse.Controls.Native.iOS.NSAttributedStringBuilder SetValue(string value) [instance] :1732
NSAttributedStringBuilder* NSAttributedStringBuilder::SetValue(uString* value)
{
    _value = value;
    return this;
}

// private static ObjC.Object Create(string value, ObjC.Object attributes) [static] :1795
uObject* NSAttributedStringBuilder::Create(uString* value, uObject* attributes)
{
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::NSString* value, ::id attributes) -> ::id
        {
            return [[NSAttributedString alloc] initWithString:value attributes:attributes];
        } (::uObjC::NativeString(value), ::g::ObjC::Helpers::GetHandle(attributes)));
        
    }
    
}

// public NSAttributedStringBuilder New() [static] :1724
NSAttributedStringBuilder* NSAttributedStringBuilder::New1()
{
    NSAttributedStringBuilder* obj2 = (NSAttributedStringBuilder*)uNew(NSAttributedStringBuilder_typeof());
    obj2->ctor_();
    return obj2;
}

// private static ObjC.Object NewDictionary() [static] :1727
uObject* NSAttributedStringBuilder::NewDictionary()
{
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            return [[NSMutableDictionary alloc] init];
        } ());
        
    }
    
}

// private static void SetFont(ObjC.Object handle, ObjC.Object fontHandle) [static] :1822
void NSAttributedStringBuilder::SetFont1(uObject* handle, uObject* fontHandle)
{
    @autoreleasepool
    {
        [] (::id handle, ::id fontHandle) -> void
        {
            auto dict = (NSMutableDictionary*)handle;
            			auto font = (UIFont*)fontHandle;
            			if (font != nil)
            				dict[NSFontAttributeName] = font;
        } (::g::ObjC::Helpers::GetHandle(handle), ::g::ObjC::Helpers::GetHandle(fontHandle));
        
    }
    
}

// private static void SetForegroundColor(ObjC.Object handle, float r, float g, float b, float a) [static] :1801
void NSAttributedStringBuilder::SetForegroundColor(uObject* handle, float r, float g, float b, float a)
{
    @autoreleasepool
    {
        [] (::id handle, float r, float g, float b, float a) -> void
        {
            auto dict = (NSMutableDictionary*)handle;
            			auto color = [::UIColor colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a];
            			dict[NSForegroundColorAttributeName] = color;
        } (::g::ObjC::Helpers::GetHandle(handle), r, g, b, a);
        
    }
    
}

// private static void SetParagraphStyle(ObjC.Object handle, float lineSpacing, int textAlignment, bool wrapText) [static] :1809
void NSAttributedStringBuilder::SetParagraphStyle(uObject* handle, float lineSpacing, int textAlignment, bool wrapText)
{
    @autoreleasepool
    {
        [] (::id handle, float lineSpacing, int textAlignment, bool wrapText) -> void
        {
            auto dict = (NSMutableDictionary*)handle;
            			auto paragraphStyle = [[NSMutableParagraphStyle alloc] init];
            			paragraphStyle.lineSpacing = lineSpacing;
            			paragraphStyle.alignment = (NSTextAlignment)textAlignment;
            			paragraphStyle.lineBreakMode = wrapText
            				? NSLineBreakByWordWrapping
            				: NSLineBreakByTruncatingTail;
            			dict[NSParagraphStyleAttributeName] = paragraphStyle;
        } (::g::ObjC::Helpers::GetHandle(handle), lineSpacing, textAlignment, wrapText);
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
