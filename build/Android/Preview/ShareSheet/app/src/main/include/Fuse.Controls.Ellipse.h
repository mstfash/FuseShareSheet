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
namespace g{namespace Fuse{namespace Controls{struct Ellipse;}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometryRenderer;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class Ellipse :322
// {
::g::Fuse::Controls::PathShape_type* Ellipse_typeof();
void Ellipse__ctor_8_fn(Ellipse* __this);
void Ellipse__CreateNativeView_fn(Ellipse* __this, uObject** __retval);
void Ellipse__New4_fn(Ellipse** __retval);
void Ellipse__UpdatePath_fn(Ellipse* __this, ::g::Fuse::Drawing::PathGeometryRenderer* renderer);

struct Ellipse : ::g::Fuse::Controls::PathShape
{
    ::g::Uno::Float2 _cachedCenter;
    ::g::Uno::Float2 _cachedRadius;

    void ctor_8();
    static Ellipse* New4();
};
// }

}}} // ::g::Fuse::Controls
