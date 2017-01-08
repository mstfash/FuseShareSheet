// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.42.4/drawing/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.ImageFill.DrawParams.h>
#include <Fuse.ILoading.h>
#include <Fuse.Internal.IImageContainerOwner.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Drawing{struct ImageFill;}}}
namespace g{namespace Fuse{namespace Internal{struct ImageContainer;}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct MemoryPolicy;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class ImageFill :29
// {
struct ImageFill_type : ::g::Fuse::Drawing::Brush_type
{
    ::g::Fuse::ILoading interface0;
    ::g::Fuse::Internal::IImageContainerOwner interface1;
};

ImageFill_type* ImageFill_typeof();
void ImageFill__ctor_3_fn(ImageFill* __this);
void ImageFill__get_Color_fn(ImageFill* __this, ::g::Uno::Float4* __retval);
void ImageFill__set_Color_fn(ImageFill* __this, ::g::Uno::Float4* value);
void ImageFill__get_ContentAlignment_fn(ImageFill* __this, int* __retval);
void ImageFill__set_ContentAlignment_fn(ImageFill* __this, int* value);
void ImageFill__get_Density_fn(ImageFill* __this, float* __retval);
void ImageFill__set_Density_fn(ImageFill* __this, float* value);
void ImageFill__get_File_fn(ImageFill* __this, ::g::Uno::UX::FileSource** __retval);
void ImageFill__set_File_fn(ImageFill* __this, ::g::Uno::UX::FileSource* value);
void ImageFill__FuseILoadingget_IsLoading_fn(ImageFill* __this, bool* __retval);
void ImageFill__FuseInternalIImageContainerOwnerOnParamChanged_fn(ImageFill* __this);
void ImageFill__FuseInternalIImageContainerOwnerOnSizingChanged_fn(ImageFill* __this);
void ImageFill__FuseInternalIImageContainerOwnerOnSourceChanged_fn(ImageFill* __this);
void ImageFill__GetDrawParams_fn(ImageFill* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* size, ImageFill__DrawParams* __retval);
void ImageFill__GetSize_fn(ImageFill* __this, ::g::Uno::Float2* __retval);
void ImageFill__get_MemoryPolicy_fn(ImageFill* __this, ::g::Fuse::Resources::MemoryPolicy** __retval);
void ImageFill__set_MemoryPolicy_fn(ImageFill* __this, ::g::Fuse::Resources::MemoryPolicy* value);
void ImageFill__New2_fn(ImageFill** __retval);
void ImageFill__OnPinned_fn(ImageFill* __this);
void ImageFill__OnPrepare_fn(ImageFill* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize);
void ImageFill__OnUnpinned_fn(ImageFill* __this);
void ImageFill__get_ResampleMode_fn(ImageFill* __this, int* __retval);
void ImageFill__set_ResampleMode_fn(ImageFill* __this, int* value);
void ImageFill__get_Source_fn(ImageFill* __this, ::g::Fuse::Resources::ImageSource** __retval);
void ImageFill__set_Source_fn(ImageFill* __this, ::g::Fuse::Resources::ImageSource* value);
void ImageFill__get_StretchDirection_fn(ImageFill* __this, int* __retval);
void ImageFill__set_StretchDirection_fn(ImageFill* __this, int* value);
void ImageFill__get_StretchMode_fn(ImageFill* __this, int* __retval);
void ImageFill__set_StretchMode_fn(ImageFill* __this, int* value);
void ImageFill__get_Url_fn(ImageFill* __this, uString** __retval);
void ImageFill__set_Url_fn(ImageFill* __this, uString* value);
void ImageFill__get_WrapMode_fn(ImageFill* __this, int* __retval);
void ImageFill__set_WrapMode_fn(ImageFill* __this, int* value);

struct ImageFill : ::g::Fuse::Drawing::DynamicBrush
{
    ::g::Uno::Float4 _color;
    static ::g::Uno::UX::Selector _colorName_;
    static ::g::Uno::UX::Selector& _colorName() { return ImageFill_typeof()->Init(), _colorName_; }
    uStrong< ::g::Fuse::Internal::ImageContainer*> _container;
    ImageFill__DrawParams _drawParams;
    static ::g::Uno::UX::Selector _paramName_;
    static ::g::Uno::UX::Selector& _paramName() { return ImageFill_typeof()->Init(), _paramName_; }
    static ::g::Uno::UX::Selector _sizingName_;
    static ::g::Uno::UX::Selector& _sizingName() { return ImageFill_typeof()->Init(), _sizingName_; }
    static ::g::Uno::UX::Selector _sourceName_;
    static ::g::Uno::UX::Selector& _sourceName() { return ImageFill_typeof()->Init(), _sourceName_; }
    uStrong< ::g::Uno::Graphics::Framebuffer*> _tempTexture;
    int _wrapMode;
    static ::g::Uno::UX::Selector _wrapModeName_;
    static ::g::Uno::UX::Selector& _wrapModeName() { return ImageFill_typeof()->Init(), _wrapModeName_; }

    void ctor_3();
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    int ContentAlignment();
    void ContentAlignment(int value);
    float Density();
    void Density(float value);
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    ImageFill__DrawParams GetDrawParams(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 size);
    ::g::Uno::Float2 GetSize();
    ::g::Fuse::Resources::MemoryPolicy* MemoryPolicy();
    void MemoryPolicy(::g::Fuse::Resources::MemoryPolicy* value);
    int ResampleMode();
    void ResampleMode(int value);
    ::g::Fuse::Resources::ImageSource* Source();
    void Source(::g::Fuse::Resources::ImageSource* value);
    int StretchDirection();
    void StretchDirection(int value);
    int StretchMode();
    void StretchMode(int value);
    uString* Url();
    void Url(uString* value);
    int WrapMode();
    void WrapMode(int value);
    static ImageFill* New2();
};
// }

}}} // ::g::Fuse::Drawing
