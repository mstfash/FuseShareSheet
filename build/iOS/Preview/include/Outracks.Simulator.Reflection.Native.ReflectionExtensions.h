// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Reflection.Uno/0.0.0/native/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Signature;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeMemberName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{struct ReflectionExtensions;}}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Reflection{
namespace Native{

// internal static extern class ReflectionExtensions :561
// {
uClassType* ReflectionExtensions_typeof();
void ReflectionExtensions__CheckArgumentTypes_fn(uArray* paramTypes, uArray* argumentTypes, bool* __retval);
void ReflectionExtensions__FindConstructor_fn(uType* type, uArray* paramTypes, uFunction** __retval);
void ReflectionExtensions__FindEventAddFunction_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uObject* delegateObj, uFunction** __retval);
void ReflectionExtensions__FindEventRemoveFunction_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uObject* delegateObj, uFunction** __retval);
void ReflectionExtensions__FindField_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* fieldName, uField** __retval);
void ReflectionExtensions__FindFunction_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, uArray* paramTypes, uFunction** __retval);
void ReflectionExtensions__FindFunctionOverload_fn(uArray* functions, uArray* paramTypes, uFunction** __retval);
void ReflectionExtensions__FindFunctionsByName_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, uArray** __retval);
void ReflectionExtensions__FindPropertyGetter_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uFunction** __retval);
void ReflectionExtensions__FindPropertySetter_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uType* argType, uFunction** __retval);
void ReflectionExtensions__FindType_fn(::g::Outracks::Simulator::Bytecode::TypeName* typeName, uType** __retval);
void ReflectionExtensions__FindTypes_fn(uArray* typeName, uArray** __retval);
void ReflectionExtensions__GetParameterTypes_fn(::g::Outracks::Simulator::Bytecode::Signature* methodSignature, uArray** __retval);
void ReflectionExtensions__GetTypes_fn(uArray* objects, uArray** __retval);

struct ReflectionExtensions : uObject
{
    static uSStrong< ::g::Outracks::Simulator::Bytecode::TypeMemberName*> ConstructorName_;
    static uSStrong< ::g::Outracks::Simulator::Bytecode::TypeMemberName*>& ConstructorName() { return ReflectionExtensions_typeof()->Init(), ConstructorName_; }
    static uSStrong<uString*> EventAdderPrefix_;
    static uSStrong<uString*>& EventAdderPrefix() { return ReflectionExtensions_typeof()->Init(), EventAdderPrefix_; }
    static uSStrong<uString*> EventRemovePrefix_;
    static uSStrong<uString*>& EventRemovePrefix() { return ReflectionExtensions_typeof()->Init(), EventRemovePrefix_; }
    static uSStrong<uString*> PropGetPrefix_;
    static uSStrong<uString*>& PropGetPrefix() { return ReflectionExtensions_typeof()->Init(), PropGetPrefix_; }
    static uSStrong<uString*> PropSetPrefix_;
    static uSStrong<uString*>& PropSetPrefix() { return ReflectionExtensions_typeof()->Init(), PropSetPrefix_; }

    static bool CheckArgumentTypes(uArray* paramTypes, uArray* argumentTypes);
    static uFunction* FindConstructor(uType* type, uArray* paramTypes);
    static uFunction* FindEventAddFunction(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uObject* delegateObj);
    static uFunction* FindEventRemoveFunction(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uObject* delegateObj);
    static uField* FindField(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* fieldName);
    static uFunction* FindFunction(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, uArray* paramTypes);
    static uFunction* FindFunctionOverload(uArray* functions, uArray* paramTypes);
    static uArray* FindFunctionsByName(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName);
    static uFunction* FindPropertyGetter(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName);
    static uFunction* FindPropertySetter(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uType* argType);
    static uType* FindType(::g::Outracks::Simulator::Bytecode::TypeName* typeName);
    static uArray* FindTypes(uArray* typeName);
    static uArray* GetParameterTypes(::g::Outracks::Simulator::Bytecode::Signature* methodSignature);
    static uArray* GetTypes(uArray* objects);
};
// }

}}}}} // ::g::Outracks::Simulator::Reflection::Native
