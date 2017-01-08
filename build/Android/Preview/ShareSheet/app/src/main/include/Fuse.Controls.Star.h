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
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Star;}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometryRenderer;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class Star :1626
// {
::g::Fuse::Controls::PathShape_type* Star_typeof();
void Star__ctor_8_fn(Star* __this);
void Star__New4_fn(Star** __retval);
void Star__get_Points_fn(Star* __this, int* __retval);
void Star__set_Points_fn(Star* __this, int* value);
void Star__get_Radius_fn(Star* __this, float* __retval);
void Star__get_Ratio_fn(Star* __this, float* __retval);
void Star__set_Ratio_fn(Star* __this, float* value);
void Star__get_RotationDegrees_fn(Star* __this, float* __retval);
void Star__set_RotationDegrees_fn(Star* __this, float* value);
void Star__get_RotationRadians_fn(Star* __this, float* __retval);
void Star__get_RoundRatio_fn(Star* __this, float* __retval);
void Star__set_RoundRatio_fn(Star* __this, float* value);
void Star__get_SpokeRadius_fn(Star* __this, float* __retval);
void Star__UpdatePath_fn(Star* __this, ::g::Fuse::Drawing::PathGeometryRenderer* renderer);

struct Star : ::g::Fuse::Controls::PathShape
{
    float _cachedDegrees;
    int _cachedPoints;
    float _cachedRadius;
    float _cachedRoundRatio;
    float _cachedSpokeRadius;
    float _degrees;
    int _points;
    float _ratio;
    float _roundRatio;

    void ctor_8();
    int Points();
    void Points(int value);
    float Radius();
    float Ratio();
    void Ratio(float value);
    float RotationDegrees();
    void RotationDegrees(float value);
    float RotationRadians();
    float RoundRatio();
    void RoundRatio(float value);
    float SpokeRadius();
    static Star* New4();
};
// }

}}} // ::g::Fuse::Controls
