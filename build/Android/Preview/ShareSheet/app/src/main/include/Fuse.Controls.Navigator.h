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
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct NavigationControl__PageData;}}}
namespace g{namespace Fuse{namespace Controls{struct Navigator;}}}
namespace g{namespace Fuse{namespace Controls{struct Navigator__NavPage;}}}
namespace g{namespace Fuse{namespace Controls{struct NavigatorSwitchedArgs;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{struct Swiped;}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipingAnimation;}}}
namespace g{namespace Fuse{namespace Navigation{struct ExplicitNavigation;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial class Navigator :786
// {
struct Navigator_type : ::g::Fuse::Controls::NavigationControl_type
{
    ::g::Fuse::Navigation::IRouterOutlet interface15;
};

Navigator_type* Navigator_typeof();
void Navigator__ctor_8_fn(Navigator* __this);
void Navigator__CleanupChildren_fn(Navigator* __this, ::g::Fuse::Visual* exclude);
void Navigator__CleanupPrepared_fn(Navigator* __this);
void Navigator__CompatibleParameter_fn(Navigator* __this, uString* a, uString* b, bool* __retval);
void Navigator__CreateTriggers_fn(Navigator* __this, ::g::Fuse::Elements::Element* c, ::g::Fuse::Controls::NavigationControl__PageData* pd);
void Navigator__get_DefaultPath_fn(Navigator* __this, uString** __retval);
void Navigator__set_DefaultPath_fn(Navigator* __this, uString* value);
void Navigator__get_DefaultTemplate_fn(Navigator* __this, uString** __retval);
void Navigator__set_DefaultTemplate_fn(Navigator* __this, uString* value);
void Navigator__EnablePageSwipeBack_fn(Navigator* __this);
void Navigator__FindPage_fn(Navigator* __this, ::g::Uno::UX::Selector* path, ::g::Fuse::Visual** __retval);
void Navigator__FuseNavigationIRouterOutletGetCurrent_fn(Navigator* __this, uString** path, uString** parameter, ::g::Fuse::Visual** active);
void Navigator__FuseNavigationIRouterOutletGoto_fn(Navigator* __this, uString** path, uString** parameter, int* gotoMode, int* operation, ::g::Fuse::Visual** active, int* __retval);
void Navigator__FuseNavigationIRouterOutletPartialPrepareGoto_fn(Navigator* __this, double* progress);
void Navigator__FuseNavigationIRouterOutletget_Type_fn(Navigator* __this, int* __retval);
void Navigator__GetCache_fn(Navigator* __this, uString* path, ::g::Uno::Collections::List** __retval);
void Navigator__GetIsReusable_fn(::g::Fuse::Visual* elm, bool* __retval);
void Navigator__GetRemove_fn(::g::Fuse::Visual* elm, int* __retval);
void Navigator__GetReuse_fn(::g::Fuse::Visual* elm, int* __retval);
void Navigator__GetSwipeBack_fn(::g::Fuse::Visual* elm, int* __retval);
void Navigator__GetVisual_fn(Navigator* __this, uString* path, ::g::Fuse::Visual** __retval);
void Navigator__get_GotoState_fn(Navigator* __this, int* __retval);
void Navigator__set_GotoState_fn(Navigator* __this, int* value);
void Navigator__InstantiateTemplate_fn(Navigator* __this, ::g::Uno::UX::Template* f, uString* path, ::g::Fuse::Visual** __retval);
void Navigator__IsEmptyParameter_fn(Navigator* __this, uString* a, bool* __retval);
void Navigator__IsPageSwipeBackEnabled_fn(Navigator* __this, ::g::Fuse::Visual* elm, bool* __retval);
void Navigator__IsRemoveLevel_fn(Navigator* __this, ::g::Fuse::Visual* elm, int* type, bool* __retval);
void Navigator__IsReuseLevel_fn(Navigator* __this, ::g::Fuse::Visual* elm, int* type, bool* __retval);
void Navigator__get_Navigation1_fn(Navigator* __this, ::g::Fuse::Navigation::ExplicitNavigation** __retval);
void Navigator__New4_fn(Navigator** __retval);
void Navigator__OnHistoryChanged_fn(Navigator* __this, uObject* sender);
void Navigator__OnRooted_fn(Navigator* __this);
void Navigator__OnSwitched_fn(Navigator* __this, ::g::Fuse::Controls::NavigatorSwitchedArgs* args);
void Navigator__OnSwitchedInteraction_fn(Navigator* __this, ::g::Fuse::Controls::NavigatorSwitchedArgs* args);
void Navigator__OnUnrooted_fn(Navigator* __this);
void Navigator__Prepare_fn(Navigator* __this, Navigator__NavPage* curPage, uString** path, uString** parameter, int* operation, ::g::Fuse::Visual** result, bool* usedPrepared, int* __retval);
void Navigator__ReleasePage_fn(Navigator* __this, ::g::Fuse::Visual* v);
void Navigator__get_Remove_fn(Navigator* __this, int* __retval);
void Navigator__set_Remove_fn(Navigator* __this, int* value);
void Navigator__get_Reuse_fn(Navigator* __this, int* __retval);
void Navigator__set_Reuse_fn(Navigator* __this, int* value);
void Navigator__RootInteraction_fn(Navigator* __this);
void Navigator__SetIsReusable_fn(::g::Fuse::Visual* elm, bool* value);
void Navigator__SetRemove_fn(::g::Fuse::Visual* elm, int* value);
void Navigator__SetReuse_fn(::g::Fuse::Visual* elm, int* value);
void Navigator__SetSwipeBack_fn(::g::Fuse::Visual* elm, int* value);
void Navigator__get_SwipeBack_fn(Navigator* __this, int* __retval);
void Navigator__set_SwipeBack_fn(Navigator* __this, int* value);
void Navigator__add_Switched_fn(Navigator* __this, uDelegate* value);
void Navigator__remove_Switched_fn(Navigator* __this, uDelegate* value);
void Navigator__SwitchPage_fn(Navigator* __this, uString* path, uString* parameter, ::g::Fuse::Visual* v, int* gotoMode, int* operation, bool* usePrepared);
void Navigator__UnrootInteraction_fn(Navigator* __this);

struct Navigator : ::g::Fuse::Controls::NavigationControl
{
    uStrong<Navigator__NavPage*> _current;
    int _gotoState;
    uStrong< ::g::Uno::Collections::Dictionary*> _pathCache;
    bool _prepareBack;
    uStrong<Navigator__NavPage*> _prepared;
    bool _prepareReady;
    static uSStrong< ::g::Fuse::PropertyHandle*> _propIsReusable_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _propIsReusable() { return Navigator_typeof()->Init(), _propIsReusable_; }
    static uSStrong< ::g::Fuse::PropertyHandle*> _propRemove_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _propRemove() { return Navigator_typeof()->Init(), _propRemove_; }
    static uSStrong< ::g::Fuse::PropertyHandle*> _propReuse_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _propReuse() { return Navigator_typeof()->Init(), _propReuse_; }
    static uSStrong< ::g::Fuse::PropertyHandle*> _propSwipeBack_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _propSwipeBack() { return Navigator_typeof()->Init(), _propSwipeBack_; }
    int _remove;
    int _reuse;
    uStrong< ::g::Fuse::Navigation::Router*> _router;
    uStrong< ::g::Fuse::Gestures::SwipingAnimation*> _swipeAnim;
    int _swipeBack;
    uStrong< ::g::Fuse::Gestures::Swiped*> _swiped;
    uStrong< ::g::Fuse::Gestures::SwipeGesture*> _swipeGesture;
    uStrong<uString*> _DefaultPath;
    uStrong<uDelegate*> Switched1;

    void ctor_8();
    void CleanupChildren(::g::Fuse::Visual* exclude);
    void CleanupPrepared();
    bool CompatibleParameter(uString* a, uString* b);
    uString* DefaultPath();
    void DefaultPath(uString* value);
    uString* DefaultTemplate();
    void DefaultTemplate(uString* value);
    void EnablePageSwipeBack();
    ::g::Fuse::Visual* FindPage(::g::Uno::UX::Selector path);
    ::g::Uno::Collections::List* GetCache(uString* path);
    ::g::Fuse::Visual* GetVisual(uString* path);
    int GotoState();
    void GotoState(int value);
    ::g::Fuse::Visual* InstantiateTemplate(::g::Uno::UX::Template* f, uString* path);
    bool IsEmptyParameter(uString* a);
    bool IsPageSwipeBackEnabled(::g::Fuse::Visual* elm);
    bool IsRemoveLevel(::g::Fuse::Visual* elm, int type);
    bool IsReuseLevel(::g::Fuse::Visual* elm, int type);
    ::g::Fuse::Navigation::ExplicitNavigation* Navigation1();
    void OnHistoryChanged(uObject* sender);
    void OnSwitched(::g::Fuse::Controls::NavigatorSwitchedArgs* args);
    void OnSwitchedInteraction(::g::Fuse::Controls::NavigatorSwitchedArgs* args);
    int Prepare(Navigator__NavPage* curPage, uString** path, uString** parameter, int operation, ::g::Fuse::Visual** result, bool* usedPrepared);
    void ReleasePage(::g::Fuse::Visual* v);
    int Remove2();
    void Remove2(int value);
    int Reuse();
    void Reuse(int value);
    void RootInteraction();
    int SwipeBack();
    void SwipeBack(int value);
    void add_Switched(uDelegate* value);
    void remove_Switched(uDelegate* value);
    void SwitchPage(uString* path, uString* parameter, ::g::Fuse::Visual* v, int gotoMode, int operation, bool usePrepared);
    void UnrootInteraction();
    static bool GetIsReusable(::g::Fuse::Visual* elm);
    static int GetRemove(::g::Fuse::Visual* elm);
    static int GetReuse(::g::Fuse::Visual* elm);
    static int GetSwipeBack(::g::Fuse::Visual* elm);
    static Navigator* New4();
    static void SetIsReusable(::g::Fuse::Visual* elm, bool value);
    static void SetRemove(::g::Fuse::Visual* elm, int value);
    static void SetReuse(::g::Fuse::Visual* elm, int value);
    static void SetSwipeBack(::g::Fuse::Visual* elm, int value);
};
// }

}}} // ::g::Fuse::Controls
