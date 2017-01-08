// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Reflection.Uno/0.0.0/native/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Runtime.IReflection.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Signature;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeMemberName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{template<class T>struct Optional1;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{struct NativeReflection;}}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Reflection{
namespace Native{

// public sealed extern class NativeReflection :121
// {
struct NativeReflection_type : uType
{
    ::g::Outracks::Simulator::Runtime::IReflection interface0;
};

NativeReflection_type* NativeReflection_typeof();
void NativeReflection__ctor__fn(NativeReflection* __this, uObject* typeMap);
void NativeReflection__AddEventHandler_fn(NativeReflection* __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate);
void NativeReflection__CallDynamic_fn(NativeReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments, uObject** __retval);
void NativeReflection__CallStatic_fn(NativeReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments, uObject** __retval);
void NativeReflection__CreateDelegate_fn(NativeReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* delegateTypeName, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> >* methodSignature, uObject** __retval);
void NativeReflection__GetEnumValue_fn(NativeReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* enumType, ::g::Outracks::Simulator::Bytecode::TypeMemberName* valueName, uObject** __retval);
void NativeReflection__GetPropertyValue_fn(NativeReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uObject** __retval);
void NativeReflection__GetStaticPropertyOrFieldValue_fn(NativeReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, uObject** __retval);
void NativeReflection__Instantiate_fn(NativeReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, uArray* args, uObject** __retval);
void NativeReflection__IsSubtype_fn(NativeReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, bool* __retval);
void NativeReflection__IsType_fn(NativeReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, bool* __retval);
void NativeReflection__New1_fn(uObject* typeMap, NativeReflection** __retval);
void NativeReflection__RemoveEventHandler_fn(NativeReflection* __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate);
void NativeReflection__ResolveProperty_fn(NativeReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uType* propertyType, uObject** __retval);
void NativeReflection__SetPropertyValue_fn(NativeReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uObject* value);
void NativeReflection__SetStaticField_fn(NativeReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* fieldName, uObject* value);

struct NativeReflection : uObject
{
    uStrong<uObject*> _typeMap;

    void ctor_(uObject* typeMap);
    void AddEventHandler(uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate);
    uObject* CallDynamic(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments);
    uObject* CallStatic(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments);
    uObject* CreateDelegate(::g::Outracks::Simulator::Bytecode::TypeName* delegateTypeName, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> > methodSignature);
    uObject* GetEnumValue(::g::Outracks::Simulator::Bytecode::TypeName* enumType, ::g::Outracks::Simulator::Bytecode::TypeMemberName* valueName);
    uObject* GetPropertyValue(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName);
    uObject* GetStaticPropertyOrFieldValue(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName);
    uObject* Instantiate(::g::Outracks::Simulator::Bytecode::TypeName* typeName, uArray* args);
    bool IsSubtype(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName);
    bool IsType(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName);
    void RemoveEventHandler(uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate);
    uObject* ResolveProperty(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uType* propertyType);
    void SetPropertyValue(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uObject* value);
    void SetStaticField(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* fieldName, uObject* value);
    static NativeReflection* New1(uObject* typeMap);
};
// }

}}}}} // ::g::Outracks::Simulator::Reflection::Native
