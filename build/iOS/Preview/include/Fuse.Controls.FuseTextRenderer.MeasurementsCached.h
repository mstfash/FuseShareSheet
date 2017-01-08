// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fusetextrenderer/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.FuseTextRenderer.CacheState.h>
#include <Fuse.Controls.FuseTextRenderer.TextControlData.h>
#include <Fuse.Controls.FuseTextRenderer.Tolerances.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct LogicalRunsCached;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct MeasurementsCached;}}}}
namespace g{namespace Fuse{namespace Text{struct PositionedRun;}}}
namespace g{namespace Fuse{namespace Text{struct Renderer;}}}
namespace g{namespace Fuse{namespace Text{struct ShapedRun;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FuseTextRenderer{

// internal sealed class MeasurementsCached :229
// {
::g::Fuse::Controls::FuseTextRenderer::CacheState_type* MeasurementsCached_typeof();
void MeasurementsCached__ctor_1_fn(MeasurementsCached* __this, ::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances* tolerances, ::g::Uno::Float2* measurements);
void MeasurementsCached__GetMeasurements_fn(MeasurementsCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Float2* measurements, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval);
void MeasurementsCached__GetRenderer1_fn(MeasurementsCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval);
void MeasurementsCached__New1_fn(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances* tolerances, ::g::Uno::Float2* measurements, MeasurementsCached** __retval);
void MeasurementsCached__TryGetMeasurements_fn(MeasurementsCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Float2* measurements, bool* __retval);

struct MeasurementsCached : ::g::Fuse::Controls::FuseTextRenderer::CacheState
{
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData _data;
    ::g::Uno::Float2 _measurements;
    uStrong< ::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached*> _previousState;
    ::g::Fuse::Controls::FuseTextRenderer::Tolerances _tolerances;
    uStrong< ::g::Uno::Collections::List*> _wrappedRuns;

    void ctor_1(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances tolerances, ::g::Uno::Float2 measurements);
    static MeasurementsCached* New1(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances tolerances, ::g::Uno::Float2 measurements);
};
// }

}}}} // ::g::Fuse::Controls::FuseTextRenderer
