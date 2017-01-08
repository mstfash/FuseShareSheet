// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Edit{struct Selection;}}}}
namespace g{namespace Fuse{namespace Text{namespace Edit{struct Span;}}}}
namespace g{namespace Fuse{namespace Text{struct PositionedRun;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Text{
namespace Edit{

// public static class Selection :783
// {
uClassType* Selection_typeof();
void Selection__GetVisualRects_fn(::g::Fuse::Text::Edit::Span* selection, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, float* lineHeight, ::g::Uno::Collections::List** __retval);

struct Selection : uObject
{
    static ::g::Uno::Collections::List* GetVisualRects(::g::Fuse::Text::Edit::Span selection, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, float lineHeight);
};
// }

}}}} // ::g::Fuse::Text::Edit
