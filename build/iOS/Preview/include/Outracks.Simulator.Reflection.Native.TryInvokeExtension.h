// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Reflection.Uno/0.0.0/native/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeMemberName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{struct TryInvokeExtension;}}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Reflection{
namespace Native{

// internal static extern class TryInvokeExtension :288
// {
uClassType* TryInvokeExtension_typeof();
void TryInvokeExtension__FindUnambiguousMethod_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments, uObject** __retval);
void TryInvokeExtension__GetEvent_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name, uType* propertyType, uObject** __retval);
void TryInvokeExtension__GetField_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name, uObject** __retval);
void TryInvokeExtension__GetMethod_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name, uArray* parameterTypes, uObject** __retval);
void TryInvokeExtension__GetMethods_fn(uType* type, uArray** __retval);
void TryInvokeExtension__GetProperty_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name, uType* propertyType, uObject** __retval);
void TryInvokeExtension__IsInstanceOfType_fn(uType* type, uObject* obj, bool* __retval);
void TryInvokeExtension__ParametersMatch_fn(uObject* m, uArray* arguments, bool* __retval);
void TryInvokeExtension__TryInvoke_fn(uObject* mi, uObject* obj, uArray* value, uObject** __retval);

struct TryInvokeExtension : uObject
{
    static uObject* FindUnambiguousMethod(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments);
    static uObject* GetEvent(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name, uType* propertyType);
    static uObject* GetField(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name);
    static uObject* GetMethod(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name, uArray* parameterTypes);
    static uArray* GetMethods(uType* type);
    static uObject* GetProperty(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name, uType* propertyType);
    static bool IsInstanceOfType(uType* type, uObject* obj);
    static bool ParametersMatch(uObject* m, uArray* arguments);
    static uObject* TryInvoke(uObject* mi, uObject* obj, uArray* value);
};
// }

}}}}} // ::g::Outracks::Simulator::Reflection::Native
