// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/models/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Content{namespace Models{struct VertexAttributeArray;}}}}
namespace g{namespace Uno{struct Buffer;}}
namespace g{namespace Uno{struct Byte4;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Uno{
namespace Content{
namespace Models{

// public sealed class VertexAttributeArray :1522
// {
uType* VertexAttributeArray_typeof();
void VertexAttributeArray__ctor_2_fn(VertexAttributeArray* __this, uArray* data);
void VertexAttributeArray__ctor_3_fn(VertexAttributeArray* __this, uArray* data);
void VertexAttributeArray__ctor_4_fn(VertexAttributeArray* __this, uArray* data);
void VertexAttributeArray__ctor_7_fn(VertexAttributeArray* __this, int* type, ::g::Uno::Buffer* buffer);
void VertexAttributeArray__get_Buffer_fn(VertexAttributeArray* __this, ::g::Uno::Buffer** __retval);
void VertexAttributeArray__get_Count_fn(VertexAttributeArray* __this, int* __retval);
void VertexAttributeArray__GetByte4_fn(VertexAttributeArray* __this, int* index, ::g::Uno::Byte4* __retval);
void VertexAttributeArray__GetByte4Normalized_fn(VertexAttributeArray* __this, int* index, ::g::Uno::Byte4* __retval);
void VertexAttributeArray__GetFloat4_fn(VertexAttributeArray* __this, int* index, ::g::Uno::Float4* __retval);
void VertexAttributeArray__New3_fn(uArray* data, VertexAttributeArray** __retval);
void VertexAttributeArray__New4_fn(uArray* data, VertexAttributeArray** __retval);
void VertexAttributeArray__New5_fn(uArray* data, VertexAttributeArray** __retval);
void VertexAttributeArray__get_Type_fn(VertexAttributeArray* __this, int* __retval);

struct VertexAttributeArray : uObject
{
    uStrong< ::g::Uno::Buffer*> _buffer;
    int _type;

    void ctor_2(uArray* data);
    void ctor_3(uArray* data);
    void ctor_4(uArray* data);
    void ctor_7(int type, ::g::Uno::Buffer* buffer);
    ::g::Uno::Buffer* Buffer();
    int Count();
    ::g::Uno::Byte4 GetByte4(int index);
    ::g::Uno::Byte4 GetByte4Normalized(int index);
    ::g::Uno::Float4 GetFloat4(int index);
    int Type();
    static VertexAttributeArray* New3(uArray* data);
    static VertexAttributeArray* New4(uArray* data);
    static VertexAttributeArray* New5(uArray* data);
};
// }

}}}} // ::g::Uno::Content::Models
