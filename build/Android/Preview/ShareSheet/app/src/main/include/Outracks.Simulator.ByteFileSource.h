// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/Android/Preview/preamble/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.FileSource.h>
namespace g{namespace Outracks{namespace Simulator{struct ByteFileSource;}}}
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class ByteFileSource :81
// {
::g::Uno::UX::FileSource_type* ByteFileSource_typeof();
void ByteFileSource__ctor_1_fn(ByteFileSource* __this, uString* path, uArray* bytes);
void ByteFileSource__New1_fn(uString* path, uArray* bytes, ByteFileSource** __retval);
void ByteFileSource__OpenRead_fn(ByteFileSource* __this, ::g::Uno::IO::Stream** __retval);
void ByteFileSource__ReadAllBytes_fn(ByteFileSource* __this, uArray** __retval);
void ByteFileSource__Update_fn(ByteFileSource* __this, uArray* newBytes);

struct ByteFileSource : ::g::Uno::UX::FileSource
{
    uStrong<uArray*> _bytes;

    void ctor_1(uString* path, uArray* bytes);
    void Update(uArray* newBytes);
    static ByteFileSource* New1(uString* path, uArray* bytes);
};
// }

}}} // ::g::Outracks::Simulator
