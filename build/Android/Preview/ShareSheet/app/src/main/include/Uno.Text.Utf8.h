// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Text{struct Utf8;}}}

namespace g{
namespace Uno{
namespace Text{

// public static class Utf8 :422
// {
uClassType* Utf8_typeof();
void Utf8__GetBytes_fn(uString* value, uArray** __retval);
void Utf8__GetString_fn(uArray* value, uString** __retval);

struct Utf8 : uObject
{
    static uArray* GetBytes(uString* value);
    static uString* GetString(uArray* value);
};
// }

}}} // ::g::Uno::Text
