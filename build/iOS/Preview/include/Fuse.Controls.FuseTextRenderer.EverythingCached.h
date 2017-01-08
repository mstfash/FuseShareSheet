// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fusetextrenderer/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.FuseTextRenderer.CacheState.h>
#include <Fuse.Controls.FuseTextRenderer.TextControlData.h>
#include <Fuse.Controls.FuseTextRenderer.Tolerances.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct EverythingCached;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct LogicalRunsCached;}}}}
namespace g{namespace Fuse{namespace Text{struct PositionedRun;}}}
namespace g{namespace Fuse{namespace Text{struct Renderer;}}}
namespace g{namespace Fuse{namespace Text{struct ShapedRun;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FuseTextRenderer{

// internal sealed class EverythingCached :359
// {
::g::Fuse::Controls::FuseTextRenderer::CacheState_type* EverythingCached_typeof();
void EverythingCached__ctor_1_fn(EverythingCached* __this, ::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances* tolerances, ::g::Uno::Float2* measurements, ::g::Fuse::Text::Renderer* renderer, ::g::Uno::Collections::List* positionedRuns);
void EverythingCached__Dispose_fn(EverythingCached* __this);
void EverythingCached__GetMeasurements_fn(EverythingCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Float2* measurements, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval);
void EverythingCached__GetRenderer1_fn(EverythingCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval);
void EverythingCached__New1_fn(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances* tolerances, ::g::Uno::Float2* measurements, ::g::Fuse::Text::Renderer* renderer, ::g::Uno::Collections::List* positionedRuns, EverythingCached** __retval);
void EverythingCached__TryGetMeasurements_fn(EverythingCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Float2* measurements, bool* __retval);
void EverythingCached__TryGetRenderer1_fn(EverythingCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns, bool* __retval);

struct EverythingCached : ::g::Fuse::Controls::FuseTextRenderer::CacheState
{
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData _data;
    ::g::Uno::Float2 _measurements;
    uStrong< ::g::Uno::Collections::List*> _positionedRuns;
    uStrong< ::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached*> _previousState;
    uStrong< ::g::Fuse::Text::Renderer*> _renderer;
    ::g::Fuse::Controls::FuseTextRenderer::Tolerances _tolerances;

    void ctor_1(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances tolerances, ::g::Uno::Float2 measurements, ::g::Fuse::Text::Renderer* renderer, ::g::Uno::Collections::List* positionedRuns);
    static EverythingCached* New1(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances tolerances, ::g::Uno::Float2 measurements, ::g::Fuse::Text::Renderer* renderer, ::g::Uno::Collections::List* positionedRuns);
};
// }

}}}} // ::g::Fuse::Controls::FuseTextRenderer
