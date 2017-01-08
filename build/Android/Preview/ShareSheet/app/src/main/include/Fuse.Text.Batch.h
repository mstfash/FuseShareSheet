// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{struct Batch;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}

namespace g{
namespace Fuse{
namespace Text{

// internal struct Batch :1467
// {
struct Batch_type : uStructType
{
    ::g::Uno::IDisposable interface0;
};

Batch_type* Batch_typeof();
void Batch__ctor__fn(Batch* __this, int* textureIndex, ::g::Uno::Graphics::VertexBuffer* vbo, int* quadCount);
void Batch__Dispose_fn(Batch* __this);
void Batch__New1_fn(int* textureIndex, ::g::Uno::Graphics::VertexBuffer* vbo, int* quadCount, Batch* __retval);

struct Batch
{
    int TextureIndex;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> VertexBuffer;
    int QuadCount;

    void ctor_(int textureIndex, ::g::Uno::Graphics::VertexBuffer* vbo, int quadCount);
    void Dispose();
};

Batch Batch__New1(int textureIndex, ::g::Uno::Graphics::VertexBuffer* vbo, int quadCount);
// }

}}} // ::g::Fuse::Text
