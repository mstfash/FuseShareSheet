// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.CacheItem-2.h>
#include <Fuse.Text.FontFace.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace Fuse{namespace Text{struct FallingBackFontFace;}}}
namespace g{namespace Fuse{namespace Text{struct Font;}}}

namespace g{
namespace Fuse{
namespace Text{

// public sealed class FallingBackFontFace :842
// {
::g::Fuse::Text::FontFace_type* FallingBackFontFace_typeof();
void FallingBackFontFace__ctor_1_fn(FallingBackFontFace* __this, uArray* fontFaces);
void FallingBackFontFace__Dispose_fn(FallingBackFontFace* __this);
void FallingBackFontFace__GetOfPixelSizeInternal_fn(FallingBackFontFace* __this, int* size, ::g::Fuse::Text::Font** __retval);
void FallingBackFontFace__New1_fn(uArray* fontFaces, FallingBackFontFace** __retval);

struct FallingBackFontFace : ::g::Fuse::Text::FontFace
{
    uStrong<uArray*> FontFaces;

    void ctor_1(uArray* fontFaces);
    static FallingBackFontFace* New1(uArray* fontFaces);
};
// }

}}} // ::g::Fuse::Text
