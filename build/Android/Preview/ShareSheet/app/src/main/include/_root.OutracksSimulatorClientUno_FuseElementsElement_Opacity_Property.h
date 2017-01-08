// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property;}

namespace g{

// internal sealed class OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property :320
// {
::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property_typeof();
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__ctor_2_fn(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__Get_fn(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* __this, float* __retval);
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property** __retval);
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__get_Object_fn(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__Set_fn(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* __this, float* v, uObject* origin);
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* __this, bool* __retval);

struct OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_2(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
