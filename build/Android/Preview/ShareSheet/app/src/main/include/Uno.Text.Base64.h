// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Text{struct Base64;}}}

namespace g{
namespace Uno{
namespace Text{

// public static class Base64 :27
// {
uClassType* Base64_typeof();
void Base64__GetBytes_fn(uString* value, uArray** __retval);
void Base64__GetString_fn(uArray* value, uString** __retval);

struct Base64 : uObject
{
    static uArray* GetBytes(uString* value);
    static uString* GetString(uArray* value);
};
// }

}}} // ::g::Uno::Text
