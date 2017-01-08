// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Geometry/0.42.0/curves/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Geometry{struct Vertex;}}}
namespace g{namespace Uno{namespace Geometry{struct VertexEnumerable;}}}

namespace g{
namespace Uno{
namespace Geometry{

// internal sealed class VertexEnumerable :86
// {
struct VertexEnumerable_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

VertexEnumerable_type* VertexEnumerable_typeof();
void VertexEnumerable__ctor__fn(VertexEnumerable* __this, ::g::Uno::Geometry::Vertex* head);
void VertexEnumerable__GetEnumerator_fn(VertexEnumerable* __this, uObject** __retval);
void VertexEnumerable__New1_fn(::g::Uno::Geometry::Vertex* head, VertexEnumerable** __retval);

struct VertexEnumerable : uObject
{
    uStrong< ::g::Uno::Geometry::Vertex*> _head;

    void ctor_(::g::Uno::Geometry::Vertex* head);
    uObject* GetEnumerator();
    static VertexEnumerable* New1(::g::Uno::Geometry::Vertex* head);
};
// }

}}} // ::g::Uno::Geometry
