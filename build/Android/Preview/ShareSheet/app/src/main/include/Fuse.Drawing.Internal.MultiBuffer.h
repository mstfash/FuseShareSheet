// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing/0.42.4/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Internal.TypedBuffer.h>
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct MultiBuffer;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct MultiBuffer__Field;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct MultiBuffer__Setter;}}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Internal{

// public sealed class MultiBuffer :194
// {
uType* MultiBuffer_typeof();
void MultiBuffer__ctor_2_fn(MultiBuffer* __this);
void MultiBuffer__Add_fn(MultiBuffer* __this, MultiBuffer__Setter** __retval);
void MultiBuffer__Alloc_fn(MultiBuffer* __this, int* type, int* size1, MultiBuffer__Field** __retval);
void MultiBuffer__AllocFloat_fn(MultiBuffer* __this, MultiBuffer__Field** __retval);
void MultiBuffer__AllocFloat2_fn(MultiBuffer* __this, MultiBuffer__Field** __retval);
void MultiBuffer__AllocFloat3_fn(MultiBuffer* __this, MultiBuffer__Field** __retval);
void MultiBuffer__AllocFloat4_fn(MultiBuffer* __this, MultiBuffer__Field** __retval);
void MultiBuffer__AllocUShort_fn(MultiBuffer* __this, MultiBuffer__Field** __retval);
void MultiBuffer__AppendByte_fn(MultiBuffer* __this, uint8_t* value);
void MultiBuffer__AppendByteNF_fn(MultiBuffer* __this, float* value);
void MultiBuffer__AppendEnd_fn(MultiBuffer* __this);
void MultiBuffer__AppendFloat_fn(MultiBuffer* __this, double* value);
void MultiBuffer__AppendFloat2_fn(MultiBuffer* __this, double* x, double* y);
void MultiBuffer__AppendFloat21_fn(MultiBuffer* __this, ::g::Uno::Float2* value);
void MultiBuffer__AppendFloat3_fn(MultiBuffer* __this, double* x, double* y, double* z);
void MultiBuffer__AppendFloat31_fn(MultiBuffer* __this, ::g::Uno::Float3* value);
void MultiBuffer__AppendFloat4_fn(MultiBuffer* __this, ::g::Uno::Float4* value);
void MultiBuffer__AppendOpen_fn(MultiBuffer* __this);
void MultiBuffer__AppendUShort_fn(MultiBuffer* __this, int* value);
void MultiBuffer__AppendUShort1_fn(MultiBuffer* __this, uint16_t* value);
void MultiBuffer__AppendUShortNF_fn(MultiBuffer* __this, float* value);
void MultiBuffer__EndAlloc_fn(MultiBuffer* __this);
void MultiBuffer__New3_fn(MultiBuffer** __retval);
void MultiBuffer__get_Stride_fn(MultiBuffer* __this, int* __retval);

struct MultiBuffer : ::g::Fuse::Drawing::Internal::TypedBuffer
{
    uStrong< ::g::Uno::Collections::List*> fields;
    int offset;

    void ctor_2();
    MultiBuffer__Setter* Add();
    MultiBuffer__Field* Alloc(int type, int size1);
    MultiBuffer__Field* AllocFloat();
    MultiBuffer__Field* AllocFloat2();
    MultiBuffer__Field* AllocFloat3();
    MultiBuffer__Field* AllocFloat4();
    MultiBuffer__Field* AllocUShort();
    void AppendByte(uint8_t value);
    void AppendByteNF(float value);
    void AppendEnd();
    void AppendFloat(double value);
    void AppendFloat2(double x, double y);
    void AppendFloat21(::g::Uno::Float2 value);
    void AppendFloat3(double x, double y, double z);
    void AppendFloat31(::g::Uno::Float3 value);
    void AppendFloat4(::g::Uno::Float4 value);
    void AppendOpen();
    void AppendUShort(int value);
    void AppendUShort1(uint16_t value);
    void AppendUShortNF(float value);
    void EndAlloc();
    int Stride();
    static MultiBuffer* New3();
};
// }

}}}} // ::g::Fuse::Drawing::Internal
