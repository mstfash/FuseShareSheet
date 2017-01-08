// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/meshes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h>
#include <Fuse.Drawing.Tesselation.HalfEdge.h>
#include <Uno.Collections.IEnumerable-1.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct EdgesEnumerable;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{

// internal sealed class EdgesEnumerable :611
// {
::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* EdgesEnumerable_typeof();
void EdgesEnumerable__ctor_1_fn(EdgesEnumerable* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* head);
void EdgesEnumerable__GetNext_fn(EdgesEnumerable* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* v, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval);
void EdgesEnumerable__New1_fn(::g::Fuse::Drawing::Tesselation::HalfEdge* head, EdgesEnumerable** __retval);

struct EdgesEnumerable : ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable
{
    uStrong< ::g::Fuse::Drawing::Tesselation::HalfEdge*> _head;

    void ctor_1(::g::Fuse::Drawing::Tesselation::HalfEdge* head);
    static EdgesEnumerable* New1(::g::Fuse::Drawing::Tesselation::HalfEdge* head);
};
// }

}}}} // ::g::Fuse::Drawing::Tesselation
