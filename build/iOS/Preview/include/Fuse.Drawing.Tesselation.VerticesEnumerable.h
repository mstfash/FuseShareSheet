// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/meshes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h>
#include <Fuse.Drawing.Tesselation.Vertex.h>
#include <Uno.Collections.IEnumerable-1.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct VerticesEnumerable;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{

// internal sealed class VerticesEnumerable :577
// {
::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* VerticesEnumerable_typeof();
void VerticesEnumerable__ctor_1_fn(VerticesEnumerable* __this, ::g::Fuse::Drawing::Tesselation::Vertex* head);
void VerticesEnumerable__GetNext_fn(VerticesEnumerable* __this, ::g::Fuse::Drawing::Tesselation::Vertex* v, ::g::Fuse::Drawing::Tesselation::Vertex** __retval);
void VerticesEnumerable__New1_fn(::g::Fuse::Drawing::Tesselation::Vertex* head, VerticesEnumerable** __retval);

struct VerticesEnumerable : ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable
{
    uStrong< ::g::Fuse::Drawing::Tesselation::Vertex*> _head;

    void ctor_1(::g::Fuse::Drawing::Tesselation::Vertex* head);
    static VerticesEnumerable* New1(::g::Fuse::Drawing::Tesselation::Vertex* head);
};
// }

}}}} // ::g::Fuse::Drawing::Tesselation
