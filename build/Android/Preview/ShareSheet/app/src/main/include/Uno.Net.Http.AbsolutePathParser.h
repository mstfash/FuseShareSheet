// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Net.Http/0.42.5/uriparsers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct AbsolutePathParser;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class AbsolutePathParser :8
// {
uType* AbsolutePathParser_typeof();
void AbsolutePathParser__ctor__fn(AbsolutePathParser* __this);
void AbsolutePathParser__New1_fn(AbsolutePathParser** __retval);
void AbsolutePathParser__Parse_fn(uString* uriString, int* idx, int* endIdx, int* startPartIdx, uString** __retval);

struct AbsolutePathParser : uObject
{
    void ctor_();
    static AbsolutePathParser* New1();
    static uString* Parse(uString* uriString, int idx, int endIdx, int* startPartIdx);
};
// }

}}}} // ::g::Uno::Net::Http
