// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Batching/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct BatchIndexBuffer;}}}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{struct Buffer;}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Batching{

// public sealed class BatchIndexBuffer :241
// {
uType* BatchIndexBuffer_typeof();
void BatchIndexBuffer__ctor__fn(BatchIndexBuffer* __this, int* type, int* maxIndices1, bool* staticBatch);
void BatchIndexBuffer__ctor_1_fn(BatchIndexBuffer* __this, int* type, ::g::Uno::Buffer* data);
void BatchIndexBuffer__get_Buffer_fn(BatchIndexBuffer* __this, ::g::Uno::Buffer** __retval);
void BatchIndexBuffer__get_DataType_fn(BatchIndexBuffer* __this, int* __retval);
void BatchIndexBuffer__set_DataType_fn(BatchIndexBuffer* __this, int* value);
void BatchIndexBuffer__Flush_fn(BatchIndexBuffer* __this);
void BatchIndexBuffer__get_IndexBuffer_fn(BatchIndexBuffer* __this, ::g::Uno::Graphics::IndexBuffer** __retval);
void BatchIndexBuffer__Invalidate_fn(BatchIndexBuffer* __this);
void BatchIndexBuffer__New1_fn(int* type, int* maxIndices1, bool* staticBatch, BatchIndexBuffer** __retval);
void BatchIndexBuffer__New2_fn(int* type, ::g::Uno::Buffer* data, BatchIndexBuffer** __retval);
void BatchIndexBuffer__get_Position_fn(BatchIndexBuffer* __this, int* __retval);
void BatchIndexBuffer__set_Position_fn(BatchIndexBuffer* __this, int* value);
void BatchIndexBuffer__get_StrideInBytes_fn(BatchIndexBuffer* __this, int* __retval);
void BatchIndexBuffer__Write_fn(BatchIndexBuffer* __this, uint8_t* value);
void BatchIndexBuffer__Write1_fn(BatchIndexBuffer* __this, uint16_t* value);

struct BatchIndexBuffer : uObject
{
    int _position;
    uStrong< ::g::Uno::Buffer*> buf;
    int dataType;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> ibo;
    bool isDirty;
    int maxIndices;
    int usage;

    void ctor_(int type, int maxIndices1, bool staticBatch);
    void ctor_1(int type, ::g::Uno::Buffer* data);
    ::g::Uno::Buffer* Buffer();
    int DataType();
    void DataType(int value);
    void Flush();
    ::g::Uno::Graphics::IndexBuffer* IndexBuffer();
    void Invalidate();
    int Position();
    void Position(int value);
    int StrideInBytes();
    void Write(uint8_t value);
    void Write1(uint16_t value);
    static BatchIndexBuffer* New1(int type, int maxIndices1, bool staticBatch);
    static BatchIndexBuffer* New2(int type, ::g::Uno::Buffer* data);
};
// }

}}}} // ::g::Fuse::Drawing::Batching
