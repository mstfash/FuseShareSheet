// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Video/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.VideoImpl.iOS.VideoPlayerImpl.h>
#include <iOS/VideoImpl.h>
#include <OpenGL.GLTextureHandle.h>
#include <Uno.Action.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{
namespace iOS{

// internal static extern class VideoPlayerImpl :117
// {
static void VideoPlayerImpl_build(uType* type)
{
}

uClassType* VideoPlayerImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.VideoImpl.iOS.VideoPlayerImpl", options);
    type->fp_build_ = VideoPlayerImpl_build;
    return type;
}

// public static Uno.IntPtr AllocateVideoState() :119
void VideoPlayerImpl__AllocateVideoState_fn(void** __retval)
{
    *__retval = VideoPlayerImpl::AllocateVideoState();
}

// public static void FreeVideoState(Uno.IntPtr videoState) :124
void VideoPlayerImpl__FreeVideoState_fn(void** videoState)
{
    VideoPlayerImpl::FreeVideoState(*videoState);
}

// public static double GetDuration(Uno.IntPtr videoState) :139
void VideoPlayerImpl__GetDuration_fn(void** videoState, double* __retval)
{
    *__retval = VideoPlayerImpl::GetDuration(*videoState);
}

// public static int GetHeight(Uno.IntPtr videoState) :169
void VideoPlayerImpl__GetHeight_fn(void** videoState, int* __retval)
{
    *__retval = VideoPlayerImpl::GetHeight(*videoState);
}

// public static double GetPosition(Uno.IntPtr videoState) :144
void VideoPlayerImpl__GetPosition_fn(void** videoState, double* __retval)
{
    *__retval = VideoPlayerImpl::GetPosition(*videoState);
}

// public static int GetRotation(Uno.IntPtr videoState) :134
void VideoPlayerImpl__GetRotation_fn(void** videoState, int* __retval)
{
    *__retval = VideoPlayerImpl::GetRotation(*videoState);
}

// public static float GetVolume(Uno.IntPtr videoState) :154
void VideoPlayerImpl__GetVolume_fn(void** videoState, float* __retval)
{
    *__retval = VideoPlayerImpl::GetVolume(*videoState);
}

// public static int GetWidth(Uno.IntPtr videoState) :164
void VideoPlayerImpl__GetWidth_fn(void** videoState, int* __retval)
{
    *__retval = VideoPlayerImpl::GetWidth(*videoState);
}

// public static void Initialize(Uno.IntPtr videoState, string uri, Uno.Action loadedCallback, Uno.Action errorCallback) :129
void VideoPlayerImpl__Initialize_fn(void** videoState, uString* uri, uDelegate* loadedCallback, uDelegate* errorCallback)
{
    VideoPlayerImpl::Initialize(*videoState, uri, loadedCallback, errorCallback);
}

// public static void Pause(Uno.IntPtr videoState) :179
void VideoPlayerImpl__Pause_fn(void** videoState)
{
    VideoPlayerImpl::Pause(*videoState);
}

// public static void Play(Uno.IntPtr videoState) :174
void VideoPlayerImpl__Play_fn(void** videoState)
{
    VideoPlayerImpl::Play(*videoState);
}

// public static void SetErrorHandler(Uno.IntPtr videoState, Uno.Action errorHandler) :189
void VideoPlayerImpl__SetErrorHandler_fn(void** videoState, uDelegate* errorHandler)
{
    VideoPlayerImpl::SetErrorHandler(*videoState, errorHandler);
}

// public static void SetPosition(Uno.IntPtr videoState, double position) :149
void VideoPlayerImpl__SetPosition_fn(void** videoState, double* position)
{
    VideoPlayerImpl::SetPosition(*videoState, *position);
}

// public static void SetVolume(Uno.IntPtr videoState, float volume) :159
void VideoPlayerImpl__SetVolume_fn(void** videoState, float* volume)
{
    VideoPlayerImpl::SetVolume(*videoState, *volume);
}

// public static OpenGL.GLTextureHandle UpdateTexture(Uno.IntPtr videoState) :184
void VideoPlayerImpl__UpdateTexture_fn(void** videoState, uint32_t* __retval)
{
    *__retval = VideoPlayerImpl::UpdateTexture(*videoState);
}

// public static Uno.IntPtr AllocateVideoState() [static] :119
void* VideoPlayerImpl::AllocateVideoState()
{
    return ::FuseVideoImpl::allocateVideoState();
}

// public static void FreeVideoState(Uno.IntPtr videoState) [static] :124
void VideoPlayerImpl::FreeVideoState(void* videoState)
{
    ::FuseVideoImpl::freeVideoState(videoState);
}

// public static double GetDuration(Uno.IntPtr videoState) [static] :139
double VideoPlayerImpl::GetDuration(void* videoState)
{
    return ::FuseVideoImpl::getDuration(videoState);
}

// public static int GetHeight(Uno.IntPtr videoState) [static] :169
int VideoPlayerImpl::GetHeight(void* videoState)
{
    return ::FuseVideoImpl::getHeight(videoState);
}

// public static double GetPosition(Uno.IntPtr videoState) [static] :144
double VideoPlayerImpl::GetPosition(void* videoState)
{
    return ::FuseVideoImpl::getPosition(videoState);
}

// public static int GetRotation(Uno.IntPtr videoState) [static] :134
int VideoPlayerImpl::GetRotation(void* videoState)
{
    return ::FuseVideoImpl::getRotation(videoState);
}

// public static float GetVolume(Uno.IntPtr videoState) [static] :154
float VideoPlayerImpl::GetVolume(void* videoState)
{
    return ::FuseVideoImpl::getVolume(videoState);
}

// public static int GetWidth(Uno.IntPtr videoState) [static] :164
int VideoPlayerImpl::GetWidth(void* videoState)
{
    return ::FuseVideoImpl::getWidth(videoState);
}

// public static void Initialize(Uno.IntPtr videoState, string uri, Uno.Action loadedCallback, Uno.Action errorCallback) [static] :129
void VideoPlayerImpl::Initialize(void* videoState, uString* uri, uDelegate* loadedCallback, uDelegate* errorCallback)
{
    ::FuseVideoImpl::initialize(videoState, uObjC::NativeString(uri), loadedCallback, errorCallback);
}

// public static void Pause(Uno.IntPtr videoState) [static] :179
void VideoPlayerImpl::Pause(void* videoState)
{
    ::FuseVideoImpl::pause(videoState);
}

// public static void Play(Uno.IntPtr videoState) [static] :174
void VideoPlayerImpl::Play(void* videoState)
{
    ::FuseVideoImpl::play(videoState);
}

// public static void SetErrorHandler(Uno.IntPtr videoState, Uno.Action errorHandler) [static] :189
void VideoPlayerImpl::SetErrorHandler(void* videoState, uDelegate* errorHandler)
{
    ::FuseVideoImpl::setErrorHandler(videoState, errorHandler);
}

// public static void SetPosition(Uno.IntPtr videoState, double position) [static] :149
void VideoPlayerImpl::SetPosition(void* videoState, double position)
{
    return ::FuseVideoImpl::setPosition(videoState, position);
}

// public static void SetVolume(Uno.IntPtr videoState, float volume) [static] :159
void VideoPlayerImpl::SetVolume(void* videoState, float volume)
{
    ::FuseVideoImpl::setVolume(videoState, volume);
}

// public static OpenGL.GLTextureHandle UpdateTexture(Uno.IntPtr videoState) [static] :184
uint32_t VideoPlayerImpl::UpdateTexture(void* videoState)
{
    return ::FuseVideoImpl::updateTexture(videoState);
}
// }

}}}}} // ::g::Fuse::Controls::VideoImpl::iOS
