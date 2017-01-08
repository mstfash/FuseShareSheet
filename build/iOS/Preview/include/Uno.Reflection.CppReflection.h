// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/reflection/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Reflection{struct CppReflection;}}}

namespace g{
namespace Uno{
namespace Reflection{

// public sealed extern class CppReflection :135
// {
uType* CppReflection_typeof();
void CppReflection__ctor__fn(CppReflection* __this);
void CppReflection__FindField_fn(uType* type, uString* name, uField** __retval);
void CppReflection__FindFieldFromObject_fn(uObject* obj, uString* name, uField** __retval);
void CppReflection__FindFunction_fn(uType* type, uString* name, uArray* parameterTypes, uFunction** __retval);
void CppReflection__FindFunctionFromObject_fn(uObject* obj, uString* name, uArray* parameterTypes, uFunction** __retval);
void CppReflection__GetFields_fn(uType* type, uArray** __retval);
void CppReflection__GetFunctions_fn(uType* type, uArray** __retval);
void CppReflection__GetTypes_fn(uArray** __retval);
void CppReflection__New1_fn(CppReflection** __retval);

struct CppReflection : uObject
{
    void ctor_();
    static uField* FindField(uType* type, uString* name);
    static uField* FindFieldFromObject(uObject* obj, uString* name);
    static uFunction* FindFunction(uType* type, uString* name, uArray* parameterTypes);
    static uFunction* FindFunctionFromObject(uObject* obj, uString* name, uArray* parameterTypes);
    static uArray* GetFields(uType* type);
    static uArray* GetFunctions(uType* type);
    static uArray* GetTypes();
    static CppReflection* New1();
};
// }

}}} // ::g::Uno::Reflection
