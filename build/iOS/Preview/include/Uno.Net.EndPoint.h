// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Net.Sockets/0.42.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{struct EndPoint;}}}

namespace g{
namespace Uno{
namespace Net{

// public abstract class EndPoint :178
// {
uType* EndPoint_typeof();
void EndPoint__ctor__fn(EndPoint* __this, int* addressFamily);
void EndPoint__get_AddressFamily_fn(EndPoint* __this, int* __retval);
void EndPoint__set_AddressFamily_fn(EndPoint* __this, int* value);

struct EndPoint : uObject
{
    int _AddressFamily;

    void ctor_(int addressFamily);
    int AddressFamily();
    void AddressFamily(int value);
};
// }

}}} // ::g::Uno::Net
