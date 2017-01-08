// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct Cache;}}}
namespace g{namespace Fuse{namespace Drawing{struct Contour;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class Contour :10
// {
uType* Contour_typeof();
void Contour__ctor__fn(Contour* __this, bool* isClosed, uArray* vertices);
void Contour__ctor_1_fn(Contour* __this, bool* isClosed, uObject* vertices);
void Contour__get_IsClosed_fn(Contour* __this, bool* __retval);
void Contour__set_IsClosed_fn(Contour* __this, bool* value);
void Contour__get_Item_fn(Contour* __this, int* vertexIndex, ::g::Uno::Float2* __retval);
void Contour__New1_fn(bool* isClosed, uArray* vertices, Contour** __retval);
void Contour__New2_fn(bool* isClosed, uObject* vertices, Contour** __retval);
void Contour__get_VertexCount_fn(Contour* __this, int* __retval);
void Contour__get_Vertices_fn(Contour* __this, uObject** __retval);

struct Contour : uObject
{
    int _count;
    uStrong< ::g::Fuse::Drawing::Cache*> _vertices;
    bool _IsClosed;

    void ctor_(bool isClosed, uArray* vertices);
    void ctor_1(bool isClosed, uObject* vertices);
    bool IsClosed();
    void IsClosed(bool value);
    ::g::Uno::Float2 Item(int vertexIndex);
    int VertexCount();
    uObject* Vertices();
    static Contour* New1(bool isClosed, uArray* vertices);
    static Contour* New2(bool isClosed, uObject* vertices);
};
// }

}}} // ::g::Fuse::Drawing
