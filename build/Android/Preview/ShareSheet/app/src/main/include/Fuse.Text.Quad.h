// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
namespace g{namespace Fuse{namespace Text{struct Quad;}}}

namespace g{
namespace Fuse{
namespace Text{

// internal struct Quad :1451
// {
uStructType* Quad_typeof();
void Quad__ctor__fn(Quad* __this, ::g::Uno::Float2* position, ::g::Uno::Recti* texCoords, float* scale);
void Quad__New1_fn(::g::Uno::Float2* position, ::g::Uno::Recti* texCoords, float* scale, Quad* __retval);

struct Quad
{
    ::g::Uno::Float2 Position;
    ::g::Uno::Recti TexCoords;
    float Scale;
    ::g::Uno::Rect Rect;

    void ctor_(::g::Uno::Float2 position, ::g::Uno::Recti texCoords, float scale);
};

Quad Quad__New1(::g::Uno::Float2 position, ::g::Uno::Recti texCoords, float scale);
// }

}}} // ::g::Fuse::Text
