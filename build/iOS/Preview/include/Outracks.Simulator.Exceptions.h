// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{struct Exceptions;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal static class Exceptions :614
// {
uClassType* Exceptions_typeof();
void Exceptions__Send_fn(uObject* client, ::g::Uno::Collections::List* exceptions);
void Exceptions__Unpack_fn(::g::Uno::Exception* e, ::g::Uno::Collections::List** __retval);

struct Exceptions : uObject
{
    static void Send(uObject* client, ::g::Uno::Collections::List* exceptions);
    static ::g::Uno::Collections::List* Unpack(::g::Uno::Exception* e);
};
// }

}}} // ::g::Outracks::Simulator
