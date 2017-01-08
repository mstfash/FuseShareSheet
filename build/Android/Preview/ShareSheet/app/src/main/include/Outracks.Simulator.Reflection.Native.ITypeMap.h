// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Reflection.Uno/0.0.0/native/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Parameter;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Reflection{
namespace Native{

// public abstract interface ITypeMap :37
// {
uInterfaceType* ITypeMap_typeof();

struct ITypeMap
{
    void(*fp_ResolveType)(uObject*, ::g::Outracks::Simulator::Bytecode::Parameter*, uType**);
    void(*fp_ResolveType1)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, uType**);
    static uType* ResolveType(const uInterface& __this, ::g::Outracks::Simulator::Bytecode::Parameter* parameter) { uType* __retval; return __this.VTable<ITypeMap>()->fp_ResolveType(__this, parameter, &__retval), __retval; }
    static uType* ResolveType1(const uInterface& __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName) { uType* __retval; return __this.VTable<ITypeMap>()->fp_ResolveType1(__this, typeName, &__retval), __retval; }
};
// }

}}}}} // ::g::Outracks::Simulator::Reflection::Native
