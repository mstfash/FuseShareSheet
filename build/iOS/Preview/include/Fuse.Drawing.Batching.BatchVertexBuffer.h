// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Batching/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct BatchVertexBuffer;}}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Buffer;}}
namespace g{namespace Uno{struct Byte2;}}
namespace g{namespace Uno{struct Byte4;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Int2;}}
namespace g{namespace Uno{struct Int3;}}
namespace g{namespace Uno{struct Int4;}}
namespace g{namespace Uno{struct SByte2;}}
namespace g{namespace Uno{struct SByte4;}}
namespace g{namespace Uno{struct Short2;}}
namespace g{namespace Uno{struct Short4;}}
namespace g{namespace Uno{struct UShort2;}}
namespace g{namespace Uno{struct UShort4;}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Batching{

// public sealed class BatchVertexBuffer :351
// {
uType* BatchVertexBuffer_typeof();
void BatchVertexBuffer__ctor__fn(BatchVertexBuffer* __this, int* type, int* maxVertices1, bool* staticBatch);
void BatchVertexBuffer__ctor_1_fn(BatchVertexBuffer* __this, int* type, ::g::Uno::Buffer* data);
void BatchVertexBuffer__get_Buffer_fn(BatchVertexBuffer* __this, ::g::Uno::Buffer** __retval);
void BatchVertexBuffer__get_DataType_fn(BatchVertexBuffer* __this, int* __retval);
void BatchVertexBuffer__set_DataType_fn(BatchVertexBuffer* __this, int* value);
void BatchVertexBuffer__Flush_fn(BatchVertexBuffer* __this);
void BatchVertexBuffer__Invalidate_fn(BatchVertexBuffer* __this);
void BatchVertexBuffer__New1_fn(int* type, int* maxVertices1, bool* staticBatch, BatchVertexBuffer** __retval);
void BatchVertexBuffer__New2_fn(int* type, ::g::Uno::Buffer* data, BatchVertexBuffer** __retval);
void BatchVertexBuffer__get_Position_fn(BatchVertexBuffer* __this, int* __retval);
void BatchVertexBuffer__set_Position_fn(BatchVertexBuffer* __this, int* value);
void BatchVertexBuffer__get_StrideInBytes_fn(BatchVertexBuffer* __this, int* __retval);
void BatchVertexBuffer__get_VertexBuffer_fn(BatchVertexBuffer* __this, ::g::Uno::Graphics::VertexBuffer** __retval);
void BatchVertexBuffer__Write_fn(BatchVertexBuffer* __this, uint8_t* value);
void BatchVertexBuffer__Write1_fn(BatchVertexBuffer* __this, ::g::Uno::Byte2* value);
void BatchVertexBuffer__Write2_fn(BatchVertexBuffer* __this, ::g::Uno::Byte4* value);
void BatchVertexBuffer__Write3_fn(BatchVertexBuffer* __this, ::g::Uno::Float2* value);
void BatchVertexBuffer__Write4_fn(BatchVertexBuffer* __this, ::g::Uno::Float3* value);
void BatchVertexBuffer__Write5_fn(BatchVertexBuffer* __this, ::g::Uno::Float4* value);
void BatchVertexBuffer__Write6_fn(BatchVertexBuffer* __this, int* value);
void BatchVertexBuffer__Write7_fn(BatchVertexBuffer* __this, ::g::Uno::Int2* value);
void BatchVertexBuffer__Write8_fn(BatchVertexBuffer* __this, ::g::Uno::Int3* value);
void BatchVertexBuffer__Write9_fn(BatchVertexBuffer* __this, ::g::Uno::Int4* value);
void BatchVertexBuffer__Write10_fn(BatchVertexBuffer* __this, int8_t* value);
void BatchVertexBuffer__Write11_fn(BatchVertexBuffer* __this, ::g::Uno::SByte2* value);
void BatchVertexBuffer__Write12_fn(BatchVertexBuffer* __this, ::g::Uno::SByte4* value);
void BatchVertexBuffer__Write13_fn(BatchVertexBuffer* __this, int16_t* value);
void BatchVertexBuffer__Write14_fn(BatchVertexBuffer* __this, ::g::Uno::Short2* value);
void BatchVertexBuffer__Write15_fn(BatchVertexBuffer* __this, ::g::Uno::Short4* value);
void BatchVertexBuffer__Write16_fn(BatchVertexBuffer* __this, uint32_t* value);
void BatchVertexBuffer__Write17_fn(BatchVertexBuffer* __this, uint16_t* value);
void BatchVertexBuffer__Write18_fn(BatchVertexBuffer* __this, ::g::Uno::UShort2* value);
void BatchVertexBuffer__Write19_fn(BatchVertexBuffer* __this, ::g::Uno::UShort4* value);

struct BatchVertexBuffer : uObject
{
    int _position;
    uStrong< ::g::Uno::Buffer*> buf;
    int dataType;
    bool isDirty;
    int maxVertices;
    int usage;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> vbo;

    void ctor_(int type, int maxVertices1, bool staticBatch);
    void ctor_1(int type, ::g::Uno::Buffer* data);
    ::g::Uno::Buffer* Buffer();
    int DataType();
    void DataType(int value);
    void Flush();
    void Invalidate();
    int Position();
    void Position(int value);
    int StrideInBytes();
    ::g::Uno::Graphics::VertexBuffer* VertexBuffer();
    void Write(uint8_t value);
    void Write1(::g::Uno::Byte2 value);
    void Write2(::g::Uno::Byte4 value);
    void Write3(::g::Uno::Float2 value);
    void Write4(::g::Uno::Float3 value);
    void Write5(::g::Uno::Float4 value);
    void Write6(int value);
    void Write7(::g::Uno::Int2 value);
    void Write8(::g::Uno::Int3 value);
    void Write9(::g::Uno::Int4 value);
    void Write10(int8_t value);
    void Write11(::g::Uno::SByte2 value);
    void Write12(::g::Uno::SByte4 value);
    void Write13(int16_t value);
    void Write14(::g::Uno::Short2 value);
    void Write15(::g::Uno::Short4 value);
    void Write16(uint32_t value);
    void Write17(uint16_t value);
    void Write18(::g::Uno::UShort2 value);
    void Write19(::g::Uno::UShort4 value);
    static BatchVertexBuffer* New1(int type, int maxVertices1, bool staticBatch);
    static BatchVertexBuffer* New2(int type, ::g::Uno::Buffer* data);
};
// }

}}}} // ::g::Fuse::Drawing::Batching
