// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct DebugLog;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct MessageFromClient;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct RegisterName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct SetSelection;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct UnhandledException;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public abstract class MessageFromClient :12
// {
uType* MessageFromClient_typeof();
void MessageFromClient__ctor__fn(MessageFromClient* __this);
void MessageFromClient__Match_fn(MessageFromClient* __this, uDelegate* a0, uDelegate* a1, uDelegate* a2, uDelegate* a3);
void MessageFromClient__Match1_fn(MessageFromClient* __this, uType* __type, uDelegate* a0, uDelegate* a1, uDelegate* a2, uDelegate* a3, uTRef __retval);
void MessageFromClient__Read_fn(::g::Uno::IO::BinaryReader* reader, MessageFromClient** __retval);
void MessageFromClient__Write_fn(MessageFromClient* message, ::g::Uno::IO::BinaryWriter* writer);

struct MessageFromClient : uObject
{
    void ctor_();
    void Match(uDelegate* a0, uDelegate* a1, uDelegate* a2, uDelegate* a3);
    template<class T>
    T Match1(uType* __type, uDelegate* a0, uDelegate* a1, uDelegate* a2, uDelegate* a3) { T __retval; return MessageFromClient__Match1_fn(this, __type, a0, a1, a2, a3, &__retval), __retval; }
    static MessageFromClient* Read(::g::Uno::IO::BinaryReader* reader);
    static void Write(MessageFromClient* message, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
