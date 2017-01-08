// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct FontCache;}}}}}
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class FontCache :499
// {
uClassType* FontCache_typeof();
void FontCache__BundleFilePath_fn(uString* resource, uString** __retval);
void FontCache__Get_fn(::g::Fuse::Internal::FontFaceDescriptor* descriptor, float* size, uObject** __retval);
void FontCache__GetOptionalPath_fn(::g::Uno::UX::FileSource* fileSource, uString** __retval);
void FontCache__UIFontWithDescriptorAndSize_fn(uObject* descriptor, float* size, uObject** __retval);

struct FontCache : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _cache_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _cache() { return FontCache_typeof()->Init(), _cache_; }

    static uString* BundleFilePath(uString* resource);
    static uObject* Get(::g::Fuse::Internal::FontFaceDescriptor* descriptor, float size);
    static uString* GetOptionalPath(::g::Uno::UX::FileSource* fileSource);
    static uObject* UIFontWithDescriptorAndSize(uObject* descriptor, float size);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
