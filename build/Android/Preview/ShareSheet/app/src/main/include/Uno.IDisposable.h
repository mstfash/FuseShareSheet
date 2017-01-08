// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public abstract interface IDisposable :3356
// {
uInterfaceType* IDisposable_typeof();

struct IDisposable
{
    void(*fp_Dispose)(uObject*);
    static void Dispose(const uInterface& __this) { __this.VTable<IDisposable>()->fp_Dispose(__this); }
};
// }

}} // ::g::Uno
