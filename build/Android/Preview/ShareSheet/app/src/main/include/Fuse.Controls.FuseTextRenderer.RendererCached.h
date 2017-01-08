// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fusetextrenderer/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.FuseTextRenderer.CacheState.h>
#include <Fuse.Controls.FuseTextRenderer.TextControlData.h>
#include <Fuse.Controls.FuseTextRenderer.Tolerances.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct LogicalRunsCached;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct RendererCached;}}}}
namespace g{namespace Fuse{namespace Text{struct PositionedRun;}}}
namespace g{namespace Fuse{namespace Text{struct Renderer;}}}
namespace g{namespace Fuse{namespace Text{struct ShapedRun;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FuseTextRenderer{

// internal sealed class RendererCached :287
// {
::g::Fuse::Controls::FuseTextRenderer::CacheState_type* RendererCached_typeof();
void RendererCached__ctor_1_fn(RendererCached* __this, ::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances* tolerances, ::g::Fuse::Text::Renderer* renderer, ::g::Uno::Collections::List* positionedRuns);
void RendererCached__Dispose_fn(RendererCached* __this);
void RendererCached__GetMeasurements_fn(RendererCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Float2* measurements, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval);
void RendererCached__GetRenderer1_fn(RendererCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval);
void RendererCached__New1_fn(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances* tolerances, ::g::Fuse::Text::Renderer* renderer, ::g::Uno::Collections::List* positionedRuns, RendererCached** __retval);
void RendererCached__TryGetRenderer1_fn(RendererCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns, bool* __retval);

struct RendererCached : ::g::Fuse::Controls::FuseTextRenderer::CacheState
{
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData _data;
    uStrong< ::g::Uno::Collections::List*> _positionedRuns;
    uStrong< ::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached*> _previousState;
    uStrong< ::g::Fuse::Text::Renderer*> _renderer;
    ::g::Fuse::Controls::FuseTextRenderer::Tolerances _tolerances;
    uStrong< ::g::Uno::Collections::List*> _wrappedRuns;

    void ctor_1(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances tolerances, ::g::Fuse::Text::Renderer* renderer, ::g::Uno::Collections::List* positionedRuns);
    static RendererCached* New1(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances tolerances, ::g::Fuse::Text::Renderer* renderer, ::g::Uno::Collections::List* positionedRuns);
};
// }

}}}} // ::g::Fuse::Controls::FuseTextRenderer
