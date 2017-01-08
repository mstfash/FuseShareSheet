// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.IRouterOutlet.h>
#include <Fuse.Navigation.ISeekableNavigation.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Animations{struct Easing;}}}
namespace g{namespace Fuse{namespace Controls{struct NavigationControl__PageData;}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Motion{struct MotionConfig;}}}
namespace g{namespace Fuse{namespace Navigation{struct EndSeekArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageState;}}}
namespace g{namespace Fuse{namespace Navigation{struct StructuredNavigation;}}}
namespace g{namespace Fuse{namespace Navigation{struct SwipeNavigate;}}}
namespace g{namespace Fuse{namespace Navigation{struct UpdateSeekArgs;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class PageControl :1753
// {
struct PageControl_type : ::g::Fuse::Controls::NavigationControl_type
{
    ::g::Fuse::Navigation::ISeekableNavigation interface15;
    ::g::Fuse::Navigation::IRouterOutlet interface16;
};

PageControl_type* PageControl_typeof();
void PageControl__ctor_8_fn(PageControl* __this);
void PageControl__get_ActiveIndex_fn(PageControl* __this, int* __retval);
void PageControl__set_ActiveIndex_fn(PageControl* __this, int* value);
void PageControl__get_AllowedSwipeDirections_fn(PageControl* __this, int* __retval);
void PageControl__set_AllowedSwipeDirections_fn(PageControl* __this, int* value);
void PageControl__get_CollapseInactive_fn(PageControl* __this, bool* __retval);
void PageControl__CreateTriggers_fn(PageControl* __this, ::g::Fuse::Elements::Element* c, ::g::Fuse::Controls::NavigationControl__PageData* pd);
void PageControl__get_DisableInactive_fn(PageControl* __this, bool* __retval);
void PageControl__FuseNavigationIRouterOutletGetCurrent_fn(PageControl* __this, uString** path, uString** parameter, ::g::Fuse::Visual** active);
void PageControl__FuseNavigationIRouterOutletGoto_fn(PageControl* __this, uString** path, uString** parameter, int* gotoMode, int* direction, ::g::Fuse::Visual** page, int* __retval);
void PageControl__FuseNavigationIRouterOutletPartialPrepareGoto_fn(PageControl* __this, double* progress);
void PageControl__FuseNavigationIRouterOutletget_Type_fn(PageControl* __this, int* __retval);
void PageControl__FuseNavigationISeekableNavigationBeginSeek_fn(PageControl* __this);
void PageControl__FuseNavigationISeekableNavigationEndSeek_fn(PageControl* __this, ::g::Fuse::Navigation::EndSeekArgs* args);
void PageControl__FuseNavigationISeekableNavigationSeek_fn(PageControl* __this, ::g::Fuse::Navigation::UpdateSeekArgs* args);
void PageControl__FuseNavigationISeekableNavigationget_SeekRange_fn(PageControl* __this, ::g::Uno::Float2* __retval);
void PageControl__gotoPage_fn(::g::Fuse::Scripting::Context* c, PageControl* pc, uArray* args);
void PageControl__get_InactiveState_fn(PageControl* __this, int* __retval);
void PageControl__set_InactiveState_fn(PageControl* __this, int* value);
void PageControl__get_Interaction_fn(PageControl* __this, int* __retval);
void PageControl__set_Interaction_fn(PageControl* __this, int* value);
void PageControl__get_IsHorizontal_fn(PageControl* __this, bool* __retval);
void PageControl__get_Motion_fn(PageControl* __this, ::g::Fuse::Motion::MotionConfig** __retval);
void PageControl__set_Motion_fn(PageControl* __this, ::g::Fuse::Motion::MotionConfig* value);
void PageControl__get_Navigation1_fn(PageControl* __this, ::g::Fuse::Navigation::StructuredNavigation** __retval);
void PageControl__New4_fn(PageControl** __retval);
void PageControl__get_Orientation_fn(PageControl* __this, int* __retval);
void PageControl__set_Orientation_fn(PageControl* __this, int* value);
void PageControl__SetActiveIndex_fn(PageControl* __this, int* value, uObject* origin);
void PageControl__get_TransitionDuration_fn(PageControl* __this, double* __retval);
void PageControl__set_TransitionDuration_fn(PageControl* __this, double* value);
void PageControl__get_TransitionEasing_fn(PageControl* __this, ::g::Fuse::Animations::Easing** __retval);
void PageControl__set_TransitionEasing_fn(PageControl* __this, ::g::Fuse::Animations::Easing* value);
void PageControl__UnoUXIPropertyListenerOnPropertyChanged_fn(PageControl* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* property);
void PageControl__UpdateInteraction_fn(PageControl* __this);
void PageControl__UpdateProgress_fn(PageControl* __this, ::g::Fuse::Elements::Element* page, ::g::Fuse::Navigation::NavigationPageState* state, ::g::Fuse::Controls::NavigationControl__PageData* pd);

struct PageControl : ::g::Fuse::Controls::NavigationControl
{
    int _inactive;
    int _interaction;
    int _orient;
    uStrong< ::g::Fuse::Navigation::SwipeNavigate*> _swipe;
    int _swipeAllow;
    static ::g::Uno::UX::Selector ActiveIndexName_;
    static ::g::Uno::UX::Selector& ActiveIndexName() { return PageControl_typeof()->Init(), ActiveIndexName_; }

    void ctor_8();
    int ActiveIndex();
    void ActiveIndex(int value);
    int AllowedSwipeDirections();
    void AllowedSwipeDirections(int value);
    bool CollapseInactive();
    bool DisableInactive();
    int InactiveState();
    void InactiveState(int value);
    int Interaction();
    void Interaction(int value);
    bool IsHorizontal();
    ::g::Fuse::Motion::MotionConfig* Motion();
    void Motion(::g::Fuse::Motion::MotionConfig* value);
    ::g::Fuse::Navigation::StructuredNavigation* Navigation1();
    int Orientation();
    void Orientation(int value);
    void SetActiveIndex(int value, uObject* origin);
    double TransitionDuration();
    void TransitionDuration(double value);
    ::g::Fuse::Animations::Easing* TransitionEasing();
    void TransitionEasing(::g::Fuse::Animations::Easing* value);
    static void gotoPage(::g::Fuse::Scripting::Context* c, PageControl* pc, uArray* args);
    static PageControl* New4();
};
// }

}}} // ::g::Fuse::Controls
