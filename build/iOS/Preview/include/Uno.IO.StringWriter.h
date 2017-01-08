// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/io/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.IO.TextWriter.h>
namespace g{namespace Uno{namespace IO{struct StringWriter;}}}
namespace g{namespace Uno{namespace Text{struct StringBuilder;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class StringWriter :3319
// {
::g::Uno::IO::TextWriter_type* StringWriter_typeof();
void StringWriter__ctor_1_fn(StringWriter* __this);
void StringWriter__Close_fn(StringWriter* __this);
void StringWriter__Dispose1_fn(StringWriter* __this, bool* disposing);
void StringWriter__New1_fn(StringWriter** __retval);
void StringWriter__ToString_fn(StringWriter* __this, uString** __retval);
void StringWriter__Write1_fn(StringWriter* __this, uChar* value);
void StringWriter__Write3_fn(StringWriter* __this, uArray* buffer, int* index, int* count);
void StringWriter__WriteBuffer_fn(StringWriter* __this);

struct StringWriter : ::g::Uno::IO::TextWriter
{
    uStrong<uArray*> _buffer;
    int _index;
    bool _open;
    uStrong< ::g::Uno::Text::StringBuilder*> _stringBuilder;

    void ctor_1();
    void WriteBuffer();
    static StringWriter* New1();
};
// }

}}} // ::g::Uno::IO
