// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing/0.42.4/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct TypedBuffer;}}}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Buffer;}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Internal{

// public class TypedBuffer :22
// {
uType* TypedBuffer_typeof();
void TypedBuffer__ctor__fn(TypedBuffer* __this);
void TypedBuffer__ctor_1_fn(TypedBuffer* __this, int* typeSize1, int* initSize);
void TypedBuffer__CheckGrow_fn(TypedBuffer* __this);
void TypedBuffer__Clear_fn(TypedBuffer* __this);
void TypedBuffer__Count_fn(TypedBuffer* __this, int* __retval);
void TypedBuffer__GetBuffer_fn(TypedBuffer* __this, ::g::Uno::Buffer** __retval);
void TypedBuffer__GetDeviceIndex_fn(TypedBuffer* __this, ::g::Uno::Graphics::IndexBuffer** __retval);
void TypedBuffer__GetDeviceVertex_fn(TypedBuffer* __this, ::g::Uno::Graphics::VertexBuffer** __retval);
void TypedBuffer__Init_fn(TypedBuffer* __this, int* initSize);
void TypedBuffer__InitDeviceIndex_fn(TypedBuffer* __this, int* bu);
void TypedBuffer__InitDeviceVertex_fn(TypedBuffer* __this, int* bu);
void TypedBuffer__New1_fn(TypedBuffer** __retval);
void TypedBuffer__New2_fn(int* typeSize1, int* initSize, TypedBuffer** __retval);
void TypedBuffer__UpdateDevice_fn(TypedBuffer* __this);

struct TypedBuffer : uObject
{
    uStrong< ::g::Uno::Buffer*> back;
    int capacity;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> deviceIndex;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> deviceVertex;
    int size;
    int typeSize;

    void ctor_();
    void ctor_1(int typeSize1, int initSize);
    void CheckGrow();
    void Clear();
    int Count();
    ::g::Uno::Buffer* GetBuffer();
    ::g::Uno::Graphics::IndexBuffer* GetDeviceIndex();
    ::g::Uno::Graphics::VertexBuffer* GetDeviceVertex();
    void Init(int initSize);
    void InitDeviceIndex(int bu);
    void InitDeviceVertex(int bu);
    void UpdateDevice();
    static TypedBuffer* New1();
    static TypedBuffer* New2(int typeSize1, int initSize);
};
// }

}}}} // ::g::Fuse::Drawing::Internal
