// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Batching/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct Batch;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct Entry;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct MeshBatcher;}}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelMesh;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Batching{

// public sealed class MeshBatcher :575
// {
uType* MeshBatcher_typeof();
void MeshBatcher__ctor__fn(MeshBatcher* __this);
void MeshBatcher__AddEntry_fn(MeshBatcher* __this, ::g::Fuse::Drawing::Batching::Entry* e, int* __retval);
void MeshBatcher__AddMesh_fn(MeshBatcher* __this, ::g::Uno::Content::Models::ModelMesh* mesh, int* __retval);
void MeshBatcher__AddMesh1_fn(MeshBatcher* __this, ::g::Uno::Content::Models::ModelMesh* mesh, int* instanceId);
void MeshBatcher__get_BatchCount_fn(MeshBatcher* __this, int* __retval);
void MeshBatcher__get_Batches_fn(MeshBatcher* __this, uObject** __retval);
void MeshBatcher__CreateFakeIndexBuffer_fn(::g::Uno::Content::Models::ModelMesh* m, ::g::Uno::Content::Models::ModelMesh** __retval);
void MeshBatcher__get_Entries_fn(MeshBatcher* __this, uObject** __retval);
void MeshBatcher__get_EntryCount_fn(MeshBatcher* __this, int* __retval);
void MeshBatcher__Flush_fn(MeshBatcher* __this);
void MeshBatcher__Mesh_fn(::g::Fuse::Drawing::Batching::Entry* entry, ::g::Uno::Content::Models::ModelMesh** __retval);
void MeshBatcher__New1_fn(MeshBatcher** __retval);

struct MeshBatcher : uObject
{
    uStrong<uArray*> batches;
    uStrong< ::g::Uno::Collections::List*> entries;

    void ctor_();
    int AddEntry(::g::Fuse::Drawing::Batching::Entry* e);
    int AddMesh(::g::Uno::Content::Models::ModelMesh* mesh);
    void AddMesh1(::g::Uno::Content::Models::ModelMesh* mesh, int instanceId);
    int BatchCount();
    uObject* Batches();
    uObject* Entries();
    int EntryCount();
    void Flush();
    static ::g::Uno::Content::Models::ModelMesh* CreateFakeIndexBuffer(::g::Uno::Content::Models::ModelMesh* m);
    static ::g::Uno::Content::Models::ModelMesh* Mesh(::g::Fuse::Drawing::Batching::Entry* entry);
    static MeshBatcher* New1();
};
// }

}}}} // ::g::Fuse::Drawing::Batching
