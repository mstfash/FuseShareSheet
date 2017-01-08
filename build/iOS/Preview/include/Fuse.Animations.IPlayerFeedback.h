// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Animations/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract interface IPlayerFeedback :4103
// {
uInterfaceType* IPlayerFeedback_typeof();

struct IPlayerFeedback
{
    void(*fp_OnPlaybackDone)(uObject*, uObject*);
    void(*fp_OnProgressUpdated)(uObject*, uObject*);
    void(*fp_OnStable)(uObject*, uObject*);
    static void OnPlaybackDone(const uInterface& __this, uObject* s) { __this.VTable<IPlayerFeedback>()->fp_OnPlaybackDone(__this, s); }
    static void OnProgressUpdated(const uInterface& __this, uObject* s) { __this.VTable<IPlayerFeedback>()->fp_OnProgressUpdated(__this, s); }
    static void OnStable(const uInterface& __this, uObject* s) { __this.VTable<IPlayerFeedback>()->fp_OnStable(__this, s); }
};
// }

}}} // ::g::Fuse::Animations
