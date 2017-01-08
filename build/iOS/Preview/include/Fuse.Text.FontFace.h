// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct Cache;}}}
namespace g{namespace Fuse{namespace Internal{struct CacheItem;}}}
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace Fuse{namespace Text{struct Font;}}}
namespace g{namespace Fuse{namespace Text{struct FontFace;}}}

namespace g{
namespace Fuse{
namespace Text{

// public abstract class FontFace :1027
// {
struct FontFace_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Dispose)(::g::Fuse::Text::FontFace*);
    void(*fp_GetOfPixelSizeInternal)(::g::Fuse::Text::FontFace*, int*, ::g::Fuse::Text::Font**);
};

FontFace_type* FontFace_typeof();
void FontFace__ctor__fn(FontFace* __this);
void FontFace__Dispose_fn(FontFace* __this);
void FontFace__GetOfPixelSize_fn(FontFace* __this, int* size, ::g::Fuse::Internal::CacheItem* __retval);
void FontFace__Load_fn(uArray* data, int* index, uDelegate* stylePredicate, FontFace** __retval);
void FontFace__Load1_fn(::g::Fuse::Internal::FontFaceDescriptor* descriptor, FontFace** __retval);
void FontFace__Load2_fn(uString* fileName, int* index, uDelegate* stylePredicate, FontFace** __retval);

struct FontFace : uObject
{
    uStrong< ::g::Fuse::Internal::Cache*> _fontCache;

    void ctor_();
    void Dispose() { (((FontFace_type*)__type)->fp_Dispose)(this); }
    ::g::Fuse::Internal::CacheItem GetOfPixelSize(int size);
    ::g::Fuse::Text::Font* GetOfPixelSizeInternal(int size) { ::g::Fuse::Text::Font* __retval; return (((FontFace_type*)__type)->fp_GetOfPixelSizeInternal)(this, &size, &__retval), __retval; }
    static void Dispose(FontFace* __this) { FontFace__Dispose_fn(__this); }
    static FontFace* Load(uArray* data, int index, uDelegate* stylePredicate);
    static FontFace* Load1(::g::Fuse::Internal::FontFaceDescriptor* descriptor);
    static FontFace* Load2(uString* fileName, int index, uDelegate* stylePredicate);
};
// }

}}} // ::g::Fuse::Text
