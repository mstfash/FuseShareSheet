// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Drawing.Batching.Batch.h>
#include <Fuse.Drawing.Batching.BatchHelpers.h>
#include <Fuse.Drawing.Batching.BatchIndexBuffer.h>
#include <Fuse.Drawing.Batching.BatchVertexBuffer.h>
#include <Fuse.Drawing.Batching.Entry.h>
#include <Fuse.Drawing.Batching.MeshBatcher.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Byte2.h>
#include <Uno.Byte4.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Content.Models.IndexArray.h>
#include <Uno.Content.Models.ModelMesh.h>
#include <Uno.Content.Models.VertexAttributeArray.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Func-2.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.IndexTypeHelpers.h>
#include <Uno.Graphics.PrimitiveType.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexAttributeTypeHelpers.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Int3.h>
#include <Uno.Int4.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.SByte.h>
#include <Uno.SByte2.h>
#include <Uno.SByte4.h>
#include <Uno.Short.h>
#include <Uno.Short2.h>
#include <Uno.Short4.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
#include <Uno.UShort.h>
#include <Uno.UShort2.h>
#include <Uno.UShort4.h>
static uString* STRINGS[20];
static uType* TYPES[13];

namespace g{
namespace Fuse{
namespace Drawing{
namespace Batching{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Batching/0.42.4/$.uno
// ------------------------------------------------------------------------------------------------

// public sealed class Batch :12
// {
static void Batch_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Graphics::IndexBuffer_typeof();
    type->SetFields(0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, attrib0), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, attrib1), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, attrib2), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, attrib3), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, attrib4), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, attrib5), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, attrib6), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, attrib7), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, binormals), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, boneIndices), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, boneWeights), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, colors), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, explicitVertexCount), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, hasExplicitVertexCount), 0,
        ::g::Fuse::Drawing::Batching::BatchIndexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, indexBuffer), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, instanceIndex), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, maxIndices), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, maxVertices), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, normals), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, positions), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, staticBatch), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, tangents), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, texCoord0s), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, texCoord1s), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, texCoord2s), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, texCoord3s), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, texCoord4s), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, texCoord5s), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, texCoord6s), 0,
        ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::Batch, texCoord7s), 0);
    type->Reflection.SetFunctions(55,
        new uFunction("get_Attrib0Buffer", NULL, (void*)Batch__get_Attrib0Buffer_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_Attrib0Buffer", NULL, (void*)Batch__set_Attrib0Buffer_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_Attrib1Buffer", NULL, (void*)Batch__get_Attrib1Buffer_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_Attrib1Buffer", NULL, (void*)Batch__set_Attrib1Buffer_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_Attrib2Buffer", NULL, (void*)Batch__get_Attrib2Buffer_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_Attrib2Buffer", NULL, (void*)Batch__set_Attrib2Buffer_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_Attrib3Buffer", NULL, (void*)Batch__get_Attrib3Buffer_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_Attrib3Buffer", NULL, (void*)Batch__set_Attrib3Buffer_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_Attrib4Buffer", NULL, (void*)Batch__get_Attrib4Buffer_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_Attrib4Buffer", NULL, (void*)Batch__set_Attrib4Buffer_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_Attrib5Buffer", NULL, (void*)Batch__get_Attrib5Buffer_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_Attrib5Buffer", NULL, (void*)Batch__set_Attrib5Buffer_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_Attrib6Buffer", NULL, (void*)Batch__get_Attrib6Buffer_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_Attrib6Buffer", NULL, (void*)Batch__set_Attrib6Buffer_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_Attrib7Buffer", NULL, (void*)Batch__get_Attrib7Buffer_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_Attrib7Buffer", NULL, (void*)Batch__set_Attrib7Buffer_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_Binormals", NULL, (void*)Batch__get_Binormals_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_Binormals", NULL, (void*)Batch__set_Binormals_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_BoneIndexBuffer", NULL, (void*)Batch__get_BoneIndexBuffer_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_BoneIndexBuffer", NULL, (void*)Batch__set_BoneIndexBuffer_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_BoneWeightBuffer", NULL, (void*)Batch__get_BoneWeightBuffer_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_BoneWeightBuffer", NULL, (void*)Batch__set_BoneWeightBuffer_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_Colors", NULL, (void*)Batch__get_Colors_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_Colors", NULL, (void*)Batch__set_Colors_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_IndexBuffer", NULL, (void*)Batch__get_IndexBuffer_fn, 0, false, ::TYPES[0/*Uno.Graphics.IndexBuffer*/], 0),
        new uFunction("get_IndexType", NULL, (void*)Batch__get_IndexType_fn, 0, false, ::g::Uno::Graphics::IndexType_typeof(), 0),
        new uFunction("get_Indices", NULL, (void*)Batch__get_Indices_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchIndexBuffer_typeof(), 0),
        new uFunction("set_Indices", NULL, (void*)Batch__set_Indices_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchIndexBuffer_typeof()),
        new uFunction("get_InstanceIndices", NULL, (void*)Batch__get_InstanceIndices_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_InstanceIndices", NULL, (void*)Batch__set_InstanceIndices_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction(".ctor", NULL, (void*)Batch__New1_fn, 0, true, type, 3, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("get_Normals", NULL, (void*)Batch__get_Normals_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_Normals", NULL, (void*)Batch__set_Normals_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_Positions", NULL, (void*)Batch__get_Positions_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_Positions", NULL, (void*)Batch__set_Positions_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_Tangents", NULL, (void*)Batch__get_Tangents_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_Tangents", NULL, (void*)Batch__set_Tangents_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_TexCoord0s", NULL, (void*)Batch__get_TexCoord0s_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_TexCoord0s", NULL, (void*)Batch__set_TexCoord0s_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_TexCoord1s", NULL, (void*)Batch__get_TexCoord1s_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_TexCoord1s", NULL, (void*)Batch__set_TexCoord1s_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_TexCoord2s", NULL, (void*)Batch__get_TexCoord2s_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_TexCoord2s", NULL, (void*)Batch__set_TexCoord2s_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_TexCoord3s", NULL, (void*)Batch__get_TexCoord3s_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_TexCoord3s", NULL, (void*)Batch__set_TexCoord3s_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_TexCoord4s", NULL, (void*)Batch__get_TexCoord4s_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_TexCoord4s", NULL, (void*)Batch__set_TexCoord4s_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_TexCoord5s", NULL, (void*)Batch__get_TexCoord5s_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_TexCoord5s", NULL, (void*)Batch__set_TexCoord5s_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_TexCoord6s", NULL, (void*)Batch__get_TexCoord6s_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_TexCoord6s", NULL, (void*)Batch__set_TexCoord6s_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_TexCoord7s", NULL, (void*)Batch__get_TexCoord7s_fn, 0, false, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 0),
        new uFunction("set_TexCoord7s", NULL, (void*)Batch__set_TexCoord7s_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof()),
        new uFunction("get_VertexCount", NULL, (void*)Batch__get_VertexCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_VertexCount", NULL, (void*)Batch__set_VertexCount_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()));
}

uType* Batch_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 30;
    options.ObjectSize = sizeof(Batch);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Batching.Batch", options);
    type->fp_build_ = Batch_build;
    return type;
}

// public Batch(int maxVertices, int maxIndices, bool staticBatch) :17
void Batch__ctor__fn(Batch* __this, int* maxVertices1, int* maxIndices1, bool* staticBatch1)
{
    __this->ctor_(*maxVertices1, *maxIndices1, *staticBatch1);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Attrib0Buffer() :67
void Batch__get_Attrib0Buffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->Attrib0Buffer();
}

// public void set_Attrib0Buffer(Fuse.Drawing.Batching.BatchVertexBuffer value) :67
void Batch__set_Attrib0Buffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->Attrib0Buffer(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Attrib1Buffer() :68
void Batch__get_Attrib1Buffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->Attrib1Buffer();
}

// public void set_Attrib1Buffer(Fuse.Drawing.Batching.BatchVertexBuffer value) :68
void Batch__set_Attrib1Buffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->Attrib1Buffer(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Attrib2Buffer() :69
void Batch__get_Attrib2Buffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->Attrib2Buffer();
}

// public void set_Attrib2Buffer(Fuse.Drawing.Batching.BatchVertexBuffer value) :69
void Batch__set_Attrib2Buffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->Attrib2Buffer(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Attrib3Buffer() :70
void Batch__get_Attrib3Buffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->Attrib3Buffer();
}

// public void set_Attrib3Buffer(Fuse.Drawing.Batching.BatchVertexBuffer value) :70
void Batch__set_Attrib3Buffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->Attrib3Buffer(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Attrib4Buffer() :71
void Batch__get_Attrib4Buffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->Attrib4Buffer();
}

// public void set_Attrib4Buffer(Fuse.Drawing.Batching.BatchVertexBuffer value) :71
void Batch__set_Attrib4Buffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->Attrib4Buffer(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Attrib5Buffer() :72
void Batch__get_Attrib5Buffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->Attrib5Buffer();
}

// public void set_Attrib5Buffer(Fuse.Drawing.Batching.BatchVertexBuffer value) :72
void Batch__set_Attrib5Buffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->Attrib5Buffer(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Attrib6Buffer() :73
void Batch__get_Attrib6Buffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->Attrib6Buffer();
}

// public void set_Attrib6Buffer(Fuse.Drawing.Batching.BatchVertexBuffer value) :73
void Batch__set_Attrib6Buffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->Attrib6Buffer(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Attrib7Buffer() :74
void Batch__get_Attrib7Buffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->Attrib7Buffer();
}

// public void set_Attrib7Buffer(Fuse.Drawing.Batching.BatchVertexBuffer value) :74
void Batch__set_Attrib7Buffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->Attrib7Buffer(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Binormals() :60
void Batch__get_Binormals_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->Binormals();
}

// public void set_Binormals(Fuse.Drawing.Batching.BatchVertexBuffer value) :60
void Batch__set_Binormals_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->Binormals(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_BoneIndexBuffer() :64
void Batch__get_BoneIndexBuffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->BoneIndexBuffer();
}

// public void set_BoneIndexBuffer(Fuse.Drawing.Batching.BatchVertexBuffer value) :64
void Batch__set_BoneIndexBuffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->BoneIndexBuffer(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_BoneWeightBuffer() :65
void Batch__get_BoneWeightBuffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->BoneWeightBuffer();
}

// public void set_BoneWeightBuffer(Fuse.Drawing.Batching.BatchVertexBuffer value) :65
void Batch__set_BoneWeightBuffer_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->BoneWeightBuffer(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Colors() :62
void Batch__get_Colors_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->Colors();
}

// public void set_Colors(Fuse.Drawing.Batching.BatchVertexBuffer value) :62
void Batch__set_Colors_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->Colors(value);
}

// public Uno.Graphics.IndexBuffer get_IndexBuffer() :117
void Batch__get_IndexBuffer_fn(Batch* __this, ::g::Uno::Graphics::IndexBuffer** __retval)
{
    *__retval = __this->IndexBuffer();
}

// public Uno.Graphics.IndexType get_IndexType() :122
void Batch__get_IndexType_fn(Batch* __this, int* __retval)
{
    *__retval = __this->IndexType();
}

// public Fuse.Drawing.Batching.BatchIndexBuffer get_Indices() :86
void Batch__get_Indices_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchIndexBuffer** __retval)
{
    *__retval = __this->Indices();
}

// public void set_Indices(Fuse.Drawing.Batching.BatchIndexBuffer value) :86
void Batch__set_Indices_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchIndexBuffer* value)
{
    __this->Indices(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_InstanceIndices() :63
void Batch__get_InstanceIndices_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->InstanceIndices();
}

// public void set_InstanceIndices(Fuse.Drawing.Batching.BatchVertexBuffer value) :63
void Batch__set_InstanceIndices_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->InstanceIndices(value);
}

// public Batch New(int maxVertices, int maxIndices, bool staticBatch) :17
void Batch__New1_fn(int* maxVertices1, int* maxIndices1, bool* staticBatch1, Batch** __retval)
{
    *__retval = Batch::New1(*maxVertices1, *maxIndices1, *staticBatch1);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Normals() :59
void Batch__get_Normals_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->Normals();
}

// public void set_Normals(Fuse.Drawing.Batching.BatchVertexBuffer value) :59
void Batch__set_Normals_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->Normals(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Positions() :50
void Batch__get_Positions_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->Positions();
}

// public void set_Positions(Fuse.Drawing.Batching.BatchVertexBuffer value) :50
void Batch__set_Positions_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->Positions(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Tangents() :61
void Batch__get_Tangents_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->Tangents();
}

// public void set_Tangents(Fuse.Drawing.Batching.BatchVertexBuffer value) :61
void Batch__set_Tangents_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->Tangents(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord0s() :51
void Batch__get_TexCoord0s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->TexCoord0s();
}

// public void set_TexCoord0s(Fuse.Drawing.Batching.BatchVertexBuffer value) :51
void Batch__set_TexCoord0s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->TexCoord0s(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord1s() :52
void Batch__get_TexCoord1s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->TexCoord1s();
}

// public void set_TexCoord1s(Fuse.Drawing.Batching.BatchVertexBuffer value) :52
void Batch__set_TexCoord1s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->TexCoord1s(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord2s() :53
void Batch__get_TexCoord2s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->TexCoord2s();
}

// public void set_TexCoord2s(Fuse.Drawing.Batching.BatchVertexBuffer value) :53
void Batch__set_TexCoord2s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->TexCoord2s(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord3s() :54
void Batch__get_TexCoord3s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->TexCoord3s();
}

// public void set_TexCoord3s(Fuse.Drawing.Batching.BatchVertexBuffer value) :54
void Batch__set_TexCoord3s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->TexCoord3s(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord4s() :55
void Batch__get_TexCoord4s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->TexCoord4s();
}

// public void set_TexCoord4s(Fuse.Drawing.Batching.BatchVertexBuffer value) :55
void Batch__set_TexCoord4s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->TexCoord4s(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord5s() :56
void Batch__get_TexCoord5s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->TexCoord5s();
}

// public void set_TexCoord5s(Fuse.Drawing.Batching.BatchVertexBuffer value) :56
void Batch__set_TexCoord5s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->TexCoord5s(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord6s() :57
void Batch__get_TexCoord6s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->TexCoord6s();
}

// public void set_TexCoord6s(Fuse.Drawing.Batching.BatchVertexBuffer value) :57
void Batch__set_TexCoord6s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->TexCoord6s(value);
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord7s() :58
void Batch__get_TexCoord7s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = __this->TexCoord7s();
}

// public void set_TexCoord7s(Fuse.Drawing.Batching.BatchVertexBuffer value) :58
void Batch__set_TexCoord7s_fn(Batch* __this, ::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->TexCoord7s(value);
}

// public int get_VertexCount() :80
void Batch__get_VertexCount_fn(Batch* __this, int* __retval)
{
    *__retval = __this->VertexCount();
}

// public void set_VertexCount(int value) :81
void Batch__set_VertexCount_fn(Batch* __this, int* value)
{
    __this->VertexCount(*value);
}

// public Batch(int maxVertices, int maxIndices, bool staticBatch) [instance] :17
void Batch::ctor_(int maxVertices1, int maxIndices1, bool staticBatch1)
{
    maxVertices = maxVertices1;
    maxIndices = maxIndices1;
    staticBatch = staticBatch1;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Attrib0Buffer() [instance] :67
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::Attrib0Buffer()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind17 = attrib0;
    return (ind17 != NULL) ? ind17 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(attrib0 = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(4, maxVertices, staticBatch));
}

// public void set_Attrib0Buffer(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :67
void Batch::Attrib0Buffer(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    attrib0 = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Attrib1Buffer() [instance] :68
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::Attrib1Buffer()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind18 = attrib1;
    return (ind18 != NULL) ? ind18 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(attrib1 = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(4, maxVertices, staticBatch));
}

// public void set_Attrib1Buffer(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :68
void Batch::Attrib1Buffer(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    attrib1 = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Attrib2Buffer() [instance] :69
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::Attrib2Buffer()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind19 = attrib2;
    return (ind19 != NULL) ? ind19 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(attrib2 = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(4, maxVertices, staticBatch));
}

// public void set_Attrib2Buffer(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :69
void Batch::Attrib2Buffer(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    attrib2 = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Attrib3Buffer() [instance] :70
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::Attrib3Buffer()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind20 = attrib3;
    return (ind20 != NULL) ? ind20 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(attrib3 = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(4, maxVertices, staticBatch));
}

// public void set_Attrib3Buffer(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :70
void Batch::Attrib3Buffer(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    attrib3 = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Attrib4Buffer() [instance] :71
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::Attrib4Buffer()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind21 = attrib4;
    return (ind21 != NULL) ? ind21 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(attrib4 = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(4, maxVertices, staticBatch));
}

// public void set_Attrib4Buffer(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :71
void Batch::Attrib4Buffer(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    attrib4 = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Attrib5Buffer() [instance] :72
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::Attrib5Buffer()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind22 = attrib5;
    return (ind22 != NULL) ? ind22 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(attrib5 = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(4, maxVertices, staticBatch));
}

// public void set_Attrib5Buffer(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :72
void Batch::Attrib5Buffer(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    attrib5 = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Attrib6Buffer() [instance] :73
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::Attrib6Buffer()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind23 = attrib6;
    return (ind23 != NULL) ? ind23 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(attrib6 = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(4, maxVertices, staticBatch));
}

// public void set_Attrib6Buffer(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :73
void Batch::Attrib6Buffer(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    attrib6 = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Attrib7Buffer() [instance] :74
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::Attrib7Buffer()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind24 = attrib7;
    return (ind24 != NULL) ? ind24 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(attrib7 = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(4, maxVertices, staticBatch));
}

// public void set_Attrib7Buffer(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :74
void Batch::Attrib7Buffer(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    attrib7 = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Binormals() [instance] :60
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::Binormals()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind11 = binormals;
    return (ind11 != NULL) ? ind11 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(binormals = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(3, maxVertices, staticBatch));
}

// public void set_Binormals(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :60
void Batch::Binormals(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    binormals = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_BoneIndexBuffer() [instance] :64
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::BoneIndexBuffer()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind15 = boneIndices;
    return (ind15 != NULL) ? ind15 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(boneIndices = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(19, maxVertices, staticBatch));
}

// public void set_BoneIndexBuffer(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :64
void Batch::BoneIndexBuffer(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    boneIndices = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_BoneWeightBuffer() [instance] :65
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::BoneWeightBuffer()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind16 = boneWeights;
    return (ind16 != NULL) ? ind16 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(boneWeights = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(20, maxVertices, staticBatch));
}

// public void set_BoneWeightBuffer(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :65
void Batch::BoneWeightBuffer(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    boneWeights = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Colors() [instance] :62
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::Colors()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind13 = colors;
    return (ind13 != NULL) ? ind13 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(colors = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(4, maxVertices, staticBatch));
}

// public void set_Colors(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :62
void Batch::Colors(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    colors = value;
}

// public Uno.Graphics.IndexBuffer get_IndexBuffer() [instance] :117
::g::Uno::Graphics::IndexBuffer* Batch::IndexBuffer()
{
    uStackFrame __("Fuse.Drawing.Batching.Batch", "get_IndexBuffer()");
    return (indexBuffer == NULL) ? uCast< ::g::Uno::Graphics::IndexBuffer*>(NULL, ::TYPES[0/*Uno.Graphics.IndexBuffer*/]) : (::g::Uno::Graphics::IndexBuffer*)uPtr(Indices())->IndexBuffer();
}

// public Uno.Graphics.IndexType get_IndexType() [instance] :122
int Batch::IndexType()
{
    uStackFrame __("Fuse.Drawing.Batching.Batch", "get_IndexType()");
    return (indexBuffer == NULL) ? 0 : uPtr(Indices())->DataType();
}

// public Fuse.Drawing.Batching.BatchIndexBuffer get_Indices() [instance] :86
::g::Fuse::Drawing::Batching::BatchIndexBuffer* Batch::Indices()
{
    ::g::Fuse::Drawing::Batching::BatchIndexBuffer* ind25 = indexBuffer;
    return (ind25 != NULL) ? ind25 : (::g::Fuse::Drawing::Batching::BatchIndexBuffer*)(indexBuffer = ::g::Fuse::Drawing::Batching::BatchIndexBuffer::New1(2, maxIndices, staticBatch));
}

// public void set_Indices(Fuse.Drawing.Batching.BatchIndexBuffer value) [instance] :86
void Batch::Indices(::g::Fuse::Drawing::Batching::BatchIndexBuffer* value)
{
    indexBuffer = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_InstanceIndices() [instance] :63
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::InstanceIndices()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind14 = instanceIndex;
    return (ind14 != NULL) ? ind14 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(instanceIndex = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(11, maxVertices, staticBatch));
}

// public void set_InstanceIndices(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :63
void Batch::InstanceIndices(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    instanceIndex = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Normals() [instance] :59
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::Normals()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind10 = normals;
    return (ind10 != NULL) ? ind10 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(normals = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(3, maxVertices, staticBatch));
}

// public void set_Normals(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :59
void Batch::Normals(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    normals = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Positions() [instance] :50
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::Positions()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind1 = positions;
    return (ind1 != NULL) ? ind1 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(positions = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(3, maxVertices, staticBatch));
}

// public void set_Positions(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :50
void Batch::Positions(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    positions = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_Tangents() [instance] :61
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::Tangents()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind12 = tangents;
    return (ind12 != NULL) ? ind12 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(tangents = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(4, maxVertices, staticBatch));
}

// public void set_Tangents(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :61
void Batch::Tangents(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    tangents = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord0s() [instance] :51
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::TexCoord0s()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind2 = texCoord0s;
    return (ind2 != NULL) ? ind2 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(texCoord0s = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(2, maxVertices, staticBatch));
}

// public void set_TexCoord0s(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :51
void Batch::TexCoord0s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    texCoord0s = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord1s() [instance] :52
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::TexCoord1s()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind3 = texCoord1s;
    return (ind3 != NULL) ? ind3 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(texCoord1s = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(2, maxVertices, staticBatch));
}

// public void set_TexCoord1s(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :52
void Batch::TexCoord1s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    texCoord1s = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord2s() [instance] :53
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::TexCoord2s()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind4 = texCoord2s;
    return (ind4 != NULL) ? ind4 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(texCoord2s = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(2, maxVertices, staticBatch));
}

// public void set_TexCoord2s(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :53
void Batch::TexCoord2s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    texCoord2s = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord3s() [instance] :54
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::TexCoord3s()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind5 = texCoord3s;
    return (ind5 != NULL) ? ind5 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(texCoord3s = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(2, maxVertices, staticBatch));
}

// public void set_TexCoord3s(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :54
void Batch::TexCoord3s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    texCoord3s = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord4s() [instance] :55
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::TexCoord4s()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind6 = texCoord4s;
    return (ind6 != NULL) ? ind6 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(texCoord4s = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(2, maxVertices, staticBatch));
}

// public void set_TexCoord4s(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :55
void Batch::TexCoord4s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    texCoord4s = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord5s() [instance] :56
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::TexCoord5s()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind7 = texCoord5s;
    return (ind7 != NULL) ? ind7 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(texCoord5s = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(2, maxVertices, staticBatch));
}

// public void set_TexCoord5s(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :56
void Batch::TexCoord5s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    texCoord5s = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord6s() [instance] :57
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::TexCoord6s()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind8 = texCoord6s;
    return (ind8 != NULL) ? ind8 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(texCoord6s = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(2, maxVertices, staticBatch));
}

// public void set_TexCoord6s(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :57
void Batch::TexCoord6s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    texCoord6s = value;
}

// public Fuse.Drawing.Batching.BatchVertexBuffer get_TexCoord7s() [instance] :58
::g::Fuse::Drawing::Batching::BatchVertexBuffer* Batch::TexCoord7s()
{
    ::g::Fuse::Drawing::Batching::BatchVertexBuffer* ind9 = texCoord7s;
    return (ind9 != NULL) ? ind9 : (::g::Fuse::Drawing::Batching::BatchVertexBuffer*)(texCoord7s = ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New1(2, maxVertices, staticBatch));
}

// public void set_TexCoord7s(Fuse.Drawing.Batching.BatchVertexBuffer value) [instance] :58
void Batch::TexCoord7s(::g::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    texCoord7s = value;
}

// public int get_VertexCount() [instance] :80
int Batch::VertexCount()
{
    return hasExplicitVertexCount ? explicitVertexCount : maxIndices;
}

// public void set_VertexCount(int value) [instance] :81
void Batch::VertexCount(int value)
{
    hasExplicitVertexCount = true;
    explicitVertexCount = value;
}

// public Batch New(int maxVertices, int maxIndices, bool staticBatch) [static] :17
Batch* Batch::New1(int maxVertices1, int maxIndices1, bool staticBatch1)
{
    Batch* obj26 = (Batch*)uNew(Batch_typeof());
    obj26->ctor_(maxVertices1, maxIndices1, staticBatch1);
    return obj26;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Batching/0.42.4/$.uno
// ------------------------------------------------------------------------------------------------

// public static class BatchHelpers :139
// {
static void BatchHelpers_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unsupported index type");
    ::STRINGS[1] = uString::Const("Unsupported vertex attribute type");
    ::STRINGS[2] = uString::Const("Position");
    ::STRINGS[3] = uString::Const("TexCoord");
    ::STRINGS[4] = uString::Const("TexCoord1");
    ::STRINGS[5] = uString::Const("TexCoord2");
    ::STRINGS[6] = uString::Const("TexCoord3");
    ::STRINGS[7] = uString::Const("TexCoord4");
    ::STRINGS[8] = uString::Const("TexCoord5");
    ::STRINGS[9] = uString::Const("TexCoord6");
    ::STRINGS[10] = uString::Const("TexCoord7");
    ::STRINGS[11] = uString::Const("Normal");
    ::STRINGS[12] = uString::Const("Tangent");
    ::STRINGS[13] = uString::Const("Binormal");
    ::STRINGS[14] = uString::Const("Color");
    ::STRINGS[15] = uString::Const("TransformIndex");
    ::STRINGS[16] = uString::Const("BoneWeights");
    ::STRINGS[17] = uString::Const("BoneIndices");
    ::TYPES[1] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof(), NULL), NULL);
    ::TYPES[2] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof(), NULL), NULL);
    ::TYPES[4] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof(), NULL);
    type->Reflection.SetFunctions(3,
        new uFunction("CreateBatchIndexBuffer", NULL, (void*)BatchHelpers__CreateBatchIndexBuffer_fn, 0, true, ::g::Fuse::Drawing::Batching::BatchIndexBuffer_typeof(), 1, ::g::Uno::Content::Models::IndexArray_typeof()),
        new uFunction("CreateBatchVertexBuffer", NULL, (void*)BatchHelpers__CreateBatchVertexBuffer_fn, 0, true, ::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof(), 1, ::g::Uno::Content::Models::VertexAttributeArray_typeof()),
        new uFunction("CreateSingleBatch", NULL, (void*)BatchHelpers__CreateSingleBatch_fn, 0, true, ::g::Fuse::Drawing::Batching::Batch_typeof(), 1, ::g::Uno::Content::Models::ModelMesh_typeof()));
}

uClassType* BatchHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.Batching.BatchHelpers", options);
    type->fp_build_ = BatchHelpers_build;
    return type;
}

// public static Fuse.Drawing.Batching.BatchIndexBuffer CreateBatchIndexBuffer(Uno.Content.Models.IndexArray array) :210
void BatchHelpers__CreateBatchIndexBuffer_fn(::g::Uno::Content::Models::IndexArray* array, ::g::Fuse::Drawing::Batching::BatchIndexBuffer** __retval)
{
    *__retval = BatchHelpers::CreateBatchIndexBuffer(array);
}

// public static Fuse.Drawing.Batching.BatchVertexBuffer CreateBatchVertexBuffer(Uno.Content.Models.VertexAttributeArray array) :181
void BatchHelpers__CreateBatchVertexBuffer_fn(::g::Uno::Content::Models::VertexAttributeArray* array, ::g::Fuse::Drawing::Batching::BatchVertexBuffer** __retval)
{
    *__retval = BatchHelpers::CreateBatchVertexBuffer(array);
}

// public static Fuse.Drawing.Batching.Batch CreateSingleBatch(Uno.Content.Models.ModelMesh m) :141
void BatchHelpers__CreateSingleBatch_fn(::g::Uno::Content::Models::ModelMesh* m, ::g::Fuse::Drawing::Batching::Batch** __retval)
{
    *__retval = BatchHelpers::CreateSingleBatch(m);
}

// public static Fuse.Drawing.Batching.BatchIndexBuffer CreateBatchIndexBuffer(Uno.Content.Models.IndexArray array) [static] :210
::g::Fuse::Drawing::Batching::BatchIndexBuffer* BatchHelpers::CreateBatchIndexBuffer(::g::Uno::Content::Models::IndexArray* array)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchHelpers", "CreateBatchIndexBuffer(Uno.Content.Models.IndexArray)");

    switch (uPtr(array)->Type())
    {
        case 1:
            return ::g::Fuse::Drawing::Batching::BatchIndexBuffer::New2(uPtr(array)->Type(), uPtr(array)->Buffer());
        case 2:
            return ::g::Fuse::Drawing::Batching::BatchIndexBuffer::New2(uPtr(array)->Type(), uPtr(array)->Buffer());
        case 4:
            return ::g::Fuse::Drawing::Batching::BatchIndexBuffer::New2(uPtr(array)->Type(), uPtr(array)->Buffer());
        default:
            U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Unsupported...*/]));
    }
}

// public static Fuse.Drawing.Batching.BatchVertexBuffer CreateBatchVertexBuffer(Uno.Content.Models.VertexAttributeArray array) [static] :181
::g::Fuse::Drawing::Batching::BatchVertexBuffer* BatchHelpers::CreateBatchVertexBuffer(::g::Uno::Content::Models::VertexAttributeArray* array)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchHelpers", "CreateBatchVertexBuffer(Uno.Content.Models.VertexAttributeArray)");

    switch (uPtr(array)->Type())
    {
        case 1:
            return ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New2(uPtr(array)->Type(), uPtr(array)->Buffer());
        case 2:
            return ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New2(uPtr(array)->Type(), uPtr(array)->Buffer());
        case 3:
            return ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New2(uPtr(array)->Type(), uPtr(array)->Buffer());
        case 4:
            return ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New2(uPtr(array)->Type(), uPtr(array)->Buffer());
        case 17:
        case 18:
            return ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New2(uPtr(array)->Type(), uPtr(array)->Buffer());
        case 19:
        case 20:
            return ::g::Fuse::Drawing::Batching::BatchVertexBuffer::New2(uPtr(array)->Type(), uPtr(array)->Buffer());
        default:
            U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"Unsupported...*/]));
    }
}

// public static Fuse.Drawing.Batching.Batch CreateSingleBatch(Uno.Content.Models.ModelMesh m) [static] :141
::g::Fuse::Drawing::Batching::Batch* BatchHelpers::CreateSingleBatch(::g::Uno::Content::Models::ModelMesh* m)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchHelpers", "CreateSingleBatch(Uno.Content.Models.ModelMesh)");
    ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> > ret2;
    ::g::Fuse::Drawing::Batching::Batch* b;

    if (uPtr(m)->Indices() != NULL)
    {
        b = ::g::Fuse::Drawing::Batching::Batch::New1(uPtr(m)->VertexCount(), uPtr(m)->IndexCount(), true);
        b->Indices(BatchHelpers::CreateBatchIndexBuffer(m->Indices()));
    }
    else
    {
        b = ::g::Fuse::Drawing::Batching::Batch::New1(uPtr(m)->VertexCount(), uPtr(m)->VertexCount(), true);

        for (int i = 0; i < m->VertexCount(); i++)
            uPtr(uPtr(b)->Indices())->Write1((uint16_t)i);
    }

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(m)->VertexAttributes()), ::TYPES[1/*Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[2/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> > v = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>>*/]), &ret2), ret2);

        if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[2/*"Position"*/]))
            uPtr(b)->Positions(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[3/*"TexCoord"*/]))
            uPtr(b)->TexCoord0s(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[4/*"TexCoord1"*/]))
            uPtr(b)->TexCoord1s(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[5/*"TexCoord2"*/]))
            uPtr(b)->TexCoord2s(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[6/*"TexCoord3"*/]))
            uPtr(b)->TexCoord3s(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[7/*"TexCoord4"*/]))
            uPtr(b)->TexCoord4s(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[8/*"TexCoord5"*/]))
            uPtr(b)->TexCoord5s(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[9/*"TexCoord6"*/]))
            uPtr(b)->TexCoord6s(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[10/*"TexCoord7"*/]))
            uPtr(b)->TexCoord7s(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[11/*"Normal"*/]))
            uPtr(b)->Normals(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[12/*"Tangent"*/]))
            uPtr(b)->Tangents(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[13/*"Binormal"*/]))
            uPtr(b)->Binormals(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[14/*"Color"*/]))
            uPtr(b)->Colors(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[15/*"TransformIn...*/]))
            uPtr(b)->InstanceIndices(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[16/*"BoneWeights"*/]))
            uPtr(b)->BoneWeightBuffer(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
        else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[17/*"BoneIndices"*/]))
            uPtr(b)->BoneIndexBuffer(BatchHelpers::CreateBatchVertexBuffer(v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/])));
    }

    return b;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Batching/0.42.4/$.uno
// ------------------------------------------------------------------------------------------------

// public sealed class BatchIndexBuffer :241
// {
static void BatchIndexBuffer_build(uType* type)
{
    ::STRINGS[18] = uString::Const("Index type cannot be changed after buffer is written to");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchIndexBuffer, _position), 0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchIndexBuffer, buf), 0,
        ::g::Uno::Graphics::IndexType_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchIndexBuffer, dataType), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchIndexBuffer, ibo), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchIndexBuffer, isDirty), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchIndexBuffer, maxIndices), 0,
        ::g::Uno::Graphics::BufferUsage_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchIndexBuffer, usage), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_Buffer", NULL, (void*)BatchIndexBuffer__get_Buffer_fn, 0, false, ::g::Uno::Buffer_typeof(), 0),
        new uFunction("get_DataType", NULL, (void*)BatchIndexBuffer__get_DataType_fn, 0, false, ::g::Uno::Graphics::IndexType_typeof(), 0),
        new uFunction("set_DataType", NULL, (void*)BatchIndexBuffer__set_DataType_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::IndexType_typeof()),
        new uFunction("Flush", NULL, (void*)BatchIndexBuffer__Flush_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_IndexBuffer", NULL, (void*)BatchIndexBuffer__get_IndexBuffer_fn, 0, false, ::g::Uno::Graphics::IndexBuffer_typeof(), 0),
        new uFunction("Invalidate", NULL, (void*)BatchIndexBuffer__Invalidate_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)BatchIndexBuffer__New1_fn, 0, true, type, 3, ::g::Uno::Graphics::IndexType_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)BatchIndexBuffer__New2_fn, 0, true, type, 2, ::g::Uno::Graphics::IndexType_typeof(), ::g::Uno::Buffer_typeof()),
        new uFunction("get_Position", NULL, (void*)BatchIndexBuffer__get_Position_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Position", NULL, (void*)BatchIndexBuffer__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_StrideInBytes", NULL, (void*)BatchIndexBuffer__get_StrideInBytes_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("Write", NULL, (void*)BatchIndexBuffer__Write_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Byte_typeof()),
        new uFunction("Write", NULL, (void*)BatchIndexBuffer__Write1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UShort_typeof()));
}

uType* BatchIndexBuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(BatchIndexBuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Batching.BatchIndexBuffer", options);
    type->fp_build_ = BatchIndexBuffer_build;
    return type;
}

// public BatchIndexBuffer(Uno.Graphics.IndexType type, int maxIndices, bool staticBatch) :260
void BatchIndexBuffer__ctor__fn(BatchIndexBuffer* __this, int* type, int* maxIndices1, bool* staticBatch)
{
    __this->ctor_(*type, *maxIndices1, *staticBatch);
}

// public BatchIndexBuffer(Uno.Graphics.IndexType type, Uno.Buffer data) :267
void BatchIndexBuffer__ctor_1_fn(BatchIndexBuffer* __this, int* type, ::g::Uno::Buffer* data)
{
    __this->ctor_1(*type, data);
}

// public Uno.Buffer get_Buffer() :279
void BatchIndexBuffer__get_Buffer_fn(BatchIndexBuffer* __this, ::g::Uno::Buffer** __retval)
{
    *__retval = __this->Buffer();
}

// public Uno.Graphics.IndexType get_DataType() :246
void BatchIndexBuffer__get_DataType_fn(BatchIndexBuffer* __this, int* __retval)
{
    *__retval = __this->DataType();
}

// public void set_DataType(Uno.Graphics.IndexType value) :247
void BatchIndexBuffer__set_DataType_fn(BatchIndexBuffer* __this, int* value)
{
    __this->DataType(*value);
}

// public void Flush() :323
void BatchIndexBuffer__Flush_fn(BatchIndexBuffer* __this)
{
    __this->Flush();
}

// public Uno.Graphics.IndexBuffer get_IndexBuffer() :309
void BatchIndexBuffer__get_IndexBuffer_fn(BatchIndexBuffer* __this, ::g::Uno::Graphics::IndexBuffer** __retval)
{
    *__retval = __this->IndexBuffer();
}

// public void Invalidate() :332
void BatchIndexBuffer__Invalidate_fn(BatchIndexBuffer* __this)
{
    __this->Invalidate();
}

// public BatchIndexBuffer New(Uno.Graphics.IndexType type, int maxIndices, bool staticBatch) :260
void BatchIndexBuffer__New1_fn(int* type, int* maxIndices1, bool* staticBatch, BatchIndexBuffer** __retval)
{
    *__retval = BatchIndexBuffer::New1(*type, *maxIndices1, *staticBatch);
}

// public BatchIndexBuffer New(Uno.Graphics.IndexType type, Uno.Buffer data) :267
void BatchIndexBuffer__New2_fn(int* type, ::g::Uno::Buffer* data, BatchIndexBuffer** __retval)
{
    *__retval = BatchIndexBuffer::New2(*type, data);
}

// public int get_Position() :289
void BatchIndexBuffer__get_Position_fn(BatchIndexBuffer* __this, int* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(int value) :290
void BatchIndexBuffer__set_Position_fn(BatchIndexBuffer* __this, int* value)
{
    __this->Position(*value);
}

// public int get_StrideInBytes() :254
void BatchIndexBuffer__get_StrideInBytes_fn(BatchIndexBuffer* __this, int* __retval)
{
    *__retval = __this->StrideInBytes();
}

// public void Write(byte value) :293
void BatchIndexBuffer__Write_fn(BatchIndexBuffer* __this, uint8_t* value)
{
    __this->Write(*value);
}

// public void Write(ushort value) :299
void BatchIndexBuffer__Write1_fn(BatchIndexBuffer* __this, uint16_t* value)
{
    __this->Write1(*value);
}

// public BatchIndexBuffer(Uno.Graphics.IndexType type, int maxIndices, bool staticBatch) [instance] :260
void BatchIndexBuffer::ctor_(int type, int maxIndices1, bool staticBatch)
{
    isDirty = true;
    dataType = type;
    maxIndices = maxIndices1;
    usage = (staticBatch ? 0 : 1);
}

// public BatchIndexBuffer(Uno.Graphics.IndexType type, Uno.Buffer data) [instance] :267
void BatchIndexBuffer::ctor_1(int type, ::g::Uno::Buffer* data)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchIndexBuffer", ".ctor(Uno.Graphics.IndexType,Uno.Buffer)");
    isDirty = true;
    DataType(type);
    usage = 0;
    buf = ::g::Uno::Buffer::New4(uPtr(data)->SizeInBytes());

    for (int i = 0; i < uPtr(buf)->SizeInBytes(); i++)
        uPtr(buf)->Item(i, uPtr(data)->Item(i));
}

// public Uno.Buffer get_Buffer() [instance] :279
::g::Uno::Buffer* BatchIndexBuffer::Buffer()
{
    if (buf == NULL)
        buf = ::g::Uno::Buffer::New4(maxIndices * StrideInBytes());

    return buf;
}

// public Uno.Graphics.IndexType get_DataType() [instance] :246
int BatchIndexBuffer::DataType()
{
    return dataType;
}

// public void set_DataType(Uno.Graphics.IndexType value) [instance] :247
void BatchIndexBuffer::DataType(int value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchIndexBuffer", "set_DataType(Uno.Graphics.IndexType)");

    if (buf != NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[18/*"Index type ...*/]));

    dataType = value;
}

// public void Flush() [instance] :323
void BatchIndexBuffer::Flush()
{
    uStackFrame __("Fuse.Drawing.Batching.BatchIndexBuffer", "Flush()");

    if ((buf != NULL) && isDirty)
    {
        uPtr(ibo)->Update(buf);
        isDirty = false;
    }
}

// public Uno.Graphics.IndexBuffer get_IndexBuffer() [instance] :309
::g::Uno::Graphics::IndexBuffer* BatchIndexBuffer::IndexBuffer()
{
    uStackFrame __("Fuse.Drawing.Batching.BatchIndexBuffer", "get_IndexBuffer()");

    if (buf == NULL)
        return NULL;

    if (ibo == NULL)
        ibo = ::g::Uno::Graphics::IndexBuffer::New1(uPtr(Buffer())->SizeInBytes(), usage);

    Flush();
    return ibo;
}

// public void Invalidate() [instance] :332
void BatchIndexBuffer::Invalidate()
{
    isDirty = true;
}

// public int get_Position() [instance] :289
int BatchIndexBuffer::Position()
{
    return _position;
}

// public void set_Position(int value) [instance] :290
void BatchIndexBuffer::Position(int value)
{
    _position = value;
}

// public int get_StrideInBytes() [instance] :254
int BatchIndexBuffer::StrideInBytes()
{
    uStackFrame __("Fuse.Drawing.Batching.BatchIndexBuffer", "get_StrideInBytes()");
    return ::g::Uno::Graphics::IndexTypeHelpers::GetStrideInBytes(DataType());
}

// public void Write(byte value) [instance] :293
void BatchIndexBuffer::Write(uint8_t value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchIndexBuffer", "Write(byte)");
    uPtr(Buffer())->Set(_position, value);
    _position = (_position + 1);
}

// public void Write(ushort value) [instance] :299
void BatchIndexBuffer::Write1(uint16_t value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchIndexBuffer", "Write(ushort)");
    uPtr(Buffer())->Set23(_position, value, true);
    _position = (_position + 2);
}

// public BatchIndexBuffer New(Uno.Graphics.IndexType type, int maxIndices, bool staticBatch) [static] :260
BatchIndexBuffer* BatchIndexBuffer::New1(int type, int maxIndices1, bool staticBatch)
{
    BatchIndexBuffer* obj1 = (BatchIndexBuffer*)uNew(BatchIndexBuffer_typeof());
    obj1->ctor_(type, maxIndices1, staticBatch);
    return obj1;
}

// public BatchIndexBuffer New(Uno.Graphics.IndexType type, Uno.Buffer data) [static] :267
BatchIndexBuffer* BatchIndexBuffer::New2(int type, ::g::Uno::Buffer* data)
{
    BatchIndexBuffer* obj2 = (BatchIndexBuffer*)uNew(BatchIndexBuffer_typeof());
    obj2->ctor_1(type, data);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Batching/0.42.4/$.uno
// ------------------------------------------------------------------------------------------------

// public sealed class BatchVertexBuffer :351
// {
static void BatchVertexBuffer_build(uType* type)
{
    ::STRINGS[19] = uString::Const("Vertex attribute type cannot be changed after Bufferfer is written to");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchVertexBuffer, _position), 0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchVertexBuffer, buf), 0,
        ::g::Uno::Graphics::VertexAttributeType_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchVertexBuffer, dataType), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchVertexBuffer, isDirty), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchVertexBuffer, maxVertices), 0,
        ::g::Uno::Graphics::BufferUsage_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchVertexBuffer, usage), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Batching::BatchVertexBuffer, vbo), 0);
    type->Reflection.SetFunctions(31,
        new uFunction("get_Buffer", NULL, (void*)BatchVertexBuffer__get_Buffer_fn, 0, false, ::g::Uno::Buffer_typeof(), 0),
        new uFunction("get_DataType", NULL, (void*)BatchVertexBuffer__get_DataType_fn, 0, false, ::g::Uno::Graphics::VertexAttributeType_typeof(), 0),
        new uFunction("set_DataType", NULL, (void*)BatchVertexBuffer__set_DataType_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::VertexAttributeType_typeof()),
        new uFunction("Flush", NULL, (void*)BatchVertexBuffer__Flush_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Invalidate", NULL, (void*)BatchVertexBuffer__Invalidate_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)BatchVertexBuffer__New1_fn, 0, true, type, 3, ::g::Uno::Graphics::VertexAttributeType_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)BatchVertexBuffer__New2_fn, 0, true, type, 2, ::g::Uno::Graphics::VertexAttributeType_typeof(), ::g::Uno::Buffer_typeof()),
        new uFunction("get_Position", NULL, (void*)BatchVertexBuffer__get_Position_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Position", NULL, (void*)BatchVertexBuffer__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_StrideInBytes", NULL, (void*)BatchVertexBuffer__get_StrideInBytes_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_VertexBuffer", NULL, (void*)BatchVertexBuffer__get_VertexBuffer_fn, 0, false, ::g::Uno::Graphics::VertexBuffer_typeof(), 0),
        new uFunction("Write", NULL, (void*)BatchVertexBuffer__Write_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Byte_typeof()),
        new uFunction("Write", NULL, (void*)BatchVertexBuffer__Write1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Byte2_typeof()),
        new uFunction("Write", NULL, (void*)BatchVertexBuffer__Write2_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Byte4_typeof()),
        new uFunction("Write", NULL, (void*)BatchVertexBuffer__Write3_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Write", NULL, (void*)BatchVertexBuffer__Write4_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("Write", NULL, (void*)BatchVertexBuffer__Write5_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("Write", NULL, (void*)BatchVertexBuffer__Write6_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Write", NULL, (void*)BatchVertexBuffer__Write7_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction("Write", NULL, (void*)BatchVertexBuffer__Write8_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int3_typeof()),
        new uFunction("Write", NULL, (void*)BatchVertexBuffer__Write9_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int4_typeof()),
        new uFunction("Write", NULL, (void*)BatchVertexBuffer__Write10_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::SByte_typeof()),
        new uFunction("Write", NULL, (void*)BatchVertexBuffer__Write11_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::SByte2_typeof()),
        new uFunction("Write", NULL, (void*)BatchVertexBuffer__Write12_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::SByte4_typeof()),
        new uFunction("Write", NULL, (void*)BatchVertexBuffer__Write13_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Short_typeof()),
        new uFunction("Write", NULL, (void*)BatchVertexBuffer__Write14_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Short2_typeof()),
        new uFunction("Write", NULL, (void*)BatchVertexBuffer__Write15_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Short4_typeof()),
        new uFunction("Write", NULL, (void*)BatchVertexBuffer__Write16_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UInt_typeof()),
        new uFunction("Write", NULL, (void*)BatchVertexBuffer__Write17_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UShort_typeof()),
        new uFunction("Write", NULL, (void*)BatchVertexBuffer__Write18_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UShort2_typeof()),
        new uFunction("Write", NULL, (void*)BatchVertexBuffer__Write19_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UShort4_typeof()));
}

uType* BatchVertexBuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(BatchVertexBuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Batching.BatchVertexBuffer", options);
    type->fp_build_ = BatchVertexBuffer_build;
    return type;
}

// public BatchVertexBuffer(Uno.Graphics.VertexAttributeType type, int maxVertices, bool staticBatch) :369
void BatchVertexBuffer__ctor__fn(BatchVertexBuffer* __this, int* type, int* maxVertices1, bool* staticBatch)
{
    __this->ctor_(*type, *maxVertices1, *staticBatch);
}

// public BatchVertexBuffer(Uno.Graphics.VertexAttributeType type, Uno.Buffer data) :376
void BatchVertexBuffer__ctor_1_fn(BatchVertexBuffer* __this, int* type, ::g::Uno::Buffer* data)
{
    __this->ctor_1(*type, data);
}

// public Uno.Buffer get_Buffer() :390
void BatchVertexBuffer__get_Buffer_fn(BatchVertexBuffer* __this, ::g::Uno::Buffer** __retval)
{
    *__retval = __this->Buffer();
}

// public Uno.Graphics.VertexAttributeType get_DataType() :356
void BatchVertexBuffer__get_DataType_fn(BatchVertexBuffer* __this, int* __retval)
{
    *__retval = __this->DataType();
}

// public void set_DataType(Uno.Graphics.VertexAttributeType value) :357
void BatchVertexBuffer__set_DataType_fn(BatchVertexBuffer* __this, int* value)
{
    __this->DataType(*value);
}

// public void Flush() :537
void BatchVertexBuffer__Flush_fn(BatchVertexBuffer* __this)
{
    __this->Flush();
}

// public void Invalidate() :549
void BatchVertexBuffer__Invalidate_fn(BatchVertexBuffer* __this)
{
    __this->Invalidate();
}

// public BatchVertexBuffer New(Uno.Graphics.VertexAttributeType type, int maxVertices, bool staticBatch) :369
void BatchVertexBuffer__New1_fn(int* type, int* maxVertices1, bool* staticBatch, BatchVertexBuffer** __retval)
{
    *__retval = BatchVertexBuffer::New1(*type, *maxVertices1, *staticBatch);
}

// public BatchVertexBuffer New(Uno.Graphics.VertexAttributeType type, Uno.Buffer data) :376
void BatchVertexBuffer__New2_fn(int* type, ::g::Uno::Buffer* data, BatchVertexBuffer** __retval)
{
    *__retval = BatchVertexBuffer::New2(*type, data);
}

// public int get_Position() :412
void BatchVertexBuffer__get_Position_fn(BatchVertexBuffer* __this, int* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(int value) :413
void BatchVertexBuffer__set_Position_fn(BatchVertexBuffer* __this, int* value)
{
    __this->Position(*value);
}

// public int get_StrideInBytes() :364
void BatchVertexBuffer__get_StrideInBytes_fn(BatchVertexBuffer* __this, int* __retval)
{
    *__retval = __this->StrideInBytes();
}

// public Uno.Graphics.VertexBuffer get_VertexBuffer() :400
void BatchVertexBuffer__get_VertexBuffer_fn(BatchVertexBuffer* __this, ::g::Uno::Graphics::VertexBuffer** __retval)
{
    *__retval = __this->VertexBuffer();
}

// public void Write(byte value) :434
void BatchVertexBuffer__Write_fn(BatchVertexBuffer* __this, uint8_t* value)
{
    __this->Write(*value);
}

// public void Write(byte2 value) :440
void BatchVertexBuffer__Write1_fn(BatchVertexBuffer* __this, ::g::Uno::Byte2* value)
{
    __this->Write1(*value);
}

// public void Write(byte4 value) :446
void BatchVertexBuffer__Write2_fn(BatchVertexBuffer* __this, ::g::Uno::Byte4* value)
{
    __this->Write2(*value);
}

// public void Write(float2 value) :416
void BatchVertexBuffer__Write3_fn(BatchVertexBuffer* __this, ::g::Uno::Float2* value)
{
    __this->Write3(*value);
}

// public void Write(float3 value) :422
void BatchVertexBuffer__Write4_fn(BatchVertexBuffer* __this, ::g::Uno::Float3* value)
{
    __this->Write4(*value);
}

// public void Write(float4 value) :428
void BatchVertexBuffer__Write5_fn(BatchVertexBuffer* __this, ::g::Uno::Float4* value)
{
    __this->Write5(*value);
}

// public void Write(int value) :512
void BatchVertexBuffer__Write6_fn(BatchVertexBuffer* __this, int* value)
{
    __this->Write6(*value);
}

// public void Write(int2 value) :518
void BatchVertexBuffer__Write7_fn(BatchVertexBuffer* __this, ::g::Uno::Int2* value)
{
    __this->Write7(*value);
}

// public void Write(int3 value) :524
void BatchVertexBuffer__Write8_fn(BatchVertexBuffer* __this, ::g::Uno::Int3* value)
{
    __this->Write8(*value);
}

// public void Write(int4 value) :530
void BatchVertexBuffer__Write9_fn(BatchVertexBuffer* __this, ::g::Uno::Int4* value)
{
    __this->Write9(*value);
}

// public void Write(sbyte value) :452
void BatchVertexBuffer__Write10_fn(BatchVertexBuffer* __this, int8_t* value)
{
    __this->Write10(*value);
}

// public void Write(sbyte2 value) :458
void BatchVertexBuffer__Write11_fn(BatchVertexBuffer* __this, ::g::Uno::SByte2* value)
{
    __this->Write11(*value);
}

// public void Write(sbyte4 value) :464
void BatchVertexBuffer__Write12_fn(BatchVertexBuffer* __this, ::g::Uno::SByte4* value)
{
    __this->Write12(*value);
}

// public void Write(short value) :488
void BatchVertexBuffer__Write13_fn(BatchVertexBuffer* __this, int16_t* value)
{
    __this->Write13(*value);
}

// public void Write(short2 value) :494
void BatchVertexBuffer__Write14_fn(BatchVertexBuffer* __this, ::g::Uno::Short2* value)
{
    __this->Write14(*value);
}

// public void Write(short4 value) :500
void BatchVertexBuffer__Write15_fn(BatchVertexBuffer* __this, ::g::Uno::Short4* value)
{
    __this->Write15(*value);
}

// public void Write(uint value) :506
void BatchVertexBuffer__Write16_fn(BatchVertexBuffer* __this, uint32_t* value)
{
    __this->Write16(*value);
}

// public void Write(ushort value) :470
void BatchVertexBuffer__Write17_fn(BatchVertexBuffer* __this, uint16_t* value)
{
    __this->Write17(*value);
}

// public void Write(ushort2 value) :476
void BatchVertexBuffer__Write18_fn(BatchVertexBuffer* __this, ::g::Uno::UShort2* value)
{
    __this->Write18(*value);
}

// public void Write(ushort4 value) :482
void BatchVertexBuffer__Write19_fn(BatchVertexBuffer* __this, ::g::Uno::UShort4* value)
{
    __this->Write19(*value);
}

// public BatchVertexBuffer(Uno.Graphics.VertexAttributeType type, int maxVertices, bool staticBatch) [instance] :369
void BatchVertexBuffer::ctor_(int type, int maxVertices1, bool staticBatch)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", ".ctor(Uno.Graphics.VertexAttributeType,int,bool)");
    isDirty = true;
    DataType(type);
    maxVertices = maxVertices1;
    usage = (staticBatch ? 0 : 1);
}

// public BatchVertexBuffer(Uno.Graphics.VertexAttributeType type, Uno.Buffer data) [instance] :376
void BatchVertexBuffer::ctor_1(int type, ::g::Uno::Buffer* data)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", ".ctor(Uno.Graphics.VertexAttributeType,Uno.Buffer)");
    isDirty = true;
    DataType(type);
    usage = 0;
    buf = ::g::Uno::Buffer::New4(uPtr(data)->SizeInBytes());

    for (int i = 0; i < uPtr(buf)->SizeInBytes(); i++)
        uPtr(buf)->Item(i, uPtr(data)->Item(i));
}

// public Uno.Buffer get_Buffer() [instance] :390
::g::Uno::Buffer* BatchVertexBuffer::Buffer()
{
    if (buf == NULL)
        buf = ::g::Uno::Buffer::New4(maxVertices * StrideInBytes());

    return buf;
}

// public Uno.Graphics.VertexAttributeType get_DataType() [instance] :356
int BatchVertexBuffer::DataType()
{
    return dataType;
}

// public void set_DataType(Uno.Graphics.VertexAttributeType value) [instance] :357
void BatchVertexBuffer::DataType(int value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "set_DataType(Uno.Graphics.VertexAttributeType)");

    if (buf != NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[19/*"Vertex attr...*/]));

    dataType = value;
}

// public void Flush() [instance] :537
void BatchVertexBuffer::Flush()
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "Flush()");

    if ((buf != NULL) && isDirty)
    {
        if (vbo == NULL)
            vbo = ::g::Uno::Graphics::VertexBuffer::New1(uPtr(Buffer())->SizeInBytes(), usage);

        uPtr(vbo)->Update(buf);
        isDirty = false;
    }
}

// public void Invalidate() [instance] :549
void BatchVertexBuffer::Invalidate()
{
    isDirty = true;
}

// public int get_Position() [instance] :412
int BatchVertexBuffer::Position()
{
    return _position;
}

// public void set_Position(int value) [instance] :413
void BatchVertexBuffer::Position(int value)
{
    _position = value;
}

// public int get_StrideInBytes() [instance] :364
int BatchVertexBuffer::StrideInBytes()
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "get_StrideInBytes()");
    return ::g::Uno::Graphics::VertexAttributeTypeHelpers::GetStrideInBytes(DataType());
}

// public Uno.Graphics.VertexBuffer get_VertexBuffer() [instance] :400
::g::Uno::Graphics::VertexBuffer* BatchVertexBuffer::VertexBuffer()
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "get_VertexBuffer()");

    if (Buffer() == NULL)
        return NULL;

    Flush();
    return vbo;
}

// public void Write(byte value) [instance] :434
void BatchVertexBuffer::Write(uint8_t value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "Write(byte)");
    uPtr(Buffer())->Set(_position, value);
    _position = (_position + 1);
}

// public void Write(byte2 value) [instance] :440
void BatchVertexBuffer::Write1(::g::Uno::Byte2 value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "Write(byte2)");
    uPtr(Buffer())->Set1(_position, value);
    _position = (_position + 2);
}

// public void Write(byte4 value) [instance] :446
void BatchVertexBuffer::Write2(::g::Uno::Byte4 value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "Write(byte4)");
    uPtr(Buffer())->Set2(_position, value);
    _position = (_position + 4);
}

// public void Write(float2 value) [instance] :416
void BatchVertexBuffer::Write3(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "Write(float2)");
    uPtr(Buffer())->Set5(_position, value, true);
    _position = (_position + 8);
}

// public void Write(float3 value) [instance] :422
void BatchVertexBuffer::Write4(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "Write(float3)");
    uPtr(Buffer())->Set6(_position, value, true);
    _position = (_position + 12);
}

// public void Write(float4 value) [instance] :428
void BatchVertexBuffer::Write5(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "Write(float4)");
    uPtr(Buffer())->Set8(_position, value, true);
    _position = (_position + 16);
}

// public void Write(int value) [instance] :512
void BatchVertexBuffer::Write6(int value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "Write(int)");
    uPtr(Buffer())->Set10(_position, value, true);
    _position = (_position + 4);
}

// public void Write(int2 value) [instance] :518
void BatchVertexBuffer::Write7(::g::Uno::Int2 value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "Write(int2)");
    uPtr(Buffer())->Set11(_position, value, true);
    _position = (_position + 8);
}

// public void Write(int3 value) [instance] :524
void BatchVertexBuffer::Write8(::g::Uno::Int3 value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "Write(int3)");
    uPtr(Buffer())->Set12(_position, value, true);
    _position = (_position + 12);
}

// public void Write(int4 value) [instance] :530
void BatchVertexBuffer::Write9(::g::Uno::Int4 value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "Write(int4)");
    uPtr(Buffer())->Set13(_position, value, true);
    _position = (_position + 16);
}

// public void Write(sbyte value) [instance] :452
void BatchVertexBuffer::Write10(int8_t value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "Write(sbyte)");
    uPtr(Buffer())->Set15(_position, value);
    _position = (_position + 1);
}

// public void Write(sbyte2 value) [instance] :458
void BatchVertexBuffer::Write11(::g::Uno::SByte2 value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "Write(sbyte2)");
    uPtr(Buffer())->Set16(_position, value);
    _position = (_position + 2);
}

// public void Write(sbyte4 value) [instance] :464
void BatchVertexBuffer::Write12(::g::Uno::SByte4 value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "Write(sbyte4)");
    uPtr(Buffer())->Set17(_position, value);
    _position = (_position + 4);
}

// public void Write(short value) [instance] :488
void BatchVertexBuffer::Write13(int16_t value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "Write(short)");
    uPtr(Buffer())->Set18(_position, value, true);
    _position = (_position + 2);
}

// public void Write(short2 value) [instance] :494
void BatchVertexBuffer::Write14(::g::Uno::Short2 value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "Write(short2)");
    uPtr(Buffer())->Set19(_position, value, true);
    _position = (_position + 4);
}

// public void Write(short4 value) [instance] :500
void BatchVertexBuffer::Write15(::g::Uno::Short4 value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "Write(short4)");
    uPtr(Buffer())->Set20(_position, value, true);
    _position = (_position + 8);
}

// public void Write(uint value) [instance] :506
void BatchVertexBuffer::Write16(uint32_t value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "Write(uint)");
    uPtr(Buffer())->Set21(_position, value, true);
    _position = (_position + 4);
}

// public void Write(ushort value) [instance] :470
void BatchVertexBuffer::Write17(uint16_t value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "Write(ushort)");
    uPtr(Buffer())->Set23(_position, value, true);
    _position = (_position + 2);
}

// public void Write(ushort2 value) [instance] :476
void BatchVertexBuffer::Write18(::g::Uno::UShort2 value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "Write(ushort2)");
    uPtr(Buffer())->Set24(_position, value, true);
    _position = (_position + 4);
}

// public void Write(ushort4 value) [instance] :482
void BatchVertexBuffer::Write19(::g::Uno::UShort4 value)
{
    uStackFrame __("Fuse.Drawing.Batching.BatchVertexBuffer", "Write(ushort4)");
    uPtr(Buffer())->Set25(_position, value, true);
    _position = (_position + 8);
}

// public BatchVertexBuffer New(Uno.Graphics.VertexAttributeType type, int maxVertices, bool staticBatch) [static] :369
BatchVertexBuffer* BatchVertexBuffer::New1(int type, int maxVertices1, bool staticBatch)
{
    BatchVertexBuffer* obj1 = (BatchVertexBuffer*)uNew(BatchVertexBuffer_typeof());
    obj1->ctor_(type, maxVertices1, staticBatch);
    return obj1;
}

// public BatchVertexBuffer New(Uno.Graphics.VertexAttributeType type, Uno.Buffer data) [static] :376
BatchVertexBuffer* BatchVertexBuffer::New2(int type, ::g::Uno::Buffer* data)
{
    BatchVertexBuffer* obj2 = (BatchVertexBuffer*)uNew(BatchVertexBuffer_typeof());
    obj2->ctor_1(type, data);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Batching/0.42.4/$.uno
// ------------------------------------------------------------------------------------------------

// internal sealed class Entry :567
// {
static void Entry_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Batching::Entry, InstanceIndex), 0,
        ::g::Uno::Content::Models::ModelMesh_typeof(), offsetof(::g::Fuse::Drawing::Batching::Entry, Mesh), 0);
}

uType* Entry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Entry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Batching.Entry", options);
    type->fp_build_ = Entry_build;
    return type;
}

// public Entry(Uno.Content.Models.ModelMesh m, int instanceId) :571
void Entry__ctor__fn(Entry* __this, ::g::Uno::Content::Models::ModelMesh* m, int* instanceId)
{
    __this->ctor_(m, *instanceId);
}

// public Entry New(Uno.Content.Models.ModelMesh m, int instanceId) :571
void Entry__New1_fn(::g::Uno::Content::Models::ModelMesh* m, int* instanceId, Entry** __retval)
{
    *__retval = Entry::New1(m, *instanceId);
}

// public Entry(Uno.Content.Models.ModelMesh m, int instanceId) [instance] :571
void Entry::ctor_(::g::Uno::Content::Models::ModelMesh* m, int instanceId)
{
    Mesh = m;
    InstanceIndex = instanceId;
}

// public Entry New(Uno.Content.Models.ModelMesh m, int instanceId) [static] :571
Entry* Entry::New1(::g::Uno::Content::Models::ModelMesh* m, int instanceId)
{
    Entry* obj1 = (Entry*)uNew(Entry_typeof());
    obj1->ctor_(m, instanceId);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Batching/0.42.4/$.uno
// ------------------------------------------------------------------------------------------------

// public sealed class MeshBatcher :575
// {
static void MeshBatcher_build(uType* type)
{
    ::STRINGS[2] = uString::Const("Position");
    ::STRINGS[3] = uString::Const("TexCoord");
    ::STRINGS[4] = uString::Const("TexCoord1");
    ::STRINGS[5] = uString::Const("TexCoord2");
    ::STRINGS[6] = uString::Const("TexCoord3");
    ::STRINGS[7] = uString::Const("TexCoord4");
    ::STRINGS[8] = uString::Const("TexCoord5");
    ::STRINGS[9] = uString::Const("TexCoord6");
    ::STRINGS[10] = uString::Const("TexCoord7");
    ::STRINGS[11] = uString::Const("Normal");
    ::STRINGS[12] = uString::Const("Tangent");
    ::STRINGS[13] = uString::Const("Binormal");
    ::STRINGS[14] = uString::Const("Color");
    ::STRINGS[16] = uString::Const("BoneWeights");
    ::STRINGS[17] = uString::Const("BoneIndices");
    ::TYPES[5] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::Batching::Entry_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::UInt_typeof()->Array();
    ::TYPES[7] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof(), NULL), NULL);
    ::TYPES[2] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof(), NULL), NULL);
    ::TYPES[4] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::Batching::Batch_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Batching::Batch_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(9/*Select<Fuse.Drawing.Batching.Entry, Uno.Content.Models.ModelMesh>*/, ::g::Fuse::Drawing::Batching::Entry_typeof(), ::g::Uno::Content::Models::ModelMesh_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Drawing::Batching::Entry_typeof(), ::g::Uno::Content::Models::ModelMesh_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::Drawing::Batching::Batch_typeof()->Array(), offsetof(::g::Fuse::Drawing::Batching::MeshBatcher, batches), 0,
        ::TYPES[5/*Uno.Collections.List<Fuse.Drawing.Batching.Entry>*/], offsetof(::g::Fuse::Drawing::Batching::MeshBatcher, entries), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("AddMesh", NULL, (void*)MeshBatcher__AddMesh_fn, 0, false, ::g::Uno::Int_typeof(), 1, ::g::Uno::Content::Models::ModelMesh_typeof()),
        new uFunction("AddMesh", NULL, (void*)MeshBatcher__AddMesh1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Content::Models::ModelMesh_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("get_BatchCount", NULL, (void*)MeshBatcher__get_BatchCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Batches", NULL, (void*)MeshBatcher__get_Batches_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Batching::Batch_typeof(), NULL), 0),
        new uFunction("get_Entries", NULL, (void*)MeshBatcher__get_Entries_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Content::Models::ModelMesh_typeof(), NULL), 0),
        new uFunction("get_EntryCount", NULL, (void*)MeshBatcher__get_EntryCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("Flush", NULL, (void*)MeshBatcher__Flush_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)MeshBatcher__New1_fn, 0, true, type, 0));
}

uType* MeshBatcher_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(MeshBatcher);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Batching.MeshBatcher", options);
    type->fp_build_ = MeshBatcher_build;
    type->fp_ctor_ = (void*)MeshBatcher__New1_fn;
    return type;
}

// public MeshBatcher() :596
void MeshBatcher__ctor__fn(MeshBatcher* __this)
{
    __this->ctor_();
}

// private int AddEntry(Fuse.Drawing.Batching.Entry e) :608
void MeshBatcher__AddEntry_fn(MeshBatcher* __this, ::g::Fuse::Drawing::Batching::Entry* e, int* __retval)
{
    *__retval = __this->AddEntry(e);
}

// public int AddMesh(Uno.Content.Models.ModelMesh mesh) :598
void MeshBatcher__AddMesh_fn(MeshBatcher* __this, ::g::Uno::Content::Models::ModelMesh* mesh, int* __retval)
{
    *__retval = __this->AddMesh(mesh);
}

// public void AddMesh(Uno.Content.Models.ModelMesh mesh, int instanceId) :603
void MeshBatcher__AddMesh1_fn(MeshBatcher* __this, ::g::Uno::Content::Models::ModelMesh* mesh, int* instanceId)
{
    __this->AddMesh1(mesh, *instanceId);
}

// public int get_BatchCount() :593
void MeshBatcher__get_BatchCount_fn(MeshBatcher* __this, int* __retval)
{
    *__retval = __this->BatchCount();
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Batching.Batch> get_Batches() :590
void MeshBatcher__get_Batches_fn(MeshBatcher* __this, uObject** __retval)
{
    *__retval = __this->Batches();
}

// private static Uno.Content.Models.ModelMesh CreateFakeIndexBuffer(Uno.Content.Models.ModelMesh m) :757
void MeshBatcher__CreateFakeIndexBuffer_fn(::g::Uno::Content::Models::ModelMesh* m, ::g::Uno::Content::Models::ModelMesh** __retval)
{
    *__retval = MeshBatcher::CreateFakeIndexBuffer(m);
}

// public Uno.Collections.IEnumerable<Uno.Content.Models.ModelMesh> get_Entries() :580
void MeshBatcher__get_Entries_fn(MeshBatcher* __this, uObject** __retval)
{
    *__retval = __this->Entries();
}

// public int get_EntryCount() :584
void MeshBatcher__get_EntryCount_fn(MeshBatcher* __this, int* __retval)
{
    *__retval = __this->EntryCount();
}

// public void Flush() :615
void MeshBatcher__Flush_fn(MeshBatcher* __this)
{
    __this->Flush();
}

// private static Uno.Content.Models.ModelMesh Mesh(Fuse.Drawing.Batching.Entry entry) :582
void MeshBatcher__Mesh_fn(::g::Fuse::Drawing::Batching::Entry* entry, ::g::Uno::Content::Models::ModelMesh** __retval)
{
    *__retval = MeshBatcher::Mesh(entry);
}

// public MeshBatcher New() :596
void MeshBatcher__New1_fn(MeshBatcher** __retval)
{
    *__retval = MeshBatcher::New1();
}

// public MeshBatcher() [instance] :596
void MeshBatcher::ctor_()
{
    entries = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[5/*Uno.Collections.List<Fuse.Drawing.Batching.Entry>*/]));
}

// private int AddEntry(Fuse.Drawing.Batching.Entry e) [instance] :608
int MeshBatcher::AddEntry(::g::Fuse::Drawing::Batching::Entry* e)
{
    uStackFrame __("Fuse.Drawing.Batching.MeshBatcher", "AddEntry(Fuse.Drawing.Batching.Entry)");
    ::g::Uno::Collections::List__Add_fn(uPtr(entries), e);
    return uPtr(e)->InstanceIndex;
}

// public int AddMesh(Uno.Content.Models.ModelMesh mesh) [instance] :598
int MeshBatcher::AddMesh(::g::Uno::Content::Models::ModelMesh* mesh)
{
    uStackFrame __("Fuse.Drawing.Batching.MeshBatcher", "AddMesh(Uno.Content.Models.ModelMesh)");
    return AddEntry(::g::Fuse::Drawing::Batching::Entry::New1(mesh, uPtr(entries)->Count()));
}

// public void AddMesh(Uno.Content.Models.ModelMesh mesh, int instanceId) [instance] :603
void MeshBatcher::AddMesh1(::g::Uno::Content::Models::ModelMesh* mesh, int instanceId)
{
    uStackFrame __("Fuse.Drawing.Batching.MeshBatcher", "AddMesh(Uno.Content.Models.ModelMesh,int)");
    AddEntry(::g::Fuse::Drawing::Batching::Entry::New1(mesh, instanceId));
}

// public int get_BatchCount() [instance] :593
int MeshBatcher::BatchCount()
{
    uStackFrame __("Fuse.Drawing.Batching.MeshBatcher", "get_BatchCount()");
    return uPtr(batches)->Length();
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Batching.Batch> get_Batches() [instance] :590
uObject* MeshBatcher::Batches()
{
    uStackFrame __("Fuse.Drawing.Batching.MeshBatcher", "get_Batches()");
    Flush();
    return (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[10/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Drawing.Batching.Batch>*/], batches));
}

// public Uno.Collections.IEnumerable<Uno.Content.Models.ModelMesh> get_Entries() [instance] :580
uObject* MeshBatcher::Entries()
{
    uStackFrame __("Fuse.Drawing.Batching.MeshBatcher", "get_Entries()");
    return (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[11/*Uno.Collections.EnumerableExtensions.Select<Fuse.Drawing.Batching.Entry, Uno.Content.Models.ModelMesh>*/], (uObject*)entries, uDelegate::New(::TYPES[12/*Uno.Func<Fuse.Drawing.Batching.Entry, Uno.Content.Models.ModelMesh>*/], (void*)MeshBatcher__Mesh_fn));
}

// public int get_EntryCount() [instance] :584
int MeshBatcher::EntryCount()
{
    uStackFrame __("Fuse.Drawing.Batching.MeshBatcher", "get_EntryCount()");
    return uPtr(entries)->Count();
}

// public void Flush() [instance] :615
void MeshBatcher::Flush()
{
    uStackFrame __("Fuse.Drawing.Batching.MeshBatcher", "Flush()");
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 ind7;
    ::g::Uno::Float4 ind8;
    ::g::Uno::Float4 ind9;
    ::g::Uno::Float4 ind10;
    ::g::Uno::Float4 ind11;
    ::g::Uno::Float4 ind12;
    ::g::Uno::Float4 ind13;
    ::g::Fuse::Drawing::Batching::Entry* ret16;
    ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> > ret17;
    bool ret18;
    ::g::Fuse::Drawing::Batching::Entry* ret19;

    if (batches != NULL)
        return;

    ::g::Uno::Content::Models::VertexAttributeArray* position, *texcoord, *texcoord1, *texcoord2, *texcoord3, *texcoord4, *texcoord5, *texcoord6, *texcoord7, *normal, *tangent, *binormal, *color, *boneWeights, *boneIndex;
    ::g::Uno::Collections::List* batches1 = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[8/*Uno.Collections.List<Fuse.Drawing.Batching.Batch>*/]);
    ::g::Fuse::Drawing::Batching::Batch* b = NULL;
    int virtualIndexBase = 0;
    ::g::Uno::Collections::Dictionary* virtualIndexToRealIndex = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[9/*Uno.Collections.Dictionary<int, int>*/]);
    int batchVertexCount = 0;
    int batchIndexCount = 0;
    int batchVertexCutoff = 0;
    int batchIndexCutoff = 0;

    for (int e = 0; e < uPtr(entries)->Count(); e++)
    {
        ::g::Uno::Content::Models::ModelMesh* m = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(entries), uCRef<int>(e), &ret16), ret16))->Mesh;
        position = texcoord = texcoord1 = texcoord2 = texcoord3 = texcoord4 = texcoord5 = texcoord6 = texcoord7 = normal = tangent = binormal = color = boneWeights = boneIndex = NULL;

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(m)->VertexAttributes()), ::TYPES[1/*Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[2/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> > v = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>>*/]), &ret17), ret17);

            if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[2/*"Position"*/]))
                position = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[3/*"TexCoord"*/]))
                texcoord = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[4/*"TexCoord1"*/]))
                texcoord1 = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[5/*"TexCoord2"*/]))
                texcoord2 = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[6/*"TexCoord3"*/]))
                texcoord3 = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[7/*"TexCoord4"*/]))
                texcoord4 = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[8/*"TexCoord5"*/]))
                texcoord5 = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[9/*"TexCoord6"*/]))
                texcoord6 = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[10/*"TexCoord7"*/]))
                texcoord7 = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[11/*"Normal"*/]))
                normal = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[12/*"Tangent"*/]))
                tangent = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[13/*"Binormal"*/]))
                binormal = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[14/*"Color"*/]))
                color = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[16/*"BoneWeights"*/]))
                boneWeights = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
            else if (::g::Uno::String::op_Equality(v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), ::STRINGS[17/*"BoneIndices"*/]))
                boneIndex = v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]);
        }

        if (m->Indices() == NULL)
            m = MeshBatcher::CreateFakeIndexBuffer(m);

        for (int i = 0; i < uPtr(m)->IndexCount(); i++)
        {
            if ((batchVertexCount >= batchVertexCutoff) || (batchIndexCount >= batchIndexCutoff))
            {
                batchVertexCutoff = 65535;
                batchIndexCutoff = 100000;
                b = ::g::Fuse::Drawing::Batching::Batch::New1(batchVertexCutoff, batchIndexCutoff, true);
                ::g::Uno::Collections::List__Add_fn(uPtr(batches1), b);
                virtualIndexToRealIndex = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[9/*Uno.Collections.Dictionary<int, int>*/]);
                batchVertexCount = 0;
                batchIndexCount = 0;
            }

            int originalIndex = uPtr(uPtr(m)->Indices())->GetInt(i);
            int virtualIndex = virtualIndexBase + originalIndex;
            int newIndex;

            if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(virtualIndexToRealIndex), uCRef<int>(virtualIndex), &newIndex, &ret18), ret18))
            {
                newIndex = batchVertexCount;
                ::g::Uno::Collections::Dictionary__Add_fn(uPtr(virtualIndexToRealIndex), uCRef<int>(virtualIndex), uCRef<int>(newIndex));

                if (position != NULL)
                    uPtr(uPtr(b)->Positions())->Write4((ind3 = uPtr(position)->GetFloat4(originalIndex), ::g::Uno::Float3__New2(ind3.X, ind3.Y, ind3.Z)));

                if (texcoord != NULL)
                    uPtr(uPtr(b)->TexCoord0s())->Write3((ind4 = uPtr(texcoord)->GetFloat4(originalIndex), ::g::Uno::Float2__New2(ind4.X, ind4.Y)));

                if (texcoord1 != NULL)
                    uPtr(uPtr(b)->TexCoord1s())->Write3((ind5 = uPtr(texcoord1)->GetFloat4(originalIndex), ::g::Uno::Float2__New2(ind5.X, ind5.Y)));

                if (texcoord2 != NULL)
                    uPtr(uPtr(b)->TexCoord2s())->Write3((ind6 = uPtr(texcoord2)->GetFloat4(originalIndex), ::g::Uno::Float2__New2(ind6.X, ind6.Y)));

                if (texcoord3 != NULL)
                    uPtr(uPtr(b)->TexCoord3s())->Write3((ind7 = uPtr(texcoord3)->GetFloat4(originalIndex), ::g::Uno::Float2__New2(ind7.X, ind7.Y)));

                if (texcoord4 != NULL)
                    uPtr(uPtr(b)->TexCoord4s())->Write3((ind8 = uPtr(texcoord4)->GetFloat4(originalIndex), ::g::Uno::Float2__New2(ind8.X, ind8.Y)));

                if (texcoord5 != NULL)
                    uPtr(uPtr(b)->TexCoord5s())->Write3((ind9 = uPtr(texcoord5)->GetFloat4(originalIndex), ::g::Uno::Float2__New2(ind9.X, ind9.Y)));

                if (texcoord6 != NULL)
                    uPtr(uPtr(b)->TexCoord6s())->Write3((ind10 = uPtr(texcoord6)->GetFloat4(originalIndex), ::g::Uno::Float2__New2(ind10.X, ind10.Y)));

                if (texcoord7 != NULL)
                    uPtr(uPtr(b)->TexCoord7s())->Write3((ind11 = uPtr(texcoord7)->GetFloat4(originalIndex), ::g::Uno::Float2__New2(ind11.X, ind11.Y)));

                if (normal != NULL)
                    uPtr(uPtr(b)->Normals())->Write4((ind12 = uPtr(normal)->GetFloat4(originalIndex), ::g::Uno::Float3__New2(ind12.X, ind12.Y, ind12.Z)));

                if (tangent != NULL)
                    uPtr(uPtr(b)->Tangents())->Write5(uPtr(tangent)->GetFloat4(originalIndex));

                if (binormal != NULL)
                    uPtr(uPtr(b)->Binormals())->Write4((ind13 = uPtr(binormal)->GetFloat4(originalIndex), ::g::Uno::Float3__New2(ind13.X, ind13.Y, ind13.Z)));

                if (color != NULL)
                    uPtr(uPtr(b)->Colors())->Write5(uPtr(color)->GetFloat4(originalIndex));

                if (boneWeights != NULL)
                    uPtr(uPtr(b)->BoneWeightBuffer())->Write2(uPtr(boneWeights)->GetByte4Normalized(originalIndex));

                if (boneIndex != NULL)
                    uPtr(uPtr(b)->BoneIndexBuffer())->Write2(uPtr(boneIndex)->GetByte4(originalIndex));

                uPtr(uPtr(b)->InstanceIndices())->Write17((uint16_t)uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(entries), uCRef<int>(e), &ret19), ret19))->InstanceIndex);
                batchVertexCount++;
            }

            uPtr(uPtr(b)->Indices())->Write1((uint16_t)newIndex);
            batchIndexCount++;
        }

        virtualIndexBase = virtualIndexBase + uPtr(m)->VertexCount();
    }

    batches = ((uArray*)batches1->ToArray());
}

// private static Uno.Content.Models.ModelMesh CreateFakeIndexBuffer(Uno.Content.Models.ModelMesh m) [static] :757
::g::Uno::Content::Models::ModelMesh* MeshBatcher::CreateFakeIndexBuffer(::g::Uno::Content::Models::ModelMesh* m)
{
    uStackFrame __("Fuse.Drawing.Batching.MeshBatcher", "CreateFakeIndexBuffer(Uno.Content.Models.ModelMesh)");
    ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> > ret15;
    uArray* d = uArray::New(::TYPES[6/*uint[]*/], uPtr(m)->VertexCount());

    for (int i = 0; i < d->Length(); i++)
        uPtr(d)->Item<uint32_t>(i) = (uint32_t)i;

    ::g::Uno::Collections::Dictionary* dict = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[7/*Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray>*/]);

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(m->VertexAttributes()), ::TYPES[1/*Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[2/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> > v = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[3/*Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>>*/]), &ret15), ret15);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(dict), v.Key(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]), v.Value(::TYPES[4/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]));
    }

    return ::g::Uno::Content::Models::ModelMesh::New1(m->Name(), m->PrimitiveType(), dict, ::g::Uno::Content::Models::IndexArray::New2(d));
}

// private static Uno.Content.Models.ModelMesh Mesh(Fuse.Drawing.Batching.Entry entry) [static] :582
::g::Uno::Content::Models::ModelMesh* MeshBatcher::Mesh(::g::Fuse::Drawing::Batching::Entry* entry)
{
    uStackFrame __("Fuse.Drawing.Batching.MeshBatcher", "Mesh(Fuse.Drawing.Batching.Entry)");
    return uPtr(entry)->Mesh;
}

// public MeshBatcher New() [static] :596
MeshBatcher* MeshBatcher::New1()
{
    MeshBatcher* obj14 = (MeshBatcher*)uNew(MeshBatcher_typeof());
    obj14->ctor_();
    return obj14;
}
// }

}}}} // ::g::Fuse::Drawing::Batching
