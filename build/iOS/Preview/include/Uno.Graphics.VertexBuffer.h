// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.IDisposable.h>
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Buffer;}}

namespace g{
namespace Uno{
namespace Graphics{

// public sealed class VertexBuffer :1648
// {
::g::Uno::Graphics::DeviceBuffer_type* VertexBuffer_typeof();
void VertexBuffer__ctor_1_fn(VertexBuffer* __this, int* sizeInBytes, int* usage);
void VertexBuffer__ctor_2_fn(VertexBuffer* __this, ::g::Uno::Buffer* data, int* usage);
void VertexBuffer__ctor_3_fn(VertexBuffer* __this, int* usage);
void VertexBuffer__New1_fn(int* sizeInBytes, int* usage, VertexBuffer** __retval);
void VertexBuffer__New2_fn(::g::Uno::Buffer* data, int* usage, VertexBuffer** __retval);
void VertexBuffer__New3_fn(int* usage, VertexBuffer** __retval);

struct VertexBuffer : ::g::Uno::Graphics::DeviceBuffer
{
    void ctor_1(int sizeInBytes, int usage);
    void ctor_2(::g::Uno::Buffer* data, int usage);
    void ctor_3(int usage);
    static VertexBuffer* New1(int sizeInBytes, int usage);
    static VertexBuffer* New2(::g::Uno::Buffer* data, int usage);
    static VertexBuffer* New3(int usage);
};
// }

}}} // ::g::Uno::Graphics
