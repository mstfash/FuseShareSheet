// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fusetextrenderer/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.FuseTextRenderer.CacheState.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct NothingCached;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct TextControlData;}}}}
namespace g{namespace Fuse{namespace Text{struct PositionedRun;}}}
namespace g{namespace Fuse{namespace Text{struct Renderer;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FuseTextRenderer{

// internal sealed class NothingCached :169
// {
::g::Fuse::Controls::FuseTextRenderer::CacheState_type* NothingCached_typeof();
void NothingCached__ctor_1_fn(NothingCached* __this);
void NothingCached__GetMeasurements_fn(NothingCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Float2* measurements, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval);
void NothingCached__GetRenderer1_fn(NothingCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval);
void NothingCached__New1_fn(NothingCached** __retval);

struct NothingCached : ::g::Fuse::Controls::FuseTextRenderer::CacheState
{
    void ctor_1();
    static NothingCached* New1();
};
// }

}}}} // ::g::Fuse::Controls::FuseTextRenderer
