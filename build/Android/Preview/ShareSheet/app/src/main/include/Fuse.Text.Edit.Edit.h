// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Edit{struct Caret;}}}}
namespace g{namespace Fuse{namespace Text{namespace Edit{struct Edit;}}}}
namespace g{namespace Fuse{namespace Text{struct PositionedRun;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Edit{

// public static class Edit :712
// {
uClassType* Edit_typeof();
void Edit__Backspace_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, uString** __retval);
void Edit__Delete_fn(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, uString** __retval);
void Edit__DeleteSpan_fn(::g::Fuse::Text::Edit::Caret* start, ::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, uString** __retval);
void Edit__Insert_fn(uChar* c, ::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source, uString** __retval);

struct Edit : uObject
{
    static uString* Backspace(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source);
    static uString* Delete(::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source);
    static uString* DeleteSpan(::g::Fuse::Text::Edit::Caret start, ::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source);
    static uString* Insert(uChar c, ::g::Fuse::Text::Edit::Caret* caret, ::g::Uno::Collections::List* runs, uArray* runIndices, uString* source);
};
// }

}}}} // ::g::Fuse::Text::Edit
