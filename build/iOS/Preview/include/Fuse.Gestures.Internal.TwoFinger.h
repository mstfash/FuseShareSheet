// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Gestures/0.42.4/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct TwoFinger;}}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct TwoFinger__Point;}}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Gestures{
namespace Internal{

// internal sealed class TwoFinger :1245
// {
uType* TwoFinger_typeof();
void TwoFinger__ctor__fn(TwoFinger* __this, ::g::Fuse::Visual* n);
void TwoFinger__Attach_fn(::g::Fuse::Visual* n, TwoFinger** __retval);
void TwoFinger__Begin_fn(TwoFinger* __this);
void TwoFinger__Detach_fn(TwoFinger* __this);
void TwoFinger__add_Ended_fn(TwoFinger* __this, uDelegate* value);
void TwoFinger__remove_Ended_fn(TwoFinger* __this, uDelegate* value);
void TwoFinger__FromWindow_fn(TwoFinger* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void TwoFinger__New1_fn(::g::Fuse::Visual* n, TwoFinger** __retval);
void TwoFinger__OnLostCapture_fn(TwoFinger* __this);
void TwoFinger__OnPointerMoved_fn(TwoFinger* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
void TwoFinger__OnPointerPressed_fn(TwoFinger* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
void TwoFinger__OnPointerReleased_fn(TwoFinger* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
void TwoFinger__OnRooted_fn(TwoFinger* __this);
void TwoFinger__OnUnrooted_fn(TwoFinger* __this);
void TwoFinger__PointFromArgs_fn(TwoFinger* __this, ::g::Fuse::Input::PointerEventArgs* args, TwoFinger__Point** __retval);
void TwoFinger__add_Rotated_fn(TwoFinger* __this, uDelegate* value);
void TwoFinger__remove_Rotated_fn(TwoFinger* __this, uDelegate* value);
void TwoFinger__add_Started_fn(TwoFinger* __this, uDelegate* value);
void TwoFinger__remove_Started_fn(TwoFinger* __this, uDelegate* value);
void TwoFinger__add_Translated_fn(TwoFinger* __this, uDelegate* value);
void TwoFinger__remove_Translated_fn(TwoFinger* __this, uDelegate* value);
void TwoFinger__add_Zoomed_fn(TwoFinger* __this, uDelegate* value);
void TwoFinger__remove_Zoomed_fn(TwoFinger* __this, uDelegate* value);

struct TwoFinger : uObject
{
    bool _allowKeyControl;
    int _attachCount;
    bool _begun;
    ::g::Uno::Float2 _fullTrans;
    float _keyZoomRangeDown;
    float _keyZoomRangeUp;
    uStrong< ::g::Fuse::Visual*> _node;
    uStrong<uArray*> _point;
    static uSStrong< ::g::Fuse::PropertyHandle*> _property_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _property() { return TwoFinger_typeof()->Init(), _property_; }
    float _startThresholdDistance;
    uStrong<uDelegate*> Ended1;
    uStrong<uDelegate*> Rotated1;
    uStrong<uDelegate*> Started1;
    uStrong<uDelegate*> Translated1;
    uStrong<uDelegate*> Zoomed1;

    void ctor_(::g::Fuse::Visual* n);
    void Begin();
    void Detach();
    void add_Ended(uDelegate* value);
    void remove_Ended(uDelegate* value);
    ::g::Uno::Float2 FromWindow(::g::Uno::Float2 p);
    void OnLostCapture();
    void OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
    void OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
    void OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
    void OnRooted();
    void OnUnrooted();
    TwoFinger__Point* PointFromArgs(::g::Fuse::Input::PointerEventArgs* args);
    void add_Rotated(uDelegate* value);
    void remove_Rotated(uDelegate* value);
    void add_Started(uDelegate* value);
    void remove_Started(uDelegate* value);
    void add_Translated(uDelegate* value);
    void remove_Translated(uDelegate* value);
    void add_Zoomed(uDelegate* value);
    void remove_Zoomed(uDelegate* value);
    static TwoFinger* Attach(::g::Fuse::Visual* n);
    static TwoFinger* New1(::g::Fuse::Visual* n);
};
// }

}}}} // ::g::Fuse::Gestures::Internal
