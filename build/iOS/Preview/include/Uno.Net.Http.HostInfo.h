// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Net.Http/0.42.5/uriparsers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HostInfo;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class HostInfo :60
// {
uType* HostInfo_typeof();
void HostInfo__ctor__fn(HostInfo* __this);
void HostInfo__get_Authority_fn(HostInfo* __this, uString** __retval);
void HostInfo__set_Authority_fn(HostInfo* __this, uString* value);
void HostInfo__get_Host_fn(HostInfo* __this, uString** __retval);
void HostInfo__set_Host_fn(HostInfo* __this, uString* value);
void HostInfo__New1_fn(HostInfo** __retval);
void HostInfo__get_Port_fn(HostInfo* __this, int* __retval);
void HostInfo__set_Port_fn(HostInfo* __this, int* value);

struct HostInfo : uObject
{
    uStrong<uString*> _Authority;
    uStrong<uString*> _Host;
    int _Port;

    void ctor_();
    uString* Authority();
    void Authority(uString* value);
    uString* Host();
    void Host(uString* value);
    int Port();
    void Port(int value);
    static HostInfo* New1();
};
// }

}}}} // ::g::Uno::Net::Http
