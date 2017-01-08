// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing/0.42.4/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct MultiBuffer;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct MultiBuffer__Field;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Internal{

// public sealed class MultiBuffer.Field :195
// {
uType* MultiBuffer__Field_typeof();
void MultiBuffer__Field__ctor__fn(MultiBuffer__Field* __this);
void MultiBuffer__Field__New1_fn(MultiBuffer__Field** __retval);

struct MultiBuffer__Field : uObject
{
    uStrong< ::g::Fuse::Drawing::Internal::MultiBuffer*> _owner;
    int Offset;
    int Type;

    void ctor_();
    static MultiBuffer__Field* New1();
};
// }

}}}} // ::g::Fuse::Drawing::Internal
