// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Video/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.VideoImpl.iOS.VideoLoader.h>
#include <Fuse.Controls.VideoImpl.iOS.VideoLoader.VideoPromise.h>
#include <Fuse.Controls.VideoImpl.IVideoPlayer.h>
#include <Fuse.Controls.VideoImpl.VideoDiskCache.h>
#include <Uno.Bool.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[2];
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{
namespace iOS{

// internal sealed extern class VideoLoader :211
// {
static void VideoLoader_build(uType* type)
{
    ::STRINGS[0] = uString::Const("data/");
    ::STRINGS[1] = uString::Const("file://");
    ::TYPES[0] = ::g::Uno::UX::BundleFileSource_typeof();
}

uType* VideoLoader_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(VideoLoader);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.VideoImpl.iOS.VideoLoader", options);
    type->fp_build_ = VideoLoader_build;
    type->fp_ctor_ = (void*)VideoLoader__New1_fn;
    return type;
}

// public generated VideoLoader() :211
void VideoLoader__ctor__fn(VideoLoader* __this)
{
    __this->ctor_();
}

// private static string GetBundleAbsolutePath(string bundlePath) :288
void VideoLoader__GetBundleAbsolutePath_fn(uString* bundlePath, uString** __retval)
{
    *__retval = VideoLoader::GetBundleAbsolutePath(bundlePath);
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(string url) :269
void VideoLoader__Load_fn(uString* url, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load(url);
}

// private static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.IO.BundleFile file) :282
void VideoLoader__Load1_fn(::g::Uno::IO::BundleFile* file, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load1(file);
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.UX.FileSource fileSource) :274
void VideoLoader__Load2_fn(::g::Uno::UX::FileSource* fileSource, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load2(fileSource);
}

// public generated VideoLoader New() :211
void VideoLoader__New1_fn(VideoLoader** __retval)
{
    *__retval = VideoLoader::New1();
}

// public generated VideoLoader() [instance] :211
void VideoLoader::ctor_()
{
}

// private static string GetBundleAbsolutePath(string bundlePath) [static] :288
uString* VideoLoader::GetBundleAbsolutePath(uString* bundlePath)
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::NSString* bundlePath) -> ::NSString*
        {
            return [[[NSBundle mainBundle] URLForResource:bundlePath withExtension:@""] absoluteString];
        } (::uObjC::NativeString(bundlePath)));
        
    }
    
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(string url) [static] :269
::g::Uno::Threading::Future1* VideoLoader::Load(uString* url)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoLoader", "Load(string)");
    return VideoLoader__VideoPromise::New5(url);
}

// private static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.IO.BundleFile file) [static] :282
::g::Uno::Threading::Future1* VideoLoader::Load1(::g::Uno::IO::BundleFile* file)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoLoader", "Load(Uno.IO.BundleFile)");
    return VideoLoader::Load(VideoLoader::GetBundleAbsolutePath(::g::Uno::String::op_Addition2(::STRINGS[0/*"data/"*/], uPtr(file)->BundlePath())));
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.UX.FileSource fileSource) [static] :274
::g::Uno::Threading::Future1* VideoLoader::Load2(::g::Uno::UX::FileSource* fileSource)
{
    uStackFrame __("Fuse.Controls.VideoImpl.iOS.VideoLoader", "Load(Uno.UX.FileSource)");

    if (uIs(fileSource, ::TYPES[0/*Uno.UX.BundleFileSource*/]))
        return VideoLoader::Load1(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(fileSource, ::TYPES[0/*Uno.UX.BundleFileSource*/]))->BundleFile);
    else
        return VideoLoader::Load(::g::Uno::String::op_Addition2(::STRINGS[1/*"file://"*/], ::g::Fuse::Controls::VideoImpl::VideoDiskCache::GetFilePath(fileSource)));
}

// public generated VideoLoader New() [static] :211
VideoLoader* VideoLoader::New1()
{
    VideoLoader* obj1 = (VideoLoader*)uNew(VideoLoader_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::VideoImpl::iOS
