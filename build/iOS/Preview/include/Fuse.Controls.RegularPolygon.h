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
namespace g{namespace Fuse{namespace Controls{struct RegularPolygon;}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometryRenderer;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class RegularPolygon :925
// {
::g::Fuse::Controls::PathShape_type* RegularPolygon_typeof();
void RegularPolygon__ctor_8_fn(RegularPolygon* __this);
void RegularPolygon__New4_fn(RegularPolygon** __retval);
void RegularPolygon__get_Radius_fn(RegularPolygon* __this, float* __retval);
void RegularPolygon__get_Sides_fn(RegularPolygon* __this, int* __retval);
void RegularPolygon__set_Sides_fn(RegularPolygon* __this, int* value);
void RegularPolygon__UpdatePath_fn(RegularPolygon* __this, ::g::Fuse::Drawing::PathGeometryRenderer* renderer);

struct RegularPolygon : ::g::Fuse::Controls::PathShape
{
    ::g::Uno::Float2 _cachedCenter;
    float _cachedRadius;
    int _cachedSides;
    int _sides;

    void ctor_8();
    float Radius();
    int Sides();
    void Sides(int value);
    static RegularPolygon* New4();
};
// }

}}} // ::g::Fuse::Controls
