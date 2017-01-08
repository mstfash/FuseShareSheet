// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public sealed class Type :7775
// {
uType* Type_typeof();
void Type__ctor__fn(uType* __this);
void Type__get_BaseType_fn(uType* __this, uType** __retval);
void Type__get_ContainsGenericParameters_fn(uType* __this, bool* __retval);
void Type__Equals_fn(uType* __this, uObject* obj, bool* __retval);
void Type__get_FullName_fn(uType* __this, uString** __retval);
void Type__get_GenericParameterPosition_fn(uType* __this, int* __retval);
void Type__GetElementType_fn(uType* __this, uType** __retval);
void Type__GetGenericArguments_fn(uType* __this, uArray** __retval);
void Type__GetGenericTypeDefinition_fn(uType* __this, uType** __retval);
void Type__GetHashCode_fn(uType* __this, int* __retval);
void Type__GetInterfaces_fn(uType* __this, uArray** __retval);
void Type__GetType1_fn(uString* typeName, uType** __retval);
void Type__GetType2_fn(uString* typeName, bool* throwOnError, uType** __retval);
void Type__get_HasElementType_fn(uType* __this, bool* __retval);
void Type__get_IsArray_fn(uType* __this, bool* __retval);
void Type__get_IsByRef_fn(uType* __this, bool* __retval);
void Type__get_IsClass_fn(uType* __this, bool* __retval);
void Type__get_IsEnum_fn(uType* __this, bool* __retval);
void Type__get_IsGenericParameter_fn(uType* __this, bool* __retval);
void Type__get_IsGenericType_fn(uType* __this, bool* __retval);
void Type__get_IsGenericTypeDefinition_fn(uType* __this, bool* __retval);
void Type__get_IsInterface_fn(uType* __this, bool* __retval);
void Type__IsSubclassOf_fn(uType* __this, uType* c, bool* __retval);
void Type__get_IsValueType_fn(uType* __this, bool* __retval);
void Type__MakeArrayType_fn(uType* __this, uType** __retval);
void Type__MakeByRefType_fn(uType* __this, uType** __retval);
void Type__MakeGenericType_fn(uType* __this, uArray* typeArguments, uType** __retval);
void Type__New1_fn(uType** __retval);
void Type__op_Equality_fn(uType* a, uType* b, bool* __retval);
void Type__op_Inequality_fn(uType* a, uType* b, bool* __retval);
void Type__ToString_fn(uType* __this, uString** __retval);

struct Type
{
    static uSStrong<uArray*> EmptyTypes_;
    static uSStrong<uArray*>& EmptyTypes() { return Type_typeof()->Init(), EmptyTypes_; }

    static void ctor_(uType* __this);
    static uType* BaseType(uType* __this);
    static bool ContainsGenericParameters(uType* __this);
    static uString* FullName(uType* __this);
    static int GenericParameterPosition(uType* __this);
    static uType* GetElementType(uType* __this);
    static uArray* GetGenericArguments(uType* __this);
    static uType* GetGenericTypeDefinition(uType* __this);
    static uArray* GetInterfaces(uType* __this);
    static bool HasElementType(uType* __this);
    static bool IsArray(uType* __this);
    static bool IsByRef(uType* __this);
    static bool IsClass(uType* __this);
    static bool IsEnum(uType* __this);
    static bool IsGenericParameter(uType* __this);
    static bool IsGenericType(uType* __this);
    static bool IsGenericTypeDefinition(uType* __this);
    static bool IsInterface(uType* __this);
    static bool IsSubclassOf(uType* __this, uType* c);
    static bool IsValueType(uType* __this);
    static uType* MakeArrayType(uType* __this);
    static uType* MakeByRefType(uType* __this);
    static uType* MakeGenericType(uType* __this, uArray* typeArguments);
    static uType* GetType1(uString* typeName);
    static uType* GetType2(uString* typeName, bool throwOnError);
    static uType* New1();
    static bool op_Equality(uType* a, uType* b);
    static bool op_Inequality(uType* a, uType* b);
};
// }

}} // ::g::Uno
