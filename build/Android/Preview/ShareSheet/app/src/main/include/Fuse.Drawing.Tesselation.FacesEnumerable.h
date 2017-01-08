// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/meshes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h>
#include <Fuse.Drawing.Tesselation.Face.h>
#include <Uno.Collections.IEnumerable-1.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct FacesEnumerable;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{

// internal sealed class FacesEnumerable :594
// {
::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* FacesEnumerable_typeof();
void FacesEnumerable__ctor_1_fn(FacesEnumerable* __this, ::g::Fuse::Drawing::Tesselation::Face* head);
void FacesEnumerable__GetNext_fn(FacesEnumerable* __this, ::g::Fuse::Drawing::Tesselation::Face* v, ::g::Fuse::Drawing::Tesselation::Face** __retval);
void FacesEnumerable__New1_fn(::g::Fuse::Drawing::Tesselation::Face* head, FacesEnumerable** __retval);

struct FacesEnumerable : ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable
{
    uStrong< ::g::Fuse::Drawing::Tesselation::Face*> _head;

    void ctor_1(::g::Fuse::Drawing::Tesselation::Face* head);
    static FacesEnumerable* New1(::g::Fuse::Drawing::Tesselation::Face* head);
};
// }

}}}} // ::g::Fuse::Drawing::Tesselation
