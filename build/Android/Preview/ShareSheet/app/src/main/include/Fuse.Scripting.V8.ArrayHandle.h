// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct ArrayHandle;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal sealed extern class ArrayHandle :758
// {
uType* ArrayHandle_typeof();
void ArrayHandle__ctor__fn(ArrayHandle* __this, uArray* array);
void ArrayHandle__CopyToArray_fn(void** ptr, int* length, uArray** __retval);
void ArrayHandle__GetIntPtr_fn(ArrayHandle* __this, void** __retval);
void ArrayHandle__New1_fn(uArray* array, ArrayHandle** __retval);

struct ArrayHandle : uObject
{
    uStrong<uArray*> Array;

    void ctor_(uArray* array);
    void* GetIntPtr();
    static uArray* CopyToArray(void* ptr, int length);
    static ArrayHandle* New1(uArray* array);
};
// }

}}}} // ::g::Fuse::Scripting::V8
