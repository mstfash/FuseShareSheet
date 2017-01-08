// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.ITransformOrigin.h>
#include <Uno.Object.h>
#include <Uno.UX.Size2.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct ExplicitTransformOrigin;}}}
namespace g{namespace Uno{namespace UX{struct Size;}}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Elements{

// internal sealed class ExplicitTransformOrigin :2240
// {
struct ExplicitTransformOrigin_type : uType
{
    ::g::Fuse::Elements::ITransformOrigin interface0;
};

ExplicitTransformOrigin_type* ExplicitTransformOrigin_typeof();
void ExplicitTransformOrigin__ctor__fn(ExplicitTransformOrigin* __this);
void ExplicitTransformOrigin__GetOffset_fn(ExplicitTransformOrigin* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval);
void ExplicitTransformOrigin__New1_fn(ExplicitTransformOrigin** __retval);
void ExplicitTransformOrigin__SizePart_fn(ExplicitTransformOrigin* __this, ::g::Uno::UX::Size* sz, float* relative, float* pixelsPerPoint, float* __retval);

struct ExplicitTransformOrigin : uObject
{
    ::g::Uno::UX::Size2 Origin;

    void ctor_();
    ::g::Uno::Float3 GetOffset(::g::Fuse::Elements::Element* elm);
    float SizePart(::g::Uno::UX::Size sz, float relative, float pixelsPerPoint);
    static ExplicitTransformOrigin* New1();
};
// }

}}} // ::g::Fuse::Elements
