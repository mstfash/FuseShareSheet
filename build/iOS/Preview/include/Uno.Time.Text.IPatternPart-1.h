// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// internal abstract interface IPatternPart<T> :820
// {
uInterfaceType* IPatternPart_typeof();

struct IPatternPart
{
    void(*fp_Read)(uObject*, uString*, int*, void*, int*);
    void(*fp_get_SkipNextPartsCountIfThisNotSpecified)(uObject*, int*);
    void(*fp_Write)(uObject*, void*, uString**);
    template<class T>
    static int Read(const uInterface& __this, uString* line, int position, T value) { int __retval; return __this.VTable<IPatternPart>()->fp_Read(__this, line, &position, uConstrain(__this->__type->GetBase(IPatternPart_typeof())->T(0), value), &__retval), __retval; }
    static void Read_ex(const uInterface& __this, uString* line, int* position, void* value, int* __retval) { __this.VTable<IPatternPart>()->fp_Read(__this, line, position, value, __retval); }
    static int SkipNextPartsCountIfThisNotSpecified(const uInterface& __this) { int __retval; return __this.VTable<IPatternPart>()->fp_get_SkipNextPartsCountIfThisNotSpecified(__this, &__retval), __retval; }
    template<class T>
    static uString* Write(const uInterface& __this, T value) { uString* __retval; return __this.VTable<IPatternPart>()->fp_Write(__this, uConstrain(__this->__type->GetBase(IPatternPart_typeof())->T(0), value), &__retval), __retval; }
    static void Write_ex(const uInterface& __this, void* value, uString** __retval) { __this.VTable<IPatternPart>()->fp_Write(__this, value, __retval); }
};
// }

}}}} // ::g::Uno::Time::Text
