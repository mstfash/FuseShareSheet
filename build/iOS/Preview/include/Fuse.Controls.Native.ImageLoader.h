// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageHandle;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageLoader;}}}}
namespace g{namespace Fuse{namespace Resources{struct HttpImageSource;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// internal static extern class ImageLoader :89
// {
uClassType* ImageLoader_typeof();
void ImageLoader__GetBundleAbsolutePath_fn(uString* bundlePath, uString** __retval);
void ImageLoader__Load_fn(::g::Fuse::Resources::HttpImageSource* http, ::g::Uno::Threading::Future1** __retval);
void ImageLoader__Load1_fn(uString* uri, ::g::Fuse::Controls::Native::ImageHandle** __retval);
void ImageLoader__Load2_fn(::g::Uno::IO::BundleFile* bundleFile, ::g::Fuse::Controls::Native::ImageHandle** __retval);
void ImageLoader__Load3_fn(::g::Uno::UX::FileSource* fileSource, ::g::Fuse::Controls::Native::ImageHandle** __retval);
void ImageLoader__LoadUri_fn(uString* uri, uObject** __retval);
void ImageLoader__ReleaseHandle_fn(::g::Fuse::Controls::Native::ImageHandle* handle);

struct ImageLoader : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _imageHandleCache_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _imageHandleCache() { return ImageLoader_typeof()->Init(), _imageHandleCache_; }

    static uString* GetBundleAbsolutePath(uString* bundlePath);
    static ::g::Uno::Threading::Future1* Load(::g::Fuse::Resources::HttpImageSource* http);
    static ::g::Fuse::Controls::Native::ImageHandle* Load1(uString* uri);
    static ::g::Fuse::Controls::Native::ImageHandle* Load2(::g::Uno::IO::BundleFile* bundleFile);
    static ::g::Fuse::Controls::Native::ImageHandle* Load3(::g::Uno::UX::FileSource* fileSource);
    static uObject* LoadUri(uString* uri);
    static void ReleaseHandle(::g::Fuse::Controls::Native::ImageHandle* handle);
};
// }

}}}} // ::g::Fuse::Controls::Native
