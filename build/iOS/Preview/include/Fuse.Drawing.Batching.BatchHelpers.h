// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Batching/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct Batch;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct BatchHelpers;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct BatchIndexBuffer;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct BatchVertexBuffer;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct IndexArray;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelMesh;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct VertexAttributeArray;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Batching{

// public static class BatchHelpers :139
// {
uClassType* BatchHelpers_typeof();
void BatchHelpers__CreateBatchIndexBuffer_fn(::g::Uno::Content::Models::IndexArray* array, ::g::Fuse::Drawing::Batching::BatchIndexBuffer** __retval);
void BatchHelpers__CreateBatchVertexBuffer_fn(::g::Uno::Content::Models::VertexAttributeArray* array, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval);
void BatchHelpers__CreateSingleBatch_fn(::g::Uno::Content::Models::ModelMesh* m, ::g::Fuse::Drawing::Batching::Batch** __retval);

struct BatchHelpers : uObject
{
    static ::g::Fuse::Drawing::Batching::BatchIndexBuffer* CreateBatchIndexBuffer(::g::Uno::Content::Models::IndexArray* array);
    static ::g::Fuse::Drawing::Batching::BatchVertexBuffer* CreateBatchVertexBuffer(::g::Uno::Content::Models::VertexAttributeArray* array);
    static ::g::Fuse::Drawing::Batching::Batch* CreateSingleBatch(::g::Uno::Content::Models::ModelMesh* m);
};
// }

}}}} // ::g::Fuse::Drawing::Batching
