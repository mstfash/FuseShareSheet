// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/meshes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct ActiveRegion;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct Face;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct HalfEdge;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct Vertex;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{

// internal sealed class HalfEdge :137
// {
uType* HalfEdge_typeof();
void HalfEdge__ctor__fn(HalfEdge* __this, bool* isFirst);
void HalfEdge__get_ActiveRegion_fn(HalfEdge* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion** __retval);
void HalfEdge__set_ActiveRegion_fn(HalfEdge* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* value);
void HalfEdge__AddEdgeVertex_fn(HalfEdge* __this, HalfEdge** __retval);
void HalfEdge__AddWinding_fn(HalfEdge* eDst, HalfEdge* eSrc);
void HalfEdge__get_Destination_fn(HalfEdge* __this, ::g::Fuse::Drawing::Tesselation::Vertex** __retval);
void HalfEdge__set_Destination_fn(HalfEdge* __this, ::g::Fuse::Drawing::Tesselation::Vertex* value);
void HalfEdge__get_DestinationNext_fn(HalfEdge* __this, HalfEdge** __retval);
void HalfEdge__get_DestinationPrev_fn(HalfEdge* __this, HalfEdge** __retval);
void HalfEdge__ExchangeOriginNextAkaSplice_fn(HalfEdge* a, HalfEdge* b);
void HalfEdge__get_GoesLeft_fn(HalfEdge* __this, bool* __retval);
void HalfEdge__get_GoesRight_fn(HalfEdge* __this, bool* __retval);
void HalfEdge__get_IsBoundaryEdge_fn(HalfEdge* __this, bool* __retval);
void HalfEdge__KillEdge_fn(HalfEdge* eDel);
void HalfEdge__get_Left_fn(HalfEdge* __this, ::g::Fuse::Drawing::Tesselation::Face** __retval);
void HalfEdge__set_Left_fn(HalfEdge* __this, ::g::Fuse::Drawing::Tesselation::Face* value);
void HalfEdge__get_LeftNext_fn(HalfEdge* __this, HalfEdge** __retval);
void HalfEdge__set_LeftNext_fn(HalfEdge* __this, HalfEdge* value);
void HalfEdge__get_LeftPrev_fn(HalfEdge* __this, HalfEdge** __retval);
void HalfEdge__MakeEdge_fn(HalfEdge* eNext, HalfEdge** __retval);
void HalfEdge__New1_fn(bool* isFirst, HalfEdge** __retval);
void HalfEdge__get_Next_fn(HalfEdge* __this, HalfEdge** __retval);
void HalfEdge__set_Next_fn(HalfEdge* __this, HalfEdge* value);
void HalfEdge__get_Origin_fn(HalfEdge* __this, ::g::Fuse::Drawing::Tesselation::Vertex** __retval);
void HalfEdge__set_Origin_fn(HalfEdge* __this, ::g::Fuse::Drawing::Tesselation::Vertex* value);
void HalfEdge__get_OriginNext_fn(HalfEdge* __this, HalfEdge** __retval);
void HalfEdge__set_OriginNext_fn(HalfEdge* __this, HalfEdge* value);
void HalfEdge__get_OriginPrev_fn(HalfEdge* __this, HalfEdge** __retval);
void HalfEdge__get_Right_fn(HalfEdge* __this, ::g::Fuse::Drawing::Tesselation::Face** __retval);
void HalfEdge__set_Right_fn(HalfEdge* __this, ::g::Fuse::Drawing::Tesselation::Face* value);
void HalfEdge__get_RightNext_fn(HalfEdge* __this, HalfEdge** __retval);
void HalfEdge__get_RightPrev_fn(HalfEdge* __this, HalfEdge** __retval);
void HalfEdge__Split_fn(HalfEdge* __this, HalfEdge** __retval);
void HalfEdge__get_Sym_fn(HalfEdge* __this, HalfEdge** __retval);
void HalfEdge__set_Sym_fn(HalfEdge* __this, HalfEdge* value);
void HalfEdge__ToString_fn(HalfEdge* __this, uString** __retval);
void HalfEdge__get_Winding_fn(HalfEdge* __this, int* __retval);
void HalfEdge__set_Winding_fn(HalfEdge* __this, int* value);

struct HalfEdge : uObject
{
    bool _isFirst;
    uStrong< ::g::Fuse::Drawing::Tesselation::ActiveRegion*> _ActiveRegion;
    uStrong< ::g::Fuse::Drawing::Tesselation::Face*> _Left;
    uStrong<HalfEdge*> _LeftNext;
    uStrong<HalfEdge*> _Next;
    uStrong< ::g::Fuse::Drawing::Tesselation::Vertex*> _Origin;
    uStrong<HalfEdge*> _OriginNext;
    uStrong<HalfEdge*> _Sym;
    int _Winding;

    void ctor_(bool isFirst);
    ::g::Fuse::Drawing::Tesselation::ActiveRegion* ActiveRegion();
    void ActiveRegion(::g::Fuse::Drawing::Tesselation::ActiveRegion* value);
    HalfEdge* AddEdgeVertex();
    ::g::Fuse::Drawing::Tesselation::Vertex* Destination();
    void Destination(::g::Fuse::Drawing::Tesselation::Vertex* value);
    HalfEdge* DestinationNext();
    HalfEdge* DestinationPrev();
    bool GoesLeft();
    bool GoesRight();
    bool IsBoundaryEdge();
    ::g::Fuse::Drawing::Tesselation::Face* Left();
    void Left(::g::Fuse::Drawing::Tesselation::Face* value);
    HalfEdge* LeftNext();
    void LeftNext(HalfEdge* value);
    HalfEdge* LeftPrev();
    HalfEdge* Next();
    void Next(HalfEdge* value);
    ::g::Fuse::Drawing::Tesselation::Vertex* Origin();
    void Origin(::g::Fuse::Drawing::Tesselation::Vertex* value);
    HalfEdge* OriginNext();
    void OriginNext(HalfEdge* value);
    HalfEdge* OriginPrev();
    ::g::Fuse::Drawing::Tesselation::Face* Right();
    void Right(::g::Fuse::Drawing::Tesselation::Face* value);
    HalfEdge* RightNext();
    HalfEdge* RightPrev();
    HalfEdge* Split();
    HalfEdge* Sym();
    void Sym(HalfEdge* value);
    int Winding();
    void Winding(int value);
    static void AddWinding(HalfEdge* eDst, HalfEdge* eSrc);
    static void ExchangeOriginNextAkaSplice(HalfEdge* a, HalfEdge* b);
    static void KillEdge(HalfEdge* eDel);
    static HalfEdge* MakeEdge(HalfEdge* eNext);
    static HalfEdge* New1(bool isFirst);
};
// }

}}}} // ::g::Fuse::Drawing::Tesselation
