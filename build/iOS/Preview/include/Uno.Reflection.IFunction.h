// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/reflection/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Reflection{

// public abstract interface IFunction :18
// {
uInterfaceType* IFunction_typeof();

struct IFunction
{
    void(*fp_CreateDelegate)(uObject*, uType*, uObject*, uDelegate**);
    void(*fp_Invoke)(uObject*, uObject*, uArray*, uObject**);
    void(*fp_get_ParameterTypes)(uObject*, uArray**);
    static uDelegate* CreateDelegate(const uInterface& __this, uType* type, uObject* obj) { uDelegate* __retval; return __this.VTable<IFunction>()->fp_CreateDelegate(__this, type, obj, &__retval), __retval; }
    static uObject* Invoke(const uInterface& __this, uObject* obj, uArray* args) { uObject* __retval; return __this.VTable<IFunction>()->fp_Invoke(__this, obj, args, &__retval), __retval; }
    static uArray* ParameterTypes(const uInterface& __this) { uArray* __retval; return __this.VTable<IFunction>()->fp_get_ParameterTypes(__this, &__retval), __retval; }
};
// }

}}} // ::g::Uno::Reflection
