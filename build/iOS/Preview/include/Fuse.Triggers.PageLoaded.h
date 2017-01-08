// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct PageLoaded;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class PageLoaded :1030
// {
::g::Fuse::Triggers::Trigger_type* PageLoaded_typeof();
void PageLoaded__ctor_4_fn(PageLoaded* __this);
void PageLoaded__New2_fn(PageLoaded** __retval);
void PageLoaded__OnPageLoaded_fn(PageLoaded* __this, uObject* s, uObject* a);
void PageLoaded__OnRooted_fn(PageLoaded* __this);
void PageLoaded__OnUnrooted_fn(PageLoaded* __this);

struct PageLoaded : ::g::Fuse::Triggers::Trigger
{
    uStrong<uObject*> _webView;

    void ctor_4();
    void OnPageLoaded(uObject* s, uObject* a);
    static PageLoaded* New2();
};
// }

}}} // ::g::Fuse::Triggers
