// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct UnoString;}}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal static extern class UnoString :1420
// {
uClassType* UnoString_typeof();
void UnoString__GetInteriorStringPtr_fn(uString* str, int* offset, void** __retval);
void UnoString__GetSubstringPtr_fn(::g::Fuse::Text::Substring* str, void** __retval);

struct UnoString : uObject
{
    static void* GetInteriorStringPtr(uString* str, int offset);
    static void* GetSubstringPtr(::g::Fuse::Text::Substring* str);
};
// }

}}}} // ::g::Fuse::Text::Implementation
