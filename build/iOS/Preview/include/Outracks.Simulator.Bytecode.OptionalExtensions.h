// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/common/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct OptionalExtensions;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{template<class T>struct Optional1;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public static class OptionalExtensions :258
// {
uClassType* OptionalExtensions_typeof();
void OptionalExtensions__Or_fn(uType* __type, void* self, void* fallback, uTRef __retval);
void OptionalExtensions__Or1_fn(uType* __type, void* self, void* fallback, uTRef __retval);
void OptionalExtensions__ToOptional_fn(uType* __type, uObject* self, uTRef __retval);

struct OptionalExtensions : uObject
{
    template<class T>
    static ::g::Outracks::Simulator::Bytecode::Optional1<T> Or(uType* __type, ::g::Outracks::Simulator::Bytecode::Optional1<T> self, ::g::Outracks::Simulator::Bytecode::Optional1<T> fallback);
    template<class T, class TResult>
    static TResult Or1(uType* __type, ::g::Outracks::Simulator::Bytecode::Optional1<T> self, TResult fallback);
    static ::g::Outracks::Simulator::Bytecode::Optional1<uStrong<uObject*> > ToOptional(uType* __type, uObject* self);
};

}}}} // ::g::Outracks::Simulator::Bytecode

#include <Outracks.Simulator.Bytecode.Optional-1.h>
#include <Uno.Object.h>

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

template<class T>
::g::Outracks::Simulator::Bytecode::Optional1<T> OptionalExtensions::Or(uType* __type, ::g::Outracks::Simulator::Bytecode::Optional1<T> self, ::g::Outracks::Simulator::Bytecode::Optional1<T> fallback) { ::g::Outracks::Simulator::Bytecode::Optional1<T> __retval; return OptionalExtensions__Or_fn(__type, uConstrain(::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(__type->U(0), NULL), self), uConstrain(::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(__type->U(0), NULL), fallback), &__retval), __retval; }
template<class T, class TResult>
TResult OptionalExtensions::Or1(uType* __type, ::g::Outracks::Simulator::Bytecode::Optional1<T> self, TResult fallback) { TResult __retval; return OptionalExtensions__Or1_fn(__type, uConstrain(::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(__type->U(0), NULL), self), uConstrain(__type->U(1), fallback), &__retval), __retval; }
inline ::g::Outracks::Simulator::Bytecode::Optional1<uStrong<uObject*> > OptionalExtensions::ToOptional(uType* __type, uObject* self) { ::g::Outracks::Simulator::Bytecode::Optional1<uStrong<uObject*> > __retval; return OptionalExtensions__ToOptional_fn(__type, self, &__retval), __retval; }
// }

}}}} // ::g::Outracks::Simulator::Bytecode
