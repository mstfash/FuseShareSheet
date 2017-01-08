// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.BufferedWebViewCall.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct LoadHtmlCall;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class LoadHtmlCall :384
// {
struct LoadHtmlCall_type : uType
{
    ::g::Fuse::Controls::BufferedWebViewCall interface0;
};

LoadHtmlCall_type* LoadHtmlCall_typeof();
void LoadHtmlCall__ctor__fn(LoadHtmlCall* __this, uString* html1, uString* baseUrl1);
void LoadHtmlCall__Apply_fn(LoadHtmlCall* __this, uObject* wv);
void LoadHtmlCall__New1_fn(uString* html1, uString* baseUrl1, LoadHtmlCall** __retval);

struct LoadHtmlCall : uObject
{
    uStrong<uString*> baseUrl;
    uStrong<uString*> html;

    void ctor_(uString* html1, uString* baseUrl1);
    void Apply(uObject* wv);
    static LoadHtmlCall* New1(uString* html1, uString* baseUrl1);
};
// }

}}} // ::g::Fuse::Controls
