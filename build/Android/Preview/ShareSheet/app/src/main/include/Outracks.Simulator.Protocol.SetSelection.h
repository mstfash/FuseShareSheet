// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/messages/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Protocol.MessageFromClient.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct SetSelection;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class SetSelection :76
// {
uType* SetSelection_typeof();
void SetSelection__ctor_1_fn(SetSelection* __this, uString* tag);
void SetSelection__New1_fn(uString* tag, SetSelection** __retval);
void SetSelection__Read1_fn(::g::Uno::IO::BinaryReader* reader, SetSelection** __retval);
void SetSelection__Write1_fn(SetSelection* message, ::g::Uno::IO::BinaryWriter* writer);

struct SetSelection : ::g::Outracks::Simulator::Protocol::MessageFromClient
{
    uStrong<uString*> Tag;

    void ctor_1(uString* tag);
    static SetSelection* New1(uString* tag);
    static SetSelection* Read1(::g::Uno::IO::BinaryReader* reader);
    static void Write1(SetSelection* message, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
