// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Net.Http/0.42.5/uriparsers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct QueryParser;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class QueryParser :161
// {
uType* QueryParser_typeof();
void QueryParser__ctor__fn(QueryParser* __this);
void QueryParser__New1_fn(QueryParser** __retval);
void QueryParser__Parse_fn(uString* uriString, uString* scheme, int* idx, int* startPartIdx, uString** __retval);

struct QueryParser : uObject
{
    void ctor_();
    static QueryParser* New1();
    static uString* Parse(uString* uriString, uString* scheme, int idx, int* startPartIdx);
};
// }

}}}} // ::g::Uno::Net::Http
