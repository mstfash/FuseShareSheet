// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Outracks{namespace Simulator{struct ErrorToast;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Outracks{
namespace Simulator{

// public partial sealed class ErrorToast :2208
// {
::g::Fuse::Controls::Control_type* ErrorToast_typeof();
void ErrorToast__ctor_9_fn(ErrorToast* __this);
void ErrorToast__add_Dismissed_fn(ErrorToast* __this, uDelegate* value);
void ErrorToast__remove_Dismissed_fn(ErrorToast* __this, uDelegate* value);
void ErrorToast__get_FillColor_fn(ErrorToast* __this, ::g::Uno::Float4* __retval);
void ErrorToast__set_FillColor_fn(ErrorToast* __this, ::g::Uno::Float4* value);
void ErrorToast__InitializeUX1_fn(ErrorToast* __this);
void ErrorToast__get_Message_fn(ErrorToast* __this, uString** __retval);
void ErrorToast__set_Message_fn(ErrorToast* __this, uString* value);
void ErrorToast__New6_fn(ErrorToast** __retval);
void ErrorToast__OnClicked_fn(ErrorToast* __this, uObject* sender, ::g::Uno::EventArgs* args);
void ErrorToast__OnUnrooted_fn(ErrorToast* __this);
void ErrorToast__SetFillColor_fn(ErrorToast* __this, ::g::Uno::Float4* value, uObject* origin);
void ErrorToast__SetMessage_fn(ErrorToast* __this, uString* value, uObject* origin);
void ErrorToast__SetShowMonitorInfo_fn(ErrorToast* __this, bool* value, uObject* origin);
void ErrorToast__SetStrokeColor_fn(ErrorToast* __this, ::g::Uno::Float4* value, uObject* origin);
void ErrorToast__get_ShowMonitorInfo_fn(ErrorToast* __this, bool* __retval);
void ErrorToast__set_ShowMonitorInfo_fn(ErrorToast* __this, bool* value);
void ErrorToast__get_StrokeColor_fn(ErrorToast* __this, ::g::Uno::Float4* __retval);
void ErrorToast__set_StrokeColor_fn(ErrorToast* __this, ::g::Uno::Float4* value);

struct ErrorToast : ::g::Fuse::Controls::ClientPanel
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ErrorToast_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ErrorToast_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ErrorToast_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return ErrorToast_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return ErrorToast_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return ErrorToast_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return ErrorToast_typeof()->Init(), __selector6_; }
    ::g::Uno::Float4 _field_FillColor;
    uStrong<uString*> _field_Message;
    bool _field_ShowMonitorInfo;
    ::g::Uno::Float4 _field_StrokeColor;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> this_FillColor_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Message_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> this_ShowMonitorInfo_inst;
    uStrong< ::g::Uno::UX::Property1*> this_StrokeColor_inst;
    uStrong<uDelegate*> Dismissed1;

    void ctor_9();
    void add_Dismissed(uDelegate* value);
    void remove_Dismissed(uDelegate* value);
    ::g::Uno::Float4 FillColor();
    void FillColor(::g::Uno::Float4 value);
    void InitializeUX1();
    uString* Message();
    void Message(uString* value);
    void OnClicked(uObject* sender, ::g::Uno::EventArgs* args);
    void SetFillColor(::g::Uno::Float4 value, uObject* origin);
    void SetMessage(uString* value, uObject* origin);
    void SetShowMonitorInfo(bool value, uObject* origin);
    void SetStrokeColor(::g::Uno::Float4 value, uObject* origin);
    bool ShowMonitorInfo();
    void ShowMonitorInfo(bool value);
    ::g::Uno::Float4 StrokeColor();
    void StrokeColor(::g::Uno::Float4 value);
    static ErrorToast* New6();
};
// }

}}} // ::g::Outracks::Simulator
