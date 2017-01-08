// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.WebViewNavAction.h>
namespace g{namespace Fuse{namespace Controls{struct WebView;}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct StopLoading;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class StopLoading :633
// {
::g::Fuse::Triggers::Actions::WebViewNavAction_type* StopLoading_typeof();
void StopLoading__ctor_3_fn(StopLoading* __this);
void StopLoading__Execute_fn(StopLoading* __this, ::g::Fuse::Controls::WebView* webview);
void StopLoading__New2_fn(StopLoading** __retval);

struct StopLoading : ::g::Fuse::Triggers::Actions::WebViewNavAction
{
    void ctor_3();
    static StopLoading* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
