// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial class Panel :1604
// {
::g::Fuse::Controls::Control_type* Panel_typeof();
void Panel__ctor_6_fn(Panel* __this);
void Panel__get_Color_fn(Panel* __this, ::g::Uno::Float4* __retval);
void Panel__set_Color_fn(Panel* __this, ::g::Uno::Float4* value);
void Panel__FastTrackDrawWithOpacity_fn(Panel* __this, ::g::Fuse::DrawContext* dc, bool* __retval);
void Panel__New3_fn(Panel** __retval);
void Panel__OnColorChanged_fn(Panel* __this, ::g::Uno::Float4* value, uObject* origin);
void Panel__SetColor_fn(Panel* __this, ::g::Uno::Float4* value, uObject* origin);

struct Panel : ::g::Fuse::Controls::LayoutControl
{
    static ::g::Uno::UX::Selector ColorPropertyName_;
    static ::g::Uno::UX::Selector& ColorPropertyName() { return Panel_typeof()->Init(), ColorPropertyName_; }

    void ctor_6();
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    void OnColorChanged(::g::Uno::Float4 value, uObject* origin);
    void SetColor(::g::Uno::Float4 value, uObject* origin);
    static Panel* New3();
};
// }

}}} // ::g::Fuse::Controls
