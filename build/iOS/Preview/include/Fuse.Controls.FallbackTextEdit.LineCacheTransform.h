// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextedit/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextEdit{

// internal abstract interface LineCacheTransform :697
// {
uInterfaceType* LineCacheTransform_typeof();

struct LineCacheTransform
{
    void(*fp_Transform)(uObject*, uString*, uString**);
    static uString* Transform(const uInterface& __this, uString* text) { uString* __retval; return __this.VTable<LineCacheTransform>()->fp_Transform(__this, text, &__retval), __retval; }
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextEdit
