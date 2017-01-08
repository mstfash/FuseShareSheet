// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IRangeView :420
// {
uInterfaceType* IRangeView_typeof();

struct IRangeView
{
    void(*fp_set_Progress)(uObject*, double*);
    static void Progress(const uInterface& __this, double value) { __this.VTable<IRangeView>()->fp_set_Progress(__this, &value); }
};
// }

}}}} // ::g::Fuse::Controls::Native
