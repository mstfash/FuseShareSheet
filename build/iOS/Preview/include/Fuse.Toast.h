// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Toast;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{

// public sealed class Toast :8680
// {
uType* Toast_typeof();
void Toast__ctor__fn(Toast* __this, ::g::Fuse::Visual* visual, double* duration);
void Toast__Dismiss_fn(Toast* __this);
void Toast__DispatchNext_fn();
void Toast__New1_fn(::g::Fuse::Visual* visual, double* duration, Toast** __retval);
void Toast__OnUnrooted_fn(::g::Fuse::Visual* toast);
void Toast__Post_fn(::g::Fuse::Visual* visual, double* duration, Toast** __retval);

struct Toast : uObject
{
    double _duration;
    static uSStrong<Toast*> _ongoing_;
    static uSStrong<Toast*>& _ongoing() { return Toast_typeof()->Init(), _ongoing_; }
    static uSStrong< ::g::Uno::Collections::List*> _queue_;
    static uSStrong< ::g::Uno::Collections::List*>& _queue() { return Toast_typeof()->Init(), _queue_; }
    uStrong< ::g::Fuse::Visual*> _visual;

    void ctor_(::g::Fuse::Visual* visual, double duration);
    void Dismiss();
    static void DispatchNext();
    static Toast* New1(::g::Fuse::Visual* visual, double duration);
    static void OnUnrooted(::g::Fuse::Visual* toast);
    static Toast* Post(::g::Fuse::Visual* visual, double duration);
};
// }

}} // ::g::Fuse
