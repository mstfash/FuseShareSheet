// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fusetextrenderer/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.FuseTextRenderer.CacheState.h>
#include <Fuse.Text.Bidirectional.Run.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct LogicalRunsCached;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct TextControlData;}}}}
namespace g{namespace Fuse{namespace Text{struct PositionedRun;}}}
namespace g{namespace Fuse{namespace Text{struct Renderer;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FuseTextRenderer{

// internal sealed class LogicalRunsCached :195
// {
::g::Fuse::Controls::FuseTextRenderer::CacheState_type* LogicalRunsCached_typeof();
void LogicalRunsCached__ctor_1_fn(LogicalRunsCached* __this, uString* renderValue);
void LogicalRunsCached__GetMeasurements_fn(LogicalRunsCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Float2* measurements, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval);
void LogicalRunsCached__GetRenderer1_fn(LogicalRunsCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval);
void LogicalRunsCached__New1_fn(uString* renderValue, LogicalRunsCached** __retval);

struct LogicalRunsCached : ::g::Fuse::Controls::FuseTextRenderer::CacheState
{
    uStrong< ::g::Uno::Collections::List*> _logicalRuns;
    uStrong<uString*> _renderValue;

    void ctor_1(uString* renderValue);
    static LogicalRunsCached* New1(uString* renderValue);
};
// }

}}}} // ::g::Fuse::Controls::FuseTextRenderer
