// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/models/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{template<class TKey, class TValue>struct KeyValuePair;}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct IndexArray;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelMesh;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct VertexAttributeArray;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Models{

// public sealed class ModelMesh :624
// {
uType* ModelMesh_typeof();
void ModelMesh__ctor__fn(ModelMesh* __this, uString* name, int* type, ::g::Uno::Collections::Dictionary* vertexAttributes, ::g::Uno::Content::Models::IndexArray* indices);
void ModelMesh__get_IndexCount_fn(ModelMesh* __this, int* __retval);
void ModelMesh__get_Indices_fn(ModelMesh* __this, ::g::Uno::Content::Models::IndexArray** __retval);
void ModelMesh__get_Name_fn(ModelMesh* __this, uString** __retval);
void ModelMesh__New1_fn(uString* name, int* type, ::g::Uno::Collections::Dictionary* vertexAttributes, ::g::Uno::Content::Models::IndexArray* indices, ModelMesh** __retval);
void ModelMesh__get_Normals_fn(ModelMesh* __this, ::g::Uno::Content::Models::VertexAttributeArray** __retval);
void ModelMesh__get_Positions_fn(ModelMesh* __this, ::g::Uno::Content::Models::VertexAttributeArray** __retval);
void ModelMesh__get_PrimitiveType_fn(ModelMesh* __this, int* __retval);
void ModelMesh__get_TexCoords_fn(ModelMesh* __this, ::g::Uno::Content::Models::VertexAttributeArray** __retval);
void ModelMesh__TryGetVertexAttribute_fn(ModelMesh* __this, uString* name, ::g::Uno::Content::Models::VertexAttributeArray** __retval);
void ModelMesh__get_VertexAttributes_fn(ModelMesh* __this, uObject** __retval);
void ModelMesh__get_VertexCount_fn(ModelMesh* __this, int* __retval);

struct ModelMesh : uObject
{
    uStrong< ::g::Uno::Content::Models::IndexArray*> _indices;
    uStrong<uString*> _name;
    int _primitiveType;
    uStrong< ::g::Uno::Collections::Dictionary*> _vertexAttributes;

    void ctor_(uString* name, int type, ::g::Uno::Collections::Dictionary* vertexAttributes, ::g::Uno::Content::Models::IndexArray* indices);
    int IndexCount();
    ::g::Uno::Content::Models::IndexArray* Indices();
    uString* Name();
    ::g::Uno::Content::Models::VertexAttributeArray* Normals();
    ::g::Uno::Content::Models::VertexAttributeArray* Positions();
    int PrimitiveType();
    ::g::Uno::Content::Models::VertexAttributeArray* TexCoords();
    ::g::Uno::Content::Models::VertexAttributeArray* TryGetVertexAttribute(uString* name);
    uObject* VertexAttributes();
    int VertexCount();
    static ModelMesh* New1(uString* name, int type, ::g::Uno::Collections::Dictionary* vertexAttributes, ::g::Uno::Content::Models::IndexArray* indices);
};
// }

}}}} // ::g::Uno::Content::Models
