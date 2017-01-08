// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/shapes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.PathShape.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Path;}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry;}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometryRenderer;}}}
namespace g{namespace Fuse{namespace Internal{struct SizingContainer;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class Path :411
// {
::g::Fuse::Controls::PathShape_type* Path_typeof();
void Path__ctor_8_fn(Path* __this);
void Path__AlignMatrix_fn(Path* __this, ::g::Uno::Float4x4* b, ::g::Uno::Float4x4* __retval);
void Path__ArrangePaddingBox_fn(Path* __this, ::g::Fuse::LayoutParams* lp);
void Path__get_ContentAlignment_fn(Path* __this, int* __retval);
void Path__set_ContentAlignment_fn(Path* __this, int* value);
void Path__get_Data_fn(Path* __this, uString** __retval);
void Path__set_Data_fn(Path* __this, uString* value);
void Path__get_FillRule_fn(Path* __this, int* __retval);
void Path__set_FillRule_fn(Path* __this, int* value);
void Path__get_FitMode_fn(Path* __this, int* __retval);
void Path__set_FitMode_fn(Path* __this, int* value);
void Path__get_Geometry_fn(Path* __this, ::g::Fuse::Drawing::PathGeometry** __retval);
void Path__set_Geometry_fn(Path* __this, ::g::Fuse::Drawing::PathGeometry* value);
void Path__GetContentSize_fn(Path* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void Path__GetNaturalContentSize_fn(Path* __this, ::g::Uno::Float2* __retval);
void Path__get_LocalRenderBounds_fn(Path* __this, ::g::Fuse::VisualBounds** __retval);
void Path__New4_fn(Path** __retval);
void Path__get_ScaleMode_fn(Path* __this, int* __retval);
void Path__set_ScaleMode_fn(Path* __this, int* value);
void Path__get_Sizing_fn(Path* __this, ::g::Fuse::Internal::SizingContainer** __retval);
void Path__get_StretchDirection_fn(Path* __this, int* __retval);
void Path__set_StretchDirection_fn(Path* __this, int* value);
void Path__get_StretchMode_fn(Path* __this, int* __retval);
void Path__set_StretchMode_fn(Path* __this, int* value);
void Path__UpdatePath_fn(Path* __this, ::g::Fuse::Drawing::PathGeometryRenderer* renderer);

struct Path : ::g::Fuse::Controls::PathShape
{
    int _fillRule;
    int _fitMode;
    uStrong< ::g::Fuse::Drawing::PathGeometry*> _geometry;
    ::g::Uno::Float2 _origin;
    ::g::Uno::Float2 _postScale;
    int _scaleMode;
    uStrong< ::g::Fuse::Internal::SizingContainer*> sizing;

    void ctor_8();
    int ContentAlignment();
    void ContentAlignment(int value);
    uString* Data();
    void Data(uString* value);
    int FillRule();
    void FillRule(int value);
    int FitMode();
    void FitMode(int value);
    ::g::Fuse::Drawing::PathGeometry* Geometry();
    void Geometry(::g::Fuse::Drawing::PathGeometry* value);
    ::g::Uno::Float2 GetNaturalContentSize();
    int ScaleMode();
    void ScaleMode(int value);
    ::g::Fuse::Internal::SizingContainer* Sizing();
    int StretchDirection();
    void StretchDirection(int value);
    int StretchMode();
    void StretchMode(int value);
    static Path* New4();
};
// }

}}} // ::g::Fuse::Controls
