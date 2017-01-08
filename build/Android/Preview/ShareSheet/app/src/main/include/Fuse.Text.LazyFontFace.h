// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.FontFace.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace Fuse{namespace Text{struct Font;}}}
namespace g{namespace Fuse{namespace Text{struct LazyFontFace;}}}
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}

namespace g{
namespace Fuse{
namespace Text{

// public sealed class LazyFontFace :1253
// {
::g::Fuse::Text::FontFace_type* LazyFontFace_typeof();
void LazyFontFace__ctor_1_fn(LazyFontFace* __this, ::g::Fuse::Internal::FontFaceDescriptor* descriptor);
void LazyFontFace__Dispose_fn(LazyFontFace* __this);
void LazyFontFace__Force_fn(LazyFontFace* __this, ::g::Fuse::Text::FontFace** __retval);
void LazyFontFace__GetOfPixelSizeInternal_fn(LazyFontFace* __this, int* size, ::g::Fuse::Text::Font** __retval);
void LazyFontFace__New1_fn(::g::Fuse::Internal::FontFaceDescriptor* descriptor, LazyFontFace** __retval);

struct LazyFontFace : ::g::Fuse::Text::FontFace
{
    uStrong< ::g::Fuse::Internal::FontFaceDescriptor*> _descriptor;
    uStrong< ::g::Fuse::Text::FontFace*> _loadedFontFace;
    uStrong< ::g::Uno::Threading::Mutex*> _loadedFontFaceMutex;

    void ctor_1(::g::Fuse::Internal::FontFaceDescriptor* descriptor);
    ::g::Fuse::Text::FontFace* Force();
    static LazyFontFace* New1(::g::Fuse::Internal::FontFaceDescriptor* descriptor);
};
// }

}}} // ::g::Fuse::Text
