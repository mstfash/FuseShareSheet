// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Animations{struct Keyframe;}}}
namespace g{namespace Fuse{namespace Controls{struct KeyframeAccessors;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public static class KeyframeAccessors :679
// {
uClassType* KeyframeAccessors_typeof();
void KeyframeAccessors__SetVisibility_fn(::g::Fuse::Animations::Keyframe* kf, int* __retval);
void KeyframeAccessors__SetVisibility1_fn(::g::Fuse::Animations::Keyframe* kf, int* v);

struct KeyframeAccessors : uObject
{
    static int SetVisibility(::g::Fuse::Animations::Keyframe* kf);
    static void SetVisibility1(::g::Fuse::Animations::Keyframe* kf, int v);
};
// }

}}} // ::g::Fuse::Controls
