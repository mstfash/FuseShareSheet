// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{template<class T>struct Optional1;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct Reify;}}}}
namespace g{namespace Outracks{namespace Simulator{struct BytecodeCache;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public static class BytecodeCache :1573
// {
uClassType* BytecodeCache_typeof();
void BytecodeCache__get_CacheFileName_fn(uString** __retval);
void BytecodeCache__get_CachePath_fn(uString** __retval);
void BytecodeCache__get_FuseDataDirectory_fn(uString** __retval);
void BytecodeCache__Load_fn(::g::Outracks::Simulator::Protocol::Reify** __retval);
void BytecodeCache__get_ProjectHash_fn(uint32_t* __retval);
void BytecodeCache__Save_fn(::g::Outracks::Simulator::Protocol::Reify* reify);
void BytecodeCache__TryLoad_fn(::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::Reify*> >* __retval);
void BytecodeCache__TrySave_fn(::g::Outracks::Simulator::Protocol::Reify* reify);

struct BytecodeCache : uObject
{
    static ::g::Outracks::Simulator::Protocol::Reify* Load();
    static void Save(::g::Outracks::Simulator::Protocol::Reify* reify);
    static ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::Reify*> > TryLoad();
    static void TrySave(::g::Outracks::Simulator::Protocol::Reify* reify);
    static uString* CacheFileName();
    static uString* CachePath();
    static uString* FuseDataDirectory();
    static uint32_t ProjectHash();
};
// }

}}} // ::g::Outracks::Simulator
