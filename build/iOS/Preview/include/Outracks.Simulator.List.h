// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList;}}}
namespace g{namespace Outracks{namespace Simulator{struct List;}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public static class List :211
// {
uClassType* List_typeof();
void List__Create_fn(uType* __type, uArray* elements, ::g::Outracks::Simulator::ImmutableList** __retval);
void List__Read_fn(uType* __type, ::g::Uno::IO::BinaryReader* reader, uDelegate* elementReader, ::g::Outracks::Simulator::ImmutableList** __retval);
void List__ReadImmutableList_fn(uType* __type, ::g::Uno::IO::BinaryReader* reader, uDelegate* elementReader, ::g::Outracks::Simulator::ImmutableList** __retval);
void List__ToImmutableList_fn(uType* __type, uObject* self, ::g::Outracks::Simulator::ImmutableList** __retval);
void List__Write_fn(uType* __type, ::g::Outracks::Simulator::ImmutableList* array, ::g::Uno::IO::BinaryWriter* writer, uDelegate* elementWriter);
void List__Write1_fn(uType* __type, ::g::Uno::IO::BinaryWriter* writer, ::g::Outracks::Simulator::ImmutableList* array, uDelegate* elementWriter);

struct List : uObject
{
    static ::g::Outracks::Simulator::ImmutableList* Create(uType* __type, uArray* elements);
    static ::g::Outracks::Simulator::ImmutableList* Read(uType* __type, ::g::Uno::IO::BinaryReader* reader, uDelegate* elementReader);
    static ::g::Outracks::Simulator::ImmutableList* ReadImmutableList(uType* __type, ::g::Uno::IO::BinaryReader* reader, uDelegate* elementReader);
    static ::g::Outracks::Simulator::ImmutableList* ToImmutableList(uType* __type, uObject* self);
    static void Write(uType* __type, ::g::Outracks::Simulator::ImmutableList* array, ::g::Uno::IO::BinaryWriter* writer, uDelegate* elementWriter);
    static void Write1(uType* __type, ::g::Uno::IO::BinaryWriter* writer, ::g::Outracks::Simulator::ImmutableList* array, uDelegate* elementWriter);
};
// }

}}} // ::g::Outracks::Simulator
