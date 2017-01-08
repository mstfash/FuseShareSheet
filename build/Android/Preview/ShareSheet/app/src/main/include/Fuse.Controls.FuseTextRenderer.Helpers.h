// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fusetextrenderer/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct Helpers;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct TextControlData;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct Tolerances;}}}}
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{struct Run;}}}}
namespace g{namespace Fuse{namespace Text{struct PositionedRun;}}}
namespace g{namespace Fuse{namespace Text{struct Renderer;}}}
namespace g{namespace Fuse{namespace Text{struct ShapedRun;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FuseTextRenderer{

// internal static class Helpers :64
// {
uClassType* Helpers_typeof();
void Helpers__GetRenderer_fn(::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Collections::List* wrappedRuns, ::g::Uno::Collections::List** positionedRuns, ::g::Fuse::Text::Renderer** __retval);
void Helpers__Measure_fn(::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Collections::List* wrappedRuns, ::g::Uno::Float2* __retval);
void Helpers__ToAlignmentNumber_fn(int* alignment, float* __retval);
void Helpers__Wrap_fn(::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Collections::List* logicalRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances* tolerances, ::g::Uno::Collections::List** __retval);

struct Helpers : uObject
{
    static ::g::Fuse::Text::Renderer* GetRenderer(::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Collections::List* wrappedRuns, ::g::Uno::Collections::List** positionedRuns);
    static ::g::Uno::Float2 Measure(::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Collections::List* wrappedRuns);
    static float ToAlignmentNumber(int alignment);
    static ::g::Uno::Collections::List* Wrap(::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Collections::List* logicalRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances* tolerances);
};
// }

}}}} // ::g::Fuse::Controls::FuseTextRenderer
