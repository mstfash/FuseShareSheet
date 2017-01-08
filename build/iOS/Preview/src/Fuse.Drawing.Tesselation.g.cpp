// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Drawing.Contour.h>
#include <Fuse.Drawing.Tesselation.ActiveRegion.h>
#include <Fuse.Drawing.Tesselation.Collections.ActiveRegionDict.h>
#include <Fuse.Drawing.Tesselation.Collections.Dict-1.h>
#include <Fuse.Drawing.Tesselation.Collections.DictNode-1.h>
#include <Fuse.Drawing.Tesselation.Collections.PriorityQueue-1.h>
#include <Fuse.Drawing.Tesselation.Collections.VertexQueue.h>
#include <Fuse.Drawing.Tesselation.EdgeLoopEnumerable.h>
#include <Fuse.Drawing.Tesselation.EdgesEnumerable.h>
#include <Fuse.Drawing.Tesselation.Face.h>
#include <Fuse.Drawing.Tesselation.FacesEnumerable.h>
#include <Fuse.Drawing.Tesselation.Geom.h>
#include <Fuse.Drawing.Tesselation.HalfEdge.h>
#include <Fuse.Drawing.Tesselation.Mesh.h>
#include <Fuse.Drawing.Tesselation.MeshBuilder.h>
#include <Fuse.Drawing.Tesselation.OriginEnumerable.h>
#include <Fuse.Drawing.Tesselation.Sweep.h>
#include <Fuse.Drawing.Tesselation.Vertex.h>
#include <Fuse.Drawing.Tesselation.VerticesEnumerable.h>
#include <Uno.Bool.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Func-2.h>
#include <Uno.Geometry.Triangle2D.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
static uString* STRINGS[14];
static uType* TYPES[22];

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/sweep/$.uno
// ------------------------------------------------------------------------------------------------------

// internal sealed class ActiveRegion :10
// {
static void ActiveRegion_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Region of ");
    ::STRINGS[1] = uString::Const(" NEEDS FIX");
    ::STRINGS[2] = uString::Const("");
    type->SetFields(0,
        ::g::Fuse::Drawing::Tesselation::Mesh_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::ActiveRegion, _mesh), uFieldFlagsWeak,
        ::g::Fuse::Drawing::Tesselation::HalfEdge_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::ActiveRegion, _upperEdge), uFieldFlagsWeak,
        ::g::Fuse::Drawing::Tesselation::Collections::DictNode_typeof()->MakeType(type, NULL), offsetof(::g::Fuse::Drawing::Tesselation::ActiveRegion, _upperEdgeDictNode), uFieldFlagsWeak,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::ActiveRegion, _fixUpperEdge), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::ActiveRegion, _IsDirty), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::ActiveRegion, _IsInside), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::ActiveRegion, _Sentinel), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::ActiveRegion, _WindingNumber), 0);
}

uType* ActiveRegion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(ActiveRegion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Tesselation.ActiveRegion", options);
    type->fp_build_ = ActiveRegion_build;
    type->fp_ToString = (void(*)(uObject*, uString**))ActiveRegion__ToString_fn;
    return type;
}

// public ActiveRegion(Fuse.Drawing.Tesselation.Mesh mesh, Fuse.Drawing.Tesselation.HalfEdge upperEdge, [bool sentinel]) :48
void ActiveRegion__ctor__fn(ActiveRegion* __this, ::g::Fuse::Drawing::Tesselation::Mesh* mesh, ::g::Fuse::Drawing::Tesselation::HalfEdge* upperEdge, bool* sentinel)
{
    __this->ctor_(mesh, upperEdge, *sentinel);
}

// public Fuse.Drawing.Tesselation.ActiveRegion get_Above() :96
void ActiveRegion__get_Above_fn(ActiveRegion* __this, ActiveRegion** __retval)
{
    *__retval = __this->Above();
}

// public Fuse.Drawing.Tesselation.ActiveRegion get_Below() :91
void ActiveRegion__get_Below_fn(ActiveRegion* __this, ActiveRegion** __retval)
{
    *__retval = __this->Below();
}

// public generated bool get_fixUpperEdge() :46
void ActiveRegion__get_fixUpperEdge_fn(ActiveRegion* __this, bool* __retval)
{
    *__retval = __this->fixUpperEdge();
}

// public generated void set_fixUpperEdge(bool value) :46
void ActiveRegion__set_fixUpperEdge_fn(ActiveRegion* __this, bool* value)
{
    __this->fixUpperEdge(*value);
}

// public void FixUpperEdge(Fuse.Drawing.Tesselation.HalfEdge newEdge) :102
void ActiveRegion__FixUpperEdge_fn(ActiveRegion* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* newEdge)
{
    __this->FixUpperEdge(newEdge);
}

// public generated bool get_IsDirty() :41
void ActiveRegion__get_IsDirty_fn(ActiveRegion* __this, bool* __retval)
{
    *__retval = __this->IsDirty();
}

// public generated void set_IsDirty(bool value) :41
void ActiveRegion__set_IsDirty_fn(ActiveRegion* __this, bool* value)
{
    __this->IsDirty(*value);
}

// public generated bool get_IsInside() :36
void ActiveRegion__get_IsInside_fn(ActiveRegion* __this, bool* __retval)
{
    *__retval = __this->IsInside();
}

// public generated void set_IsInside(bool value) :36
void ActiveRegion__set_IsInside_fn(ActiveRegion* __this, bool* value)
{
    __this->IsInside(*value);
}

// public ActiveRegion New(Fuse.Drawing.Tesselation.Mesh mesh, Fuse.Drawing.Tesselation.HalfEdge upperEdge, [bool sentinel]) :48
void ActiveRegion__New1_fn(::g::Fuse::Drawing::Tesselation::Mesh* mesh, ::g::Fuse::Drawing::Tesselation::HalfEdge* upperEdge, bool* sentinel, ActiveRegion** __retval)
{
    *__retval = ActiveRegion::New1(mesh, upperEdge, *sentinel);
}

// public generated bool get_Sentinel() :25
void ActiveRegion__get_Sentinel_fn(ActiveRegion* __this, bool* __retval)
{
    *__retval = __this->Sentinel();
}

// private generated void set_Sentinel(bool value) :25
void ActiveRegion__set_Sentinel_fn(ActiveRegion* __this, bool* value)
{
    __this->Sentinel(*value);
}

// public Fuse.Drawing.Tesselation.ActiveRegion get_TopLeft() :57
void ActiveRegion__get_TopLeft_fn(ActiveRegion* __this, ActiveRegion** __retval)
{
    *__retval = __this->TopLeft();
}

// public Fuse.Drawing.Tesselation.ActiveRegion get_TopRight() :78
void ActiveRegion__get_TopRight_fn(ActiveRegion* __this, ActiveRegion** __retval)
{
    *__retval = __this->TopRight();
}

// public override sealed string ToString() :112
void ActiveRegion__ToString_fn(ActiveRegion* __this, uString** __retval)
{
    uStackFrame __("Fuse.Drawing.Tesselation.ActiveRegion", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Region of "*/], __this->UpperEdge()), __this->fixUpperEdge() ? ::STRINGS[1/*" NEEDS FIX"*/] : ::STRINGS[2/*""*/]), void();
}

// public Fuse.Drawing.Tesselation.HalfEdge get_UpperEdge() :20
void ActiveRegion__get_UpperEdge_fn(ActiveRegion* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval)
{
    *__retval = __this->UpperEdge();
}

// public void set_UpperEdge(Fuse.Drawing.Tesselation.HalfEdge value) :20
void ActiveRegion__set_UpperEdge_fn(ActiveRegion* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* value)
{
    __this->UpperEdge(value);
}

// public Fuse.Drawing.Tesselation.Collections.DictNode<Fuse.Drawing.Tesselation.ActiveRegion> get_UpperEdgeDictNode() :32
void ActiveRegion__get_UpperEdgeDictNode_fn(ActiveRegion* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode** __retval)
{
    *__retval = __this->UpperEdgeDictNode();
}

// public void set_UpperEdgeDictNode(Fuse.Drawing.Tesselation.Collections.DictNode<Fuse.Drawing.Tesselation.ActiveRegion> value) :32
void ActiveRegion__set_UpperEdgeDictNode_fn(ActiveRegion* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* value)
{
    __this->UpperEdgeDictNode(value);
}

// public generated int get_WindingNumber() :34
void ActiveRegion__get_WindingNumber_fn(ActiveRegion* __this, int* __retval)
{
    *__retval = __this->WindingNumber();
}

// public generated void set_WindingNumber(int value) :34
void ActiveRegion__set_WindingNumber_fn(ActiveRegion* __this, int* value)
{
    __this->WindingNumber(*value);
}

// public ActiveRegion(Fuse.Drawing.Tesselation.Mesh mesh, Fuse.Drawing.Tesselation.HalfEdge upperEdge, [bool sentinel]) [instance] :48
void ActiveRegion::ctor_(::g::Fuse::Drawing::Tesselation::Mesh* mesh, ::g::Fuse::Drawing::Tesselation::HalfEdge* upperEdge, bool sentinel)
{
    _mesh = mesh;
    UpperEdge(upperEdge);
    Sentinel(sentinel);
}

// public Fuse.Drawing.Tesselation.ActiveRegion get_Above() [instance] :96
ActiveRegion* ActiveRegion::Above()
{
    uStackFrame __("Fuse.Drawing.Tesselation.ActiveRegion", "get_Above()");
    ActiveRegion* ret2;
    return (::g::Fuse::Drawing::Tesselation::Collections::DictNode__get_Key_fn(uPtr((::g::Fuse::Drawing::Tesselation::Collections::DictNode*)uPtr(UpperEdgeDictNode())->Next()), &ret2), ret2);
}

// public Fuse.Drawing.Tesselation.ActiveRegion get_Below() [instance] :91
ActiveRegion* ActiveRegion::Below()
{
    uStackFrame __("Fuse.Drawing.Tesselation.ActiveRegion", "get_Below()");
    ActiveRegion* ret3;
    return (::g::Fuse::Drawing::Tesselation::Collections::DictNode__get_Key_fn(uPtr((::g::Fuse::Drawing::Tesselation::Collections::DictNode*)uPtr(UpperEdgeDictNode())->Prev()), &ret3), ret3);
}

// public generated bool get_fixUpperEdge() [instance] :46
bool ActiveRegion::fixUpperEdge()
{
    return _fixUpperEdge;
}

// public generated void set_fixUpperEdge(bool value) [instance] :46
void ActiveRegion::fixUpperEdge(bool value)
{
    _fixUpperEdge = value;
}

// public void FixUpperEdge(Fuse.Drawing.Tesselation.HalfEdge newEdge) [instance] :102
void ActiveRegion::FixUpperEdge(::g::Fuse::Drawing::Tesselation::HalfEdge* newEdge)
{
    uStackFrame __("Fuse.Drawing.Tesselation.ActiveRegion", "FixUpperEdge(Fuse.Drawing.Tesselation.HalfEdge)");
    uPtr(_mesh)->DeleteEdge(UpperEdge());
    fixUpperEdge(false);
    UpperEdge(newEdge);
    uPtr(newEdge)->ActiveRegion(this);
}

// public generated bool get_IsDirty() [instance] :41
bool ActiveRegion::IsDirty()
{
    return _IsDirty;
}

// public generated void set_IsDirty(bool value) [instance] :41
void ActiveRegion::IsDirty(bool value)
{
    _IsDirty = value;
}

// public generated bool get_IsInside() [instance] :36
bool ActiveRegion::IsInside()
{
    return _IsInside;
}

// public generated void set_IsInside(bool value) [instance] :36
void ActiveRegion::IsInside(bool value)
{
    _IsInside = value;
}

// public generated bool get_Sentinel() [instance] :25
bool ActiveRegion::Sentinel()
{
    return _Sentinel;
}

// private generated void set_Sentinel(bool value) [instance] :25
void ActiveRegion::Sentinel(bool value)
{
    _Sentinel = value;
}

// public Fuse.Drawing.Tesselation.ActiveRegion get_TopLeft() [instance] :57
ActiveRegion* ActiveRegion::TopLeft()
{
    uStackFrame __("Fuse.Drawing.Tesselation.ActiveRegion", "get_TopLeft()");
    ::g::Fuse::Drawing::Tesselation::Vertex* org = uPtr(UpperEdge())->Origin();
    ActiveRegion* reg = this;

    do
        reg = uPtr(reg)->Above();
    while (uPtr(reg->UpperEdge())->Origin() == org);

    if (uPtr(reg)->fixUpperEdge())
    {
        ::g::Fuse::Drawing::Tesselation::HalfEdge* e = uPtr(_mesh)->Connect(uPtr(uPtr(uPtr(reg)->Below())->UpperEdge())->Sym(), uPtr(uPtr(reg)->UpperEdge())->LeftNext());
        reg->FixUpperEdge(e);
        reg = uPtr(reg)->Above();
    }

    return reg;
}

// public Fuse.Drawing.Tesselation.ActiveRegion get_TopRight() [instance] :78
ActiveRegion* ActiveRegion::TopRight()
{
    uStackFrame __("Fuse.Drawing.Tesselation.ActiveRegion", "get_TopRight()");
    ::g::Fuse::Drawing::Tesselation::Vertex* dst = uPtr(UpperEdge())->Destination();
    ActiveRegion* reg = this;

    do
        reg = uPtr(reg)->Above();
    while (uPtr(reg->UpperEdge())->Destination() == dst);

    return reg;
}

// public Fuse.Drawing.Tesselation.HalfEdge get_UpperEdge() [instance] :20
::g::Fuse::Drawing::Tesselation::HalfEdge* ActiveRegion::UpperEdge()
{
    return _upperEdge;
}

// public void set_UpperEdge(Fuse.Drawing.Tesselation.HalfEdge value) [instance] :20
void ActiveRegion::UpperEdge(::g::Fuse::Drawing::Tesselation::HalfEdge* value)
{
    _upperEdge = value;
}

// public Fuse.Drawing.Tesselation.Collections.DictNode<Fuse.Drawing.Tesselation.ActiveRegion> get_UpperEdgeDictNode() [instance] :32
::g::Fuse::Drawing::Tesselation::Collections::DictNode* ActiveRegion::UpperEdgeDictNode()
{
    return _upperEdgeDictNode;
}

// public void set_UpperEdgeDictNode(Fuse.Drawing.Tesselation.Collections.DictNode<Fuse.Drawing.Tesselation.ActiveRegion> value) [instance] :32
void ActiveRegion::UpperEdgeDictNode(::g::Fuse::Drawing::Tesselation::Collections::DictNode* value)
{
    _upperEdgeDictNode = value;
}

// public generated int get_WindingNumber() [instance] :34
int ActiveRegion::WindingNumber()
{
    return _WindingNumber;
}

// public generated void set_WindingNumber(int value) [instance] :34
void ActiveRegion::WindingNumber(int value)
{
    _WindingNumber = value;
}

// public ActiveRegion New(Fuse.Drawing.Tesselation.Mesh mesh, Fuse.Drawing.Tesselation.HalfEdge upperEdge, [bool sentinel]) [static] :48
ActiveRegion* ActiveRegion::New1(::g::Fuse::Drawing::Tesselation::Mesh* mesh, ::g::Fuse::Drawing::Tesselation::HalfEdge* upperEdge, bool sentinel)
{
    ActiveRegion* obj1 = (ActiveRegion*)uNew(ActiveRegion_typeof());
    obj1->ctor_(mesh, upperEdge, sentinel);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/meshes/$.uno
// -------------------------------------------------------------------------------------------------------

// internal sealed class EdgeLoopEnumerable :15
// {
static void EdgeLoopEnumerable_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::Tesselation::HalfEdge_typeof();
    type->SetBase(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::HalfEdge_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[0/*Fuse.Drawing.Tesselation.HalfEdge*/], NULL), offsetof(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type, interface0));
    type->SetFields(1);
}

::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* EdgeLoopEnumerable_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(EdgeLoopEnumerable);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type);
    type = (::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type*)uClassType::New("Fuse.Drawing.Tesselation.EdgeLoopEnumerable", options);
    type->fp_build_ = EdgeLoopEnumerable_build;
    type->fp_GetNext = (void(*)(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable*, void*, uTRef))EdgeLoopEnumerable__GetNext_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__GetEnumerator_fn;
    return type;
}

// public EdgeLoopEnumerable(Fuse.Drawing.Tesselation.HalfEdge anEdge) :17
void EdgeLoopEnumerable__ctor_1_fn(EdgeLoopEnumerable* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* anEdge)
{
    __this->ctor_1(anEdge);
}

// internal override sealed Fuse.Drawing.Tesselation.HalfEdge GetNext(Fuse.Drawing.Tesselation.HalfEdge e) :21
void EdgeLoopEnumerable__GetNext_fn(EdgeLoopEnumerable* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* e, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval)
{
    uStackFrame __("Fuse.Drawing.Tesselation.EdgeLoopEnumerable", "GetNext(Fuse.Drawing.Tesselation.HalfEdge)");
    return *__retval = (uPtr(e)->LeftNext() == __this->_first().Strong< ::g::Fuse::Drawing::Tesselation::HalfEdge*>()) ? uCast< ::g::Fuse::Drawing::Tesselation::HalfEdge*>(NULL, ::TYPES[0/*Fuse.Drawing.Tesselation.HalfEdge*/]) : (::g::Fuse::Drawing::Tesselation::HalfEdge*)uPtr(e)->LeftNext(), void();
}

// public EdgeLoopEnumerable New(Fuse.Drawing.Tesselation.HalfEdge anEdge) :17
void EdgeLoopEnumerable__New1_fn(::g::Fuse::Drawing::Tesselation::HalfEdge* anEdge, EdgeLoopEnumerable** __retval)
{
    *__retval = EdgeLoopEnumerable::New1(anEdge);
}

// public EdgeLoopEnumerable(Fuse.Drawing.Tesselation.HalfEdge anEdge) [instance] :17
void EdgeLoopEnumerable::ctor_1(::g::Fuse::Drawing::Tesselation::HalfEdge* anEdge)
{
    ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__ctor__fn(this, anEdge);
}

// public EdgeLoopEnumerable New(Fuse.Drawing.Tesselation.HalfEdge anEdge) [static] :17
EdgeLoopEnumerable* EdgeLoopEnumerable::New1(::g::Fuse::Drawing::Tesselation::HalfEdge* anEdge)
{
    EdgeLoopEnumerable* obj1 = (EdgeLoopEnumerable*)uNew(EdgeLoopEnumerable_typeof());
    obj1->ctor_1(anEdge);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/meshes/$.uno
// -------------------------------------------------------------------------------------------------------

// internal sealed class EdgesEnumerable :611
// {
static void EdgesEnumerable_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::Tesselation::HalfEdge_typeof();
    type->SetBase(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::HalfEdge_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[0/*Fuse.Drawing.Tesselation.HalfEdge*/], NULL), offsetof(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type, interface0));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Drawing.Tesselation.HalfEdge*/], offsetof(::g::Fuse::Drawing::Tesselation::EdgesEnumerable, _head), 0);
}

::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* EdgesEnumerable_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(EdgesEnumerable);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type);
    type = (::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type*)uClassType::New("Fuse.Drawing.Tesselation.EdgesEnumerable", options);
    type->fp_build_ = EdgesEnumerable_build;
    type->fp_GetNext = (void(*)(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable*, void*, uTRef))EdgesEnumerable__GetNext_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__GetEnumerator_fn;
    return type;
}

// public EdgesEnumerable(Fuse.Drawing.Tesselation.HalfEdge head) :615
void EdgesEnumerable__ctor_1_fn(EdgesEnumerable* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* head)
{
    __this->ctor_1(head);
}

// internal override sealed Fuse.Drawing.Tesselation.HalfEdge GetNext(Fuse.Drawing.Tesselation.HalfEdge v) :621
void EdgesEnumerable__GetNext_fn(EdgesEnumerable* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* v, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval)
{
    uStackFrame __("Fuse.Drawing.Tesselation.EdgesEnumerable", "GetNext(Fuse.Drawing.Tesselation.HalfEdge)");
    return *__retval = (uPtr(v)->Next() == __this->_head) ? uCast< ::g::Fuse::Drawing::Tesselation::HalfEdge*>(NULL, ::TYPES[0/*Fuse.Drawing.Tesselation.HalfEdge*/]) : (::g::Fuse::Drawing::Tesselation::HalfEdge*)uPtr(v)->Next(), void();
}

// public EdgesEnumerable New(Fuse.Drawing.Tesselation.HalfEdge head) :615
void EdgesEnumerable__New1_fn(::g::Fuse::Drawing::Tesselation::HalfEdge* head, EdgesEnumerable** __retval)
{
    *__retval = EdgesEnumerable::New1(head);
}

// public EdgesEnumerable(Fuse.Drawing.Tesselation.HalfEdge head) [instance] :615
void EdgesEnumerable::ctor_1(::g::Fuse::Drawing::Tesselation::HalfEdge* head)
{
    uStackFrame __("Fuse.Drawing.Tesselation.EdgesEnumerable", ".ctor(Fuse.Drawing.Tesselation.HalfEdge)");
    ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__ctor__fn(this, (uPtr(head)->Next() == head) ? uCast< ::g::Fuse::Drawing::Tesselation::HalfEdge*>(NULL, ::TYPES[0/*Fuse.Drawing.Tesselation.HalfEdge*/]) : (::g::Fuse::Drawing::Tesselation::HalfEdge*)uPtr(head)->Next());
    _head = head;
}

// public EdgesEnumerable New(Fuse.Drawing.Tesselation.HalfEdge head) [static] :615
EdgesEnumerable* EdgesEnumerable::New1(::g::Fuse::Drawing::Tesselation::HalfEdge* head)
{
    EdgesEnumerable* obj1 = (EdgesEnumerable*)uNew(EdgesEnumerable_typeof());
    obj1->ctor_1(head);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/meshes/$.uno
// -------------------------------------------------------------------------------------------------------

// internal sealed class Face :28
// {
static void Face_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(9/*Select<Fuse.Drawing.Tesselation.HalfEdge, float2>*/, ::g::Fuse::Drawing::Tesselation::HalfEdge_typeof(), ::g::Uno::Float2_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::HalfEdge_typeof(), ::g::Uno::Float2_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::HalfEdge_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[5] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::HalfEdge_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::Drawing::Tesselation::HalfEdge_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::Face, _anEdge), uFieldFlagsWeak,
        type, offsetof(::g::Fuse::Drawing::Tesselation::Face, _prev), uFieldFlagsWeak,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::Face, _IsInside), 0,
        type, offsetof(::g::Fuse::Drawing::Tesselation::Face, _Next), 0);
}

uType* Face_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Face);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Tesselation.Face", options);
    type->fp_build_ = Face_build;
    type->fp_ctor_ = (void*)Face__New1_fn;
    return type;
}

// public generated Face() :28
void Face__ctor__fn(Face* __this)
{
    __this->ctor_();
}

// public Fuse.Drawing.Tesselation.HalfEdge get_AnEdge() :41
void Face__get_AnEdge_fn(Face* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval)
{
    *__retval = __this->AnEdge();
}

// public void set_AnEdge(Fuse.Drawing.Tesselation.HalfEdge value) :41
void Face__set_AnEdge_fn(Face* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* value)
{
    __this->AnEdge(value);
}

// private static float2 Coords(Fuse.Drawing.Tesselation.HalfEdge edge) :69
void Face__Coords_fn(::g::Fuse::Drawing::Tesselation::HalfEdge* edge, ::g::Uno::Float2* __retval)
{
    *__retval = Face::Coords(edge);
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.HalfEdge> get_EdgeLoop() :45
void Face__get_EdgeLoop_fn(Face* __this, uObject** __retval)
{
    *__retval = __this->EdgeLoop();
}

// public generated bool get_IsInside() :48
void Face__get_IsInside_fn(Face* __this, bool* __retval)
{
    *__retval = __this->IsInside();
}

// public generated void set_IsInside(bool value) :48
void Face__set_IsInside_fn(Face* __this, bool* value)
{
    __this->IsInside(*value);
}

// public static void KillFace(Fuse.Drawing.Tesselation.Face fDel, Fuse.Drawing.Tesselation.Face newLface) :107
void Face__KillFace_fn(Face* fDel, Face* newLface)
{
    Face::KillFace(fDel, newLface);
}

// public static Fuse.Drawing.Tesselation.Face MakeFace(Fuse.Drawing.Tesselation.HalfEdge eOrig, Fuse.Drawing.Tesselation.Face fNext) :78
void Face__MakeFace_fn(::g::Fuse::Drawing::Tesselation::HalfEdge* eOrig, Face* fNext, Face** __retval)
{
    *__retval = Face::MakeFace(eOrig, fNext);
}

// public generated Face New() :28
void Face__New1_fn(Face** __retval)
{
    *__retval = Face::New1();
}

// public generated Fuse.Drawing.Tesselation.Face get_Next() :30
void Face__get_Next_fn(Face* __this, Face** __retval)
{
    *__retval = __this->Next();
}

// public generated void set_Next(Fuse.Drawing.Tesselation.Face value) :30
void Face__set_Next_fn(Face* __this, Face* value)
{
    __this->Next(value);
}

// public Fuse.Drawing.Tesselation.Face get_Prev() :34
void Face__get_Prev_fn(Face* __this, Face** __retval)
{
    *__retval = __this->Prev();
}

// public void set_Prev(Fuse.Drawing.Tesselation.Face value) :34
void Face__set_Prev_fn(Face* __this, Face* value)
{
    __this->Prev(value);
}

// public Fuse.Drawing.Contour ToContour() :64
void Face__ToContour_fn(Face* __this, ::g::Fuse::Drawing::Contour** __retval)
{
    *__retval = __this->ToContour();
}

// public Uno.Geometry.Triangle2D ToTriangle() :51
void Face__ToTriangle_fn(Face* __this, ::g::Uno::Geometry::Triangle2D** __retval)
{
    *__retval = __this->ToTriangle();
}

// public generated Face() [instance] :28
void Face::ctor_()
{
}

// public Fuse.Drawing.Tesselation.HalfEdge get_AnEdge() [instance] :41
::g::Fuse::Drawing::Tesselation::HalfEdge* Face::AnEdge()
{
    return _anEdge;
}

// public void set_AnEdge(Fuse.Drawing.Tesselation.HalfEdge value) [instance] :41
void Face::AnEdge(::g::Fuse::Drawing::Tesselation::HalfEdge* value)
{
    _anEdge = value;
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.HalfEdge> get_EdgeLoop() [instance] :45
uObject* Face::EdgeLoop()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Face", "get_EdgeLoop()");
    return (uObject*)::g::Fuse::Drawing::Tesselation::EdgeLoopEnumerable::New1(AnEdge());
}

// public generated bool get_IsInside() [instance] :48
bool Face::IsInside()
{
    return _IsInside;
}

// public generated void set_IsInside(bool value) [instance] :48
void Face::IsInside(bool value)
{
    _IsInside = value;
}

// public generated Fuse.Drawing.Tesselation.Face get_Next() [instance] :30
Face* Face::Next()
{
    return _Next;
}

// public generated void set_Next(Fuse.Drawing.Tesselation.Face value) [instance] :30
void Face::Next(Face* value)
{
    _Next = value;
}

// public Fuse.Drawing.Tesselation.Face get_Prev() [instance] :34
Face* Face::Prev()
{
    return _prev;
}

// public void set_Prev(Fuse.Drawing.Tesselation.Face value) [instance] :34
void Face::Prev(Face* value)
{
    _prev = value;
}

// public Fuse.Drawing.Contour ToContour() [instance] :64
::g::Fuse::Drawing::Contour* Face::ToContour()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Face", "ToContour()");
    return ::g::Fuse::Drawing::Contour::New2(true, (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[1/*Uno.Collections.EnumerableExtensions.Select<Fuse.Drawing.Tesselation.HalfEdge, float2>*/], EdgeLoop(), uDelegate::New(::TYPES[2/*Uno.Func<Fuse.Drawing.Tesselation.HalfEdge, float2>*/], (void*)Face__Coords_fn)));
}

// public Uno.Geometry.Triangle2D ToTriangle() [instance] :51
::g::Uno::Geometry::Triangle2D* Face::ToTriangle()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Face", "ToTriangle()");
    ::g::Fuse::Drawing::Tesselation::HalfEdge* ret2;
    ::g::Fuse::Drawing::Tesselation::HalfEdge* ret3;
    ::g::Fuse::Drawing::Tesselation::HalfEdge* ret4;
    uObject* iter = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(EdgeLoop()), ::TYPES[3/*Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.HalfEdge>*/]));

    if (!::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(iter), ::TYPES[4/*Uno.Collections.IEnumerator*/])))
        return NULL;

    ::g::Fuse::Drawing::Tesselation::HalfEdge* a = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(iter), ::TYPES[5/*Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.HalfEdge>*/]), &ret2), ret2);

    if (!::g::Uno::Collections::IEnumerator::MoveNext(uInterface(iter, ::TYPES[4/*Uno.Collections.IEnumerator*/])))
        return NULL;

    ::g::Fuse::Drawing::Tesselation::HalfEdge* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(iter, ::TYPES[5/*Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.HalfEdge>*/]), &ret3), ret3);

    if (!::g::Uno::Collections::IEnumerator::MoveNext(uInterface(iter, ::TYPES[4/*Uno.Collections.IEnumerator*/])))
        return NULL;

    ::g::Fuse::Drawing::Tesselation::HalfEdge* c = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(iter, ::TYPES[5/*Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.HalfEdge>*/]), &ret4), ret4);

    if (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(iter, ::TYPES[4/*Uno.Collections.IEnumerator*/])))
        return NULL;

    return ::g::Uno::Geometry::Triangle2D::New1(uPtr(uPtr(a)->Origin())->Coords(), uPtr(uPtr(b)->Origin())->Coords(), uPtr(uPtr(c)->Origin())->Coords());
}

// private static float2 Coords(Fuse.Drawing.Tesselation.HalfEdge edge) [static] :69
::g::Uno::Float2 Face::Coords(::g::Fuse::Drawing::Tesselation::HalfEdge* edge)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Face", "Coords(Fuse.Drawing.Tesselation.HalfEdge)");
    return uPtr(uPtr(edge)->Origin())->Coords();
}

// public static void KillFace(Fuse.Drawing.Tesselation.Face fDel, Fuse.Drawing.Tesselation.Face newLface) [static] :107
void Face::KillFace(Face* fDel, Face* newLface)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Face", "KillFace(Fuse.Drawing.Tesselation.Face,Fuse.Drawing.Tesselation.Face)");
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eStart = uPtr(fDel)->AnEdge();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* e = eStart;

    do
    {
        uPtr(e)->Left(newLface);
        e = uPtr(e)->LeftNext();
    }
    while (e != eStart);

    Face* fPrev = fDel->Prev();
    Face* fNext = fDel->Next();
    uPtr(fNext)->Prev(fPrev);
    uPtr(fPrev)->Next(fNext);
}

// public static Fuse.Drawing.Tesselation.Face MakeFace(Fuse.Drawing.Tesselation.HalfEdge eOrig, Fuse.Drawing.Tesselation.Face fNext) [static] :78
Face* Face::MakeFace(::g::Fuse::Drawing::Tesselation::HalfEdge* eOrig, Face* fNext)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Face", "MakeFace(Fuse.Drawing.Tesselation.HalfEdge,Fuse.Drawing.Tesselation.Face)");
    Face* fNew = Face::New1();
    Face* fPrev = uPtr(fNext)->Prev();
    fNew->Prev(fPrev);
    uPtr(fPrev)->Next(fNew);
    fNew->Next(fNext);
    fNext->Prev(fNew);
    fNew->AnEdge(eOrig);
    fNew->IsInside(fNext->IsInside());
    ::g::Fuse::Drawing::Tesselation::HalfEdge* e = eOrig;

    do
    {
        uPtr(e)->Left(fNew);
        e = uPtr(e)->LeftNext();
    }
    while (e != eOrig);

    return fNew;
}

// public generated Face New() [static] :28
Face* Face::New1()
{
    Face* obj1 = (Face*)uNew(Face_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/meshes/$.uno
// -------------------------------------------------------------------------------------------------------

// internal sealed class FacesEnumerable :594
// {
static void FacesEnumerable_build(uType* type)
{
    ::TYPES[6] = ::g::Fuse::Drawing::Tesselation::Face_typeof();
    type->SetBase(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::Face_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[6/*Fuse.Drawing.Tesselation.Face*/], NULL), offsetof(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type, interface0));
    type->SetFields(1,
        ::TYPES[6/*Fuse.Drawing.Tesselation.Face*/], offsetof(::g::Fuse::Drawing::Tesselation::FacesEnumerable, _head), 0);
}

::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* FacesEnumerable_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FacesEnumerable);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type);
    type = (::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type*)uClassType::New("Fuse.Drawing.Tesselation.FacesEnumerable", options);
    type->fp_build_ = FacesEnumerable_build;
    type->fp_GetNext = (void(*)(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable*, void*, uTRef))FacesEnumerable__GetNext_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__GetEnumerator_fn;
    return type;
}

// public FacesEnumerable(Fuse.Drawing.Tesselation.Face head) :598
void FacesEnumerable__ctor_1_fn(FacesEnumerable* __this, ::g::Fuse::Drawing::Tesselation::Face* head)
{
    __this->ctor_1(head);
}

// internal override sealed Fuse.Drawing.Tesselation.Face GetNext(Fuse.Drawing.Tesselation.Face v) :604
void FacesEnumerable__GetNext_fn(FacesEnumerable* __this, ::g::Fuse::Drawing::Tesselation::Face* v, ::g::Fuse::Drawing::Tesselation::Face** __retval)
{
    uStackFrame __("Fuse.Drawing.Tesselation.FacesEnumerable", "GetNext(Fuse.Drawing.Tesselation.Face)");
    return *__retval = (uPtr(v)->Next() == __this->_head) ? uCast< ::g::Fuse::Drawing::Tesselation::Face*>(NULL, ::TYPES[6/*Fuse.Drawing.Tesselation.Face*/]) : (::g::Fuse::Drawing::Tesselation::Face*)uPtr(v)->Next(), void();
}

// public FacesEnumerable New(Fuse.Drawing.Tesselation.Face head) :598
void FacesEnumerable__New1_fn(::g::Fuse::Drawing::Tesselation::Face* head, FacesEnumerable** __retval)
{
    *__retval = FacesEnumerable::New1(head);
}

// public FacesEnumerable(Fuse.Drawing.Tesselation.Face head) [instance] :598
void FacesEnumerable::ctor_1(::g::Fuse::Drawing::Tesselation::Face* head)
{
    uStackFrame __("Fuse.Drawing.Tesselation.FacesEnumerable", ".ctor(Fuse.Drawing.Tesselation.Face)");
    ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__ctor__fn(this, (uPtr(head)->Next() == head) ? uCast< ::g::Fuse::Drawing::Tesselation::Face*>(NULL, ::TYPES[6/*Fuse.Drawing.Tesselation.Face*/]) : (::g::Fuse::Drawing::Tesselation::Face*)uPtr(head)->Next());
    _head = head;
}

// public FacesEnumerable New(Fuse.Drawing.Tesselation.Face head) [static] :598
FacesEnumerable* FacesEnumerable::New1(::g::Fuse::Drawing::Tesselation::Face* head)
{
    FacesEnumerable* obj1 = (FacesEnumerable*)uNew(FacesEnumerable_typeof());
    obj1->ctor_1(head);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/sweep/$.uno
// ------------------------------------------------------------------------------------------------------

// internal static class Geom :128
// {
static void Geom_build(uType* type)
{
}

uClassType* Geom_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.Tesselation.Geom", options);
    type->fp_build_ = Geom_build;
    return type;
}

// public static float EdgeEval(Fuse.Drawing.Tesselation.Vertex u, Fuse.Drawing.Tesselation.Vertex v, Fuse.Drawing.Tesselation.Vertex w) :141
void Geom__EdgeEval_fn(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v, ::g::Fuse::Drawing::Tesselation::Vertex* w, float* __retval)
{
    *__retval = Geom::EdgeEval(u, v, w);
}

// public static float EdgeSign(Fuse.Drawing.Tesselation.Vertex u, Fuse.Drawing.Tesselation.Vertex v, Fuse.Drawing.Tesselation.Vertex w) :164
void Geom__EdgeSign_fn(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v, ::g::Fuse::Drawing::Tesselation::Vertex* w, float* __retval)
{
    *__retval = Geom::EdgeSign(u, v, w);
}

// public static double Interpolate(double ai, double x, double bi, double y) :243
void Geom__Interpolate_fn(double* ai, double* x, double* bi, double* y, double* __retval)
{
    *__retval = Geom::Interpolate(*ai, *x, *bi, *y);
}

// public static Fuse.Drawing.Tesselation.Vertex Intersect(Fuse.Drawing.Tesselation.Vertex o1p, Fuse.Drawing.Tesselation.Vertex d1p, Fuse.Drawing.Tesselation.Vertex o2p, Fuse.Drawing.Tesselation.Vertex d2p) :260
void Geom__Intersect_fn(::g::Fuse::Drawing::Tesselation::Vertex* o1p, ::g::Fuse::Drawing::Tesselation::Vertex* d1p, ::g::Fuse::Drawing::Tesselation::Vertex* o2p, ::g::Fuse::Drawing::Tesselation::Vertex* d2p, ::g::Fuse::Drawing::Tesselation::Vertex** __retval)
{
    *__retval = Geom::Intersect(o1p, d1p, o2p, d2p);
}

// private static void Swap(Fuse.Drawing.Tesselation.Vertex& a, Fuse.Drawing.Tesselation.Vertex& b) :253
void Geom__Swap_fn(::g::Fuse::Drawing::Tesselation::Vertex** a, ::g::Fuse::Drawing::Tesselation::Vertex** b)
{
    Geom::Swap(a, b);
}

// public static float TransEval(Fuse.Drawing.Tesselation.Vertex u, Fuse.Drawing.Tesselation.Vertex v, Fuse.Drawing.Tesselation.Vertex w) :194
void Geom__TransEval_fn(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v, ::g::Fuse::Drawing::Tesselation::Vertex* w, float* __retval)
{
    *__retval = Geom::TransEval(u, v, w);
}

// public static bool TransLeq(Fuse.Drawing.Tesselation.Vertex u, Fuse.Drawing.Tesselation.Vertex v) :186
void Geom__TransLeq_fn(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v, bool* __retval)
{
    *__retval = Geom::TransLeq(u, v);
}

// public static float TransSign(Fuse.Drawing.Tesselation.Vertex u, Fuse.Drawing.Tesselation.Vertex v, Fuse.Drawing.Tesselation.Vertex w) :214
void Geom__TransSign_fn(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v, ::g::Fuse::Drawing::Tesselation::Vertex* w, float* __retval)
{
    *__retval = Geom::TransSign(u, v, w);
}

// public static bool VertCCW(Fuse.Drawing.Tesselation.Vertex u, Fuse.Drawing.Tesselation.Vertex v, Fuse.Drawing.Tesselation.Vertex w) :233
void Geom__VertCCW_fn(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v, ::g::Fuse::Drawing::Tesselation::Vertex* w, bool* __retval)
{
    *__retval = Geom::VertCCW(u, v, w);
}

// public static double VertL1dist(Fuse.Drawing.Tesselation.Vertex u, Fuse.Drawing.Tesselation.Vertex v) :228
void Geom__VertL1dist_fn(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v, double* __retval)
{
    *__retval = Geom::VertL1dist(u, v);
}

// public static float EdgeEval(Fuse.Drawing.Tesselation.Vertex u, Fuse.Drawing.Tesselation.Vertex v, Fuse.Drawing.Tesselation.Vertex w) [static] :141
float Geom::EdgeEval(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v, ::g::Fuse::Drawing::Tesselation::Vertex* w)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Geom", "EdgeEval(Fuse.Drawing.Tesselation.Vertex,Fuse.Drawing.Tesselation.Vertex,Fuse.Drawing.Tesselation.Vertex)");
    double gapL = uPtr(v)->S - uPtr(u)->S;
    double gapR = uPtr(w)->S - v->S;
    double gap = gapL + gapR;

    if (gap > 9.9999997473787516e-06)
    {
        if (gapL < gapR)
            return (float)((uPtr(v)->T - uPtr(u)->T) + ((uPtr(u)->T - uPtr(w)->T) * (gapL / (gapL + gapR))));
        else
            return (float)((uPtr(v)->T - uPtr(w)->T) + ((uPtr(w)->T - uPtr(u)->T) * (gapR / (gapL + gapR))));
    }

    return 0.0f;
}

// public static float EdgeSign(Fuse.Drawing.Tesselation.Vertex u, Fuse.Drawing.Tesselation.Vertex v, Fuse.Drawing.Tesselation.Vertex w) [static] :164
float Geom::EdgeSign(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v, ::g::Fuse::Drawing::Tesselation::Vertex* w)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Geom", "EdgeSign(Fuse.Drawing.Tesselation.Vertex,Fuse.Drawing.Tesselation.Vertex,Fuse.Drawing.Tesselation.Vertex)");
    double gapL = uPtr(v)->S - uPtr(u)->S;
    double gapR = uPtr(w)->S - v->S;
    double gap = gapL + gapR;

    if (gap > 9.9999997473787516e-06)
        return (float)(((uPtr(v)->T - uPtr(w)->T) * gapL) + ((uPtr(v)->T - uPtr(u)->T) * gapR));

    return 0.0f;
}

// public static double Interpolate(double ai, double x, double bi, double y) [static] :243
double Geom::Interpolate(double ai, double x, double bi, double y)
{
    double a = ::g::Uno::Math::Max(0.0, ai);
    double b = ::g::Uno::Math::Max(0.0, bi);
    return (a <= b) ? (::g::Uno::Math::Abs(b) <= 9.9999997473787516e-06) ? (x + y) / 2.0 : x + ((y - x) * (a / (a + b))) : y + ((x - y) * (b / (a + b)));
}

// public static Fuse.Drawing.Tesselation.Vertex Intersect(Fuse.Drawing.Tesselation.Vertex o1p, Fuse.Drawing.Tesselation.Vertex d1p, Fuse.Drawing.Tesselation.Vertex o2p, Fuse.Drawing.Tesselation.Vertex d2p) [static] :260
::g::Fuse::Drawing::Tesselation::Vertex* Geom::Intersect(::g::Fuse::Drawing::Tesselation::Vertex* o1p, ::g::Fuse::Drawing::Tesselation::Vertex* d1p, ::g::Fuse::Drawing::Tesselation::Vertex* o2p, ::g::Fuse::Drawing::Tesselation::Vertex* d2p)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Geom", "Intersect(Fuse.Drawing.Tesselation.Vertex,Fuse.Drawing.Tesselation.Vertex,Fuse.Drawing.Tesselation.Vertex,Fuse.Drawing.Tesselation.Vertex)");
    ::g::Fuse::Drawing::Tesselation::Vertex* o1 = o1p, *d1 = d1p, *o2 = o2p, *d2 = d2p;
    ::g::Fuse::Drawing::Tesselation::Vertex* v = ::g::Fuse::Drawing::Tesselation::Vertex::New1();
    float z1, z2;

    if (!uPtr(o1)->VertLeq(d1))
        Geom::Swap(&o1, &d1);

    if (!uPtr(o2)->VertLeq(d2))
        Geom::Swap(&o2, &d2);

    if (!uPtr(o1)->VertLeq(o2))
    {
        Geom::Swap(&o1, &o2);
        Geom::Swap(&d1, &d2);
    }

    if (!uPtr(o2)->VertLeq(d1))
        uPtr(v)->S = ((uPtr(o2)->S + uPtr(d1)->S) / 2.0);
    else if (uPtr(d1)->VertLeq(d2))
    {
        z1 = Geom::EdgeEval(o1, o2, d1);
        z2 = Geom::EdgeEval(o2, d1, d2);

        if ((z1 + z2) < 0.0f)
        {
            z1 = -z1;
            z2 = -z2;
        }

        uPtr(v)->S = Geom::Interpolate((double)z1, uPtr(o2)->S, (double)z2, uPtr(d1)->S);
    }
    else
    {
        z1 = Geom::EdgeSign(o1, o2, d1);
        z2 = -Geom::EdgeSign(o1, d2, d1);

        if ((z1 + z2) < 0.0f)
        {
            z1 = -z1;
            z2 = -z2;
        }

        uPtr(v)->S = Geom::Interpolate((double)z1, uPtr(o2)->S, (double)z2, uPtr(d2)->S);
    }

    if (!Geom::TransLeq(o1, d1))
        Geom::Swap(&o1, &d1);

    if (!Geom::TransLeq(o2, d2))
        Geom::Swap(&o2, &d2);

    if (!Geom::TransLeq(o1, o2))
    {
        Geom::Swap(&o1, &o2);
        Geom::Swap(&d1, &d2);
    }

    if (!Geom::TransLeq(o2, d1))
        uPtr(v)->T = ((uPtr(o2)->T + uPtr(d1)->T) / 2.0);
    else if (Geom::TransLeq(d1, d2))
    {
        z1 = Geom::TransEval(o1, o2, d1);
        z2 = Geom::TransEval(o2, d1, d2);

        if ((z1 + z2) < 0.0f)
        {
            z1 = -z1;
            z2 = -z2;
        }

        uPtr(v)->T = Geom::Interpolate((double)z1, uPtr(o2)->T, (double)z2, uPtr(d1)->T);
    }
    else
    {
        z1 = Geom::TransSign(o1, o2, d1);
        z2 = -Geom::TransSign(o1, d2, d1);

        if ((z1 + z2) < 0.0f)
        {
            z1 = -z1;
            z2 = -z2;
        }

        uPtr(v)->T = Geom::Interpolate((double)z1, uPtr(o2)->T, (double)z2, uPtr(d2)->T);
    }

    return v;
}

// private static void Swap(Fuse.Drawing.Tesselation.Vertex& a, Fuse.Drawing.Tesselation.Vertex& b) [static] :253
void Geom::Swap(::g::Fuse::Drawing::Tesselation::Vertex** a, ::g::Fuse::Drawing::Tesselation::Vertex** b)
{
    ::g::Fuse::Drawing::Tesselation::Vertex* tmp = *a;
    *a = *b;
    *b = tmp;
}

// public static float TransEval(Fuse.Drawing.Tesselation.Vertex u, Fuse.Drawing.Tesselation.Vertex v, Fuse.Drawing.Tesselation.Vertex w) [static] :194
float Geom::TransEval(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v, ::g::Fuse::Drawing::Tesselation::Vertex* w)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Geom", "TransEval(Fuse.Drawing.Tesselation.Vertex,Fuse.Drawing.Tesselation.Vertex,Fuse.Drawing.Tesselation.Vertex)");
    double gapL = uPtr(v)->T - uPtr(u)->T;
    double gapR = uPtr(w)->T - v->T;

    if ((gapL + gapR) > 9.9999997473787516e-06)
    {
        if (gapL < gapR)
            return (float)((uPtr(v)->S - uPtr(u)->S) + ((uPtr(u)->S - uPtr(w)->S) * (gapL / (gapL + gapR))));
        else
            return (float)((uPtr(v)->S - uPtr(w)->S) + ((uPtr(w)->S - uPtr(u)->S) * (gapR / (gapL + gapR))));
    }

    return 0.0f;
}

// public static bool TransLeq(Fuse.Drawing.Tesselation.Vertex u, Fuse.Drawing.Tesselation.Vertex v) [static] :186
bool Geom::TransLeq(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Geom", "TransLeq(Fuse.Drawing.Tesselation.Vertex,Fuse.Drawing.Tesselation.Vertex)");
    return (uPtr(u)->T < uPtr(v)->T) || ((uPtr(u)->T == uPtr(v)->T) && (uPtr(u)->S <= uPtr(v)->S));
}

// public static float TransSign(Fuse.Drawing.Tesselation.Vertex u, Fuse.Drawing.Tesselation.Vertex v, Fuse.Drawing.Tesselation.Vertex w) [static] :214
float Geom::TransSign(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v, ::g::Fuse::Drawing::Tesselation::Vertex* w)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Geom", "TransSign(Fuse.Drawing.Tesselation.Vertex,Fuse.Drawing.Tesselation.Vertex,Fuse.Drawing.Tesselation.Vertex)");
    double gapL = uPtr(v)->T - uPtr(u)->T;
    double gapR = uPtr(w)->T - v->T;

    if ((gapL + gapR) > 9.9999997473787516e-06)
        return (float)(((uPtr(v)->S - uPtr(w)->S) * gapL) + ((uPtr(v)->S - uPtr(u)->S) * gapR));

    return 0.0f;
}

// public static bool VertCCW(Fuse.Drawing.Tesselation.Vertex u, Fuse.Drawing.Tesselation.Vertex v, Fuse.Drawing.Tesselation.Vertex w) [static] :233
bool Geom::VertCCW(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v, ::g::Fuse::Drawing::Tesselation::Vertex* w)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Geom", "VertCCW(Fuse.Drawing.Tesselation.Vertex,Fuse.Drawing.Tesselation.Vertex,Fuse.Drawing.Tesselation.Vertex)");
    return (((uPtr(u)->S * (uPtr(v)->T - uPtr(w)->T)) + (uPtr(v)->S * (uPtr(w)->T - uPtr(u)->T))) + (uPtr(w)->S * (uPtr(u)->T - uPtr(v)->T))) >= 0.0;
}

// public static double VertL1dist(Fuse.Drawing.Tesselation.Vertex u, Fuse.Drawing.Tesselation.Vertex v) [static] :228
double Geom::VertL1dist(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Geom", "VertL1dist(Fuse.Drawing.Tesselation.Vertex,Fuse.Drawing.Tesselation.Vertex)");
    return ::g::Uno::Math::Abs(uPtr(u)->S - uPtr(v)->S) + ::g::Uno::Math::Abs(uPtr(u)->T - uPtr(v)->T);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/meshes/$.uno
// -------------------------------------------------------------------------------------------------------

// internal sealed class HalfEdge :137
// {
static void HalfEdge_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Left edge ");
    ::STRINGS[4] = uString::Const(" <= ");
    ::STRINGS[5] = uString::Const("Right edge ");
    ::STRINGS[6] = uString::Const(" => ");
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::HalfEdge, _isFirst), 0,
        ::g::Fuse::Drawing::Tesselation::ActiveRegion_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::HalfEdge, _ActiveRegion), 0,
        ::g::Fuse::Drawing::Tesselation::Face_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::HalfEdge, _Left), 0,
        type, offsetof(::g::Fuse::Drawing::Tesselation::HalfEdge, _LeftNext), 0,
        type, offsetof(::g::Fuse::Drawing::Tesselation::HalfEdge, _Next), 0,
        ::g::Fuse::Drawing::Tesselation::Vertex_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::HalfEdge, _Origin), 0,
        type, offsetof(::g::Fuse::Drawing::Tesselation::HalfEdge, _OriginNext), 0,
        type, offsetof(::g::Fuse::Drawing::Tesselation::HalfEdge, _Sym), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::HalfEdge, _Winding), 0);
}

uType* HalfEdge_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(HalfEdge);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Tesselation.HalfEdge", options);
    type->fp_build_ = HalfEdge_build;
    type->fp_ToString = (void(*)(uObject*, uString**))HalfEdge__ToString_fn;
    return type;
}

// public HalfEdge(bool isFirst) :236
void HalfEdge__ctor__fn(HalfEdge* __this, bool* isFirst)
{
    __this->ctor_(*isFirst);
}

// public generated Fuse.Drawing.Tesselation.ActiveRegion get_ActiveRegion() :146
void HalfEdge__get_ActiveRegion_fn(HalfEdge* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion** __retval)
{
    *__retval = __this->ActiveRegion();
}

// public generated void set_ActiveRegion(Fuse.Drawing.Tesselation.ActiveRegion value) :146
void HalfEdge__set_ActiveRegion_fn(HalfEdge* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* value)
{
    __this->ActiveRegion(value);
}

// private Fuse.Drawing.Tesselation.HalfEdge AddEdgeVertex() :269
void HalfEdge__AddEdgeVertex_fn(HalfEdge* __this, HalfEdge** __retval)
{
    *__retval = __this->AddEdgeVertex();
}

// public static void AddWinding(Fuse.Drawing.Tesselation.HalfEdge eDst, Fuse.Drawing.Tesselation.HalfEdge eSrc) :286
void HalfEdge__AddWinding_fn(HalfEdge* eDst, HalfEdge* eSrc)
{
    HalfEdge::AddWinding(eDst, eSrc);
}

// public Fuse.Drawing.Tesselation.Vertex get_Destination() :207
void HalfEdge__get_Destination_fn(HalfEdge* __this, ::g::Fuse::Drawing::Tesselation::Vertex** __retval)
{
    *__retval = __this->Destination();
}

// public void set_Destination(Fuse.Drawing.Tesselation.Vertex value) :208
void HalfEdge__set_Destination_fn(HalfEdge* __this, ::g::Fuse::Drawing::Tesselation::Vertex* value)
{
    __this->Destination(value);
}

// public Fuse.Drawing.Tesselation.HalfEdge get_DestinationNext() :213
void HalfEdge__get_DestinationNext_fn(HalfEdge* __this, HalfEdge** __retval)
{
    *__retval = __this->DestinationNext();
}

// public Fuse.Drawing.Tesselation.HalfEdge get_DestinationPrev() :218
void HalfEdge__get_DestinationPrev_fn(HalfEdge* __this, HalfEdge** __retval)
{
    *__retval = __this->DestinationPrev();
}

// public static void ExchangeOriginNextAkaSplice(Fuse.Drawing.Tesselation.HalfEdge a, Fuse.Drawing.Tesselation.HalfEdge b) :336
void HalfEdge__ExchangeOriginNextAkaSplice_fn(HalfEdge* a, HalfEdge* b)
{
    HalfEdge::ExchangeOriginNextAkaSplice(a, b);
}

// public bool get_GoesLeft() :223
void HalfEdge__get_GoesLeft_fn(HalfEdge* __this, bool* __retval)
{
    *__retval = __this->GoesLeft();
}

// public bool get_GoesRight() :228
void HalfEdge__get_GoesRight_fn(HalfEdge* __this, bool* __retval)
{
    *__retval = __this->GoesRight();
}

// public bool get_IsBoundaryEdge() :233
void HalfEdge__get_IsBoundaryEdge_fn(HalfEdge* __this, bool* __retval)
{
    *__retval = __this->IsBoundaryEdge();
}

// public static void KillEdge(Fuse.Drawing.Tesselation.HalfEdge eDel) :349
void HalfEdge__KillEdge_fn(HalfEdge* eDel)
{
    HalfEdge::KillEdge(eDel);
}

// public generated Fuse.Drawing.Tesselation.Face get_Left() :177
void HalfEdge__get_Left_fn(HalfEdge* __this, ::g::Fuse::Drawing::Tesselation::Face** __retval)
{
    *__retval = __this->Left();
}

// public generated void set_Left(Fuse.Drawing.Tesselation.Face value) :177
void HalfEdge__set_Left_fn(HalfEdge* __this, ::g::Fuse::Drawing::Tesselation::Face* value)
{
    __this->Left(value);
}

// public generated Fuse.Drawing.Tesselation.HalfEdge get_LeftNext() :182
void HalfEdge__get_LeftNext_fn(HalfEdge* __this, HalfEdge** __retval)
{
    *__retval = __this->LeftNext();
}

// public generated void set_LeftNext(Fuse.Drawing.Tesselation.HalfEdge value) :182
void HalfEdge__set_LeftNext_fn(HalfEdge* __this, HalfEdge* value)
{
    __this->LeftNext(value);
}

// public Fuse.Drawing.Tesselation.HalfEdge get_LeftPrev() :186
void HalfEdge__get_LeftPrev_fn(HalfEdge* __this, HalfEdge** __retval)
{
    *__retval = __this->LeftPrev();
}

// public static Fuse.Drawing.Tesselation.HalfEdge MakeEdge(Fuse.Drawing.Tesselation.HalfEdge eNext) :295
void HalfEdge__MakeEdge_fn(HalfEdge* eNext, HalfEdge** __retval)
{
    *__retval = HalfEdge::MakeEdge(eNext);
}

// public HalfEdge New(bool isFirst) :236
void HalfEdge__New1_fn(bool* isFirst, HalfEdge** __retval)
{
    *__retval = HalfEdge::New1(*isFirst);
}

// public generated Fuse.Drawing.Tesselation.HalfEdge get_Next() :151
void HalfEdge__get_Next_fn(HalfEdge* __this, HalfEdge** __retval)
{
    *__retval = __this->Next();
}

// public generated void set_Next(Fuse.Drawing.Tesselation.HalfEdge value) :151
void HalfEdge__set_Next_fn(HalfEdge* __this, HalfEdge* value)
{
    __this->Next(value);
}

// public generated Fuse.Drawing.Tesselation.Vertex get_Origin() :165
void HalfEdge__get_Origin_fn(HalfEdge* __this, ::g::Fuse::Drawing::Tesselation::Vertex** __retval)
{
    *__retval = __this->Origin();
}

// public generated void set_Origin(Fuse.Drawing.Tesselation.Vertex value) :165
void HalfEdge__set_Origin_fn(HalfEdge* __this, ::g::Fuse::Drawing::Tesselation::Vertex* value)
{
    __this->Origin(value);
}

// public generated Fuse.Drawing.Tesselation.HalfEdge get_OriginNext() :170
void HalfEdge__get_OriginNext_fn(HalfEdge* __this, HalfEdge** __retval)
{
    *__retval = __this->OriginNext();
}

// public generated void set_OriginNext(Fuse.Drawing.Tesselation.HalfEdge value) :170
void HalfEdge__set_OriginNext_fn(HalfEdge* __this, HalfEdge* value)
{
    __this->OriginNext(value);
}

// public Fuse.Drawing.Tesselation.HalfEdge get_OriginPrev() :174
void HalfEdge__get_OriginPrev_fn(HalfEdge* __this, HalfEdge** __retval)
{
    *__retval = __this->OriginPrev();
}

// public Fuse.Drawing.Tesselation.Face get_Right() :191
void HalfEdge__get_Right_fn(HalfEdge* __this, ::g::Fuse::Drawing::Tesselation::Face** __retval)
{
    *__retval = __this->Right();
}

// public void set_Right(Fuse.Drawing.Tesselation.Face value) :192
void HalfEdge__set_Right_fn(HalfEdge* __this, ::g::Fuse::Drawing::Tesselation::Face* value)
{
    __this->Right(value);
}

// public Fuse.Drawing.Tesselation.HalfEdge get_RightNext() :197
void HalfEdge__get_RightNext_fn(HalfEdge* __this, HalfEdge** __retval)
{
    *__retval = __this->RightNext();
}

// public Fuse.Drawing.Tesselation.HalfEdge get_RightPrev() :202
void HalfEdge__get_RightPrev_fn(HalfEdge* __this, HalfEdge** __retval)
{
    *__retval = __this->RightPrev();
}

// public Fuse.Drawing.Tesselation.HalfEdge Split() :245
void HalfEdge__Split_fn(HalfEdge* __this, HalfEdge** __retval)
{
    *__retval = __this->Split();
}

// public generated Fuse.Drawing.Tesselation.HalfEdge get_Sym() :163
void HalfEdge__get_Sym_fn(HalfEdge* __this, HalfEdge** __retval)
{
    *__retval = __this->Sym();
}

// public generated void set_Sym(Fuse.Drawing.Tesselation.HalfEdge value) :163
void HalfEdge__set_Sym_fn(HalfEdge* __this, HalfEdge* value)
{
    __this->Sym(value);
}

// public override sealed string ToString() :377
void HalfEdge__ToString_fn(HalfEdge* __this, uString** __retval)
{
    uStackFrame __("Fuse.Drawing.Tesselation.HalfEdge", "ToString()");
    return *__retval = __this->GoesLeft() ? (uString*)::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[3/*"Left edge "*/], __this->Destination()), ::STRINGS[4/*" <= "*/]), __this->Origin()) : (uString*)::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[5/*"Right edge "*/], __this->Origin()), ::STRINGS[6/*" => "*/]), __this->Destination()), void();
}

// public generated int get_Winding() :158
void HalfEdge__get_Winding_fn(HalfEdge* __this, int* __retval)
{
    *__retval = __this->Winding();
}

// public generated void set_Winding(int value) :158
void HalfEdge__set_Winding_fn(HalfEdge* __this, int* value)
{
    __this->Winding(*value);
}

// public HalfEdge(bool isFirst) [instance] :236
void HalfEdge::ctor_(bool isFirst)
{
    _isFirst = isFirst;
}

// public generated Fuse.Drawing.Tesselation.ActiveRegion get_ActiveRegion() [instance] :146
::g::Fuse::Drawing::Tesselation::ActiveRegion* HalfEdge::ActiveRegion()
{
    return _ActiveRegion;
}

// public generated void set_ActiveRegion(Fuse.Drawing.Tesselation.ActiveRegion value) [instance] :146
void HalfEdge::ActiveRegion(::g::Fuse::Drawing::Tesselation::ActiveRegion* value)
{
    _ActiveRegion = value;
}

// private Fuse.Drawing.Tesselation.HalfEdge AddEdgeVertex() [instance] :269
HalfEdge* HalfEdge::AddEdgeVertex()
{
    uStackFrame __("Fuse.Drawing.Tesselation.HalfEdge", "AddEdgeVertex()");
    ::g::Fuse::Drawing::Tesselation::Face* ind1;
    HalfEdge* newEdge = HalfEdge::MakeEdge(this);
    HalfEdge* eNewSym = uPtr(newEdge)->Sym();
    HalfEdge::ExchangeOriginNextAkaSplice(newEdge, LeftNext());
    newEdge->Origin(Destination());
    ::g::Fuse::Drawing::Tesselation::Vertex::MakeVertex(eNewSym, newEdge->Origin());
    newEdge->Left((ind1 = Left(), uPtr(eNewSym)->Left(ind1), ind1));
    return newEdge;
}

// public Fuse.Drawing.Tesselation.Vertex get_Destination() [instance] :207
::g::Fuse::Drawing::Tesselation::Vertex* HalfEdge::Destination()
{
    uStackFrame __("Fuse.Drawing.Tesselation.HalfEdge", "get_Destination()");
    return uPtr(Sym())->Origin();
}

// public void set_Destination(Fuse.Drawing.Tesselation.Vertex value) [instance] :208
void HalfEdge::Destination(::g::Fuse::Drawing::Tesselation::Vertex* value)
{
    uStackFrame __("Fuse.Drawing.Tesselation.HalfEdge", "set_Destination(Fuse.Drawing.Tesselation.Vertex)");
    uPtr(Sym())->Origin(value);
}

// public Fuse.Drawing.Tesselation.HalfEdge get_DestinationNext() [instance] :213
HalfEdge* HalfEdge::DestinationNext()
{
    uStackFrame __("Fuse.Drawing.Tesselation.HalfEdge", "get_DestinationNext()");
    return uPtr(RightPrev())->Sym();
}

// public Fuse.Drawing.Tesselation.HalfEdge get_DestinationPrev() [instance] :218
HalfEdge* HalfEdge::DestinationPrev()
{
    uStackFrame __("Fuse.Drawing.Tesselation.HalfEdge", "get_DestinationPrev()");
    return uPtr(LeftNext())->Sym();
}

// public bool get_GoesLeft() [instance] :223
bool HalfEdge::GoesLeft()
{
    uStackFrame __("Fuse.Drawing.Tesselation.HalfEdge", "get_GoesLeft()");
    return uPtr(Destination())->VertLeq(Origin());
}

// public bool get_GoesRight() [instance] :228
bool HalfEdge::GoesRight()
{
    uStackFrame __("Fuse.Drawing.Tesselation.HalfEdge", "get_GoesRight()");
    return uPtr(Origin())->VertLeq(Destination());
}

// public bool get_IsBoundaryEdge() [instance] :233
bool HalfEdge::IsBoundaryEdge()
{
    uStackFrame __("Fuse.Drawing.Tesselation.HalfEdge", "get_IsBoundaryEdge()");
    return uPtr(Right())->IsInside() != uPtr(Left())->IsInside();
}

// public generated Fuse.Drawing.Tesselation.Face get_Left() [instance] :177
::g::Fuse::Drawing::Tesselation::Face* HalfEdge::Left()
{
    return _Left;
}

// public generated void set_Left(Fuse.Drawing.Tesselation.Face value) [instance] :177
void HalfEdge::Left(::g::Fuse::Drawing::Tesselation::Face* value)
{
    _Left = value;
}

// public generated Fuse.Drawing.Tesselation.HalfEdge get_LeftNext() [instance] :182
HalfEdge* HalfEdge::LeftNext()
{
    return _LeftNext;
}

// public generated void set_LeftNext(Fuse.Drawing.Tesselation.HalfEdge value) [instance] :182
void HalfEdge::LeftNext(HalfEdge* value)
{
    _LeftNext = value;
}

// public Fuse.Drawing.Tesselation.HalfEdge get_LeftPrev() [instance] :186
HalfEdge* HalfEdge::LeftPrev()
{
    uStackFrame __("Fuse.Drawing.Tesselation.HalfEdge", "get_LeftPrev()");
    return uPtr(OriginNext())->Sym();
}

// public generated Fuse.Drawing.Tesselation.HalfEdge get_Next() [instance] :151
HalfEdge* HalfEdge::Next()
{
    return _Next;
}

// public generated void set_Next(Fuse.Drawing.Tesselation.HalfEdge value) [instance] :151
void HalfEdge::Next(HalfEdge* value)
{
    _Next = value;
}

// public generated Fuse.Drawing.Tesselation.Vertex get_Origin() [instance] :165
::g::Fuse::Drawing::Tesselation::Vertex* HalfEdge::Origin()
{
    return _Origin;
}

// public generated void set_Origin(Fuse.Drawing.Tesselation.Vertex value) [instance] :165
void HalfEdge::Origin(::g::Fuse::Drawing::Tesselation::Vertex* value)
{
    _Origin = value;
}

// public generated Fuse.Drawing.Tesselation.HalfEdge get_OriginNext() [instance] :170
HalfEdge* HalfEdge::OriginNext()
{
    return _OriginNext;
}

// public generated void set_OriginNext(Fuse.Drawing.Tesselation.HalfEdge value) [instance] :170
void HalfEdge::OriginNext(HalfEdge* value)
{
    _OriginNext = value;
}

// public Fuse.Drawing.Tesselation.HalfEdge get_OriginPrev() [instance] :174
HalfEdge* HalfEdge::OriginPrev()
{
    uStackFrame __("Fuse.Drawing.Tesselation.HalfEdge", "get_OriginPrev()");
    return uPtr(Sym())->LeftNext();
}

// public Fuse.Drawing.Tesselation.Face get_Right() [instance] :191
::g::Fuse::Drawing::Tesselation::Face* HalfEdge::Right()
{
    uStackFrame __("Fuse.Drawing.Tesselation.HalfEdge", "get_Right()");
    return uPtr(Sym())->Left();
}

// public void set_Right(Fuse.Drawing.Tesselation.Face value) [instance] :192
void HalfEdge::Right(::g::Fuse::Drawing::Tesselation::Face* value)
{
    uStackFrame __("Fuse.Drawing.Tesselation.HalfEdge", "set_Right(Fuse.Drawing.Tesselation.Face)");
    uPtr(Sym())->Left(value);
}

// public Fuse.Drawing.Tesselation.HalfEdge get_RightNext() [instance] :197
HalfEdge* HalfEdge::RightNext()
{
    uStackFrame __("Fuse.Drawing.Tesselation.HalfEdge", "get_RightNext()");
    return uPtr(OriginPrev())->Sym();
}

// public Fuse.Drawing.Tesselation.HalfEdge get_RightPrev() [instance] :202
HalfEdge* HalfEdge::RightPrev()
{
    uStackFrame __("Fuse.Drawing.Tesselation.HalfEdge", "get_RightPrev()");
    return uPtr(Sym())->OriginNext();
}

// public Fuse.Drawing.Tesselation.HalfEdge Split() [instance] :245
HalfEdge* HalfEdge::Split()
{
    uStackFrame __("Fuse.Drawing.Tesselation.HalfEdge", "Split()");
    HalfEdge* tempHalfEdge = AddEdgeVertex();
    HalfEdge* newEdge = uPtr(tempHalfEdge)->Sym();
    HalfEdge::ExchangeOriginNextAkaSplice(Sym(), uPtr(Sym())->OriginPrev());
    HalfEdge::ExchangeOriginNextAkaSplice(Sym(), newEdge);
    Destination(uPtr(newEdge)->Origin());
    uPtr(newEdge->Destination())->AnEdge(newEdge->Sym());
    newEdge->Right(Right());
    newEdge->Winding(Winding());
    uPtr(newEdge->Sym())->Winding(uPtr(Sym())->Winding());
    return newEdge;
}

// public generated Fuse.Drawing.Tesselation.HalfEdge get_Sym() [instance] :163
HalfEdge* HalfEdge::Sym()
{
    return _Sym;
}

// public generated void set_Sym(Fuse.Drawing.Tesselation.HalfEdge value) [instance] :163
void HalfEdge::Sym(HalfEdge* value)
{
    _Sym = value;
}

// public generated int get_Winding() [instance] :158
int HalfEdge::Winding()
{
    return _Winding;
}

// public generated void set_Winding(int value) [instance] :158
void HalfEdge::Winding(int value)
{
    _Winding = value;
}

// public static void AddWinding(Fuse.Drawing.Tesselation.HalfEdge eDst, Fuse.Drawing.Tesselation.HalfEdge eSrc) [static] :286
void HalfEdge::AddWinding(HalfEdge* eDst, HalfEdge* eSrc)
{
    uStackFrame __("Fuse.Drawing.Tesselation.HalfEdge", "AddWinding(Fuse.Drawing.Tesselation.HalfEdge,Fuse.Drawing.Tesselation.HalfEdge)");
    uPtr(eDst)->Winding(uPtr(eDst)->Winding() + uPtr(eSrc)->Winding());
    uPtr(eDst->Sym())->Winding(uPtr(eDst->Sym())->Winding() + uPtr(eSrc->Sym())->Winding());
}

// public static void ExchangeOriginNextAkaSplice(Fuse.Drawing.Tesselation.HalfEdge a, Fuse.Drawing.Tesselation.HalfEdge b) [static] :336
void HalfEdge::ExchangeOriginNextAkaSplice(HalfEdge* a, HalfEdge* b)
{
    uStackFrame __("Fuse.Drawing.Tesselation.HalfEdge", "ExchangeOriginNextAkaSplice(Fuse.Drawing.Tesselation.HalfEdge,Fuse.Drawing.Tesselation.HalfEdge)");
    HalfEdge* aOnext = uPtr(a)->OriginNext();
    HalfEdge* bOnext = uPtr(b)->OriginNext();
    uPtr(uPtr(aOnext)->Sym())->LeftNext(b);
    uPtr(uPtr(bOnext)->Sym())->LeftNext(a);
    a->OriginNext(bOnext);
    b->OriginNext(aOnext);
}

// public static void KillEdge(Fuse.Drawing.Tesselation.HalfEdge eDel) [static] :349
void HalfEdge::KillEdge(HalfEdge* eDel)
{
    uStackFrame __("Fuse.Drawing.Tesselation.HalfEdge", "KillEdge(Fuse.Drawing.Tesselation.HalfEdge)");

    if (uPtr(uPtr(eDel)->Sym())->_isFirst)
        eDel = uPtr(eDel)->Sym();

    HalfEdge* eNext = uPtr(eDel)->Next();
    HalfEdge* ePrev = uPtr(eDel->Sym())->Next();
    uPtr(uPtr(eNext)->Sym())->Next(ePrev);
    uPtr(uPtr(ePrev)->Sym())->Next(eNext);
    uPtr(eDel->Sym())->Sym(NULL);
    uPtr(eDel->Sym())->Next(NULL);
    uPtr(eDel->Sym())->Origin(NULL);
    uPtr(eDel->Sym())->OriginNext(NULL);
    uPtr(eDel->Sym())->Left(NULL);
    uPtr(eDel->Sym())->LeftNext(NULL);
    eDel->Sym(NULL);
    eDel->Next(NULL);
    eDel->Origin(NULL);
    eDel->OriginNext(NULL);
    eDel->Left(NULL);
    eDel->LeftNext(NULL);
}

// public static Fuse.Drawing.Tesselation.HalfEdge MakeEdge(Fuse.Drawing.Tesselation.HalfEdge eNext) [static] :295
HalfEdge* HalfEdge::MakeEdge(HalfEdge* eNext)
{
    uStackFrame __("Fuse.Drawing.Tesselation.HalfEdge", "MakeEdge(Fuse.Drawing.Tesselation.HalfEdge)");
    HalfEdge* e = HalfEdge::New1(true);
    HalfEdge* eSym = HalfEdge::New1(false);

    if (uPtr(uPtr(eNext)->Sym())->_isFirst)
        eNext = uPtr(eNext)->Sym();

    HalfEdge* ePrev = uPtr(uPtr(eNext)->Sym())->Next();
    eSym->Next(ePrev);
    uPtr(uPtr(ePrev)->Sym())->Next(e);
    e->Next(eNext);
    uPtr(eNext->Sym())->Next(eSym);
    e->Sym(eSym);
    e->OriginNext(e);
    e->LeftNext(eSym);
    e->Origin(NULL);
    e->Left(NULL);
    e->Winding(0);
    e->ActiveRegion(NULL);
    eSym->Sym(e);
    eSym->OriginNext(eSym);
    eSym->LeftNext(e);
    eSym->Origin(NULL);
    eSym->Left(NULL);
    eSym->Winding(0);
    eSym->ActiveRegion(NULL);
    return e;
}

// public HalfEdge New(bool isFirst) [static] :236
HalfEdge* HalfEdge::New1(bool isFirst)
{
    HalfEdge* obj2 = (HalfEdge*)uNew(HalfEdge_typeof());
    obj2->ctor_(isFirst);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/meshes/$.uno
// -------------------------------------------------------------------------------------------------------

// internal partial sealed class Mesh :421
// {
static void Mesh_build(uType* type)
{
    ::STRINGS[7] = uString::Const("eDel.Origin was null");
    ::STRINGS[8] = uString::Const("eDel.Destination was null ");
    ::TYPES[3] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::HalfEdge_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[5] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::HalfEdge_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::Face_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::Face_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(9/*Select<Fuse.Drawing.Tesselation.Face, Fuse.Drawing.Contour>*/, ::g::Fuse::Drawing::Tesselation::Face_typeof(), ::g::Fuse::Drawing::Contour_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::Face_typeof(), ::g::Fuse::Drawing::Contour_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(14/*Where<Fuse.Drawing.Tesselation.Face>*/, ::g::Fuse::Drawing::Tesselation::Face_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::Face_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::Drawing::Tesselation::HalfEdge_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::Mesh, _edgesHeadSym), 0,
        ::g::Fuse::Drawing::Tesselation::HalfEdge_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::Mesh, EdgesHead), 0,
        ::g::Fuse::Drawing::Tesselation::Face_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::Mesh, FacesHead), 0,
        ::g::Fuse::Drawing::Tesselation::Vertex_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::Mesh, VerticesHead), 0);
}

uType* Mesh_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Mesh);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Tesselation.Mesh", options);
    type->fp_build_ = Mesh_build;
    type->fp_ctor_ = (void*)Mesh__New1_fn;
    return type;
}

// public Mesh() :665
void Mesh__ctor__fn(Mesh* __this)
{
    __this->ctor_();
}

// public void Add(Fuse.Drawing.Tesselation.Mesh mesh2) :990
void Mesh__Add_fn(Mesh* __this, Mesh* mesh2)
{
    __this->Add(mesh2);
}

// public void CheckConsistency() :788
void Mesh__CheckConsistency_fn(Mesh* __this)
{
    __this->CheckConsistency();
}

// public void ComputeInterior(Uno.Predicate<int> windingRule) :430
void Mesh__ComputeInterior_fn(Mesh* __this, uDelegate* windingRule)
{
    __this->ComputeInterior(windingRule);
}

// public Fuse.Drawing.Tesselation.HalfEdge Connect(Fuse.Drawing.Tesselation.HalfEdge eOrg, Fuse.Drawing.Tesselation.HalfEdge eDst) :1055
void Mesh__Connect_fn(Mesh* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* eOrg, ::g::Fuse::Drawing::Tesselation::HalfEdge* eDst, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval)
{
    *__retval = __this->Connect(eOrg, eDst);
}

// private Fuse.Drawing.Contour CreateContour(Fuse.Drawing.Tesselation.Face f) :777
void Mesh__CreateContour_fn(Mesh* __this, ::g::Fuse::Drawing::Tesselation::Face* f, ::g::Fuse::Drawing::Contour** __retval)
{
    *__retval = __this->CreateContour(f);
}

// public void Delete() :1029
void Mesh__Delete_fn(Mesh* __this)
{
    __this->Delete();
}

// public void DeleteEdge(Fuse.Drawing.Tesselation.HalfEdge eDel) :864
void Mesh__DeleteEdge_fn(Mesh* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* eDel)
{
    __this->DeleteEdge(eDel);
}

// public void DeleteInternalEdges() :556
void Mesh__DeleteInternalEdges_fn(Mesh* __this)
{
    __this->DeleteInternalEdges();
}

// public void DiscardExterior() :528
void Mesh__DiscardExterior_fn(Mesh* __this)
{
    __this->DiscardExterior();
}

// public void Dispose() :693
void Mesh__Dispose_fn(Mesh* __this)
{
    __this->Dispose();
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.HalfEdge> get_Edges() :660
void Mesh__get_Edges_fn(Mesh* __this, uObject** __retval)
{
    *__retval = __this->Edges();
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.Face> get_Faces() :647
void Mesh__get_Faces_fn(Mesh* __this, uObject** __retval)
{
    *__retval = __this->Faces();
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Contour> GetContours() :773
void Mesh__GetContours_fn(Mesh* __this, uObject** __retval)
{
    *__retval = __this->GetContours();
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.Face> get_InteriorFaces() :653
void Mesh__get_InteriorFaces_fn(Mesh* __this, uObject** __retval)
{
    *__retval = __this->InteriorFaces();
}

// private bool IsInside(Fuse.Drawing.Tesselation.Face face) :650
void Mesh__IsInside_fn(Mesh* __this, ::g::Fuse::Drawing::Tesselation::Face* face, bool* __retval)
{
    *__retval = __this->IsInside(face);
}

// public Fuse.Drawing.Tesselation.HalfEdge MakeEdge() :779
void Mesh__MakeEdge_fn(Mesh* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval)
{
    *__retval = __this->MakeEdge();
}

// public Mesh New() :665
void Mesh__New1_fn(Mesh** __retval)
{
    *__retval = Mesh::New1();
}

// public void SetWindingNumber(int value) :543
void Mesh__SetWindingNumber_fn(Mesh* __this, int* value)
{
    __this->SetWindingNumber(*value);
}

// public void Splice(Fuse.Drawing.Tesselation.HalfEdge eOrg, Fuse.Drawing.Tesselation.HalfEdge eDst) :1116
void Mesh__Splice_fn(Mesh* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* eOrg, ::g::Fuse::Drawing::Tesselation::HalfEdge* eDst)
{
    __this->Splice(eOrg, eDst);
}

// public Fuse.Drawing.Tesselation.HalfEdge SplitEdge(Fuse.Drawing.Tesselation.HalfEdge e) :1039
void Mesh__SplitEdge_fn(Mesh* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* e, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval)
{
    *__retval = __this->SplitEdge(e);
}

// public void TessellateInterior() :438
void Mesh__TessellateInterior_fn(Mesh* __this)
{
    __this->TessellateInterior();
}

// private void TessellateMonoRegion(Fuse.Drawing.Tesselation.Face face) :476
void Mesh__TessellateMonoRegion_fn(Mesh* __this, ::g::Fuse::Drawing::Tesselation::Face* face)
{
    __this->TessellateMonoRegion(face);
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.Vertex> get_Vertices() :641
void Mesh__get_Vertices_fn(Mesh* __this, uObject** __retval)
{
    *__retval = __this->Vertices();
}

// public void ZapFace(Fuse.Drawing.Tesselation.Face fZap) :935
void Mesh__ZapFace_fn(Mesh* __this, ::g::Fuse::Drawing::Tesselation::Face* fZap)
{
    __this->ZapFace(fZap);
}

// public Mesh() [instance] :665
void Mesh::ctor_()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", ".ctor()");
    ::g::Fuse::Drawing::Tesselation::Vertex* ind7;
    ::g::Fuse::Drawing::Tesselation::Face* ind8;
    VerticesHead = ::g::Fuse::Drawing::Tesselation::Vertex::New1();
    FacesHead = ::g::Fuse::Drawing::Tesselation::Face::New1();
    EdgesHead = ::g::Fuse::Drawing::Tesselation::HalfEdge::New1(true);
    _edgesHeadSym = ::g::Fuse::Drawing::Tesselation::HalfEdge::New1(false);
    uPtr(VerticesHead)->Next((ind7 = VerticesHead, uPtr(VerticesHead)->Prev(ind7), ind7));
    uPtr(VerticesHead)->AnEdge(NULL);
    uPtr(FacesHead)->Next((ind8 = FacesHead, uPtr(FacesHead)->Prev(ind8), ind8));
    uPtr(FacesHead)->AnEdge(NULL);
    uPtr(FacesHead)->IsInside(false);
    uPtr(EdgesHead)->Next(EdgesHead);
    uPtr(EdgesHead)->Sym(_edgesHeadSym);
    uPtr(EdgesHead)->OriginNext(NULL);
    uPtr(EdgesHead)->LeftNext(NULL);
    uPtr(EdgesHead)->Origin(NULL);
    uPtr(EdgesHead)->Left(NULL);
    uPtr(EdgesHead)->Winding(0);
    uPtr(EdgesHead)->ActiveRegion(NULL);
    uPtr(_edgesHeadSym)->Next(_edgesHeadSym);
    uPtr(_edgesHeadSym)->Sym(EdgesHead);
    uPtr(_edgesHeadSym)->OriginNext(NULL);
    uPtr(_edgesHeadSym)->LeftNext(NULL);
    uPtr(_edgesHeadSym)->Origin(NULL);
    uPtr(_edgesHeadSym)->Left(NULL);
    uPtr(_edgesHeadSym)->Winding(0);
    uPtr(_edgesHeadSym)->ActiveRegion(NULL);
}

// public void Add(Fuse.Drawing.Tesselation.Mesh mesh2) [instance] :990
void Mesh::Add(Mesh* mesh2)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "Add(Fuse.Drawing.Tesselation.Mesh)");
    Mesh* mesh1 = this;
    ::g::Fuse::Drawing::Tesselation::Face* f1 = mesh1->FacesHead;
    ::g::Fuse::Drawing::Tesselation::Vertex* v1 = mesh1->VerticesHead;
    ::g::Fuse::Drawing::Tesselation::HalfEdge* e1 = mesh1->EdgesHead;
    ::g::Fuse::Drawing::Tesselation::Face* f2 = uPtr(mesh2)->FacesHead;
    ::g::Fuse::Drawing::Tesselation::Vertex* v2 = mesh2->VerticesHead;
    ::g::Fuse::Drawing::Tesselation::HalfEdge* e2 = mesh2->EdgesHead;

    if (uPtr(f2)->Next() != f2)
    {
        uPtr(uPtr(f1)->Prev())->Next(uPtr(f2)->Next());
        uPtr(f2->Next())->Prev(f1->Prev());
        uPtr(f2->Prev())->Next(f1);
        f1->Prev(f2->Prev());
    }

    if (uPtr(v2)->Next() != v2)
    {
        uPtr(uPtr(v1)->Prev())->Next(uPtr(v2)->Next());
        uPtr(v2->Next())->Prev(v1->Prev());
        uPtr(v2->Prev())->Next(v1);
        v1->Prev(v2->Prev());
    }

    if (uPtr(e2)->Next() != e2)
    {
        uPtr(uPtr(uPtr(uPtr(e1)->Sym())->Next())->Sym())->Next(uPtr(e2)->Next());
        uPtr(uPtr(e2->Next())->Sym())->Next(uPtr(e1->Sym())->Next());
        uPtr(uPtr(uPtr(e2->Sym())->Next())->Sym())->Next(e1);
        uPtr(e1->Sym())->Next(uPtr(e2->Sym())->Next());
    }
}

// public void CheckConsistency() [instance] :788
void Mesh::CheckConsistency()
{
}

// public void ComputeInterior(Uno.Predicate<int> windingRule) [instance] :430
void Mesh::ComputeInterior(uDelegate* windingRule)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "ComputeInterior(Uno.Predicate<int>)");
    ::g::Fuse::Drawing::Tesselation::Sweep::New1(this, windingRule)->ComputeInterior();
}

// public Fuse.Drawing.Tesselation.HalfEdge Connect(Fuse.Drawing.Tesselation.HalfEdge eOrg, Fuse.Drawing.Tesselation.HalfEdge eDst) [instance] :1055
::g::Fuse::Drawing::Tesselation::HalfEdge* Mesh::Connect(::g::Fuse::Drawing::Tesselation::HalfEdge* eOrg, ::g::Fuse::Drawing::Tesselation::HalfEdge* eDst)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "Connect(Fuse.Drawing.Tesselation.HalfEdge,Fuse.Drawing.Tesselation.HalfEdge)");
    ::g::Fuse::Drawing::Tesselation::Face* ind6;
    bool joiningLoops = false;
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eNew = ::g::Fuse::Drawing::Tesselation::HalfEdge::MakeEdge(eOrg);
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eNewSym = uPtr(eNew)->Sym();

    if (uPtr(eDst)->Left() != uPtr(eOrg)->Left())
    {
        joiningLoops = true;
        ::g::Fuse::Drawing::Tesselation::Face::KillFace(uPtr(eDst)->Left(), uPtr(eOrg)->Left());
    }

    ::g::Fuse::Drawing::Tesselation::HalfEdge::ExchangeOriginNextAkaSplice(eNew, uPtr(eOrg)->LeftNext());
    ::g::Fuse::Drawing::Tesselation::HalfEdge::ExchangeOriginNextAkaSplice(eNewSym, eDst);
    eNew->Origin(eOrg->Destination());
    uPtr(eNewSym)->Origin(uPtr(eDst)->Origin());
    eNew->Left((ind6 = eOrg->Left(), eNewSym->Left(ind6), ind6));
    uPtr(eOrg->Left())->AnEdge(eNewSym);

    if (!joiningLoops)
        ::g::Fuse::Drawing::Tesselation::Face::MakeFace(eNew, uPtr(eOrg)->Left());

    return eNew;
}

// private Fuse.Drawing.Contour CreateContour(Fuse.Drawing.Tesselation.Face f) [instance] :777
::g::Fuse::Drawing::Contour* Mesh::CreateContour(::g::Fuse::Drawing::Tesselation::Face* f)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "CreateContour(Fuse.Drawing.Tesselation.Face)");
    return uPtr(f)->ToContour();
}

// public void Delete() [instance] :1029
void Mesh::Delete()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "Delete()");
    ::g::Fuse::Drawing::Tesselation::Face* head = FacesHead;

    while (uPtr(head)->Next() != head)
        ZapFace(uPtr(head)->Next());
}

// public void DeleteEdge(Fuse.Drawing.Tesselation.HalfEdge eDel) [instance] :864
void Mesh::DeleteEdge(::g::Fuse::Drawing::Tesselation::HalfEdge* eDel)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "DeleteEdge(Fuse.Drawing.Tesselation.HalfEdge)");

    if (uPtr(eDel)->Origin() == NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[7/*"eDel.Origin...*/], uBox(::g::Uno::Float2_typeof(), uPtr(uPtr(eDel)->Destination())->Coords()))));

    if (uPtr(eDel)->Destination() == NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[8/*"eDel.Destin...*/], uBox(::g::Uno::Float2_typeof(), uPtr(uPtr(eDel)->Origin())->Coords()))));

    ::g::Fuse::Drawing::Tesselation::HalfEdge* eDelSym = uPtr(eDel)->Sym();
    bool joiningLoops = false;

    if (eDel->Left() != eDel->Right())
    {
        joiningLoops = true;
        ::g::Fuse::Drawing::Tesselation::Face::KillFace(uPtr(eDel)->Left(), uPtr(eDel)->Right());
    }

    if (eDel->OriginNext() == eDel)
        ::g::Fuse::Drawing::Tesselation::Vertex::KillVertex(uPtr(eDel)->Origin(), NULL);
    else
    {
        uPtr(uPtr(eDel)->Right())->AnEdge(uPtr(eDel)->OriginPrev());
        uPtr(eDel->Origin())->AnEdge(eDel->OriginNext());
        ::g::Fuse::Drawing::Tesselation::HalfEdge::ExchangeOriginNextAkaSplice(eDel, eDel->OriginPrev());

        if (!joiningLoops)
            ::g::Fuse::Drawing::Tesselation::Face::MakeFace(eDel, uPtr(eDel)->Left());
    }

    if (uPtr(eDelSym)->OriginNext() == eDelSym)
    {
        ::g::Fuse::Drawing::Tesselation::Vertex::KillVertex(uPtr(eDelSym)->Origin(), NULL);
        ::g::Fuse::Drawing::Tesselation::Face::KillFace(eDelSym->Left(), NULL);
    }
    else
    {
        uPtr(uPtr(eDel)->Left())->AnEdge(uPtr(eDelSym)->OriginPrev());
        uPtr(eDelSym->Origin())->AnEdge(eDelSym->OriginNext());
        ::g::Fuse::Drawing::Tesselation::HalfEdge::ExchangeOriginNextAkaSplice(eDelSym, eDelSym->OriginPrev());
    }

    ::g::Fuse::Drawing::Tesselation::HalfEdge::KillEdge(eDel);
}

// public void DeleteInternalEdges() [instance] :556
void Mesh::DeleteInternalEdges()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "DeleteInternalEdges()");
    ::g::Fuse::Drawing::Tesselation::HalfEdge* ret10;

    for (uObject* enum4 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Edges()), ::TYPES[3/*Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.HalfEdge>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum4), ::TYPES[4/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Drawing::Tesselation::HalfEdge* e = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum4), ::TYPES[5/*Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.HalfEdge>*/]), &ret10), ret10);

        if (!uPtr(e)->IsBoundaryEdge())
            DeleteEdge(e);
    }
}

// public void DiscardExterior() [instance] :528
void Mesh::DiscardExterior()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "DiscardExterior()");
    ::g::Fuse::Drawing::Tesselation::Face* ret11;

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Faces()), ::TYPES[7/*Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.Face>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[4/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Drawing::Tesselation::Face* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[8/*Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.Face>*/]), &ret11), ret11);

        if (!uPtr(f)->IsInside())
            ZapFace(f);
    }
}

// public void Dispose() [instance] :693
void Mesh::Dispose()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "Dispose()");
    ::g::Fuse::Drawing::Tesselation::HalfEdge* ret12;

    for (uObject* enum5 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Edges()), ::TYPES[3/*Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.HalfEdge>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum5), ::TYPES[4/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Drawing::Tesselation::HalfEdge* edge = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum5), ::TYPES[5/*Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.HalfEdge>*/]), &ret12), ret12);
        ::g::Fuse::Drawing::Tesselation::HalfEdge::KillEdge(edge);
    }

    ::g::Fuse::Drawing::Tesselation::HalfEdge::KillEdge(EdgesHead);
    uPtr(VerticesHead)->Next(NULL);
    uPtr(FacesHead)->Next(NULL);
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.HalfEdge> get_Edges() [instance] :660
uObject* Mesh::Edges()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "get_Edges()");
    return (uObject*)::g::Fuse::Drawing::Tesselation::EdgesEnumerable::New1(EdgesHead);
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.Face> get_Faces() [instance] :647
uObject* Mesh::Faces()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "get_Faces()");
    return (uObject*)::g::Fuse::Drawing::Tesselation::FacesEnumerable::New1(FacesHead);
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Contour> GetContours() [instance] :773
uObject* Mesh::GetContours()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "GetContours()");
    return (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[9/*Uno.Collections.EnumerableExtensions.Select<Fuse.Drawing.Tesselation.Face, Fuse.Drawing.Contour>*/], InteriorFaces(), uDelegate::New(::TYPES[10/*Uno.Func<Fuse.Drawing.Tesselation.Face, Fuse.Drawing.Contour>*/], (void*)Mesh__CreateContour_fn, this));
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.Face> get_InteriorFaces() [instance] :653
uObject* Mesh::InteriorFaces()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "get_InteriorFaces()");
    return (uObject*)::g::Uno::Collections::EnumerableExtensions::Where(::TYPES[11/*Uno.Collections.EnumerableExtensions.Where<Fuse.Drawing.Tesselation.Face>*/], Faces(), uDelegate::New(::TYPES[12/*Uno.Predicate<Fuse.Drawing.Tesselation.Face>*/], (void*)Mesh__IsInside_fn, this));
}

// private bool IsInside(Fuse.Drawing.Tesselation.Face face) [instance] :650
bool Mesh::IsInside(::g::Fuse::Drawing::Tesselation::Face* face)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "IsInside(Fuse.Drawing.Tesselation.Face)");
    return uPtr(face)->IsInside();
}

// public Fuse.Drawing.Tesselation.HalfEdge MakeEdge() [instance] :779
::g::Fuse::Drawing::Tesselation::HalfEdge* Mesh::MakeEdge()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "MakeEdge()");
    ::g::Fuse::Drawing::Tesselation::HalfEdge* e = ::g::Fuse::Drawing::Tesselation::HalfEdge::MakeEdge(EdgesHead);
    ::g::Fuse::Drawing::Tesselation::Vertex::MakeVertex(e, VerticesHead);
    ::g::Fuse::Drawing::Tesselation::Vertex::MakeVertex(uPtr(e)->Sym(), VerticesHead);
    ::g::Fuse::Drawing::Tesselation::Face::MakeFace(e, FacesHead);
    return e;
}

// public void SetWindingNumber(int value) [instance] :543
void Mesh::SetWindingNumber(int value)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "SetWindingNumber(int)");
    ::g::Fuse::Drawing::Tesselation::HalfEdge* ret13;

    for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Edges()), ::TYPES[3/*Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.HalfEdge>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::TYPES[4/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Drawing::Tesselation::HalfEdge* e = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[5/*Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.HalfEdge>*/]), &ret13), ret13);
        uPtr(e)->Winding(uPtr(e)->IsBoundaryEdge() ? uPtr(uPtr(e)->Left())->IsInside() ? value : -value : 0);
    }
}

// public void Splice(Fuse.Drawing.Tesselation.HalfEdge eOrg, Fuse.Drawing.Tesselation.HalfEdge eDst) [instance] :1116
void Mesh::Splice(::g::Fuse::Drawing::Tesselation::HalfEdge* eOrg, ::g::Fuse::Drawing::Tesselation::HalfEdge* eDst)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "Splice(Fuse.Drawing.Tesselation.HalfEdge,Fuse.Drawing.Tesselation.HalfEdge)");
    bool joiningLoops = false;
    bool joiningVertices = false;

    if (eOrg == eDst)
        return;

    if (uPtr(eDst)->Origin() != uPtr(eOrg)->Origin())
    {
        joiningVertices = true;
        ::g::Fuse::Drawing::Tesselation::Vertex::KillVertex(uPtr(eDst)->Origin(), uPtr(eOrg)->Origin());
    }

    if (uPtr(eDst)->Left() != uPtr(eOrg)->Left())
    {
        joiningLoops = true;
        ::g::Fuse::Drawing::Tesselation::Face::KillFace(uPtr(eDst)->Left(), uPtr(eOrg)->Left());
    }

    ::g::Fuse::Drawing::Tesselation::HalfEdge::ExchangeOriginNextAkaSplice(eDst, eOrg);

    if (!joiningVertices)
    {
        ::g::Fuse::Drawing::Tesselation::Vertex::MakeVertex(eDst, uPtr(eOrg)->Origin());
        uPtr(eOrg->Origin())->AnEdge(eOrg);
    }

    if (!joiningLoops)
    {
        ::g::Fuse::Drawing::Tesselation::Face::MakeFace(eDst, uPtr(eOrg)->Left());
        uPtr(eOrg->Left())->AnEdge(eOrg);
    }
}

// public Fuse.Drawing.Tesselation.HalfEdge SplitEdge(Fuse.Drawing.Tesselation.HalfEdge e) [instance] :1039
::g::Fuse::Drawing::Tesselation::HalfEdge* Mesh::SplitEdge(::g::Fuse::Drawing::Tesselation::HalfEdge* e)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "SplitEdge(Fuse.Drawing.Tesselation.HalfEdge)");
    return uPtr(e)->Split();
}

// public void TessellateInterior() [instance] :438
void Mesh::TessellateInterior()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "TessellateInterior()");
    ::g::Fuse::Drawing::Tesselation::Face* ret14;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Faces()), ::TYPES[7/*Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.Face>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[4/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Drawing::Tesselation::Face* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[8/*Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.Face>*/]), &ret14), ret14);

        if (uPtr(f)->IsInside())
            TessellateMonoRegion(f);
    }
}

// private void TessellateMonoRegion(Fuse.Drawing.Tesselation.Face face) [instance] :476
void Mesh::TessellateMonoRegion(::g::Fuse::Drawing::Tesselation::Face* face)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "TessellateMonoRegion(Fuse.Drawing.Tesselation.Face)");
    ::g::Fuse::Drawing::Tesselation::HalfEdge* up = uPtr(face)->AnEdge();

    while (uPtr(uPtr(up)->Destination())->VertLeq(uPtr(up)->Origin()))
        up = uPtr(up)->LeftPrev();

    while (uPtr(uPtr(up)->Origin())->VertLeq(uPtr(up)->Destination()))
        up = uPtr(up)->LeftNext();

    ::g::Fuse::Drawing::Tesselation::HalfEdge* lo = uPtr(up)->LeftPrev();

    while (up->LeftNext() != lo)
        if (uPtr(uPtr(up)->Destination())->VertLeq(uPtr(lo)->Origin()))
        {
            while ((uPtr(lo)->LeftNext() != up) && (uPtr(uPtr(lo)->LeftNext())->GoesLeft() || (::g::Fuse::Drawing::Tesselation::Geom::EdgeSign(uPtr(lo)->Origin(), uPtr(lo)->Destination(), uPtr(uPtr(lo)->LeftNext())->Destination()) <= 0.0f)))
                lo = uPtr(Connect(uPtr(lo)->LeftNext(), lo))->Sym();

            lo = uPtr(lo)->LeftPrev();
        }
        else
        {
            while ((uPtr(lo)->LeftNext() != up) && (uPtr(uPtr(up)->LeftPrev())->GoesRight() || (::g::Fuse::Drawing::Tesselation::Geom::EdgeSign(uPtr(up)->Destination(), uPtr(up)->Origin(), uPtr(uPtr(up)->LeftPrev())->Origin()) >= 0.0f)))
                up = uPtr(Connect(up, uPtr(up)->LeftPrev()))->Sym();

            up = uPtr(up)->LeftNext();
        }

    while (uPtr(uPtr(lo)->LeftNext())->LeftNext() != up)
        lo = uPtr(Connect(uPtr(lo)->LeftNext(), lo))->Sym();
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.Vertex> get_Vertices() [instance] :641
uObject* Mesh::Vertices()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "get_Vertices()");
    return (uObject*)::g::Fuse::Drawing::Tesselation::VerticesEnumerable::New1(VerticesHead);
}

// public void ZapFace(Fuse.Drawing.Tesselation.Face fZap) [instance] :935
void Mesh::ZapFace(::g::Fuse::Drawing::Tesselation::Face* fZap)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Mesh", "ZapFace(Fuse.Drawing.Tesselation.Face)");
    ::g::Fuse::Drawing::Tesselation::HalfEdge* e;
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eStart = uPtr(fZap)->AnEdge();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eNext = uPtr(eStart)->LeftNext();

    do
    {
        e = eNext;
        eNext = uPtr(e)->LeftNext();
        e->Left(NULL);

        if (e->Right() == NULL)
        {
            if (uPtr(e)->OriginNext() == e)
                ::g::Fuse::Drawing::Tesselation::Vertex::KillVertex(uPtr(e)->Origin(), NULL);
            else
            {
                uPtr(uPtr(e)->Origin())->AnEdge(uPtr(e)->OriginNext());
                ::g::Fuse::Drawing::Tesselation::HalfEdge::ExchangeOriginNextAkaSplice(e, e->OriginPrev());
            }

            ::g::Fuse::Drawing::Tesselation::HalfEdge* eSym = uPtr(e)->Sym();

            if (uPtr(eSym)->OriginNext() == eSym)
                ::g::Fuse::Drawing::Tesselation::Vertex::KillVertex(uPtr(eSym)->Origin(), NULL);
            else
            {
                uPtr(uPtr(eSym)->Origin())->AnEdge(uPtr(eSym)->OriginNext());
                ::g::Fuse::Drawing::Tesselation::HalfEdge::ExchangeOriginNextAkaSplice(eSym, eSym->OriginPrev());
            }

            ::g::Fuse::Drawing::Tesselation::HalfEdge::KillEdge(e);
        }
    }
    while (e != eStart);

    ::g::Fuse::Drawing::Tesselation::Face* fPrev = fZap->Prev();
    ::g::Fuse::Drawing::Tesselation::Face* fNext = fZap->Next();
    uPtr(fNext)->Prev(fPrev);
    uPtr(fPrev)->Next(fNext);
}

// public Mesh New() [static] :665
Mesh* Mesh::New1()
{
    Mesh* obj9 = (Mesh*)uNew(Mesh_typeof());
    obj9->ctor_();
    return obj9;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/meshes/$.uno
// -------------------------------------------------------------------------------------------------------

// internal sealed class MeshBuilder :1169
// {
static void MeshBuilder_build(uType* type)
{
    ::STRINGS[9] = uString::Const("Vertex was NaN");
    ::TYPES[13] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[14] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Contour_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::Drawing::Tesselation::HalfEdge_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::MeshBuilder, _lastEdge), 0,
        ::g::Fuse::Drawing::Tesselation::Mesh_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::MeshBuilder, _mesh), 0);
}

uType* MeshBuilder_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(MeshBuilder);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Tesselation.MeshBuilder", options);
    type->fp_build_ = MeshBuilder_build;
    type->fp_ctor_ = (void*)MeshBuilder__New1_fn;
    return type;
}

// public generated MeshBuilder() :1169
void MeshBuilder__ctor__fn(MeshBuilder* __this)
{
    __this->ctor_();
}

// public void AddVertex(float x, float y) :1192
void MeshBuilder__AddVertex_fn(MeshBuilder* __this, float* x, float* y)
{
    __this->AddVertex(*x, *y);
}

// public Fuse.Drawing.Tesselation.Mesh Complete() :1219
void MeshBuilder__Complete_fn(MeshBuilder* __this, ::g::Fuse::Drawing::Tesselation::Mesh** __retval)
{
    *__retval = __this->Complete();
}

// public static Fuse.Drawing.Tesselation.Mesh CreateFromContours(Uno.Collections.IEnumerable<Fuse.Drawing.Contour> contours) :1171
void MeshBuilder__CreateFromContours_fn(uObject* contours, ::g::Fuse::Drawing::Tesselation::Mesh** __retval)
{
    *__retval = MeshBuilder::CreateFromContours(contours);
}

// private Fuse.Drawing.Tesselation.HalfEdge CreateSelfLoop() :1212
void MeshBuilder__CreateSelfLoop_fn(MeshBuilder* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval)
{
    *__retval = __this->CreateSelfLoop();
}

// public generated MeshBuilder New() :1169
void MeshBuilder__New1_fn(MeshBuilder** __retval)
{
    *__retval = MeshBuilder::New1();
}

// public void NewContour() :1187
void MeshBuilder__NewContour_fn(MeshBuilder* __this)
{
    __this->NewContour();
}

// public generated MeshBuilder() [instance] :1169
void MeshBuilder::ctor_()
{
    uStackFrame __("Fuse.Drawing.Tesselation.MeshBuilder", ".ctor()");
    _mesh = ::g::Fuse::Drawing::Tesselation::Mesh::New1();
}

// public void AddVertex(float x, float y) [instance] :1192
void MeshBuilder::AddVertex(float x, float y)
{
    uStackFrame __("Fuse.Drawing.Tesselation.MeshBuilder", "AddVertex(float,float)");

    if ((x != x) || (y != y))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[9/*"Vertex was ...*/]));

    ::g::Fuse::Drawing::Tesselation::HalfEdge* e = (_lastEdge != NULL) ? (::g::Fuse::Drawing::Tesselation::HalfEdge*)uPtr(_lastEdge)->Split() : (::g::Fuse::Drawing::Tesselation::HalfEdge*)CreateSelfLoop();
    uPtr(uPtr(e)->Origin())->S = (double)x;
    uPtr(e->Origin())->T = (double)y;
    e->Winding(1);
    uPtr(e->Sym())->Winding(-1);
    _lastEdge = e;
}

// public Fuse.Drawing.Tesselation.Mesh Complete() [instance] :1219
::g::Fuse::Drawing::Tesselation::Mesh* MeshBuilder::Complete()
{
    return _mesh;
}

// private Fuse.Drawing.Tesselation.HalfEdge CreateSelfLoop() [instance] :1212
::g::Fuse::Drawing::Tesselation::HalfEdge* MeshBuilder::CreateSelfLoop()
{
    uStackFrame __("Fuse.Drawing.Tesselation.MeshBuilder", "CreateSelfLoop()");
    ::g::Fuse::Drawing::Tesselation::HalfEdge* e = uPtr(_mesh)->MakeEdge();
    uPtr(_mesh)->Splice(e, uPtr(e)->Sym());
    return e;
}

// public void NewContour() [instance] :1187
void MeshBuilder::NewContour()
{
    _lastEdge = NULL;
}

// public static Fuse.Drawing.Tesselation.Mesh CreateFromContours(Uno.Collections.IEnumerable<Fuse.Drawing.Contour> contours) [static] :1171
::g::Fuse::Drawing::Tesselation::Mesh* MeshBuilder::CreateFromContours(uObject* contours)
{
    uStackFrame __("Fuse.Drawing.Tesselation.MeshBuilder", "CreateFromContours(Uno.Collections.IEnumerable<Fuse.Drawing.Contour>)");
    ::g::Fuse::Drawing::Contour* ret4;
    ::g::Uno::Float2 ret5;
    MeshBuilder* b = MeshBuilder::New1();

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(contours), ::TYPES[13/*Uno.Collections.IEnumerable<Fuse.Drawing.Contour>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[4/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Drawing::Contour* contour = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[14/*Uno.Collections.IEnumerator<Fuse.Drawing.Contour>*/]), &ret4), ret4);
        uPtr(b)->NewContour();

        for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(contour)->Vertices()), ::TYPES[15/*Uno.Collections.IEnumerable<float2>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[4/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Uno::Float2 v = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[16/*Uno.Collections.IEnumerator<float2>*/]), &ret5), ret5);
            uPtr(b)->AddVertex(v.X, v.Y);
        }
    }

    return b->Complete();
}

// public generated MeshBuilder New() [static] :1169
MeshBuilder* MeshBuilder::New1()
{
    MeshBuilder* obj3 = (MeshBuilder*)uNew(MeshBuilder_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/meshes/$.uno
// -------------------------------------------------------------------------------------------------------

// internal sealed class OriginEnumerable :1238
// {
static void OriginEnumerable_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::Tesselation::HalfEdge_typeof();
    type->SetBase(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::HalfEdge_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[0/*Fuse.Drawing.Tesselation.HalfEdge*/], NULL), offsetof(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type, interface0));
    type->SetFields(1);
}

::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* OriginEnumerable_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(OriginEnumerable);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type);
    type = (::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type*)uClassType::New("Fuse.Drawing.Tesselation.OriginEnumerable", options);
    type->fp_build_ = OriginEnumerable_build;
    type->fp_GetNext = (void(*)(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable*, void*, uTRef))OriginEnumerable__GetNext_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__GetEnumerator_fn;
    return type;
}

// public OriginEnumerable(Fuse.Drawing.Tesselation.HalfEdge anEdge) :1240
void OriginEnumerable__ctor_1_fn(OriginEnumerable* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* anEdge)
{
    __this->ctor_1(anEdge);
}

// internal override sealed Fuse.Drawing.Tesselation.HalfEdge GetNext(Fuse.Drawing.Tesselation.HalfEdge edge) :1244
void OriginEnumerable__GetNext_fn(OriginEnumerable* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* edge, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval)
{
    uStackFrame __("Fuse.Drawing.Tesselation.OriginEnumerable", "GetNext(Fuse.Drawing.Tesselation.HalfEdge)");
    return *__retval = (uPtr(edge)->OriginNext() == __this->_first().Strong< ::g::Fuse::Drawing::Tesselation::HalfEdge*>()) ? uCast< ::g::Fuse::Drawing::Tesselation::HalfEdge*>(NULL, ::TYPES[0/*Fuse.Drawing.Tesselation.HalfEdge*/]) : (::g::Fuse::Drawing::Tesselation::HalfEdge*)uPtr(edge)->OriginNext(), void();
}

// public OriginEnumerable New(Fuse.Drawing.Tesselation.HalfEdge anEdge) :1240
void OriginEnumerable__New1_fn(::g::Fuse::Drawing::Tesselation::HalfEdge* anEdge, OriginEnumerable** __retval)
{
    *__retval = OriginEnumerable::New1(anEdge);
}

// public OriginEnumerable(Fuse.Drawing.Tesselation.HalfEdge anEdge) [instance] :1240
void OriginEnumerable::ctor_1(::g::Fuse::Drawing::Tesselation::HalfEdge* anEdge)
{
    ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__ctor__fn(this, anEdge);
}

// public OriginEnumerable New(Fuse.Drawing.Tesselation.HalfEdge anEdge) [static] :1240
OriginEnumerable* OriginEnumerable::New1(::g::Fuse::Drawing::Tesselation::HalfEdge* anEdge)
{
    OriginEnumerable* obj1 = (OriginEnumerable*)uNew(OriginEnumerable_typeof());
    obj1->ctor_1(anEdge);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/sweep/$.uno
// ------------------------------------------------------------------------------------------------------

// internal sealed class Sweep :356
// {
static void Sweep_build(uType* type)
{
    ::STRINGS[10] = uString::Const("longjmp(tess.env, 1);");
    ::TYPES[17] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::Vertex_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[18] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::Vertex_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::Face_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::Face_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(5/*FirstOrDefault<Fuse.Drawing.Tesselation.HalfEdge>*/, ::g::Fuse::Drawing::Tesselation::HalfEdge_typeof(), NULL);
    ::TYPES[20] = ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::HalfEdge_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::Sweep, _dict), 0,
        ::g::Fuse::Drawing::Tesselation::Vertex_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::Sweep, _event), 0,
        ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(::g::Fuse::Drawing::Tesselation::Sweep, _isWindingInside), 0,
        ::g::Fuse::Drawing::Tesselation::Mesh_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::Sweep, _mesh), uFieldFlagsWeak,
        ::g::Fuse::Drawing::Tesselation::Collections::VertexQueue_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::Sweep, _pq), 0);
}

uType* Sweep_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Sweep);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Tesselation.Sweep", options);
    type->fp_build_ = Sweep_build;
    return type;
}

// public Sweep(Fuse.Drawing.Tesselation.Mesh mesh, Uno.Predicate<int> windingRule) :374
void Sweep__ctor__fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::Mesh* mesh, uDelegate* windingRule)
{
    __this->ctor_(mesh, windingRule);
}

// private void AddRightEdges(Fuse.Drawing.Tesselation.ActiveRegion regUp, Fuse.Drawing.Tesselation.HalfEdge eFirst, Fuse.Drawing.Tesselation.HalfEdge eLast, Fuse.Drawing.Tesselation.HalfEdge eTopLeft, bool cleanUp) :1159
void Sweep__AddRightEdges_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::g::Fuse::Drawing::Tesselation::HalfEdge* eFirst, ::g::Fuse::Drawing::Tesselation::HalfEdge* eLast, ::g::Fuse::Drawing::Tesselation::HalfEdge* eTopLeft, bool* cleanUp)
{
    __this->AddRightEdges(regUp, eFirst, eLast, eTopLeft, *cleanUp);
}

// private void AddSentinel(float t) :543
void Sweep__AddSentinel_fn(Sweep* __this, float* t)
{
    __this->AddSentinel(*t);
}

// private bool CheckForIntersect(Fuse.Drawing.Tesselation.ActiveRegion regUp) :959
void Sweep__CheckForIntersect_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp, bool* __retval)
{
    *__retval = __this->CheckForIntersect(regUp);
}

// private bool CheckForLeftSplice(Fuse.Drawing.Tesselation.ActiveRegion regUp) :1311
void Sweep__CheckForLeftSplice_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp, bool* __retval)
{
    *__retval = __this->CheckForLeftSplice(regUp);
}

// private bool CheckForRightSplice(Fuse.Drawing.Tesselation.ActiveRegion regUp) :1252
void Sweep__CheckForRightSplice_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp, bool* __retval)
{
    *__retval = __this->CheckForRightSplice(regUp);
}

// public void ComputeInterior() :390
void Sweep__ComputeInterior_fn(Sweep* __this)
{
    __this->ComputeInterior();
}

// private void ComputeWinding(Fuse.Drawing.Tesselation.ActiveRegion reg) :1344
void Sweep__ComputeWinding_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* reg)
{
    __this->ComputeWinding(reg);
}

// private void ConnectLeftDegenerate(Fuse.Drawing.Tesselation.ActiveRegion regUp, Fuse.Drawing.Tesselation.Vertex vEvent) :699
void Sweep__ConnectLeftDegenerate_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::g::Fuse::Drawing::Tesselation::Vertex* vEvent)
{
    __this->ConnectLeftDegenerate(regUp, vEvent);
}

// private void ConnectLeftVertex(Fuse.Drawing.Tesselation.Vertex vEvent) :640
void Sweep__ConnectLeftVertex_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::Vertex* vEvent)
{
    __this->ConnectLeftVertex(vEvent);
}

// private void ConnectRightVertex(Fuse.Drawing.Tesselation.ActiveRegion regUp, Fuse.Drawing.Tesselation.HalfEdge eBottomLeft) :798
void Sweep__ConnectRightVertex_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::g::Fuse::Drawing::Tesselation::HalfEdge* eBottomLeft)
{
    __this->ConnectRightVertex(regUp, eBottomLeft);
}

// private void DeleteRegion(Fuse.Drawing.Tesselation.ActiveRegion reg) :1442
void Sweep__DeleteRegion_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* reg)
{
    __this->DeleteRegion(reg);
}

// private void DoneEdgeDict() :1419
void Sweep__DoneEdgeDict_fn(Sweep* __this)
{
    __this->DoneEdgeDict();
}

// public Fuse.Drawing.Tesselation.Vertex get_Event() :372
void Sweep__get_Event_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::Vertex** __retval)
{
    *__retval = __this->Event();
}

// private Fuse.Drawing.Tesselation.HalfEdge FinishLeftRegions(Fuse.Drawing.Tesselation.ActiveRegion regFirst, Fuse.Drawing.Tesselation.ActiveRegion regLast) :1362
void Sweep__FinishLeftRegions_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regFirst, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regLast, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval)
{
    *__retval = __this->FinishLeftRegions(regFirst, regLast);
}

// private void FinishRegion(Fuse.Drawing.Tesselation.ActiveRegion reg) :1409
void Sweep__FinishRegion_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* reg)
{
    __this->FinishRegion(reg);
}

// private static bool HasActiveRegion(Fuse.Drawing.Tesselation.HalfEdge e) :618
void Sweep__HasActiveRegion_fn(::g::Fuse::Drawing::Tesselation::HalfEdge* e, bool* __retval)
{
    *__retval = Sweep::HasActiveRegion(e);
}

// private void InitEdgeDict() :533
void Sweep__InitEdgeDict_fn(Sweep* __this)
{
    __this->InitEdgeDict();
}

// private void InitPriorityQ() :523
void Sweep__InitPriorityQ_fn(Sweep* __this)
{
    __this->InitPriorityQ();
}

// public Sweep New(Fuse.Drawing.Tesselation.Mesh mesh, Uno.Predicate<int> windingRule) :374
void Sweep__New1_fn(::g::Fuse::Drawing::Tesselation::Mesh* mesh, uDelegate* windingRule, Sweep** __retval)
{
    *__retval = Sweep::New1(mesh, windingRule);
}

// private void RemoveDegenerateEdges() :448
void Sweep__RemoveDegenerateEdges_fn(Sweep* __this)
{
    __this->RemoveDegenerateEdges();
}

// private void RemoveDegenerateFaces() :503
void Sweep__RemoveDegenerateFaces_fn(Sweep* __this)
{
    __this->RemoveDegenerateFaces();
}

// private void SpliceMergeVertices(Fuse.Drawing.Tesselation.HalfEdge e1, Fuse.Drawing.Tesselation.HalfEdge e2) :760
void Sweep__SpliceMergeVertices_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* e1, ::g::Fuse::Drawing::Tesselation::HalfEdge* e2)
{
    __this->SpliceMergeVertices(e1, e2);
}

// private void SweepEvent(Fuse.Drawing.Tesselation.Vertex vEvent) :562
void Sweep__SweepEvent_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::Vertex* vEvent)
{
    __this->SweepEvent(vEvent);
}

// private void WalkDirtyRegions(Fuse.Drawing.Tesselation.ActiveRegion regUp) :859
void Sweep__WalkDirtyRegions_fn(Sweep* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp)
{
    __this->WalkDirtyRegions(regUp);
}

// public Sweep(Fuse.Drawing.Tesselation.Mesh mesh, Uno.Predicate<int> windingRule) [instance] :374
void Sweep::ctor_(::g::Fuse::Drawing::Tesselation::Mesh* mesh, uDelegate* windingRule)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", ".ctor(Fuse.Drawing.Tesselation.Mesh,Uno.Predicate<int>)");
    _mesh = mesh;
    _isWindingInside = windingRule;
    _dict = ::g::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict::New1(this, _mesh);
    _pq = ::g::Fuse::Drawing::Tesselation::Collections::VertexQueue::New1();
}

// private void AddRightEdges(Fuse.Drawing.Tesselation.ActiveRegion regUp, Fuse.Drawing.Tesselation.HalfEdge eFirst, Fuse.Drawing.Tesselation.HalfEdge eLast, Fuse.Drawing.Tesselation.HalfEdge eTopLeft, bool cleanUp) [instance] :1159
void Sweep::AddRightEdges(::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::g::Fuse::Drawing::Tesselation::HalfEdge* eFirst, ::g::Fuse::Drawing::Tesselation::HalfEdge* eLast, ::g::Fuse::Drawing::Tesselation::HalfEdge* eTopLeft, bool cleanUp)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "AddRightEdges(Fuse.Drawing.Tesselation.ActiveRegion,Fuse.Drawing.Tesselation.HalfEdge,Fuse.Drawing.Tesselation.HalfEdge,Fuse.Drawing.Tesselation.HalfEdge,bool)");
    bool ret5;
    bool firstTime = true;
    ::g::Fuse::Drawing::Tesselation::HalfEdge* re = eFirst;

    do
    {
        uPtr(_dict)->AddRegionBelow(regUp, uPtr(re)->Sym());
        re = uPtr(re)->OriginNext();
    }
    while (re != eLast);

    if (eTopLeft == NULL)
        eTopLeft = uPtr(uPtr(uPtr(regUp)->Below())->UpperEdge())->RightPrev();

    ::g::Fuse::Drawing::Tesselation::ActiveRegion* reg = NULL;
    ::g::Fuse::Drawing::Tesselation::HalfEdge* e = NULL;
    ::g::Fuse::Drawing::Tesselation::ActiveRegion* regPrev = regUp;
    ::g::Fuse::Drawing::Tesselation::HalfEdge* ePrev = eTopLeft;

    for (; ; )
    {
        reg = uPtr(regPrev)->Below();
        e = uPtr(uPtr(reg)->UpperEdge())->Sym();

        if (uPtr(e)->Origin() != uPtr(ePrev)->Origin())
            break;

        if (uPtr(e)->OriginNext() != ePrev)
        {
            uPtr(_mesh)->Splice(uPtr(e)->OriginPrev(), e);
            uPtr(_mesh)->Splice(uPtr(ePrev)->OriginPrev(), e);
        }

        reg->WindingNumber(regPrev->WindingNumber() - uPtr(e)->Winding());
        reg->IsInside((uPtr(_isWindingInside)->Invoke(&ret5, 1, uCRef<int>(reg->WindingNumber())), ret5));
        regPrev->IsDirty(true);

        if (!firstTime && CheckForRightSplice(regPrev))
        {
            ::g::Fuse::Drawing::Tesselation::HalfEdge::AddWinding(e, ePrev);
            DeleteRegion(regPrev);
            uPtr(_mesh)->DeleteEdge(ePrev);
        }

        firstTime = false;
        regPrev = reg;
        ePrev = e;
    }

    uPtr(regPrev)->IsDirty(true);

    if (cleanUp)
        WalkDirtyRegions(regPrev);
}

// private void AddSentinel(float t) [instance] :543
void Sweep::AddSentinel(float t)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "AddSentinel(float)");
    ::g::Fuse::Drawing::Tesselation::Collections::DictNode* ret6;
    ::g::Fuse::Drawing::Tesselation::HalfEdge* e = uPtr(_mesh)->MakeEdge();
    uPtr(uPtr(e)->Origin())->S = 9.9999998430674944e+17;
    uPtr(e->Origin())->T = (double)t;
    uPtr(e->Destination())->S = -9.9999998430674944e+17;
    uPtr(e->Destination())->T = (double)t;
    _event = e->Destination();
    ::g::Fuse::Drawing::Tesselation::ActiveRegion* reg = ::g::Fuse::Drawing::Tesselation::ActiveRegion::New1(_mesh, e, true);
    reg->UpperEdgeDictNode((::g::Fuse::Drawing::Tesselation::Collections::Dict__Insert_fn(uPtr(_dict), reg, &ret6), ret6));
}

// private bool CheckForIntersect(Fuse.Drawing.Tesselation.ActiveRegion regUp) [instance] :959
bool Sweep::CheckForIntersect(::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "CheckForIntersect(Fuse.Drawing.Tesselation.ActiveRegion)");
    bool ind3;
    ::g::Fuse::Drawing::Tesselation::ActiveRegion* regLo = uPtr(regUp)->Below();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eUp = regUp->UpperEdge();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eLo = uPtr(regLo)->UpperEdge();
    ::g::Fuse::Drawing::Tesselation::Vertex* orgUp = uPtr(eUp)->Origin();
    ::g::Fuse::Drawing::Tesselation::Vertex* orgLo = uPtr(eLo)->Origin();
    ::g::Fuse::Drawing::Tesselation::Vertex* dstUp = eUp->Destination();
    ::g::Fuse::Drawing::Tesselation::Vertex* dstLo = eLo->Destination();

    if (orgUp == orgLo)
        return false;

    double tMinUp = ::g::Uno::Math::Min(uPtr(orgUp)->T, uPtr(dstUp)->T);
    double tMaxLo = ::g::Uno::Math::Max(uPtr(orgLo)->T, uPtr(dstLo)->T);

    if (tMinUp > tMaxLo)
        return false;

    if (orgUp->VertLeq(orgLo))
    {
        if (::g::Fuse::Drawing::Tesselation::Geom::EdgeSign(dstLo, orgUp, orgLo) > 0.0f)
            return false;
    }
    else
    {
        if (::g::Fuse::Drawing::Tesselation::Geom::EdgeSign(dstUp, orgLo, orgUp) < 0.0f)
            return false;
    }

    ::g::Fuse::Drawing::Tesselation::Vertex* isect = ::g::Fuse::Drawing::Tesselation::Geom::Intersect(dstUp, orgUp, dstLo, orgLo);

    if (uPtr(isect)->VertLeq(_event))
    {
        uPtr(isect)->S = uPtr(_event)->S;
        isect->T = uPtr(_event)->T;
    }

    ::g::Fuse::Drawing::Tesselation::Vertex* orgMin = orgUp->VertLeq(orgLo) ? orgUp : orgLo;

    if (uPtr(orgMin)->VertLeq(isect))
    {
        uPtr(isect)->S = uPtr(orgMin)->S;
        isect->T = orgMin->T;
    }

    if (uPtr(isect)->VertEq(orgUp) || uPtr(isect)->VertEq(orgLo))
    {
        CheckForRightSplice(regUp);
        return false;
    }

    if ((!dstUp->VertEq(_event) && (::g::Fuse::Drawing::Tesselation::Geom::EdgeSign(dstUp, _event, isect) >= 0.0f)) || (!dstLo->VertEq(_event) && (::g::Fuse::Drawing::Tesselation::Geom::EdgeSign(dstLo, _event, isect) <= 0.0f)))
    {
        if (dstLo == _event)
        {
            uPtr(_mesh)->SplitEdge(uPtr(eUp)->Sym());
            uPtr(_mesh)->Splice(uPtr(eLo)->Sym(), eUp);
            regUp = uPtr(regUp)->TopLeft();

            if (regUp == NULL)
                U_THROW(::g::Uno::Exception::New2(::STRINGS[10/*"longjmp(tes...*/]));

            eUp = uPtr(regUp->Below())->UpperEdge();
            FinishLeftRegions(regUp->Below(), regLo);
            AddRightEdges(regUp, uPtr(eUp)->OriginPrev(), eUp, eUp, true);
            return true;
        }

        if (dstUp == _event)
        {
            uPtr(_mesh)->SplitEdge(uPtr(eLo)->Sym());
            uPtr(_mesh)->Splice(uPtr(eUp)->LeftNext(), eLo->OriginPrev());
            regLo = regUp;
            regUp = uPtr(regUp)->TopRight();
            ::g::Fuse::Drawing::Tesselation::HalfEdge* e = uPtr(uPtr(regUp->Below())->UpperEdge())->RightPrev();
            uPtr(regLo)->UpperEdge(eLo->OriginPrev());
            eLo = FinishLeftRegions(regLo, NULL);
            AddRightEdges(regUp, uPtr(eLo)->OriginNext(), eUp->RightPrev(), e, true);
            return true;
        }

        if (::g::Fuse::Drawing::Tesselation::Geom::EdgeSign(dstUp, _event, isect) >= 0.0f)
        {
            uPtr(uPtr(regUp)->Above())->IsDirty((uPtr(regUp)->IsDirty(true), true));
            uPtr(_mesh)->SplitEdge(uPtr(eUp)->Sym());
            uPtr(eUp->Origin())->S = uPtr(_event)->S;
            uPtr(eUp->Origin())->T = uPtr(_event)->T;
        }

        if (::g::Fuse::Drawing::Tesselation::Geom::EdgeSign(dstLo, _event, isect) <= 0.0f)
        {
            uPtr(regUp)->IsDirty((uPtr(regLo)->IsDirty(true), true));
            uPtr(_mesh)->SplitEdge(uPtr(eLo)->Sym());
            uPtr(eLo->Origin())->S = uPtr(_event)->S;
            uPtr(eLo->Origin())->T = uPtr(_event)->T;
        }

        return false;
    }

    uPtr(_mesh)->SplitEdge(uPtr(eUp)->Sym());
    uPtr(_mesh)->SplitEdge(uPtr(eLo)->Sym());
    uPtr(_mesh)->Splice(eLo->OriginPrev(), eUp);
    uPtr(eUp->Origin())->S = uPtr(isect)->S;
    uPtr(eUp->Origin())->T = isect->T;
    ::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue__Enqueue_fn(uPtr(_pq), eUp->Origin());
    uPtr(uPtr(regUp)->Above())->IsDirty((ind3 = (uPtr(regLo)->IsDirty(true), true), uPtr(regUp)->IsDirty(ind3), ind3));
    return false;
}

// private bool CheckForLeftSplice(Fuse.Drawing.Tesselation.ActiveRegion regUp) [instance] :1311
bool Sweep::CheckForLeftSplice(::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "CheckForLeftSplice(Fuse.Drawing.Tesselation.ActiveRegion)");
    ::g::Fuse::Drawing::Tesselation::ActiveRegion* regLo = uPtr(regUp)->Below();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eUp = regUp->UpperEdge();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eLo = uPtr(regLo)->UpperEdge();

    if (uPtr(uPtr(eUp)->Destination())->VertLeq(uPtr(eLo)->Destination()))
    {
        if (::g::Fuse::Drawing::Tesselation::Geom::EdgeSign(uPtr(eUp)->Destination(), uPtr(eLo)->Destination(), uPtr(eUp)->Origin()) < 0.0f)
            return false;

        uPtr(uPtr(regUp)->Above())->IsDirty((uPtr(regUp)->IsDirty(true), true));
        ::g::Fuse::Drawing::Tesselation::HalfEdge* e = uPtr(eUp)->Split();
        uPtr(_mesh)->Splice(uPtr(eLo)->Sym(), e);
        uPtr(uPtr(e)->Left())->IsInside(regUp->IsInside());
    }
    else
    {
        if (::g::Fuse::Drawing::Tesselation::Geom::EdgeSign(uPtr(eLo)->Destination(), uPtr(eUp)->Destination(), uPtr(eLo)->Origin()) > 0.0f)
            return false;

        uPtr(regUp)->IsDirty((uPtr(regLo)->IsDirty(true), true));
        ::g::Fuse::Drawing::Tesselation::HalfEdge* e1 = uPtr(eLo)->Split();
        uPtr(_mesh)->Splice(uPtr(eUp)->LeftNext(), eLo->Sym());
        uPtr(uPtr(e1)->Right())->IsInside(regUp->IsInside());
    }

    return true;
}

// private bool CheckForRightSplice(Fuse.Drawing.Tesselation.ActiveRegion regUp) [instance] :1252
bool Sweep::CheckForRightSplice(::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "CheckForRightSplice(Fuse.Drawing.Tesselation.ActiveRegion)");
    ::g::Fuse::Drawing::Tesselation::ActiveRegion* regLo = uPtr(regUp)->Below();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eUp = regUp->UpperEdge();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eLo = uPtr(regLo)->UpperEdge();

    if (uPtr(uPtr(eUp)->Origin())->VertLeq(uPtr(eLo)->Origin()))
    {
        if (::g::Fuse::Drawing::Tesselation::Geom::EdgeSign(uPtr(eLo)->Destination(), uPtr(eUp)->Origin(), uPtr(eLo)->Origin()) > 0.0f)
            return false;

        if (!uPtr(uPtr(eUp)->Origin())->VertEq(uPtr(eLo)->Origin()))
        {
            uPtr(_mesh)->SplitEdge(uPtr(eLo)->Sym());
            uPtr(_mesh)->Splice(eUp, eLo->OriginPrev());
            uPtr(regUp)->IsDirty((uPtr(regLo)->IsDirty(true), true));
        }
        else if (uPtr(eUp)->Origin() != uPtr(eLo)->Origin())
        {
            ::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue__Remove_fn(uPtr(_pq), uPtr(uPtr(eUp)->Origin())->QueueHandle());
            SpliceMergeVertices(uPtr(eLo)->OriginPrev(), eUp);
        }
    }
    else
    {
        if (::g::Fuse::Drawing::Tesselation::Geom::EdgeSign(uPtr(eUp)->Destination(), uPtr(eLo)->Origin(), uPtr(eUp)->Origin()) < 0.0f)
            return false;

        uPtr(uPtr(regUp)->Above())->IsDirty((uPtr(regUp)->IsDirty(true), true));
        uPtr(_mesh)->SplitEdge(uPtr(eUp)->Sym());
        uPtr(_mesh)->Splice(uPtr(eLo)->OriginPrev(), eUp);
    }

    return true;
}

// public void ComputeInterior() [instance] :390
void Sweep::ComputeInterior()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "ComputeInterior()");
    ::g::Fuse::Drawing::Tesselation::Vertex* ret7;
    ::g::Fuse::Drawing::Tesselation::Vertex* ret8;
    ::g::Fuse::Drawing::Tesselation::Vertex* ret9;
    ::g::Fuse::Drawing::Tesselation::ActiveRegion* ret10;
    RemoveDegenerateEdges();
    InitPriorityQ();
    InitEdgeDict();
    ::g::Fuse::Drawing::Tesselation::Vertex* v;

    while ((v = (::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue__Dequeue_fn(uPtr(_pq), &ret7), ret7)) != NULL)
    {
        for (; ; )
        {
            ::g::Fuse::Drawing::Tesselation::Vertex* vNext = (::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue__get_Peek_fn(uPtr(_pq), &ret8), ret8);

            if ((vNext == NULL) || !uPtr(vNext)->VertEq(v))
                break;

            vNext = (::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue__Dequeue_fn(uPtr(_pq), &ret9), ret9);
            SpliceMergeVertices(uPtr(v)->AnEdge(), uPtr(vNext)->AnEdge());
        }

        SweepEvent(v);
    }

    _event = uPtr(uPtr((::g::Fuse::Drawing::Tesselation::Collections::DictNode__get_Key_fn(uPtr((::g::Fuse::Drawing::Tesselation::Collections::DictNode*)uPtr(_dict)->Min()), &ret10), ret10))->UpperEdge())->Origin();
    uPtr(_dict)->CheckInvariants();
    uPtr(_mesh)->CheckConsistency();
    DoneEdgeDict();
    RemoveDegenerateFaces();
}

// private void ComputeWinding(Fuse.Drawing.Tesselation.ActiveRegion reg) [instance] :1344
void Sweep::ComputeWinding(::g::Fuse::Drawing::Tesselation::ActiveRegion* reg)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "ComputeWinding(Fuse.Drawing.Tesselation.ActiveRegion)");
    bool ret11;
    uPtr(reg)->WindingNumber(uPtr(uPtr(reg)->Above())->WindingNumber() + uPtr(uPtr(reg)->UpperEdge())->Winding());
    reg->IsInside((uPtr(_isWindingInside)->Invoke(&ret11, 1, uCRef<int>(reg->WindingNumber())), ret11));
}

// private void ConnectLeftDegenerate(Fuse.Drawing.Tesselation.ActiveRegion regUp, Fuse.Drawing.Tesselation.Vertex vEvent) [instance] :699
void Sweep::ConnectLeftDegenerate(::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::g::Fuse::Drawing::Tesselation::Vertex* vEvent)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "ConnectLeftDegenerate(Fuse.Drawing.Tesselation.ActiveRegion,Fuse.Drawing.Tesselation.Vertex)");
    ::g::Fuse::Drawing::Tesselation::HalfEdge* e = uPtr(regUp)->UpperEdge();

    if (uPtr(uPtr(e)->Origin())->VertEq(vEvent))
    {
        SpliceMergeVertices(e, uPtr(vEvent)->AnEdge());
        return;
    }

    if (!uPtr(uPtr(e)->Destination())->VertEq(vEvent))
    {
        uPtr(_mesh)->SplitEdge(uPtr(e)->Sym());

        if (uPtr(regUp)->fixUpperEdge())
        {
            uPtr(_mesh)->DeleteEdge(uPtr(e)->OriginNext());
            uPtr(regUp)->fixUpperEdge(false);
        }

        uPtr(_mesh)->Splice(uPtr(vEvent)->AnEdge(), e);
        SweepEvent(vEvent);
        return;
    }

    regUp = uPtr(regUp)->TopRight();
    ::g::Fuse::Drawing::Tesselation::ActiveRegion* reg = regUp->Below();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eTopRight = uPtr(uPtr(reg)->UpperEdge())->Sym();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eTopLeft = uPtr(eTopRight)->OriginNext();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eLast = eTopLeft;

    if (reg->fixUpperEdge())
    {
        DeleteRegion(reg);
        uPtr(_mesh)->DeleteEdge(eTopRight);
        eTopRight = uPtr(eTopLeft)->OriginPrev();
    }

    uPtr(_mesh)->Splice(uPtr(vEvent)->AnEdge(), eTopRight);

    if (!uPtr(eTopLeft)->GoesLeft())
        eTopLeft = NULL;

    AddRightEdges(regUp, uPtr(eTopRight)->OriginNext(), eLast, eTopLeft, true);
}

// private void ConnectLeftVertex(Fuse.Drawing.Tesselation.Vertex vEvent) [instance] :640
void Sweep::ConnectLeftVertex(::g::Fuse::Drawing::Tesselation::Vertex* vEvent)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "ConnectLeftVertex(Fuse.Drawing.Tesselation.Vertex)");
    ::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp = uPtr(_dict)->GetRegionContaining(vEvent);
    ::g::Fuse::Drawing::Tesselation::ActiveRegion* regLo = uPtr(regUp)->Below();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eUp = regUp->UpperEdge();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eLo = uPtr(regLo)->UpperEdge();

    if (::g::Fuse::Drawing::Tesselation::Geom::EdgeSign(uPtr(eUp)->Destination(), vEvent, uPtr(eUp)->Origin()) == 0.0f)
    {
        ConnectLeftDegenerate(regUp, vEvent);
        return;
    }

    ::g::Fuse::Drawing::Tesselation::ActiveRegion* reg = uPtr(uPtr(eLo)->Destination())->VertLeq(uPtr(eUp)->Destination()) ? regUp : regLo;

    if (regUp->IsInside() || uPtr(reg)->fixUpperEdge())
    {
        ::g::Fuse::Drawing::Tesselation::HalfEdge* eNew;

        if (reg == regUp)
            eNew = uPtr(_mesh)->Connect(uPtr(uPtr(vEvent)->AnEdge())->Sym(), uPtr(eUp)->LeftNext());
        else
        {
            ::g::Fuse::Drawing::Tesselation::HalfEdge* tempHalfEdge = uPtr(_mesh)->Connect(uPtr(eLo)->DestinationNext(), uPtr(vEvent)->AnEdge());
            eNew = uPtr(tempHalfEdge)->Sym();
        }

        if (uPtr(reg)->fixUpperEdge())
            uPtr(reg)->FixUpperEdge(eNew);
        else
            ComputeWinding(uPtr(_dict)->AddRegionBelow(regUp, eNew));

        SweepEvent(vEvent);
    }
    else
        AddRightEdges(regUp, uPtr(vEvent)->AnEdge(), uPtr(vEvent)->AnEdge(), NULL, true);
}

// private void ConnectRightVertex(Fuse.Drawing.Tesselation.ActiveRegion regUp, Fuse.Drawing.Tesselation.HalfEdge eBottomLeft) [instance] :798
void Sweep::ConnectRightVertex(::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp, ::g::Fuse::Drawing::Tesselation::HalfEdge* eBottomLeft)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "ConnectRightVertex(Fuse.Drawing.Tesselation.ActiveRegion,Fuse.Drawing.Tesselation.HalfEdge)");
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eTopLeft = uPtr(eBottomLeft)->OriginNext();
    ::g::Fuse::Drawing::Tesselation::ActiveRegion* regLo = uPtr(regUp)->Below();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eUp = regUp->UpperEdge();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eLo = uPtr(regLo)->UpperEdge();
    bool degenerate = false;

    if (uPtr(eUp)->Destination() != uPtr(eLo)->Destination())
        CheckForIntersect(regUp);

    if (uPtr(uPtr(eUp)->Origin())->VertEq(_event))
    {
        uPtr(_mesh)->Splice(uPtr(eTopLeft)->OriginPrev(), eUp);
        regUp = uPtr(regUp)->TopLeft();

        if (regUp == NULL)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[10/*"longjmp(tes...*/]));

        eTopLeft = uPtr(regUp->Below())->UpperEdge();
        FinishLeftRegions(regUp->Below(), regLo);
        degenerate = true;
    }

    if (uPtr(uPtr(eLo)->Origin())->VertEq(_event))
    {
        uPtr(_mesh)->Splice(eBottomLeft, uPtr(eLo)->OriginPrev());
        eBottomLeft = FinishLeftRegions(regLo, NULL);
        degenerate = true;
    }

    if (degenerate)
    {
        AddRightEdges(regUp, uPtr(eBottomLeft)->OriginNext(), eTopLeft, eTopLeft, true);
        return;
    }

    ::g::Fuse::Drawing::Tesselation::HalfEdge* tmp = uPtr(uPtr(eLo)->Origin())->VertLeq(uPtr(eUp)->Origin()) ? (::g::Fuse::Drawing::Tesselation::HalfEdge*)uPtr(eLo)->OriginPrev() : eUp;
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eNew = uPtr(_mesh)->Connect(uPtr(eBottomLeft)->LeftPrev(), tmp);
    AddRightEdges(regUp, eNew, uPtr(eNew)->OriginNext(), uPtr(eNew)->OriginNext(), false);
    uPtr(uPtr(eNew->Sym())->ActiveRegion())->fixUpperEdge(true);
    WalkDirtyRegions(regUp);
}

// private void DeleteRegion(Fuse.Drawing.Tesselation.ActiveRegion reg) [instance] :1442
void Sweep::DeleteRegion(::g::Fuse::Drawing::Tesselation::ActiveRegion* reg)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "DeleteRegion(Fuse.Drawing.Tesselation.ActiveRegion)");

    if (uPtr(reg)->fixUpperEdge())
        ;

    uPtr(uPtr(reg)->UpperEdge())->ActiveRegion(NULL);
    uPtr(_dict)->Delete(reg->UpperEdgeDictNode());
}

// private void DoneEdgeDict() [instance] :1419
void Sweep::DoneEdgeDict()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "DoneEdgeDict()");
    ::g::Fuse::Drawing::Tesselation::ActiveRegion* ret12;
    ::g::Fuse::Drawing::Tesselation::ActiveRegion* reg;

    while ((reg = (::g::Fuse::Drawing::Tesselation::Collections::DictNode__get_Key_fn(uPtr((::g::Fuse::Drawing::Tesselation::Collections::DictNode*)uPtr(_dict)->Min()), &ret12), ret12)) != NULL)
    {
        if (!uPtr(reg)->Sentinel())
            ;

        DeleteRegion(reg);
    }
}

// public Fuse.Drawing.Tesselation.Vertex get_Event() [instance] :372
::g::Fuse::Drawing::Tesselation::Vertex* Sweep::Event()
{
    return _event;
}

// private Fuse.Drawing.Tesselation.HalfEdge FinishLeftRegions(Fuse.Drawing.Tesselation.ActiveRegion regFirst, Fuse.Drawing.Tesselation.ActiveRegion regLast) [instance] :1362
::g::Fuse::Drawing::Tesselation::HalfEdge* Sweep::FinishLeftRegions(::g::Fuse::Drawing::Tesselation::ActiveRegion* regFirst, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regLast)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "FinishLeftRegions(Fuse.Drawing.Tesselation.ActiveRegion,Fuse.Drawing.Tesselation.ActiveRegion)");
    ::g::Fuse::Drawing::Tesselation::ActiveRegion* regPrev = regFirst;
    ::g::Fuse::Drawing::Tesselation::HalfEdge* ePrev = uPtr(regFirst)->UpperEdge();

    while (regPrev != regLast)
    {
        uPtr(regPrev)->fixUpperEdge(false);
        ::g::Fuse::Drawing::Tesselation::ActiveRegion* reg = regPrev->Below();
        ::g::Fuse::Drawing::Tesselation::HalfEdge* e = uPtr(reg)->UpperEdge();

        if (uPtr(e)->Origin() != uPtr(ePrev)->Origin())
        {
            if (!uPtr(reg)->fixUpperEdge())
            {
                FinishRegion(regPrev);
                break;
            }

            e = uPtr(_mesh)->Connect(uPtr(ePrev)->LeftPrev(), uPtr(e)->Sym());
            uPtr(reg)->FixUpperEdge(e);
        }

        if (uPtr(ePrev)->OriginNext() != e)
        {
            uPtr(_mesh)->Splice(uPtr(e)->OriginPrev(), e);
            uPtr(_mesh)->Splice(ePrev, e);
        }

        FinishRegion(regPrev);
        ePrev = reg->UpperEdge();
        regPrev = reg;
    }

    return ePrev;
}

// private void FinishRegion(Fuse.Drawing.Tesselation.ActiveRegion reg) [instance] :1409
void Sweep::FinishRegion(::g::Fuse::Drawing::Tesselation::ActiveRegion* reg)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "FinishRegion(Fuse.Drawing.Tesselation.ActiveRegion)");
    ::g::Fuse::Drawing::Tesselation::HalfEdge* e = uPtr(reg)->UpperEdge();
    ::g::Fuse::Drawing::Tesselation::Face* f = uPtr(e)->Left();
    uPtr(f)->IsInside(reg->IsInside());
    f->AnEdge(e);
    DeleteRegion(reg);
}

// private void InitEdgeDict() [instance] :533
void Sweep::InitEdgeDict()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "InitEdgeDict()");
    AddSentinel(-1e+18f);
    AddSentinel(1e+18f);
}

// private void InitPriorityQ() [instance] :523
void Sweep::InitPriorityQ()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "InitPriorityQ()");
    ::g::Fuse::Drawing::Tesselation::Vertex* ret13;

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(_mesh)->Vertices()), ::TYPES[17/*Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.Vertex>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[4/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Drawing::Tesselation::Vertex* v = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[18/*Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.Vertex>*/]), &ret13), ret13);
        ::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue__Enqueue_fn(uPtr(_pq), v);
    }
}

// private void RemoveDegenerateEdges() [instance] :448
void Sweep::RemoveDegenerateEdges()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "RemoveDegenerateEdges()");
    ::g::Fuse::Drawing::Tesselation::HalfEdge* e, *eNext;
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eHead = uPtr(_mesh)->EdgesHead;

    for (e = uPtr(eHead)->Next(); e != eHead; e = eNext)
    {
        eNext = uPtr(e)->Next();
        ::g::Fuse::Drawing::Tesselation::HalfEdge* eLnext = e->LeftNext();

        if (uPtr(e->Origin())->VertEq(e->Destination()) && (uPtr(e->LeftNext())->LeftNext() != e))
        {
            SpliceMergeVertices(eLnext, e);
            uPtr(_mesh)->DeleteEdge(e);
            e = eLnext;
            eLnext = uPtr(e)->LeftNext();
        }

        if (uPtr(eLnext)->LeftNext() == e)
        {
            if (eLnext != e)
            {
                if ((eLnext == eNext) || (eLnext == uPtr(eNext)->Sym()))
                    eNext = uPtr(eNext)->Next();

                uPtr(_mesh)->DeleteEdge(eLnext);
            }

            if ((e == eNext) || (e == uPtr(eNext)->Sym()))
                eNext = uPtr(eNext)->Next();

            uPtr(_mesh)->DeleteEdge(e);
        }
    }

    uPtr(_mesh)->CheckConsistency();
}

// private void RemoveDegenerateFaces() [instance] :503
void Sweep::RemoveDegenerateFaces()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "RemoveDegenerateFaces()");
    ::g::Fuse::Drawing::Tesselation::Face* ret14;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(_mesh)->Faces()), ::TYPES[7/*Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.Face>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[4/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Drawing::Tesselation::Face* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[8/*Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.Face>*/]), &ret14), ret14);
        ::g::Fuse::Drawing::Tesselation::HalfEdge* e = uPtr(f)->AnEdge();

        if (uPtr(uPtr(e)->LeftNext())->LeftNext() == e)
        {
            ::g::Fuse::Drawing::Tesselation::HalfEdge::AddWinding(uPtr(e)->OriginNext(), e);
            uPtr(_mesh)->DeleteEdge(e);
        }
    }

    uPtr(_mesh)->CheckConsistency();
}

// private void SpliceMergeVertices(Fuse.Drawing.Tesselation.HalfEdge e1, Fuse.Drawing.Tesselation.HalfEdge e2) [instance] :760
void Sweep::SpliceMergeVertices(::g::Fuse::Drawing::Tesselation::HalfEdge* e1, ::g::Fuse::Drawing::Tesselation::HalfEdge* e2)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "SpliceMergeVertices(Fuse.Drawing.Tesselation.HalfEdge,Fuse.Drawing.Tesselation.HalfEdge)");
    uPtr(_mesh)->Splice(e1, e2);
}

// private void SweepEvent(Fuse.Drawing.Tesselation.Vertex vEvent) [instance] :562
void Sweep::SweepEvent(::g::Fuse::Drawing::Tesselation::Vertex* vEvent)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "SweepEvent(Fuse.Drawing.Tesselation.Vertex)");
    ::g::Fuse::Drawing::Tesselation::HalfEdge* ret15;
    _event = vEvent;
    uPtr(_dict)->CheckInvariants();
    uPtr(_mesh)->CheckConsistency();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* e = (::g::Uno::Collections::EnumerableExtensions__FirstOrDefault1_fn(::TYPES[19/*Uno.Collections.EnumerableExtensions.FirstOrDefault<Fuse.Drawing.Tesselation.HalfEdge>*/], uPtr(vEvent)->OutgoingEdges(), uDelegate::New(::TYPES[20/*Uno.Predicate<Fuse.Drawing.Tesselation.HalfEdge>*/], (void*)Sweep__HasActiveRegion_fn), &ret15), ret15);

    if (e == NULL)
    {
        ConnectLeftVertex(vEvent);
        return;
    }

    ::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp = uPtr(uPtr(e)->ActiveRegion())->TopLeft();

    if (regUp == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[10/*"longjmp(tes...*/]));

    ::g::Fuse::Drawing::Tesselation::ActiveRegion* reg = uPtr(regUp)->Below();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eTopLeft = uPtr(reg)->UpperEdge();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eBottomLeft = FinishLeftRegions(reg, NULL);

    if (uPtr(eBottomLeft)->OriginNext() == eTopLeft)
    {
        ConnectRightVertex(regUp, eBottomLeft);
        uPtr(_dict)->CheckInvariants();
    }
    else
    {
        AddRightEdges(regUp, uPtr(eBottomLeft)->OriginNext(), eTopLeft, eTopLeft, true);
        uPtr(_dict)->CheckInvariants();
    }
}

// private void WalkDirtyRegions(Fuse.Drawing.Tesselation.ActiveRegion regUp) [instance] :859
void Sweep::WalkDirtyRegions(::g::Fuse::Drawing::Tesselation::ActiveRegion* regUp)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "WalkDirtyRegions(Fuse.Drawing.Tesselation.ActiveRegion)");
    ::g::Fuse::Drawing::Tesselation::ActiveRegion* regLo = uPtr(regUp)->Below();

    while (true)
    {
        while (uPtr(regLo)->IsDirty())
        {
            regUp = regLo;
            regLo = uPtr(regLo)->Below();
        }

        if (!uPtr(regUp)->IsDirty())
        {
            regLo = regUp;
            regUp = uPtr(regUp)->Above();

            if ((regUp == NULL) || !regUp->IsDirty())
                return;
        }

        uPtr(regUp)->IsDirty(false);
        ::g::Fuse::Drawing::Tesselation::HalfEdge* eUp = regUp->UpperEdge();
        ::g::Fuse::Drawing::Tesselation::HalfEdge* eLo = uPtr(regLo)->UpperEdge();

        if (uPtr(eUp)->Destination() != uPtr(eLo)->Destination())
        {
            if (CheckForLeftSplice(regUp))
            {
                if (uPtr(regLo)->fixUpperEdge())
                {
                    DeleteRegion(regLo);
                    uPtr(_mesh)->DeleteEdge(eLo);
                    regLo = uPtr(regUp)->Below();
                    eLo = uPtr(regLo)->UpperEdge();
                }
                else if (uPtr(regUp)->fixUpperEdge())
                {
                    DeleteRegion(regUp);
                    uPtr(_mesh)->DeleteEdge(eUp);
                    regUp = uPtr(regLo)->Above();
                    eUp = uPtr(regUp)->UpperEdge();
                }
            }
        }

        if (uPtr(eUp)->Origin() != uPtr(eLo)->Origin())
        {
            if ((((uPtr(eUp)->Destination() != uPtr(eLo)->Destination()) && !uPtr(regUp)->fixUpperEdge()) && !uPtr(regLo)->fixUpperEdge()) && ((uPtr(eUp)->Destination() == _event) || (uPtr(eLo)->Destination() == _event)))
            {
                if (CheckForIntersect(regUp))
                    return;
            }
            else
                CheckForRightSplice(regUp);
        }

        if ((uPtr(eUp)->Origin() == uPtr(eLo)->Origin()) && (uPtr(eUp)->Destination() == uPtr(eLo)->Destination()))
        {
            ::g::Fuse::Drawing::Tesselation::HalfEdge::AddWinding(eLo, eUp);
            DeleteRegion(regUp);
            uPtr(_mesh)->DeleteEdge(eUp);
            regUp = uPtr(regLo)->Above();
        }
    }
}

// private static bool HasActiveRegion(Fuse.Drawing.Tesselation.HalfEdge e) [static] :618
bool Sweep::HasActiveRegion(::g::Fuse::Drawing::Tesselation::HalfEdge* e)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Sweep", "HasActiveRegion(Fuse.Drawing.Tesselation.HalfEdge)");
    return uPtr(e)->ActiveRegion() != NULL;
}

// public Sweep New(Fuse.Drawing.Tesselation.Mesh mesh, Uno.Predicate<int> windingRule) [static] :374
Sweep* Sweep::New1(::g::Fuse::Drawing::Tesselation::Mesh* mesh, uDelegate* windingRule)
{
    Sweep* obj4 = (Sweep*)uNew(Sweep_typeof());
    obj4->ctor_(mesh, windingRule);
    return obj4;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/meshes/$.uno
// -------------------------------------------------------------------------------------------------------

// internal sealed class Vertex :1251
// {
static void Vertex_build(uType* type)
{
    ::STRINGS[11] = uString::Const("[");
    ::STRINGS[12] = uString::Const(", ");
    ::STRINGS[13] = uString::Const("]");
    type->SetFields(0,
        ::g::Fuse::Drawing::Tesselation::HalfEdge_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::Vertex, _anEdge), uFieldFlagsWeak,
        type, offsetof(::g::Fuse::Drawing::Tesselation::Vertex, _prev), uFieldFlagsWeak,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::Vertex, S), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::Vertex, T), 0,
        type, offsetof(::g::Fuse::Drawing::Tesselation::Vertex, _Next), 0);
}

uType* Vertex_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Vertex);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Tesselation.Vertex", options);
    type->fp_build_ = Vertex_build;
    type->fp_ctor_ = (void*)Vertex__New1_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Vertex__ToString_fn;
    return type;
}

// public generated Vertex() :1251
void Vertex__ctor__fn(Vertex* __this)
{
    __this->ctor_();
}

// public Fuse.Drawing.Tesselation.HalfEdge get_AnEdge() :1264
void Vertex__get_AnEdge_fn(Vertex* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval)
{
    *__retval = __this->AnEdge();
}

// public void set_AnEdge(Fuse.Drawing.Tesselation.HalfEdge value) :1264
void Vertex__set_AnEdge_fn(Vertex* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* value)
{
    __this->AnEdge(value);
}

// internal float2 get_Coords() :1274
void Vertex__get_Coords_fn(Vertex* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Coords();
}

// public static void KillVertex(Fuse.Drawing.Tesselation.Vertex vDel, Fuse.Drawing.Tesselation.Vertex newOrg) :1324
void Vertex__KillVertex_fn(Vertex* vDel, Vertex* newOrg)
{
    Vertex::KillVertex(vDel, newOrg);
}

// public static Fuse.Drawing.Tesselation.Vertex MakeVertex(Fuse.Drawing.Tesselation.HalfEdge eOrig, Fuse.Drawing.Tesselation.Vertex vNext) :1297
void Vertex__MakeVertex_fn(::g::Fuse::Drawing::Tesselation::HalfEdge* eOrig, Vertex* vNext, Vertex** __retval)
{
    *__retval = Vertex::MakeVertex(eOrig, vNext);
}

// public generated Vertex New() :1251
void Vertex__New1_fn(Vertex** __retval)
{
    *__retval = Vertex::New1();
}

// public generated Fuse.Drawing.Tesselation.Vertex get_Next() :1253
void Vertex__get_Next_fn(Vertex* __this, Vertex** __retval)
{
    *__retval = __this->Next();
}

// public generated void set_Next(Fuse.Drawing.Tesselation.Vertex value) :1253
void Vertex__set_Next_fn(Vertex* __this, Vertex* value)
{
    __this->Next(value);
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.HalfEdge> get_OutgoingEdges() :1268
void Vertex__get_OutgoingEdges_fn(Vertex* __this, uObject** __retval)
{
    *__retval = __this->OutgoingEdges();
}

// public Fuse.Drawing.Tesselation.Vertex get_Prev() :1257
void Vertex__get_Prev_fn(Vertex* __this, Vertex** __retval)
{
    *__retval = __this->Prev();
}

// public void set_Prev(Fuse.Drawing.Tesselation.Vertex value) :1257
void Vertex__set_Prev_fn(Vertex* __this, Vertex* value)
{
    __this->Prev(value);
}

// internal Fuse.Drawing.Tesselation.Vertex get_QueueHandle() :1277
void Vertex__get_QueueHandle_fn(Vertex* __this, Vertex** __retval)
{
    *__retval = __this->QueueHandle();
}

// public override sealed string ToString() :1342
void Vertex__ToString_fn(Vertex* __this, uString** __retval)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Vertex", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[11/*"["*/], uBox(::g::Uno::Double_typeof(), __this->S)), ::STRINGS[12/*", "*/]), uBox(::g::Uno::Double_typeof(), __this->T)), ::STRINGS[13/*"]"*/]), void();
}

// public bool VertEq(Fuse.Drawing.Tesselation.Vertex v) :1279
void Vertex__VertEq_fn(Vertex* __this, Vertex* v, bool* __retval)
{
    *__retval = __this->VertEq(v);
}

// public bool VertLeq(Fuse.Drawing.Tesselation.Vertex v) :1288
void Vertex__VertLeq_fn(Vertex* __this, Vertex* v, bool* __retval)
{
    *__retval = __this->VertLeq(v);
}

// public generated Vertex() [instance] :1251
void Vertex::ctor_()
{
}

// public Fuse.Drawing.Tesselation.HalfEdge get_AnEdge() [instance] :1264
::g::Fuse::Drawing::Tesselation::HalfEdge* Vertex::AnEdge()
{
    return _anEdge;
}

// public void set_AnEdge(Fuse.Drawing.Tesselation.HalfEdge value) [instance] :1264
void Vertex::AnEdge(::g::Fuse::Drawing::Tesselation::HalfEdge* value)
{
    _anEdge = value;
}

// internal float2 get_Coords() [instance] :1274
::g::Uno::Float2 Vertex::Coords()
{
    return ::g::Uno::Float2__New2((float)S, (float)T);
}

// public generated Fuse.Drawing.Tesselation.Vertex get_Next() [instance] :1253
Vertex* Vertex::Next()
{
    return _Next;
}

// public generated void set_Next(Fuse.Drawing.Tesselation.Vertex value) [instance] :1253
void Vertex::Next(Vertex* value)
{
    _Next = value;
}

// public Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.HalfEdge> get_OutgoingEdges() [instance] :1268
uObject* Vertex::OutgoingEdges()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Vertex", "get_OutgoingEdges()");
    return (uObject*)::g::Fuse::Drawing::Tesselation::OriginEnumerable::New1(AnEdge());
}

// public Fuse.Drawing.Tesselation.Vertex get_Prev() [instance] :1257
Vertex* Vertex::Prev()
{
    return _prev;
}

// public void set_Prev(Fuse.Drawing.Tesselation.Vertex value) [instance] :1257
void Vertex::Prev(Vertex* value)
{
    _prev = value;
}

// internal Fuse.Drawing.Tesselation.Vertex get_QueueHandle() [instance] :1277
Vertex* Vertex::QueueHandle()
{
    return this;
}

// public bool VertEq(Fuse.Drawing.Tesselation.Vertex v) [instance] :1279
bool Vertex::VertEq(Vertex* v)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Vertex", "VertEq(Fuse.Drawing.Tesselation.Vertex)");
    return (S == uPtr(v)->S) && (T == uPtr(v)->T);
}

// public bool VertLeq(Fuse.Drawing.Tesselation.Vertex v) [instance] :1288
bool Vertex::VertLeq(Vertex* v)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Vertex", "VertLeq(Fuse.Drawing.Tesselation.Vertex)");
    return (S < uPtr(v)->S) || ((S == uPtr(v)->S) && (T <= uPtr(v)->T));
}

// public static void KillVertex(Fuse.Drawing.Tesselation.Vertex vDel, Fuse.Drawing.Tesselation.Vertex newOrg) [static] :1324
void Vertex::KillVertex(Vertex* vDel, Vertex* newOrg)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Vertex", "KillVertex(Fuse.Drawing.Tesselation.Vertex,Fuse.Drawing.Tesselation.Vertex)");
    ::g::Fuse::Drawing::Tesselation::HalfEdge* eStart = uPtr(vDel)->AnEdge();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* e = eStart;

    do
    {
        uPtr(e)->Origin(newOrg);
        e = uPtr(e)->OriginNext();
    }
    while (e != eStart);

    Vertex* vPrev = vDel->Prev();
    Vertex* vNext = vDel->Next();
    uPtr(vNext)->Prev(vPrev);
    uPtr(vPrev)->Next(vNext);
}

// public static Fuse.Drawing.Tesselation.Vertex MakeVertex(Fuse.Drawing.Tesselation.HalfEdge eOrig, Fuse.Drawing.Tesselation.Vertex vNext) [static] :1297
Vertex* Vertex::MakeVertex(::g::Fuse::Drawing::Tesselation::HalfEdge* eOrig, Vertex* vNext)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Vertex", "MakeVertex(Fuse.Drawing.Tesselation.HalfEdge,Fuse.Drawing.Tesselation.Vertex)");
    Vertex* vNew = Vertex::New1();
    Vertex* vPrev = uPtr(vNext)->Prev();
    vNew->Prev(vPrev);
    uPtr(vPrev)->Next(vNew);
    vNew->Next(vNext);
    vNext->Prev(vNew);
    vNew->AnEdge(eOrig);
    ::g::Fuse::Drawing::Tesselation::HalfEdge* e = eOrig;

    do
    {
        uPtr(e)->Origin(vNew);
        e = uPtr(e)->OriginNext();
    }
    while (e != eOrig);

    return vNew;
}

// public generated Vertex New() [static] :1251
Vertex* Vertex::New1()
{
    Vertex* obj1 = (Vertex*)uNew(Vertex_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/meshes/$.uno
// -------------------------------------------------------------------------------------------------------

// internal sealed class VerticesEnumerable :577
// {
static void VerticesEnumerable_build(uType* type)
{
    ::TYPES[21] = ::g::Fuse::Drawing::Tesselation::Vertex_typeof();
    type->SetBase(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::Vertex_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[21/*Fuse.Drawing.Tesselation.Vertex*/], NULL), offsetof(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type, interface0));
    type->SetFields(1,
        ::TYPES[21/*Fuse.Drawing.Tesselation.Vertex*/], offsetof(::g::Fuse::Drawing::Tesselation::VerticesEnumerable, _head), 0);
}

::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* VerticesEnumerable_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(VerticesEnumerable);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type);
    type = (::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type*)uClassType::New("Fuse.Drawing.Tesselation.VerticesEnumerable", options);
    type->fp_build_ = VerticesEnumerable_build;
    type->fp_GetNext = (void(*)(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable*, void*, uTRef))VerticesEnumerable__GetNext_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__GetEnumerator_fn;
    return type;
}

// public VerticesEnumerable(Fuse.Drawing.Tesselation.Vertex head) :581
void VerticesEnumerable__ctor_1_fn(VerticesEnumerable* __this, ::g::Fuse::Drawing::Tesselation::Vertex* head)
{
    __this->ctor_1(head);
}

// internal override sealed Fuse.Drawing.Tesselation.Vertex GetNext(Fuse.Drawing.Tesselation.Vertex v) :587
void VerticesEnumerable__GetNext_fn(VerticesEnumerable* __this, ::g::Fuse::Drawing::Tesselation::Vertex* v, ::g::Fuse::Drawing::Tesselation::Vertex** __retval)
{
    uStackFrame __("Fuse.Drawing.Tesselation.VerticesEnumerable", "GetNext(Fuse.Drawing.Tesselation.Vertex)");
    return *__retval = (uPtr(v)->Next() == __this->_head) ? uCast< ::g::Fuse::Drawing::Tesselation::Vertex*>(NULL, ::TYPES[21/*Fuse.Drawing.Tesselation.Vertex*/]) : (::g::Fuse::Drawing::Tesselation::Vertex*)uPtr(v)->Next(), void();
}

// public VerticesEnumerable New(Fuse.Drawing.Tesselation.Vertex head) :581
void VerticesEnumerable__New1_fn(::g::Fuse::Drawing::Tesselation::Vertex* head, VerticesEnumerable** __retval)
{
    *__retval = VerticesEnumerable::New1(head);
}

// public VerticesEnumerable(Fuse.Drawing.Tesselation.Vertex head) [instance] :581
void VerticesEnumerable::ctor_1(::g::Fuse::Drawing::Tesselation::Vertex* head)
{
    uStackFrame __("Fuse.Drawing.Tesselation.VerticesEnumerable", ".ctor(Fuse.Drawing.Tesselation.Vertex)");
    ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__ctor__fn(this, (uPtr(head)->Next() == head) ? uCast< ::g::Fuse::Drawing::Tesselation::Vertex*>(NULL, ::TYPES[21/*Fuse.Drawing.Tesselation.Vertex*/]) : (::g::Fuse::Drawing::Tesselation::Vertex*)uPtr(head)->Next());
    _head = head;
}

// public VerticesEnumerable New(Fuse.Drawing.Tesselation.Vertex head) [static] :581
VerticesEnumerable* VerticesEnumerable::New1(::g::Fuse::Drawing::Tesselation::Vertex* head)
{
    VerticesEnumerable* obj1 = (VerticesEnumerable*)uNew(VerticesEnumerable_typeof());
    obj1->ctor_1(head);
    return obj1;
}
// }

}}}} // ::g::Fuse::Drawing::Tesselation
