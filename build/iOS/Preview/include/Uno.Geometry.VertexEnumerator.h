// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Geometry/0.42.0/curves/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Geometry{struct Vertex;}}}
namespace g{namespace Uno{namespace Geometry{struct VertexEnumerator;}}}

namespace g{
namespace Uno{
namespace Geometry{

// internal sealed class VertexEnumerator :101
// {
struct VertexEnumerator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

VertexEnumerator_type* VertexEnumerator_typeof();
void VertexEnumerator__ctor__fn(VertexEnumerator* __this, ::g::Uno::Geometry::Vertex* head);
void VertexEnumerator__get_Current_fn(VertexEnumerator* __this, ::g::Uno::Float2* __retval);
void VertexEnumerator__Dispose_fn(VertexEnumerator* __this);
void VertexEnumerator__MoveNext_fn(VertexEnumerator* __this, bool* __retval);
void VertexEnumerator__New1_fn(::g::Uno::Geometry::Vertex* head, VertexEnumerator** __retval);
void VertexEnumerator__Reset_fn(VertexEnumerator* __this);

struct VertexEnumerator : uObject
{
    uStrong< ::g::Uno::Geometry::Vertex*> _current;
    uStrong< ::g::Uno::Geometry::Vertex*> _head;

    void ctor_(::g::Uno::Geometry::Vertex* head);
    ::g::Uno::Float2 Current();
    void Dispose();
    bool MoveNext();
    void Reset();
    static VertexEnumerator* New1(::g::Uno::Geometry::Vertex* head);
};
// }

}}} // ::g::Uno::Geometry
