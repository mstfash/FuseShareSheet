// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Meshes/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Drawing{namespace Meshes{struct MeshTools;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelMesh;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Meshes{

// public static class MeshTools :354
// {
uClassType* MeshTools_typeof();
void MeshTools__CalculateNormals_fn(::g::Uno::Content::Models::ModelMesh* mesh, ::g::Uno::Content::Models::ModelMesh** __retval);
void MeshTools__CalculateTangentsAndBinormals_fn(::g::Uno::Content::Models::ModelMesh* m, ::g::Uno::Content::Models::ModelMesh** __retval);

struct MeshTools : uObject
{
    static ::g::Uno::Content::Models::ModelMesh* CalculateNormals(::g::Uno::Content::Models::ModelMesh* mesh);
    static ::g::Uno::Content::Models::ModelMesh* CalculateTangentsAndBinormals(::g::Uno::Content::Models::ModelMesh* m);
};
// }

}}}} // ::g::Fuse::Drawing::Meshes
