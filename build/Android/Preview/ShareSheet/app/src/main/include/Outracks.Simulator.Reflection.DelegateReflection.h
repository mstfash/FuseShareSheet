// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Reflection.Uno/0.0.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Runtime.IReflection.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Parameter;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Signature;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeMemberName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{template<class T>struct Optional1;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{struct DelegateReflection;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Reflection{

// public sealed class DelegateReflection :63
// {
struct DelegateReflection_type : uType
{
    ::g::Outracks::Simulator::Runtime::IReflection interface0;
};

DelegateReflection_type* DelegateReflection_typeof();
void DelegateReflection__ctor__fn(DelegateReflection* __this);
void DelegateReflection__New1_fn(DelegateReflection** __retval);
void DelegateReflection__OutracksSimulatorRuntimeIReflectionAddEventHandler_fn(DelegateReflection* __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate);
void DelegateReflection__OutracksSimulatorRuntimeIReflectionCallDynamic_fn(DelegateReflection* __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments, uObject** __retval);
void DelegateReflection__OutracksSimulatorRuntimeIReflectionCallStatic_fn(DelegateReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments, uObject** __retval);
void DelegateReflection__OutracksSimulatorRuntimeIReflectionCreateDelegate_fn(DelegateReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* delegateType, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> >* methodSignature, uObject** __retval);
void DelegateReflection__OutracksSimulatorRuntimeIReflectionGetEnumValue_fn(DelegateReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* enumType, ::g::Outracks::Simulator::Bytecode::TypeMemberName* valueName, uObject** __retval);
void DelegateReflection__OutracksSimulatorRuntimeIReflectionGetPropertyValue_fn(DelegateReflection* __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uObject** __retval);
void DelegateReflection__OutracksSimulatorRuntimeIReflectionGetStaticPropertyOrFieldValue_fn(DelegateReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, uObject** __retval);
void DelegateReflection__OutracksSimulatorRuntimeIReflectionInstantiate_fn(DelegateReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, uArray* args, uObject** __retval);
void DelegateReflection__OutracksSimulatorRuntimeIReflectionIsSubtype_fn(DelegateReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, bool* __retval);
void DelegateReflection__OutracksSimulatorRuntimeIReflectionIsType_fn(DelegateReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, bool* __retval);
void DelegateReflection__OutracksSimulatorRuntimeIReflectionRemoveEventHandler_fn(DelegateReflection* __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate);
void DelegateReflection__OutracksSimulatorRuntimeIReflectionSetPropertyValue_fn(DelegateReflection* __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uObject* value);
void DelegateReflection__SelectFullName_fn(::g::Outracks::Simulator::Bytecode::Parameter* tn, uString** __retval);

struct DelegateReflection : uObject
{
    uStrong<uDelegate*> AddEventHandler;
    uStrong<uDelegate*> CallDynamic;
    uStrong<uDelegate*> CallStatic;
    uStrong<uDelegate*> CreateDelegate;
    uStrong<uDelegate*> GetEnumValue;
    uStrong<uDelegate*> GetPropertyValue;
    uStrong<uDelegate*> GetStaticPropertyOrFieldValue;
    uStrong<uDelegate*> Instantiate;
    uStrong<uDelegate*> IsSubtype;
    uStrong<uDelegate*> IsType;
    uStrong<uDelegate*> RemoveEventHandler;
    uStrong<uDelegate*> SetPropertyValue;

    void ctor_();
    static DelegateReflection* New1();
    static uString* SelectFullName(::g::Outracks::Simulator::Bytecode::Parameter* tn);
};
// }

}}}} // ::g::Outracks::Simulator::Reflection
