// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/.uno/ux11/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Button;}}}
namespace g{namespace Fuse{namespace Controls{struct Button__Template;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class Button.Template :49
// {
::g::Uno::UX::Template_type* Button__Template_typeof();
void Button__Template__ctor_1_fn(Button__Template* __this, ::g::Fuse::Controls::Button* parent, ::g::Fuse::Controls::Button* parentInstance);
void Button__Template__New1_fn(Button__Template* __this, uObject** __retval);
void Button__Template__New2_fn(::g::Fuse::Controls::Button* parent, ::g::Fuse::Controls::Button* parentInstance, Button__Template** __retval);

struct Button__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::Fuse::Controls::Button*> __parent1;
    uWeak< ::g::Fuse::Controls::Button*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Button__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Button__Template_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Button__Template_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return Button__Template_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return Button__Template_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return Button__Template_typeof()->Init(), __selector5_; }
    uStrong< ::g::Uno::UX::Property1*> Button_Text_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> Button_Text_TextColor_inst;
    uStrong< ::g::Uno::UX::Property1*> Button_Text_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> this1_Text_inst;

    void ctor_1(::g::Fuse::Controls::Button* parent, ::g::Fuse::Controls::Button* parentInstance);
    static Button__Template* New2(::g::Fuse::Controls::Button* parent, ::g::Fuse::Controls::Button* parentInstance);
};
// }

}}} // ::g::Fuse::Controls
