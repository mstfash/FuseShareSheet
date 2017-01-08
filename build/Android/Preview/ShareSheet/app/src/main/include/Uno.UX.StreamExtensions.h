// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct MemoryStream;}}}
namespace g{namespace Uno{namespace UX{struct StreamExtensions;}}}

namespace g{
namespace Uno{
namespace UX{

// internal static class StreamExtensions :100
// {
uClassType* StreamExtensions_typeof();
void StreamExtensions__ReadAllBytes_fn(::g::Uno::IO::BinaryReader* reader, uArray** __retval);
void StreamExtensions__ToArray_fn(::g::Uno::IO::MemoryStream* memoryStream, uArray** __retval);

struct StreamExtensions : uObject
{
    static uArray* ReadAllBytes(::g::Uno::IO::BinaryReader* reader);
    static uArray* ToArray(::g::Uno::IO::MemoryStream* memoryStream);
};
// }

}}} // ::g::Uno::UX
