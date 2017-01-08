// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/0.42.4/triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase;}}}
namespace g{namespace Fuse{namespace Triggers{struct ScrollRegion;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Triggers{

// internal sealed class ScrollRegion :714
// {
uType* ScrollRegion_typeof();
void ScrollRegion__ctor__fn(ScrollRegion* __this);
void ScrollRegion__CalcWithin_fn(ScrollRegion* __this, ::g::Fuse::Controls::ScrollViewBase* scrollable, ::g::Uno::Float2* __retval);
void ScrollRegion__IsInZone_fn(ScrollRegion* __this, ::g::Fuse::Controls::ScrollViewBase* scrollable, bool* __retval);
void ScrollRegion__New1_fn(ScrollRegion** __retval);
void ScrollRegion__SetRelativeTo_fn(ScrollRegion* __this, uObject* value, bool* __retval);
void ScrollRegion__SetTo_fn(ScrollRegion* __this, int* value, bool* __retval);
void ScrollRegion__SetWithin_fn(ScrollRegion* __this, float* value, bool* __retval);

struct ScrollRegion : uObject
{
    uStrong<uObject*> RelativeTo;
    int To;
    float Within;

    void ctor_();
    ::g::Uno::Float2 CalcWithin(::g::Fuse::Controls::ScrollViewBase* scrollable);
    bool IsInZone(::g::Fuse::Controls::ScrollViewBase* scrollable);
    bool SetRelativeTo(uObject* value);
    bool SetTo(int value);
    bool SetWithin(float value);
    static ScrollRegion* New1();
};
// }

}}} // ::g::Fuse::Triggers
