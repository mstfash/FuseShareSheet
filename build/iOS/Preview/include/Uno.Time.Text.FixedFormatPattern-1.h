// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct FixedFormatPattern;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// internal sealed class FixedFormatPattern<T> :7
// {
uType* FixedFormatPattern_typeof();
void FixedFormatPattern__ctor__fn(FixedFormatPattern* __this, uArray* parts);
void FixedFormatPattern__Format_fn(FixedFormatPattern* __this, void* bucket, uString** __retval);
void FixedFormatPattern__New1_fn(uType* __type, uArray* parts, FixedFormatPattern** __retval);
void FixedFormatPattern__Parse_fn(FixedFormatPattern* __this, uString* line, void* bucket);

struct FixedFormatPattern : uObject
{
    uStrong<uArray*> _parts;

    void ctor_(uArray* parts);
    template<class T>
    uString* Format(T bucket) { uString* __retval; return FixedFormatPattern__Format_fn(this, uConstrain(__type->T(0), bucket), &__retval), __retval; }
    template<class T>
    void Parse(uString* line, T bucket) { FixedFormatPattern__Parse_fn(this, line, uConstrain(__type->T(0), bucket)); }
    static FixedFormatPattern* New1(uType* __type, uArray* parts);
};
// }

}}}} // ::g::Uno::Time::Text
