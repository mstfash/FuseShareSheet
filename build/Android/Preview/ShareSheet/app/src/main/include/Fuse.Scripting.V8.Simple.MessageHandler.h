// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct MessageHandler;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct String;}}}}}
namespace V8Simple { class MessageHandlerProxy; }

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal extern class MessageHandler :1128
// {
struct MessageHandler_type : uType
{
    void(*fp_Handle)(::g::Fuse::Scripting::V8::Simple::MessageHandler*, ::g::Fuse::Scripting::V8::Simple::String*);
};

MessageHandler_type* MessageHandler_typeof();
void MessageHandler__ctor__fn(MessageHandler* __this);
void MessageHandler__Handle_fn(MessageHandler* __this, ::g::Fuse::Scripting::V8::Simple::String* message);
void MessageHandler__New1_fn(MessageHandler** __retval);

struct MessageHandler : uObject
{
    ::V8Simple::MessageHandlerProxy* _impl;

    void ctor_();
    void Handle(::g::Fuse::Scripting::V8::Simple::String* message) { (((MessageHandler_type*)__type)->fp_Handle)(this, message); }
    static void Handle(MessageHandler* __this, ::g::Fuse::Scripting::V8::Simple::String* message) { MessageHandler__Handle_fn(__this, message); }
    static MessageHandler* New1();
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
