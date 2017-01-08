// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Simple.MessageHandler.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct DelegateMessageHandler;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct String;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal sealed extern class DelegateMessageHandler :1146
// {
::g::Fuse::Scripting::V8::Simple::MessageHandler_type* DelegateMessageHandler_typeof();
void DelegateMessageHandler__ctor_1_fn(DelegateMessageHandler* __this, uDelegate* handler);
void DelegateMessageHandler__Handle_fn(DelegateMessageHandler* __this, ::g::Fuse::Scripting::V8::Simple::String* message);
void DelegateMessageHandler__New2_fn(uDelegate* handler, DelegateMessageHandler** __retval);

struct DelegateMessageHandler : ::g::Fuse::Scripting::V8::Simple::MessageHandler
{
    uStrong<uDelegate*> _handler;

    void ctor_1(uDelegate* handler);
    static DelegateMessageHandler* New2(uDelegate* handler);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
