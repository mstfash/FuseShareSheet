// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Reflection.Uno/0.0.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Signature;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeMemberName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{template<class T>struct Optional1;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public abstract interface IReflection :30
// {
uInterfaceType* IReflection_typeof();

struct IReflection
{
    void(*fp_AddEventHandler)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject*);
    void(*fp_CallDynamic)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uArray*, uObject**);
    void(*fp_CallStatic)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uArray*, uObject**);
    void(*fp_CreateDelegate)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> >*, uObject**);
    void(*fp_GetEnumValue)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject**);
    void(*fp_GetPropertyValue)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject**);
    void(*fp_GetStaticPropertyOrFieldValue)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject**);
    void(*fp_Instantiate)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, uArray*, uObject**);
    void(*fp_IsSubtype)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, bool*);
    void(*fp_IsType)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, bool*);
    void(*fp_RemoveEventHandler)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject*);
    void(*fp_SetPropertyValue)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject*);
    static void AddEventHandler(const uInterface& __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate) { __this.VTable<IReflection>()->fp_AddEventHandler(__this, instance, member, handlerDelegate); }
    static uObject* CallDynamic(const uInterface& __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments) { uObject* __retval; return __this.VTable<IReflection>()->fp_CallDynamic(__this, instance, methodName, arguments, &__retval), __retval; }
    static uObject* CallStatic(const uInterface& __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments) { uObject* __retval; return __this.VTable<IReflection>()->fp_CallStatic(__this, typeName, methodName, arguments, &__retval), __retval; }
    static uObject* CreateDelegate(const uInterface& __this, ::g::Outracks::Simulator::Bytecode::TypeName* delegateType, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> > methodSignature);
    static uObject* GetEnumValue(const uInterface& __this, ::g::Outracks::Simulator::Bytecode::TypeName* enumType, ::g::Outracks::Simulator::Bytecode::TypeMemberName* valueName) { uObject* __retval; return __this.VTable<IReflection>()->fp_GetEnumValue(__this, enumType, valueName, &__retval), __retval; }
    static uObject* GetPropertyValue(const uInterface& __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName) { uObject* __retval; return __this.VTable<IReflection>()->fp_GetPropertyValue(__this, instance, propertyName, &__retval), __retval; }
    static uObject* GetStaticPropertyOrFieldValue(const uInterface& __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName) { uObject* __retval; return __this.VTable<IReflection>()->fp_GetStaticPropertyOrFieldValue(__this, typeName, memberName, &__retval), __retval; }
    static uObject* Instantiate(const uInterface& __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, uArray* args) { uObject* __retval; return __this.VTable<IReflection>()->fp_Instantiate(__this, typeName, args, &__retval), __retval; }
    static bool IsSubtype(const uInterface& __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName) { bool __retval; return __this.VTable<IReflection>()->fp_IsSubtype(__this, obj, typeName, &__retval), __retval; }
    static bool IsType(const uInterface& __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName) { bool __retval; return __this.VTable<IReflection>()->fp_IsType(__this, obj, typeName, &__retval), __retval; }
    static void RemoveEventHandler(const uInterface& __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate) { __this.VTable<IReflection>()->fp_RemoveEventHandler(__this, instance, member, handlerDelegate); }
    static void SetPropertyValue(const uInterface& __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uObject* value) { __this.VTable<IReflection>()->fp_SetPropertyValue(__this, instance, propertyName, value); }
};

}}}} // ::g::Outracks::Simulator::Runtime

#include <Outracks.Simulator.Bytecode.Optional-1.h>
#include <Outracks.Simulator.Bytecode.Signature.h>

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

inline uObject* IReflection::CreateDelegate(const uInterface& __this, ::g::Outracks::Simulator::Bytecode::TypeName* delegateType, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> > methodSignature) { uObject* __retval; return __this.VTable<IReflection>()->fp_CreateDelegate(__this, delegateType, instance, methodName, &methodSignature, &__retval), __retval; }
// }

}}}} // ::g::Outracks::Simulator::Runtime
