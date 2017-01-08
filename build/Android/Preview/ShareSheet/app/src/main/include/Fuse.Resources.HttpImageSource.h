// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.42.4/resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.ImageSource.h>
namespace g{namespace Fuse{namespace Resources{struct HttpImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct MemoryPolicy;}}}
namespace g{namespace Fuse{namespace Resources{struct ProxyImageSource;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Resources{

// public sealed class HttpImageSource :305
// {
::g::Fuse::Resources::ImageSource_type* HttpImageSource_typeof();
void HttpImageSource__ctor_2_fn(HttpImageSource* __this);
void HttpImageSource__ctor_3_fn(HttpImageSource* __this, uString* url);
void HttpImageSource__set_DefaultPolicy_fn(HttpImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value);
void HttpImageSource__get_Density_fn(HttpImageSource* __this, float* __retval);
void HttpImageSource__set_Density_fn(HttpImageSource* __this, float* value);
void HttpImageSource__GetTexture_fn(HttpImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval);
void HttpImageSource__New2_fn(HttpImageSource** __retval);
void HttpImageSource__New3_fn(uString* url, HttpImageSource** __retval);
void HttpImageSource__OnPinChanged_fn(HttpImageSource* __this);
void HttpImageSource__get_PixelSize_fn(HttpImageSource* __this, ::g::Uno::Int2* __retval);
void HttpImageSource__get_Policy_fn(HttpImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval);
void HttpImageSource__set_Policy_fn(HttpImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value);
void HttpImageSource__Reload_fn(HttpImageSource* __this);
void HttpImageSource__get_Size_fn(HttpImageSource* __this, ::g::Uno::Float2* __retval);
void HttpImageSource__get_SizeDensity_fn(HttpImageSource* __this, float* __retval);
void HttpImageSource__get_State_fn(HttpImageSource* __this, int* __retval);
void HttpImageSource__get_Url_fn(HttpImageSource* __this, uString** __retval);
void HttpImageSource__set_Url_fn(HttpImageSource* __this, uString* value);

struct HttpImageSource : ::g::Fuse::Resources::ImageSource
{
    uStrong< ::g::Fuse::Resources::ProxyImageSource*> _proxy;

    void ctor_2();
    void ctor_3(uString* url);
    void DefaultPolicy(::g::Fuse::Resources::MemoryPolicy* value);
    float Density();
    void Density(float value);
    ::g::Fuse::Resources::MemoryPolicy* Policy();
    void Policy(::g::Fuse::Resources::MemoryPolicy* value);
    uString* Url();
    void Url(uString* value);
    static HttpImageSource* New2();
    static HttpImageSource* New3(uString* url);
};
// }

}}} // ::g::Fuse::Resources
