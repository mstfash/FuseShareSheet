// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct CString;}}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal static extern class CString :1403
// {
uClassType* CString_typeof();
void CString__strlen_fn(void** cstr, int* __retval);
void CString__ToString_fn(void** cstr, uString** __retval);

struct CString : uObject
{
    static int strlen(void* cstr);
    static uString* ToString(void* cstr);
};
// }

}}}} // ::g::Fuse::Text::Implementation
