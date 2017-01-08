// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Platform.iOS.StatusBarAnimation.h>
#include <Uno.Platform.iOS.StatusBarStyle.h>

namespace g{
namespace Uno{
namespace Platform{
namespace iOS{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/platform/$.uno
// ------------------------------------------------------------------------------------------------------

// public enum StatusBarAnimation :349
uEnumType* StatusBarAnimation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.iOS.StatusBarAnimation", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Fade", 1LL,
        "Slide", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/platform/$.uno
// ------------------------------------------------------------------------------------------------------

// public enum StatusBarStyle :343
uEnumType* StatusBarStyle_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.iOS.StatusBarStyle", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Dark", 0LL,
        "Light", 1LL);
    return type;
}

}}}} // ::g::Uno::Platform::iOS
