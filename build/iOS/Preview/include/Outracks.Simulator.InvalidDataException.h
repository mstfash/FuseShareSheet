// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Outracks{namespace Simulator{struct InvalidDataException;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class InvalidDataException :143
// {
::g::Uno::Exception_type* InvalidDataException_typeof();
void InvalidDataException__ctor_3_fn(InvalidDataException* __this);
void InvalidDataException__New4_fn(InvalidDataException** __retval);

struct InvalidDataException : ::g::Uno::Exception
{
    void ctor_3();
    static InvalidDataException* New4();
};
// }

}}} // ::g::Outracks::Simulator
