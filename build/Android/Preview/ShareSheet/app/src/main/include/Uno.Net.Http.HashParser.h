// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Net.Http/0.42.5/uriparsers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HashParser;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class HashParser :32
// {
uType* HashParser_typeof();
void HashParser__ctor__fn(HashParser* __this);
void HashParser__New1_fn(HashParser** __retval);
void HashParser__Parse_fn(uString* uriString, int* idx, int* startPartIdx, uString** __retval);

struct HashParser : uObject
{
    void ctor_();
    static HashParser* New1();
    static uString* Parse(uString* uriString, int idx, int* startPartIdx);
};
// }

}}}} // ::g::Uno::Net::Http
