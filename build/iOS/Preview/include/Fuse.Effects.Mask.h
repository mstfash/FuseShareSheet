// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Effects/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Effects.BasicEffect.h>
#include <Fuse.Internal.IImageContainerOwner.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4x4.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Effects{struct Mask;}}}
namespace g{namespace Fuse{namespace Internal{struct ImageContainer;}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Effects{

// public sealed class Mask :779
// {
struct Mask_type : ::g::Fuse::Effects::BasicEffect_type
{
    ::g::Fuse::Internal::IImageContainerOwner interface4;
};

Mask_type* Mask_typeof();
void Mask__ctor_4_fn(Mask* __this);
void Mask__get_File_fn(Mask* __this, ::g::Uno::UX::FileSource** __retval);
void Mask__set_File_fn(Mask* __this, ::g::Uno::UX::FileSource* value);
void Mask__FuseInternalIImageContainerOwnerOnParamChanged_fn(Mask* __this);
void Mask__FuseInternalIImageContainerOwnerOnSizingChanged_fn(Mask* __this);
void Mask__FuseInternalIImageContainerOwnerOnSourceChanged_fn(Mask* __this);
void Mask__init_DrawCalls_fn(Mask* __this);
void Mask__get_Mode_fn(Mask* __this, int* __retval);
void Mask__set_Mode_fn(Mask* __this, int* value);
void Mask__ModifyRenderBounds_fn(Mask* __this, ::g::Fuse::VisualBounds* inBounds, ::g::Fuse::VisualBounds** __retval);
void Mask__New2_fn(Mask** __retval);
void Mask__OnRender_fn(Mask* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect);
void Mask__get_Source_fn(Mask* __this, ::g::Fuse::Resources::ImageSource** __retval);
void Mask__set_Source_fn(Mask* __this, ::g::Fuse::Resources::ImageSource* value);

struct Mask : ::g::Fuse::Effects::BasicEffect
{
    uStrong< ::g::Fuse::Internal::ImageContainer*> _container;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_97b14dfa;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_e56a2f35;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_f63e1f3f;
    int _mode;
    ::g::Uno::Float4x4 OnRender_LocalTransform_e56a2f35_4_9_2;
    ::g::Uno::Float4x4 OnRender_LocalTransform_e56a2f35_4_9_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_97b14dfa_7_2_1;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_e56a2f35_7_2_1;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_f63e1f3f_7_2_1;

    void ctor_4();
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    void init_DrawCalls();
    int Mode();
    void Mode(int value);
    ::g::Fuse::Resources::ImageSource* Source();
    void Source(::g::Fuse::Resources::ImageSource* value);
    static Mask* New2();
};
// }

}}} // ::g::Fuse::Effects
