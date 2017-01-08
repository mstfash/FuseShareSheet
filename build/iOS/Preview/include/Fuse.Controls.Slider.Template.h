// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/.uno/ux11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Slider;}}}
namespace g{namespace Fuse{namespace Controls{struct Slider__Template;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class Slider.Template :128
// {
::g::Uno::UX::Template_type* Slider__Template_typeof();
void Slider__Template__ctor_1_fn(Slider__Template* __this, ::g::Fuse::Controls::Slider* parent, ::g::Fuse::Controls::Slider* parentInstance);
void Slider__Template__New1_fn(Slider__Template* __this, uObject** __retval);
void Slider__Template__New2_fn(::g::Fuse::Controls::Slider* parent, ::g::Fuse::Controls::Slider* parentInstance, Slider__Template** __retval);

struct Slider__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::Fuse::Controls::Slider*> __parent1;
    uWeak< ::g::Fuse::Controls::Slider*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Slider__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Slider__Template_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return Slider__Template_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return Slider__Template_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Slider__Template_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return Slider__Template_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return Slider__Template_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return Slider__Template_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return Slider__Template_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return Slider__Template_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return Slider__Template_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return Slider__Template_typeof()->Init(), __selector9_; }
    uStrong< ::g::Uno::UX::Property1*> halo_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> scrubber_left_Fill_inst;
    uStrong< ::g::Uno::UX::Property1*> thumb_circle_Fill_inst;
    uStrong< ::g::Uno::UX::Property1*> thumb_shadow_Distance_inst;
    uStrong< ::g::Uno::UX::Property1*> thumb_shadow_Size_inst;
    uStrong< ::g::Uno::UX::Property1*> thumb_stroke_Brush_inst;

    void ctor_1(::g::Fuse::Controls::Slider* parent, ::g::Fuse::Controls::Slider* parentInstance);
    static Slider__Template* New2(::g::Fuse::Controls::Slider* parent, ::g::Fuse::Controls::Slider* parentInstance);
};
// }

}}} // ::g::Fuse::Controls
