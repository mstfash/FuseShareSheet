// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Controls{struct HTML;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class HTML :64
// {
uType* HTML_typeof();
void HTML__ctor_1_fn(HTML* __this);
void HTML__New2_fn(HTML** __retval);
void HTML__get_Source_fn(HTML* __this, uString** __retval);
void HTML__set_Source_fn(HTML* __this, uString* value);

struct HTML : ::g::Uno::UX::PropertyObject
{
    uStrong<uObject*> Receiver;

    void ctor_1();
    uString* Source();
    void Source(uString* value);
    static HTML* New2();
};
// }

}}} // ::g::Fuse::Controls
