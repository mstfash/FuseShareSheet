// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Geometry/0.42.0/curves/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Geometry{struct Vertex;}}}

namespace g{
namespace Uno{
namespace Geometry{

// internal sealed class Vertex :120
// {
uType* Vertex_typeof();
void Vertex__ctor__fn(Vertex* __this);
void Vertex__New1_fn(Vertex** __retval);

struct Vertex : uObject
{
    uStrong<Vertex*> Next;
    float X;
    float Y;

    void ctor_();
    static Vertex* New1();
};
// }

}}} // ::g::Uno::Geometry
