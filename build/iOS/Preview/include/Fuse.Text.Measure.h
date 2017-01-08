// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{struct Font;}}}
namespace g{namespace Fuse{namespace Text{struct Measure;}}}
namespace g{namespace Fuse{namespace Text{struct ShapedRun;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Text{

// public static class Measure :1365
// {
uClassType* Measure_typeof();
void Measure__AlignedRectForSize_fn(::g::Uno::Float2* size, float* pixelWidth, float* alignment, ::g::Uno::Rect* __retval);
void Measure__Lines_fn(::g::Fuse::Text::Font* font, float* lineSpacing, ::g::Uno::Collections::List* lines, ::g::Uno::Float2* __retval);

struct Measure : uObject
{
    static ::g::Uno::Rect AlignedRectForSize(::g::Uno::Float2 size, float pixelWidth, float alignment);
    static ::g::Uno::Float2 Lines(::g::Fuse::Text::Font* font, float lineSpacing, ::g::Uno::Collections::List* lines);
};
// }

}}} // ::g::Fuse::Text
