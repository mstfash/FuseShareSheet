// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Simple.ExternalFreer.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct DelegateExternalFreer;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal sealed extern class DelegateExternalFreer :1222
// {
::g::Fuse::Scripting::V8::Simple::ExternalFreer_type* DelegateExternalFreer_typeof();
void DelegateExternalFreer__ctor_1_fn(DelegateExternalFreer* __this, uDelegate* free);
void DelegateExternalFreer__Free_fn(DelegateExternalFreer* __this, void** ptr);
void DelegateExternalFreer__New2_fn(uDelegate* free, DelegateExternalFreer** __retval);

struct DelegateExternalFreer : ::g::Fuse::Scripting::V8::Simple::ExternalFreer
{
    uStrong<uDelegate*> _free;

    void ctor_1(uDelegate* free);
    static DelegateExternalFreer* New2(uDelegate* free);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
