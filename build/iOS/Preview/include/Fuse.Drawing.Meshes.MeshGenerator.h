// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Meshes/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Drawing{namespace Meshes{struct MeshGenerator;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelMesh;}}}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Meshes{

// public static class MeshGenerator :11
// {
uClassType* MeshGenerator_typeof();
void MeshGenerator__CreateCone_fn(float* height, float* radius, int* horizontalTessellation, int* verticalTessellation, ::g::Uno::Content::Models::ModelMesh** __retval);
void MeshGenerator__CreateCube_fn(::g::Uno::Float3* pivot, float* halfExtent, ::g::Uno::Content::Models::ModelMesh** __retval);
void MeshGenerator__CreateCylinder_fn(float* height, float* radius, int* horizontalTessellation, int* verticalTessellation, ::g::Uno::Content::Models::ModelMesh** __retval);
void MeshGenerator__CreateSphere_fn(::g::Uno::Float3* pivot, float* radius, int* slices, int* stacks, ::g::Uno::Content::Models::ModelMesh** __retval);

struct MeshGenerator : uObject
{
    static ::g::Uno::Content::Models::ModelMesh* CreateCone(float height, float radius, int horizontalTessellation, int verticalTessellation);
    static ::g::Uno::Content::Models::ModelMesh* CreateCube(::g::Uno::Float3 pivot, float halfExtent);
    static ::g::Uno::Content::Models::ModelMesh* CreateCylinder(float height, float radius, int horizontalTessellation, int verticalTessellation);
    static ::g::Uno::Content::Models::ModelMesh* CreateSphere(::g::Uno::Float3 pivot, float radius, int slices, int stacks);
};
// }

}}}} // ::g::Fuse::Drawing::Meshes
