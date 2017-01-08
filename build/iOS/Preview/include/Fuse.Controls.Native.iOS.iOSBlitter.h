// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct iOSBlitter;}}}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class iOSBlitter :1673
// {
uType* iOSBlitter_typeof();
void iOSBlitter__ctor__fn(iOSBlitter* __this);
void iOSBlitter__Blit_fn(iOSBlitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform);
void iOSBlitter__init_DrawCalls_fn(iOSBlitter* __this);
void iOSBlitter__New1_fn(iOSBlitter** __retval);

struct iOSBlitter : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_fbdb836b;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Blit_v_fbdb836b_3_4_1;
    uStrong<uArray*> Blit_verts_fbdb836b_3_3_5;
    static uSStrong<iOSBlitter*> Singleton_;
    static uSStrong<iOSBlitter*>& Singleton() { return iOSBlitter_typeof()->Init(), Singleton_; }

    void ctor_();
    void Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform);
    void init_DrawCalls();
    static iOSBlitter* New1();
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
