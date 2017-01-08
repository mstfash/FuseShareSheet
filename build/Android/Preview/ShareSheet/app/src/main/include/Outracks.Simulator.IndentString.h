// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{struct IndentString;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public static class IndentString :439
// {
uClassType* IndentString_typeof();
void IndentString__Indent_fn(uString* str, uString** __retval);
void IndentString__PrefixWithTab_fn(uString* s, uString** __retval);

struct IndentString : uObject
{
    static uString* Indent(uString* str);
    static uString* PrefixWithTab(uString* s);
};
// }

}}} // ::g::Outracks::Simulator
