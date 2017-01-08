// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Batching/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct Entry;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelMesh;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Batching{

// internal sealed class Entry :567
// {
uType* Entry_typeof();
void Entry__ctor__fn(Entry* __this, ::g::Uno::Content::Models::ModelMesh* m, int* instanceId);
void Entry__New1_fn(::g::Uno::Content::Models::ModelMesh* m, int* instanceId, Entry** __retval);

struct Entry : uObject
{
    int InstanceIndex;
    uStrong< ::g::Uno::Content::Models::ModelMesh*> Mesh;

    void ctor_(::g::Uno::Content::Models::ModelMesh* m, int instanceId);
    static Entry* New1(::g::Uno::Content::Models::ModelMesh* m, int instanceId);
};
// }

}}}} // ::g::Fuse::Drawing::Batching
