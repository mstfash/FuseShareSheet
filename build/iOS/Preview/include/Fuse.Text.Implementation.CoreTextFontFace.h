// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.FontFace.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct CoreTextFontFace;}}}}
namespace g{namespace Fuse{namespace Text{struct Font;}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal sealed extern class CoreTextFontFace :11
// {
::g::Fuse::Text::FontFace_type* CoreTextFontFace_typeof();
void CoreTextFontFace__ctor_1_fn(CoreTextFontFace* __this, uString* fileName, int* index, uDelegate* stylePredicate);
void CoreTextFontFace__CreateCGFont_fn(uObject* uiFont, void** __retval);
void CoreTextFontFace__CreateFont_fn(uObject* descriptor, int* pixelSize, uObject** __retval);
void CoreTextFontFace__Dispose_fn(CoreTextFontFace* __this);
void CoreTextFontFace__GetOfPixelSizeInternal_fn(CoreTextFontFace* __this, int* pixelSize, ::g::Fuse::Text::Font** __retval);
void CoreTextFontFace__New1_fn(uString* fileName, int* index, uDelegate* stylePredicate, CoreTextFontFace** __retval);

struct CoreTextFontFace : ::g::Fuse::Text::FontFace
{
    uStrong<uObject*> _descriptor;

    void ctor_1(uString* fileName, int index, uDelegate* stylePredicate);
    static void* CreateCGFont(uObject* uiFont);
    static uObject* CreateFont(uObject* descriptor, int pixelSize);
    static CoreTextFontFace* New1(uString* fileName, int index, uDelegate* stylePredicate);
};
// }

}}}} // ::g::Fuse::Text::Implementation
