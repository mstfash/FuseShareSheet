// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct FocusHelpers__PerformBecomeFirstResponder;}}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// private sealed class FocusHelpers.PerformBecomeFirstResponder :467
// {
uType* FocusHelpers__PerformBecomeFirstResponder_typeof();
void FocusHelpers__PerformBecomeFirstResponder__ctor__fn(FocusHelpers__PerformBecomeFirstResponder* __this, uObject* target);
void FocusHelpers__PerformBecomeFirstResponder__BecomeFirstResponder_fn(FocusHelpers__PerformBecomeFirstResponder* __this);
void FocusHelpers__PerformBecomeFirstResponder__New1_fn(uObject* target, FocusHelpers__PerformBecomeFirstResponder** __retval);

struct FocusHelpers__PerformBecomeFirstResponder : uObject
{
    uStrong<uObject*> _target;

    void ctor_(uObject* target);
    void BecomeFirstResponder();
    static FocusHelpers__PerformBecomeFirstResponder* New1(uObject* target);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
