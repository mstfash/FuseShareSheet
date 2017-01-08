// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct MessageHandler;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Debugger;}}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}
namespace g{namespace Uno{namespace Threading{struct Thread;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal sealed extern class Debugger :346
// {
struct Debugger_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Debugger_type* Debugger_typeof();
void Debugger__ctor__fn(Debugger* __this, uObject* dispatcher, int* port);
void Debugger__AddHeader_fn(uString* body, uString** __retval);
void Debugger__Connect_fn(Debugger* parent, uObject** __retval);
void Debugger__DisconnectedMessageHandler_fn(Debugger* __this, uString* message);
void Debugger__Dispose_fn(Debugger* __this);
void Debugger__MessageHandler_fn(Debugger* __this, uString* message);
void Debugger__New1_fn(uObject* dispatcher, int* port, Debugger** __retval);
void Debugger__SetMessageHandler_fn(Debugger* __this, uDelegate* handler);
void Debugger__StateMachine_fn(Debugger* __this);
void Debugger__ToConnected_fn(Debugger* parent, ::g::Uno::Net::Sockets::Socket* communicationSocket, uObject** __retval);

struct Debugger : uObject
{
    static uSStrong<uString*> _contentLengthString_;
    static uSStrong<uString*>& _contentLengthString() { return Debugger_typeof()->Init(), _contentLengthString_; }
    uStrong<uObject*> _currentState;
    uStrong< ::g::Fuse::Scripting::V8::Simple::MessageHandler*> _debugMessageHandler;
    uStrong<uObject*> _dispatcher;
    uStrong<uDelegate*> _messageHandler;
    uStrong< ::g::Uno::Collections::List*> _offlineMessages;
    int _port;
    bool _shutdown;
    uStrong< ::g::Uno::Threading::Thread*> _stateMachine;

    void ctor_(uObject* dispatcher, int port);
    void DisconnectedMessageHandler(uString* message);
    void Dispose();
    void MessageHandler(uString* message);
    void SetMessageHandler(uDelegate* handler);
    void StateMachine();
    static uString* AddHeader(uString* body);
    static uObject* Connect(Debugger* parent);
    static Debugger* New1(uObject* dispatcher, int port);
    static uObject* ToConnected(Debugger* parent, ::g::Uno::Net::Sockets::Socket* communicationSocket);
};
// }

}}}} // ::g::Fuse::Scripting::V8
