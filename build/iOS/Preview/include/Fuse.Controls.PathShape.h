// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/shapes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct PathShape;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometryRenderer;}}}
namespace g{namespace Fuse{namespace Drawing{struct RendererContext;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public class PathShape :659
// {
struct PathShape_type : ::g::Fuse::Controls::Shape_type
{
    void(*fp_AlignMatrix)(::g::Fuse::Controls::PathShape*, ::g::Uno::Float4x4*, ::g::Uno::Float4x4*);
    void(*fp_UpdatePath)(::g::Fuse::Controls::PathShape*, ::g::Fuse::Drawing::PathGeometryRenderer*);
};

PathShape_type* PathShape_typeof();
void PathShape__ctor_7_fn(PathShape* __this);
void PathShape__AlignMatrix_fn(PathShape* __this, ::g::Uno::Float4x4* b, ::g::Uno::Float4x4* __retval);
void PathShape__CalcRenderBounds_fn(PathShape* __this, ::g::Fuse::VisualBounds** __retval);
void PathShape__DrawFill_fn(PathShape* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill);
void PathShape__DrawStroke_fn(PathShape* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke);
void PathShape__GetHitPart_fn(PathShape* __this, ::g::Uno::Float2* localCoords, uObject** __retval);
void PathShape__Invalidated_fn(PathShape* __this);
void PathShape__New3_fn(PathShape** __retval);
void PathShape__OnHitTestLocalVisual_fn(PathShape* __this, ::g::Fuse::HitTestContext* htc);
void PathShape__OnRooted_fn(PathShape* __this);
void PathShape__PrepareDraw_fn(PathShape* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize);
void PathShape__get_Renderer_fn(PathShape* __this, ::g::Fuse::Drawing::PathGeometryRenderer** __retval);
void PathShape__SoftDispose_fn(PathShape* __this);
void PathShape__UpdatePath_fn(PathShape* __this, ::g::Fuse::Drawing::PathGeometryRenderer* renderer);

struct PathShape : ::g::Fuse::Controls::Shape
{
    uStrong< ::g::Fuse::Drawing::RendererContext*> _context;
    uStrong< ::g::Fuse::Drawing::PathGeometryRenderer*> _renderer;

    void ctor_7();
    ::g::Uno::Float4x4 AlignMatrix(::g::Uno::Float4x4 b);
    uObject* GetHitPart(::g::Uno::Float2 localCoords);
    void Invalidated();
    ::g::Fuse::Drawing::PathGeometryRenderer* Renderer();
    void UpdatePath(::g::Fuse::Drawing::PathGeometryRenderer* renderer) { (((PathShape_type*)__type)->fp_UpdatePath)(this, renderer); }
    static ::g::Uno::Float4x4 AlignMatrix(PathShape* __this, ::g::Uno::Float4x4 b);
    static PathShape* New3();
    static void UpdatePath(PathShape* __this, ::g::Fuse::Drawing::PathGeometryRenderer* renderer) { PathShape__UpdatePath_fn(__this, renderer); }
};

}}} // ::g::Fuse::Controls

#include <Uno.Float2.h>
#include <Uno.Float4x4.h>

namespace g{
namespace Fuse{
namespace Controls{

inline ::g::Uno::Float4x4 PathShape::AlignMatrix(::g::Uno::Float4x4 b) { ::g::Uno::Float4x4 __retval; return (((PathShape_type*)__type)->fp_AlignMatrix)(this, &b, &__retval), __retval; }
inline ::g::Uno::Float4x4 PathShape::AlignMatrix(PathShape* __this, ::g::Uno::Float4x4 b) { ::g::Uno::Float4x4 __retval; return PathShape__AlignMatrix_fn(__this, &b, &__retval), __retval; }
// }

}}} // ::g::Fuse::Controls
