// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Optional;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{template<class T>struct Optional1;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class Optional :282
// {
uType* Optional_typeof();
void Optional__ctor__fn(Optional* __this);
void Optional__New1_fn(Optional** __retval);
void Optional__None_fn(Optional** __retval);
void Optional__None1_fn(uType* __type, uTRef __retval);
void Optional__Read_fn(uType* __type, ::g::Uno::IO::BinaryReader* reader, uDelegate* readSome, uTRef __retval);
void Optional__Read1_fn(uType* __type, ::g::Uno::IO::BinaryReader* reader, uDelegate* readSome, uTRef __retval);
void Optional__Some_fn(uType* __type, void* value, uTRef __retval);
void Optional__Write_fn(uType* __type, ::g::Uno::IO::BinaryWriter* writer, void* optional, uDelegate* writeSome);
void Optional__Write1_fn(uType* __type, ::g::Uno::IO::BinaryWriter* writer, void* optional, uDelegate* writeSome);
void Optional__Write2_fn(uType* __type, ::g::Uno::IO::BinaryWriter* writer, void* optional, uDelegate* writeSome);

struct Optional : uObject
{
    void ctor_();
    static Optional* New1();
    static Optional* None();
    template<class T>
    static ::g::Outracks::Simulator::Bytecode::Optional1<T> None1(uType* __type);
    template<class T>
    static ::g::Outracks::Simulator::Bytecode::Optional1<T> Read(uType* __type, ::g::Uno::IO::BinaryReader* reader, uDelegate* readSome);
    template<class T>
    static ::g::Outracks::Simulator::Bytecode::Optional1<T> Read1(uType* __type, ::g::Uno::IO::BinaryReader* reader, uDelegate* readSome);
    template<class T>
    static ::g::Outracks::Simulator::Bytecode::Optional1<T> Some(uType* __type, T value);
    template<class T>
    static void Write(uType* __type, ::g::Uno::IO::BinaryWriter* writer, ::g::Outracks::Simulator::Bytecode::Optional1<T> optional, uDelegate* writeSome);
    template<class T>
    static void Write1(uType* __type, ::g::Uno::IO::BinaryWriter* writer, ::g::Outracks::Simulator::Bytecode::Optional1<T> optional, uDelegate* writeSome);
    template<class T>
    static void Write2(uType* __type, ::g::Uno::IO::BinaryWriter* writer, ::g::Outracks::Simulator::Bytecode::Optional1<T> optional, uDelegate* writeSome);
};

}}}} // ::g::Outracks::Simulator::Bytecode

#include <Outracks.Simulator.Bytecode.Optional-1.h>

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

template<class T>
::g::Outracks::Simulator::Bytecode::Optional1<T> Optional::None1(uType* __type) { ::g::Outracks::Simulator::Bytecode::Optional1<T> __retval; return Optional__None1_fn(__type&__retval), __retval; }
template<class T>
::g::Outracks::Simulator::Bytecode::Optional1<T> Optional::Read(uType* __type, ::g::Uno::IO::BinaryReader* reader, uDelegate* readSome) { ::g::Outracks::Simulator::Bytecode::Optional1<T> __retval; return Optional__Read_fn(__type, reader, readSome, &__retval), __retval; }
template<class T>
::g::Outracks::Simulator::Bytecode::Optional1<T> Optional::Read1(uType* __type, ::g::Uno::IO::BinaryReader* reader, uDelegate* readSome) { ::g::Outracks::Simulator::Bytecode::Optional1<T> __retval; return Optional__Read1_fn(__type, reader, readSome, &__retval), __retval; }
template<class T>
::g::Outracks::Simulator::Bytecode::Optional1<T> Optional::Some(uType* __type, T value) { ::g::Outracks::Simulator::Bytecode::Optional1<T> __retval; return Optional__Some_fn(__type, uConstrain(__type->U(0), value), &__retval), __retval; }
template<class T>
void Optional::Write(uType* __type, ::g::Uno::IO::BinaryWriter* writer, ::g::Outracks::Simulator::Bytecode::Optional1<T> optional, uDelegate* writeSome) { Optional__Write_fn(__type, writer, uConstrain(::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(__type->U(0), NULL), optional), writeSome); }
template<class T>
void Optional::Write1(uType* __type, ::g::Uno::IO::BinaryWriter* writer, ::g::Outracks::Simulator::Bytecode::Optional1<T> optional, uDelegate* writeSome) { Optional__Write1_fn(__type, writer, uConstrain(::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(__type->U(0), NULL), optional), writeSome); }
template<class T>
void Optional::Write2(uType* __type, ::g::Uno::IO::BinaryWriter* writer, ::g::Outracks::Simulator::Bytecode::Optional1<T> optional, uDelegate* writeSome) { Optional__Write2_fn(__type, writer, uConstrain(::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(__type->U(0), NULL), optional), writeSome); }
// }

}}}} // ::g::Outracks::Simulator::Bytecode
