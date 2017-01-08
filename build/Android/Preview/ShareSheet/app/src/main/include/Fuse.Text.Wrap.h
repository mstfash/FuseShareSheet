// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{struct Run;}}}}
namespace g{namespace Fuse{namespace Text{struct Font;}}}
namespace g{namespace Fuse{namespace Text{struct ShapedRun;}}}
namespace g{namespace Fuse{namespace Text{struct Wrap;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Text{

// public static class Wrap :2631
// {
uClassType* Wrap_typeof();
void Wrap__ActualLineBreaks_fn(::g::Uno::Collections::List* logicalRuns, ::g::Uno::Collections::List** __retval);
void Wrap__Lines_fn(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* logicalLineRuns, float* maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Uno::Collections::List** __retval);
void Wrap__WrapLine_fn(::g::Fuse::Text::Font* font, float* maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Uno::Collections::List* line, ::g::Uno::Collections::List* result);
void Wrap__WrapRun_fn(::g::Fuse::Text::Font* font, float* maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Fuse::Text::ShapedRun* srun, ::g::Uno::Float2* pos, ::g::Uno::Collections::List** currentLine, ::g::Uno::Collections::List* result);

struct Wrap : uObject
{
    static ::g::Uno::Collections::List* ActualLineBreaks(::g::Uno::Collections::List* logicalRuns);
    static ::g::Uno::Collections::List* Lines(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* logicalLineRuns, float maxPixelWidth, float* minTolerance, float* maxTolerance);
    static void WrapLine(::g::Fuse::Text::Font* font, float maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Uno::Collections::List* line, ::g::Uno::Collections::List* result);
    static void WrapRun(::g::Fuse::Text::Font* font, float maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Fuse::Text::ShapedRun* srun, ::g::Uno::Float2* pos, ::g::Uno::Collections::List** currentLine, ::g::Uno::Collections::List* result);
};
// }

}}} // ::g::Fuse::Text
