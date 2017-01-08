// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Drawing.Meshes.MeshGenerator.h>
#include <Fuse.Drawing.Meshes.MeshTools.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Content.Models.IndexArray.h>
#include <Uno.Content.Models.ModelMesh.h>
#include <Uno.Content.Models.VertexAttributeArray.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Graphics.PrimitiveType.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Quaternion.h>
#include <Uno.String.h>
#include <Uno.UShort.h>
#include <Uno.Vector.h>
static uString* STRINGS[9];
static uType* TYPES[10];

namespace g{
namespace Fuse{
namespace Drawing{
namespace Meshes{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Meshes/0.42.4/$.uno
// ----------------------------------------------------------------------------------------------

// public static class MeshGenerator :11
// {
static void MeshGenerator_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Position");
    ::STRINGS[1] = uString::Const("Normal");
    ::STRINGS[2] = uString::Const("TexCoord");
    ::STRINGS[3] = uString::Const("Cone");
    ::STRINGS[4] = uString::Const("Tangent");
    ::STRINGS[5] = uString::Const("Cube");
    ::STRINGS[6] = uString::Const("Cylinder");
    ::STRINGS[7] = uString::Const("Sphere");
    ::TYPES[0] = ::g::Uno::Float3_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[2] = ::g::Uno::UShort_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Float4_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Float_typeof()->Array();
    type->Reflection.SetFunctions(4,
        new uFunction("CreateCone", NULL, (void*)MeshGenerator__CreateCone_fn, 0, true, ::g::Uno::Content::Models::ModelMesh_typeof(), 4, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("CreateCube", NULL, (void*)MeshGenerator__CreateCube_fn, 0, true, ::g::Uno::Content::Models::ModelMesh_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("CreateCylinder", NULL, (void*)MeshGenerator__CreateCylinder_fn, 0, true, ::g::Uno::Content::Models::ModelMesh_typeof(), 4, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("CreateSphere", NULL, (void*)MeshGenerator__CreateSphere_fn, 0, true, ::g::Uno::Content::Models::ModelMesh_typeof(), 4, ::g::Uno::Float3_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
}

uClassType* MeshGenerator_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.Meshes.MeshGenerator", options);
    type->fp_build_ = MeshGenerator_build;
    return type;
}

// public static Uno.Content.Models.ModelMesh CreateCone(float height, float radius, int horizontalTessellation, int verticalTessellation) :244
void MeshGenerator__CreateCone_fn(float* height, float* radius, int* horizontalTessellation, int* verticalTessellation, ::g::Uno::Content::Models::ModelMesh** __retval)
{
    *__retval = MeshGenerator::CreateCone(*height, *radius, *horizontalTessellation, *verticalTessellation);
}

// public static Uno.Content.Models.ModelMesh CreateCube(float3 pivot, float halfExtent) :13
void MeshGenerator__CreateCube_fn(::g::Uno::Float3* pivot, float* halfExtent, ::g::Uno::Content::Models::ModelMesh** __retval)
{
    *__retval = MeshGenerator::CreateCube(*pivot, *halfExtent);
}

// public static Uno.Content.Models.ModelMesh CreateCylinder(float height, float radius, int horizontalTessellation, int verticalTessellation) :131
void MeshGenerator__CreateCylinder_fn(float* height, float* radius, int* horizontalTessellation, int* verticalTessellation, ::g::Uno::Content::Models::ModelMesh** __retval)
{
    *__retval = MeshGenerator::CreateCylinder(*height, *radius, *horizontalTessellation, *verticalTessellation);
}

// public static Uno.Content.Models.ModelMesh CreateSphere(float3 pivot, float radius, int slices, int stacks) :70
void MeshGenerator__CreateSphere_fn(::g::Uno::Float3* pivot, float* radius, int* slices, int* stacks, ::g::Uno::Content::Models::ModelMesh** __retval)
{
    *__retval = MeshGenerator::CreateSphere(*pivot, *radius, *slices, *stacks);
}

// public static Uno.Content.Models.ModelMesh CreateCone(float height, float radius, int horizontalTessellation, int verticalTessellation) [static] :244
::g::Uno::Content::Models::ModelMesh* MeshGenerator::CreateCone(float height, float radius, int horizontalTessellation, int verticalTessellation)
{
    uStackFrame __("Fuse.Drawing.Meshes.MeshGenerator", "CreateCone(float,float,int,int)");
    int horizontalVertexCount = horizontalTessellation + 1;
    int verticalVertexCount = verticalTessellation + 1;
    int bodyVertexCount = horizontalVertexCount * verticalVertexCount;
    int bodyIndexCount = (horizontalTessellation * verticalTessellation) * 6;
    int capVertexCount = horizontalVertexCount + 1;
    int capIndexCount = horizontalVertexCount * 3;
    int vertexCount = bodyVertexCount + (capVertexCount << 1);
    int indexCount = bodyIndexCount + (capIndexCount << 1);
    float halfLength = height * 0.5f;
    uArray* vertices = uArray::New(::TYPES[0/*float3[]*/], vertexCount);
    uArray* normals = uArray::New(::TYPES[0/*float3[]*/], vertexCount);
    uArray* texCoords = uArray::New(::TYPES[1/*float2[]*/], vertexCount);
    uArray* indices = uArray::New(::TYPES[2/*ushort[]*/], indexCount);

    for (int j = 0; j < verticalVertexCount; j++)
    {
        float v = (float)j / (float)verticalTessellation;

        for (int i = 0; i < horizontalVertexCount; ++i)
        {
            int k = i + (j * horizontalVertexCount);
            float u = (float)i / (float)horizontalTessellation;
            uPtr(texCoords)->Item< ::g::Uno::Float2>(k) = ::g::Uno::Float2__New2(u, v);
            u = u * 6.28318548f;
            uPtr(vertices)->Item< ::g::Uno::Float3>(k) = ::g::Uno::Float3__New2((::g::Uno::Math::Cos1(u) * radius) * (1.0f - v), -halfLength + (v * height), (::g::Uno::Math::Sin1(u) * radius) * (1.0f - v));
            uPtr(normals)->Item< ::g::Uno::Float3>(k) = ::g::Uno::Float3__New2(::g::Uno::Math::Cos1(u), 0.0f, ::g::Uno::Math::Sin1(u));
        }
    }

    for (int i1 = 0; i1 < horizontalTessellation; ++i1)

        for (int j1 = 0; j1 < verticalTessellation; ++j1)
        {
            int k1 = (i1 + (j1 * horizontalTessellation)) * 6;
            uPtr(indices)->Item<uint16_t>(k1) = (uint16_t)(i1 + (j1 * horizontalVertexCount));
            indices->Item<uint16_t>(k1 + 1) = (uint16_t)(i1 + ((j1 + 1) * horizontalVertexCount));
            indices->Item<uint16_t>(k1 + 2) = (uint16_t)((i1 + (j1 * horizontalVertexCount)) + 1);
            indices->Item<uint16_t>(k1 + 3) = (uint16_t)((i1 + (j1 * horizontalVertexCount)) + 1);
            indices->Item<uint16_t>(k1 + 4) = (uint16_t)(i1 + ((j1 + 1) * horizontalVertexCount));
            indices->Item<uint16_t>(k1 + 5) = (uint16_t)((i1 + ((j1 + 1) * horizontalVertexCount)) + 1);
        }

    vertices->Item< ::g::Uno::Float3>(bodyVertexCount) = ::g::Uno::Float3__New2(0.0f, -halfLength, 0.0f);
    normals->Item< ::g::Uno::Float3>(bodyVertexCount) = ::g::Uno::Float3__New2(0.0f, -1.0f, 0.0f);
    texCoords->Item< ::g::Uno::Float2>(bodyVertexCount) = ::g::Uno::Float2__New2(0.5f, 0.5f);

    for (int i2 = 0; i2 < horizontalVertexCount; i2++)
    {
        float u1 = (float)i2 / (float)horizontalTessellation;
        u1 = u1 * 6.28318548f;
        uPtr(vertices)->Item< ::g::Uno::Float3>((bodyVertexCount + 2) + i2) = ::g::Uno::Float3__New2(::g::Uno::Math::Cos1(u1) * radius, -halfLength, ::g::Uno::Math::Sin1(u1) * radius);
        uPtr(normals)->Item< ::g::Uno::Float3>((bodyVertexCount + 2) + i2) = ::g::Uno::Float3__New2(0.0f, -1.0f, 0.0f);
        uPtr(texCoords)->Item< ::g::Uno::Float2>((bodyVertexCount + 2) + i2) = ::g::Uno::Float2__New2(0.5f + (0.5f * ::g::Uno::Math::Cos1(u1)), 0.5f + (0.5f * ::g::Uno::Math::Sin1(u1)));
    }

    int n = 0;
    int bottomi = bodyIndexCount + capIndexCount;
    int bottomv = bodyVertexCount + 2;
    int bottomCenter = bodyVertexCount;

    for (int i3 = 0; i3 < capIndexCount; i3 = i3 + 3)
    {
        int left = n;
        int right = n + 1;

        if (right == horizontalVertexCount)
            right = 0;

        uPtr(indices)->Item<uint16_t>(bottomi++) = (uint16_t)bottomCenter;
        indices->Item<uint16_t>(bottomi++) = (uint16_t)(bottomv + left);
        indices->Item<uint16_t>(bottomi++) = (uint16_t)(bottomv + right);
        n++;
    }

    ::g::Uno::Collections::Dictionary* dict = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray>*/]);
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[0/*"Position"*/], ::g::Uno::Content::Models::VertexAttributeArray::New4(vertices));
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[1/*"Normal"*/], ::g::Uno::Content::Models::VertexAttributeArray::New4(normals));
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[2/*"TexCoord"*/], ::g::Uno::Content::Models::VertexAttributeArray::New3(texCoords));
    ::g::Uno::Content::Models::ModelMesh* cone = ::g::Uno::Content::Models::ModelMesh::New1(::STRINGS[3/*"Cone"*/], 1, dict, ::g::Uno::Content::Models::IndexArray::New4(indices));
    return ::g::Fuse::Drawing::Meshes::MeshTools::CalculateTangentsAndBinormals(cone);
}

// public static Uno.Content.Models.ModelMesh CreateCube(float3 pivot, float halfExtent) [static] :13
::g::Uno::Content::Models::ModelMesh* MeshGenerator::CreateCube(::g::Uno::Float3 pivot, float halfExtent)
{
    uStackFrame __("Fuse.Drawing.Meshes.MeshGenerator", "CreateCube(float3,float)");
    int vertexCount = 24;
    int indexCount = 36;
    uArray* vertices = uArray::New(::TYPES[0/*float3[]*/], vertexCount);
    uArray* normals = uArray::New(::TYPES[0/*float3[]*/], vertexCount);
    uArray* tangents = uArray::New(::TYPES[4/*float4[]*/], vertexCount);
    uArray* texCoords = uArray::New(::TYPES[1/*float2[]*/], vertexCount);
    uArray* indices = uArray::New(::TYPES[2/*ushort[]*/], indexCount);
    uArray* pitches = uArray::Init<double>(::TYPES[5/*float[]*/], 6, 0.0f, ::g::Uno::Math::DegreesToRadians1(90.0f), ::g::Uno::Math::DegreesToRadians1(180.0f), ::g::Uno::Math::DegreesToRadians1(270.0f), 0.0f, 0.0f);
    uArray* yaws = uArray::Init<double>(::TYPES[5/*float[]*/], 6, 0.0f, 0.0f, 0.0f, 0.0f, ::g::Uno::Math::DegreesToRadians1(90.0f), ::g::Uno::Math::DegreesToRadians1(-90.0f));

    for (int i = 0; i < 6; i++)
    {
        int vi = i * 4;
        ::g::Uno::Float4 q = ::g::Uno::Quaternion::FromEulerAngle(uPtr(pitches)->Item<float>(i), uPtr(yaws)->Item<float>(i), 0.0f);
        uPtr(vertices)->Item< ::g::Uno::Float3>(vi) = ::g::Uno::Float3__op_Addition2(pivot, ::g::Uno::Float3__op_Multiply1(::g::Uno::Vector::Transform3(::g::Uno::Float3__New2(-1.0f, -1.0f, 1.0f), q), halfExtent));
        vertices->Item< ::g::Uno::Float3>(vi + 1) = ::g::Uno::Float3__op_Addition2(pivot, ::g::Uno::Float3__op_Multiply1(::g::Uno::Vector::Transform3(::g::Uno::Float3__New2(1.0f, -1.0f, 1.0f), q), halfExtent));
        vertices->Item< ::g::Uno::Float3>(vi + 2) = ::g::Uno::Float3__op_Addition2(pivot, ::g::Uno::Float3__op_Multiply1(::g::Uno::Vector::Transform3(::g::Uno::Float3__New2(1.0f, 1.0f, 1.0f), q), halfExtent));
        vertices->Item< ::g::Uno::Float3>(vi + 3) = ::g::Uno::Float3__op_Addition2(pivot, ::g::Uno::Float3__op_Multiply1(::g::Uno::Vector::Transform3(::g::Uno::Float3__New2(-1.0f, 1.0f, 1.0f), q), halfExtent));
        ::g::Uno::Float3 n = ::g::Uno::Vector::Transform3(::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), q);
        uPtr(normals)->Item< ::g::Uno::Float3>(vi) = n;
        normals->Item< ::g::Uno::Float3>(vi + 1) = n;
        normals->Item< ::g::Uno::Float3>(vi + 2) = n;
        normals->Item< ::g::Uno::Float3>(vi + 3) = n;
        ::g::Uno::Float4 t = ::g::Uno::Float4__New8(::g::Uno::Vector::Transform3(::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), q), 1.0f);
        uPtr(tangents)->Item< ::g::Uno::Float4>(vi) = t;
        tangents->Item< ::g::Uno::Float4>(vi + 1) = t;
        tangents->Item< ::g::Uno::Float4>(vi + 2) = t;
        tangents->Item< ::g::Uno::Float4>(vi + 3) = t;
        uPtr(texCoords)->Item< ::g::Uno::Float2>(vi) = ::g::Uno::Float2__New2(0.0f, 0.0f);
        texCoords->Item< ::g::Uno::Float2>(vi + 1) = ::g::Uno::Float2__New2(1.0f, 0.0f);
        texCoords->Item< ::g::Uno::Float2>(vi + 2) = ::g::Uno::Float2__New2(1.0f, 1.0f);
        texCoords->Item< ::g::Uno::Float2>(vi + 3) = ::g::Uno::Float2__New2(0.0f, 1.0f);
        int ii = i * 6;
        uPtr(indices)->Item<uint16_t>(ii) = (uint16_t)vi;
        indices->Item<uint16_t>(ii + 1) = (uint16_t)(vi + 1);
        indices->Item<uint16_t>(ii + 2) = (uint16_t)(vi + 2);
        indices->Item<uint16_t>(ii + 3) = (uint16_t)(vi + 2);
        indices->Item<uint16_t>(ii + 4) = (uint16_t)(vi + 3);
        indices->Item<uint16_t>(ii + 5) = (uint16_t)vi;
    }

    ::g::Uno::Collections::Dictionary* dict = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray>*/]);
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[0/*"Position"*/], ::g::Uno::Content::Models::VertexAttributeArray::New4(vertices));
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[1/*"Normal"*/], ::g::Uno::Content::Models::VertexAttributeArray::New4(normals));
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[4/*"Tangent"*/], ::g::Uno::Content::Models::VertexAttributeArray::New5(tangents));
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[2/*"TexCoord"*/], ::g::Uno::Content::Models::VertexAttributeArray::New3(texCoords));
    return ::g::Uno::Content::Models::ModelMesh::New1(::STRINGS[5/*"Cube"*/], 1, dict, ::g::Uno::Content::Models::IndexArray::New4(indices));
}

// public static Uno.Content.Models.ModelMesh CreateCylinder(float height, float radius, int horizontalTessellation, int verticalTessellation) [static] :131
::g::Uno::Content::Models::ModelMesh* MeshGenerator::CreateCylinder(float height, float radius, int horizontalTessellation, int verticalTessellation)
{
    uStackFrame __("Fuse.Drawing.Meshes.MeshGenerator", "CreateCylinder(float,float,int,int)");
    int horizontalVertexCount = horizontalTessellation + 1;
    int verticalVertexCount = verticalTessellation + 1;
    int bodyVertexCount = horizontalVertexCount * verticalVertexCount;
    int bodyIndexCount = (horizontalTessellation * verticalTessellation) * 6;
    int capVertexCount = horizontalVertexCount + 1;
    int capIndexCount = horizontalVertexCount * 3;
    int vertexCount = bodyVertexCount + (capVertexCount << 1);
    int indexCount = bodyIndexCount + (capIndexCount << 1);
    float halfLength = height * 0.5f;
    uArray* vertices = uArray::New(::TYPES[0/*float3[]*/], vertexCount);
    uArray* normals = uArray::New(::TYPES[0/*float3[]*/], vertexCount);
    uArray* texCoords = uArray::New(::TYPES[1/*float2[]*/], vertexCount);
    uArray* indices = uArray::New(::TYPES[2/*ushort[]*/], indexCount);

    for (int j = 0; j < verticalVertexCount; j++)
    {
        float v = (float)j / (float)verticalTessellation;

        for (int i = 0; i < horizontalVertexCount; ++i)
        {
            int k = i + (j * horizontalVertexCount);
            float u = (float)i / (float)horizontalTessellation;
            uPtr(texCoords)->Item< ::g::Uno::Float2>(k) = ::g::Uno::Float2__New2(u, v);
            u = u * 6.28318548f;
            uPtr(vertices)->Item< ::g::Uno::Float3>(k) = ::g::Uno::Float3__New2(::g::Uno::Math::Cos1(u) * radius, -halfLength + (v * height), ::g::Uno::Math::Sin1(u) * radius);
            uPtr(normals)->Item< ::g::Uno::Float3>(k) = ::g::Uno::Float3__New2(::g::Uno::Math::Cos1(u), 0.0f, ::g::Uno::Math::Sin1(u));
        }
    }

    for (int i1 = 0; i1 < horizontalTessellation; ++i1)

        for (int j1 = 0; j1 < verticalTessellation; ++j1)
        {
            int k1 = (i1 + (j1 * horizontalTessellation)) * 6;
            uPtr(indices)->Item<uint16_t>(k1) = (uint16_t)(i1 + (j1 * horizontalVertexCount));
            indices->Item<uint16_t>(k1 + 1) = (uint16_t)(i1 + ((j1 + 1) * horizontalVertexCount));
            indices->Item<uint16_t>(k1 + 2) = (uint16_t)((i1 + (j1 * horizontalVertexCount)) + 1);
            indices->Item<uint16_t>(k1 + 3) = (uint16_t)((i1 + (j1 * horizontalVertexCount)) + 1);
            indices->Item<uint16_t>(k1 + 4) = (uint16_t)(i1 + ((j1 + 1) * horizontalVertexCount));
            indices->Item<uint16_t>(k1 + 5) = (uint16_t)((i1 + ((j1 + 1) * horizontalVertexCount)) + 1);
        }

    vertices->Item< ::g::Uno::Float3>(bodyVertexCount) = ::g::Uno::Float3__New2(0.0f, -halfLength, 0.0f);
    normals->Item< ::g::Uno::Float3>(bodyVertexCount) = ::g::Uno::Float3__New2(0.0f, -1.0f, 0.0f);
    texCoords->Item< ::g::Uno::Float2>(bodyVertexCount) = ::g::Uno::Float2__New2(0.5f, 0.5f);
    vertices->Item< ::g::Uno::Float3>(bodyVertexCount + 1) = ::g::Uno::Float3__New2(0.0f, halfLength, 0.0f);
    normals->Item< ::g::Uno::Float3>(bodyVertexCount + 1) = ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f);
    texCoords->Item< ::g::Uno::Float2>(bodyVertexCount + 1) = ::g::Uno::Float2__New2(0.5f, 0.5f);

    for (int i2 = 0; i2 < horizontalVertexCount; i2++)
    {
        float u1 = (float)i2 / (float)horizontalTessellation;
        u1 = u1 * 6.28318548f;
        uPtr(vertices)->Item< ::g::Uno::Float3>((bodyVertexCount + 2) + i2) = ::g::Uno::Float3__New2(::g::Uno::Math::Cos1(u1) * radius, -halfLength, ::g::Uno::Math::Sin1(u1) * radius);
        uPtr(normals)->Item< ::g::Uno::Float3>((bodyVertexCount + 2) + i2) = ::g::Uno::Float3__New2(0.0f, -1.0f, 0.0f);
        uPtr(texCoords)->Item< ::g::Uno::Float2>((bodyVertexCount + 2) + i2) = ::g::Uno::Float2__New2(0.5f + (0.5f * ::g::Uno::Math::Cos1(u1)), 0.5f + (0.5f * ::g::Uno::Math::Sin1(u1)));
        vertices->Item< ::g::Uno::Float3>(((bodyVertexCount + 2) + horizontalVertexCount) + i2) = ::g::Uno::Float3__New2(::g::Uno::Math::Cos1(u1) * radius, halfLength, ::g::Uno::Math::Sin1(u1) * radius);
        normals->Item< ::g::Uno::Float3>(((bodyVertexCount + 2) + horizontalVertexCount) + i2) = ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f);
        texCoords->Item< ::g::Uno::Float2>(((bodyVertexCount + 2) + horizontalVertexCount) + i2) = ::g::Uno::Float2__New2(0.5f + (0.5f * ::g::Uno::Math::Cos1(u1)), 0.5f + (0.5f * ::g::Uno::Math::Sin1(u1)));
    }

    int n = 0;
    int topi = bodyIndexCount;
    int bottomi = bodyIndexCount + capIndexCount;
    int topv = (bodyVertexCount + 2) + horizontalVertexCount;
    int bottomv = bodyVertexCount + 2;
    int topCenter = bodyVertexCount + 1;
    int bottomCenter = bodyVertexCount;

    for (int i3 = 0; i3 < capIndexCount; i3 = i3 + 3)
    {
        int left = n;
        int right = n + 1;

        if (right == horizontalVertexCount)
            right = 0;

        uPtr(indices)->Item<uint16_t>(topi++) = (uint16_t)topCenter;
        indices->Item<uint16_t>(topi++) = (uint16_t)(topv + right);
        indices->Item<uint16_t>(topi++) = (uint16_t)(topv + left);
        indices->Item<uint16_t>(bottomi++) = (uint16_t)bottomCenter;
        indices->Item<uint16_t>(bottomi++) = (uint16_t)(bottomv + left);
        indices->Item<uint16_t>(bottomi++) = (uint16_t)(bottomv + right);
        n++;
    }

    ::g::Uno::Collections::Dictionary* dict = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray>*/]);
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[0/*"Position"*/], ::g::Uno::Content::Models::VertexAttributeArray::New4(vertices));
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[1/*"Normal"*/], ::g::Uno::Content::Models::VertexAttributeArray::New4(normals));
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[2/*"TexCoord"*/], ::g::Uno::Content::Models::VertexAttributeArray::New3(texCoords));
    ::g::Uno::Content::Models::ModelMesh* cylinder = ::g::Uno::Content::Models::ModelMesh::New1(::STRINGS[6/*"Cylinder"*/], 1, dict, ::g::Uno::Content::Models::IndexArray::New4(indices));
    return ::g::Fuse::Drawing::Meshes::MeshTools::CalculateTangentsAndBinormals(cylinder);
}

// public static Uno.Content.Models.ModelMesh CreateSphere(float3 pivot, float radius, int slices, int stacks) [static] :70
::g::Uno::Content::Models::ModelMesh* MeshGenerator::CreateSphere(::g::Uno::Float3 pivot, float radius, int slices, int stacks)
{
    uStackFrame __("Fuse.Drawing.Meshes.MeshGenerator", "CreateSphere(float3,float,int,int)");
    int horizontalVertexCount = slices + 1;
    int verticalVertexCount = stacks + 1;
    int bodyVertexCount = horizontalVertexCount * verticalVertexCount;
    int bodyIndexCount = (slices * stacks) * 6;
    int vertexCount = bodyVertexCount;
    int indexCount = bodyIndexCount;
    uArray* vertices = uArray::New(::TYPES[0/*float3[]*/], vertexCount);
    uArray* normals = uArray::New(::TYPES[0/*float3[]*/], vertexCount);
    uArray* texCoords = uArray::New(::TYPES[1/*float2[]*/], vertexCount);
    uArray* indices = uArray::New(::TYPES[2/*ushort[]*/], indexCount);

    for (int j = 0; j < verticalVertexCount; j++)

        for (int i = 0; i < horizontalVertexCount; ++i)
        {
            int k = i + (j * horizontalVertexCount);
            float u = (float)i / (float)slices;
            float v = (float)j / (float)stacks;
            uPtr(texCoords)->Item< ::g::Uno::Float2>(k) = ::g::Uno::Float2__New2(u, 1.0f - v);
            u = u * 6.28318548f;
            v = (v * 3.14159274f) - 1.57079637f;
            uPtr(vertices)->Item< ::g::Uno::Float3>(k) = ::g::Uno::Float3__op_Addition2(pivot, ::g::Uno::Float3__New2((::g::Uno::Math::Cos1(v) * ::g::Uno::Math::Cos1(u)) * radius, (::g::Uno::Math::Cos1(v) * ::g::Uno::Math::Sin1(u)) * radius, ::g::Uno::Math::Sin1(v) * radius));
            uPtr(normals)->Item< ::g::Uno::Float3>(k) = ::g::Uno::Float3__New2(::g::Uno::Math::Cos1(v) * ::g::Uno::Math::Cos1(u), ::g::Uno::Math::Cos1(v) * ::g::Uno::Math::Sin1(u), ::g::Uno::Math::Sin1(v));
        }

    for (int i1 = 0; i1 < slices; ++i1)

        for (int j1 = 0; j1 < stacks; ++j1)
        {
            int k1 = (i1 + (j1 * slices)) * 6;
            uPtr(indices)->Item<uint16_t>(k1) = (uint16_t)(i1 + (j1 * horizontalVertexCount));
            indices->Item<uint16_t>(k1 + 1) = (uint16_t)((i1 + (j1 * horizontalVertexCount)) + 1);
            indices->Item<uint16_t>(k1 + 2) = (uint16_t)(i1 + ((j1 + 1) * horizontalVertexCount));
            indices->Item<uint16_t>(k1 + 3) = (uint16_t)((i1 + (j1 * horizontalVertexCount)) + 1);
            indices->Item<uint16_t>(k1 + 4) = (uint16_t)((i1 + ((j1 + 1) * horizontalVertexCount)) + 1);
            indices->Item<uint16_t>(k1 + 5) = (uint16_t)(i1 + ((j1 + 1) * horizontalVertexCount));
        }

    ::g::Uno::Collections::Dictionary* dict = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray>*/]);
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[0/*"Position"*/], ::g::Uno::Content::Models::VertexAttributeArray::New4(vertices));
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[1/*"Normal"*/], ::g::Uno::Content::Models::VertexAttributeArray::New4(normals));
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[2/*"TexCoord"*/], ::g::Uno::Content::Models::VertexAttributeArray::New3(texCoords));
    ::g::Uno::Content::Models::ModelMesh* sphere = ::g::Uno::Content::Models::ModelMesh::New1(::STRINGS[7/*"Sphere"*/], 1, dict, ::g::Uno::Content::Models::IndexArray::New4(indices));
    return ::g::Fuse::Drawing::Meshes::MeshTools::CalculateTangentsAndBinormals(sphere);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Meshes/0.42.4/$.uno
// ----------------------------------------------------------------------------------------------

// public static class MeshTools :354
// {
static void MeshTools_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Normal");
    ::STRINGS[4] = uString::Const("Tangent");
    ::STRINGS[8] = uString::Const("Binormal");
    ::TYPES[0] = ::g::Uno::Float3_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof(), NULL), NULL);
    ::TYPES[7] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[8] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof(), NULL), NULL);
    ::TYPES[9] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof(), NULL);
    type->Reflection.SetFunctions(2,
        new uFunction("CalculateNormals", NULL, (void*)MeshTools__CalculateNormals_fn, 0, true, ::g::Uno::Content::Models::ModelMesh_typeof(), 1, ::g::Uno::Content::Models::ModelMesh_typeof()),
        new uFunction("CalculateTangentsAndBinormals", NULL, (void*)MeshTools__CalculateTangentsAndBinormals_fn, 0, true, ::g::Uno::Content::Models::ModelMesh_typeof(), 1, ::g::Uno::Content::Models::ModelMesh_typeof()));
}

uClassType* MeshTools_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.Meshes.MeshTools", options);
    type->fp_build_ = MeshTools_build;
    return type;
}

// public static Uno.Content.Models.ModelMesh CalculateNormals(Uno.Content.Models.ModelMesh mesh) :356
void MeshTools__CalculateNormals_fn(::g::Uno::Content::Models::ModelMesh* mesh, ::g::Uno::Content::Models::ModelMesh** __retval)
{
    *__retval = MeshTools::CalculateNormals(mesh);
}

// public static Uno.Content.Models.ModelMesh CalculateTangentsAndBinormals(Uno.Content.Models.ModelMesh m) :394
void MeshTools__CalculateTangentsAndBinormals_fn(::g::Uno::Content::Models::ModelMesh* m, ::g::Uno::Content::Models::ModelMesh** __retval)
{
    *__retval = MeshTools::CalculateTangentsAndBinormals(m);
}

// public static Uno.Content.Models.ModelMesh CalculateNormals(Uno.Content.Models.ModelMesh mesh) [static] :356
::g::Uno::Content::Models::ModelMesh* MeshTools::CalculateNormals(::g::Uno::Content::Models::ModelMesh* mesh)
{
    uStackFrame __("Fuse.Drawing.Meshes.MeshTools", "CalculateNormals(Uno.Content.Models.ModelMesh)");
    ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> > ret13;
    ::g::Uno::Content::Models::VertexAttributeArray* positions = uPtr(mesh)->Positions();
    ::g::Uno::Content::Models::IndexArray* indices = mesh->Indices();
    uArray* normals = uArray::New(::TYPES[0/*float3[]*/], uPtr(positions)->Count());

    for (int i = 0; i < uPtr(indices)->Count(); i = i + 3)
    {
        int i0 = uPtr(indices)->GetInt(i);
        int i1 = indices->GetInt(i + 1);
        int i2 = indices->GetInt(i + 2);
        ::g::Uno::Float4 ind3 = uPtr(positions)->GetFloat4(i0);
        ::g::Uno::Float3 p0 = ::g::Uno::Float3__New2(ind3.X, ind3.Y, ind3.Z);
        ::g::Uno::Float4 ind4 = positions->GetFloat4(i1);
        ::g::Uno::Float3 p1 = ::g::Uno::Float3__New2(ind4.X, ind4.Y, ind4.Z);
        ::g::Uno::Float4 ind5 = positions->GetFloat4(i2);
        ::g::Uno::Float3 p2 = ::g::Uno::Float3__New2(ind5.X, ind5.Y, ind5.Z);
        ::g::Uno::Float3 v0 = ::g::Uno::Float3__op_Subtraction2(p0, p1);
        ::g::Uno::Float3 v1 = ::g::Uno::Float3__op_Subtraction2(p2, p1);
        ::g::Uno::Float3 v2 = ::g::Uno::Vector::Cross(v0, v1);
        uPtr(normals)->Item< ::g::Uno::Float3>(i0) = ::g::Uno::Float3__op_Addition2(uPtr(normals)->Item< ::g::Uno::Float3>(i0), v2);
        normals->Item< ::g::Uno::Float3>(i1) = ::g::Uno::Float3__op_Addition2(normals->Item< ::g::Uno::Float3>(i1), v2);
        normals->Item< ::g::Uno::Float3>(i2) = ::g::Uno::Float3__op_Addition2(normals->Item< ::g::Uno::Float3>(i2), v2);
    }

    for (int i3 = 0; i3 < positions->Count(); i3++)
        uPtr(normals)->Item< ::g::Uno::Float3>(i3) = ::g::Uno::Vector::Normalize1(uPtr(normals)->Item< ::g::Uno::Float3>(i3));

    ::g::Uno::Collections::Dictionary* dict = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray>*/]);

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(mesh->VertexAttributes()), ::TYPES[6/*Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[7/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> > v = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[8/*Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>>*/]), &ret13), ret13);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(dict), v.Key(::TYPES[9/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), v.Value(::TYPES[9/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]));
    }

    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[1/*"Normal"*/], ::g::Uno::Content::Models::VertexAttributeArray::New4(normals));
    return ::g::Uno::Content::Models::ModelMesh::New1(mesh->Name(), mesh->PrimitiveType(), dict, mesh->Indices());
}

// public static Uno.Content.Models.ModelMesh CalculateTangentsAndBinormals(Uno.Content.Models.ModelMesh m) [static] :394
::g::Uno::Content::Models::ModelMesh* MeshTools::CalculateTangentsAndBinormals(::g::Uno::Content::Models::ModelMesh* m)
{
    uStackFrame __("Fuse.Drawing.Meshes.MeshTools", "CalculateTangentsAndBinormals(Uno.Content.Models.ModelMesh)");
    ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> > ret14;
    ::g::Uno::Content::Models::VertexAttributeArray* positions = uPtr(m)->Positions();
    ::g::Uno::Content::Models::VertexAttributeArray* normals = m->Normals();
    ::g::Uno::Content::Models::VertexAttributeArray* texcoords = m->TexCoords();
    ::g::Uno::Content::Models::IndexArray* indices = m->Indices();
    int indexCount = uPtr(indices)->Count();
    int vertexCount = uPtr(positions)->Count();
    uArray* tan1 = uArray::New(::TYPES[0/*float3[]*/], vertexCount);
    uArray* tan2 = uArray::New(::TYPES[0/*float3[]*/], vertexCount);
    uArray* tangents = uArray::New(::TYPES[0/*float3[]*/], vertexCount);
    uArray* binormals = uArray::New(::TYPES[0/*float3[]*/], vertexCount);

    for (int i = 0; i < indexCount; i = i + 3)
    {
        int i1 = uPtr(indices)->GetInt(i);
        int i2 = indices->GetInt(i + 1);
        int i3 = indices->GetInt(i + 2);
        ::g::Uno::Float4 ind6 = uPtr(positions)->GetFloat4(i1);
        ::g::Uno::Float3 v1 = ::g::Uno::Float3__New2(ind6.X, ind6.Y, ind6.Z);
        ::g::Uno::Float4 ind7 = positions->GetFloat4(i2);
        ::g::Uno::Float3 v2 = ::g::Uno::Float3__New2(ind7.X, ind7.Y, ind7.Z);
        ::g::Uno::Float4 ind8 = positions->GetFloat4(i3);
        ::g::Uno::Float3 v3 = ::g::Uno::Float3__New2(ind8.X, ind8.Y, ind8.Z);
        ::g::Uno::Float4 ind9 = uPtr(texcoords)->GetFloat4(i1);
        ::g::Uno::Float2 w1 = ::g::Uno::Float2__New2(ind9.X, ind9.Y);
        ::g::Uno::Float4 ind10 = texcoords->GetFloat4(i2);
        ::g::Uno::Float2 w2 = ::g::Uno::Float2__New2(ind10.X, ind10.Y);
        ::g::Uno::Float4 ind11 = texcoords->GetFloat4(i3);
        ::g::Uno::Float2 w3 = ::g::Uno::Float2__New2(ind11.X, ind11.Y);
        float x1 = v2.X - v1.X;
        float x2 = v3.X - v1.Y;
        float y1 = v2.Y - v1.Y;
        float y2 = v3.Y - v1.Y;
        float z1 = v2.Z - v1.Z;
        float z2 = v3.Z - v1.Z;
        float s1 = w2.X - w1.X;
        float s2 = w3.X - w1.X;
        float t1 = w2.Y - w1.Y;
        float t2 = w3.Y - w1.Y;
        float r = 1.0f / ((s1 * t2) - (s2 * t1));
        ::g::Uno::Float3 sdir = ::g::Uno::Float3__New2(((t2 * x1) - (t1 * x2)) * r, ((t2 * y1) - (t1 * y2)) * r, ((t2 * z1) - (t1 * z2)) * r);
        ::g::Uno::Float3 tdir = ::g::Uno::Float3__New2(((s1 * x2) - (s2 * x1)) * r, ((s1 * y2) - (s2 * y1)) * r, ((s1 * z2) - (s2 * z1)) * r);
        uPtr(tan1)->Item< ::g::Uno::Float3>(i1) = ::g::Uno::Float3__op_Addition2(uPtr(tan1)->Item< ::g::Uno::Float3>(i1), sdir);
        tan1->Item< ::g::Uno::Float3>(i2) = ::g::Uno::Float3__op_Addition2(tan1->Item< ::g::Uno::Float3>(i2), sdir);
        tan1->Item< ::g::Uno::Float3>(i3) = ::g::Uno::Float3__op_Addition2(tan1->Item< ::g::Uno::Float3>(i3), sdir);
        uPtr(tan2)->Item< ::g::Uno::Float3>(i1) = ::g::Uno::Float3__op_Addition2(uPtr(tan2)->Item< ::g::Uno::Float3>(i1), tdir);
        tan2->Item< ::g::Uno::Float3>(i2) = ::g::Uno::Float3__op_Addition2(tan2->Item< ::g::Uno::Float3>(i2), tdir);
        tan2->Item< ::g::Uno::Float3>(i3) = ::g::Uno::Float3__op_Addition2(tan2->Item< ::g::Uno::Float3>(i3), tdir);
    }

    for (int a = 0; a < vertexCount; ++a)
    {
        ::g::Uno::Float4 ind12 = uPtr(normals)->GetFloat4(a);
        ::g::Uno::Float3 n = ::g::Uno::Float3__New2(ind12.X, ind12.Y, ind12.Z);
        ::g::Uno::Float3 t = uPtr(tan1)->Item< ::g::Uno::Float3>(a);
        uPtr(tangents)->Item< ::g::Uno::Float3>(a) = ::g::Uno::Vector::Normalize1(::g::Uno::Float3__op_Subtraction2(t, ::g::Uno::Float3__op_Multiply1(n, ::g::Uno::Vector::Dot1(n, t))));
        float handedndess = (::g::Uno::Vector::Dot1(::g::Uno::Vector::Cross(n, t), uPtr(tan2)->Item< ::g::Uno::Float3>(a)) < 0.0f) ? -1.0f : 1.0f;
        uPtr(binormals)->Item< ::g::Uno::Float3>(a) = ::g::Uno::Float3__op_Multiply1(::g::Uno::Vector::Cross(tangents->Item< ::g::Uno::Float3>(a), n), handedndess);
    }

    ::g::Uno::Collections::Dictionary* dict = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray>*/]);

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(m->VertexAttributes()), ::TYPES[6/*Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[7/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> > v = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[8/*Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>>*/]), &ret14), ret14);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(dict), v.Key(::TYPES[9/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), v.Value(::TYPES[9/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]));
    }

    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[4/*"Tangent"*/], ::g::Uno::Content::Models::VertexAttributeArray::New4(tangents));
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[8/*"Binormal"*/], ::g::Uno::Content::Models::VertexAttributeArray::New4(binormals));
    return ::g::Uno::Content::Models::ModelMesh::New1(m->Name(), m->PrimitiveType(), dict, m->Indices());
}
// }

}}}} // ::g::Fuse::Drawing::Meshes
