// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct Error;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct Execute;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct MessageToClient;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct Reify;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public abstract class MessageToClient :204
// {
uType* MessageToClient_typeof();
void MessageToClient__ctor__fn(MessageToClient* __this);
void MessageToClient__Match_fn(MessageToClient* __this, uDelegate* a1, uDelegate* a2, uDelegate* a3);
void MessageToClient__Match1_fn(MessageToClient* __this, uType* __type, uDelegate* a1, uDelegate* a2, uDelegate* a3, uTRef __retval);
void MessageToClient__Read_fn(::g::Uno::IO::BinaryReader* reader, MessageToClient** __retval);
void MessageToClient__Write_fn(MessageToClient* message, ::g::Uno::IO::BinaryWriter* writer);

struct MessageToClient : uObject
{
    void ctor_();
    void Match(uDelegate* a1, uDelegate* a2, uDelegate* a3);
    template<class T>
    T Match1(uType* __type, uDelegate* a1, uDelegate* a2, uDelegate* a3) { T __retval; return MessageToClient__Match1_fn(this, __type, a1, a2, a3, &__retval), __retval; }
    static MessageToClient* Read(::g::Uno::IO::BinaryReader* reader);
    static void Write(MessageToClient* message, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
