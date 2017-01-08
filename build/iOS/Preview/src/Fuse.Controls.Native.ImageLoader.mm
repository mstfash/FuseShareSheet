// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.ImageHandle.h>
#include <Fuse.Controls.Native.ImageLoader.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[2];
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// internal static extern class ImageLoader :89
// {
// static ImageLoader() :89
static void ImageLoader__cctor__fn(uType* __type)
{
    ImageLoader::_imageHandleCache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.ImageHandle>*/]));
}

static void ImageLoader_build(uType* type)
{
    ::STRINGS[0] = uString::Const("data/");
    ::STRINGS[1] = uString::Const("/tempImage");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Controls::Native::ImageHandle_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Controls::Native::ImageHandle_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::UX::BundleFileSource_typeof();
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.ImageHandle>*/], (uintptr_t)&::g::Fuse::Controls::Native::ImageLoader::_imageHandleCache_, uFieldFlagsStatic);
}

uClassType* ImageLoader_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.ImageLoader", options);
    type->fp_build_ = ImageLoader_build;
    type->fp_cctor_ = ImageLoader__cctor__fn;
    return type;
}

// private static extern string GetBundleAbsolutePath(string bundlePath) :336
void ImageLoader__GetBundleAbsolutePath_fn(uString* bundlePath, uString** __retval)
{
    *__retval = ImageLoader::GetBundleAbsolutePath(bundlePath);
}

// public static extern Uno.Threading.Future<Fuse.Controls.Native.ImageHandle> Load(Fuse.Resources.HttpImageSource http) :153
void ImageLoader__Load_fn(::g::Fuse::Resources::HttpImageSource* http, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ImageLoader::Load(http);
}

// public static Fuse.Controls.Native.ImageHandle Load(string uri) :138
void ImageLoader__Load1_fn(uString* uri, ::g::Fuse::Controls::Native::ImageHandle** __retval)
{
    *__retval = ImageLoader::Load1(uri);
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.IO.BundleFile bundleFile) :126
void ImageLoader__Load2_fn(::g::Uno::IO::BundleFile* bundleFile, ::g::Fuse::Controls::Native::ImageHandle** __retval)
{
    *__retval = ImageLoader::Load2(bundleFile);
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.UX.FileSource fileSource) :98
void ImageLoader__Load3_fn(::g::Uno::UX::FileSource* fileSource, ::g::Fuse::Controls::Native::ImageHandle** __retval)
{
    *__retval = ImageLoader::Load3(fileSource);
}

// private static extern ObjC.Object LoadUri(string uri) :329
void ImageLoader__LoadUri_fn(uString* uri, uObject** __retval)
{
    *__retval = ImageLoader::LoadUri(uri);
}

// public static void ReleaseHandle(Fuse.Controls.Native.ImageHandle handle) :275
void ImageLoader__ReleaseHandle_fn(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    ImageLoader::ReleaseHandle(handle);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ImageLoader::_imageHandleCache_;

// private static extern string GetBundleAbsolutePath(string bundlePath) [static] :336
uString* ImageLoader::GetBundleAbsolutePath(uString* bundlePath)
{
    ImageLoader_typeof()->Init();
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::NSString* bundlePath) -> ::NSString*
        {
            return [[[NSBundle mainBundle] URLForResource:bundlePath withExtension:@""] absoluteString];
        } (::uObjC::NativeString(bundlePath)));
        
    }
    
}

// public static extern Uno.Threading.Future<Fuse.Controls.Native.ImageHandle> Load(Fuse.Resources.HttpImageSource http) [static] :153
::g::Uno::Threading::Future1* ImageLoader::Load(::g::Fuse::Resources::HttpImageSource* http)
{
    uStackFrame __("Fuse.Controls.Native.ImageLoader", "Load(Fuse.Resources.HttpImageSource)");
    ImageLoader_typeof()->Init();
    bool ret1;
    ::g::Uno::Threading::Promise* ret2;
    uString* url = uPtr(http)->Url();
    ::g::Fuse::Controls::Native::ImageHandle* handle = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ImageLoader::_imageHandleCache()), url, (void**)(&handle), &ret1), ret1))
        uPtr(handle)->Pin();
    else
    {
        handle = ::g::Fuse::Controls::Native::ImageHandle::New1(url, ImageLoader::LoadUri(url));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ImageLoader::_imageHandleCache()), url, handle);
    }

    return (::g::Uno::Threading::Promise__New2_fn(::TYPES[1/*Uno.Threading.Promise<Fuse.Controls.Native.ImageHandle>*/], handle, &ret2), ret2);
}

// public static Fuse.Controls.Native.ImageHandle Load(string uri) [static] :138
::g::Fuse::Controls::Native::ImageHandle* ImageLoader::Load1(uString* uri)
{
    uStackFrame __("Fuse.Controls.Native.ImageLoader", "Load(string)");
    ImageLoader_typeof()->Init();
    bool ret3;
    ::g::Fuse::Controls::Native::ImageHandle* handle = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ImageLoader::_imageHandleCache()), uri, (void**)(&handle), &ret3), ret3))
        uPtr(handle)->Pin();
    else
    {
        handle = ::g::Fuse::Controls::Native::ImageHandle::New1(uri, ImageLoader::LoadUri(uri));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ImageLoader::_imageHandleCache()), uri, handle);
    }

    return handle;
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.IO.BundleFile bundleFile) [static] :126
::g::Fuse::Controls::Native::ImageHandle* ImageLoader::Load2(::g::Uno::IO::BundleFile* bundleFile)
{
    uStackFrame __("Fuse.Controls.Native.ImageLoader", "Load(Uno.IO.BundleFile)");
    ImageLoader_typeof()->Init();
    return ImageLoader::Load1(ImageLoader::GetBundleAbsolutePath(::g::Uno::String::op_Addition2(::STRINGS[0/*"data/"*/], uPtr(bundleFile)->BundlePath())));
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.UX.FileSource fileSource) [static] :98
::g::Fuse::Controls::Native::ImageHandle* ImageLoader::Load3(::g::Uno::UX::FileSource* fileSource)
{
    uStackFrame __("Fuse.Controls.Native.ImageLoader", "Load(Uno.UX.FileSource)");
    ImageLoader_typeof()->Init();
    bool ret4;
    ::g::Fuse::Controls::Native::ImageHandle* handle = NULL;

    if (uIs(fileSource, ::TYPES[2/*Uno.UX.BundleFileSource*/]))
        handle = ImageLoader::Load2(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(fileSource, ::TYPES[2/*Uno.UX.BundleFileSource*/]))->BundleFile);
    else if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ImageLoader::_imageHandleCache()), uPtr(fileSource)->Name, (void**)(&handle), &ret4), ret4))
        uPtr(handle)->Pin();
    else
    {
        uArray* data = uPtr(fileSource)->ReadAllBytes();
        uString* path = ::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[1/*"/tempImage"*/]);
        ::g::Uno::IO::File::WriteAllBytes(path, data);
        handle = ::g::Fuse::Controls::Native::ImageHandle::New1(fileSource->Name, ImageLoader::LoadUri(path));
        ::g::Uno::IO::File::Delete(path);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ImageLoader::_imageHandleCache()), fileSource->Name, handle);
    }

    return handle;
}

// private static extern ObjC.Object LoadUri(string uri) [static] :329
uObject* ImageLoader::LoadUri(uString* uri)
{
    ImageLoader_typeof()->Init();
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::NSString* uri) -> ::id
        {
            NSData* data = [NSData dataWithContentsOfURL: [NSURL URLWithString: uri]];
            			return [UIImage imageWithData:data];
        } (::uObjC::NativeString(uri)));
        
    }
    
}

// public static void ReleaseHandle(Fuse.Controls.Native.ImageHandle handle) [static] :275
void ImageLoader::ReleaseHandle(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    uStackFrame __("Fuse.Controls.Native.ImageLoader", "ReleaseHandle(Fuse.Controls.Native.ImageHandle)");
    ImageLoader_typeof()->Init();
    bool ret5;
    bool ret6;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ImageLoader::_imageHandleCache()), uPtr(handle)->Name(), &ret5), ret5))
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(ImageLoader::_imageHandleCache()), uPtr(handle)->Name(), &ret6);
}
// }

}}}} // ::g::Fuse::Controls::Native
