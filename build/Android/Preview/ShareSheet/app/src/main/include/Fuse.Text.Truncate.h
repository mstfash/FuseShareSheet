// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{struct Font;}}}
namespace g{namespace Fuse{namespace Text{struct ShapedRun;}}}
namespace g{namespace Fuse{namespace Text{struct Truncate;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Text{

// public static class Truncate :2493
// {
uClassType* Truncate_typeof();
void Truncate__Line_fn(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lineRuns, float* maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Uno::Collections::List** __retval);
void Truncate__Lines_fn(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lines, float* maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Uno::Collections::List** __retval);
void Truncate__TruncatedLine_fn(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lineRuns, float* maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Uno::Float2* pos, int* runIndex, int* i, ::g::Uno::Collections::List** __retval);

struct Truncate : uObject
{
    static ::g::Uno::Collections::List* Line(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lineRuns, float maxPixelWidth, float* minTolerance, float* maxTolerance);
    static ::g::Uno::Collections::List* Lines(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lines, float maxPixelWidth, float* minTolerance, float* maxTolerance);
    static ::g::Uno::Collections::List* TruncatedLine(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* lineRuns, float maxPixelWidth, float* minTolerance, float* maxTolerance, ::g::Uno::Float2 pos, int runIndex, int i);
};
// }

}}} // ::g::Fuse::Text
