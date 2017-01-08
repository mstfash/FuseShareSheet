// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fusetextrenderer/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.FuseTextRenderer.TextControlData.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct AsyncMeasurer;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct CacheState;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FuseTextRenderer{

// internal sealed class AsyncMeasurer :690
// {
uType* AsyncMeasurer_typeof();
void AsyncMeasurer__ctor__fn(AsyncMeasurer* __this, ::g::Fuse::Controls::FuseTextRenderer::CacheState* state, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, uDelegate* done);
void AsyncMeasurer__New1_fn(::g::Fuse::Controls::FuseTextRenderer::CacheState* state, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, uDelegate* done, AsyncMeasurer** __retval);
void AsyncMeasurer__Run_fn(AsyncMeasurer* __this);

struct AsyncMeasurer : uObject
{
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData _data;
    uStrong<uDelegate*> _done;
    uStrong< ::g::Fuse::Controls::FuseTextRenderer::CacheState*> _state;

    void ctor_(::g::Fuse::Controls::FuseTextRenderer::CacheState* state, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, uDelegate* done);
    void Run();
    static AsyncMeasurer* New1(::g::Fuse::Controls::FuseTextRenderer::CacheState* state, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, uDelegate* done);
};
// }

}}}} // ::g::Fuse::Controls::FuseTextRenderer
