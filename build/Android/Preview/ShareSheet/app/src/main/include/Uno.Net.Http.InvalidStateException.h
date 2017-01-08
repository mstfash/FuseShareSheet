// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Net.Http/0.42.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct InvalidStateException;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class InvalidStateException :696
// {
::g::Uno::Exception_type* InvalidStateException_typeof();
void InvalidStateException__ctor_3_fn(InvalidStateException* __this);
void InvalidStateException__ctor_4_fn(InvalidStateException* __this, uString* message);
void InvalidStateException__New4_fn(InvalidStateException** __retval);
void InvalidStateException__New5_fn(uString* message, InvalidStateException** __retval);

struct InvalidStateException : ::g::Uno::Exception
{
    void ctor_3();
    void ctor_4(uString* message);
    static InvalidStateException* New4();
    static InvalidStateException* New5(uString* message);
};
// }

}}}} // ::g::Uno::Net::Http
