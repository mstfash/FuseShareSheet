// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.TextEditSpeedHack.h>
#include <Uno.Bool.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class TextEditSpeedHack :3247
// {
static void TextEditSpeedHack_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::iOS::TextEditSpeedHack::_done_, uFieldFlagsStatic);
}

uClassType* TextEditSpeedHack_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.TextEditSpeedHack", options);
    type->fp_build_ = TextEditSpeedHack_build;
    return type;
}

// public static void Run() :3251
void TextEditSpeedHack__Run_fn()
{
    TextEditSpeedHack::Run();
}

// private static void RunInner() :3262
void TextEditSpeedHack__RunInner_fn()
{
    TextEditSpeedHack::RunInner();
}

bool TextEditSpeedHack::_done_;

// public static void Run() [static] :3251
void TextEditSpeedHack::Run()
{
    if (TextEditSpeedHack::_done_)
        return;

    TextEditSpeedHack::_done_ = true;
    TextEditSpeedHack::RunInner();
}

// private static void RunInner() [static] :3262
void TextEditSpeedHack::RunInner()
{
    @autoreleasepool
    {
        UITextField* lagFreeField = [[[UITextField alloc] init] autorelease];
        			  UIWindow* window = [[[UIApplication sharedApplication] delegate] window];
        			  [window addSubview:lagFreeField];
        			  [lagFreeField becomeFirstResponder];
        			  [lagFreeField resignFirstResponder];
        			  [lagFreeField removeFromSuperview];
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
