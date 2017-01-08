// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct GC;}}

namespace g{
namespace Uno{

// public static class GC :3046
// {
uClassType* GC_typeof();
void GC__SuppressFinalize_fn(uObject* obj);

struct GC : uObject
{
    static void SuppressFinalize(uObject* obj);
};
// }

}} // ::g::Uno
