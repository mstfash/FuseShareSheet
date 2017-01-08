// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4x4.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Elements{struct Viewport;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct FrustumViewport;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Elements{

// public sealed class Viewport :867
// {
struct Viewport_type : ::g::Fuse::Elements::Element_type
{
    ::g::Fuse::IViewport interface13;
    ::g::Fuse::IRenderViewport interface14;
    ::g::Fuse::ICommonViewport interface15;
};

Viewport_type* Viewport_typeof();
void Viewport__ctor_4_fn(Viewport* __this);
void Viewport__ArrangePaddingBox_fn(Viewport* __this, ::g::Fuse::LayoutParams* lp);
void Viewport__CalcAreChildrenFlat_fn(Viewport* __this, bool* __retval);
void Viewport__CalcRenderBounds_fn(Viewport* __this, ::g::Fuse::VisualBounds** __retval);
void Viewport__get_CullFace_fn(Viewport* __this, int* __retval);
void Viewport__set_CullFace_fn(Viewport* __this, int* value);
void Viewport__DrawWithChildren_fn(Viewport* __this, ::g::Fuse::DrawContext* dc);
void Viewport__get_Frustum_fn(Viewport* __this, uObject** __retval);
void Viewport__set_Frustum_fn(Viewport* __this, uObject* value);
void Viewport__get_FrustumViewport_fn(Viewport* __this, ::g::Fuse::FrustumViewport** __retval);
void Viewport__FuseIRenderViewportget_ProjectionTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval);
void Viewport__FuseIRenderViewportget_ViewOrigin_fn(Viewport* __this, ::g::Uno::Float3* __retval);
void Viewport__FuseIRenderViewportget_ViewProjectionTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval);
void Viewport__FuseIRenderViewportget_ViewRange_fn(Viewport* __this, ::g::Uno::Float2* __retval);
void Viewport__get_HasCullFace_fn(Viewport* __this, bool* __retval);
void Viewport__get_HitTestChildrenBounds_fn(Viewport* __this, ::g::Fuse::VisualBounds** __retval);
void Viewport__get_HitTestTransform_fn(Viewport* __this, int* __retval);
void Viewport__init_DrawCalls_fn(Viewport* __this);
void Viewport__InvalidateFrustum_fn(Viewport* __this);
void Viewport__get_IsDisabled_fn(Viewport* __this, bool* __retval);
void Viewport__get_IsRoot_fn(Viewport* __this, bool* __retval);
void Viewport__get_Mode_fn(Viewport* __this, int* __retval);
void Viewport__set_Mode_fn(Viewport* __this, int* value);
void Viewport__ModifyBounds_fn(Viewport* __this, ::g::Fuse::VisualBounds* vb, ::g::Fuse::VisualBounds** __retval);
void Viewport__New2_fn(Viewport** __retval);
void Viewport__OnPlaced_fn(Viewport* __this, uObject* s, uObject* a);
void Viewport__OnRooted_fn(Viewport* __this);
void Viewport__OnUnrooted_fn(Viewport* __this);
void Viewport__get_ParentWorldTransformInternal_fn(Viewport* __this, ::g::Fuse::FastMatrix** __retval);
void Viewport__get_Perspective_fn(Viewport* __this, float* __retval);
void Viewport__set_Perspective_fn(Viewport* __this, float* value);
void Viewport__get_PerspectiveRelativeTo_fn(Viewport* __this, int* __retval);
void Viewport__set_PerspectiveRelativeTo_fn(Viewport* __this, int* value);
void Viewport__get_PixelSize_fn(Viewport* __this, ::g::Uno::Float2* __retval);
void Viewport__get_PixelsPerPoint_fn(Viewport* __this, float* __retval);
void Viewport__PointToWorldRay_fn(Viewport* __this, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval);
void Viewport__get_RootVisual_fn(Viewport* __this, ::g::Fuse::Visual** __retval);
void Viewport__set_RootVisual_fn(Viewport* __this, ::g::Fuse::Visual* value);
void Viewport__get_Size_fn(Viewport* __this, ::g::Uno::Float2* __retval);
void Viewport__UpdateFrustum_fn(Viewport* __this);
void Viewport__UpdatePerspective_fn(Viewport* __this);
void Viewport__get_ViewTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval);
void Viewport__WorldToLocalRay_fn(Viewport* __this, uObject* world, ::g::Uno::Geometry::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Uno::Geometry::Ray* __retval);

struct Viewport : ::g::Fuse::Elements::Element
{
    int _cullFace;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_bdff5d40;
    uStrong<uObject*> _frustum;
    bool _frustumDirty;
    uStrong< ::g::Fuse::FrustumViewport*> _frustumViewport;
    bool _hasCullFace;
    int _mode;
    float _perspective;
    int _perspectiveRelativeTo;
    bool _usePerspective;
    ::g::Uno::Float4x4 DrawWithChildren_LocalTransform_bdff5d40_4_9_2;
    ::g::Uno::Float4x4 DrawWithChildren_LocalTransform_bdff5d40_4_9_3;
    ::g::Uno::Float4x4 DrawWithChildren_LocalTransform_bdff5d40_4_9_4;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> DrawWithChildren_VertexData_bdff5d40_7_2_1;

    void ctor_4();
    int CullFace();
    void CullFace(int value);
    uObject* Frustum();
    void Frustum(uObject* value);
    ::g::Fuse::FrustumViewport* FrustumViewport();
    bool HasCullFace();
    void init_DrawCalls();
    void InvalidateFrustum();
    bool IsDisabled();
    bool IsRoot();
    int Mode();
    void Mode(int value);
    ::g::Fuse::VisualBounds* ModifyBounds(::g::Fuse::VisualBounds* vb);
    void OnPlaced(uObject* s, uObject* a);
    float Perspective();
    void Perspective(float value);
    int PerspectiveRelativeTo();
    void PerspectiveRelativeTo(int value);
    ::g::Uno::Float2 PixelSize();
    float PixelsPerPoint();
    ::g::Uno::Geometry::Ray PointToWorldRay(::g::Uno::Float2 pointPos);
    ::g::Fuse::Visual* RootVisual();
    void RootVisual(::g::Fuse::Visual* value);
    ::g::Uno::Float2 Size();
    void UpdateFrustum();
    void UpdatePerspective();
    ::g::Uno::Float4x4 ViewTransform();
    ::g::Uno::Geometry::Ray WorldToLocalRay(uObject* world, ::g::Uno::Geometry::Ray worldRay, ::g::Fuse::Visual* where);
    static Viewport* New2();
};
// }

}}} // ::g::Fuse::Elements
