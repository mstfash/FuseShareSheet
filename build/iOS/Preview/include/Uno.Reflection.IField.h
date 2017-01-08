// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/reflection/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Reflection{

// public abstract interface IField :7
// {
uInterfaceType* IField_typeof();

struct IField
{
    void(*fp_GetValue)(uObject*, uObject*, uObject**);
    void(*fp_SetValue)(uObject*, uObject*, uObject*);
    static uObject* GetValue(const uInterface& __this, uObject* obj) { uObject* __retval; return __this.VTable<IField>()->fp_GetValue(__this, obj, &__retval), __retval; }
    static void SetValue(const uInterface& __this, uObject* obj, uObject* value) { __this.VTable<IField>()->fp_SetValue(__this, obj, value); }
};
// }

}}} // ::g::Uno::Reflection
