// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IImageView.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct ImageView;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageHandle;}}}}
namespace g{namespace Fuse{namespace Resources{struct FileImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct HttpImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct MultiDensityImageSource;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Exception;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class ImageView :695
// {
struct ImageView_type : ::g::Fuse::Controls::Native::iOS::LeafView_type
{
    ::g::Fuse::Controls::Native::IImageView interface3;
};

ImageView_type* ImageView_typeof();
void ImageView__ctor_2_fn(ImageView* __this, ::g::Fuse::Visual* visual);
void ImageView__ClearImage_fn(uObject* imageViewHandle);
void ImageView__Create_fn(uObject** __retval);
void ImageView__CreateImageView_fn(uObject* container, uObject** __retval);
void ImageView__Dispose_fn(ImageView* __this);
void ImageView__GetImageHeight_fn(uObject* handle, float* __retval);
void ImageView__GetImageSize_fn(ImageView* __this, ::g::Uno::Float2* __retval);
void ImageView__GetImageWidth_fn(uObject* handle, float* __retval);
void ImageView__set_ImageHandle_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* value);
void ImageView__set_ImageSource_fn(ImageView* __this, ::g::Fuse::Resources::ImageSource* value);
void ImageView__New1_fn(::g::Fuse::Visual* visual, ImageView** __retval);
void ImageView__OnImageLoaded_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* handle);
void ImageView__OnImageLoadFailed_fn(ImageView* __this, ::g::Uno::Exception* e);
void ImageView__SetImage_fn(uObject* imageViewHandle, uObject* uiImageHandle);
void ImageView__set_TintColor_fn(ImageView* __this, ::g::Uno::Float4* value);
void ImageView__TintImage_fn(uObject* handle, float* r, float* g, float* b, float* a, uObject** __retval);
void ImageView__UpdateImage_fn(ImageView* __this);
void ImageView__UpdateImage1_fn(ImageView* __this, ::g::Fuse::Resources::FileImageSource* fileImageSource);
void ImageView__UpdateImage2_fn(ImageView* __this, ::g::Fuse::Resources::HttpImageSource* http);
void ImageView__UpdateImage3_fn(ImageView* __this, ::g::Fuse::Resources::MultiDensityImageSource* multi);
void ImageView__UpdateImageTransform_fn(ImageView* __this, float* density, ::g::Uno::Float2* origin, ::g::Uno::Float2* scale, ::g::Uno::Float2* drawSize);

struct ImageView : ::g::Fuse::Controls::Native::iOS::LeafView
{
    uStrong<uObject*> _imageHandle;
    ::g::Uno::Float4 _tintColor;
    uStrong<uObject*> _uiImageHandle;
    uStrong<uObject*> _uiImageView;
    uStrong< ::g::Fuse::Visual*> _visual;

    void ctor_2(::g::Fuse::Visual* visual);
    ::g::Uno::Float2 GetImageSize();
    void ImageHandle(::g::Fuse::Controls::Native::ImageHandle* value);
    void ImageSource(::g::Fuse::Resources::ImageSource* value);
    void OnImageLoaded(::g::Fuse::Controls::Native::ImageHandle* handle);
    void OnImageLoadFailed(::g::Uno::Exception* e);
    void TintColor(::g::Uno::Float4 value);
    void UpdateImage();
    void UpdateImage1(::g::Fuse::Resources::FileImageSource* fileImageSource);
    void UpdateImage2(::g::Fuse::Resources::HttpImageSource* http);
    void UpdateImage3(::g::Fuse::Resources::MultiDensityImageSource* multi);
    void UpdateImageTransform(float density, ::g::Uno::Float2 origin, ::g::Uno::Float2 scale, ::g::Uno::Float2 drawSize);
    static void ClearImage(uObject* imageViewHandle);
    static uObject* Create();
    static uObject* CreateImageView(uObject* container);
    static float GetImageHeight(uObject* handle);
    static float GetImageWidth(uObject* handle);
    static ImageView* New1(::g::Fuse::Visual* visual);
    static void SetImage(uObject* imageViewHandle, uObject* uiImageHandle);
    static uObject* TintImage(uObject* handle, float r, float g, float b, float a);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
